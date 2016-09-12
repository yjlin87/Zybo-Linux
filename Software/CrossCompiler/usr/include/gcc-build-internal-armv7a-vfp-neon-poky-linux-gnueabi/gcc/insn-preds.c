/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"

static inline int
s_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 23 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);
  /* We don't consider registers whose class is NO_REGS
     to be a register operand.  */
  /* XXX might have to check for lo regs only for thumb ??? */
  return (REG_P (op)
	  && (REGNO (op) >= FIRST_PSEUDO_REGISTER
	      || REGNO_REG_CLASS (REGNO (op)) != NO_REGS));
}

int
s_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(s_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
arm_hard_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 37 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  return REGNO (op) < FIRST_PSEUDO_REGISTER;
}

int
arm_hard_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
(arm_hard_register_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
low_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 44 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(REGNO (op) <= LAST_LO_REGNUM))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
low_reg_or_int_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) || (low_register_operand (op, mode));
}

static inline int
arm_general_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 54 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  return (REG_P (op)
	  && (REGNO (op) <= LAST_ARM_REGNUM
	      || REGNO (op) >= FIRST_PSEUDO_REGISTER));
}

int
arm_general_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(arm_general_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
vfp_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 65 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  /* We don't consider registers whose class is NO_REGS
     to be a register operand.  */
  return (REG_P (op)
	  && (REGNO (op) >= FIRST_PSEUDO_REGISTER
	      || REGNO_REG_CLASS (REGNO (op)) == VFP_D0_D7_REGS
	      || REGNO_REG_CLASS (REGNO (op)) == VFP_LO_REGS
	      || (TARGET_VFPD32
		  && REGNO_REG_CLASS (REGNO (op)) == VFP_REGS)));
}

int
vfp_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(vfp_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
zero_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 81 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(op == CONST0_RTX (mode));
}

int
reg_or_zero_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (zero_operand (op, mode));
}

int
subreg_lowpart_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SUBREG) && (
#line 90 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(subreg_lowpart_p (op)));
}

int
reg_or_int_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) || (s_register_operand (op, mode));
}

int
arm_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 99 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(const_ok_for_arm (INTVAL (op))));
}

int
arm_immediate_di_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
      break;
    default:
      return false;
    }
  return 
#line 105 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(arm_const_double_by_immediates (op));
}

int
arm_neg_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(const_ok_for_arm (-INTVAL (op))));
}

int
arm_not_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 113 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(const_ok_for_arm (~INTVAL (op))));
}

int
const0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(INTVAL (op) == 0));
}

int
arm_rhs_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (arm_immediate_operand (op, mode));
}

int
arm_rhsm_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_rhs_operand (op, mode)) || (memory_operand (op, mode));
}

int
shift_amount_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 131 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(TARGET_ARM)) && (s_register_operand (op, mode))) || (const_int_operand (op, mode));
}

int
const_neon_scalar_shift_amount_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 137 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(((unsigned HOST_WIDE_INT) INTVAL (op)) <= GET_MODE_BITSIZE (mode)
	&& ((unsigned HOST_WIDE_INT) INTVAL (op)) > 0));
}

int
ldrd_strd_offset_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_int_operand (op, mode)) && (
#line 142 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(TARGET_LDRD && offset_ok_for_ldrd_strd (INTVAL (op))));
}

int
arm_add_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_rhs_operand (op, mode)) || (arm_neg_immediate_operand (op, mode));
}

int
arm_adddi_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 151 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(const_ok_for_dimode_op (INTVAL (op), PLUS))));
}

int
arm_addimm_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_immediate_operand (op, mode)) || (arm_neg_immediate_operand (op, mode));
}

int
arm_not_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_rhs_operand (op, mode)) || (arm_not_immediate_operand (op, mode));
}

int
arm_di_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (arm_immediate_di_operand (op, mode));
}

int
offsettable_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 170 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(offsettable_address_p (reload_completed | reload_in_progress,
				mode, XEXP (op, 0))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
call_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == MEM) && ((
#line 177 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(GET_RTX_CLASS (GET_CODE (XEXP (op, 0)))
			 != RTX_AUTOINC)) && (memory_operand (op, mode)));
}

