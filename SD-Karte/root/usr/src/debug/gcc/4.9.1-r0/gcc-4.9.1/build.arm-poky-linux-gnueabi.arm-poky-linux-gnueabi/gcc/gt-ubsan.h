/* Type information for ubsan.c.
   Copyright (C) 2004-2014 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_tree_type_map (void *x_p)
{
  struct tree_type_map * const x = (struct tree_type_map *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).type.from);
      gt_ggc_m_9tree_node ((*x).decl);
    }
}

void
gt_ggc_m_P13tree_type_map4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t l0 = (size_t)(((*x)).size);
        if ((*x).entries != NULL) {
          size_t i0;
          for (i0 = 0; i0 != (size_t)(l0); i0++) {
            gt_ggc_m_13tree_type_map ((*x).entries[i0]);
          }
          ggc_mark ((*x).entries);
        }
      }
    }
}

void
gt_pch_nx_tree_type_map (void *x_p)
{
  struct tree_type_map * const x = (struct tree_type_map *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_13tree_type_map))
    {
      gt_pch_n_9tree_node ((*x).type.from);
      gt_pch_n_9tree_node ((*x).decl);
    }
}

void
gt_pch_n_P13tree_type_map4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P13tree_type_map4htab))
    {
      {
        size_t l0 = (size_t)(((*x)).size);
        if ((*x).entries != NULL) {
          size_t i0;
          for (i0 = 0; i0 != (size_t)(l0); i0++) {
            gt_pch_n_13tree_type_map ((*x).entries[i0]);
          }
          gt_pch_note_object ((*x).entries, x, gt_pch_p_P13tree_type_map4htab);
        }
      }
    }
}

void
gt_pch_p_13tree_type_map (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct tree_type_map * x ATTRIBUTE_UNUSED = (struct tree_type_map *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).type.from), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
}

void
gt_pch_p_P13tree_type_map4htab (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct htab * x ATTRIBUTE_UNUSED = (struct htab *)x_p;
  {
    size_t l0 = (size_t)(((*x)).size);
    if ((*x).entries != NULL) {
      size_t i0;
      for (i0 = 0; i0 != (size_t)(l0) && ((void *)(*x).entries == this_obj); i0++) {
        if ((void *)((*x).entries) == this_obj)
          op (&((*x).entries[i0]), cookie);
      }
      if ((void *)(x) == this_obj)
        op (&((*x).entries), cookie);
    }
  }
}

/* GC roots.  */

EXPORTED_CONST struct ggc_cache_tab gt_ggc_rc_gt_ubsan_h[] = {
  {
    &decl_tree_for_type,
    1,
    sizeof (decl_tree_for_type),
    &gt_ggc_mx_tree_type_map,
    &gt_pch_nx_tree_type_map,
    &tree_type_map_marked_p
  },
  LAST_GGC_CACHE_TAB
};

EXPORTED_CONST struct ggc_root_tab gt_pch_rc_gt_ubsan_h[] = {
  {
    &decl_tree_for_type,
    1,
    sizeof (decl_tree_for_type),
    &gt_ggc_m_P13tree_type_map4htab,
    &gt_pch_n_P13tree_type_map4htab
  },
  LAST_GGC_ROOT_TAB
};

