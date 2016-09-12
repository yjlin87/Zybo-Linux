/* Type information for cp/rtti.c.
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
gt_ggc_mx_vec_tinfo_s_va_gc_ (void *x_p)
{
  vec<tinfo_s,va_gc> * const x = (vec<tinfo_s,va_gc> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct tinfo_s& x_r ATTRIBUTE_UNUSED)
{
  struct tinfo_s * ATTRIBUTE_UNUSED x = &x_r;
  gt_ggc_m_9tree_node ((*x).type);
  gt_ggc_m_9tree_node ((*x).vtable);
  gt_ggc_m_9tree_node ((*x).name);
}

void
gt_pch_nx_vec_tinfo_s_va_gc_ (void *x_p)
{
  vec<tinfo_s,va_gc> * const x = (vec<tinfo_s,va_gc> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18vec_tinfo_s_va_gc_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct tinfo_s& x_r ATTRIBUTE_UNUSED)
{
  struct tinfo_s * ATTRIBUTE_UNUSED x = &x_r;
  gt_pch_n_9tree_node ((*x).type);
  gt_pch_n_9tree_node ((*x).vtable);
  gt_pch_n_9tree_node ((*x).name);
}

void
gt_pch_p_18vec_tinfo_s_va_gc_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vec<tinfo_s,va_gc> * x ATTRIBUTE_UNUSED = (struct vec<tinfo_s,va_gc> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct tinfo_s* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
    op (&((*x).type), cookie);
    op (&((*x).vtable), cookie);
    op (&((*x).name), cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_cp_rtti_h[] = {
  {
    &tinfo_descs,
    1,
    sizeof (tinfo_descs),
    &gt_ggc_mx_vec_tinfo_s_va_gc_,
    &gt_pch_nx_vec_tinfo_s_va_gc_
  },
  LAST_GGC_ROOT_TAB
};