int
arm_reload_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case MEM:
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
#line 183 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
((!CONSTANT_P (op)
		     && (true_regnum(op) == -1
			 || (REG_P (op)
			     && REGNO (op) >= FIRST_PSEUDO_REGISTER))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
vfp_compare_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || ((GET_CODE (op) == CONST_DOUBLE) && (
#line 191 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(arm_const_double_rtx (op))));
}

int
arm_float_compare_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 194 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(TARGET_VFP)) ? (vfp_compare_operand (op, mode)) : (s_register_operand (op, mode));
}

int
index_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || ((immediate_operand (op, mode)) && (
#line 202 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
((!CONST_INT_P (op)
			  || (INTVAL (op) < 4096 && INTVAL (op) > -4096)))));
}

int
shiftable_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case IOR:
    case XOR:
    case AND:
      break;
    default:
      return false;
    }
  return 
#line 208 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(mode == GET_MODE (op));
}

int
logical_binary_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case IOR:
    case XOR:
    case AND:
      break;
    default:
      return false;
    }
  return 
#line 213 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(mode == GET_MODE (op));
}

int
commutative_binary_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case IOR:
    case XOR:
    case AND:
    case PLUS:
      break;
    default:
      return false;
    }
  return 
#line 218 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(mode == GET_MODE (op));
}

int
shift_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((((GET_CODE (op) == MULT) && (
#line 228 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(power_of_two_operand (XEXP (op, 1), mode)))) || ((GET_CODE (op) == ROTATE) && (
#line 230 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(CONST_INT_P (XEXP (op, 1))
				   && ((unsigned HOST_WIDE_INT) INTVAL (XEXP (op, 1))) < 32)))) || ((GET_CODE (op) == ASHIFT || GET_CODE (op) == ASHIFTRT || GET_CODE (op) == LSHIFTRT || GET_CODE (op) == ROTATERT) && (
#line 233 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(!CONST_INT_P (XEXP (op, 1))
			      || ((unsigned HOST_WIDE_INT) INTVAL (XEXP (op, 1))) < 32)))) && (
#line 235 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(mode == GET_MODE (op)));
}

int
sat_shift_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == MULT) && (
#line 240 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(power_of_two_operand (XEXP (op, 1), mode)))) || ((GET_CODE (op) == ASHIFT || GET_CODE (op) == ASHIFTRT) && (
#line 242 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(CONST_INT_P (XEXP (op, 1))
		              && ((unsigned HOST_WIDE_INT) INTVAL (XEXP (op, 1)) < 32))))) && (
#line 244 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(mode == GET_MODE (op)));
}

int
mult_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return GET_CODE (op) == MULT;
}

int
thumb_16bit_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      return true;
    default:
      break;
    }
  return false;
}

int
equality_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      return true;
    default:
      break;
    }
  return false;
}

int
expandable_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNLE:
    case UNGE:
    case UNGT:
      return true;
    default:
      break;
    }
  return false;
}

int
arm_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (expandable_comparison_operator (op, mode)) && (
#line 268 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(maybe_get_arm_condition_code (op) != ARM_NV));
}

int
lt_ge_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LT:
    case GE:
      return true;
    default:
      break;
    }
  return false;
}

int
noov_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LT:
    case GE:
    case EQ:
    case NE:
      return true;
    default:
      break;
    }
  return false;
}

int
minmax_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
      break;
    default:
      return false;
    }
  return 
#line 278 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(mode == GET_MODE (op));
}

int
cc_register (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) && ((
#line 282 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(REGNO (op) == CC_REGNUM)) && ((
#line 283 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(mode == GET_MODE (op))) || (
#line 284 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(mode == VOIDmode && GET_MODE_CLASS (GET_MODE (op)) == MODE_CC))));
}

static inline int
dominant_cc_register_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 288 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  if (mode == VOIDmode)
    {
      mode = GET_MODE (op);
      
      if (GET_MODE_CLASS (mode) != MODE_CC)
	return false;
    }

  return (cc_register (op, mode)
	  && (mode == CC_DNEmode
	     || mode == CC_DEQmode
	     || mode == CC_DLEmode
	     || mode == CC_DLTmode
	     || mode == CC_DGEmode
	     || mode == CC_DGTmode
	     || mode == CC_DLEUmode
	     || mode == CC_DLTUmode
	     || mode == CC_DGEUmode
	     || mode == CC_DGTUmode));
}

