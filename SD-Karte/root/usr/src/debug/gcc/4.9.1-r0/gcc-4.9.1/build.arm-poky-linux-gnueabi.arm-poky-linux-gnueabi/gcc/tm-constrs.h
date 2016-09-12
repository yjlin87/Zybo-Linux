/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_j (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (
#line 69 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_arch_thumb2)) && ((GET_CODE (op) == HIGH) || ((GET_CODE (op) == CONST_INT) && (
#line 72 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
((ival & 0xffff0000) == 0))));
}
static inline bool
satisfies_constraint_Pj (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 77 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 78 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
((ival & 0xfffff000) == 0)));
}
static inline bool
satisfies_constraint_PJ (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 83 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 84 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(((-ival) & 0xfffff000) == 0)));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 107 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (ival)
		   : ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 114 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? (ival >= -4095 && ival <= 4095)
		   : (ival >= -255 && ival <= -1)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 122 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (~ival)
		   : thumb_shiftable_const (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 129 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (-ival)
		   : (ival >= -7 && ival <= 7)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 138 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? ((ival >= 0 && ival <= 32)
				 || (((ival & (ival - 1)) & 0xFFFFFFFF) == 0))
		   : ival >= 0 && ival <= 1020 && (ival & 3) == 0));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 145 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(!TARGET_32BIT && (ival >= 0 && ival <= 31)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 151 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -508 && ival <= 508
		   && ((ival & 3) == 0)));
}
static inline bool
satisfies_constraint_Pa (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 157 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -510 && ival <= 510
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pb (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 163 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -262 && ival <= 262
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pc (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 169 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB1
  		    && ival > 1020 && ival <= 1275));
}
static inline bool
satisfies_constraint_Pd (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 175 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB && ival >= 0 && ival <= 7));
}
static inline bool
satisfies_constraint_Pe (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 180 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= 256 && ival <= 510));
}
static inline bool
satisfies_constraint_Ps (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 185 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 255));
}
static inline bool
satisfies_constraint_Pt (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 190 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= 7));
}
static inline bool
satisfies_constraint_Pu (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 195 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 1 && ival <= 8));
}
static inline bool
satisfies_constraint_Pv (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 200 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 0));
}
static inline bool
satisfies_constraint_Pw (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 205 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= -1));
}
static inline bool
satisfies_constraint_Px (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 210 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= -1));
}
static inline bool
satisfies_constraint_Py (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 215 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_Pz (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 220 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && (ival == 0)));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 225 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dz (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 231 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_NEON && op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_Da (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 238 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 2);
}
static inline bool
satisfies_constraint_Db (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 245 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 3);
}
static inline bool
satisfies_constraint_Dc (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 253 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 4
		   && !(optimize_size || arm_ld_sched));
}
static inline bool
satisfies_constraint_Dd (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 260 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && const_ok_for_dimode_op (ival, PLUS)));
}
static inline bool
satisfies_constraint_De (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 266 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && const_ok_for_dimode_op (ival, AND)));
}
static inline bool
satisfies_constraint_Df (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 272 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && const_ok_for_dimode_op (ival, IOR)));
}
static inline bool
satisfies_constraint_Dg (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 278 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && const_ok_for_dimode_op (ival, XOR)));
}
static inline bool
satisfies_constraint_Di (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return 
#line 285 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_by_immediates (op));
}
static inline bool
satisfies_constraint_Dn (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_VECTOR:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return 
#line 292 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_mov_operand (op, GET_MODE (op)));
}
static inline bool
satisfies_constraint_Dl (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 300 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_DL (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 308 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_inv_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Do (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 315 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_LDRD && offset_ok_for_ldrd_strd (ival)));
}
static inline bool
satisfies_constraint_Dv (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 322 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dy (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 329 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && TARGET_VFP_DOUBLE && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dt (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 335 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && TARGET_VFP && vfp3_const_double_for_fract_bits (op)));
}
static inline bool
satisfies_constraint_Dp (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 341 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && TARGET_VFP && vfp3_const_double_for_bits (op)));
}
static inline bool
satisfies_constraint_Ua (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return mem_noofs_operand (op, mode);
}
static inline bool
satisfies_constraint_Ut (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 356 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_struct_mem_operand (op)));
}
static inline bool
satisfies_constraint_Uv (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 362 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, FALSE)));
}
static inline bool
satisfies_constraint_Uy (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 368 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, TRUE)));
}
static inline bool
satisfies_constraint_Un (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 375 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 0, true)));
}
static inline bool
satisfies_constraint_Um (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 382 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 2, true)));
}
static inline bool
satisfies_constraint_Us (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 389 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 1, true)));
}
static inline bool
satisfies_constraint_Uq (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 395 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_ARM
		   && arm_legitimate_address_outer_p (GET_MODE (op), XEXP (op, 0),
						      SIGN_EXTEND, 0)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 403 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(REG_P (XEXP (op, 0))));
}
static inline bool
satisfies_constraint_Uu (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 409 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB
		   && thumb1_legitimate_address_p (GET_MODE (op), XEXP (op, 0),
						   0)));
}
static inline bool
satisfies_constraint_Uw (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 421 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/constraints.md"
(TARGET_THUMB
		   && thumb1_legitimate_address_p (GET_MODE (op), XEXP (op, 0),
						   0)
		   && GET_CODE (XEXP (op, 0)) != POST_INC));
}
static inline bool
satisfies_constraint_US (rtx op)
{
  return GET_CODE (op) == SYMBOL_REF;
}
#endif /* tm-constrs.h */
