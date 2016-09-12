/*
 * libdpkg - Debian packaging suite library routines
 * tarfn.h - tar archive extraction functions
 *
 * Copyright © 1995 Bruce Perens
 * Copyright © 2009-2010 Guillem Jover <guillem@debian.org>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef LIBDPKG_TARFN_H
#define LIBDPKG_TARFN_H

#include <sys/types.h>

#include <dpkg/file.h>

/**
 * @defgroup tar Tar archive handling
 * @ingroup dpkg-public
 * @{
 */

#define TARBLKSZ	512

enum tar_format {
	tar_format_old,
	tar_format_gnu,
	tar_format_ustar,
	tar_format_pax,
};

enum tar_filetype {
	/** For compatibility with decades-old bug. */
	tar_filetype_file0 = '\0',
	tar_filetype_file = '0',
	tar_filetype_hardlink = '1',
	tar_filetype_symlink = '2',
	tar_filetype_chardev = '3',
	tar_filetype_blockdev = '4',
	tar_filetype_dir = '5',
	tar_filetype_fifo = '6',
	tar_filetype_gnu_longlink = 'K',
	tar_filetype_gnu_longname = 'L',
};

struct tar_entry {
	/** Tar archive format. */
	enum tar_format format;
	/** File type. */
	enum tar_filetype type;
	/** File name. */
	char *name;
	/** Symlink or hardlink name. */
	char *linkname;
	/** File size. */
	off_t size;
	/** Last-modified time. */
	time_t mtime;
	/** Special device for mknod(). */
	dev_t dev;

	struct file_stat stat;
};

typedef int tar_read_func(void *ctx, char *buffer, int length);
typedef int tar_make_func(void *ctx, struct tar_entry *h);

struct tar_operations {
	tar_read_func *read;

	tar_make_func *extract_file;
	tar_make_func *link;
	tar_make_func *symlink;
	tar_make_func *mkdir;
	tar_make_func *mknod;
};

int tar_extractor(void *ctx, const struct tar_operations *ops);

/** @} */

#endif