int
dominant_cc_register (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) && (
(dominant_cc_register_1 (op, mode)));
}

int
arm_extendqisi_mem_op (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
#line 312 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(TARGET_ARM ? arm_legitimate_address_outer_p (mode,
                                                                 XEXP (op, 0),
						                 SIGN_EXTEND,
								 0)
                               : memory_address_p (QImode, XEXP (op, 0))));
}

int
arm_reg_or_extendqisi_mem_op (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_extendqisi_mem_op (op, mode)) || (s_register_operand (op, mode));
}

static inline int
power_of_two_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 324 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  unsigned HOST_WIDE_INT value = INTVAL (op) & 0xffffffff;

  return value != 0 && (value & (value - 1)) == 0;
}

int
power_of_two_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(power_of_two_operand_1 (op, mode)));
}

static inline int
nonimmediate_di_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 332 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
   if (s_register_operand (op, mode))
     return true;

   if (GET_CODE (op) == SUBREG)
     op = SUBREG_REG (op);

   return MEM_P (op) && memory_address_p (DImode, XEXP (op, 0));
}

int
nonimmediate_di_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(nonimmediate_di_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
di_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
      return true;
    default:
      break;
    }
  return (GET_CODE (op) == REG || GET_CODE (op) == SUBREG || GET_CODE (op) == MEM) && (nonimmediate_di_operand (op, mode));
}

static inline int
nonimmediate_soft_df_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 349 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  if (s_register_operand (op, mode))
    return true;

  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  return MEM_P (op) && memory_address_p (DFmode, XEXP (op, 0));
}

int
nonimmediate_soft_df_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(nonimmediate_soft_df_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
soft_df_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_DOUBLE) || ((GET_CODE (op) == REG || GET_CODE (op) == SUBREG || GET_CODE (op) == MEM) && (nonimmediate_soft_df_operand (op, mode)));
}

static inline int
load_multiple_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 366 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
 return ldm_stm_operation_p (op, /*load=*/true, SImode,
                                 /*consecutive=*/false,
                                 /*return_pc=*/false);
}

int
load_multiple_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(load_multiple_operation_1 (op, mode)));
}

static inline int
store_multiple_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 374 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
 return ldm_stm_operation_p (op, /*load=*/false, SImode,
                                 /*consecutive=*/false,
                                 /*return_pc=*/false);
}

int
store_multiple_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(store_multiple_operation_1 (op, mode)));
}

static inline int
pop_multiple_return_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 382 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
 return ldm_stm_operation_p (op, /*load=*/true, SImode,
                                 /*consecutive=*/false,
                                 /*return_pc=*/true);
}

int
pop_multiple_return (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(pop_multiple_return_1 (op, mode)));
}

static inline int
pop_multiple_fp_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 390 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
 return ldm_stm_operation_p (op, /*load=*/true, DFmode,
                                 /*consecutive=*/true,
                                 /*return_pc=*/false);
}

int
pop_multiple_fp (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(pop_multiple_fp_1 (op, mode)));
}

static inline int
multi_register_push_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 398 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  if ((GET_CODE (XVECEXP (op, 0, 0)) != SET)
      || (GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != UNSPEC)
      || (XINT (SET_SRC (XVECEXP (op, 0, 0)), 1) != UNSPEC_PUSH_MULT))
    return false;

  return true;
}

int
multi_register_push (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(multi_register_push_1 (op, mode)));
}

static inline int
push_mult_memory_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 409 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  /* ??? Given how PUSH_MULT is generated in the prologues, is there
     any point in testing for thumb1 specially?  All of the variants
     use the same form.  */
  if (TARGET_THUMB1)
    {
      /* ??? No attempt is made to represent STMIA, or validate that
	 the stack adjustment matches the register count.  This is
	 true of the ARM/Thumb2 path as well.  */
      rtx x = XEXP (op, 0);
      if (GET_CODE (x) != PRE_MODIFY)
	return false;
      if (XEXP (x, 0) != stack_pointer_rtx)
	return false;
      x = XEXP (x, 1);
      if (GET_CODE (x) != PLUS)
	return false;
      if (XEXP (x, 0) != stack_pointer_rtx)
	return false;
      return CONST_INT_P (XEXP (x, 1));
    }

  /* ARM and Thumb2 handle pre-modify in their legitimate_address.  */
  return memory_operand (op, mode);
}

int
push_mult_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(push_mult_memory_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
thumb1_cmp_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG || GET_CODE (op) == SUBREG) && (s_register_operand (op, mode))) || ((GET_CODE (op) == CONST_INT) && (
#line 444 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(((unsigned HOST_WIDE_INT) INTVAL (op)) < 256)));
}

int
thumb1_cmpneg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 448 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(INTVAL (op) < 0 && INTVAL (op) > -256));
}

int
thumb_cbrch_target_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (s_register_operand (op, mode)) || ((
#line 462 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(reload_in_progress || reload_completed)) && (memory_operand (op, mode)));
}

int
imm_or_reg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (immediate_operand (op, mode)) || (register_operand (op, mode));
}

static inline int
const_multiple_of_8_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 478 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  unsigned HOST_WIDE_INT val = INTVAL (op);
  return (val & 7) == 0;
}

int
const_multiple_of_8_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_multiple_of_8_operand_1 (op, mode)));
}

static inline int
imm_for_neon_mov_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 485 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  return neon_immediate_valid_for_move (op, mode, NULL, NULL);
}

int
imm_for_neon_mov_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
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
(imm_for_neon_mov_operand_1 (op, mode));
}

static inline int
imm_for_neon_lshift_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 491 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  return neon_immediate_valid_for_shift (op, mode, NULL, NULL, true);
}

int
imm_for_neon_lshift_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(imm_for_neon_lshift_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
imm_for_neon_rshift_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 497 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  return neon_immediate_valid_for_shift (op, mode, NULL, NULL, false);
}

int
imm_for_neon_rshift_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(imm_for_neon_rshift_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
imm_lshift_or_reg_neon (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (imm_for_neon_lshift_operand (op, mode));
}

int
imm_rshift_or_reg_neon (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (imm_for_neon_rshift_operand (op, mode));
}

static inline int
imm_for_neon_logic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 511 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  return (TARGET_NEON
          && neon_immediate_valid_for_logic (op, mode, 0, NULL, NULL));
}

int
imm_for_neon_logic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(imm_for_neon_logic_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
imm_for_neon_inv_logic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 518 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  return (TARGET_NEON
          && neon_immediate_valid_for_logic (op, mode, 1, NULL, NULL));
}

int
imm_for_neon_inv_logic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(imm_for_neon_inv_logic_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
neon_logic_op2 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (imm_for_neon_logic_operand (op, mode)) || (s_register_operand (op, mode));
}

int
neon_inv_logic_op2 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (imm_for_neon_inv_logic_operand (op, mode)) || (s_register_operand (op, mode));
}

int
cmpdi_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 534 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(TARGET_32BIT)) && (arm_di_operand (op, mode));
}

int
arm_sync_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (GET_CODE (XEXP (op, 0)) == REG);
}

static inline int
vect_par_constant_high_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 545 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  HOST_WIDE_INT count = XVECLEN (op, 0);
  int i;
  int base = GET_MODE_NUNITS (mode);

  if ((count < 1)
      || (count != base/2))
    return false;
    
  if (!VECTOR_MODE_P (mode))
    return false;

  for (i = 0; i < count; i++)
   {
     rtx elt = XVECEXP (op, 0, i);
     int val;

     if (!CONST_INT_P (elt))
       return false;

     val = INTVAL (elt);
     if (val != (base/2) + i)
       return false;
   }
  return true; 
}

int
vect_par_constant_high (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(vect_par_constant_high_1 (op, mode)));
}

static inline int
vect_par_constant_low_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 574 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
{
  HOST_WIDE_INT count = XVECLEN (op, 0);
  int i;
  int base = GET_MODE_NUNITS (mode);

  if ((count < 1)
      || (count != base/2))
    return false;
    
  if (!VECTOR_MODE_P (mode))
    return false;

  for (i = 0; i < count; i++)
   {
     rtx elt = XVECEXP (op, 0, i);
     int val;

     if (!CONST_INT_P (elt))
       return false;

     val = INTVAL (elt);
     if (val != i)
       return false;
   } 
  return true; 
}

int
vect_par_constant_low (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(vect_par_constant_low_1 (op, mode)));
}

int
const_double_vcvt_power_of_two_reciprocal (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 603 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(TARGET_32BIT && TARGET_VFP 
       		   && vfp3_const_double_for_fract_bits (op)));
}

int
neon_struct_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 608 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/predicates.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 2)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
neon_struct_or_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (neon_struct_operand (op, mode)) || (s_register_operand (op, mode));
}

int
add_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return GET_CODE (op) == PLUS;
}

int
mem_noofs_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (GET_CODE (XEXP (op, 0)) == REG)) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

enum constraint_num
lookup_constraint (const char *str)
{
  switch (str[0])
    {
    case 'D':
      if (!strncmp (str + 1, "a", 1))
        return CONSTRAINT_Da;
      if (!strncmp (str + 1, "b", 1))
        return CONSTRAINT_Db;
      if (!strncmp (str + 1, "c", 1))
        return CONSTRAINT_Dc;
      if (!strncmp (str + 1, "d", 1))
        return CONSTRAINT_Dd;
      if (!strncmp (str + 1, "i", 1))
        return CONSTRAINT_Di;
      if (!strncmp (str + 1, "n", 1))
        return CONSTRAINT_Dn;
      if (!strncmp (str + 1, "l", 1))
        return CONSTRAINT_Dl;
      if (!strncmp (str + 1, "L", 1))
        return CONSTRAINT_DL;
      if (!strncmp (str + 1, "o", 1))
        return CONSTRAINT_Do;
      if (!strncmp (str + 1, "v", 1))
        return CONSTRAINT_Dv;
      if (!strncmp (str + 1, "y", 1))
        return CONSTRAINT_Dy;
      if (!strncmp (str + 1, "t", 1))
        return CONSTRAINT_Dt;
      if (!strncmp (str + 1, "z", 1))
        return CONSTRAINT_Dz;
      break;
    case 'G':
      return CONSTRAINT_G;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'P':
      if (!strncmp (str + 1, "J", 1))
        return CONSTRAINT_PJ;
      if (!strncmp (str + 1, "a", 1))
        return CONSTRAINT_Pa;
      if (!strncmp (str + 1, "b", 1))
        return CONSTRAINT_Pb;
      if (!strncmp (str + 1, "c", 1))
        return CONSTRAINT_Pc;
      if (!strncmp (str + 1, "d", 1))
        return CONSTRAINT_Pd;
      if (!strncmp (str + 1, "e", 1))
        return CONSTRAINT_Pe;
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_Ps;
      if (!strncmp (str + 1, "t", 1))
        return CONSTRAINT_Pt;
      if (!strncmp (str + 1, "u", 1))
        return CONSTRAINT_Pu;
      if (!strncmp (str + 1, "v", 1))
        return CONSTRAINT_Pv;
      if (!strncmp (str + 1, "w", 1))
        return CONSTRAINT_Pw;
      if (!strncmp (str + 1, "x", 1))
        return CONSTRAINT_Px;
      if (!strncmp (str + 1, "y", 1))
        return CONSTRAINT_Py;
      if (!strncmp (str + 1, "j", 1))
        return CONSTRAINT_Pj;
      break;
    case 'Q':
      return CONSTRAINT_Q;
    case 'U':
      if (!strncmp (str + 1, "t", 1))
        return CONSTRAINT_Ut;
      if (!strncmp (str + 1, "v", 1))
        return CONSTRAINT_Uv;
      if (!strncmp (str + 1, "y", 1))
        return CONSTRAINT_Uy;
      if (!strncmp (str + 1, "n", 1))
        return CONSTRAINT_Un;
      if (!strncmp (str + 1, "m", 1))
        return CONSTRAINT_Um;
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_Us;
      if (!strncmp (str + 1, "q", 1))
        return CONSTRAINT_Uq;
      if (!strncmp (str + 1, "u", 1))
        return CONSTRAINT_Uu;
      if (!strncmp (str + 1, "w", 1))
        return CONSTRAINT_Uw;
      if (!strncmp (str + 1, "a", 1))
        return CONSTRAINT_Ua;
      break;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'h':
      return CONSTRAINT_h;
    case 'j':
      return CONSTRAINT_j;
    case 'k':
      return CONSTRAINT_k;
    case 'l':
      return CONSTRAINT_l;
    case 't':
      return CONSTRAINT_t;
    case 'w':
      return CONSTRAINT_w;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    case 'z':
      return CONSTRAINT_z;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

enum reg_class
regclass_for_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_t: return TARGET_32BIT ? VFP_LO_REGS : NO_REGS;
    case CONSTRAINT_w: return TARGET_32BIT ? (TARGET_VFPD32 ? VFP_REGS : VFP_LO_REGS) : NO_REGS;
    case CONSTRAINT_x: return TARGET_32BIT ? VFP_D0_D7_REGS : NO_REGS;
    case CONSTRAINT_y: return TARGET_REALLY_IWMMXT ? IWMMXT_REGS : NO_REGS;
    case CONSTRAINT_z: return TARGET_REALLY_IWMMXT ? IWMMXT_GR_REGS : NO_REGS;
    case CONSTRAINT_l: return TARGET_THUMB ? LO_REGS : GENERAL_REGS;
    case CONSTRAINT_h: return TARGET_THUMB ? HI_REGS : NO_REGS;
    case CONSTRAINT_k: return STACK_REG;
    case CONSTRAINT_b: return TARGET_THUMB ? BASE_REGS : NO_REGS;
    case CONSTRAINT_c: return CC_REG;
    default: break;
    }
  return NO_REGS;
}

bool
constraint_satisfied_p (rtx op, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_j: return satisfies_constraint_j (op);
    case CONSTRAINT_Pj: return satisfies_constraint_Pj (op);
    case CONSTRAINT_PJ: return satisfies_constraint_PJ (op);
    case CONSTRAINT_I: return satisfies_constraint_I (op);
    case CONSTRAINT_J: return satisfies_constraint_J (op);
    case CONSTRAINT_K: return satisfies_constraint_K (op);
    case CONSTRAINT_L: return satisfies_constraint_L (op);
    case CONSTRAINT_M: return satisfies_constraint_M (op);
    case CONSTRAINT_N: return satisfies_constraint_N (op);
    case CONSTRAINT_O: return satisfies_constraint_O (op);
    case CONSTRAINT_Pa: return satisfies_constraint_Pa (op);
    case CONSTRAINT_Pb: return satisfies_constraint_Pb (op);
    case CONSTRAINT_Pc: return satisfies_constraint_Pc (op);
    case CONSTRAINT_Pd: return satisfies_constraint_Pd (op);
    case CONSTRAINT_Pe: return satisfies_constraint_Pe (op);
    case CONSTRAINT_Ps: return satisfies_constraint_Ps (op);
    case CONSTRAINT_Pt: return satisfies_constraint_Pt (op);
    case CONSTRAINT_Pu: return satisfies_constraint_Pu (op);
    case CONSTRAINT_Pv: return satisfies_constraint_Pv (op);
    case CONSTRAINT_Pw: return satisfies_constraint_Pw (op);
    case CONSTRAINT_Px: return satisfies_constraint_Px (op);
    case CONSTRAINT_Py: return satisfies_constraint_Py (op);
    case CONSTRAINT_G: return satisfies_constraint_G (op);
    case CONSTRAINT_Dz: return satisfies_constraint_Dz (op);
    case CONSTRAINT_Da: return satisfies_constraint_Da (op);
    case CONSTRAINT_Db: return satisfies_constraint_Db (op);
    case CONSTRAINT_Dc: return satisfies_constraint_Dc (op);
    case CONSTRAINT_Dd: return satisfies_constraint_Dd (op);
    case CONSTRAINT_Di: return satisfies_constraint_Di (op);
    case CONSTRAINT_Dn: return satisfies_constraint_Dn (op);
    case CONSTRAINT_Dl: return satisfies_constraint_Dl (op);
    case CONSTRAINT_DL: return satisfies_constraint_DL (op);
    case CONSTRAINT_Do: return satisfies_constraint_Do (op);
    case CONSTRAINT_Dv: return satisfies_constraint_Dv (op);
    case CONSTRAINT_Dy: return satisfies_constraint_Dy (op);
    case CONSTRAINT_Dt: return satisfies_constraint_Dt (op);
    case CONSTRAINT_Ua: return satisfies_constraint_Ua (op);
    case CONSTRAINT_Ut: return satisfies_constraint_Ut (op);
    case CONSTRAINT_Uv: return satisfies_constraint_Uv (op);
    case CONSTRAINT_Uy: return satisfies_constraint_Uy (op);
    case CONSTRAINT_Un: return satisfies_constraint_Un (op);
    case CONSTRAINT_Um: return satisfies_constraint_Um (op);
    case CONSTRAINT_Us: return satisfies_constraint_Us (op);
    case CONSTRAINT_Uq: return satisfies_constraint_Uq (op);
    case CONSTRAINT_Q: return satisfies_constraint_Q (op);
    case CONSTRAINT_Uu: return satisfies_constraint_Uu (op);
    case CONSTRAINT_Uw: return satisfies_constraint_Uw (op);
    default: break;
    }
  return false;
}

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_Pj:
      return (
#line 77 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 78 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
((ival & 0xfffff000) == 0));

    case CONSTRAINT_PJ:
      return (
#line 83 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 84 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(((-ival) & 0xfffff000) == 0));

    case CONSTRAINT_I:
      return 
#line 101 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (ival)
		   : ival >= 0 && ival <= 255);

    case CONSTRAINT_J:
      return 
#line 108 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_32BIT ? (ival >= -4095 && ival <= 4095)
		   : (ival >= -255 && ival <= -1));

    case CONSTRAINT_K:
      return 
#line 116 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (~ival)
		   : thumb_shiftable_const (ival));

    case CONSTRAINT_L:
      return 
#line 123 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (-ival)
		   : (ival >= -7 && ival <= 7));

    case CONSTRAINT_M:
      return 
#line 132 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_32BIT ? ((ival >= 0 && ival <= 32)
				 || (((ival & (ival - 1)) & 0xFFFFFFFF) == 0))
		   : ival >= 0 && ival <= 1020 && (ival & 3) == 0);

    case CONSTRAINT_N:
      return 
#line 139 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(!TARGET_32BIT && (ival >= 0 && ival <= 31));

    case CONSTRAINT_O:
      return 
#line 145 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -508 && ival <= 508
		   && ((ival & 3) == 0));

    case CONSTRAINT_Pa:
      return 
#line 151 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -510 && ival <= 510
		    && (ival > 255 || ival < -255));

    case CONSTRAINT_Pb:
      return 
#line 157 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -262 && ival <= 262
		    && (ival > 255 || ival < -255));

    case CONSTRAINT_Pc:
      return 
#line 163 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB1
  		    && ival > 1020 && ival <= 1275);

    case CONSTRAINT_Pd:
      return 
#line 169 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= 0 && ival <= 7);

    case CONSTRAINT_Pe:
      return 
#line 174 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= 256 && ival <= 510);

    case CONSTRAINT_Ps:
      return 
#line 179 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 255);

    case CONSTRAINT_Pt:
      return 
#line 184 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= 7);

    case CONSTRAINT_Pu:
      return 
#line 189 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 1 && ival <= 8);

    case CONSTRAINT_Pv:
      return 
#line 194 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 0);

    case CONSTRAINT_Pw:
      return 
#line 199 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= -1);

    case CONSTRAINT_Px:
      return 
#line 204 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= -1);

    case CONSTRAINT_Py:
      return 
#line 209 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 0 && ival <= 255);

    default: break;
    }
  return false;
}

bool
insn_extra_memory_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_Ua:
      return true;

    case CONSTRAINT_Ut:
      return true;

    case CONSTRAINT_Uv:
      return true;

    case CONSTRAINT_Uy:
      return true;

    case CONSTRAINT_Un:
      return true;

    case CONSTRAINT_Um:
      return true;

    case CONSTRAINT_Us:
      return true;

    case CONSTRAINT_Uq:
      return true;

    case CONSTRAINT_Q:
      return true;

    case CONSTRAINT_Uu:
      return true;

    case CONSTRAINT_Uw:
      return true;

    default: break;
    }
  return false;
}

