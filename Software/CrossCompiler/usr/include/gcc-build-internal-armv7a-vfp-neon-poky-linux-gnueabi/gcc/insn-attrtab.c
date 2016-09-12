/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-attr.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 3221:  /* *p *arm_jump */
    case 238:  /* *arm_jump */
      extract_constrain_insn_cached (insn);
      if ((
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2)) && ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-2044)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (2048))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 778:  /* *thumb2_cbnz */
      extract_constrain_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0) - (insn_current_reference_address (insn))) >= (2)) && ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0) - (insn_current_reference_address (insn))) <= (128)) && (! (
#line 894 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"
(which_alternative)))))
        {
	  return 2;
        }
      else
        {
	  return 8;
        }

    case 777:  /* *thumb2_cbz */
      extract_constrain_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0) - (insn_current_reference_address (insn))) >= (2)) && ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0) - (insn_current_reference_address (insn))) <= (128)) && (! (
#line 894 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"
(which_alternative)))))
        {
	  return 2;
        }
      else
        {
	  return 8;
        }

    case 239:  /* *thumb_jump */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-2044)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 227:  /* *arm_cond_branch_reversed */
      extract_constrain_insn_cached (insn);
      if ((
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2)) && ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (256))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 226:  /* arm_cond_branch */
      extract_constrain_insn_cached (insn);
      if ((
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2)) && ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (256))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 216:  /* *addsi3_cbranch_scratch */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 215:  /* *addsi3_cbranch */
      extract_constrain_insn_cached (insn);
      if ((
#line 7464 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(which_alternative)) < (2))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 214:  /* *cbranchne_decr1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else if (which_alternative == 1)
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }
      else if (which_alternative == 2)
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 213:  /* *tstsi3_cbranch */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 212:  /* *tlobits_cbranch */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 211:  /* *tbit_cbranch */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 210:  /* *negated_cbranchsi4 */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 209:  /* cbranchsi4_scratch */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 208:  /* cbranchsi4_insn */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 3221:  /* *p *arm_jump */
    case 238:  /* *arm_jump */
    case 778:  /* *thumb2_cbnz */
    case 777:  /* *thumb2_cbz */
    case 239:  /* *thumb_jump */
    case 227:  /* *arm_cond_branch_reversed */
    case 226:  /* arm_cond_branch */
    case 216:  /* *addsi3_cbranch_scratch */
    case 215:  /* *addsi3_cbranch */
    case 214:  /* *cbranchne_decr1 */
    case 213:  /* *tstsi3_cbranch */
    case 212:  /* *tlobits_cbranch */
    case 211:  /* *tbit_cbranch */
    case 210:  /* *negated_cbranchsi4 */
    case 209:  /* cbranchsi4_scratch */
    case 208:  /* cbranchsi4_insn */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_min_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 932:  /* orndi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 8;
        }

    case 922:  /* anddi3_neon */
    case 912:  /* iordi3_neon */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 855:  /* subdi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 845:  /* adddi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 8;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 793:  /* *neon_movti */
    case 792:  /* *neon_movv2di */
    case 791:  /* *neon_movv4sf */
    case 790:  /* *neon_movv4si */
    case 789:  /* *neon_movv8hi */
    case 788:  /* *neon_movv16qi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 8;
        }
      else if (which_alternative == 6)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 7)
        {
	  return 8;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 753:  /* *thumb2_cond_move */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 746:  /* *thumb2_movsicc_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 740:  /* tls_load_dot_plus_four */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 6;
        }

    case 757:  /* *thumb2_movcond */
    case 735:  /* *thumb2_uminsi3 */
    case 734:  /* *thumb32_umaxsi3 */
    case 733:  /* *thumb2_sminsi3 */
    case 732:  /* *thumb2_smaxsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 14 /* 0xe */;
        }

    case 654:  /* *thumb2_movdfcc_vfp */
    case 652:  /* *thumb2_movsfcc_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 6;
        }
      else if (which_alternative == 2)
        {
	  return 10 /* 0xa */;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 6;
        }
      else if (which_alternative == 5)
        {
	  return 10 /* 0xa */;
        }
      else if (((1 << which_alternative) & 0xc0))
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 653:  /* *movdfcc_vfp */
    case 651:  /* *movsfcc_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0xc0))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 787:  /* *neon_movdi */
    case 786:  /* *neon_movv2sf */
    case 785:  /* *neon_movv2si */
    case 784:  /* *neon_movv4hi */
    case 783:  /* *neon_movv8qi */
    case 646:  /* *movhf_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 645:  /* *movhf_vfp_neon */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xff))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 3301:  /* *p movv8qi_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3299:  /* *p movv2si_internal */
    case 430:  /* movv8qi_internal */
    case 429:  /* movv4hi_internal */
    case 428:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 426:  /* *iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xff))
        {
	  return 4;
        }
      else if (which_alternative == 8)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 4;
        }

    case 283:  /* *cmp_ior */
    case 282:  /* *cmp_and */
    case 281:  /* *cmp_ite1 */
    case 280:  /* *cmp_ite0 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else if (((1 << which_alternative) & 0x1e))
        {
	  return 8;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_NO))))
	    {
	      return 8;
	    }
	  else
	    {
	      return 10 /* 0xa */;
	    }
        }

    case 3521:  /* *p *negdf2_vfp */
    case 658:  /* *negdf2_vfp */
    case 294:  /* *if_move_plus */
    case 292:  /* *if_plus_move */
    case 277:  /* *cond_move */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 236:  /* *movsicc_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 3219:  /* *p *arm_cmpsi_insn */
    case 773:  /* *thumb2_addsi3_compare0_scratch */
    case 772:  /* thumb2_addsi3_compare0 */
    case 353:  /* *arm_rev16 */
    case 352:  /* *arm_revsh */
    case 351:  /* *arm_rev */
    case 217:  /* *arm_cmpsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 214:  /* *cbranchne_decr1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 6;
        }

    case 205:  /* *thumb_movdf_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 3217:  /* *p *arm32_movhf */
    case 200:  /* *arm32_movhf */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 3216:  /* *p *arm_movqi_insn */
    case 198:  /* *arm_movqi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 195:  /* *thumb1_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 187:  /* *thumb1_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 184:  /* *thumb1_movdi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 204:  /* *movdf_soft_insn */
    case 183:  /* *arm_movdi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 2)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 8;
        }

    case 3196:  /* *p extendsidi2 */
    case 3195:  /* *p extendhidi2 */
    case 3194:  /* *p extendqidi2 */
    case 3193:  /* *p zero_extendsidi2 */
    case 3192:  /* *p zero_extendhidi2 */
    case 3191:  /* *p zero_extendqidi2 */
    case 163:  /* extendsidi2 */
    case 162:  /* extendhidi2 */
    case 161:  /* extendqidi2 */
    case 160:  /* zero_extendsidi2 */
    case 159:  /* zero_extendhidi2 */
    case 158:  /* zero_extendqidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 3188:  /* *p one_cmpldi2 */
    case 952:  /* xordi3_neon */
    case 153:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 290:  /* movcond */
    case 116:  /* *arm_uminsi3 */
    case 115:  /* *arm_umaxsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 3164:  /* *p *arm_xorsi3 */
    case 105:  /* *arm_xorsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 3159:  /* *p *iorsi3_insn */
    case 3143:  /* *p *arm_andsi3_insn */
    case 98:  /* *iorsi3_insn */
    case 76:  /* *arm_andsi3_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 38:  /* *thumb_mulsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 3114:  /* *p *arm_subsi3_insn */
    case 32:  /* *arm_subsi3_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 6:  /* *thumb1_addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 3108:  /* *p *arm_addsi3 */
    case 5:  /* *arm_addsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x7fe))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 3579:  /* *p *thumb2_neg_abssi2 */
    case 3578:  /* *p *thumb2_abssi2 */
    case 738:  /* *thumb2_neg_abssi2 */
    case 737:  /* *thumb2_abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 8;
        }

    case 3570:  /* *p *combine_vcvt_f64_s32 */
    case 3569:  /* *p *combine_vcvt_f64_u32 */
    case 3187:  /* *p *arm_neg_abssi2 */
    case 3186:  /* *p *arm_abssi2 */
    case 3166:  /* *p *andsi_iorsi3_notsi */
    case 3163:  /* *p *xordi_sesidi_di */
    case 3161:  /* *p *xordi3_insn */
    case 3158:  /* *p *iordi_sesidi_di */
    case 3156:  /* *p *iordi3_insn */
    case 3152:  /* *p *anddi_notsesidi_di */
    case 3148:  /* *p *anddi_notdi_di */
    case 1859:  /* vec_pack_trunc_v2di */
    case 1858:  /* vec_pack_trunc_v4si */
    case 1857:  /* vec_pack_trunc_v8hi */
    case 1667:  /* neon_vld1_dupv2di */
    case 1398:  /* neon_vdup_nv2di */
    case 978:  /* negdi2_neon */
    case 736:  /* *thumb2_negdi2 */
    case 711:  /* *combine_vcvt_f64_s32 */
    case 710:  /* *combine_vcvt_f64_u32 */
    case 338:  /* consttable_8 */
    case 323:  /* *sign_extract_onebit */
    case 320:  /* prologue_thumb1_interwork */
    case 314:  /* *if_arith_not */
    case 312:  /* *if_not_arith */
    case 310:  /* *if_shift_shift */
    case 296:  /* *if_arith_arith */
    case 274:  /* *and_scc */
    case 260:  /* *check_arch2 */
    case 230:  /* *mov_notscc */
    case 229:  /* *mov_negscc */
    case 228:  /* *mov_scc */
    case 222:  /* *arm_cmpdi_unsigned */
    case 221:  /* *arm_cmpdi_insn */
    case 151:  /* *arm_neg_abssi2 */
    case 149:  /* *arm_abssi2 */
    case 145:  /* *arm_negdi2 */
    case 127:  /* arm_lshrdi3_1bit */
    case 125:  /* arm_ashrdi3_1bit */
    case 123:  /* arm_ashldi3_1bit */
    case 109:  /* *andsi_iorsi3_notsi */
    case 104:  /* *xordi_sesidi_di */
    case 102:  /* *xordi3_insn */
    case 97:  /* *iordi_sesidi_di */
    case 95:  /* *iordi3_insn */
    case 89:  /* *anddi_notsesidi_di */
    case 87:  /* *anddi_notdi_di */
    case 84:  /* *ite_ne_zeroextractsi_shifted */
    case 83:  /* *ite_ne_zeroextractsi */
    case 82:  /* *ne_zeroextractsi_shifted */
    case 75:  /* *anddi_sesdi_di */
    case 74:  /* *anddi_zesidi_di */
    case 73:  /* *anddi3_insn */
    case 30:  /* *subdi_zesidi_zesidi */
    case 29:  /* *subdi_sesidi_di */
    case 28:  /* *subdi_zesidi_di */
    case 27:  /* *subdi_di_sesidi */
    case 26:  /* *subdi_di_zesidi */
    case 24:  /* *arm_subdi3 */
    case 4:  /* *adddi_zesidi_di */
    case 3:  /* *adddi_sesidi_di */
    case 2:  /* *arm_adddi3 */
      return 8;

    case 3517:  /* *p *movdf_vfp */
    case 650:  /* *thumb2_movdf_vfp */
    case 649:  /* *movdf_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x160))
        {
	  return 8;
        }
      else if (which_alternative == 7)
        {
	  if (
#line 465 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"
(TARGET_VFP_SINGLE))
	    {
	      return 8;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 644:  /* *movdi_vfp_cortexa8 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 8;
        }
      else if (which_alternative == 2)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 3)
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return 
#line 225 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"
(arm_count_output_move_double_insns (operands)                                  * 4);
        }
      else
        {
	  return 4;
        }

    case 3228:  /* *p *arith_adjacentmem */
    case 3222:  /* *p *arm_return */
    case 324:  /* *not_signextract_onebit */
    case 319:  /* *arith_adjacentmem */
    case 313:  /* *ifcompare_arith_not */
    case 311:  /* *ifcompare_not_arith */
    case 309:  /* *ifcompare_shift_shift */
    case 295:  /* *ifcompare_arith_arith */
    case 289:  /* *negscc */
    case 278:  /* *cond_arith */
    case 262:  /* arm_casesi_internal */
    case 258:  /* *cond_return_inverted */
    case 257:  /* *cond_return */
    case 256:  /* *arm_return */
    case 247:  /* *call_value_mem */
    case 246:  /* *call_value_reg_arm */
    case 242:  /* *call_mem */
    case 241:  /* *call_reg_arm */
      return 12 /* 0xc */;

    case 3207:  /* *p *arm_extendqisi */
    case 3204:  /* *p *arm_extendhisi2 */
    case 3200:  /* *p *arm_zero_extendqisi2 */
    case 179:  /* *arm_extendqisi */
    case 175:  /* *arm_extendhisi2 */
    case 170:  /* *arm_zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 3180:  /* *p unaligned_storehi */
    case 3179:  /* *p unaligned_storesi */
    case 3178:  /* *p unaligned_loadhiu */
    case 3177:  /* *p unaligned_loadhis */
    case 3176:  /* *p unaligned_loadsi */
    case 140:  /* unaligned_storehi */
    case 139:  /* unaligned_storesi */
    case 138:  /* unaligned_loadhiu */
    case 137:  /* unaligned_loadhis */
    case 136:  /* unaligned_loadsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 3297:  /* *p iwmmxt_anddi3 */
    case 3296:  /* *p iwmmxt_xordi3 */
    case 3295:  /* *p iwmmxt_iordi3 */
    case 942:  /* bicdi3_neon */
    case 423:  /* iwmmxt_anddi3 */
    case 422:  /* iwmmxt_xordi3 */
    case 421:  /* iwmmxt_iordi3 */
    case 318:  /* *if_move_neg */
    case 316:  /* *if_neg_move */
    case 308:  /* *if_move_shift */
    case 306:  /* *if_shift_move */
    case 304:  /* *if_not_move */
    case 302:  /* *if_move_not */
    case 3162:  /* *p *xordi_zesidi_di */
    case 3157:  /* *p *iordi_zesidi_di */
    case 3150:  /* *p *anddi_notzesidi_di */
    case 322:  /* *cond_move_not */
    case 300:  /* *if_move_arith */
    case 298:  /* *if_arith_move */
    case 275:  /* *ior_scc */
    case 103:  /* *xordi_zesidi_di */
    case 96:  /* *iordi_zesidi_di */
    case 88:  /* *anddi_notzesidi_di */
    case 35:  /* *arm_decscc */
    case 23:  /* *arm_incscc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 2026:  /* usmulusa3 */
    case 2025:  /* ssmulsa3 */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return 38 /* 0x26 */;
        }
      else
        {
	  return 32 /* 0x20 */;
        }

    case 797:  /* *neon_movxi */
    case 796:  /* *neon_movci */
    case 795:  /* *neon_movoi */
    case 794:  /* *neon_movei */
      extract_constrain_insn_cached (insn);
      return 
#line 156 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(arm_attr_length_move_neon (insn));

    case 762:  /* thumb2_casesi_internal_pic */
    case 288:  /* *and_scc_scc_nodom */
      return 20 /* 0x14 */;

    case 761:  /* thumb2_casesi_internal */
    case 339:  /* consttable_16 */
    case 287:  /* *and_scc_scc_cmp */
    case 286:  /* *and_scc_scc */
    case 285:  /* *ior_scc_scc_cmp */
    case 284:  /* *ior_scc_scc */
      return 16 /* 0x10 */;

    case 756:  /* *thumb2_negscc */
    case 754:  /* *thumb2_cond_arith */
      return 14 /* 0xe */;

    case 755:  /* *thumb2_cond_sub */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 14 /* 0xe */;
        }

    case 752:  /* *thumb2_ior_scc */
    case 730:  /* *thumb2_decscc */
    case 729:  /* *thumb2_incscc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 751:  /* *thumb2_and_scc */
    case 745:  /* *thumb2_mov_notscc */
    case 744:  /* *thumb2_mov_negscc */
    case 743:  /* *thumb2_mov_scc */
      return 10 /* 0xa */;

    case 747:  /* *thumb2_movsfcc_soft_insn */
    case 152:  /* *thumb1_neg_abssi2 */
    case 150:  /* *thumb1_abssi2 */
    case 146:  /* *thumb1_negdi2 */
      return 6;

    case 643:  /* *movdi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x72))
        {
	  return 8;
        }
      else if (which_alternative == 2)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 3)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 9)
        {
	  if (
#line 465 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"
(TARGET_VFP_SINGLE))
	    {
	      return 8;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x19))
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 2)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 12)
        {
	  if ((
#line 154 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"
(TARGET_VFP_SINGLE)) == (1))
	    {
	      return 8;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 344:  /* force_register_use */
    case 326:  /* stack_tie */
    case 261:  /* blockage */
    case 225:  /* *deleted_compare */
      return 0;

    case 325:  /* *push_multi */
      extract_constrain_insn_cached (insn);
      return 
#line 10937 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_attr_length_push_multi (operands[2], operands[1]));

    case 321:  /* *epilogue_insns */
      return 44 /* 0x2c */;

    case 317:  /* *ifcompare_move_neg */
    case 315:  /* *ifcompare_neg_move */
    case 307:  /* *ifcompare_move_shift */
    case 305:  /* *ifcompare_shift_move */
    case 303:  /* *ifcompare_not_move */
    case 301:  /* *ifcompare_move_not */
    case 299:  /* *ifcompare_move_arith */
    case 297:  /* *ifcompare_arith_move */
    case 293:  /* *ifcompare_move_plus */
    case 291:  /* *ifcompare_plus_move */
    case 279:  /* *cond_sub */
    case 114:  /* *arm_smin_insn */
    case 112:  /* *arm_smax_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 267:  /* nop */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 3594:  /* *p *thumb2_negsi2_short */
    case 3593:  /* *p *thumb2_one_cmplsi2_short */
    case 3592:  /* *p *thumb2_mulsi_short */
    case 3591:  /* *p *thumb2_subsi_short */
    case 3590:  /* *p *thumb2_addsi_short */
    case 3589:  /* *p *thumb2_movsi_shortim */
    case 3588:  /* *p *thumb2_movhi_shortim */
    case 3587:  /* *p *thumb2_movqi_shortim */
    case 3586:  /* *p *thumb2_shiftsi3_short */
    case 3585:  /* *p *thumb2_alusi3_short */
    case 780:  /* *thumb2_negsi2_short */
    case 779:  /* *thumb2_one_cmplsi2_short */
    case 776:  /* *thumb2_mulsi_short_compare0_scratch */
    case 775:  /* *thumb2_mulsi_short_compare0 */
    case 774:  /* *thumb2_mulsi_short */
    case 771:  /* *thumb2_subsi_short */
    case 770:  /* *thumb2_addsi_short */
    case 769:  /* *thumb2_movsi_shortim */
    case 768:  /* *thumb2_movhi_shortim */
    case 767:  /* *thumb2_movqi_shortim */
    case 766:  /* *thumb2_shiftsi3_short */
    case 765:  /* *thumb2_alusi3_short */
    case 340:  /* *thumb1_tablejump */
    case 266:  /* *thumb1_indirect_jump */
    case 248:  /* *call_value_reg_thumb1_v5 */
    case 243:  /* *call_reg_thumb1_v5 */
    case 224:  /* *thumb_cmpdi_zero */
    case 203:  /* *thumb1_movsf_insn */
    case 201:  /* *thumb1_movhf */
    case 199:  /* *thumb1_movqi_insn */
    case 191:  /* pic_add_dot_plus_four */
    case 169:  /* *thumb1_zero_extendqisi2_v6 */
    case 155:  /* *thumb1_one_cmplsi2 */
    case 148:  /* *thumb1_negsi2 */
    case 129:  /* *thumb1_rotrsi3 */
    case 128:  /* *thumb1_lshrsi3 */
    case 126:  /* *thumb1_ashrsi3 */
    case 124:  /* *thumb1_ashlsi3 */
    case 106:  /* *thumb1_xorsi3_insn */
    case 99:  /* *thumb1_iorsi3_insn */
    case 91:  /* thumb1_bicsi3 */
    case 77:  /* *thumb1_andsi3_insn */
    case 39:  /* *thumb_mulsi3_v6 */
    case 31:  /* thumb1_subsi3_insn */
    case 3221:  /* *p *arm_jump */
    case 238:  /* *arm_jump */
    case 778:  /* *thumb2_cbnz */
    case 777:  /* *thumb2_cbz */
    case 239:  /* *thumb_jump */
    case 227:  /* *arm_cond_branch_reversed */
    case 226:  /* arm_cond_branch */
      return 2;

    case 215:  /* *addsi3_cbranch */
      extract_constrain_insn_cached (insn);
      if ((
#line 7464 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(which_alternative)) < (2))
        {
	  return 4;
        }
      else
        {
	  return 6;
        }

    case 188:  /* pic_load_addr_unified */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 182:  /* thumb1_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 72 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_arch6)) == (
(IS_ARCH6_YES))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  if (((
#line 72 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_arch6)) == (
(IS_ARCH6_YES))))
	    {
	      return 4;
	    }
	  else
	    {
	      return 6;
	    }
        }

    case 174:  /* thumb1_extendhisi2 */
    case 164:  /* *thumb1_zero_extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 72 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_arch6)) == (
(IS_ARCH6_YES))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 168:  /* *thumb1_zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 118:  /* *minmax_arithsi */
    case 117:  /* *store_minmaxsi */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return 14 /* 0xe */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 81:  /* *ne_zeroextractsi */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 932:  /* orndi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 8;
        }

    case 922:  /* anddi3_neon */
    case 912:  /* iordi3_neon */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 855:  /* subdi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 845:  /* adddi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 8;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 793:  /* *neon_movti */
    case 792:  /* *neon_movv2di */
    case 791:  /* *neon_movv4sf */
    case 790:  /* *neon_movv4si */
    case 789:  /* *neon_movv8hi */
    case 788:  /* *neon_movv16qi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 8;
        }
      else if (which_alternative == 6)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 7)
        {
	  return 8;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 753:  /* *thumb2_cond_move */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 746:  /* *thumb2_movsicc_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 740:  /* tls_load_dot_plus_four */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 6;
        }

    case 757:  /* *thumb2_movcond */
    case 735:  /* *thumb2_uminsi3 */
    case 734:  /* *thumb32_umaxsi3 */
    case 733:  /* *thumb2_sminsi3 */
    case 732:  /* *thumb2_smaxsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 14 /* 0xe */;
        }

    case 654:  /* *thumb2_movdfcc_vfp */
    case 652:  /* *thumb2_movsfcc_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 6;
        }
      else if (which_alternative == 2)
        {
	  return 10 /* 0xa */;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 6;
        }
      else if (which_alternative == 5)
        {
	  return 10 /* 0xa */;
        }
      else if (((1 << which_alternative) & 0xc0))
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 653:  /* *movdfcc_vfp */
    case 651:  /* *movsfcc_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0xc0))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 787:  /* *neon_movdi */
    case 786:  /* *neon_movv2sf */
    case 785:  /* *neon_movv2si */
    case 784:  /* *neon_movv4hi */
    case 783:  /* *neon_movv8qi */
    case 646:  /* *movhf_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 645:  /* *movhf_vfp_neon */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xff))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 3301:  /* *p movv8qi_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3299:  /* *p movv2si_internal */
    case 430:  /* movv8qi_internal */
    case 429:  /* movv4hi_internal */
    case 428:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 426:  /* *iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xff))
        {
	  return 4;
        }
      else if (which_alternative == 8)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 4;
        }

    case 283:  /* *cmp_ior */
    case 282:  /* *cmp_and */
    case 281:  /* *cmp_ite1 */
    case 280:  /* *cmp_ite0 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else if (((1 << which_alternative) & 0x1e))
        {
	  return 8;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_NO))))
	    {
	      return 8;
	    }
	  else
	    {
	      return 10 /* 0xa */;
	    }
        }

    case 3521:  /* *p *negdf2_vfp */
    case 658:  /* *negdf2_vfp */
    case 294:  /* *if_move_plus */
    case 292:  /* *if_plus_move */
    case 277:  /* *cond_move */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 236:  /* *movsicc_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 3219:  /* *p *arm_cmpsi_insn */
    case 773:  /* *thumb2_addsi3_compare0_scratch */
    case 772:  /* thumb2_addsi3_compare0 */
    case 353:  /* *arm_rev16 */
    case 352:  /* *arm_revsh */
    case 351:  /* *arm_rev */
    case 217:  /* *arm_cmpsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 214:  /* *cbranchne_decr1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 205:  /* *thumb_movdf_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 3217:  /* *p *arm32_movhf */
    case 200:  /* *arm32_movhf */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 3216:  /* *p *arm_movqi_insn */
    case 198:  /* *arm_movqi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 195:  /* *thumb1_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 187:  /* *thumb1_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 184:  /* *thumb1_movdi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 204:  /* *movdf_soft_insn */
    case 183:  /* *arm_movdi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 2)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 8;
        }

    case 3196:  /* *p extendsidi2 */
    case 3195:  /* *p extendhidi2 */
    case 3194:  /* *p extendqidi2 */
    case 3193:  /* *p zero_extendsidi2 */
    case 3192:  /* *p zero_extendhidi2 */
    case 3191:  /* *p zero_extendqidi2 */
    case 163:  /* extendsidi2 */
    case 162:  /* extendhidi2 */
    case 161:  /* extendqidi2 */
    case 160:  /* zero_extendsidi2 */
    case 159:  /* zero_extendhidi2 */
    case 158:  /* zero_extendqidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 3188:  /* *p one_cmpldi2 */
    case 952:  /* xordi3_neon */
    case 153:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 290:  /* movcond */
    case 116:  /* *arm_uminsi3 */
    case 115:  /* *arm_umaxsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 3164:  /* *p *arm_xorsi3 */
    case 105:  /* *arm_xorsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 3159:  /* *p *iorsi3_insn */
    case 3143:  /* *p *arm_andsi3_insn */
    case 98:  /* *iorsi3_insn */
    case 76:  /* *arm_andsi3_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 38:  /* *thumb_mulsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 3114:  /* *p *arm_subsi3_insn */
    case 32:  /* *arm_subsi3_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 6:  /* *thumb1_addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 3108:  /* *p *arm_addsi3 */
    case 5:  /* *arm_addsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x7fe))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 3594:  /* *p *thumb2_negsi2_short */
    case 3593:  /* *p *thumb2_one_cmplsi2_short */
    case 3592:  /* *p *thumb2_mulsi_short */
    case 3591:  /* *p *thumb2_subsi_short */
    case 3590:  /* *p *thumb2_addsi_short */
    case 3589:  /* *p *thumb2_movsi_shortim */
    case 3588:  /* *p *thumb2_movhi_shortim */
    case 3587:  /* *p *thumb2_movqi_shortim */
    case 3586:  /* *p *thumb2_shiftsi3_short */
    case 3585:  /* *p *thumb2_alusi3_short */
    case 780:  /* *thumb2_negsi2_short */
    case 779:  /* *thumb2_one_cmplsi2_short */
    case 776:  /* *thumb2_mulsi_short_compare0_scratch */
    case 775:  /* *thumb2_mulsi_short_compare0 */
    case 774:  /* *thumb2_mulsi_short */
    case 771:  /* *thumb2_subsi_short */
    case 770:  /* *thumb2_addsi_short */
    case 769:  /* *thumb2_movsi_shortim */
    case 768:  /* *thumb2_movhi_shortim */
    case 767:  /* *thumb2_movqi_shortim */
    case 766:  /* *thumb2_shiftsi3_short */
    case 765:  /* *thumb2_alusi3_short */
    case 340:  /* *thumb1_tablejump */
    case 266:  /* *thumb1_indirect_jump */
    case 248:  /* *call_value_reg_thumb1_v5 */
    case 243:  /* *call_reg_thumb1_v5 */
    case 224:  /* *thumb_cmpdi_zero */
    case 203:  /* *thumb1_movsf_insn */
    case 201:  /* *thumb1_movhf */
    case 199:  /* *thumb1_movqi_insn */
    case 191:  /* pic_add_dot_plus_four */
    case 169:  /* *thumb1_zero_extendqisi2_v6 */
    case 155:  /* *thumb1_one_cmplsi2 */
    case 148:  /* *thumb1_negsi2 */
    case 129:  /* *thumb1_rotrsi3 */
    case 128:  /* *thumb1_lshrsi3 */
    case 126:  /* *thumb1_ashrsi3 */
    case 124:  /* *thumb1_ashlsi3 */
    case 106:  /* *thumb1_xorsi3_insn */
    case 99:  /* *thumb1_iorsi3_insn */
    case 91:  /* thumb1_bicsi3 */
    case 77:  /* *thumb1_andsi3_insn */
    case 39:  /* *thumb_mulsi3_v6 */
    case 31:  /* thumb1_subsi3_insn */
      return 2;

    case 3579:  /* *p *thumb2_neg_abssi2 */
    case 3578:  /* *p *thumb2_abssi2 */
    case 738:  /* *thumb2_neg_abssi2 */
    case 737:  /* *thumb2_abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 8;
        }

    case 3517:  /* *p *movdf_vfp */
    case 650:  /* *thumb2_movdf_vfp */
    case 649:  /* *movdf_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x160))
        {
	  return 8;
        }
      else if (which_alternative == 7)
        {
	  if (
#line 465 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"
(TARGET_VFP_SINGLE))
	    {
	      return 8;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 644:  /* *movdi_vfp_cortexa8 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 8;
        }
      else if (which_alternative == 2)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 3)
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return 
#line 225 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"
(arm_count_output_move_double_insns (operands)                                  * 4);
        }
      else
        {
	  return 4;
        }

    case 3228:  /* *p *arith_adjacentmem */
    case 3222:  /* *p *arm_return */
    case 324:  /* *not_signextract_onebit */
    case 319:  /* *arith_adjacentmem */
    case 313:  /* *ifcompare_arith_not */
    case 311:  /* *ifcompare_not_arith */
    case 309:  /* *ifcompare_shift_shift */
    case 295:  /* *ifcompare_arith_arith */
    case 289:  /* *negscc */
    case 278:  /* *cond_arith */
    case 262:  /* arm_casesi_internal */
    case 258:  /* *cond_return_inverted */
    case 257:  /* *cond_return */
    case 256:  /* *arm_return */
    case 247:  /* *call_value_mem */
    case 246:  /* *call_value_reg_arm */
    case 242:  /* *call_mem */
    case 241:  /* *call_reg_arm */
      return 12 /* 0xc */;

    case 3207:  /* *p *arm_extendqisi */
    case 3204:  /* *p *arm_extendhisi2 */
    case 3200:  /* *p *arm_zero_extendqisi2 */
    case 179:  /* *arm_extendqisi */
    case 175:  /* *arm_extendhisi2 */
    case 170:  /* *arm_zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 3180:  /* *p unaligned_storehi */
    case 3179:  /* *p unaligned_storesi */
    case 3178:  /* *p unaligned_loadhiu */
    case 3177:  /* *p unaligned_loadhis */
    case 3176:  /* *p unaligned_loadsi */
    case 140:  /* unaligned_storehi */
    case 139:  /* unaligned_storesi */
    case 138:  /* unaligned_loadhiu */
    case 137:  /* unaligned_loadhis */
    case 136:  /* unaligned_loadsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 3297:  /* *p iwmmxt_anddi3 */
    case 3296:  /* *p iwmmxt_xordi3 */
    case 3295:  /* *p iwmmxt_iordi3 */
    case 942:  /* bicdi3_neon */
    case 423:  /* iwmmxt_anddi3 */
    case 422:  /* iwmmxt_xordi3 */
    case 421:  /* iwmmxt_iordi3 */
    case 318:  /* *if_move_neg */
    case 316:  /* *if_neg_move */
    case 308:  /* *if_move_shift */
    case 306:  /* *if_shift_move */
    case 304:  /* *if_not_move */
    case 302:  /* *if_move_not */
    case 3162:  /* *p *xordi_zesidi_di */
    case 3157:  /* *p *iordi_zesidi_di */
    case 3150:  /* *p *anddi_notzesidi_di */
    case 322:  /* *cond_move_not */
    case 300:  /* *if_move_arith */
    case 298:  /* *if_arith_move */
    case 275:  /* *ior_scc */
    case 103:  /* *xordi_zesidi_di */
    case 96:  /* *iordi_zesidi_di */
    case 88:  /* *anddi_notzesidi_di */
    case 35:  /* *arm_decscc */
    case 23:  /* *arm_incscc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 2026:  /* usmulusa3 */
    case 2025:  /* ssmulsa3 */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return 38 /* 0x26 */;
        }
      else
        {
	  return 32 /* 0x20 */;
        }

    case 797:  /* *neon_movxi */
    case 796:  /* *neon_movci */
    case 795:  /* *neon_movoi */
    case 794:  /* *neon_movei */
      extract_constrain_insn_cached (insn);
      return 
#line 156 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(arm_attr_length_move_neon (insn));

    case 762:  /* thumb2_casesi_internal_pic */
    case 288:  /* *and_scc_scc_nodom */
      return 20 /* 0x14 */;

    case 761:  /* thumb2_casesi_internal */
    case 339:  /* consttable_16 */
    case 287:  /* *and_scc_scc_cmp */
    case 286:  /* *and_scc_scc */
    case 285:  /* *ior_scc_scc_cmp */
    case 284:  /* *ior_scc_scc */
      return 16 /* 0x10 */;

    case 756:  /* *thumb2_negscc */
    case 754:  /* *thumb2_cond_arith */
      return 14 /* 0xe */;

    case 755:  /* *thumb2_cond_sub */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 14 /* 0xe */;
        }

    case 752:  /* *thumb2_ior_scc */
    case 730:  /* *thumb2_decscc */
    case 729:  /* *thumb2_incscc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 751:  /* *thumb2_and_scc */
    case 745:  /* *thumb2_mov_notscc */
    case 744:  /* *thumb2_mov_negscc */
    case 743:  /* *thumb2_mov_scc */
      return 10 /* 0xa */;

    case 747:  /* *thumb2_movsfcc_soft_insn */
    case 152:  /* *thumb1_neg_abssi2 */
    case 150:  /* *thumb1_abssi2 */
    case 146:  /* *thumb1_negdi2 */
      return 6;

    case 643:  /* *movdi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x72))
        {
	  return 8;
        }
      else if (which_alternative == 2)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 3)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 9)
        {
	  if (
#line 465 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"
(TARGET_VFP_SINGLE))
	    {
	      return 8;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x19))
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 2)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 12)
        {
	  if ((
#line 154 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"
(TARGET_VFP_SINGLE)) == (1))
	    {
	      return 8;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 344:  /* force_register_use */
    case 326:  /* stack_tie */
    case 261:  /* blockage */
    case 225:  /* *deleted_compare */
      return 0;

    case 325:  /* *push_multi */
      extract_constrain_insn_cached (insn);
      return 
#line 10937 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_attr_length_push_multi (operands[2], operands[1]));

    case 321:  /* *epilogue_insns */
      return 44 /* 0x2c */;

    case 317:  /* *ifcompare_move_neg */
    case 315:  /* *ifcompare_neg_move */
    case 307:  /* *ifcompare_move_shift */
    case 305:  /* *ifcompare_shift_move */
    case 303:  /* *ifcompare_not_move */
    case 301:  /* *ifcompare_move_not */
    case 299:  /* *ifcompare_move_arith */
    case 297:  /* *ifcompare_arith_move */
    case 293:  /* *ifcompare_move_plus */
    case 291:  /* *ifcompare_plus_move */
    case 279:  /* *cond_sub */
    case 114:  /* *arm_smin_insn */
    case 112:  /* *arm_smax_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 267:  /* nop */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 215:  /* *addsi3_cbranch */
      extract_constrain_insn_cached (insn);
      if ((
#line 7464 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(which_alternative)) < (2))
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 3570:  /* *p *combine_vcvt_f64_s32 */
    case 3569:  /* *p *combine_vcvt_f64_u32 */
    case 3187:  /* *p *arm_neg_abssi2 */
    case 3186:  /* *p *arm_abssi2 */
    case 3166:  /* *p *andsi_iorsi3_notsi */
    case 3163:  /* *p *xordi_sesidi_di */
    case 3161:  /* *p *xordi3_insn */
    case 3158:  /* *p *iordi_sesidi_di */
    case 3156:  /* *p *iordi3_insn */
    case 3152:  /* *p *anddi_notsesidi_di */
    case 3148:  /* *p *anddi_notdi_di */
    case 1859:  /* vec_pack_trunc_v2di */
    case 1858:  /* vec_pack_trunc_v4si */
    case 1857:  /* vec_pack_trunc_v8hi */
    case 1667:  /* neon_vld1_dupv2di */
    case 1398:  /* neon_vdup_nv2di */
    case 978:  /* negdi2_neon */
    case 736:  /* *thumb2_negdi2 */
    case 711:  /* *combine_vcvt_f64_s32 */
    case 710:  /* *combine_vcvt_f64_u32 */
    case 338:  /* consttable_8 */
    case 323:  /* *sign_extract_onebit */
    case 320:  /* prologue_thumb1_interwork */
    case 314:  /* *if_arith_not */
    case 312:  /* *if_not_arith */
    case 310:  /* *if_shift_shift */
    case 296:  /* *if_arith_arith */
    case 274:  /* *and_scc */
    case 260:  /* *check_arch2 */
    case 230:  /* *mov_notscc */
    case 229:  /* *mov_negscc */
    case 228:  /* *mov_scc */
    case 222:  /* *arm_cmpdi_unsigned */
    case 221:  /* *arm_cmpdi_insn */
    case 151:  /* *arm_neg_abssi2 */
    case 149:  /* *arm_abssi2 */
    case 145:  /* *arm_negdi2 */
    case 127:  /* arm_lshrdi3_1bit */
    case 125:  /* arm_ashrdi3_1bit */
    case 123:  /* arm_ashldi3_1bit */
    case 109:  /* *andsi_iorsi3_notsi */
    case 104:  /* *xordi_sesidi_di */
    case 102:  /* *xordi3_insn */
    case 97:  /* *iordi_sesidi_di */
    case 95:  /* *iordi3_insn */
    case 89:  /* *anddi_notsesidi_di */
    case 87:  /* *anddi_notdi_di */
    case 84:  /* *ite_ne_zeroextractsi_shifted */
    case 83:  /* *ite_ne_zeroextractsi */
    case 82:  /* *ne_zeroextractsi_shifted */
    case 75:  /* *anddi_sesdi_di */
    case 74:  /* *anddi_zesidi_di */
    case 73:  /* *anddi3_insn */
    case 30:  /* *subdi_zesidi_zesidi */
    case 29:  /* *subdi_sesidi_di */
    case 28:  /* *subdi_zesidi_di */
    case 27:  /* *subdi_di_sesidi */
    case 26:  /* *subdi_di_zesidi */
    case 24:  /* *arm_subdi3 */
    case 4:  /* *adddi_zesidi_di */
    case 3:  /* *adddi_sesidi_di */
    case 2:  /* *arm_adddi3 */
    case 778:  /* *thumb2_cbnz */
    case 777:  /* *thumb2_cbz */
    case 216:  /* *addsi3_cbranch_scratch */
    case 213:  /* *tstsi3_cbranch */
    case 212:  /* *tlobits_cbranch */
    case 211:  /* *tbit_cbranch */
    case 210:  /* *negated_cbranchsi4 */
    case 209:  /* cbranchsi4_scratch */
    case 208:  /* cbranchsi4_insn */
      return 8;

    case 188:  /* pic_load_addr_unified */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 182:  /* thumb1_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 72 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_arch6)) == (
(IS_ARCH6_YES))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  if (((
#line 72 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_arch6)) == (
(IS_ARCH6_YES))))
	    {
	      return 4;
	    }
	  else
	    {
	      return 6;
	    }
        }

    case 174:  /* thumb1_extendhisi2 */
    case 164:  /* *thumb1_zero_extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 72 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_arch6)) == (
(IS_ARCH6_YES))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 168:  /* *thumb1_zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 118:  /* *minmax_arithsi */
    case 117:  /* *store_minmaxsi */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return 14 /* 0xe */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 81:  /* *ne_zeroextractsi */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

int
bypass_p (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_insn cached_insn ATTRIBUTE_UNUSED;
  enum attr_neon_type cached_neon_type ATTRIBUTE_UNUSED;
  enum attr_conds cached_conds ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 3564:  /* *p *cmpsf_trap_vfp */
    case 3563:  /* *p *cmpsf_vfp */
    case 705:  /* *cmpsf_trap_vfp */
    case 704:  /* *cmpsf_vfp */
      if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 699:  /* *movcc_vfp */
      if (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3570:  /* *p *combine_vcvt_f64_s32 */
    case 3569:  /* *p *combine_vcvt_f64_u32 */
    case 3568:  /* *p *combine_vcvt_f32_s32 */
    case 3567:  /* *p *combine_vcvt_f32_u32 */
    case 3560:  /* *p floatunssidf2 */
    case 3559:  /* *p floatunssisf2 */
    case 3558:  /* *p *floatsidf2_vfp */
    case 3557:  /* *p *floatsisf2_vfp */
    case 3556:  /* *p fixuns_truncdfsi2 */
    case 3555:  /* *p fixuns_truncsfsi2 */
    case 3554:  /* *p *truncsidf2_vfp */
    case 3553:  /* *p *truncsisf2_vfp */
    case 3552:  /* *p truncsfhf2 */
    case 3551:  /* *p extendhfsf2 */
    case 3550:  /* *p *truncdfsf2_vfp */
    case 3549:  /* *p *extendsfdf2_vfp */
    case 711:  /* *combine_vcvt_f64_s32 */
    case 710:  /* *combine_vcvt_f64_u32 */
    case 709:  /* *combine_vcvt_f32_s32 */
    case 708:  /* *combine_vcvt_f32_u32 */
    case 696:  /* floatunssidf2 */
    case 695:  /* floatunssisf2 */
    case 694:  /* *floatsidf2_vfp */
    case 693:  /* *floatsisf2_vfp */
    case 692:  /* fixuns_truncdfsi2 */
    case 691:  /* fixuns_truncsfsi2 */
    case 690:  /* *truncsidf2_vfp */
    case 689:  /* *truncsisf2_vfp */
    case 688:  /* truncsfhf2 */
    case 687:  /* extendhfsf2 */
    case 686:  /* *truncdfsf2_vfp */
    case 685:  /* *extendsfdf2_vfp */
      if (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3540:  /* *p *muldf3negdfsubdf_vfp */
    case 3538:  /* *p *fmuldf3negdfadddf_vfp */
    case 3536:  /* *p *muldf3subdf_vfp */
    case 3534:  /* *p *muldf3adddf_vfp */
    case 676:  /* *muldf3negdfsubdf_vfp */
    case 674:  /* *fmuldf3negdfadddf_vfp */
    case 672:  /* *muldf3subdf_vfp */
    case 670:  /* *muldf3adddf_vfp */
      if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3566:  /* *p *cmpdf_trap_vfp */
    case 3565:  /* *p *cmpdf_vfp */
    case 3562:  /* *p *sqrtdf2_vfp */
    case 3548:  /* *p *fnmadddf4 */
    case 3546:  /* *p *fnmsubdf4 */
    case 3544:  /* *p *fmsubdf4 */
    case 3542:  /* *p fmadf4 */
    case 3532:  /* *p *muldf3negdf_vfp */
    case 3530:  /* *p *muldf3_vfp */
    case 3528:  /* *p *divdf3_vfp */
    case 3526:  /* *p *subdf3_vfp */
    case 3524:  /* *p *adddf3_vfp */
    case 707:  /* *cmpdf_trap_vfp */
    case 706:  /* *cmpdf_vfp */
    case 698:  /* *sqrtdf2_vfp */
    case 684:  /* *fnmadddf4 */
    case 682:  /* *fnmsubdf4 */
    case 680:  /* *fmsubdf4 */
    case 678:  /* fmadf4 */
    case 668:  /* *muldf3negdf_vfp */
    case 666:  /* *muldf3_vfp */
    case 664:  /* *divdf3_vfp */
    case 662:  /* *subdf3_vfp */
    case 660:  /* *adddf3_vfp */
      if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3561:  /* *p *sqrtsf2_vfp */
    case 3531:  /* *p *mulsf3negsf_vfp */
    case 3529:  /* *p *mulsf3_vfp */
    case 3527:  /* *p *divsf3_vfp */
    case 3525:  /* *p *subsf3_vfp */
    case 3523:  /* *p *addsf3_vfp */
    case 697:  /* *sqrtsf2_vfp */
    case 667:  /* *mulsf3negsf_vfp */
    case 665:  /* *mulsf3_vfp */
    case 663:  /* *divsf3_vfp */
    case 661:  /* *subsf3_vfp */
    case 659:  /* *addsf3_vfp */
      if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) || ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3521:  /* *p *negdf2_vfp */
    case 3519:  /* *p *absdf2_vfp */
    case 658:  /* *negdf2_vfp */
    case 656:  /* *absdf2_vfp */
      if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3520:  /* *p *negsf2_vfp */
    case 3518:  /* *p *abssf2_vfp */
    case 657:  /* *negsf2_vfp */
    case 655:  /* *abssf2_vfp */
      if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3576:  /* *p rintdf2 */
    case 3575:  /* *p nearbyintdf2 */
    case 3574:  /* *p btruncdf2 */
    case 3573:  /* *p rintsf2 */
    case 3572:  /* *p nearbyintsf2 */
    case 3571:  /* *p btruncsf2 */
    case 3290:  /* *p *stm2_db_update */
    case 3289:  /* *p *stm2_db */
    case 3286:  /* *p *stm2_da_update */
    case 3285:  /* *p *stm2_da */
    case 3282:  /* *p *stm2_ib_update */
    case 3281:  /* *p *stm2_ib */
    case 3278:  /* *p *stm2_ia_update */
    case 3277:  /* *p *stm2_ia */
    case 3274:  /* *p *stm3_db_update */
    case 3273:  /* *p *stm3_db */
    case 3270:  /* *p *stm3_da_update */
    case 3269:  /* *p *stm3_da */
    case 3266:  /* *p *stm3_ib_update */
    case 3265:  /* *p *stm3_ib */
    case 3262:  /* *p *stm3_ia_update */
    case 3261:  /* *p *stm3_ia */
    case 3258:  /* *p *stm4_db_update */
    case 3257:  /* *p *stm4_db */
    case 3254:  /* *p *stm4_da_update */
    case 3253:  /* *p *stm4_da */
    case 3250:  /* *p *stm4_ib_update */
    case 3249:  /* *p *stm4_ib */
    case 3246:  /* *p *stm4_ia_update */
    case 3245:  /* *p *stm4_ia */
    case 3242:  /* *p *thumb2_strd_base_neg */
    case 3241:  /* *p *thumb2_strd_base */
    case 3240:  /* *p *thumb2_strd */
    case 3223:  /* *p *arm_simple_return */
    case 3180:  /* *p unaligned_storehi */
    case 3179:  /* *p unaligned_storesi */
    case 763:  /* *thumb2_return */
    case 749:  /* *call_value_reg_thumb2 */
    case 748:  /* *call_reg_thumb2 */
    case 728:  /* smindf3 */
    case 727:  /* sminsf3 */
    case 726:  /* smaxdf3 */
    case 725:  /* smaxsf3 */
    case 724:  /* rounddf2 */
    case 723:  /* rintdf2 */
    case 722:  /* nearbyintdf2 */
    case 721:  /* floordf2 */
    case 720:  /* ceildf2 */
    case 719:  /* btruncdf2 */
    case 718:  /* roundsf2 */
    case 717:  /* rintsf2 */
    case 716:  /* nearbyintsf2 */
    case 715:  /* floorsf2 */
    case 714:  /* ceilsf2 */
    case 713:  /* btruncsf2 */
    case 712:  /* *push_multi_vfp */
    case 416:  /* *stm2_db_update */
    case 415:  /* *stm2_db */
    case 412:  /* *stm2_da_update */
    case 411:  /* *stm2_da */
    case 408:  /* *stm2_ib_update */
    case 407:  /* *stm2_ib */
    case 404:  /* *thumb_stm2_ia_update */
    case 403:  /* *stm2_ia_update */
    case 402:  /* *stm2_ia */
    case 397:  /* *stm3_db_update */
    case 396:  /* *stm3_db */
    case 393:  /* *stm3_da_update */
    case 392:  /* *stm3_da */
    case 389:  /* *stm3_ib_update */
    case 388:  /* *stm3_ib */
    case 385:  /* *thumb_stm3_ia_update */
    case 384:  /* *stm3_ia_update */
    case 383:  /* *stm3_ia */
    case 378:  /* *stm4_db_update */
    case 377:  /* *stm4_db */
    case 374:  /* *stm4_da_update */
    case 373:  /* *stm4_da */
    case 370:  /* *stm4_ib_update */
    case 369:  /* *stm4_ib */
    case 366:  /* *thumb_stm4_ia_update */
    case 365:  /* *stm4_ia_update */
    case 364:  /* *stm4_ia */
    case 359:  /* *thumb2_strd_base_neg */
    case 358:  /* *thumb2_strd_base */
    case 357:  /* *thumb2_strd */
    case 325:  /* *push_multi */
    case 321:  /* *epilogue_insns */
    case 261:  /* blockage */
    case 259:  /* *arm_simple_return */
    case 255:  /* *sibcall_value_insn */
    case 254:  /* *sibcall_insn */
    case 253:  /* *call_value_insn */
    case 252:  /* *call_insn */
    case 251:  /* *call_value_symbol */
    case 250:  /* *call_symbol */
    case 249:  /* *call_value_reg_thumb1 */
    case 248:  /* *call_value_reg_thumb1_v5 */
    case 247:  /* *call_value_mem */
    case 246:  /* *call_value_reg_arm */
    case 245:  /* *call_value_reg_armv5 */
    case 244:  /* *call_reg_thumb1 */
    case 243:  /* *call_reg_thumb1_v5 */
    case 242:  /* *call_mem */
    case 241:  /* *call_reg_arm */
    case 240:  /* *call_reg_armv5 */
    case 227:  /* *arm_cond_branch_reversed */
    case 226:  /* arm_cond_branch */
    case 207:  /* movmem8b */
    case 206:  /* movmem12b */
    case 140:  /* unaligned_storehi */
    case 139:  /* unaligned_storesi */
    case 117:  /* *store_minmaxsi */
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 1;
        }
      else if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FCPYS) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))
        {
	  return 1;
        }
      else if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 1;
        }
      else if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || ((cached_type == TYPE_FMACS) || ((cached_type == TYPE_FFMAS) || ((cached_type == TYPE_FMULD) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))))))
        {
	  return 1;
        }
      else if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 1;
        }
      else if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 1;
        }
      else if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 1;
        }
      else if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 1;
        }
      else if (((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_R_2_F))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || (cached_insn == INSN_MLA)))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MULS) || (cached_insn == INSN_MLAS)))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULL) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_SMLAL) || (cached_insn == INSN_UMLAL)))))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULLS) || ((cached_insn == INSN_UMULLS) || ((cached_insn == INSN_SMLALS) || (cached_insn == INSN_UMLALS)))))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULXY) || ((cached_insn == INSN_SMLAXY) || ((cached_insn == INSN_SMULWY) || ((cached_insn == INSN_SMLAWY) || ((cached_insn == INSN_SMUAD) || ((cached_insn == INSN_SMUADX) || ((cached_insn == INSN_SMLAD) || ((cached_insn == INSN_SMLADX) || ((cached_insn == INSN_SMUSD) || ((cached_insn == INSN_SMUSDX) || ((cached_insn == INSN_SMLSD) || (cached_insn == INSN_SMLSDX)))))))))))))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMMUL) || (cached_insn == INSN_SMMULR)))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD1))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 1;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULWY) || ((cached_insn == INSN_SMLAWY) || ((cached_insn == INSN_SMULXY) || (cached_insn == INSN_SMLAXY)))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || (cached_insn == INSN_MLA)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MULS) || ((cached_insn == INSN_MLAS) || ((cached_insn == INSN_SMULL) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMLALXY) || (cached_insn == INSN_SMLAWX)))))))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULLS) || ((cached_insn == INSN_SMLALS) || ((cached_insn == INSN_UMULLS) || (cached_insn == INSN_UMLALS)))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY) || ((cached_insn == INSN_MUL) || ((cached_insn == INSN_MLA) || ((cached_insn == INSN_MULS) || ((cached_insn == INSN_MLAS) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMULL) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_UMULLS) || ((cached_insn == INSN_UMLALS) || ((cached_insn == INSN_SMULLS) || ((cached_insn == INSN_SMLALS) || ((cached_insn == INSN_SMLAWX) || ((cached_insn == INSN_SMULXY) || (cached_insn == INSN_SMLAXY)))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_IMM) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || (((cached_insn = get_attr_insn (insn)) == INSN_MOV) && (! (get_attr_length (insn) == 8))))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULT) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG) || ((cached_neon_type == NEON_TYPE_NEON_MLA_QQQ_8_16) || ((cached_neon_type == NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG) || ((cached_neon_type == NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMLA_DDD) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMLA_QQQ) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR) || (cached_neon_type == NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))))))))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))) || ((cached_insn = get_attr_insn (insn)) == INSN_CLZ)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || ((cached_type == TYPE_SIMPLE_ALU_IMM) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || ((cached_insn == INSN_SMULXY) || (cached_insn == INSN_SMMUL))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MLA) || ((cached_insn == INSN_SMLAXY) || ((cached_insn == INSN_SMLAWY) || ((cached_insn == INSN_SMMLA) || ((cached_insn == INSN_SMLAD) || (cached_insn == INSN_SMLSD)))))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULL) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_UMAAL) || (cached_insn == INSN_SMLALXY)))))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULWY) || ((cached_insn == INSN_SMUAD) || (cached_insn == INSN_SMUSD))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLALD) || (cached_insn == INSN_SMLSLD)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || (cached_type == TYPE_LOAD_BYTE))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_1))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_2))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_3))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_5))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VMOV))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSMA))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_1))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_2))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_3))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSHL_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VSUM))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)) || (((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT))) && ((cached_insn = get_attr_insn (insn)) == INSN_MOV)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT))) && (! ((cached_insn = get_attr_insn (insn)) == INSN_MOV))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD_BYTE) || ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD))))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCPYS) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_R_2_F) || ((cached_type == TYPE_F_2_R) || (cached_type == TYPE_F_FLAG)))))))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_1))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_2))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_3))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_5))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VMOV))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSMA))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_1))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_2))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_3))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSHL_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VSUM))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_1))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_2))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_3))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_5))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VMOV))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_1))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_2))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_3))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSHL_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && (! ((cached_insn = get_attr_insn (insn)) == INSN_MOV))))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && ((cached_insn = get_attr_insn (insn)) == INSN_MOV)))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || (cached_insn == INSN_SMMUL)))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULXY) || ((cached_insn == INSN_SMULWY) || ((cached_insn == INSN_SMUAD) || (cached_insn == INSN_SMUSD)))))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MLA) || (cached_insn == INSN_SMMLA)))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLAXY) || ((cached_insn == INSN_SMLAWY) || ((cached_insn == INSN_SMLAD) || (cached_insn == INSN_SMLSD)))))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLALD) || (cached_insn == INSN_SMLSLD)))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULL) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || (cached_insn == INSN_UMAAL)))))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD2)))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FCPYS))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCMPS))))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FMULS)))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 1;
        }
      else if ((((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_R_2_F))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || ((cached_type == TYPE_SIMPLE_ALU_IMM) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_MULT)))))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_SIMPLE_ALU_SHIFT))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (get_attr_shift (insn) == 1))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_SIMPLE_ALU_SHIFT)))))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 1;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

int
get_attr_arm_neg_pool_range (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 1008 /* 0x3f0 */;
        }
      else if (((1 << which_alternative) & 0x1ff0))
        {
	  return 0;
        }
      else if (which_alternative == 13)
        {
	  return 1008 /* 0x3f0 */;
        }
      else
        {
	  return 0;
        }

    case 204:  /* *movdf_soft_insn */
    case 183:  /* *arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 1004 /* 0x3ec */;
        }
      else
        {
	  return 0;
        }

    case 202:  /* *arm_movsf_soft_insn */
    case 3218:  /* *p *arm_movsf_soft_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 4084 /* 0xff4 */;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
get_attr_arm_pool_range (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 793:  /* *neon_movti */
    case 792:  /* *neon_movv2di */
    case 791:  /* *neon_movv4sf */
    case 790:  /* *neon_movv4si */
    case 789:  /* *neon_movv8hi */
    case 788:  /* *neon_movv16qi */
    case 787:  /* *neon_movdi */
    case 786:  /* *neon_movv2sf */
    case 785:  /* *neon_movv2si */
    case 784:  /* *neon_movv4hi */
    case 783:  /* *neon_movv8qi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 1020 /* 0x3fc */;
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return 0;
        }
      else if (which_alternative == 7)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  return 0;
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 644:  /* *movdi_vfp_cortexa8 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 0;
        }
      else if (which_alternative == 4)
        {
	  return 1018 /* 0x3fa */;
        }
      else if (which_alternative == 5)
        {
	  return 4094 /* 0xffe */;
        }
      else if (((1 << which_alternative) & 0x3c0))
        {
	  return 0;
        }
      else if (which_alternative == 10)
        {
	  return 1018 /* 0x3fa */;
        }
      else
        {
	  return 0;
        }

    case 643:  /* *movdi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 0;
        }
      else if (which_alternative == 4)
        {
	  return 1020 /* 0x3fc */;
        }
      else if (which_alternative == 5)
        {
	  return 4096 /* 0x1000 */;
        }
      else if (((1 << which_alternative) & 0x3c0))
        {
	  return 0;
        }
      else if (which_alternative == 10)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  return 0;
        }

    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 1020 /* 0x3fc */;
        }
      else if (((1 << which_alternative) & 0x1ff0))
        {
	  return 0;
        }
      else if (which_alternative == 13)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  return 0;
        }

    case 204:  /* *movdf_soft_insn */
    case 183:  /* *arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  return 0;
        }

    case 202:  /* *arm_movsf_soft_insn */
    case 3218:  /* *p *arm_movsf_soft_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 4096 /* 0x1000 */;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_arch_enabled
get_attr_arch_enabled (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_arch cached_arch ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 952:  /* xordi3_neon */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x6)) || (((which_alternative == 3) && (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) || ((which_alternative == 0) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 932:  /* orndi3_neon */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (((which_alternative == 1) && (
#line 105 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_ARM))) || ((!((1 << which_alternative) & 0x3)) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2)))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 1047:  /* lshrdi3_neon */
    case 1046:  /* ashrdi3_neon */
    case 1041:  /* ashldi3_neon */
    case 922:  /* anddi3_neon */
    case 912:  /* iordi3_neon */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0xc)) || (((!((1 << which_alternative) & 0xf)) && (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) || ((((1 << which_alternative) & 0x3)) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 855:  /* subdi3_neon */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0xe)) || (((which_alternative == 4) && (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) || ((which_alternative == 0) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 845:  /* adddi3_neon */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x9)) || (((which_alternative == 3) && (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) || ((which_alternative == 0) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 643:  /* *movdi_vfp */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x31)) || (((which_alternative == 4) && (
#line 105 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_ARM))) || ((((1 << which_alternative) & 0x21)) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2)))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3421:  /* *p ashldi3_di */
    case 3420:  /* *p ashlv2si3_di */
    case 3419:  /* *p ashlv4hi3_di */
    case 3418:  /* *p lshrdi3_di */
    case 3417:  /* *p lshrv2si3_di */
    case 3416:  /* *p lshrv4hi3_di */
    case 3415:  /* *p ashrdi3_di */
    case 3414:  /* *p ashrv2si3_di */
    case 3413:  /* *p ashrv4hi3_di */
    case 3412:  /* *p rordi3_di */
    case 3411:  /* *p rorv2si3_di */
    case 3410:  /* *p rorv4hi3_di */
    case 3409:  /* *p ashldi3_iwmmxt */
    case 3408:  /* *p ashlv2si3_iwmmxt */
    case 3407:  /* *p ashlv4hi3_iwmmxt */
    case 3406:  /* *p lshrdi3_iwmmxt */
    case 3405:  /* *p lshrv2si3_iwmmxt */
    case 3404:  /* *p lshrv4hi3_iwmmxt */
    case 3403:  /* *p ashrdi3_iwmmxt */
    case 3402:  /* *p ashrv2si3_iwmmxt */
    case 3401:  /* *p ashrv4hi3_iwmmxt */
    case 3400:  /* *p rordi3 */
    case 3399:  /* *p rorv2si3 */
    case 3398:  /* *p rorv4hi3 */
    case 550:  /* ashldi3_di */
    case 549:  /* ashlv2si3_di */
    case 548:  /* ashlv4hi3_di */
    case 547:  /* lshrdi3_di */
    case 546:  /* lshrv2si3_di */
    case 545:  /* lshrv4hi3_di */
    case 544:  /* ashrdi3_di */
    case 543:  /* ashrv2si3_di */
    case 542:  /* ashrv4hi3_di */
    case 541:  /* rordi3_di */
    case 540:  /* rorv2si3_di */
    case 539:  /* rorv4hi3_di */
    case 538:  /* ashldi3_iwmmxt */
    case 537:  /* ashlv2si3_iwmmxt */
    case 536:  /* ashlv4hi3_iwmmxt */
    case 535:  /* lshrdi3_iwmmxt */
    case 534:  /* lshrv2si3_iwmmxt */
    case 533:  /* lshrv4hi3_iwmmxt */
    case 532:  /* ashrdi3_iwmmxt */
    case 531:  /* ashrv2si3_iwmmxt */
    case 530:  /* ashrv4hi3_iwmmxt */
    case 529:  /* rordi3 */
    case 528:  /* rorv2si3 */
    case 527:  /* rorv4hi3 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (
#line 151 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_REALLY_IWMMXT2)))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 353:  /* *arm_rev16 */
    case 352:  /* *arm_revsh */
    case 351:  /* *arm_rev */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (
#line 113 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB1))) || (((which_alternative == 1) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))) || ((which_alternative == 2) && (
#line 121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_32BIT)))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 283:  /* *cmp_ior */
    case 282:  /* *cmp_and */
    case 281:  /* *cmp_ite1 */
    case 280:  /* *cmp_ite0 */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x1f)) || ((((1 << which_alternative) & 0x1f)) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3226:  /* *p *arith_shiftsi */
    case 268:  /* *arith_shiftsi */
      extract_constrain_insn_cached (insn);
      if (((!((1 << which_alternative) & 0x6)) && (
#line 105 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_ARM))) || ((((1 << which_alternative) & 0x6)) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3219:  /* *p *arm_cmpsi_insn */
    case 217:  /* *arm_cmpsi_insn */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x3)) || ((((1 << which_alternative) & 0x3)) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3216:  /* *p *arm_movqi_insn */
    case 198:  /* *arm_movqi_insn */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x18)) || ((((1 << which_alternative) & 0x18)) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 188:  /* pic_load_addr_unified */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (
#line 105 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_ARM))) || (((which_alternative == 2) && (
#line 113 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB1))) || ((which_alternative == 1) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2)))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3193:  /* *p zero_extendsidi2 */
    case 3192:  /* *p zero_extendhidi2 */
    case 3191:  /* *p zero_extendqidi2 */
    case 3188:  /* *p one_cmpldi2 */
    case 160:  /* zero_extendsidi2 */
    case 159:  /* zero_extendhidi2 */
    case 158:  /* zero_extendqidi2 */
    case 153:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x6)) || (((which_alternative == 3) && ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (
#line 138 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_NEON)))) || ((which_alternative == 0) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (
#line 138 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_NEON))))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3180:  /* *p unaligned_storehi */
    case 3179:  /* *p unaligned_storesi */
    case 3178:  /* *p unaligned_loadhiu */
    case 3177:  /* *p unaligned_loadhis */
    case 3176:  /* *p unaligned_loadsi */
    case 140:  /* unaligned_storehi */
    case 139:  /* unaligned_storesi */
    case 138:  /* unaligned_loadhiu */
    case 137:  /* unaligned_loadhis */
    case 136:  /* unaligned_loadsi */
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || ((which_alternative == 0) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3227:  /* *p *sub_shiftsi */
    case 3175:  /* *p *not_shiftsi */
    case 273:  /* *sub_shiftsi_compare0_scratch */
    case 272:  /* *sub_shiftsi_compare0 */
    case 271:  /* *sub_shiftsi */
    case 270:  /* *arith_shiftsi_compare0_scratch */
    case 269:  /* *arith_shiftsi_compare0 */
    case 219:  /* *cmpsi_shiftsi_swp */
    case 218:  /* *cmpsi_shiftsi */
    case 135:  /* *not_shiftsi_compare0_scratch */
    case 134:  /* *not_shiftsi_compare0 */
    case 133:  /* *not_shiftsi */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (
#line 105 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_ARM))) || ((which_alternative == 0) && (
#line 121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_32BIT))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3159:  /* *p *iorsi3_insn */
    case 98:  /* *iorsi3_insn */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))) || ((which_alternative != 1) && (
#line 121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_32BIT))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case 3108:  /* *p *arm_addsi3 */
    case 5:  /* *arm_addsi3 */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0x731)) || (((which_alternative == 8) && (
#line 105 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_ARM))) || ((((1 << which_alternative) & 0x631)) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2)))))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 161:  /* extendqidi2 */
    case 162:  /* extendhidi2 */
    case 163:  /* extendsidi2 */
    case 3194:  /* *p extendqidi2 */
    case 3195:  /* *p extendhidi2 */
    case 3196:  /* *p extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((cached_arch = get_attr_arch (insn)) == ARCH_ANY)
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_A) && (
#line 105 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_ARM)))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_T) && (
#line 109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB)))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_T1) && (
#line 113 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB1)))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_T2) && (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2)))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_32) && (
#line 121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_32BIT)))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_V6) && (
#line 125 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6)))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_NOV6) && (
#line 129 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6)))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_ONLYA8) && (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_NEON_ONLYA8) && ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (
#line 138 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_NEON))))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_NOTA8) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_NEON_NOTA8) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (
#line 138 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_NEON))))
        {
	  return ARCH_ENABLED_YES;
        }
      else if ((cached_arch == ARCH_IWMMXT2) && (
#line 151 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_REALLY_IWMMXT2)))
        {
	  return ARCH_ENABLED_YES;
        }
      else
        {
	  return ARCH_ENABLED_NO;
        }

    default:
      return ARCH_ENABLED_YES;

    }
}

enum attr_arch
get_attr_arch (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 952:  /* xordi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_NOTA8;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return ARCH_ANY;
        }
      else
        {
	  return ARCH_ONLYA8;
        }

    case 932:  /* orndi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_ANY;
        }
      else if (which_alternative == 1)
        {
	  return ARCH_A;
        }
      else
        {
	  return ARCH_T2;
        }

    case 1047:  /* lshrdi3_neon */
    case 1046:  /* ashrdi3_neon */
    case 1041:  /* ashldi3_neon */
    case 922:  /* anddi3_neon */
    case 912:  /* iordi3_neon */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return ARCH_NOTA8;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return ARCH_ANY;
        }
      else
        {
	  return ARCH_ONLYA8;
        }

    case 855:  /* subdi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_NOTA8;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return ARCH_ANY;
        }
      else
        {
	  return ARCH_ONLYA8;
        }

    case 845:  /* adddi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_NOTA8;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return ARCH_ANY;
        }
      else if (which_alternative == 3)
        {
	  return ARCH_ONLYA8;
        }
      else
        {
	  return ARCH_ANY;
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 643:  /* *movdi_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_T2;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return ARCH_ANY;
        }
      else if (which_alternative == 4)
        {
	  return ARCH_A;
        }
      else if (which_alternative == 5)
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_ANY;
        }

    case 283:  /* *cmp_ior */
    case 282:  /* *cmp_and */
    case 281:  /* *cmp_ite1 */
    case 280:  /* *cmp_ite0 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_ANY;
        }

    case 3226:  /* *p *arith_shiftsi */
    case 268:  /* *arith_shiftsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_A;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_A;
        }

    case 3219:  /* *p *arm_cmpsi_insn */
    case 217:  /* *arm_cmpsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_ANY;
        }

    case 3216:  /* *p *arm_movqi_insn */
    case 198:  /* *arm_movqi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return ARCH_ANY;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_ANY;
        }

    case 3193:  /* *p zero_extendsidi2 */
    case 3192:  /* *p zero_extendhidi2 */
    case 3191:  /* *p zero_extendqidi2 */
    case 3188:  /* *p one_cmpldi2 */
    case 160:  /* zero_extendsidi2 */
    case 159:  /* zero_extendhidi2 */
    case 158:  /* zero_extendqidi2 */
    case 153:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_NEON_NOTA8;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return ARCH_ANY;
        }
      else
        {
	  return ARCH_NEON_ONLYA8;
        }

    case 3159:  /* *p *iorsi3_insn */
    case 98:  /* *iorsi3_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_32;
        }
      else if (which_alternative == 1)
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_32;
        }

    case 3108:  /* *p *arm_addsi3 */
    case 5:  /* *arm_addsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_T2;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return ARCH_ANY;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return ARCH_T2;
        }
      else if (((1 << which_alternative) & 0xc0))
        {
	  return ARCH_ANY;
        }
      else if (which_alternative == 8)
        {
	  return ARCH_A;
        }
      else if (((1 << which_alternative) & 0x600))
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_ANY;
        }

    case 188:  /* pic_load_addr_unified */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_A;
        }
      else if (which_alternative == 1)
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_T1;
        }

    case 351:  /* *arm_rev */
    case 352:  /* *arm_revsh */
    case 353:  /* *arm_rev16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_T1;
        }
      else if (which_alternative == 1)
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_32;
        }

    case 136:  /* unaligned_loadsi */
    case 137:  /* unaligned_loadhis */
    case 138:  /* unaligned_loadhiu */
    case 139:  /* unaligned_storesi */
    case 140:  /* unaligned_storehi */
    case 3176:  /* *p unaligned_loadsi */
    case 3177:  /* *p unaligned_loadhis */
    case 3178:  /* *p unaligned_loadhiu */
    case 3179:  /* *p unaligned_storesi */
    case 3180:  /* *p unaligned_storehi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_T2;
        }
      else
        {
	  return ARCH_ANY;
        }

    case 161:  /* extendqidi2 */
    case 162:  /* extendhidi2 */
    case 163:  /* extendsidi2 */
    case 3194:  /* *p extendqidi2 */
    case 3195:  /* *p extendhidi2 */
    case 3196:  /* *p extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_NEON_NOTA8;
        }
      else if (which_alternative == 1)
        {
	  return ARCH_ANY;
        }
      else if (which_alternative == 2)
        {
	  return ARCH_A;
        }
      else if (which_alternative == 3)
        {
	  return ARCH_T;
        }
      else
        {
	  return ARCH_NEON_ONLYA8;
        }

    case 133:  /* *not_shiftsi */
    case 134:  /* *not_shiftsi_compare0 */
    case 135:  /* *not_shiftsi_compare0_scratch */
    case 218:  /* *cmpsi_shiftsi */
    case 219:  /* *cmpsi_shiftsi_swp */
    case 269:  /* *arith_shiftsi_compare0 */
    case 270:  /* *arith_shiftsi_compare0_scratch */
    case 271:  /* *sub_shiftsi */
    case 272:  /* *sub_shiftsi_compare0 */
    case 273:  /* *sub_shiftsi_compare0_scratch */
    case 3175:  /* *p *not_shiftsi */
    case 3227:  /* *p *sub_shiftsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_32;
        }
      else
        {
	  return ARCH_A;
        }

    case 527:  /* rorv4hi3 */
    case 528:  /* rorv2si3 */
    case 529:  /* rordi3 */
    case 530:  /* ashrv4hi3_iwmmxt */
    case 531:  /* ashrv2si3_iwmmxt */
    case 532:  /* ashrdi3_iwmmxt */
    case 533:  /* lshrv4hi3_iwmmxt */
    case 534:  /* lshrv2si3_iwmmxt */
    case 535:  /* lshrdi3_iwmmxt */
    case 536:  /* ashlv4hi3_iwmmxt */
    case 537:  /* ashlv2si3_iwmmxt */
    case 538:  /* ashldi3_iwmmxt */
    case 539:  /* rorv4hi3_di */
    case 540:  /* rorv2si3_di */
    case 541:  /* rordi3_di */
    case 542:  /* ashrv4hi3_di */
    case 543:  /* ashrv2si3_di */
    case 544:  /* ashrdi3_di */
    case 545:  /* lshrv4hi3_di */
    case 546:  /* lshrv2si3_di */
    case 547:  /* lshrdi3_di */
    case 548:  /* ashlv4hi3_di */
    case 549:  /* ashlv2si3_di */
    case 550:  /* ashldi3_di */
    case 3398:  /* *p rorv4hi3 */
    case 3399:  /* *p rorv2si3 */
    case 3400:  /* *p rordi3 */
    case 3401:  /* *p ashrv4hi3_iwmmxt */
    case 3402:  /* *p ashrv2si3_iwmmxt */
    case 3403:  /* *p ashrdi3_iwmmxt */
    case 3404:  /* *p lshrv4hi3_iwmmxt */
    case 3405:  /* *p lshrv2si3_iwmmxt */
    case 3406:  /* *p lshrdi3_iwmmxt */
    case 3407:  /* *p ashlv4hi3_iwmmxt */
    case 3408:  /* *p ashlv2si3_iwmmxt */
    case 3409:  /* *p ashldi3_iwmmxt */
    case 3410:  /* *p rorv4hi3_di */
    case 3411:  /* *p rorv2si3_di */
    case 3412:  /* *p rordi3_di */
    case 3413:  /* *p ashrv4hi3_di */
    case 3414:  /* *p ashrv2si3_di */
    case 3415:  /* *p ashrdi3_di */
    case 3416:  /* *p lshrv4hi3_di */
    case 3417:  /* *p lshrv2si3_di */
    case 3418:  /* *p lshrdi3_di */
    case 3419:  /* *p ashlv4hi3_di */
    case 3420:  /* *p ashlv2si3_di */
    case 3421:  /* *p ashldi3_di */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ARCH_ANY;
        }
      else
        {
	  return ARCH_IWMMXT2;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return ARCH_ANY;

    }
}

int
get_attr_ce_count (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 644:  /* *movdi_vfp_cortexa8 */
    case 3514:  /* *p *movdi_vfp_cortexa8 */
      extract_constrain_insn_cached (insn);
      return 
#line 233 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"
(get_attr_length (insn) / 4);

    case 109:  /* *andsi_iorsi3_notsi */
    case 158:  /* zero_extendqidi2 */
    case 159:  /* zero_extendhidi2 */
    case 160:  /* zero_extendsidi2 */
    case 161:  /* extendqidi2 */
    case 162:  /* extendhidi2 */
    case 163:  /* extendsidi2 */
    case 710:  /* *combine_vcvt_f64_u32 */
    case 711:  /* *combine_vcvt_f64_s32 */
    case 737:  /* *thumb2_abssi2 */
    case 738:  /* *thumb2_neg_abssi2 */
    case 3166:  /* *p *andsi_iorsi3_notsi */
    case 3191:  /* *p zero_extendqidi2 */
    case 3192:  /* *p zero_extendhidi2 */
    case 3193:  /* *p zero_extendsidi2 */
    case 3194:  /* *p extendqidi2 */
    case 3195:  /* *p extendhidi2 */
    case 3196:  /* *p extendsidi2 */
    case 3569:  /* *p *combine_vcvt_f64_u32 */
    case 3570:  /* *p *combine_vcvt_f64_s32 */
    case 3578:  /* *p *thumb2_abssi2 */
    case 3579:  /* *p *thumb2_neg_abssi2 */
      return 2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

enum attr_core_cycles
get_attr_core_cycles (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 793:  /* *neon_movti */
    case 792:  /* *neon_movv2di */
    case 791:  /* *neon_movv4sf */
    case 790:  /* *neon_movv4si */
    case 789:  /* *neon_movv8hi */
    case 788:  /* *neon_movv16qi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 787:  /* *neon_movdi */
    case 786:  /* *neon_movv2sf */
    case 785:  /* *neon_movv2si */
    case 784:  /* *neon_movv4hi */
    case 783:  /* *neon_movv8qi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x75))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3581:  /* *p *thumb2_movhi_insn */
    case 741:  /* *thumb2_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3517:  /* *p *movdf_vfp */
    case 3516:  /* *p *thumb2_movsf_vfp */
    case 3515:  /* *p *movsf_vfp */
    case 650:  /* *thumb2_movdf_vfp */
    case 649:  /* *movdf_vfp */
    case 648:  /* *thumb2_movsf_vfp */
    case 647:  /* *movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xff))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 646:  /* *movhf_vfp */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x37))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 645:  /* *movhf_vfp_neon */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xdc))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3301:  /* *p movv8qi_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3299:  /* *p movv2si_internal */
    case 430:  /* movv8qi_internal */
    case 429:  /* movv4hi_internal */
    case 428:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 427:  /* *cond_iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xc))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 426:  /* *iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3cf))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3e7))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 205:  /* *thumb_movdf_insn */
    case 203:  /* *thumb1_movsf_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x1e))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3217:  /* *p *arm32_movhf */
    case 200:  /* *arm32_movhf */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 201:  /* *thumb1_movhf */
    case 199:  /* *thumb1_movqi_insn */
    case 195:  /* *thumb1_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 187:  /* *thumb1_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf0))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3580:  /* *p *thumb2_movsi_insn */
    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 3513:  /* *p *thumb2_movsi_vfp */
    case 3512:  /* *p *arm_movsi_vfp */
    case 3211:  /* *p *arm_movsi_insn */
    case 739:  /* *thumb2_movsi_insn */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 643:  /* *movdi_vfp */
    case 642:  /* *thumb2_movsi_vfp */
    case 641:  /* *arm_movsi_vfp */
    case 186:  /* *arm_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 184:  /* *thumb1_movdi_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x78))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3226:  /* *p *arith_shiftsi */
    case 3216:  /* *p *arm_movqi_insn */
    case 268:  /* *arith_shiftsi */
    case 204:  /* *movdf_soft_insn */
    case 198:  /* *arm_movqi_insn */
    case 183:  /* *arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3584:  /* *p thumb2_zero_extendqisi2_v6 */
    case 3583:  /* *p *thumb2_zero_extendhisi2_v6 */
    case 3582:  /* *p *thumb2_extendqisi_v6 */
    case 3227:  /* *p *sub_shiftsi */
    case 3218:  /* *p *arm_movsf_soft_insn */
    case 3208:  /* *p *arm_extendqisi_v6 */
    case 3207:  /* *p *arm_extendqisi */
    case 3205:  /* *p *arm_extendhisi2_v6 */
    case 3204:  /* *p *arm_extendhisi2 */
    case 3201:  /* *p *arm_zero_extendqisi2_v6 */
    case 3200:  /* *p *arm_zero_extendqisi2 */
    case 3198:  /* *p *arm_zero_extendhisi2_v6 */
    case 3197:  /* *p *arm_zero_extendhisi2 */
    case 3175:  /* *p *not_shiftsi */
    case 760:  /* thumb2_zero_extendqisi2_v6 */
    case 759:  /* *thumb2_zero_extendhisi2_v6 */
    case 758:  /* *thumb2_extendqisi_v6 */
    case 273:  /* *sub_shiftsi_compare0_scratch */
    case 272:  /* *sub_shiftsi_compare0 */
    case 271:  /* *sub_shiftsi */
    case 270:  /* *arith_shiftsi_compare0_scratch */
    case 269:  /* *arith_shiftsi_compare0 */
    case 219:  /* *cmpsi_shiftsi_swp */
    case 218:  /* *cmpsi_shiftsi */
    case 202:  /* *arm_movsf_soft_insn */
    case 182:  /* thumb1_extendqisi2 */
    case 180:  /* *arm_extendqisi_v6 */
    case 179:  /* *arm_extendqisi */
    case 176:  /* *arm_extendhisi2_v6 */
    case 175:  /* *arm_extendhisi2 */
    case 174:  /* thumb1_extendhisi2 */
    case 171:  /* *arm_zero_extendqisi2_v6 */
    case 170:  /* *arm_zero_extendqisi2 */
    case 169:  /* *thumb1_zero_extendqisi2_v6 */
    case 168:  /* *thumb1_zero_extendqisi2 */
    case 166:  /* *arm_zero_extendhisi2_v6 */
    case 165:  /* *arm_zero_extendhisi2 */
    case 164:  /* *thumb1_zero_extendhisi2 */
    case 135:  /* *not_shiftsi_compare0_scratch */
    case 134:  /* *not_shiftsi_compare0 */
    case 133:  /* *not_shiftsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3586:  /* *p *thumb2_shiftsi3_short */
    case 3220:  /* *p *arm_cmpsi_negshiftsi_si */
    case 3174:  /* *p *arm_shiftsi3 */
    case 3155:  /* *p andsi_not_shiftsi_si */
    case 766:  /* *thumb2_shiftsi3_short */
    case 310:  /* *if_shift_shift */
    case 308:  /* *if_move_shift */
    case 306:  /* *if_shift_move */
    case 220:  /* *arm_cmpsi_negshiftsi_si */
    case 131:  /* *shiftsi3_compare0 */
    case 130:  /* *arm_shiftsi3 */
    case 92:  /* andsi_not_shiftsi_si */
    case 20:  /* *addsi3_carryin_shift_geu */
    case 19:  /* *addsi3_carryin_shift_ltu */
      if (get_attr_type (insn) == TYPE_ALU_SHIFT)
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3214:  /* *p *movhi_insn_arch4 */
    case 3108:  /* *p *arm_addsi3 */
    case 294:  /* *if_move_plus */
    case 292:  /* *if_plus_move */
    case 236:  /* *movsicc_insn */
    case 196:  /* *movhi_insn_arch4 */
    case 5:  /* *arm_addsi3 */
      if (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_IMM) || (cached_type == TYPE_ALU_REG))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || ((cached_type == TYPE_FLOAT) || ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FDIVS)))))))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 3592:  /* *p *thumb2_mulsi_short */
    case 3576:  /* *p rintdf2 */
    case 3575:  /* *p nearbyintdf2 */
    case 3574:  /* *p btruncdf2 */
    case 3573:  /* *p rintsf2 */
    case 3572:  /* *p nearbyintsf2 */
    case 3571:  /* *p btruncsf2 */
    case 3570:  /* *p *combine_vcvt_f64_s32 */
    case 3569:  /* *p *combine_vcvt_f64_u32 */
    case 3568:  /* *p *combine_vcvt_f32_s32 */
    case 3567:  /* *p *combine_vcvt_f32_u32 */
    case 3566:  /* *p *cmpdf_trap_vfp */
    case 3565:  /* *p *cmpdf_vfp */
    case 3564:  /* *p *cmpsf_trap_vfp */
    case 3563:  /* *p *cmpsf_vfp */
    case 3560:  /* *p floatunssidf2 */
    case 3559:  /* *p floatunssisf2 */
    case 3558:  /* *p *floatsidf2_vfp */
    case 3557:  /* *p *floatsisf2_vfp */
    case 3556:  /* *p fixuns_truncdfsi2 */
    case 3555:  /* *p fixuns_truncsfsi2 */
    case 3554:  /* *p *truncsidf2_vfp */
    case 3553:  /* *p *truncsisf2_vfp */
    case 3552:  /* *p truncsfhf2 */
    case 3551:  /* *p extendhfsf2 */
    case 3550:  /* *p *truncdfsf2_vfp */
    case 3549:  /* *p *extendsfdf2_vfp */
    case 3548:  /* *p *fnmadddf4 */
    case 3547:  /* *p *fnmaddsf4 */
    case 3546:  /* *p *fnmsubdf4 */
    case 3545:  /* *p *fnmsubsf4 */
    case 3544:  /* *p *fmsubdf4 */
    case 3543:  /* *p *fmsubsf4 */
    case 3542:  /* *p fmadf4 */
    case 3541:  /* *p fmasf4 */
    case 3540:  /* *p *muldf3negdfsubdf_vfp */
    case 3539:  /* *p *mulsf3negsfsubsf_vfp */
    case 3538:  /* *p *fmuldf3negdfadddf_vfp */
    case 3537:  /* *p *mulsf3negsfaddsf_vfp */
    case 3536:  /* *p *muldf3subdf_vfp */
    case 3535:  /* *p *mulsf3subsf_vfp */
    case 3534:  /* *p *muldf3adddf_vfp */
    case 3533:  /* *p *mulsf3addsf_vfp */
    case 3532:  /* *p *muldf3negdf_vfp */
    case 3531:  /* *p *mulsf3negsf_vfp */
    case 3530:  /* *p *muldf3_vfp */
    case 3529:  /* *p *mulsf3_vfp */
    case 3526:  /* *p *subdf3_vfp */
    case 3525:  /* *p *subsf3_vfp */
    case 3524:  /* *p *adddf3_vfp */
    case 3523:  /* *p *addsf3_vfp */
    case 3521:  /* *p *negdf2_vfp */
    case 3520:  /* *p *negsf2_vfp */
    case 3519:  /* *p *absdf2_vfp */
    case 3518:  /* *p *abssf2_vfp */
    case 3290:  /* *p *stm2_db_update */
    case 3289:  /* *p *stm2_db */
    case 3288:  /* *p *ldm2_db_update */
    case 3287:  /* *p *ldm2_db */
    case 3286:  /* *p *stm2_da_update */
    case 3285:  /* *p *stm2_da */
    case 3284:  /* *p *ldm2_da_update */
    case 3283:  /* *p *ldm2_da */
    case 3282:  /* *p *stm2_ib_update */
    case 3281:  /* *p *stm2_ib */
    case 3280:  /* *p *ldm2_ib_update */
    case 3279:  /* *p *ldm2_ib */
    case 3278:  /* *p *stm2_ia_update */
    case 3277:  /* *p *stm2_ia */
    case 3276:  /* *p *ldm2_ia_update */
    case 3275:  /* *p *ldm2_ia */
    case 3274:  /* *p *stm3_db_update */
    case 3273:  /* *p *stm3_db */
    case 3272:  /* *p *ldm3_db_update */
    case 3271:  /* *p *ldm3_db */
    case 3270:  /* *p *stm3_da_update */
    case 3269:  /* *p *stm3_da */
    case 3268:  /* *p *ldm3_da_update */
    case 3267:  /* *p *ldm3_da */
    case 3266:  /* *p *stm3_ib_update */
    case 3265:  /* *p *stm3_ib */
    case 3264:  /* *p *ldm3_ib_update */
    case 3263:  /* *p *ldm3_ib */
    case 3262:  /* *p *stm3_ia_update */
    case 3261:  /* *p *stm3_ia */
    case 3260:  /* *p *ldm3_ia_update */
    case 3259:  /* *p *ldm3_ia */
    case 3258:  /* *p *stm4_db_update */
    case 3257:  /* *p *stm4_db */
    case 3256:  /* *p *ldm4_db_update */
    case 3255:  /* *p *ldm4_db */
    case 3254:  /* *p *stm4_da_update */
    case 3253:  /* *p *stm4_da */
    case 3252:  /* *p *ldm4_da_update */
    case 3251:  /* *p *ldm4_da */
    case 3250:  /* *p *stm4_ib_update */
    case 3249:  /* *p *stm4_ib */
    case 3248:  /* *p *ldm4_ib_update */
    case 3247:  /* *p *ldm4_ib */
    case 3246:  /* *p *stm4_ia_update */
    case 3245:  /* *p *stm4_ia */
    case 3244:  /* *p *ldm4_ia_update */
    case 3243:  /* *p *ldm4_ia */
    case 3242:  /* *p *thumb2_strd_base_neg */
    case 3241:  /* *p *thumb2_strd_base */
    case 3240:  /* *p *thumb2_strd */
    case 3239:  /* *p *thumb2_ldrd_base_neg */
    case 3238:  /* *p *thumb2_ldrd_base */
    case 3237:  /* *p *thumb2_ldrd */
    case 3232:  /* *p *ldr_with_return */
    case 3231:  /* *p *pop_multiple_with_return */
    case 3230:  /* *p *pop_multiple_with_writeback_and_return */
    case 3229:  /* *p *load_multiple_with_writeback */
    case 3228:  /* *p *arith_adjacentmem */
    case 3225:  /* *p *load_indirect_jump */
    case 3223:  /* *p *arm_simple_return */
    case 3222:  /* *p *arm_return */
    case 3206:  /* *p *arm_extendqihi_insn */
    case 3180:  /* *p unaligned_storehi */
    case 3179:  /* *p unaligned_storesi */
    case 3178:  /* *p unaligned_loadhiu */
    case 3177:  /* *p unaligned_loadhis */
    case 3176:  /* *p unaligned_loadsi */
    case 3142:  /* *p *maddhidi4tt */
    case 3141:  /* *p *maddhidi4tb */
    case 3140:  /* *p maddhidi4 */
    case 3139:  /* *p *maddhisi4tt */
    case 3138:  /* *p *maddhisi4tb */
    case 3137:  /* *p maddhisi4 */
    case 3136:  /* *p *mulhisi3tt */
    case 3135:  /* *p *mulhisi3bt */
    case 3134:  /* *p *mulhisi3tb */
    case 3133:  /* *p mulhisi3 */
    case 3132:  /* *p *umulsi3_highpart_v6 */
    case 3131:  /* *p *umulsi3_highpart_nov6 */
    case 3130:  /* *p *smulsi3_highpart_v6 */
    case 3129:  /* *p *smulsi3_highpart_nov6 */
    case 3128:  /* *p *umulsidi3adddi_v6 */
    case 3127:  /* *p *umulsidi3adddi */
    case 3126:  /* *p *umulsidi3_v6 */
    case 3125:  /* *p *umulsidi3_nov6 */
    case 3124:  /* *p *mulsidi3_v6 */
    case 3123:  /* *p *mulsidi3_nov6 */
    case 3122:  /* *p *mulsidi3adddi_v6 */
    case 3121:  /* *p *mulsidi3adddi */
    case 3120:  /* *p *mulsi3subsi */
    case 3119:  /* *p *mulsi3addsi_v6 */
    case 3118:  /* *p *mulsi3addsi */
    case 3117:  /* *p *arm_mulsi3_v6 */
    case 3116:  /* *p *arm_mulsi3 */
    case 776:  /* *thumb2_mulsi_short_compare0_scratch */
    case 775:  /* *thumb2_mulsi_short_compare0 */
    case 774:  /* *thumb2_mulsi_short */
    case 763:  /* *thumb2_return */
    case 749:  /* *call_value_reg_thumb2 */
    case 748:  /* *call_reg_thumb2 */
    case 728:  /* smindf3 */
    case 727:  /* sminsf3 */
    case 726:  /* smaxdf3 */
    case 725:  /* smaxsf3 */
    case 724:  /* rounddf2 */
    case 723:  /* rintdf2 */
    case 722:  /* nearbyintdf2 */
    case 721:  /* floordf2 */
    case 720:  /* ceildf2 */
    case 719:  /* btruncdf2 */
    case 718:  /* roundsf2 */
    case 717:  /* rintsf2 */
    case 716:  /* nearbyintsf2 */
    case 715:  /* floorsf2 */
    case 714:  /* ceilsf2 */
    case 713:  /* btruncsf2 */
    case 712:  /* *push_multi_vfp */
    case 711:  /* *combine_vcvt_f64_s32 */
    case 710:  /* *combine_vcvt_f64_u32 */
    case 709:  /* *combine_vcvt_f32_s32 */
    case 708:  /* *combine_vcvt_f32_u32 */
    case 707:  /* *cmpdf_trap_vfp */
    case 706:  /* *cmpdf_vfp */
    case 705:  /* *cmpsf_trap_vfp */
    case 704:  /* *cmpsf_vfp */
    case 699:  /* *movcc_vfp */
    case 696:  /* floatunssidf2 */
    case 695:  /* floatunssisf2 */
    case 694:  /* *floatsidf2_vfp */
    case 693:  /* *floatsisf2_vfp */
    case 692:  /* fixuns_truncdfsi2 */
    case 691:  /* fixuns_truncsfsi2 */
    case 690:  /* *truncsidf2_vfp */
    case 689:  /* *truncsisf2_vfp */
    case 688:  /* truncsfhf2 */
    case 687:  /* extendhfsf2 */
    case 686:  /* *truncdfsf2_vfp */
    case 685:  /* *extendsfdf2_vfp */
    case 684:  /* *fnmadddf4 */
    case 683:  /* *fnmaddsf4 */
    case 682:  /* *fnmsubdf4 */
    case 681:  /* *fnmsubsf4 */
    case 680:  /* *fmsubdf4 */
    case 679:  /* *fmsubsf4 */
    case 678:  /* fmadf4 */
    case 677:  /* fmasf4 */
    case 676:  /* *muldf3negdfsubdf_vfp */
    case 675:  /* *mulsf3negsfsubsf_vfp */
    case 674:  /* *fmuldf3negdfadddf_vfp */
    case 673:  /* *mulsf3negsfaddsf_vfp */
    case 672:  /* *muldf3subdf_vfp */
    case 671:  /* *mulsf3subsf_vfp */
    case 670:  /* *muldf3adddf_vfp */
    case 669:  /* *mulsf3addsf_vfp */
    case 668:  /* *muldf3negdf_vfp */
    case 667:  /* *mulsf3negsf_vfp */
    case 666:  /* *muldf3_vfp */
    case 665:  /* *mulsf3_vfp */
    case 662:  /* *subdf3_vfp */
    case 661:  /* *subsf3_vfp */
    case 660:  /* *adddf3_vfp */
    case 659:  /* *addsf3_vfp */
    case 658:  /* *negdf2_vfp */
    case 657:  /* *negsf2_vfp */
    case 656:  /* *absdf2_vfp */
    case 655:  /* *abssf2_vfp */
    case 654:  /* *thumb2_movdfcc_vfp */
    case 653:  /* *movdfcc_vfp */
    case 652:  /* *thumb2_movsfcc_vfp */
    case 651:  /* *movsfcc_vfp */
    case 416:  /* *stm2_db_update */
    case 415:  /* *stm2_db */
    case 414:  /* *ldm2_db_update */
    case 413:  /* *ldm2_db */
    case 412:  /* *stm2_da_update */
    case 411:  /* *stm2_da */
    case 410:  /* *ldm2_da_update */
    case 409:  /* *ldm2_da */
    case 408:  /* *stm2_ib_update */
    case 407:  /* *stm2_ib */
    case 406:  /* *ldm2_ib_update */
    case 405:  /* *ldm2_ib */
    case 404:  /* *thumb_stm2_ia_update */
    case 403:  /* *stm2_ia_update */
    case 402:  /* *stm2_ia */
    case 401:  /* *thumb_ldm2_ia_update */
    case 400:  /* *ldm2_ia_update */
    case 399:  /* *thumb_ldm2_ia */
    case 398:  /* *ldm2_ia */
    case 397:  /* *stm3_db_update */
    case 396:  /* *stm3_db */
    case 395:  /* *ldm3_db_update */
    case 394:  /* *ldm3_db */
    case 393:  /* *stm3_da_update */
    case 392:  /* *stm3_da */
    case 391:  /* *ldm3_da_update */
    case 390:  /* *ldm3_da */
    case 389:  /* *stm3_ib_update */
    case 388:  /* *stm3_ib */
    case 387:  /* *ldm3_ib_update */
    case 386:  /* *ldm3_ib */
    case 385:  /* *thumb_stm3_ia_update */
    case 384:  /* *stm3_ia_update */
    case 383:  /* *stm3_ia */
    case 382:  /* *thumb_ldm3_ia_update */
    case 381:  /* *ldm3_ia_update */
    case 380:  /* *thumb_ldm3_ia */
    case 379:  /* *ldm3_ia */
    case 378:  /* *stm4_db_update */
    case 377:  /* *stm4_db */
    case 376:  /* *ldm4_db_update */
    case 375:  /* *ldm4_db */
    case 374:  /* *stm4_da_update */
    case 373:  /* *stm4_da */
    case 372:  /* *ldm4_da_update */
    case 371:  /* *ldm4_da */
    case 370:  /* *stm4_ib_update */
    case 369:  /* *stm4_ib */
    case 368:  /* *ldm4_ib_update */
    case 367:  /* *ldm4_ib */
    case 366:  /* *thumb_stm4_ia_update */
    case 365:  /* *stm4_ia_update */
    case 364:  /* *stm4_ia */
    case 363:  /* *thumb_ldm4_ia_update */
    case 362:  /* *ldm4_ia_update */
    case 361:  /* *thumb_ldm4_ia */
    case 360:  /* *ldm4_ia */
    case 359:  /* *thumb2_strd_base_neg */
    case 358:  /* *thumb2_strd_base */
    case 357:  /* *thumb2_strd */
    case 356:  /* *thumb2_ldrd_base_neg */
    case 355:  /* *thumb2_ldrd_base */
    case 354:  /* *thumb2_ldrd */
    case 331:  /* *vfp_pop_multiple_with_writeback */
    case 330:  /* *ldr_with_return */
    case 329:  /* *pop_multiple_with_return */
    case 328:  /* *pop_multiple_with_writeback_and_return */
    case 327:  /* *load_multiple_with_writeback */
    case 325:  /* *push_multi */
    case 321:  /* *epilogue_insns */
    case 319:  /* *arith_adjacentmem */
    case 265:  /* *load_indirect_jump */
    case 261:  /* blockage */
    case 259:  /* *arm_simple_return */
    case 258:  /* *cond_return_inverted */
    case 257:  /* *cond_return */
    case 256:  /* *arm_return */
    case 255:  /* *sibcall_value_insn */
    case 254:  /* *sibcall_insn */
    case 253:  /* *call_value_insn */
    case 252:  /* *call_insn */
    case 251:  /* *call_value_symbol */
    case 250:  /* *call_symbol */
    case 249:  /* *call_value_reg_thumb1 */
    case 248:  /* *call_value_reg_thumb1_v5 */
    case 247:  /* *call_value_mem */
    case 246:  /* *call_value_reg_arm */
    case 245:  /* *call_value_reg_armv5 */
    case 244:  /* *call_reg_thumb1 */
    case 243:  /* *call_reg_thumb1_v5 */
    case 242:  /* *call_mem */
    case 241:  /* *call_reg_arm */
    case 240:  /* *call_reg_armv5 */
    case 227:  /* *arm_cond_branch_reversed */
    case 226:  /* arm_cond_branch */
    case 207:  /* movmem8b */
    case 206:  /* movmem12b */
    case 190:  /* pic_load_addr_thumb1 */
    case 189:  /* pic_load_addr_32bit */
    case 188:  /* pic_load_addr_unified */
    case 178:  /* *arm_extendqihi_insn */
    case 140:  /* unaligned_storehi */
    case 139:  /* unaligned_storesi */
    case 138:  /* unaligned_loadhiu */
    case 137:  /* unaligned_loadhis */
    case 136:  /* unaligned_loadsi */
    case 117:  /* *store_minmaxsi */
    case 72:  /* *maddhidi4tt */
    case 71:  /* *maddhidi4tb */
    case 70:  /* maddhidi4 */
    case 69:  /* *maddhisi4tt */
    case 68:  /* *maddhisi4tb */
    case 67:  /* maddhisi4 */
    case 66:  /* *mulhisi3tt */
    case 65:  /* *mulhisi3bt */
    case 64:  /* *mulhisi3tb */
    case 63:  /* mulhisi3 */
    case 62:  /* *umulsi3_highpart_v6 */
    case 61:  /* *umulsi3_highpart_nov6 */
    case 60:  /* *smulsi3_highpart_v6 */
    case 59:  /* *smulsi3_highpart_nov6 */
    case 58:  /* *umulsidi3adddi_v6 */
    case 57:  /* *umulsidi3adddi */
    case 56:  /* *umulsidi3_v6 */
    case 55:  /* *umulsidi3_nov6 */
    case 54:  /* *mulsidi3_v6 */
    case 53:  /* *mulsidi3_nov6 */
    case 52:  /* *mulsidi3adddi_v6 */
    case 51:  /* *mulsidi3adddi */
    case 50:  /* *mulsi3subsi */
    case 49:  /* *mulsi3addsi_compare0_scratch_v6 */
    case 48:  /* *mulsi3addsi_compare0_scratch */
    case 47:  /* *mulsi3addsi_compare0_v6 */
    case 46:  /* *mulsi3addsi_compare0 */
    case 45:  /* *mulsi3addsi_v6 */
    case 44:  /* *mulsi3addsi */
    case 43:  /* *mulsi_compare0_scratch_v6 */
    case 42:  /* *mulsi_compare0_scratch */
    case 41:  /* *mulsi3_compare0_v6 */
    case 40:  /* *mulsi3_compare0 */
    case 39:  /* *thumb_mulsi3_v6 */
    case 38:  /* *thumb_mulsi3 */
    case 37:  /* *arm_mulsi3_v6 */
    case 36:  /* *arm_mulsi3 */
      return CORE_CYCLES_MULTI;

    default:
      return CORE_CYCLES_SINGLE;

    }
}

enum attr_conds
get_attr_conds (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 942:  /* bicdi3_neon */
    case 932:  /* orndi3_neon */
      extract_constrain_insn_cached (insn);
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (which_alternative != 0)
	    {
	      return CONDS_NOCOND;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 922:  /* anddi3_neon */
    case 912:  /* iordi3_neon */
      extract_constrain_insn_cached (insn);
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (((1 << which_alternative) & 0xc))
	    {
	      return CONDS_NOCOND;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 1880:  /* neon_vabdv2di_3 */
    case 1879:  /* neon_vabdv4sf_3 */
    case 1878:  /* neon_vabdv2sf_3 */
    case 1877:  /* neon_vabdv4si_3 */
    case 1876:  /* neon_vabdv2si_3 */
    case 1875:  /* neon_vabdv8hi_3 */
    case 1874:  /* neon_vabdv4hi_3 */
    case 1873:  /* neon_vabdv16qi_3 */
    case 1872:  /* neon_vabdv8qi_3 */
    case 1871:  /* neon_vabdv2di_2 */
    case 1870:  /* neon_vabdv4sf_2 */
    case 1869:  /* neon_vabdv2sf_2 */
    case 1868:  /* neon_vabdv4si_2 */
    case 1867:  /* neon_vabdv2si_2 */
    case 1866:  /* neon_vabdv8hi_2 */
    case 1865:  /* neon_vabdv4hi_2 */
    case 1864:  /* neon_vabdv16qi_2 */
    case 1863:  /* neon_vabdv8qi_2 */
    case 1862:  /* neon_vec_pack_trunc_v2di */
    case 1861:  /* neon_vec_pack_trunc_v4si */
    case 1860:  /* neon_vec_pack_trunc_v8hi */
    case 1859:  /* vec_pack_trunc_v2di */
    case 1858:  /* vec_pack_trunc_v4si */
    case 1857:  /* vec_pack_trunc_v8hi */
    case 1856:  /* neon_vec_umult_v2si */
    case 1855:  /* neon_vec_smult_v2si */
    case 1854:  /* neon_vec_umult_v4hi */
    case 1853:  /* neon_vec_smult_v4hi */
    case 1852:  /* neon_vec_umult_v8qi */
    case 1851:  /* neon_vec_smult_v8qi */
    case 1850:  /* neon_unpacku_v2si */
    case 1849:  /* neon_unpacks_v2si */
    case 1848:  /* neon_unpacku_v4hi */
    case 1847:  /* neon_unpacks_v4hi */
    case 1846:  /* neon_unpacku_v8qi */
    case 1845:  /* neon_unpacks_v8qi */
    case 1844:  /* neon_vec_ushiftl_v2si */
    case 1843:  /* neon_vec_sshiftl_v2si */
    case 1842:  /* neon_vec_ushiftl_v4hi */
    case 1841:  /* neon_vec_sshiftl_v4hi */
    case 1840:  /* neon_vec_ushiftl_v8qi */
    case 1839:  /* neon_vec_sshiftl_v8qi */
    case 1838:  /* neon_vec_umult_hi_v4si */
    case 1837:  /* neon_vec_smult_hi_v4si */
    case 1836:  /* neon_vec_umult_hi_v8hi */
    case 1835:  /* neon_vec_smult_hi_v8hi */
    case 1834:  /* neon_vec_umult_hi_v16qi */
    case 1833:  /* neon_vec_smult_hi_v16qi */
    case 1832:  /* neon_vec_umult_lo_v4si */
    case 1831:  /* neon_vec_smult_lo_v4si */
    case 1830:  /* neon_vec_umult_lo_v8hi */
    case 1829:  /* neon_vec_smult_lo_v8hi */
    case 1828:  /* neon_vec_umult_lo_v16qi */
    case 1827:  /* neon_vec_smult_lo_v16qi */
    case 1826:  /* neon_vec_unpacku_hi_v4si */
    case 1825:  /* neon_vec_unpacks_hi_v4si */
    case 1824:  /* neon_vec_unpacku_hi_v8hi */
    case 1823:  /* neon_vec_unpacks_hi_v8hi */
    case 1822:  /* neon_vec_unpacku_hi_v16qi */
    case 1821:  /* neon_vec_unpacks_hi_v16qi */
    case 1820:  /* neon_vec_unpacku_lo_v4si */
    case 1819:  /* neon_vec_unpacks_lo_v4si */
    case 1818:  /* neon_vec_unpacku_lo_v8hi */
    case 1817:  /* neon_vec_unpacks_lo_v8hi */
    case 1816:  /* neon_vec_unpacku_lo_v16qi */
    case 1815:  /* neon_vec_unpacks_lo_v16qi */
    case 1814:  /* neon_vst4_lanev4sf */
    case 1813:  /* neon_vst4_lanev4si */
    case 1812:  /* neon_vst4_lanev8hi */
    case 1811:  /* neon_vst4_lanev2sf */
    case 1810:  /* neon_vst4_lanev2si */
    case 1809:  /* neon_vst4_lanev4hi */
    case 1808:  /* neon_vst4_lanev8qi */
    case 1807:  /* neon_vst4qbv4sf */
    case 1806:  /* neon_vst4qbv4si */
    case 1805:  /* neon_vst4qbv8hi */
    case 1804:  /* neon_vst4qbv16qi */
    case 1803:  /* neon_vst4qav4sf */
    case 1802:  /* neon_vst4qav4si */
    case 1801:  /* neon_vst4qav8hi */
    case 1800:  /* neon_vst4qav16qi */
    case 1799:  /* neon_vst4di */
    case 1798:  /* neon_vst4v2sf */
    case 1797:  /* neon_vst4v2si */
    case 1796:  /* neon_vst4v4hi */
    case 1795:  /* neon_vst4v8qi */
    case 1794:  /* neon_vld4_dupdi */
    case 1793:  /* neon_vld4_dupv2sf */
    case 1792:  /* neon_vld4_dupv2si */
    case 1791:  /* neon_vld4_dupv4hi */
    case 1790:  /* neon_vld4_dupv8qi */
    case 1789:  /* neon_vld4_lanev4sf */
    case 1788:  /* neon_vld4_lanev4si */
    case 1787:  /* neon_vld4_lanev8hi */
    case 1786:  /* neon_vld4_lanev2sf */
    case 1785:  /* neon_vld4_lanev2si */
    case 1784:  /* neon_vld4_lanev4hi */
    case 1783:  /* neon_vld4_lanev8qi */
    case 1782:  /* neon_vld4qbv4sf */
    case 1781:  /* neon_vld4qbv4si */
    case 1780:  /* neon_vld4qbv8hi */
    case 1779:  /* neon_vld4qbv16qi */
    case 1778:  /* neon_vld4qav4sf */
    case 1777:  /* neon_vld4qav4si */
    case 1776:  /* neon_vld4qav8hi */
    case 1775:  /* neon_vld4qav16qi */
    case 1774:  /* neon_vld4di */
    case 1773:  /* neon_vld4v2sf */
    case 1772:  /* neon_vld4v2si */
    case 1771:  /* neon_vld4v4hi */
    case 1770:  /* neon_vld4v8qi */
    case 1769:  /* neon_vst3_lanev4sf */
    case 1768:  /* neon_vst3_lanev4si */
    case 1767:  /* neon_vst3_lanev8hi */
    case 1766:  /* neon_vst3_lanev2sf */
    case 1765:  /* neon_vst3_lanev2si */
    case 1764:  /* neon_vst3_lanev4hi */
    case 1763:  /* neon_vst3_lanev8qi */
    case 1762:  /* neon_vst3qbv4sf */
    case 1761:  /* neon_vst3qbv4si */
    case 1760:  /* neon_vst3qbv8hi */
    case 1759:  /* neon_vst3qbv16qi */
    case 1758:  /* neon_vst3qav4sf */
    case 1757:  /* neon_vst3qav4si */
    case 1756:  /* neon_vst3qav8hi */
    case 1755:  /* neon_vst3qav16qi */
    case 1754:  /* neon_vst3di */
    case 1753:  /* neon_vst3v2sf */
    case 1752:  /* neon_vst3v2si */
    case 1751:  /* neon_vst3v4hi */
    case 1750:  /* neon_vst3v8qi */
    case 1749:  /* neon_vld3_dupdi */
    case 1748:  /* neon_vld3_dupv2sf */
    case 1747:  /* neon_vld3_dupv2si */
    case 1746:  /* neon_vld3_dupv4hi */
    case 1745:  /* neon_vld3_dupv8qi */
    case 1744:  /* neon_vld3_lanev4sf */
    case 1743:  /* neon_vld3_lanev4si */
    case 1742:  /* neon_vld3_lanev8hi */
    case 1741:  /* neon_vld3_lanev2sf */
    case 1740:  /* neon_vld3_lanev2si */
    case 1739:  /* neon_vld3_lanev4hi */
    case 1738:  /* neon_vld3_lanev8qi */
    case 1737:  /* neon_vld3qbv4sf */
    case 1736:  /* neon_vld3qbv4si */
    case 1735:  /* neon_vld3qbv8hi */
    case 1734:  /* neon_vld3qbv16qi */
    case 1733:  /* neon_vld3qav4sf */
    case 1732:  /* neon_vld3qav4si */
    case 1731:  /* neon_vld3qav8hi */
    case 1730:  /* neon_vld3qav16qi */
    case 1729:  /* neon_vld3di */
    case 1728:  /* neon_vld3v2sf */
    case 1727:  /* neon_vld3v2si */
    case 1726:  /* neon_vld3v4hi */
    case 1725:  /* neon_vld3v8qi */
    case 1724:  /* neon_vst2_lanev4sf */
    case 1723:  /* neon_vst2_lanev4si */
    case 1722:  /* neon_vst2_lanev8hi */
    case 1721:  /* neon_vst2_lanev2sf */
    case 1720:  /* neon_vst2_lanev2si */
    case 1719:  /* neon_vst2_lanev4hi */
    case 1718:  /* neon_vst2_lanev8qi */
    case 1717:  /* neon_vst2v4sf */
    case 1716:  /* neon_vst2v4si */
    case 1715:  /* neon_vst2v8hi */
    case 1714:  /* neon_vst2v16qi */
    case 1713:  /* neon_vst2di */
    case 1712:  /* neon_vst2v2sf */
    case 1711:  /* neon_vst2v2si */
    case 1710:  /* neon_vst2v4hi */
    case 1709:  /* neon_vst2v8qi */
    case 1708:  /* neon_vld2_dupdi */
    case 1707:  /* neon_vld2_dupv2sf */
    case 1706:  /* neon_vld2_dupv2si */
    case 1705:  /* neon_vld2_dupv4hi */
    case 1704:  /* neon_vld2_dupv8qi */
    case 1703:  /* neon_vld2_lanev4sf */
    case 1702:  /* neon_vld2_lanev4si */
    case 1701:  /* neon_vld2_lanev8hi */
    case 1700:  /* neon_vld2_lanev2sf */
    case 1699:  /* neon_vld2_lanev2si */
    case 1698:  /* neon_vld2_lanev4hi */
    case 1697:  /* neon_vld2_lanev8qi */
    case 1696:  /* neon_vld2v4sf */
    case 1695:  /* neon_vld2v4si */
    case 1694:  /* neon_vld2v8hi */
    case 1693:  /* neon_vld2v16qi */
    case 1692:  /* neon_vld2di */
    case 1691:  /* neon_vld2v2sf */
    case 1690:  /* neon_vld2v2si */
    case 1689:  /* neon_vld2v4hi */
    case 1688:  /* neon_vld2v8qi */
    case 1687:  /* neon_vst1_lanev2di */
    case 1686:  /* neon_vst1_lanev4sf */
    case 1685:  /* neon_vst1_lanev4si */
    case 1684:  /* neon_vst1_lanev8hi */
    case 1683:  /* neon_vst1_lanev16qi */
    case 1682:  /* neon_vst1_lanedi */
    case 1681:  /* neon_vst1_lanev2sf */
    case 1680:  /* neon_vst1_lanev2si */
    case 1679:  /* neon_vst1_lanev4hi */
    case 1678:  /* neon_vst1_lanev8qi */
    case 1677:  /* neon_vst1v2di */
    case 1676:  /* neon_vst1di */
    case 1675:  /* neon_vst1v4sf */
    case 1674:  /* neon_vst1v2sf */
    case 1673:  /* neon_vst1v4si */
    case 1672:  /* neon_vst1v2si */
    case 1671:  /* neon_vst1v8hi */
    case 1670:  /* neon_vst1v4hi */
    case 1669:  /* neon_vst1v16qi */
    case 1668:  /* neon_vst1v8qi */
    case 1667:  /* neon_vld1_dupv2di */
    case 1666:  /* neon_vld1_dupv4sf */
    case 1665:  /* neon_vld1_dupv4si */
    case 1664:  /* neon_vld1_dupv8hi */
    case 1663:  /* neon_vld1_dupv16qi */
    case 1662:  /* neon_vld1_dupdi */
    case 1661:  /* neon_vld1_dupv2sf */
    case 1660:  /* neon_vld1_dupv2si */
    case 1659:  /* neon_vld1_dupv4hi */
    case 1658:  /* neon_vld1_dupv8qi */
    case 1657:  /* neon_vld1_lanev2di */
    case 1656:  /* neon_vld1_lanev4sf */
    case 1655:  /* neon_vld1_lanev4si */
    case 1654:  /* neon_vld1_lanev8hi */
    case 1653:  /* neon_vld1_lanev16qi */
    case 1652:  /* neon_vld1_lanedi */
    case 1651:  /* neon_vld1_lanev2sf */
    case 1650:  /* neon_vld1_lanev2si */
    case 1649:  /* neon_vld1_lanev4hi */
    case 1648:  /* neon_vld1_lanev8qi */
    case 1647:  /* neon_vld1v2di */
    case 1646:  /* neon_vld1di */
    case 1645:  /* neon_vld1v4sf */
    case 1644:  /* neon_vld1v2sf */
    case 1643:  /* neon_vld1v4si */
    case 1642:  /* neon_vld1v2si */
    case 1641:  /* neon_vld1v8hi */
    case 1640:  /* neon_vld1v4hi */
    case 1639:  /* neon_vld1v16qi */
    case 1638:  /* neon_vld1v8qi */
    case 1637:  /* *neon_vuzpv4sf_insn */
    case 1636:  /* *neon_vuzpv2sf_insn */
    case 1635:  /* *neon_vuzpv4si_insn */
    case 1634:  /* *neon_vuzpv2si_insn */
    case 1633:  /* *neon_vuzpv8hi_insn */
    case 1632:  /* *neon_vuzpv4hi_insn */
    case 1631:  /* *neon_vuzpv16qi_insn */
    case 1630:  /* *neon_vuzpv8qi_insn */
    case 1629:  /* *neon_vzipv4sf_insn */
    case 1628:  /* *neon_vzipv2sf_insn */
    case 1627:  /* *neon_vzipv4si_insn */
    case 1626:  /* *neon_vzipv2si_insn */
    case 1625:  /* *neon_vzipv8hi_insn */
    case 1624:  /* *neon_vzipv4hi_insn */
    case 1623:  /* *neon_vzipv16qi_insn */
    case 1622:  /* *neon_vzipv8qi_insn */
    case 1621:  /* *neon_vtrnv4sf_insn */
    case 1620:  /* *neon_vtrnv2sf_insn */
    case 1619:  /* *neon_vtrnv4si_insn */
    case 1618:  /* *neon_vtrnv2si_insn */
    case 1617:  /* *neon_vtrnv8hi_insn */
    case 1616:  /* *neon_vtrnv4hi_insn */
    case 1615:  /* *neon_vtrnv16qi_insn */
    case 1614:  /* *neon_vtrnv8qi_insn */
    case 1613:  /* neon_vtbx4v8qi */
    case 1612:  /* neon_vtbx3v8qi */
    case 1611:  /* neon_vtbx2v8qi */
    case 1610:  /* neon_vtbx1v8qi */
    case 1606:  /* neon_vtbl4v8qi */
    case 1605:  /* neon_vtbl3v8qi */
    case 1604:  /* neon_vtbl2v8qi */
    case 1603:  /* neon_vtbl1v8qi */
    case 1602:  /* neon_vsli_nv2di */
    case 1601:  /* neon_vsli_ndi */
    case 1600:  /* neon_vsli_nv4si */
    case 1599:  /* neon_vsli_nv2si */
    case 1598:  /* neon_vsli_nv8hi */
    case 1597:  /* neon_vsli_nv4hi */
    case 1596:  /* neon_vsli_nv16qi */
    case 1595:  /* neon_vsli_nv8qi */
    case 1594:  /* neon_vsri_nv2di */
    case 1593:  /* neon_vsri_ndi */
    case 1592:  /* neon_vsri_nv4si */
    case 1591:  /* neon_vsri_nv2si */
    case 1590:  /* neon_vsri_nv8hi */
    case 1589:  /* neon_vsri_nv4hi */
    case 1588:  /* neon_vsri_nv16qi */
    case 1587:  /* neon_vsri_nv8qi */
    case 1586:  /* neon_vsra_nv2di */
    case 1585:  /* neon_vsra_ndi */
    case 1584:  /* neon_vsra_nv4si */
    case 1583:  /* neon_vsra_nv2si */
    case 1582:  /* neon_vsra_nv8hi */
    case 1581:  /* neon_vsra_nv4hi */
    case 1580:  /* neon_vsra_nv16qi */
    case 1579:  /* neon_vsra_nv8qi */
    case 1578:  /* neon_vshll_nv2si */
    case 1577:  /* neon_vshll_nv4hi */
    case 1576:  /* neon_vshll_nv8qi */
    case 1575:  /* neon_vqshlu_nv2di */
    case 1574:  /* neon_vqshlu_ndi */
    case 1573:  /* neon_vqshlu_nv4si */
    case 1572:  /* neon_vqshlu_nv2si */
    case 1571:  /* neon_vqshlu_nv8hi */
    case 1570:  /* neon_vqshlu_nv4hi */
    case 1569:  /* neon_vqshlu_nv16qi */
    case 1568:  /* neon_vqshlu_nv8qi */
    case 1567:  /* neon_vqshl_nv2di */
    case 1566:  /* neon_vqshl_ndi */
    case 1565:  /* neon_vqshl_nv4si */
    case 1564:  /* neon_vqshl_nv2si */
    case 1563:  /* neon_vqshl_nv8hi */
    case 1562:  /* neon_vqshl_nv4hi */
    case 1561:  /* neon_vqshl_nv16qi */
    case 1560:  /* neon_vqshl_nv8qi */
    case 1559:  /* neon_vshl_nv2di */
    case 1558:  /* neon_vshl_ndi */
    case 1557:  /* neon_vshl_nv4si */
    case 1556:  /* neon_vshl_nv2si */
    case 1555:  /* neon_vshl_nv8hi */
    case 1554:  /* neon_vshl_nv4hi */
    case 1553:  /* neon_vshl_nv16qi */
    case 1552:  /* neon_vshl_nv8qi */
    case 1551:  /* neon_vqshrun_nv2di */
    case 1550:  /* neon_vqshrun_nv4si */
    case 1549:  /* neon_vqshrun_nv8hi */
    case 1548:  /* neon_vqshrn_nv2di */
    case 1547:  /* neon_vqshrn_nv4si */
    case 1546:  /* neon_vqshrn_nv8hi */
    case 1545:  /* neon_vshrn_nv2di */
    case 1544:  /* neon_vshrn_nv4si */
    case 1543:  /* neon_vshrn_nv8hi */
    case 1542:  /* neon_vshr_nv2di */
    case 1541:  /* neon_vshr_ndi */
    case 1540:  /* neon_vshr_nv4si */
    case 1539:  /* neon_vshr_nv2si */
    case 1538:  /* neon_vshr_nv8hi */
    case 1537:  /* neon_vshr_nv4hi */
    case 1536:  /* neon_vshr_nv16qi */
    case 1535:  /* neon_vshr_nv8qi */
    case 1534:  /* neon_vqshlv2di */
    case 1533:  /* neon_vqshldi */
    case 1532:  /* neon_vqshlv4si */
    case 1531:  /* neon_vqshlv2si */
    case 1530:  /* neon_vqshlv8hi */
    case 1529:  /* neon_vqshlv4hi */
    case 1528:  /* neon_vqshlv16qi */
    case 1527:  /* neon_vqshlv8qi */
    case 1526:  /* neon_vshlv2di */
    case 1525:  /* neon_vshldi */
    case 1524:  /* neon_vshlv4si */
    case 1523:  /* neon_vshlv2si */
    case 1522:  /* neon_vshlv8hi */
    case 1521:  /* neon_vshlv4hi */
    case 1520:  /* neon_vshlv16qi */
    case 1519:  /* neon_vshlv8qi */
    case 1518:  /* neon_vbslv2di_internal */
    case 1517:  /* neon_vbsldi_internal */
    case 1516:  /* neon_vbslv4sf_internal */
    case 1515:  /* neon_vbslv2sf_internal */
    case 1514:  /* neon_vbslv4si_internal */
    case 1513:  /* neon_vbslv2si_internal */
    case 1512:  /* neon_vbslv8hi_internal */
    case 1511:  /* neon_vbslv4hi_internal */
    case 1510:  /* neon_vbslv16qi_internal */
    case 1509:  /* neon_vbslv8qi_internal */
    case 1508:  /* neon_vrev16v16qi */
    case 1507:  /* neon_vrev16v8qi */
    case 1506:  /* neon_vrev32v8hi */
    case 1505:  /* neon_vrev32v16qi */
    case 1504:  /* neon_vrev32v4hi */
    case 1503:  /* neon_vrev32v8qi */
    case 1502:  /* neon_vrev64v2di */
    case 1501:  /* neon_vrev64v4sf */
    case 1500:  /* neon_vrev64v2sf */
    case 1499:  /* neon_vrev64v4si */
    case 1498:  /* neon_vrev64v2si */
    case 1497:  /* neon_vrev64v8hi */
    case 1496:  /* neon_vrev64v4hi */
    case 1495:  /* neon_vrev64v16qi */
    case 1494:  /* neon_vrev64v8qi */
    case 1493:  /* neon_vextv2di */
    case 1492:  /* neon_vextdi */
    case 1491:  /* neon_vextv4sf */
    case 1490:  /* neon_vextv2sf */
    case 1489:  /* neon_vextv4si */
    case 1488:  /* neon_vextv2si */
    case 1487:  /* neon_vextv8hi */
    case 1486:  /* neon_vextv4hi */
    case 1485:  /* neon_vextv16qi */
    case 1484:  /* neon_vextv8qi */
    case 1483:  /* neon_vqdmlsl_lanev2si */
    case 1482:  /* neon_vqdmlsl_lanev4hi */
    case 1481:  /* neon_vmlsl_lanev2si */
    case 1480:  /* neon_vmlsl_lanev4hi */
    case 1479:  /* neon_vmls_lanev4sf */
    case 1478:  /* neon_vmls_lanev4si */
    case 1477:  /* neon_vmls_lanev8hi */
    case 1476:  /* neon_vmls_lanev2sf */
    case 1475:  /* neon_vmls_lanev2si */
    case 1474:  /* neon_vmls_lanev4hi */
    case 1473:  /* neon_vqdmlal_lanev2si */
    case 1472:  /* neon_vqdmlal_lanev4hi */
    case 1471:  /* neon_vmlal_lanev2si */
    case 1470:  /* neon_vmlal_lanev4hi */
    case 1469:  /* neon_vmla_lanev4sf */
    case 1468:  /* neon_vmla_lanev4si */
    case 1467:  /* neon_vmla_lanev8hi */
    case 1466:  /* neon_vmla_lanev2sf */
    case 1465:  /* neon_vmla_lanev2si */
    case 1464:  /* neon_vmla_lanev4hi */
    case 1463:  /* neon_vqdmulh_lanev2si */
    case 1462:  /* neon_vqdmulh_lanev4hi */
    case 1461:  /* neon_vqdmulh_lanev4si */
    case 1460:  /* neon_vqdmulh_lanev8hi */
    case 1459:  /* neon_vqdmull_lanev2si */
    case 1458:  /* neon_vqdmull_lanev4hi */
    case 1457:  /* neon_vmull_lanev2si */
    case 1456:  /* neon_vmull_lanev4hi */
    case 1455:  /* neon_vmul_lanev4sf */
    case 1454:  /* neon_vmul_lanev4si */
    case 1453:  /* neon_vmul_lanev8hi */
    case 1452:  /* neon_vmul_lanev2sf */
    case 1451:  /* neon_vmul_lanev2si */
    case 1450:  /* neon_vmul_lanev4hi */
    case 1449:  /* neon_vmovlv2si */
    case 1448:  /* neon_vmovlv4hi */
    case 1447:  /* neon_vmovlv8qi */
    case 1446:  /* neon_vqmovunv2di */
    case 1445:  /* neon_vqmovunv4si */
    case 1444:  /* neon_vqmovunv8hi */
    case 1443:  /* neon_vqmovnv2di */
    case 1442:  /* neon_vqmovnv4si */
    case 1441:  /* neon_vqmovnv8hi */
    case 1440:  /* neon_vmovnv2di */
    case 1439:  /* neon_vmovnv4si */
    case 1438:  /* neon_vmovnv8hi */
    case 1437:  /* neon_vcvt_nv4si */
    case 1436:  /* neon_vcvt_nv2si */
    case 1435:  /* neon_vcvt_nv4sf */
    case 1434:  /* neon_vcvt_nv2sf */
    case 1433:  /* neon_vcvtv4si */
    case 1432:  /* neon_vcvtv2si */
    case 1431:  /* neon_vcvtv4sf */
    case 1430:  /* neon_vcvtv2sf */
    case 1429:  /* fixuns_truncv4sfv4si2 */
    case 1428:  /* fixuns_truncv2sfv2si2 */
    case 1427:  /* fix_truncv4sfv4si2 */
    case 1426:  /* fix_truncv2sfv2si2 */
    case 1425:  /* floatunsv4siv4sf2 */
    case 1424:  /* floatunsv2siv2sf2 */
    case 1423:  /* floatv4siv4sf2 */
    case 1422:  /* floatv2siv2sf2 */
    case 1416:  /* *neon_vswpv2di */
    case 1415:  /* *neon_vswpdi */
    case 1414:  /* *neon_vswpv4sf */
    case 1413:  /* *neon_vswpv2sf */
    case 1412:  /* *neon_vswpv4si */
    case 1411:  /* *neon_vswpv2si */
    case 1410:  /* *neon_vswpv8hi */
    case 1409:  /* *neon_vswpv4hi */
    case 1408:  /* *neon_vswpv16qi */
    case 1407:  /* *neon_vswpv8qi */
    case 1406:  /* neon_vdup_lanev4sf_internal */
    case 1405:  /* neon_vdup_lanev2sf_internal */
    case 1404:  /* neon_vdup_lanev4si_internal */
    case 1403:  /* neon_vdup_lanev2si_internal */
    case 1402:  /* neon_vdup_lanev8hi_internal */
    case 1401:  /* neon_vdup_lanev4hi_internal */
    case 1400:  /* neon_vdup_lanev16qi_internal */
    case 1399:  /* neon_vdup_lanev8qi_internal */
    case 1398:  /* neon_vdup_nv2di */
    case 1397:  /* neon_vdup_nv4sf */
    case 1396:  /* neon_vdup_nv4si */
    case 1395:  /* neon_vdup_nv2sf */
    case 1394:  /* neon_vdup_nv2si */
    case 1393:  /* neon_vdup_nv8hi */
    case 1392:  /* neon_vdup_nv16qi */
    case 1391:  /* neon_vdup_nv4hi */
    case 1390:  /* neon_vdup_nv8qi */
    case 1389:  /* neon_vget_lanev4sf_zext_internal */
    case 1388:  /* neon_vget_lanev4si_zext_internal */
    case 1387:  /* neon_vget_lanev8hi_zext_internal */
    case 1386:  /* neon_vget_lanev16qi_zext_internal */
    case 1385:  /* neon_vget_lanev4sf_sext_internal */
    case 1384:  /* neon_vget_lanev4si_sext_internal */
    case 1383:  /* neon_vget_lanev8hi_sext_internal */
    case 1382:  /* neon_vget_lanev16qi_sext_internal */
    case 1381:  /* neon_vget_lanev2sf_zext_internal */
    case 1380:  /* neon_vget_lanev2si_zext_internal */
    case 1379:  /* neon_vget_lanev4hi_zext_internal */
    case 1378:  /* neon_vget_lanev8qi_zext_internal */
    case 1377:  /* neon_vget_lanev2sf_sext_internal */
    case 1376:  /* neon_vget_lanev2si_sext_internal */
    case 1375:  /* neon_vget_lanev4hi_sext_internal */
    case 1374:  /* neon_vget_lanev8qi_sext_internal */
    case 1373:  /* neon_vrsqrtev4sf */
    case 1372:  /* neon_vrsqrtev4si */
    case 1371:  /* neon_vrsqrtev2sf */
    case 1370:  /* neon_vrsqrtev2si */
    case 1369:  /* neon_vrecpev4sf */
    case 1368:  /* neon_vrecpev4si */
    case 1367:  /* neon_vrecpev2sf */
    case 1366:  /* neon_vrecpev2si */
    case 1365:  /* popcountv16qi2 */
    case 1364:  /* popcountv8qi2 */
    case 1363:  /* clzv4si2 */
    case 1362:  /* clzv2si2 */
    case 1361:  /* clzv8hi2 */
    case 1360:  /* clzv4hi2 */
    case 1359:  /* clzv16qi2 */
    case 1358:  /* clzv8qi2 */
    case 1357:  /* neon_vclsv4si */
    case 1356:  /* neon_vclsv2si */
    case 1355:  /* neon_vclsv8hi */
    case 1354:  /* neon_vclsv4hi */
    case 1353:  /* neon_vclsv16qi */
    case 1352:  /* neon_vclsv8qi */
    case 1351:  /* neon_vqnegv4si */
    case 1350:  /* neon_vqnegv2si */
    case 1349:  /* neon_vqnegv8hi */
    case 1348:  /* neon_vqnegv4hi */
    case 1347:  /* neon_vqnegv16qi */
    case 1346:  /* neon_vqnegv8qi */
    case 1345:  /* neon_vqabsv4si */
    case 1344:  /* neon_vqabsv2si */
    case 1343:  /* neon_vqabsv8hi */
    case 1342:  /* neon_vqabsv4hi */
    case 1341:  /* neon_vqabsv16qi */
    case 1340:  /* neon_vqabsv8qi */
    case 1339:  /* neon_vrsqrtsv4sf */
    case 1338:  /* neon_vrsqrtsv2sf */
    case 1337:  /* neon_vrecpsv4sf */
    case 1336:  /* neon_vrecpsv2sf */
    case 1335:  /* neon_vpminv2sf */
    case 1334:  /* neon_vpminv2si */
    case 1333:  /* neon_vpminv4hi */
    case 1332:  /* neon_vpminv8qi */
    case 1331:  /* neon_vpmaxv2sf */
    case 1330:  /* neon_vpmaxv2si */
    case 1329:  /* neon_vpmaxv4hi */
    case 1328:  /* neon_vpmaxv8qi */
    case 1327:  /* neon_vpadalv4si */
    case 1326:  /* neon_vpadalv2si */
    case 1325:  /* neon_vpadalv8hi */
    case 1324:  /* neon_vpadalv4hi */
    case 1323:  /* neon_vpadalv16qi */
    case 1322:  /* neon_vpadalv8qi */
    case 1321:  /* neon_vpaddlv4si */
    case 1320:  /* neon_vpaddlv2si */
    case 1319:  /* neon_vpaddlv8hi */
    case 1318:  /* neon_vpaddlv4hi */
    case 1317:  /* neon_vpaddlv16qi */
    case 1316:  /* neon_vpaddlv8qi */
    case 1315:  /* neon_vminv4sf */
    case 1314:  /* neon_vminv2sf */
    case 1313:  /* neon_vminv4si */
    case 1312:  /* neon_vminv2si */
    case 1311:  /* neon_vminv8hi */
    case 1310:  /* neon_vminv4hi */
    case 1309:  /* neon_vminv16qi */
    case 1308:  /* neon_vminv8qi */
    case 1307:  /* neon_vmaxv4sf */
    case 1306:  /* neon_vmaxv2sf */
    case 1305:  /* neon_vmaxv4si */
    case 1304:  /* neon_vmaxv2si */
    case 1303:  /* neon_vmaxv8hi */
    case 1302:  /* neon_vmaxv4hi */
    case 1301:  /* neon_vmaxv16qi */
    case 1300:  /* neon_vmaxv8qi */
    case 1299:  /* neon_vabalv2si */
    case 1298:  /* neon_vabalv4hi */
    case 1297:  /* neon_vabalv8qi */
    case 1296:  /* neon_vabav4si */
    case 1295:  /* neon_vabav2si */
    case 1294:  /* neon_vabav8hi */
    case 1293:  /* neon_vabav4hi */
    case 1292:  /* neon_vabav16qi */
    case 1291:  /* neon_vabav8qi */
    case 1290:  /* neon_vabdlv2si */
    case 1289:  /* neon_vabdlv4hi */
    case 1288:  /* neon_vabdlv8qi */
    case 1287:  /* neon_vabdv4sf */
    case 1286:  /* neon_vabdv2sf */
    case 1285:  /* neon_vabdv4si */
    case 1284:  /* neon_vabdv2si */
    case 1283:  /* neon_vabdv8hi */
    case 1282:  /* neon_vabdv4hi */
    case 1281:  /* neon_vabdv16qi */
    case 1280:  /* neon_vabdv8qi */
    case 1279:  /* neon_vtstv4si */
    case 1278:  /* neon_vtstv2si */
    case 1277:  /* neon_vtstv8hi */
    case 1276:  /* neon_vtstv4hi */
    case 1275:  /* neon_vtstv16qi */
    case 1274:  /* neon_vtstv8qi */
    case 1273:  /* neon_vcagtv4sf */
    case 1272:  /* neon_vcagtv2sf */
    case 1271:  /* neon_vcagev4sf */
    case 1270:  /* neon_vcagev2sf */
    case 1269:  /* neon_vcltv4sf */
    case 1268:  /* neon_vcltv2sf */
    case 1267:  /* neon_vcltv4si */
    case 1266:  /* neon_vcltv2si */
    case 1265:  /* neon_vcltv8hi */
    case 1264:  /* neon_vcltv4hi */
    case 1263:  /* neon_vcltv16qi */
    case 1262:  /* neon_vcltv8qi */
    case 1261:  /* neon_vclev4sf */
    case 1260:  /* neon_vclev2sf */
    case 1259:  /* neon_vclev4si */
    case 1258:  /* neon_vclev2si */
    case 1257:  /* neon_vclev8hi */
    case 1256:  /* neon_vclev4hi */
    case 1255:  /* neon_vclev16qi */
    case 1254:  /* neon_vclev8qi */
    case 1253:  /* neon_vcgtuv4si */
    case 1252:  /* neon_vcgtuv2si */
    case 1251:  /* neon_vcgtuv8hi */
    case 1250:  /* neon_vcgtuv4hi */
    case 1249:  /* neon_vcgtuv16qi */
    case 1248:  /* neon_vcgtuv8qi */
    case 1247:  /* neon_vcgtv4sf */
    case 1246:  /* neon_vcgtv2sf */
    case 1245:  /* neon_vcgtv4si */
    case 1244:  /* neon_vcgtv2si */
    case 1243:  /* neon_vcgtv8hi */
    case 1242:  /* neon_vcgtv4hi */
    case 1241:  /* neon_vcgtv16qi */
    case 1240:  /* neon_vcgtv8qi */
    case 1239:  /* neon_vcgeuv4si */
    case 1238:  /* neon_vcgeuv2si */
    case 1237:  /* neon_vcgeuv8hi */
    case 1236:  /* neon_vcgeuv4hi */
    case 1235:  /* neon_vcgeuv16qi */
    case 1234:  /* neon_vcgeuv8qi */
    case 1233:  /* neon_vcgev4sf */
    case 1232:  /* neon_vcgev2sf */
    case 1231:  /* neon_vcgev4si */
    case 1230:  /* neon_vcgev2si */
    case 1229:  /* neon_vcgev8hi */
    case 1228:  /* neon_vcgev4hi */
    case 1227:  /* neon_vcgev16qi */
    case 1226:  /* neon_vcgev8qi */
    case 1225:  /* neon_vceqv4sf */
    case 1224:  /* neon_vceqv2sf */
    case 1223:  /* neon_vceqv4si */
    case 1222:  /* neon_vceqv2si */
    case 1221:  /* neon_vceqv8hi */
    case 1220:  /* neon_vceqv4hi */
    case 1219:  /* neon_vceqv16qi */
    case 1218:  /* neon_vceqv8qi */
    case 1217:  /* neon_vsubhnv2di */
    case 1216:  /* neon_vsubhnv4si */
    case 1215:  /* neon_vsubhnv8hi */
    case 1214:  /* neon_vhsubv4si */
    case 1213:  /* neon_vhsubv2si */
    case 1212:  /* neon_vhsubv8hi */
    case 1211:  /* neon_vhsubv4hi */
    case 1210:  /* neon_vhsubv16qi */
    case 1209:  /* neon_vhsubv8qi */
    case 1208:  /* neon_vqsubv2di */
    case 1207:  /* neon_vqsubdi */
    case 1206:  /* neon_vqsubv4si */
    case 1205:  /* neon_vqsubv2si */
    case 1204:  /* neon_vqsubv8hi */
    case 1203:  /* neon_vqsubv4hi */
    case 1202:  /* neon_vqsubv16qi */
    case 1201:  /* neon_vqsubv8qi */
    case 1200:  /* neon_vsubwv2si */
    case 1199:  /* neon_vsubwv4hi */
    case 1198:  /* neon_vsubwv8qi */
    case 1197:  /* neon_vsublv2si */
    case 1196:  /* neon_vsublv4hi */
    case 1195:  /* neon_vsublv8qi */
    case 1194:  /* neon_vsubv2di_unspec */
    case 1193:  /* neon_vsubdi_unspec */
    case 1192:  /* neon_vsubv4sf_unspec */
    case 1191:  /* neon_vsubv2sf_unspec */
    case 1190:  /* neon_vsubv4si_unspec */
    case 1189:  /* neon_vsubv2si_unspec */
    case 1188:  /* neon_vsubv8hi_unspec */
    case 1187:  /* neon_vsubv4hi_unspec */
    case 1186:  /* neon_vsubv16qi_unspec */
    case 1185:  /* neon_vsubv8qi_unspec */
    case 1184:  /* neon_vqdmullv2si */
    case 1183:  /* neon_vqdmullv4hi */
    case 1182:  /* neon_vmullv2si */
    case 1181:  /* neon_vmullv4hi */
    case 1180:  /* neon_vmullv8qi */
    case 1179:  /* neon_vqdmlslv2si */
    case 1178:  /* neon_vqdmlslv4hi */
    case 1177:  /* neon_vqdmlalv2si */
    case 1176:  /* neon_vqdmlalv4hi */
    case 1175:  /* neon_vqdmulhv4si */
    case 1174:  /* neon_vqdmulhv8hi */
    case 1173:  /* neon_vqdmulhv2si */
    case 1172:  /* neon_vqdmulhv4hi */
    case 1171:  /* neon_vmlslv2si */
    case 1170:  /* neon_vmlslv4hi */
    case 1169:  /* neon_vmlslv8qi */
    case 1168:  /* neon_vmlsv2di_unspec */
    case 1167:  /* neon_vmlsv4sf_unspec */
    case 1166:  /* neon_vmlsv2sf_unspec */
    case 1165:  /* neon_vmlsv4si_unspec */
    case 1164:  /* neon_vmlsv2si_unspec */
    case 1163:  /* neon_vmlsv8hi_unspec */
    case 1162:  /* neon_vmlsv4hi_unspec */
    case 1161:  /* neon_vmlsv16qi_unspec */
    case 1160:  /* neon_vmlsv8qi_unspec */
    case 1159:  /* neon_vmlalv2si */
    case 1158:  /* neon_vmlalv4hi */
    case 1157:  /* neon_vmlalv8qi */
    case 1156:  /* neon_vmlav2di_unspec */
    case 1155:  /* neon_vmlav4sf_unspec */
    case 1154:  /* neon_vmlav2sf_unspec */
    case 1153:  /* neon_vmlav4si_unspec */
    case 1152:  /* neon_vmlav2si_unspec */
    case 1151:  /* neon_vmlav8hi_unspec */
    case 1150:  /* neon_vmlav4hi_unspec */
    case 1149:  /* neon_vmlav16qi_unspec */
    case 1148:  /* neon_vmlav8qi_unspec */
    case 1147:  /* neon_vmulv4sf */
    case 1146:  /* neon_vmulv2sf */
    case 1145:  /* neon_vmulv4si */
    case 1144:  /* neon_vmulv2si */
    case 1143:  /* neon_vmulv8hi */
    case 1142:  /* neon_vmulv4hi */
    case 1141:  /* neon_vmulv16qi */
    case 1140:  /* neon_vmulv8qi */
    case 1139:  /* neon_vaddhnv2di */
    case 1138:  /* neon_vaddhnv4si */
    case 1137:  /* neon_vaddhnv8hi */
    case 1136:  /* neon_vqaddv2di */
    case 1135:  /* neon_vqadddi */
    case 1134:  /* neon_vqaddv4si */
    case 1133:  /* neon_vqaddv2si */
    case 1132:  /* neon_vqaddv8hi */
    case 1131:  /* neon_vqaddv4hi */
    case 1130:  /* neon_vqaddv16qi */
    case 1129:  /* neon_vqaddv8qi */
    case 1128:  /* neon_vhaddv4si */
    case 1127:  /* neon_vhaddv2si */
    case 1126:  /* neon_vhaddv8hi */
    case 1125:  /* neon_vhaddv4hi */
    case 1124:  /* neon_vhaddv16qi */
    case 1123:  /* neon_vhaddv8qi */
    case 1122:  /* neon_vaddwv2si */
    case 1121:  /* neon_vaddwv4hi */
    case 1120:  /* neon_vaddwv8qi */
    case 1119:  /* neon_vaddlv2si */
    case 1118:  /* neon_vaddlv4hi */
    case 1117:  /* neon_vaddlv8qi */
    case 1116:  /* neon_vaddv2di_unspec */
    case 1115:  /* neon_vadddi_unspec */
    case 1114:  /* neon_vaddv4sf_unspec */
    case 1113:  /* neon_vaddv2sf_unspec */
    case 1112:  /* neon_vaddv4si_unspec */
    case 1111:  /* neon_vaddv2si_unspec */
    case 1110:  /* neon_vaddv8hi_unspec */
    case 1109:  /* neon_vaddv4hi_unspec */
    case 1108:  /* neon_vaddv16qi_unspec */
    case 1107:  /* neon_vaddv8qi_unspec */
    case 1106:  /* *us_subv2sf_neon */
    case 1105:  /* *us_subv2si_neon */
    case 1104:  /* *us_subv4hi_neon */
    case 1103:  /* *us_subv8qi_neon */
    case 1102:  /* *ss_subv2sf_neon */
    case 1101:  /* *ss_subv2si_neon */
    case 1100:  /* *ss_subv4hi_neon */
    case 1099:  /* *ss_subv8qi_neon */
    case 1098:  /* *us_addv2sf_neon */
    case 1097:  /* *us_addv2si_neon */
    case 1096:  /* *us_addv4hi_neon */
    case 1095:  /* *us_addv8qi_neon */
    case 1094:  /* *ss_addv2sf_neon */
    case 1093:  /* *ss_addv2si_neon */
    case 1092:  /* *ss_addv4hi_neon */
    case 1091:  /* *ss_addv8qi_neon */
    case 1090:  /* neon_vpumaxv2si */
    case 1089:  /* neon_vpumaxv4hi */
    case 1088:  /* neon_vpumaxv8qi */
    case 1087:  /* neon_vpuminv2si */
    case 1086:  /* neon_vpuminv4hi */
    case 1085:  /* neon_vpuminv8qi */
    case 1084:  /* neon_vpsmaxv2sf */
    case 1083:  /* neon_vpsmaxv2si */
    case 1082:  /* neon_vpsmaxv4hi */
    case 1081:  /* neon_vpsmaxv8qi */
    case 1080:  /* neon_vpsminv2sf */
    case 1079:  /* neon_vpsminv2si */
    case 1078:  /* neon_vpsminv4hi */
    case 1077:  /* neon_vpsminv8qi */
    case 1076:  /* neon_vpadd_internalv2sf */
    case 1075:  /* neon_vpadd_internalv2si */
    case 1074:  /* neon_vpadd_internalv4hi */
    case 1073:  /* neon_vpadd_internalv8qi */
    case 1072:  /* reduc_splus_v2di */
    case 1071:  /* quad_halves_umaxv16qi */
    case 1070:  /* quad_halves_uminv16qi */
    case 1069:  /* quad_halves_smaxv16qi */
    case 1068:  /* quad_halves_sminv16qi */
    case 1067:  /* quad_halves_plusv16qi */
    case 1066:  /* quad_halves_umaxv8hi */
    case 1065:  /* quad_halves_uminv8hi */
    case 1064:  /* quad_halves_smaxv8hi */
    case 1063:  /* quad_halves_sminv8hi */
    case 1062:  /* quad_halves_plusv8hi */
    case 1061:  /* quad_halves_smaxv4sf */
    case 1060:  /* quad_halves_sminv4sf */
    case 1059:  /* quad_halves_plusv4sf */
    case 1058:  /* quad_halves_umaxv4si */
    case 1057:  /* quad_halves_uminv4si */
    case 1056:  /* quad_halves_smaxv4si */
    case 1055:  /* quad_halves_sminv4si */
    case 1054:  /* quad_halves_plusv4si */
    case 1053:  /* widen_usumv2si3 */
    case 1052:  /* widen_usumv4hi3 */
    case 1051:  /* widen_usumv8qi3 */
    case 1050:  /* widen_ssumv2si3 */
    case 1049:  /* widen_ssumv4hi3 */
    case 1048:  /* widen_ssumv8qi3 */
    case 1045:  /* lshrdi3_neon_imm_noclobber */
    case 1044:  /* ashrdi3_neon_imm_noclobber */
    case 1043:  /* unsigned_shift_di3_neon */
    case 1042:  /* signed_shift_di3_neon */
    case 1040:  /* ashldi3_neon_noclobber */
    case 1039:  /* neon_load_count */
    case 1038:  /* ashlv2di3_unsigned */
    case 1037:  /* ashlv4si3_unsigned */
    case 1036:  /* ashlv2si3_unsigned */
    case 1035:  /* ashlv8hi3_unsigned */
    case 1034:  /* ashlv4hi3_unsigned */
    case 1033:  /* ashlv16qi3_unsigned */
    case 1032:  /* ashlv8qi3_unsigned */
    case 1031:  /* ashlv2di3_signed */
    case 1030:  /* ashlv4si3_signed */
    case 1029:  /* ashlv2si3_signed */
    case 1028:  /* ashlv8hi3_signed */
    case 1027:  /* ashlv4hi3_signed */
    case 1026:  /* ashlv16qi3_signed */
    case 1025:  /* ashlv8qi3_signed */
    case 1024:  /* vlshrv4si3_imm */
    case 1023:  /* vlshrv2si3_imm */
    case 1022:  /* vlshrv8hi3_imm */
    case 1021:  /* vlshrv4hi3_imm */
    case 1020:  /* vlshrv16qi3_imm */
    case 1019:  /* vlshrv8qi3_imm */
    case 1018:  /* vashrv4si3_imm */
    case 1017:  /* vashrv2si3_imm */
    case 1016:  /* vashrv8hi3_imm */
    case 1015:  /* vashrv4hi3_imm */
    case 1014:  /* vashrv16qi3_imm */
    case 1013:  /* vashrv8qi3_imm */
    case 1012:  /* vashlv4si3 */
    case 1011:  /* vashlv2si3 */
    case 1010:  /* vashlv8hi3 */
    case 1009:  /* vashlv4hi3 */
    case 1008:  /* vashlv16qi3 */
    case 1007:  /* vashlv8qi3 */
    case 1006:  /* *smaxv4sf3_neon */
    case 1005:  /* *smaxv2sf3_neon */
    case 1004:  /* *smaxv4si3_neon */
    case 1003:  /* *smaxv2si3_neon */
    case 1002:  /* *smaxv8hi3_neon */
    case 1001:  /* *smaxv4hi3_neon */
    case 1000:  /* *smaxv16qi3_neon */
    case 999:  /* *smaxv8qi3_neon */
    case 998:  /* *sminv4sf3_neon */
    case 997:  /* *sminv2sf3_neon */
    case 996:  /* *sminv4si3_neon */
    case 995:  /* *sminv2si3_neon */
    case 994:  /* *sminv8hi3_neon */
    case 993:  /* *sminv4hi3_neon */
    case 992:  /* *sminv16qi3_neon */
    case 991:  /* *sminv8qi3_neon */
    case 990:  /* *umaxv4si3_neon */
    case 989:  /* *umaxv2si3_neon */
    case 988:  /* *umaxv8hi3_neon */
    case 987:  /* *umaxv4hi3_neon */
    case 986:  /* *umaxv16qi3_neon */
    case 985:  /* *umaxv8qi3_neon */
    case 984:  /* *uminv4si3_neon */
    case 983:  /* *uminv2si3_neon */
    case 982:  /* *uminv8hi3_neon */
    case 981:  /* *uminv4hi3_neon */
    case 980:  /* *uminv16qi3_neon */
    case 979:  /* *uminv8qi3_neon */
    case 977:  /* negv4sf2 */
    case 976:  /* negv2sf2 */
    case 975:  /* negv4si2 */
    case 974:  /* negv2si2 */
    case 973:  /* negv8hi2 */
    case 972:  /* negv4hi2 */
    case 971:  /* negv16qi2 */
    case 970:  /* negv8qi2 */
    case 969:  /* absv4sf2 */
    case 968:  /* absv2sf2 */
    case 967:  /* absv4si2 */
    case 966:  /* absv2si2 */
    case 965:  /* absv8hi2 */
    case 964:  /* absv4hi2 */
    case 963:  /* absv16qi2 */
    case 962:  /* absv8qi2 */
    case 961:  /* one_cmplv2di2 */
    case 960:  /* one_cmplv4sf2 */
    case 959:  /* one_cmplv2sf2 */
    case 958:  /* one_cmplv4si2 */
    case 957:  /* one_cmplv2si2 */
    case 956:  /* one_cmplv8hi2 */
    case 955:  /* one_cmplv4hi2 */
    case 954:  /* one_cmplv16qi2 */
    case 953:  /* one_cmplv8qi2 */
    case 951:  /* xorv2di3 */
    case 950:  /* xorv4sf3 */
    case 949:  /* xorv2sf3 */
    case 948:  /* xorv4si3 */
    case 947:  /* xorv2si3 */
    case 946:  /* xorv8hi3 */
    case 945:  /* xorv4hi3 */
    case 944:  /* xorv16qi3 */
    case 943:  /* xorv8qi3 */
    case 941:  /* bicv2di3_neon */
    case 940:  /* bicv4sf3_neon */
    case 939:  /* bicv2sf3_neon */
    case 938:  /* bicv4si3_neon */
    case 937:  /* bicv2si3_neon */
    case 936:  /* bicv8hi3_neon */
    case 935:  /* bicv4hi3_neon */
    case 934:  /* bicv16qi3_neon */
    case 933:  /* bicv8qi3_neon */
    case 931:  /* ornv2di3_neon */
    case 930:  /* ornv4sf3_neon */
    case 929:  /* ornv2sf3_neon */
    case 928:  /* ornv4si3_neon */
    case 927:  /* ornv2si3_neon */
    case 926:  /* ornv8hi3_neon */
    case 925:  /* ornv4hi3_neon */
    case 924:  /* ornv16qi3_neon */
    case 923:  /* ornv8qi3_neon */
    case 921:  /* andv2di3 */
    case 920:  /* andv4sf3 */
    case 919:  /* andv2sf3 */
    case 918:  /* andv4si3 */
    case 917:  /* andv2si3 */
    case 916:  /* andv8hi3 */
    case 915:  /* andv4hi3 */
    case 914:  /* andv16qi3 */
    case 913:  /* andv8qi3 */
    case 911:  /* iorv2di3 */
    case 910:  /* iorv4sf3 */
    case 909:  /* iorv2sf3 */
    case 908:  /* iorv4si3 */
    case 907:  /* iorv2si3 */
    case 906:  /* iorv8hi3 */
    case 905:  /* iorv4hi3 */
    case 904:  /* iorv16qi3 */
    case 903:  /* iorv8qi3 */
    case 902:  /* neon_vrintnv4sf */
    case 901:  /* neon_vrintav4sf */
    case 900:  /* neon_vrintxv4sf */
    case 899:  /* neon_vrintmv4sf */
    case 898:  /* neon_vrintzv4sf */
    case 897:  /* neon_vrintpv4sf */
    case 896:  /* neon_vrintnv2sf */
    case 895:  /* neon_vrintav2sf */
    case 894:  /* neon_vrintxv2sf */
    case 893:  /* neon_vrintmv2sf */
    case 892:  /* neon_vrintzv2sf */
    case 891:  /* neon_vrintpv2sf */
    case 890:  /* fmsubv4sf4_intrinsic */
    case 889:  /* fmsubv2sf4_intrinsic */
    case 888:  /* *fmsubv4sf4 */
    case 887:  /* *fmsubv2sf4 */
    case 886:  /* fmav4sf4_intrinsic */
    case 885:  /* fmav2sf4_intrinsic */
    case 884:  /* fmav4sf4 */
    case 883:  /* fmav2sf4 */
    case 882:  /* mulv2di3negv2diaddv2di_neon */
    case 881:  /* mulv4sf3negv4sfaddv4sf_neon */
    case 880:  /* mulv2sf3negv2sfaddv2sf_neon */
    case 879:  /* mulv4si3negv4siaddv4si_neon */
    case 878:  /* mulv2si3negv2siaddv2si_neon */
    case 877:  /* mulv8hi3negv8hiaddv8hi_neon */
    case 876:  /* mulv4hi3negv4hiaddv4hi_neon */
    case 875:  /* mulv16qi3negv16qiaddv16qi_neon */
    case 874:  /* mulv8qi3negv8qiaddv8qi_neon */
    case 873:  /* mulv2di3addv2di_neon */
    case 872:  /* mulv4sf3addv4sf_neon */
    case 871:  /* mulv2sf3addv2sf_neon */
    case 870:  /* mulv4si3addv4si_neon */
    case 869:  /* mulv2si3addv2si_neon */
    case 868:  /* mulv8hi3addv8hi_neon */
    case 867:  /* mulv4hi3addv4hi_neon */
    case 866:  /* mulv16qi3addv16qi_neon */
    case 865:  /* mulv8qi3addv8qi_neon */
    case 864:  /* *mulv2di3_neon */
    case 863:  /* *mulv4sf3_neon */
    case 862:  /* *mulv2sf3_neon */
    case 861:  /* *mulv4si3_neon */
    case 860:  /* *mulv2si3_neon */
    case 859:  /* *mulv8hi3_neon */
    case 858:  /* *mulv4hi3_neon */
    case 857:  /* *mulv16qi3_neon */
    case 856:  /* *mulv8qi3_neon */
    case 854:  /* *subv2di3_neon */
    case 853:  /* *subv4sf3_neon */
    case 852:  /* *subv2sf3_neon */
    case 851:  /* *subv4si3_neon */
    case 850:  /* *subv2si3_neon */
    case 849:  /* *subv8hi3_neon */
    case 848:  /* *subv4hi3_neon */
    case 847:  /* *subv16qi3_neon */
    case 846:  /* *subv8qi3_neon */
    case 844:  /* *addv2di3_neon */
    case 843:  /* *addv4sf3_neon */
    case 842:  /* *addv2sf3_neon */
    case 841:  /* *addv4si3_neon */
    case 840:  /* *addv2si3_neon */
    case 839:  /* *addv8hi3_neon */
    case 838:  /* *addv4hi3_neon */
    case 837:  /* *addv16qi3_neon */
    case 836:  /* *addv8qi3_neon */
    case 835:  /* vec_extractv2di */
    case 834:  /* vec_extractv4sf */
    case 833:  /* vec_extractv4si */
    case 832:  /* vec_extractv8hi */
    case 831:  /* vec_extractv16qi */
    case 830:  /* vec_extractv2sf */
    case 829:  /* vec_extractv2si */
    case 828:  /* vec_extractv4hi */
    case 827:  /* vec_extractv8qi */
    case 826:  /* vec_setv2di_internal */
    case 825:  /* vec_setv4sf_internal */
    case 824:  /* vec_setv4si_internal */
    case 823:  /* vec_setv8hi_internal */
    case 822:  /* vec_setv16qi_internal */
    case 821:  /* vec_setv2sf_internal */
    case 820:  /* vec_setv2si_internal */
    case 819:  /* vec_setv4hi_internal */
    case 818:  /* vec_setv8qi_internal */
    case 817:  /* *movmisalignv2di_neon_load */
    case 816:  /* *movmisalignv4sf_neon_load */
    case 815:  /* *movmisalignv4si_neon_load */
    case 814:  /* *movmisalignv8hi_neon_load */
    case 813:  /* *movmisalignv16qi_neon_load */
    case 812:  /* *movmisalignv2di_neon_store */
    case 811:  /* *movmisalignv4sf_neon_store */
    case 810:  /* *movmisalignv4si_neon_store */
    case 809:  /* *movmisalignv8hi_neon_store */
    case 808:  /* *movmisalignv16qi_neon_store */
    case 807:  /* *movmisaligndi_neon_load */
    case 806:  /* *movmisalignv2sf_neon_load */
    case 805:  /* *movmisalignv2si_neon_load */
    case 804:  /* *movmisalignv4hi_neon_load */
    case 803:  /* *movmisalignv8qi_neon_load */
    case 802:  /* *movmisaligndi_neon_store */
    case 801:  /* *movmisalignv2sf_neon_store */
    case 800:  /* *movmisalignv2si_neon_store */
    case 799:  /* *movmisalignv4hi_neon_store */
    case 798:  /* *movmisalignv8qi_neon_store */
    case 797:  /* *neon_movxi */
    case 796:  /* *neon_movci */
    case 795:  /* *neon_movoi */
    case 794:  /* *neon_movei */
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  return CONDS_UNCONDITIONAL;
        }

    case 793:  /* *neon_movti */
    case 792:  /* *neon_movv2di */
    case 791:  /* *neon_movv4sf */
    case 790:  /* *neon_movv4si */
    case 789:  /* *neon_movv8hi */
    case 788:  /* *neon_movv16qi */
      extract_constrain_insn_cached (insn);
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (!((1 << which_alternative) & 0x3f))
	    {
	      return CONDS_NOCOND;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 787:  /* *neon_movdi */
    case 786:  /* *neon_movv2sf */
    case 785:  /* *neon_movv2si */
    case 784:  /* *neon_movv4hi */
    case 783:  /* *neon_movv8qi */
      extract_constrain_insn_cached (insn);
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (!((1 << which_alternative) & 0x35))
	    {
	      return CONDS_NOCOND;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 3517:  /* *p *movdf_vfp */
    case 3516:  /* *p *thumb2_movsf_vfp */
    case 3515:  /* *p *movsf_vfp */
    case 650:  /* *thumb2_movdf_vfp */
    case 649:  /* *movdf_vfp */
    case 648:  /* *thumb2_movsf_vfp */
    case 647:  /* *movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (!((1 << which_alternative) & 0x83))
	    {
	      return CONDS_NOCOND;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 643:  /* *movdi_vfp */
      extract_constrain_insn_cached (insn);
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (!((1 << which_alternative) & 0x380))
	    {
	      return CONDS_NOCOND;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 3513:  /* *p *thumb2_movsi_vfp */
    case 642:  /* *thumb2_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (!((1 << which_alternative) & 0x700))
	    {
	      return CONDS_NOCOND;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 3512:  /* *p *arm_movsi_vfp */
    case 641:  /* *arm_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (!((1 << which_alternative) & 0x1c0))
	    {
	      return CONDS_NOCOND;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 203:  /* *thumb1_movsf_insn */
    case 201:  /* *thumb1_movhf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CONDS_CLOB;
        }
      else
        {
	  return CONDS_NOCOND;
        }

    case 199:  /* *thumb1_movqi_insn */
    case 195:  /* *thumb1_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CONDS_CLOB;
        }
      else if (((1 << which_alternative) & 0x1e))
        {
	  return CONDS_NOCOND;
        }
      else
        {
	  return CONDS_CLOB;
        }

    case 187:  /* *thumb1_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CONDS_SET;
        }
      else if (which_alternative == 1)
        {
	  return CONDS_CLOB;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
	    {
	      return CONDS_CLOB;
	    }
	  else
	    {
	      return CONDS_NOCOND;
	    }
        }
      else
        {
	  return CONDS_NOCOND;
        }

    case 3188:  /* *p one_cmpldi2 */
    case 952:  /* xordi3_neon */
    case 153:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (((1 << which_alternative) & 0x6))
	    {
	      return CONDS_NOCOND;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 3579:  /* *p *thumb2_neg_abssi2 */
    case 3578:  /* *p *thumb2_abssi2 */
    case 3187:  /* *p *arm_neg_abssi2 */
    case 3186:  /* *p *arm_abssi2 */
    case 738:  /* *thumb2_neg_abssi2 */
    case 737:  /* *thumb2_abssi2 */
    case 151:  /* *arm_neg_abssi2 */
    case 149:  /* *arm_abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
	    {
	      return CONDS_CLOB;
	    }
	  else
	    {
	      return CONDS_NOCOND;
	    }
        }

    case 845:  /* adddi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if ((((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES)))) || (get_attr_type (insn) == TYPE_CALL))
	    {
	      return CONDS_CLOB;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }
      else if (which_alternative == 1)
        {
	  return CONDS_CLOB;
        }
      else if (which_alternative == 2)
        {
	  return CONDS_CLOB;
        }
      else if (which_alternative == 3)
        {
	  if ((((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES)))) || (get_attr_type (insn) == TYPE_CALL))
	    {
	      return CONDS_CLOB;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }
      else if (which_alternative == 4)
        {
	  return CONDS_CLOB;
        }
      else if (which_alternative == 5)
        {
	  return CONDS_CLOB;
        }
      else
        {
	  return CONDS_CLOB;
        }

    case 855:  /* subdi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if ((((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES)))) || (get_attr_type (insn) == TYPE_CALL))
	    {
	      return CONDS_CLOB;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }
      else if (which_alternative == 1)
        {
	  return CONDS_CLOB;
        }
      else if (which_alternative == 2)
        {
	  return CONDS_CLOB;
        }
      else if (which_alternative == 3)
        {
	  return CONDS_CLOB;
        }
      else
        {
	  if ((((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES)))) || (get_attr_type (insn) == TYPE_CALL))
	    {
	      return CONDS_CLOB;
	    }
	  else
	    {
	      return CONDS_UNCONDITIONAL;
	    }
        }

    case 200:  /* *arm32_movhf */
    case 331:  /* *vfp_pop_multiple_with_writeback */
    case 645:  /* *movhf_vfp_neon */
    case 646:  /* *movhf_vfp */
    case 1881:  /* *memory_barrier */
    case 3217:  /* *p *arm32_movhf */
      return CONDS_UNCONDITIONAL;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 749:  /* *call_value_reg_thumb2 */
    case 748:  /* *call_reg_thumb2 */
    case 255:  /* *sibcall_value_insn */
    case 254:  /* *sibcall_insn */
    case 253:  /* *call_value_insn */
    case 252:  /* *call_insn */
    case 251:  /* *call_value_symbol */
    case 250:  /* *call_symbol */
    case 249:  /* *call_value_reg_thumb1 */
    case 248:  /* *call_value_reg_thumb1_v5 */
    case 247:  /* *call_value_mem */
    case 246:  /* *call_value_reg_arm */
    case 245:  /* *call_value_reg_armv5 */
    case 244:  /* *call_reg_thumb1 */
    case 243:  /* *call_reg_thumb1_v5 */
    case 242:  /* *call_mem */
    case 241:  /* *call_reg_arm */
    case 240:  /* *call_reg_armv5 */
    case 2:  /* *arm_adddi3 */
    case 3:  /* *adddi_sesidi_di */
    case 4:  /* *adddi_zesidi_di */
    case 24:  /* *arm_subdi3 */
    case 26:  /* *subdi_di_zesidi */
    case 27:  /* *subdi_di_sesidi */
    case 28:  /* *subdi_zesidi_di */
    case 29:  /* *subdi_sesidi_di */
    case 30:  /* *subdi_zesidi_zesidi */
    case 81:  /* *ne_zeroextractsi */
    case 82:  /* *ne_zeroextractsi_shifted */
    case 83:  /* *ite_ne_zeroextractsi */
    case 84:  /* *ite_ne_zeroextractsi_shifted */
    case 112:  /* *arm_smax_insn */
    case 114:  /* *arm_smin_insn */
    case 115:  /* *arm_umaxsi3 */
    case 116:  /* *arm_uminsi3 */
    case 117:  /* *store_minmaxsi */
    case 118:  /* *minmax_arithsi */
    case 123:  /* arm_ashldi3_1bit */
    case 125:  /* arm_ashrdi3_1bit */
    case 127:  /* arm_lshrdi3_1bit */
    case 145:  /* *arm_negdi2 */
    case 262:  /* arm_casesi_internal */
    case 266:  /* *thumb1_indirect_jump */
    case 278:  /* *cond_arith */
    case 279:  /* *cond_sub */
    case 284:  /* *ior_scc_scc */
    case 286:  /* *and_scc_scc */
    case 288:  /* *and_scc_scc_nodom */
    case 289:  /* *negscc */
    case 290:  /* movcond */
    case 291:  /* *ifcompare_plus_move */
    case 293:  /* *ifcompare_move_plus */
    case 295:  /* *ifcompare_arith_arith */
    case 297:  /* *ifcompare_arith_move */
    case 299:  /* *ifcompare_move_arith */
    case 301:  /* *ifcompare_move_not */
    case 303:  /* *ifcompare_not_move */
    case 305:  /* *ifcompare_shift_move */
    case 307:  /* *ifcompare_move_shift */
    case 309:  /* *ifcompare_shift_shift */
    case 311:  /* *ifcompare_not_arith */
    case 313:  /* *ifcompare_arith_not */
    case 315:  /* *ifcompare_neg_move */
    case 317:  /* *ifcompare_move_neg */
    case 321:  /* *epilogue_insns */
    case 323:  /* *sign_extract_onebit */
    case 324:  /* *not_signextract_onebit */
    case 348:  /* load_tp_soft */
    case 349:  /* tlscall */
    case 426:  /* *iwmmxt_movsi_insn */
    case 732:  /* *thumb2_smaxsi3 */
    case 733:  /* *thumb2_sminsi3 */
    case 734:  /* *thumb32_umaxsi3 */
    case 735:  /* *thumb2_uminsi3 */
    case 736:  /* *thumb2_negdi2 */
    case 750:  /* *thumb2_indirect_jump */
    case 754:  /* *thumb2_cond_arith */
    case 755:  /* *thumb2_cond_sub */
    case 756:  /* *thumb2_negscc */
    case 757:  /* *thumb2_movcond */
    case 761:  /* thumb2_casesi_internal */
    case 762:  /* thumb2_casesi_internal_pic */
    case 2025:  /* ssmulsa3 */
    case 2026:  /* usmulusa3 */
      return CONDS_CLOB;

    case 7:  /* addsi3_compare0 */
    case 8:  /* *addsi3_compare0_scratch */
    case 9:  /* *compare_negsi_si */
    case 10:  /* *cmpsi2_addneg */
    case 11:  /* *addsi3_compare_op1 */
    case 12:  /* *addsi3_compare_op2 */
    case 13:  /* *compare_addsi2_op0 */
    case 14:  /* *compare_addsi2_op1 */
    case 21:  /* *addsi3_carryin_clobercc_ltu */
    case 22:  /* *addsi3_carryin_clobercc_geu */
    case 31:  /* thumb1_subsi3_insn */
    case 33:  /* *subsi3_compare0 */
    case 34:  /* *subsi3_compare */
    case 40:  /* *mulsi3_compare0 */
    case 41:  /* *mulsi3_compare0_v6 */
    case 42:  /* *mulsi_compare0_scratch */
    case 43:  /* *mulsi_compare0_scratch_v6 */
    case 46:  /* *mulsi3addsi_compare0 */
    case 47:  /* *mulsi3addsi_compare0_v6 */
    case 48:  /* *mulsi3addsi_compare0_scratch */
    case 49:  /* *mulsi3addsi_compare0_scratch_v6 */
    case 77:  /* *thumb1_andsi3_insn */
    case 78:  /* *andsi3_compare0 */
    case 79:  /* *andsi3_compare0_scratch */
    case 80:  /* *zeroextractsi_compare0_scratch */
    case 91:  /* thumb1_bicsi3 */
    case 93:  /* *andsi_notsi_si_compare0 */
    case 94:  /* *andsi_notsi_si_compare0_scratch */
    case 99:  /* *thumb1_iorsi3_insn */
    case 100:  /* *iorsi3_compare0 */
    case 101:  /* *iorsi3_compare0_scratch */
    case 106:  /* *thumb1_xorsi3_insn */
    case 107:  /* *xorsi3_compare0 */
    case 108:  /* *xorsi3_compare0_scratch */
    case 124:  /* *thumb1_ashlsi3 */
    case 126:  /* *thumb1_ashrsi3 */
    case 128:  /* *thumb1_lshrsi3 */
    case 131:  /* *shiftsi3_compare0 */
    case 132:  /* *shiftsi3_compare0_scratch */
    case 134:  /* *not_shiftsi_compare0 */
    case 135:  /* *not_shiftsi_compare0_scratch */
    case 156:  /* *notsi_compare0 */
    case 157:  /* *notsi_compare0_scratch */
    case 173:  /* *compareqi_eq0 */
    case 194:  /* *movsi_compare0 */
    case 217:  /* *arm_cmpsi_insn */
    case 218:  /* *cmpsi_shiftsi */
    case 219:  /* *cmpsi_shiftsi_swp */
    case 220:  /* *arm_cmpsi_negshiftsi_si */
    case 221:  /* *arm_cmpdi_insn */
    case 222:  /* *arm_cmpdi_unsigned */
    case 223:  /* *arm_cmpdi_zero */
    case 224:  /* *thumb_cmpdi_zero */
    case 225:  /* *deleted_compare */
    case 260:  /* *check_arch2 */
    case 269:  /* *arith_shiftsi_compare0 */
    case 270:  /* *arith_shiftsi_compare0_scratch */
    case 272:  /* *sub_shiftsi_compare0 */
    case 273:  /* *sub_shiftsi_compare0_scratch */
    case 280:  /* *cmp_ite0 */
    case 281:  /* *cmp_ite1 */
    case 282:  /* *cmp_and */
    case 283:  /* *cmp_ior */
    case 285:  /* *ior_scc_scc_cmp */
    case 287:  /* *and_scc_scc_cmp */
    case 699:  /* *movcc_vfp */
    case 742:  /* *thumb2_cmpsi_neg_shiftsi */
    case 772:  /* thumb2_addsi3_compare0 */
    case 773:  /* *thumb2_addsi3_compare0_scratch */
    case 3110:  /* *p *addsi3_compare0_scratch */
    case 3111:  /* *p *compare_negsi_si */
    case 3112:  /* *p *compare_addsi2_op0 */
    case 3113:  /* *p *compare_addsi2_op1 */
    case 3145:  /* *p *zeroextractsi_compare0_scratch */
    case 3203:  /* *p *compareqi_eq0 */
    case 3219:  /* *p *arm_cmpsi_insn */
    case 3220:  /* *p *arm_cmpsi_negshiftsi_si */
      return CONDS_SET;

    case 15:  /* *addsi3_carryin_ltu */
    case 16:  /* *addsi3_carryin_geu */
    case 17:  /* *addsi3_carryin_alt2_ltu */
    case 18:  /* *addsi3_carryin_alt2_geu */
    case 19:  /* *addsi3_carryin_shift_ltu */
    case 20:  /* *addsi3_carryin_shift_geu */
    case 23:  /* *arm_incscc */
    case 35:  /* *arm_decscc */
    case 226:  /* arm_cond_branch */
    case 227:  /* *arm_cond_branch_reversed */
    case 228:  /* *mov_scc */
    case 229:  /* *mov_negscc */
    case 230:  /* *mov_notscc */
    case 236:  /* *movsicc_insn */
    case 237:  /* *movsfcc_soft_insn */
    case 257:  /* *cond_return */
    case 258:  /* *cond_return_inverted */
    case 274:  /* *and_scc */
    case 275:  /* *ior_scc */
    case 277:  /* *cond_move */
    case 292:  /* *if_plus_move */
    case 294:  /* *if_move_plus */
    case 296:  /* *if_arith_arith */
    case 298:  /* *if_arith_move */
    case 300:  /* *if_move_arith */
    case 302:  /* *if_move_not */
    case 304:  /* *if_not_move */
    case 306:  /* *if_shift_move */
    case 308:  /* *if_move_shift */
    case 310:  /* *if_shift_shift */
    case 312:  /* *if_not_arith */
    case 314:  /* *if_arith_not */
    case 316:  /* *if_neg_move */
    case 318:  /* *if_move_neg */
    case 322:  /* *cond_move_not */
    case 651:  /* *movsfcc_vfp */
    case 652:  /* *thumb2_movsfcc_vfp */
    case 653:  /* *movdfcc_vfp */
    case 654:  /* *thumb2_movdfcc_vfp */
    case 729:  /* *thumb2_incscc */
    case 730:  /* *thumb2_decscc */
    case 743:  /* *thumb2_mov_scc */
    case 744:  /* *thumb2_mov_negscc */
    case 745:  /* *thumb2_mov_notscc */
    case 746:  /* *thumb2_movsicc_insn */
    case 747:  /* *thumb2_movsfcc_soft_insn */
    case 751:  /* *thumb2_and_scc */
    case 752:  /* *thumb2_ior_scc */
    case 753:  /* *thumb2_cond_move */
      return CONDS_USE;

    default:
      if (((
#line 75 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb1_code)) == (
(IS_THUMB1_YES))))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  return CONDS_NOCOND;
        }

    }
}

enum attr_ce_enabled
get_attr_ce_enabled (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 3188:  /* *p one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CE_ENABLED_NO;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return CE_ENABLED_YES;
        }
      else
        {
	  return CE_ENABLED_NO;
        }

    case 3186:  /* *p *arm_abssi2 */
    case 3187:  /* *p *arm_neg_abssi2 */
    case 3578:  /* *p *thumb2_abssi2 */
    case 3579:  /* *p *thumb2_neg_abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CE_ENABLED_NO;
        }
      else
        {
	  return CE_ENABLED_YES;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return CE_ENABLED_YES;

    }
}

enum attr_enabled
get_attr_enabled (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 3188:  /* *p one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6))
        {
	  if (get_attr_arch_enabled (insn) == ARCH_ENABLED_NO)
	    {
	      return ENABLED_NO;
	    }
	  else
	    {
	      return ENABLED_YES;
	    }
        }
      else
        {
	  return ENABLED_NO;
        }

    case 3579:  /* *p *thumb2_neg_abssi2 */
    case 3578:  /* *p *thumb2_abssi2 */
    case 3187:  /* *p *arm_neg_abssi2 */
    case 3186:  /* *p *arm_abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return ENABLED_YES;
        }
      else
        {
	  return ENABLED_NO;
        }

    case 1047:  /* lshrdi3_neon */
    case 1046:  /* ashrdi3_neon */
    case 1041:  /* ashldi3_neon */
      extract_constrain_insn_cached (insn);
      if ((get_attr_arch_enabled (insn) == ARCH_ENABLED_NO) || ((((1 << which_alternative) & 0xc)) && (! (
#line 164 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(optimize_function_for_speed_p (cfun))))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 3421:  /* *p ashldi3_di */
    case 3420:  /* *p ashlv2si3_di */
    case 3419:  /* *p ashlv4hi3_di */
    case 3418:  /* *p lshrdi3_di */
    case 3417:  /* *p lshrv2si3_di */
    case 3416:  /* *p lshrv4hi3_di */
    case 3415:  /* *p ashrdi3_di */
    case 3414:  /* *p ashrv2si3_di */
    case 3413:  /* *p ashrv4hi3_di */
    case 3412:  /* *p rordi3_di */
    case 3411:  /* *p rorv2si3_di */
    case 3410:  /* *p rorv4hi3_di */
    case 3409:  /* *p ashldi3_iwmmxt */
    case 3408:  /* *p ashlv2si3_iwmmxt */
    case 3407:  /* *p ashlv4hi3_iwmmxt */
    case 3406:  /* *p lshrdi3_iwmmxt */
    case 3405:  /* *p lshrv2si3_iwmmxt */
    case 3404:  /* *p lshrv4hi3_iwmmxt */
    case 3403:  /* *p ashrdi3_iwmmxt */
    case 3402:  /* *p ashrv2si3_iwmmxt */
    case 3401:  /* *p ashrv4hi3_iwmmxt */
    case 3400:  /* *p rordi3 */
    case 3399:  /* *p rorv2si3 */
    case 3398:  /* *p rorv4hi3 */
    case 550:  /* ashldi3_di */
    case 549:  /* ashlv2si3_di */
    case 548:  /* ashlv4hi3_di */
    case 547:  /* lshrdi3_di */
    case 546:  /* lshrv2si3_di */
    case 545:  /* lshrv4hi3_di */
    case 544:  /* ashrdi3_di */
    case 543:  /* ashrv2si3_di */
    case 542:  /* ashrv4hi3_di */
    case 541:  /* rordi3_di */
    case 540:  /* rorv2si3_di */
    case 539:  /* rorv4hi3_di */
    case 538:  /* ashldi3_iwmmxt */
    case 537:  /* ashlv2si3_iwmmxt */
    case 536:  /* ashlv4hi3_iwmmxt */
    case 535:  /* lshrdi3_iwmmxt */
    case 534:  /* lshrv2si3_iwmmxt */
    case 533:  /* lshrv4hi3_iwmmxt */
    case 532:  /* ashrdi3_iwmmxt */
    case 531:  /* ashrv2si3_iwmmxt */
    case 530:  /* ashrv4hi3_iwmmxt */
    case 529:  /* rordi3 */
    case 528:  /* rorv2si3 */
    case 527:  /* rorv4hi3 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (
#line 151 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_REALLY_IWMMXT2))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 283:  /* *cmp_ior */
    case 282:  /* *cmp_and */
    case 281:  /* *cmp_ite1 */
    case 280:  /* *cmp_ite0 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x1f)) && (! (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 3226:  /* *p *arith_shiftsi */
    case 268:  /* *arith_shiftsi */
      if ((get_attr_insn_enabled (insn) == INSN_ENABLED_NO) || (get_attr_arch_enabled (insn) == ARCH_ENABLED_NO))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 3219:  /* *p *arm_cmpsi_insn */
    case 217:  /* *arm_cmpsi_insn */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x3)) && (! (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 3216:  /* *p *arm_movqi_insn */
    case 198:  /* *arm_movqi_insn */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x18)) && (! (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 3180:  /* *p unaligned_storehi */
    case 3179:  /* *p unaligned_storesi */
    case 3178:  /* *p unaligned_loadhiu */
    case 3177:  /* *p unaligned_loadhis */
    case 3176:  /* *p unaligned_loadsi */
    case 140:  /* unaligned_storehi */
    case 139:  /* unaligned_storesi */
    case 138:  /* unaligned_loadhiu */
    case 137:  /* unaligned_loadhis */
    case 136:  /* unaligned_loadsi */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (
#line 117 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(TARGET_THUMB2))))
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 3227:  /* *p *sub_shiftsi */
    case 3196:  /* *p extendsidi2 */
    case 3195:  /* *p extendhidi2 */
    case 3194:  /* *p extendqidi2 */
    case 3193:  /* *p zero_extendsidi2 */
    case 3192:  /* *p zero_extendhidi2 */
    case 3191:  /* *p zero_extendqidi2 */
    case 3175:  /* *p *not_shiftsi */
    case 3159:  /* *p *iorsi3_insn */
    case 3108:  /* *p *arm_addsi3 */
    case 952:  /* xordi3_neon */
    case 932:  /* orndi3_neon */
    case 922:  /* anddi3_neon */
    case 912:  /* iordi3_neon */
    case 855:  /* subdi3_neon */
    case 845:  /* adddi3_neon */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 643:  /* *movdi_vfp */
    case 353:  /* *arm_rev16 */
    case 352:  /* *arm_revsh */
    case 351:  /* *arm_rev */
    case 273:  /* *sub_shiftsi_compare0_scratch */
    case 272:  /* *sub_shiftsi_compare0 */
    case 271:  /* *sub_shiftsi */
    case 270:  /* *arith_shiftsi_compare0_scratch */
    case 269:  /* *arith_shiftsi_compare0 */
    case 219:  /* *cmpsi_shiftsi_swp */
    case 218:  /* *cmpsi_shiftsi */
    case 188:  /* pic_load_addr_unified */
    case 163:  /* extendsidi2 */
    case 162:  /* extendhidi2 */
    case 161:  /* extendqidi2 */
    case 160:  /* zero_extendsidi2 */
    case 159:  /* zero_extendhidi2 */
    case 158:  /* zero_extendqidi2 */
    case 153:  /* one_cmpldi2 */
    case 135:  /* *not_shiftsi_compare0_scratch */
    case 134:  /* *not_shiftsi_compare0 */
    case 133:  /* *not_shiftsi */
    case 98:  /* *iorsi3_insn */
    case 5:  /* *arm_addsi3 */
      if (get_attr_arch_enabled (insn) == ARCH_ENABLED_NO)
        {
	  return ENABLED_NO;
        }
      else
        {
	  return ENABLED_YES;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_ce_enabled (insn) == CE_ENABLED_YES)
        {
	  if (get_attr_insn_enabled (insn) == INSN_ENABLED_NO)
	    {
	      return ENABLED_NO;
	    }
	  else if (get_attr_arch_enabled (insn) == ARCH_ENABLED_NO)
	    {
	      return ENABLED_NO;
	    }
	  else if (get_attr_opt_enabled (insn) == OPT_ENABLED_NO)
	    {
	      return ENABLED_NO;
	    }
	  else
	    {
	      return ENABLED_YES;
	    }
        }
      else
        {
	  return ENABLED_NO;
        }

    default:
      return ENABLED_YES;

    }
}

enum attr_far_jump
get_attr_far_jump (rtx insn ATTRIBUTE_UNUSED)
{
  int cached_length ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 214:  /* *cbranchne_decr1 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 7355 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(which_alternative)) == (0)) && ((cached_length = get_attr_length (insn)) == 8)) || ((cached_length = get_attr_length (insn)) == 10 /* 0xa */))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 215:  /* *addsi3_cbranch */
      extract_constrain_insn_cached (insn);
      if ((((
#line 7456 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(which_alternative)) < (2)) && ((cached_length = get_attr_length (insn)) == 8)) || ((cached_length = get_attr_length (insn)) == 10 /* 0xa */))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 208:  /* cbranchsi4_insn */
    case 209:  /* cbranchsi4_scratch */
    case 210:  /* *negated_cbranchsi4 */
    case 211:  /* *tbit_cbranch */
    case 212:  /* *tlobits_cbranch */
    case 213:  /* *tstsi3_cbranch */
    case 216:  /* *addsi3_cbranch_scratch */
      if (get_attr_length (insn) == 8)
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 239:  /* *thumb_jump */
      if (get_attr_length (insn) == 4)
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return FAR_JUMP_NO;

    }
}

enum attr_insn
get_attr_insn (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 793:  /* *neon_movti */
    case 792:  /* *neon_movv2di */
    case 791:  /* *neon_movv4sf */
    case 790:  /* *neon_movv4si */
    case 789:  /* *neon_movv8hi */
    case 788:  /* *neon_movv16qi */
    case 787:  /* *neon_movdi */
    case 786:  /* *neon_movv2sf */
    case 785:  /* *neon_movv2si */
    case 784:  /* *neon_movv4hi */
    case 783:  /* *neon_movv8qi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return INSN_OTHER;
        }
      else if (which_alternative == 6)
        {
	  return INSN_MOV;
        }
      else
        {
	  return INSN_OTHER;
        }

    case 3516:  /* *p *thumb2_movsf_vfp */
    case 3515:  /* *p *movsf_vfp */
    case 648:  /* *thumb2_movsf_vfp */
    case 647:  /* *movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xff))
        {
	  return INSN_OTHER;
        }
      else
        {
	  return INSN_MOV;
        }

    case 236:  /* *movsicc_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return INSN_MOV;
        }
      else if (which_alternative == 1)
        {
	  return INSN_MVN;
        }
      else if (which_alternative == 2)
        {
	  return INSN_MOV;
        }
      else if (which_alternative == 3)
        {
	  return INSN_MVN;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return INSN_MOV;
        }
      else
        {
	  return INSN_MVN;
        }

    case 205:  /* *thumb_movdf_insn */
    case 203:  /* *thumb1_movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return INSN_OTHER;
        }
      else
        {
	  return INSN_MOV;
        }

    case 3218:  /* *p *arm_movsf_soft_insn */
    case 202:  /* *arm_movsf_soft_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return INSN_MOV;
        }
      else
        {
	  return INSN_OTHER;
        }

    case 201:  /* *thumb1_movhf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return INSN_MOV;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return INSN_OTHER;
        }
      else
        {
	  return INSN_MOV;
        }

    case 3217:  /* *p *arm32_movhf */
    case 200:  /* *arm32_movhf */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return INSN_OTHER;
        }
      else
        {
	  return INSN_MOV;
        }

    case 199:  /* *thumb1_movqi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return INSN_OTHER;
        }
      else
        {
	  return INSN_MOV;
        }

    case 3216:  /* *p *arm_movqi_insn */
    case 198:  /* *arm_movqi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return INSN_MOV;
        }
      else if (which_alternative == 2)
        {
	  return INSN_MVN;
        }
      else
        {
	  return INSN_OTHER;
        }

    case 3215:  /* *p *movhi_bytes */
    case 197:  /* *movhi_bytes */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return INSN_MOV;
        }
      else
        {
	  return INSN_MVN;
        }

    case 3214:  /* *p *movhi_insn_arch4 */
    case 196:  /* *movhi_insn_arch4 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return INSN_MOV;
        }
      else if (which_alternative == 1)
        {
	  return INSN_MVN;
        }
      else
        {
	  return INSN_OTHER;
        }

    case 3513:  /* *p *thumb2_movsi_vfp */
    case 3512:  /* *p *arm_movsi_vfp */
    case 3211:  /* *p *arm_movsi_insn */
    case 642:  /* *thumb2_movsi_vfp */
    case 641:  /* *arm_movsi_vfp */
    case 186:  /* *arm_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return INSN_MOV;
        }
      else if (which_alternative == 2)
        {
	  return INSN_MVN;
        }
      else if (which_alternative == 3)
        {
	  return INSN_MOV;
        }
      else
        {
	  return INSN_OTHER;
        }

    case 184:  /* *thumb1_movdi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return INSN_OTHER;
        }
      else if (which_alternative == 1)
        {
	  return INSN_MOV;
        }
      else if (((1 << which_alternative) & 0x7c))
        {
	  return INSN_OTHER;
        }
      else
        {
	  return INSN_MOV;
        }

    case 119:  /* *satsi_smax */
    case 120:  /* *satsi_smin */
    case 121:  /* *satsi_smax_shift */
    case 122:  /* *satsi_smin_shift */
    case 2027:  /* arm_ssatsihi_shift */
    case 2028:  /* arm_usatsihi */
    case 3170:  /* *p *satsi_smax */
    case 3171:  /* *p *satsi_smin */
    case 3172:  /* *p *satsi_smax_shift */
    case 3173:  /* *p *satsi_smin_shift */
    case 3660:  /* *p arm_ssatsihi_shift */
    case 3661:  /* *p arm_usatsihi */
      return INSN_SAT;

    case 144:  /* udivsi3 */
    case 3184:  /* *p udivsi3 */
      return INSN_UDIV;

    case 143:  /* divsi3 */
    case 3183:  /* *p divsi3 */
      return INSN_SDIV;

    case 172:  /* *arm_zero_extendqisi2addsi */
    case 181:  /* *arm_extendqisi2addsi */
    case 3202:  /* *p *arm_zero_extendqisi2addsi */
    case 3209:  /* *p *arm_extendqisi2addsi */
      return INSN_XTAB;

    case 341:  /* clzsi2 */
    case 342:  /* rbitsi2 */
    case 3233:  /* *p clzsi2 */
    case 3234:  /* *p rbitsi2 */
      return INSN_CLZ;

    case 51:  /* *mulsidi3adddi */
    case 52:  /* *mulsidi3adddi_v6 */
    case 3121:  /* *p *mulsidi3adddi */
    case 3122:  /* *p *mulsidi3adddi_v6 */
      return INSN_SMLAL;

    case 53:  /* *mulsidi3_nov6 */
    case 54:  /* *mulsidi3_v6 */
    case 59:  /* *smulsi3_highpart_nov6 */
    case 60:  /* *smulsi3_highpart_v6 */
    case 3123:  /* *p *mulsidi3_nov6 */
    case 3124:  /* *p *mulsidi3_v6 */
    case 3129:  /* *p *smulsi3_highpart_nov6 */
    case 3130:  /* *p *smulsi3_highpart_v6 */
      return INSN_SMULL;

    case 57:  /* *umulsidi3adddi */
    case 58:  /* *umulsidi3adddi_v6 */
    case 3127:  /* *p *umulsidi3adddi */
    case 3128:  /* *p *umulsidi3adddi_v6 */
      return INSN_UMLAL;

    case 55:  /* *umulsidi3_nov6 */
    case 56:  /* *umulsidi3_v6 */
    case 61:  /* *umulsi3_highpart_nov6 */
    case 62:  /* *umulsi3_highpart_v6 */
    case 3125:  /* *p *umulsidi3_nov6 */
    case 3126:  /* *p *umulsidi3_v6 */
    case 3131:  /* *p *umulsi3_highpart_nov6 */
    case 3132:  /* *p *umulsi3_highpart_v6 */
      return INSN_UMULL;

    case 46:  /* *mulsi3addsi_compare0 */
    case 47:  /* *mulsi3addsi_compare0_v6 */
    case 48:  /* *mulsi3addsi_compare0_scratch */
    case 49:  /* *mulsi3addsi_compare0_scratch_v6 */
      return INSN_MLAS;

    case 44:  /* *mulsi3addsi */
    case 45:  /* *mulsi3addsi_v6 */
    case 50:  /* *mulsi3subsi */
    case 3118:  /* *p *mulsi3addsi */
    case 3119:  /* *p *mulsi3addsi_v6 */
    case 3120:  /* *p *mulsi3subsi */
      return INSN_MLA;

    case 40:  /* *mulsi3_compare0 */
    case 41:  /* *mulsi3_compare0_v6 */
    case 42:  /* *mulsi_compare0_scratch */
    case 43:  /* *mulsi_compare0_scratch_v6 */
    case 774:  /* *thumb2_mulsi_short */
    case 775:  /* *thumb2_mulsi_short_compare0 */
    case 776:  /* *thumb2_mulsi_short_compare0_scratch */
    case 3592:  /* *p *thumb2_mulsi_short */
      return INSN_MULS;

    case 36:  /* *arm_mulsi3 */
    case 37:  /* *arm_mulsi3_v6 */
    case 38:  /* *thumb_mulsi3 */
    case 39:  /* *thumb_mulsi3_v6 */
    case 3116:  /* *p *arm_mulsi3 */
    case 3117:  /* *p *arm_mulsi3_v6 */
      return INSN_MUL;

    case 70:  /* maddhidi4 */
    case 71:  /* *maddhidi4tb */
    case 72:  /* *maddhidi4tt */
    case 3140:  /* *p maddhidi4 */
    case 3141:  /* *p *maddhidi4tb */
    case 3142:  /* *p *maddhidi4tt */
      return INSN_SMLALXY;

    case 67:  /* maddhisi4 */
    case 68:  /* *maddhisi4tb */
    case 69:  /* *maddhisi4tt */
    case 3137:  /* *p maddhisi4 */
    case 3138:  /* *p *maddhisi4tb */
    case 3139:  /* *p *maddhisi4tt */
      return INSN_SMLAXY;

    case 63:  /* mulhisi3 */
    case 64:  /* *mulhisi3tb */
    case 65:  /* *mulhisi3bt */
    case 66:  /* *mulhisi3tt */
    case 3133:  /* *p mulhisi3 */
    case 3134:  /* *p *mulhisi3tb */
    case 3135:  /* *p *mulhisi3bt */
    case 3136:  /* *p *mulhisi3tt */
      return INSN_SMULXY;

    case 133:  /* *not_shiftsi */
    case 134:  /* *not_shiftsi_compare0 */
    case 135:  /* *not_shiftsi_compare0_scratch */
    case 154:  /* *arm_one_cmplsi2 */
    case 155:  /* *thumb1_one_cmplsi2 */
    case 156:  /* *notsi_compare0 */
    case 157:  /* *notsi_compare0_scratch */
    case 302:  /* *if_move_not */
    case 304:  /* *if_not_move */
    case 312:  /* *if_not_arith */
    case 314:  /* *if_arith_not */
    case 322:  /* *cond_move_not */
    case 3175:  /* *p *not_shiftsi */
    case 3190:  /* *p *arm_one_cmplsi2 */
      return INSN_MVN;

    case 125:  /* arm_ashrdi3_1bit */
    case 127:  /* arm_lshrdi3_1bit */
    case 228:  /* *mov_scc */
    case 229:  /* *mov_negscc */
    case 230:  /* *mov_notscc */
    case 237:  /* *movsfcc_soft_insn */
    case 274:  /* *and_scc */
    case 277:  /* *cond_move */
    case 306:  /* *if_shift_move */
    case 308:  /* *if_move_shift */
    case 310:  /* *if_shift_shift */
      return INSN_MOV;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return INSN_OTHER;

    }
}

enum attr_insn_enabled
get_attr_insn_enabled (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 268:  /* *arith_shiftsi */
    case 3226:  /* *p *arith_shiftsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return INSN_ENABLED_YES;
        }
      else if (which_alternative == 1)
        {
	  if (add_operator (operands[1], SImode))
	    {
	      return INSN_ENABLED_YES;
	    }
	  else
	    {
	      return INSN_ENABLED_NO;
	    }
        }
      else if (which_alternative == 2)
        {
	  return INSN_ENABLED_YES;
        }
      else
        {
	  if (mult_operator (operands[3], SImode))
	    {
	      return INSN_ENABLED_NO;
	    }
	  else
	    {
	      return INSN_ENABLED_YES;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return INSN_ENABLED_YES;

    }
}

enum attr_mul64
get_attr_mul64 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_insn cached_insn ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_UMULLS) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_UMLALS) || ((cached_insn == INSN_SMULL) || ((cached_insn == INSN_SMULLS) || ((cached_insn == INSN_SMLAL) || (cached_insn == INSN_SMLALS)))))))))
        {
	  return MUL64_YES;
        }
      else
        {
	  return MUL64_NO;
        }

    case 3142:  /* *p *maddhidi4tt */
    case 3141:  /* *p *maddhidi4tb */
    case 3140:  /* *p maddhidi4 */
    case 3132:  /* *p *umulsi3_highpart_v6 */
    case 3131:  /* *p *umulsi3_highpart_nov6 */
    case 3130:  /* *p *smulsi3_highpart_v6 */
    case 3129:  /* *p *smulsi3_highpart_nov6 */
    case 3128:  /* *p *umulsidi3adddi_v6 */
    case 3127:  /* *p *umulsidi3adddi */
    case 3126:  /* *p *umulsidi3_v6 */
    case 3125:  /* *p *umulsidi3_nov6 */
    case 3124:  /* *p *mulsidi3_v6 */
    case 3123:  /* *p *mulsidi3_nov6 */
    case 3122:  /* *p *mulsidi3adddi_v6 */
    case 3121:  /* *p *mulsidi3adddi */
    case 72:  /* *maddhidi4tt */
    case 71:  /* *maddhidi4tb */
    case 70:  /* maddhidi4 */
    case 62:  /* *umulsi3_highpart_v6 */
    case 61:  /* *umulsi3_highpart_nov6 */
    case 60:  /* *smulsi3_highpart_v6 */
    case 59:  /* *smulsi3_highpart_nov6 */
    case 58:  /* *umulsidi3adddi_v6 */
    case 57:  /* *umulsidi3adddi */
    case 56:  /* *umulsidi3_v6 */
    case 55:  /* *umulsidi3_nov6 */
    case 54:  /* *mulsidi3_v6 */
    case 53:  /* *mulsidi3_nov6 */
    case 52:  /* *mulsidi3adddi_v6 */
    case 51:  /* *mulsidi3adddi */
      return MUL64_YES;

    default:
      return MUL64_NO;

    }
}

enum attr_neon_type
get_attr_neon_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 942:  /* bicdi3_neon */
    case 932:  /* orndi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_INT_1;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 922:  /* anddi3_neon */
    case 912:  /* iordi3_neon */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return NEON_TYPE_NEON_INT_1;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return NEON_TYPE_NONE;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_1;
        }

    case 855:  /* subdi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_INT_2;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return NEON_TYPE_NONE;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_2;
        }

    case 845:  /* adddi3_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_INT_1;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return NEON_TYPE_NONE;
        }
      else if (which_alternative == 3)
        {
	  return NEON_TYPE_NEON_INT_1;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 793:  /* *neon_movti */
    case 792:  /* *neon_movv2di */
    case 791:  /* *neon_movv4sf */
    case 790:  /* *neon_movv4si */
    case 789:  /* *neon_movv8hi */
    case 788:  /* *neon_movv16qi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_INT_1;
        }
      else if (which_alternative == 1)
        {
	  return NEON_TYPE_NEON_STM_2;
        }
      else if (which_alternative == 2)
        {
	  return NEON_TYPE_NEON_VMOV;
        }
      else if (which_alternative == 3)
        {
	  return NEON_TYPE_NEON_LDM_2;
        }
      else if (which_alternative == 4)
        {
	  return NEON_TYPE_NEON_MRRC;
        }
      else if (which_alternative == 5)
        {
	  return NEON_TYPE_NEON_MCR_2_MCRR;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 787:  /* *neon_movdi */
    case 786:  /* *neon_movv2sf */
    case 785:  /* *neon_movv2si */
    case 784:  /* *neon_movv4hi */
    case 783:  /* *neon_movv8qi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_INT_1;
        }
      else if (which_alternative == 1)
        {
	  return NEON_TYPE_NONE;
        }
      else if (which_alternative == 2)
        {
	  return NEON_TYPE_NEON_VMOV;
        }
      else if (which_alternative == 3)
        {
	  return NEON_TYPE_NONE;
        }
      else if (which_alternative == 4)
        {
	  return NEON_TYPE_NEON_MRRC;
        }
      else if (which_alternative == 5)
        {
	  return NEON_TYPE_NEON_MCR_2_MCRR;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 654:  /* *thumb2_movdfcc_vfp */
    case 653:  /* *movdfcc_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return NEON_TYPE_NEON_VMOV;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return NEON_TYPE_NEON_MCR_2_MCRR;
        }
      else
        {
	  return NEON_TYPE_NEON_MRRC;
        }

    case 652:  /* *thumb2_movsfcc_vfp */
    case 651:  /* *movsfcc_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return NEON_TYPE_NEON_VMOV;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return NEON_TYPE_NEON_MCR;
        }
      else
        {
	  return NEON_TYPE_NEON_MRC;
        }

    case 3517:  /* *p *movdf_vfp */
    case 650:  /* *thumb2_movdf_vfp */
    case 649:  /* *movdf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_MCR_2_MCRR;
        }
      else if (which_alternative == 1)
        {
	  return NEON_TYPE_NEON_MRRC;
        }
      else if (((1 << which_alternative) & 0x7c))
        {
	  return NEON_TYPE_NONE;
        }
      else if (which_alternative == 7)
        {
	  return NEON_TYPE_NEON_VMOV;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 3516:  /* *p *thumb2_movsf_vfp */
    case 3515:  /* *p *movsf_vfp */
    case 648:  /* *thumb2_movsf_vfp */
    case 647:  /* *movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_MCR;
        }
      else if (which_alternative == 1)
        {
	  return NEON_TYPE_NEON_MRC;
        }
      else if (((1 << which_alternative) & 0x7c))
        {
	  return NEON_TYPE_NONE;
        }
      else if (which_alternative == 7)
        {
	  return NEON_TYPE_NEON_VMOV;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 645:  /* *movhf_vfp_neon */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else if (which_alternative == 1)
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 643:  /* *movdi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return NEON_TYPE_NONE;
        }
      else if (which_alternative == 7)
        {
	  return NEON_TYPE_NEON_MCR_2_MCRR;
        }
      else if (which_alternative == 8)
        {
	  return NEON_TYPE_NEON_MRRC;
        }
      else if (which_alternative == 9)
        {
	  return NEON_TYPE_NEON_VMOV;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 3513:  /* *p *thumb2_movsi_vfp */
    case 642:  /* *thumb2_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xff))
        {
	  return NEON_TYPE_NONE;
        }
      else if (which_alternative == 8)
        {
	  return NEON_TYPE_NEON_MCR;
        }
      else if (which_alternative == 9)
        {
	  return NEON_TYPE_NEON_MRC;
        }
      else if (which_alternative == 10)
        {
	  return NEON_TYPE_NEON_VMOV;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 3512:  /* *p *arm_movsi_vfp */
    case 641:  /* *arm_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return NEON_TYPE_NONE;
        }
      else if (which_alternative == 6)
        {
	  return NEON_TYPE_NEON_MCR;
        }
      else if (which_alternative == 7)
        {
	  return NEON_TYPE_NEON_MRC;
        }
      else if (which_alternative == 8)
        {
	  return NEON_TYPE_NEON_VMOV;
        }
      else
        {
	  return NEON_TYPE_NONE;
        }

    case 3188:  /* *p one_cmpldi2 */
    case 952:  /* xordi3_neon */
    case 153:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_INT_1;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return NEON_TYPE_NONE;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_1;
        }

    case 794:  /* *neon_movei */
    case 795:  /* *neon_movoi */
    case 796:  /* *neon_movci */
    case 797:  /* *neon_movxi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_INT_1;
        }
      else if (which_alternative == 1)
        {
	  return NEON_TYPE_NEON_STM_2;
        }
      else
        {
	  return NEON_TYPE_NEON_LDM_2;
        }

    case 826:  /* vec_setv2di_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_MCR_2_MCRR;
        }

    case 827:  /* vec_extractv8qi */
    case 828:  /* vec_extractv4hi */
    case 829:  /* vec_extractv2si */
    case 830:  /* vec_extractv2sf */
    case 831:  /* vec_extractv16qi */
    case 832:  /* vec_extractv8hi */
    case 833:  /* vec_extractv4si */
    case 834:  /* vec_extractv4sf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_VST1_VST2_LANE;
        }
      else
        {
	  return NEON_TYPE_NEON_BP_SIMPLE;
        }

    case 835:  /* vec_extractv2di */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_VST1_VST2_LANE;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_1;
        }

    case 883:  /* fmav2sf4 */
    case 885:  /* fmav2sf4_intrinsic */
    case 887:  /* *fmsubv2sf4 */
    case 889:  /* fmsubv2sf4_intrinsic */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VMLA_DDD;
        }
      else
        {
	  return NEON_TYPE_NEON_FP_VMLA_QQQ;
        }

    case 884:  /* fmav4sf4 */
    case 886:  /* fmav4sf4_intrinsic */
    case 888:  /* *fmsubv4sf4 */
    case 890:  /* fmsubv4sf4_intrinsic */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMLA_DDD;
        }
      else
        {
	  return NEON_TYPE_NEON_FP_VMLA_QQQ;
        }

    case 962:  /* absv8qi2 */
    case 964:  /* absv4hi2 */
    case 966:  /* absv2si2 */
    case 970:  /* negv8qi2 */
    case 972:  /* negv4hi2 */
    case 974:  /* negv2si2 */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_3;
        }

    case 963:  /* absv16qi2 */
    case 965:  /* absv8hi2 */
    case 967:  /* absv4si2 */
    case 971:  /* negv16qi2 */
    case 973:  /* negv8hi2 */
    case 975:  /* negv4si2 */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_3;
        }

    case 968:  /* absv2sf2 */
    case 976:  /* negv2sf2 */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_3;
        }

    case 969:  /* absv4sf2 */
    case 977:  /* negv4sf2 */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_3;
        }

    case 818:  /* vec_setv8qi_internal */
    case 819:  /* vec_setv4hi_internal */
    case 820:  /* vec_setv2si_internal */
    case 821:  /* vec_setv2sf_internal */
    case 822:  /* vec_setv16qi_internal */
    case 823:  /* vec_setv8hi_internal */
    case 824:  /* vec_setv4si_internal */
    case 825:  /* vec_setv4sf_internal */
    case 1039:  /* neon_load_count */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }
      else
        {
	  return NEON_TYPE_NEON_MCR;
        }

    case 842:  /* *addv2sf3_neon */
    case 1076:  /* neon_vpadd_internalv2sf */
    case 1113:  /* neon_vaddv2sf_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_1;
        }

    case 843:  /* *addv4sf3_neon */
    case 1114:  /* neon_vaddv4sf_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_1;
        }

    case 836:  /* *addv8qi3_neon */
    case 838:  /* *addv4hi3_neon */
    case 840:  /* *addv2si3_neon */
    case 1073:  /* neon_vpadd_internalv8qi */
    case 1074:  /* neon_vpadd_internalv4hi */
    case 1075:  /* neon_vpadd_internalv2si */
    case 1107:  /* neon_vaddv8qi_unspec */
    case 1109:  /* neon_vaddv4hi_unspec */
    case 1111:  /* neon_vaddv2si_unspec */
    case 1115:  /* neon_vadddi_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_1;
        }

    case 837:  /* *addv16qi3_neon */
    case 839:  /* *addv8hi3_neon */
    case 841:  /* *addv4si3_neon */
    case 844:  /* *addv2di3_neon */
    case 1108:  /* neon_vaddv16qi_unspec */
    case 1110:  /* neon_vaddv8hi_unspec */
    case 1112:  /* neon_vaddv4si_unspec */
    case 1116:  /* neon_vaddv2di_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_1;
        }

    case 856:  /* *mulv8qi3_neon */
    case 858:  /* *mulv4hi3_neon */
    case 1140:  /* neon_vmulv8qi */
    case 1142:  /* neon_vmulv4hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
	    }
        }

    case 857:  /* *mulv16qi3_neon */
    case 859:  /* *mulv8hi3_neon */
    case 1141:  /* neon_vmulv16qi */
    case 1143:  /* neon_vmulv8hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
        }

    case 860:  /* *mulv2si3_neon */
    case 1144:  /* neon_vmulv2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
	    }
        }

    case 861:  /* *mulv4si3_neon */
    case 864:  /* *mulv2di3_neon */
    case 1145:  /* neon_vmulv4si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
        }

    case 862:  /* *mulv2sf3_neon */
    case 1146:  /* neon_vmulv2sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
        }

    case 863:  /* *mulv4sf3_neon */
    case 1147:  /* neon_vmulv4sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
	    }
        }

    case 865:  /* mulv8qi3addv8qi_neon */
    case 867:  /* mulv4hi3addv4hi_neon */
    case 874:  /* mulv8qi3negv8qiaddv8qi_neon */
    case 876:  /* mulv4hi3negv4hiaddv4hi_neon */
    case 1148:  /* neon_vmlav8qi_unspec */
    case 1150:  /* neon_vmlav4hi_unspec */
    case 1160:  /* neon_vmlsv8qi_unspec */
    case 1162:  /* neon_vmlsv4hi_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_FP_VMLA_DDD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VMLA_QQQ;
	    }
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR;
	    }
        }

    case 866:  /* mulv16qi3addv16qi_neon */
    case 868:  /* mulv8hi3addv8hi_neon */
    case 875:  /* mulv16qi3negv16qiaddv16qi_neon */
    case 877:  /* mulv8hi3negv8hiaddv8hi_neon */
    case 1149:  /* neon_vmlav16qi_unspec */
    case 1151:  /* neon_vmlav8hi_unspec */
    case 1161:  /* neon_vmlsv16qi_unspec */
    case 1163:  /* neon_vmlsv8hi_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMLA_DDD;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MLA_QQQ_8_16;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR;
	    }
        }

    case 869:  /* mulv2si3addv2si_neon */
    case 878:  /* mulv2si3negv2siaddv2si_neon */
    case 1152:  /* neon_vmlav2si_unspec */
    case 1164:  /* neon_vmlsv2si_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_FP_VMLA_DDD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VMLA_QQQ;
	    }
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR;
	    }
        }

    case 871:  /* mulv2sf3addv2sf_neon */
    case 880:  /* mulv2sf3negv2sfaddv2sf_neon */
    case 1154:  /* neon_vmlav2sf_unspec */
    case 1166:  /* neon_vmlsv2sf_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VMLA_DDD;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_MLA_QQQ_8_16;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR;
	    }
        }

    case 872:  /* mulv4sf3addv4sf_neon */
    case 881:  /* mulv4sf3negv4sfaddv4sf_neon */
    case 1155:  /* neon_vmlav4sf_unspec */
    case 1167:  /* neon_vmlsv4sf_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_FP_VMLA_DDD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VMLA_QQQ;
	    }
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR;
	    }
        }

    case 870:  /* mulv4si3addv4si_neon */
    case 873:  /* mulv2di3addv2di_neon */
    case 879:  /* mulv4si3negv4siaddv4si_neon */
    case 882:  /* mulv2di3negv2diaddv2di_neon */
    case 1153:  /* neon_vmlav4si_unspec */
    case 1156:  /* neon_vmlav2di_unspec */
    case 1165:  /* neon_vmlsv4si_unspec */
    case 1168:  /* neon_vmlsv2di_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMLA_DDD;
        }
      else
        {
	  return NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR;
        }

    case 1172:  /* neon_vqdmulhv4hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
        }

    case 1173:  /* neon_vqdmulhv2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
        }

    case 1174:  /* neon_vqdmulhv8hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
        }

    case 1175:  /* neon_vqdmulhv4si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32;
        }

    case 1157:  /* neon_vmlalv8qi */
    case 1158:  /* neon_vmlalv4hi */
    case 1169:  /* neon_vmlslv8qi */
    case 1170:  /* neon_vmlslv4hi */
    case 1176:  /* neon_vqdmlalv4hi */
    case 1178:  /* neon_vqdmlslv4hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
        }
      else
        {
	  return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
        }

    case 1159:  /* neon_vmlalv2si */
    case 1171:  /* neon_vmlslv2si */
    case 1177:  /* neon_vqdmlalv2si */
    case 1179:  /* neon_vqdmlslv2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
        }
      else
        {
	  return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
        }

    case 1180:  /* neon_vmullv8qi */
    case 1181:  /* neon_vmullv4hi */
    case 1183:  /* neon_vqdmullv4hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
        }

    case 1182:  /* neon_vmullv2si */
    case 1184:  /* neon_vqdmullv2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
        }

    case 852:  /* *subv2sf3_neon */
    case 1191:  /* neon_vsubv2sf_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_2;
        }

    case 853:  /* *subv4sf3_neon */
    case 1192:  /* neon_vsubv4sf_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_2;
        }

    case 846:  /* *subv8qi3_neon */
    case 848:  /* *subv4hi3_neon */
    case 850:  /* *subv2si3_neon */
    case 1185:  /* neon_vsubv8qi_unspec */
    case 1187:  /* neon_vsubv4hi_unspec */
    case 1189:  /* neon_vsubv2si_unspec */
    case 1193:  /* neon_vsubdi_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_2;
        }

    case 847:  /* *subv16qi3_neon */
    case 849:  /* *subv8hi3_neon */
    case 851:  /* *subv4si3_neon */
    case 854:  /* *subv2di3_neon */
    case 1186:  /* neon_vsubv16qi_unspec */
    case 1188:  /* neon_vsubv8hi_unspec */
    case 1190:  /* neon_vsubv4si_unspec */
    case 1194:  /* neon_vsubv2di_unspec */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_2;
        }

    case 1291:  /* neon_vabav8qi */
    case 1293:  /* neon_vabav4hi */
    case 1295:  /* neon_vabav2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_VABA;
        }
      else
        {
	  return NEON_TYPE_NEON_VABA_QQQ;
        }

    case 1292:  /* neon_vabav16qi */
    case 1294:  /* neon_vabav8hi */
    case 1296:  /* neon_vabav4si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_VABA;
        }
      else
        {
	  return NEON_TYPE_NEON_VABA_QQQ;
        }

    case 1218:  /* neon_vceqv8qi */
    case 1220:  /* neon_vceqv4hi */
    case 1222:  /* neon_vceqv2si */
    case 1226:  /* neon_vcgev8qi */
    case 1228:  /* neon_vcgev4hi */
    case 1230:  /* neon_vcgev2si */
    case 1240:  /* neon_vcgtv8qi */
    case 1242:  /* neon_vcgtv4hi */
    case 1244:  /* neon_vcgtv2si */
    case 1254:  /* neon_vclev8qi */
    case 1256:  /* neon_vclev4hi */
    case 1258:  /* neon_vclev2si */
    case 1262:  /* neon_vcltv8qi */
    case 1264:  /* neon_vcltv4hi */
    case 1266:  /* neon_vcltv2si */
    case 1280:  /* neon_vabdv8qi */
    case 1282:  /* neon_vabdv4hi */
    case 1284:  /* neon_vabdv2si */
    case 1300:  /* neon_vmaxv8qi */
    case 1302:  /* neon_vmaxv4hi */
    case 1304:  /* neon_vmaxv2si */
    case 1308:  /* neon_vminv8qi */
    case 1310:  /* neon_vminv4hi */
    case 1312:  /* neon_vminv2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1219:  /* neon_vceqv16qi */
    case 1221:  /* neon_vceqv8hi */
    case 1223:  /* neon_vceqv4si */
    case 1227:  /* neon_vcgev16qi */
    case 1229:  /* neon_vcgev8hi */
    case 1231:  /* neon_vcgev4si */
    case 1241:  /* neon_vcgtv16qi */
    case 1243:  /* neon_vcgtv8hi */
    case 1245:  /* neon_vcgtv4si */
    case 1255:  /* neon_vclev16qi */
    case 1257:  /* neon_vclev8hi */
    case 1259:  /* neon_vclev4si */
    case 1263:  /* neon_vcltv16qi */
    case 1265:  /* neon_vcltv8hi */
    case 1267:  /* neon_vcltv4si */
    case 1281:  /* neon_vabdv16qi */
    case 1283:  /* neon_vabdv8hi */
    case 1285:  /* neon_vabdv4si */
    case 1301:  /* neon_vmaxv16qi */
    case 1303:  /* neon_vmaxv8hi */
    case 1305:  /* neon_vmaxv4si */
    case 1309:  /* neon_vminv16qi */
    case 1311:  /* neon_vminv8hi */
    case 1313:  /* neon_vminv4si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1224:  /* neon_vceqv2sf */
    case 1232:  /* neon_vcgev2sf */
    case 1246:  /* neon_vcgtv2sf */
    case 1260:  /* neon_vclev2sf */
    case 1268:  /* neon_vcltv2sf */
    case 1286:  /* neon_vabdv2sf */
    case 1306:  /* neon_vmaxv2sf */
    case 1314:  /* neon_vminv2sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1225:  /* neon_vceqv4sf */
    case 1233:  /* neon_vcgev4sf */
    case 1247:  /* neon_vcgtv4sf */
    case 1261:  /* neon_vclev4sf */
    case 1269:  /* neon_vcltv4sf */
    case 1287:  /* neon_vabdv4sf */
    case 1307:  /* neon_vmaxv4sf */
    case 1315:  /* neon_vminv4sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 991:  /* *sminv8qi3_neon */
    case 992:  /* *sminv16qi3_neon */
    case 993:  /* *sminv4hi3_neon */
    case 994:  /* *sminv8hi3_neon */
    case 995:  /* *sminv2si3_neon */
    case 996:  /* *sminv4si3_neon */
    case 999:  /* *smaxv8qi3_neon */
    case 1000:  /* *smaxv16qi3_neon */
    case 1001:  /* *smaxv4hi3_neon */
    case 1002:  /* *smaxv8hi3_neon */
    case 1003:  /* *smaxv2si3_neon */
    case 1004:  /* *smaxv4si3_neon */
    case 1077:  /* neon_vpsminv8qi */
    case 1078:  /* neon_vpsminv4hi */
    case 1079:  /* neon_vpsminv2si */
    case 1081:  /* neon_vpsmaxv8qi */
    case 1082:  /* neon_vpsmaxv4hi */
    case 1083:  /* neon_vpsmaxv2si */
    case 1328:  /* neon_vpmaxv8qi */
    case 1329:  /* neon_vpmaxv4hi */
    case 1330:  /* neon_vpmaxv2si */
    case 1332:  /* neon_vpminv8qi */
    case 1333:  /* neon_vpminv4hi */
    case 1334:  /* neon_vpminv2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 997:  /* *sminv2sf3_neon */
    case 998:  /* *sminv4sf3_neon */
    case 1005:  /* *smaxv2sf3_neon */
    case 1006:  /* *smaxv4sf3_neon */
    case 1080:  /* neon_vpsminv2sf */
    case 1084:  /* neon_vpsmaxv2sf */
    case 1331:  /* neon_vpmaxv2sf */
    case 1335:  /* neon_vpminv2sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1336:  /* neon_vrecpsv2sf */
    case 1338:  /* neon_vrsqrtsv2sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD;
        }
      else
        {
	  return NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ;
        }

    case 1337:  /* neon_vrecpsv4sf */
    case 1339:  /* neon_vrsqrtsv4sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD;
        }
      else
        {
	  return NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ;
        }

    case 891:  /* neon_vrintpv2sf */
    case 892:  /* neon_vrintzv2sf */
    case 893:  /* neon_vrintmv2sf */
    case 894:  /* neon_vrintxv2sf */
    case 895:  /* neon_vrintav2sf */
    case 896:  /* neon_vrintnv2sf */
    case 1270:  /* neon_vcagev2sf */
    case 1272:  /* neon_vcagtv2sf */
    case 1366:  /* neon_vrecpev2si */
    case 1367:  /* neon_vrecpev2sf */
    case 1370:  /* neon_vrsqrtev2si */
    case 1371:  /* neon_vrsqrtev2sf */
    case 1422:  /* floatv2siv2sf2 */
    case 1424:  /* floatunsv2siv2sf2 */
    case 1426:  /* fix_truncv2sfv2si2 */
    case 1428:  /* fixuns_truncv2sfv2si2 */
    case 1430:  /* neon_vcvtv2sf */
    case 1432:  /* neon_vcvtv2si */
    case 1434:  /* neon_vcvt_nv2sf */
    case 1436:  /* neon_vcvt_nv2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
        }

    case 897:  /* neon_vrintpv4sf */
    case 898:  /* neon_vrintzv4sf */
    case 899:  /* neon_vrintmv4sf */
    case 900:  /* neon_vrintxv4sf */
    case 901:  /* neon_vrintav4sf */
    case 902:  /* neon_vrintnv4sf */
    case 1271:  /* neon_vcagev4sf */
    case 1273:  /* neon_vcagtv4sf */
    case 1368:  /* neon_vrecpev4si */
    case 1369:  /* neon_vrecpev4sf */
    case 1372:  /* neon_vrsqrtev4si */
    case 1373:  /* neon_vrsqrtev4sf */
    case 1423:  /* floatv4siv4sf2 */
    case 1425:  /* floatunsv4siv4sf2 */
    case 1427:  /* fix_truncv4sfv4si2 */
    case 1429:  /* fixuns_truncv4sfv4si2 */
    case 1431:  /* neon_vcvtv4sf */
    case 1433:  /* neon_vcvtv4si */
    case 1435:  /* neon_vcvt_nv4sf */
    case 1437:  /* neon_vcvt_nv4si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
        }
      else
        {
	  return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
        }

    case 1450:  /* neon_vmul_lanev4hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMUL_DDD;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
	    }
        }

    case 1451:  /* neon_vmul_lanev2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMUL_DDD;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
        }

    case 1452:  /* neon_vmul_lanev2sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VMUL_DDD;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
	    }
        }

    case 1453:  /* neon_vmul_lanev8hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMUL_QQD;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MUL_QQD_32_SCALAR;
	    }
        }

    case 1454:  /* neon_vmul_lanev4si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMUL_QQD;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQD_32_SCALAR;
        }

    case 1455:  /* neon_vmul_lanev4sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VMUL_QQD;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MUL_QQD_32_SCALAR;
	    }
        }

    case 1460:  /* neon_vqdmulh_lanev8hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQD_32_SCALAR;
        }

    case 1461:  /* neon_vqdmulh_lanev4si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QQD_32_SCALAR;
        }

    case 1456:  /* neon_vmull_lanev4hi */
    case 1458:  /* neon_vqdmull_lanev4hi */
    case 1462:  /* neon_vqdmulh_lanev4hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
        }

    case 1457:  /* neon_vmull_lanev2si */
    case 1459:  /* neon_vqdmull_lanev2si */
    case 1463:  /* neon_vqdmulh_lanev2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR;
        }
      else
        {
	  return NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR;
        }

    case 1464:  /* neon_vmla_lanev4hi */
    case 1474:  /* neon_vmls_lanev4hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
	    }
        }

    case 1465:  /* neon_vmla_lanev2si */
    case 1475:  /* neon_vmls_lanev2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR;
        }
      else
        {
	  return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
        }

    case 1466:  /* neon_vmla_lanev2sf */
    case 1476:  /* neon_vmls_lanev2sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
	    }
        }

    case 1467:  /* neon_vmla_lanev8hi */
    case 1477:  /* neon_vmls_lanev8hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
	    {
	      return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR;
	    }
        }

    case 1468:  /* neon_vmla_lanev4si */
    case 1478:  /* neon_vmls_lanev4si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR;
        }
      else
        {
	  return NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR;
        }

    case 1469:  /* neon_vmla_lanev4sf */
    case 1479:  /* neon_vmls_lanev4sf */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR;
        }
      else
        {
	  if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
	    {
	      return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR;
	    }
        }

    case 1470:  /* neon_vmlal_lanev4hi */
    case 1472:  /* neon_vqdmlal_lanev4hi */
    case 1480:  /* neon_vmlsl_lanev4hi */
    case 1482:  /* neon_vqdmlsl_lanev4hi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR;
        }
      else
        {
	  return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
        }

    case 1471:  /* neon_vmlal_lanev2si */
    case 1473:  /* neon_vqdmlal_lanev2si */
    case 1481:  /* neon_vmlsl_lanev2si */
    case 1483:  /* neon_vqdmlsl_lanev2si */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR;
        }
      else
        {
	  return NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG;
        }

    case 1407:  /* *neon_vswpv8qi */
    case 1409:  /* *neon_vswpv4hi */
    case 1411:  /* *neon_vswpv2si */
    case 1413:  /* *neon_vswpv2sf */
    case 1415:  /* *neon_vswpdi */
    case 1484:  /* neon_vextv8qi */
    case 1486:  /* neon_vextv4hi */
    case 1488:  /* neon_vextv2si */
    case 1490:  /* neon_vextv2sf */
    case 1492:  /* neon_vextdi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_BP_SIMPLE;
        }
      else
        {
	  return NEON_TYPE_NEON_BP_2CYCLE;
        }

    case 1408:  /* *neon_vswpv16qi */
    case 1410:  /* *neon_vswpv8hi */
    case 1412:  /* *neon_vswpv4si */
    case 1414:  /* *neon_vswpv4sf */
    case 1416:  /* *neon_vswpv2di */
    case 1485:  /* neon_vextv16qi */
    case 1487:  /* neon_vextv8hi */
    case 1489:  /* neon_vextv4si */
    case 1491:  /* neon_vextv4sf */
    case 1493:  /* neon_vextv2di */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_BP_SIMPLE;
        }
      else
        {
	  return NEON_TYPE_NEON_BP_2CYCLE;
        }

    case 1007:  /* vashlv8qi3 */
    case 1009:  /* vashlv4hi3 */
    case 1011:  /* vashlv2si3 */
    case 1013:  /* vashrv8qi3_imm */
    case 1015:  /* vashrv4hi3_imm */
    case 1017:  /* vashrv2si3_imm */
    case 1019:  /* vlshrv8qi3_imm */
    case 1021:  /* vlshrv4hi3_imm */
    case 1023:  /* vlshrv2si3_imm */
    case 1025:  /* ashlv8qi3_signed */
    case 1027:  /* ashlv4hi3_signed */
    case 1029:  /* ashlv2si3_signed */
    case 1032:  /* ashlv8qi3_unsigned */
    case 1034:  /* ashlv4hi3_unsigned */
    case 1036:  /* ashlv2si3_unsigned */
    case 1519:  /* neon_vshlv8qi */
    case 1521:  /* neon_vshlv4hi */
    case 1523:  /* neon_vshlv2si */
    case 1525:  /* neon_vshldi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_VSHL_DDD;
        }
      else
        {
	  return NEON_TYPE_NEON_SHIFT_3;
        }

    case 1008:  /* vashlv16qi3 */
    case 1010:  /* vashlv8hi3 */
    case 1012:  /* vashlv4si3 */
    case 1014:  /* vashrv16qi3_imm */
    case 1016:  /* vashrv8hi3_imm */
    case 1018:  /* vashrv4si3_imm */
    case 1020:  /* vlshrv16qi3_imm */
    case 1022:  /* vlshrv8hi3_imm */
    case 1024:  /* vlshrv4si3_imm */
    case 1026:  /* ashlv16qi3_signed */
    case 1028:  /* ashlv8hi3_signed */
    case 1030:  /* ashlv4si3_signed */
    case 1031:  /* ashlv2di3_signed */
    case 1033:  /* ashlv16qi3_unsigned */
    case 1035:  /* ashlv8hi3_unsigned */
    case 1037:  /* ashlv4si3_unsigned */
    case 1038:  /* ashlv2di3_unsigned */
    case 1520:  /* neon_vshlv16qi */
    case 1522:  /* neon_vshlv8hi */
    case 1524:  /* neon_vshlv4si */
    case 1526:  /* neon_vshlv2di */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_VSHL_DDD;
        }
      else
        {
	  return NEON_TYPE_NEON_SHIFT_3;
        }

    case 1527:  /* neon_vqshlv8qi */
    case 1529:  /* neon_vqshlv4hi */
    case 1531:  /* neon_vqshlv2si */
    case 1533:  /* neon_vqshldi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_SHIFT_2;
        }
      else
        {
	  return NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ;
        }

    case 1528:  /* neon_vqshlv16qi */
    case 1530:  /* neon_vqshlv8hi */
    case 1532:  /* neon_vqshlv4si */
    case 1534:  /* neon_vqshlv2di */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_SHIFT_2;
        }
      else
        {
	  return NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ;
        }

    case 1587:  /* neon_vsri_nv8qi */
    case 1589:  /* neon_vsri_nv4hi */
    case 1591:  /* neon_vsri_nv2si */
    case 1593:  /* neon_vsri_ndi */
    case 1595:  /* neon_vsli_nv8qi */
    case 1597:  /* neon_vsli_nv4hi */
    case 1599:  /* neon_vsli_nv2si */
    case 1601:  /* neon_vsli_ndi */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_SHIFT_1;
        }
      else
        {
	  return NEON_TYPE_NEON_SHIFT_3;
        }

    case 1588:  /* neon_vsri_nv16qi */
    case 1590:  /* neon_vsri_nv8hi */
    case 1592:  /* neon_vsri_nv4si */
    case 1594:  /* neon_vsri_nv2di */
    case 1596:  /* neon_vsli_nv16qi */
    case 1598:  /* neon_vsli_nv8hi */
    case 1600:  /* neon_vsli_nv4si */
    case 1602:  /* neon_vsli_nv2di */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_SHIFT_1;
        }
      else
        {
	  return NEON_TYPE_NEON_SHIFT_3;
        }

    case 1614:  /* *neon_vtrnv8qi_insn */
    case 1616:  /* *neon_vtrnv4hi_insn */
    case 1618:  /* *neon_vtrnv2si_insn */
    case 1620:  /* *neon_vtrnv2sf_insn */
    case 1622:  /* *neon_vzipv8qi_insn */
    case 1624:  /* *neon_vzipv4hi_insn */
    case 1626:  /* *neon_vzipv2si_insn */
    case 1628:  /* *neon_vzipv2sf_insn */
    case 1630:  /* *neon_vuzpv8qi_insn */
    case 1632:  /* *neon_vuzpv4hi_insn */
    case 1634:  /* *neon_vuzpv2si_insn */
    case 1636:  /* *neon_vuzpv2sf_insn */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true))
        {
	  return NEON_TYPE_NEON_BP_SIMPLE;
        }
      else
        {
	  return NEON_TYPE_NEON_BP_3CYCLE;
        }

    case 1615:  /* *neon_vtrnv16qi_insn */
    case 1617:  /* *neon_vtrnv8hi_insn */
    case 1619:  /* *neon_vtrnv4si_insn */
    case 1621:  /* *neon_vtrnv4sf_insn */
    case 1623:  /* *neon_vzipv16qi_insn */
    case 1625:  /* *neon_vzipv8hi_insn */
    case 1627:  /* *neon_vzipv4si_insn */
    case 1629:  /* *neon_vzipv4sf_insn */
    case 1631:  /* *neon_vuzpv16qi_insn */
    case 1633:  /* *neon_vuzpv8hi_insn */
    case 1635:  /* *neon_vuzpv4si_insn */
    case 1637:  /* *neon_vuzpv4sf_insn */
      extract_constrain_insn_cached (insn);
      if (
#line 4487 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false))
        {
	  return NEON_TYPE_NEON_BP_SIMPLE;
        }
      else
        {
	  return NEON_TYPE_NEON_BP_3CYCLE;
        }

    case 1648:  /* neon_vld1_lanev8qi */
      if ((8) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1649:  /* neon_vld1_lanev4hi */
      if ((4) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1650:  /* neon_vld1_lanev2si */
      if ((2) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1651:  /* neon_vld1_lanev2sf */
      if ((2) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1652:  /* neon_vld1_lanedi */
      if ((1) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1653:  /* neon_vld1_lanev16qi */
      if ((16) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1654:  /* neon_vld1_lanev8hi */
      if ((8) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1655:  /* neon_vld1_lanev4si */
      if ((4) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1656:  /* neon_vld1_lanev4sf */
      if ((4) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1657:  /* neon_vld1_lanev2di */
      if ((2) == (2))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_VLD2_LANE;
        }

    case 1678:  /* neon_vst1_lanev8qi */
      if ((8) == (1))
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VST1_VST2_LANE;
        }

    case 1679:  /* neon_vst1_lanev4hi */
      if ((4) == (1))
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VST1_VST2_LANE;
        }

    case 1680:  /* neon_vst1_lanev2si */
      if ((2) == (1))
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VST1_VST2_LANE;
        }

    case 1681:  /* neon_vst1_lanev2sf */
      if ((2) == (1))
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VST1_VST2_LANE;
        }

    case 1682:  /* neon_vst1_lanedi */
      if ((1) == (1))
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VST1_VST2_LANE;
        }

    case 1688:  /* neon_vld2v8qi */
      if ((8) == (64))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES;
        }

    case 1689:  /* neon_vld2v4hi */
      if ((16) == (64))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES;
        }

    case 1690:  /* neon_vld2v2si */
    case 1691:  /* neon_vld2v2sf */
      if ((32) == (64))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES;
        }

    case 1692:  /* neon_vld2di */
      if ((64) == (64))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES;
        }

    case 1658:  /* neon_vld1_dupv8qi */
    case 1704:  /* neon_vld2_dupv8qi */
      if ((8) > (1))
        {
	  return NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }

    case 1659:  /* neon_vld1_dupv4hi */
    case 1705:  /* neon_vld2_dupv4hi */
      if ((4) > (1))
        {
	  return NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }

    case 1660:  /* neon_vld1_dupv2si */
    case 1661:  /* neon_vld1_dupv2sf */
    case 1706:  /* neon_vld2_dupv2si */
    case 1707:  /* neon_vld2_dupv2sf */
      if ((2) > (1))
        {
	  return NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }

    case 1662:  /* neon_vld1_dupdi */
    case 1708:  /* neon_vld2_dupdi */
      if ((1) > (1))
        {
	  return NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }

    case 1725:  /* neon_vld3v8qi */
    case 1770:  /* neon_vld4v8qi */
      if ((8) == (64))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD3_VLD4;
        }

    case 1726:  /* neon_vld3v4hi */
    case 1771:  /* neon_vld4v4hi */
      if ((16) == (64))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD3_VLD4;
        }

    case 1727:  /* neon_vld3v2si */
    case 1728:  /* neon_vld3v2sf */
    case 1772:  /* neon_vld4v2si */
    case 1773:  /* neon_vld4v2sf */
      if ((32) == (64))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD3_VLD4;
        }

    case 1729:  /* neon_vld3di */
    case 1774:  /* neon_vld4di */
      if ((64) == (64))
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD3_VLD4;
        }

    case 1745:  /* neon_vld3_dupv8qi */
    case 1790:  /* neon_vld4_dupv8qi */
      if ((8) > (1))
        {
	  return NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }

    case 1746:  /* neon_vld3_dupv4hi */
    case 1791:  /* neon_vld4_dupv4hi */
      if ((4) > (1))
        {
	  return NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }

    case 1747:  /* neon_vld3_dupv2si */
    case 1748:  /* neon_vld3_dupv2sf */
    case 1792:  /* neon_vld4_dupv2si */
    case 1793:  /* neon_vld4_dupv2sf */
      if ((2) > (1))
        {
	  return NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }

    case 1749:  /* neon_vld3_dupdi */
    case 1794:  /* neon_vld4_dupdi */
      if ((1) > (1))
        {
	  return NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES;
        }
      else
        {
	  return NEON_TYPE_NEON_VLD1_1_2_REGS;
        }

    case 1750:  /* neon_vst3v8qi */
    case 1795:  /* neon_vst4v8qi */
      if ((8) == (64))
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4;
        }

    case 1751:  /* neon_vst3v4hi */
    case 1796:  /* neon_vst4v4hi */
      if ((16) == (64))
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4;
        }

    case 1752:  /* neon_vst3v2si */
    case 1753:  /* neon_vst3v2sf */
    case 1797:  /* neon_vst4v2si */
    case 1798:  /* neon_vst4v2sf */
      if ((32) == (64))
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4;
        }

    case 1754:  /* neon_vst3di */
    case 1799:  /* neon_vst4di */
      if ((64) == (64))
        {
	  return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;
        }
      else
        {
	  return NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4;
        }

    case 1863:  /* neon_vabdv8qi_2 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6001 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6002 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1864:  /* neon_vabdv16qi_2 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6001 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6002 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1865:  /* neon_vabdv4hi_2 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6001 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6002 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1866:  /* neon_vabdv8hi_2 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6001 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6002 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1867:  /* neon_vabdv2si_2 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6001 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6002 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1868:  /* neon_vabdv4si_2 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6001 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6002 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1869:  /* neon_vabdv2sf_2 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6001 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
        {
	  if ((
#line 6002 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1870:  /* neon_vabdv4sf_2 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6001 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
        {
	  if ((
#line 6002 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1871:  /* neon_vabdv2di_2 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6001 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6002 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1872:  /* neon_vabdv8qi_3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6016 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6017 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1873:  /* neon_vabdv16qi_3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6016 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6017 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1874:  /* neon_vabdv4hi_3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6016 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6017 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1875:  /* neon_vabdv8hi_3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6016 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6017 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1876:  /* neon_vabdv2si_3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6016 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6017 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1877:  /* neon_vabdv4si_3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6016 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6017 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1878:  /* neon_vabdv2sf_3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6016 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
        {
	  if ((
#line 6017 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1879:  /* neon_vabdv4sf_3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6016 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(true)) != (0))
        {
	  if ((
#line 6017 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1880:  /* neon_vabdv2di_3 */
      extract_constrain_insn_cached (insn);
      if ((
#line 6016 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
        {
	  if ((
#line 6017 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
(false)) != (0))
	    {
	      return NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD;
	    }
	  else
	    {
	      return NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ;
	    }
        }
      else
        {
	  return NEON_TYPE_NEON_INT_5;
        }

    case 1763:  /* neon_vst3_lanev8qi */
    case 1764:  /* neon_vst3_lanev4hi */
    case 1765:  /* neon_vst3_lanev2si */
    case 1766:  /* neon_vst3_lanev2sf */
    case 1767:  /* neon_vst3_lanev8hi */
    case 1768:  /* neon_vst3_lanev4si */
    case 1769:  /* neon_vst3_lanev4sf */
    case 1808:  /* neon_vst4_lanev8qi */
    case 1809:  /* neon_vst4_lanev4hi */
    case 1810:  /* neon_vst4_lanev2si */
    case 1811:  /* neon_vst4_lanev2sf */
    case 1812:  /* neon_vst4_lanev8hi */
    case 1813:  /* neon_vst4_lanev4si */
    case 1814:  /* neon_vst4_lanev4sf */
      return NEON_TYPE_NEON_VST3_VST4_LANE;

    case 1683:  /* neon_vst1_lanev16qi */
    case 1684:  /* neon_vst1_lanev8hi */
    case 1685:  /* neon_vst1_lanev4si */
    case 1686:  /* neon_vst1_lanev4sf */
    case 1687:  /* neon_vst1_lanev2di */
    case 1718:  /* neon_vst2_lanev8qi */
    case 1719:  /* neon_vst2_lanev4hi */
    case 1720:  /* neon_vst2_lanev2si */
    case 1721:  /* neon_vst2_lanev2sf */
    case 1722:  /* neon_vst2_lanev8hi */
    case 1723:  /* neon_vst2_lanev4si */
    case 1724:  /* neon_vst2_lanev4sf */
      return NEON_TYPE_NEON_VST1_VST2_LANE;

    case 1738:  /* neon_vld3_lanev8qi */
    case 1739:  /* neon_vld3_lanev4hi */
    case 1740:  /* neon_vld3_lanev2si */
    case 1741:  /* neon_vld3_lanev2sf */
    case 1742:  /* neon_vld3_lanev8hi */
    case 1743:  /* neon_vld3_lanev4si */
    case 1744:  /* neon_vld3_lanev4sf */
    case 1783:  /* neon_vld4_lanev8qi */
    case 1784:  /* neon_vld4_lanev4hi */
    case 1785:  /* neon_vld4_lanev2si */
    case 1786:  /* neon_vld4_lanev2sf */
    case 1787:  /* neon_vld4_lanev8hi */
    case 1788:  /* neon_vld4_lanev4si */
    case 1789:  /* neon_vld4_lanev4sf */
      return NEON_TYPE_NEON_VLD3_VLD4_LANE;

    case 1697:  /* neon_vld2_lanev8qi */
    case 1698:  /* neon_vld2_lanev4hi */
    case 1699:  /* neon_vld2_lanev2si */
    case 1700:  /* neon_vld2_lanev2sf */
    case 1701:  /* neon_vld2_lanev8hi */
    case 1702:  /* neon_vld2_lanev4si */
    case 1703:  /* neon_vld2_lanev4sf */
      return NEON_TYPE_NEON_VLD1_VLD2_LANE;

    case 1755:  /* neon_vst3qav16qi */
    case 1756:  /* neon_vst3qav8hi */
    case 1757:  /* neon_vst3qav4si */
    case 1758:  /* neon_vst3qav4sf */
    case 1759:  /* neon_vst3qbv16qi */
    case 1760:  /* neon_vst3qbv8hi */
    case 1761:  /* neon_vst3qbv4si */
    case 1762:  /* neon_vst3qbv4sf */
    case 1800:  /* neon_vst4qav16qi */
    case 1801:  /* neon_vst4qav8hi */
    case 1802:  /* neon_vst4qav4si */
    case 1803:  /* neon_vst4qav4sf */
    case 1804:  /* neon_vst4qbv16qi */
    case 1805:  /* neon_vst4qbv8hi */
    case 1806:  /* neon_vst4qbv4si */
    case 1807:  /* neon_vst4qbv4sf */
      return NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4;

    case 798:  /* *movmisalignv8qi_neon_store */
    case 799:  /* *movmisalignv4hi_neon_store */
    case 800:  /* *movmisalignv2si_neon_store */
    case 801:  /* *movmisalignv2sf_neon_store */
    case 802:  /* *movmisaligndi_neon_store */
    case 808:  /* *movmisalignv16qi_neon_store */
    case 809:  /* *movmisalignv8hi_neon_store */
    case 810:  /* *movmisalignv4si_neon_store */
    case 811:  /* *movmisalignv4sf_neon_store */
    case 812:  /* *movmisalignv2di_neon_store */
    case 1668:  /* neon_vst1v8qi */
    case 1669:  /* neon_vst1v16qi */
    case 1670:  /* neon_vst1v4hi */
    case 1671:  /* neon_vst1v8hi */
    case 1672:  /* neon_vst1v2si */
    case 1673:  /* neon_vst1v4si */
    case 1674:  /* neon_vst1v2sf */
    case 1675:  /* neon_vst1v4sf */
    case 1676:  /* neon_vst1di */
    case 1677:  /* neon_vst1v2di */
    case 1709:  /* neon_vst2v8qi */
    case 1710:  /* neon_vst2v4hi */
    case 1711:  /* neon_vst2v2si */
    case 1712:  /* neon_vst2v2sf */
    case 1713:  /* neon_vst2di */
    case 1714:  /* neon_vst2v16qi */
    case 1715:  /* neon_vst2v8hi */
    case 1716:  /* neon_vst2v4si */
    case 1717:  /* neon_vst2v4sf */
      return NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS;

    case 1730:  /* neon_vld3qav16qi */
    case 1731:  /* neon_vld3qav8hi */
    case 1732:  /* neon_vld3qav4si */
    case 1733:  /* neon_vld3qav4sf */
    case 1734:  /* neon_vld3qbv16qi */
    case 1735:  /* neon_vld3qbv8hi */
    case 1736:  /* neon_vld3qbv4si */
    case 1737:  /* neon_vld3qbv4sf */
    case 1775:  /* neon_vld4qav16qi */
    case 1776:  /* neon_vld4qav8hi */
    case 1777:  /* neon_vld4qav4si */
    case 1778:  /* neon_vld4qav4sf */
    case 1779:  /* neon_vld4qbv16qi */
    case 1780:  /* neon_vld4qbv8hi */
    case 1781:  /* neon_vld4qbv4si */
    case 1782:  /* neon_vld4qbv4sf */
      return NEON_TYPE_NEON_VLD3_VLD4;

    case 1663:  /* neon_vld1_dupv16qi */
    case 1664:  /* neon_vld1_dupv8hi */
    case 1665:  /* neon_vld1_dupv4si */
    case 1666:  /* neon_vld1_dupv4sf */
    case 1667:  /* neon_vld1_dupv2di */
    case 1693:  /* neon_vld2v16qi */
    case 1694:  /* neon_vld2v8hi */
    case 1695:  /* neon_vld2v4si */
    case 1696:  /* neon_vld2v4sf */
      return NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES;

    case 803:  /* *movmisalignv8qi_neon_load */
    case 804:  /* *movmisalignv4hi_neon_load */
    case 805:  /* *movmisalignv2si_neon_load */
    case 806:  /* *movmisalignv2sf_neon_load */
    case 807:  /* *movmisaligndi_neon_load */
    case 813:  /* *movmisalignv16qi_neon_load */
    case 814:  /* *movmisalignv8hi_neon_load */
    case 815:  /* *movmisalignv4si_neon_load */
    case 816:  /* *movmisalignv4sf_neon_load */
    case 817:  /* *movmisalignv2di_neon_load */
    case 1638:  /* neon_vld1v8qi */
    case 1639:  /* neon_vld1v16qi */
    case 1640:  /* neon_vld1v4hi */
    case 1641:  /* neon_vld1v8hi */
    case 1642:  /* neon_vld1v2si */
    case 1643:  /* neon_vld1v4si */
    case 1644:  /* neon_vld1v2sf */
    case 1645:  /* neon_vld1v4sf */
    case 1646:  /* neon_vld1di */
    case 1647:  /* neon_vld1v2di */
      return NEON_TYPE_NEON_VLD1_1_2_REGS;

    case 1605:  /* neon_vtbl3v8qi */
    case 1606:  /* neon_vtbl4v8qi */
    case 1612:  /* neon_vtbx3v8qi */
    case 1613:  /* neon_vtbx4v8qi */
      return NEON_TYPE_NEON_BP_3CYCLE;

    case 1603:  /* neon_vtbl1v8qi */
    case 1604:  /* neon_vtbl2v8qi */
    case 1610:  /* neon_vtbx1v8qi */
    case 1611:  /* neon_vtbx2v8qi */
      return NEON_TYPE_NEON_BP_2CYCLE;

    case 1374:  /* neon_vget_lanev8qi_sext_internal */
    case 1375:  /* neon_vget_lanev4hi_sext_internal */
    case 1376:  /* neon_vget_lanev2si_sext_internal */
    case 1377:  /* neon_vget_lanev2sf_sext_internal */
    case 1378:  /* neon_vget_lanev8qi_zext_internal */
    case 1379:  /* neon_vget_lanev4hi_zext_internal */
    case 1380:  /* neon_vget_lanev2si_zext_internal */
    case 1381:  /* neon_vget_lanev2sf_zext_internal */
    case 1382:  /* neon_vget_lanev16qi_sext_internal */
    case 1383:  /* neon_vget_lanev8hi_sext_internal */
    case 1384:  /* neon_vget_lanev4si_sext_internal */
    case 1385:  /* neon_vget_lanev4sf_sext_internal */
    case 1386:  /* neon_vget_lanev16qi_zext_internal */
    case 1387:  /* neon_vget_lanev8hi_zext_internal */
    case 1388:  /* neon_vget_lanev4si_zext_internal */
    case 1389:  /* neon_vget_lanev4sf_zext_internal */
    case 1390:  /* neon_vdup_nv8qi */
    case 1391:  /* neon_vdup_nv4hi */
    case 1392:  /* neon_vdup_nv16qi */
    case 1393:  /* neon_vdup_nv8hi */
    case 1394:  /* neon_vdup_nv2si */
    case 1395:  /* neon_vdup_nv2sf */
    case 1396:  /* neon_vdup_nv4si */
    case 1397:  /* neon_vdup_nv4sf */
    case 1398:  /* neon_vdup_nv2di */
    case 1399:  /* neon_vdup_lanev8qi_internal */
    case 1400:  /* neon_vdup_lanev16qi_internal */
    case 1401:  /* neon_vdup_lanev4hi_internal */
    case 1402:  /* neon_vdup_lanev8hi_internal */
    case 1403:  /* neon_vdup_lanev2si_internal */
    case 1404:  /* neon_vdup_lanev4si_internal */
    case 1405:  /* neon_vdup_lanev2sf_internal */
    case 1406:  /* neon_vdup_lanev4sf_internal */
    case 1438:  /* neon_vmovnv8hi */
    case 1439:  /* neon_vmovnv4si */
    case 1440:  /* neon_vmovnv2di */
    case 1494:  /* neon_vrev64v8qi */
    case 1495:  /* neon_vrev64v16qi */
    case 1496:  /* neon_vrev64v4hi */
    case 1497:  /* neon_vrev64v8hi */
    case 1498:  /* neon_vrev64v2si */
    case 1499:  /* neon_vrev64v4si */
    case 1500:  /* neon_vrev64v2sf */
    case 1501:  /* neon_vrev64v4sf */
    case 1502:  /* neon_vrev64v2di */
    case 1503:  /* neon_vrev32v8qi */
    case 1504:  /* neon_vrev32v4hi */
    case 1505:  /* neon_vrev32v16qi */
    case 1506:  /* neon_vrev32v8hi */
    case 1507:  /* neon_vrev16v8qi */
    case 1508:  /* neon_vrev16v16qi */
      return NEON_TYPE_NEON_BP_SIMPLE;

    case 1579:  /* neon_vsra_nv8qi */
    case 1580:  /* neon_vsra_nv16qi */
    case 1581:  /* neon_vsra_nv4hi */
    case 1582:  /* neon_vsra_nv8hi */
    case 1583:  /* neon_vsra_nv2si */
    case 1584:  /* neon_vsra_nv4si */
    case 1585:  /* neon_vsra_ndi */
    case 1586:  /* neon_vsra_nv2di */
      return NEON_TYPE_NEON_VSRA_VRSRA;

    case 1040:  /* ashldi3_neon_noclobber */
    case 1042:  /* signed_shift_di3_neon */
    case 1043:  /* unsigned_shift_di3_neon */
    case 1044:  /* ashrdi3_neon_imm_noclobber */
    case 1045:  /* lshrdi3_neon_imm_noclobber */
      return NEON_TYPE_NEON_VSHL_DDD;

    case 1441:  /* neon_vqmovnv8hi */
    case 1442:  /* neon_vqmovnv4si */
    case 1443:  /* neon_vqmovnv2di */
    case 1444:  /* neon_vqmovunv8hi */
    case 1445:  /* neon_vqmovunv4si */
    case 1446:  /* neon_vqmovunv2di */
    case 1546:  /* neon_vqshrn_nv8hi */
    case 1547:  /* neon_vqshrn_nv4si */
    case 1548:  /* neon_vqshrn_nv2di */
    case 1549:  /* neon_vqshrun_nv8hi */
    case 1550:  /* neon_vqshrun_nv4si */
    case 1551:  /* neon_vqshrun_nv2di */
    case 1560:  /* neon_vqshl_nv8qi */
    case 1561:  /* neon_vqshl_nv16qi */
    case 1562:  /* neon_vqshl_nv4hi */
    case 1563:  /* neon_vqshl_nv8hi */
    case 1564:  /* neon_vqshl_nv2si */
    case 1565:  /* neon_vqshl_nv4si */
    case 1566:  /* neon_vqshl_ndi */
    case 1567:  /* neon_vqshl_nv2di */
    case 1568:  /* neon_vqshlu_nv8qi */
    case 1569:  /* neon_vqshlu_nv16qi */
    case 1570:  /* neon_vqshlu_nv4hi */
    case 1571:  /* neon_vqshlu_nv8hi */
    case 1572:  /* neon_vqshlu_nv2si */
    case 1573:  /* neon_vqshlu_nv4si */
    case 1574:  /* neon_vqshlu_ndi */
    case 1575:  /* neon_vqshlu_nv2di */
      return NEON_TYPE_NEON_SHIFT_2;

    case 1447:  /* neon_vmovlv8qi */
    case 1448:  /* neon_vmovlv4hi */
    case 1449:  /* neon_vmovlv2si */
    case 1535:  /* neon_vshr_nv8qi */
    case 1536:  /* neon_vshr_nv16qi */
    case 1537:  /* neon_vshr_nv4hi */
    case 1538:  /* neon_vshr_nv8hi */
    case 1539:  /* neon_vshr_nv2si */
    case 1540:  /* neon_vshr_nv4si */
    case 1541:  /* neon_vshr_ndi */
    case 1542:  /* neon_vshr_nv2di */
    case 1543:  /* neon_vshrn_nv8hi */
    case 1544:  /* neon_vshrn_nv4si */
    case 1545:  /* neon_vshrn_nv2di */
    case 1552:  /* neon_vshl_nv8qi */
    case 1553:  /* neon_vshl_nv16qi */
    case 1554:  /* neon_vshl_nv4hi */
    case 1555:  /* neon_vshl_nv8hi */
    case 1556:  /* neon_vshl_nv2si */
    case 1557:  /* neon_vshl_nv4si */
    case 1558:  /* neon_vshl_ndi */
    case 1559:  /* neon_vshl_nv2di */
    case 1576:  /* neon_vshll_nv8qi */
    case 1577:  /* neon_vshll_nv4hi */
    case 1578:  /* neon_vshll_nv2si */
    case 1815:  /* neon_vec_unpacks_lo_v16qi */
    case 1816:  /* neon_vec_unpacku_lo_v16qi */
    case 1817:  /* neon_vec_unpacks_lo_v8hi */
    case 1818:  /* neon_vec_unpacku_lo_v8hi */
    case 1819:  /* neon_vec_unpacks_lo_v4si */
    case 1820:  /* neon_vec_unpacku_lo_v4si */
    case 1821:  /* neon_vec_unpacks_hi_v16qi */
    case 1822:  /* neon_vec_unpacku_hi_v16qi */
    case 1823:  /* neon_vec_unpacks_hi_v8hi */
    case 1824:  /* neon_vec_unpacku_hi_v8hi */
    case 1825:  /* neon_vec_unpacks_hi_v4si */
    case 1826:  /* neon_vec_unpacku_hi_v4si */
    case 1827:  /* neon_vec_smult_lo_v16qi */
    case 1828:  /* neon_vec_umult_lo_v16qi */
    case 1829:  /* neon_vec_smult_lo_v8hi */
    case 1830:  /* neon_vec_umult_lo_v8hi */
    case 1831:  /* neon_vec_smult_lo_v4si */
    case 1832:  /* neon_vec_umult_lo_v4si */
    case 1833:  /* neon_vec_smult_hi_v16qi */
    case 1834:  /* neon_vec_umult_hi_v16qi */
    case 1835:  /* neon_vec_smult_hi_v8hi */
    case 1836:  /* neon_vec_umult_hi_v8hi */
    case 1837:  /* neon_vec_smult_hi_v4si */
    case 1838:  /* neon_vec_umult_hi_v4si */
    case 1839:  /* neon_vec_sshiftl_v8qi */
    case 1840:  /* neon_vec_ushiftl_v8qi */
    case 1841:  /* neon_vec_sshiftl_v4hi */
    case 1842:  /* neon_vec_ushiftl_v4hi */
    case 1843:  /* neon_vec_sshiftl_v2si */
    case 1844:  /* neon_vec_ushiftl_v2si */
    case 1845:  /* neon_unpacks_v8qi */
    case 1846:  /* neon_unpacku_v8qi */
    case 1847:  /* neon_unpacks_v4hi */
    case 1848:  /* neon_unpacku_v4hi */
    case 1849:  /* neon_unpacks_v2si */
    case 1850:  /* neon_unpacku_v2si */
    case 1851:  /* neon_vec_smult_v8qi */
    case 1852:  /* neon_vec_umult_v8qi */
    case 1853:  /* neon_vec_smult_v4hi */
    case 1854:  /* neon_vec_umult_v4hi */
    case 1855:  /* neon_vec_smult_v2si */
    case 1856:  /* neon_vec_umult_v2si */
    case 1857:  /* vec_pack_trunc_v8hi */
    case 1858:  /* vec_pack_trunc_v4si */
    case 1859:  /* vec_pack_trunc_v2di */
    case 1860:  /* neon_vec_pack_trunc_v8hi */
    case 1861:  /* neon_vec_pack_trunc_v4si */
    case 1862:  /* neon_vec_pack_trunc_v2di */
      return NEON_TYPE_NEON_SHIFT_1;

    case 1297:  /* neon_vabalv8qi */
    case 1298:  /* neon_vabalv4hi */
    case 1299:  /* neon_vabalv2si */
      return NEON_TYPE_NEON_VABA;

    case 1340:  /* neon_vqabsv8qi */
    case 1341:  /* neon_vqabsv16qi */
    case 1342:  /* neon_vqabsv4hi */
    case 1343:  /* neon_vqabsv8hi */
    case 1344:  /* neon_vqabsv2si */
    case 1345:  /* neon_vqabsv4si */
    case 1346:  /* neon_vqnegv8qi */
    case 1347:  /* neon_vqnegv16qi */
    case 1348:  /* neon_vqnegv4hi */
    case 1349:  /* neon_vqnegv8hi */
    case 1350:  /* neon_vqnegv2si */
    case 1351:  /* neon_vqnegv4si */
      return NEON_TYPE_NEON_VQNEG_VQABS;

    case 1071:  /* quad_halves_umaxv16qi */
    case 1070:  /* quad_halves_uminv16qi */
    case 1069:  /* quad_halves_smaxv16qi */
    case 1068:  /* quad_halves_sminv16qi */
    case 1066:  /* quad_halves_umaxv8hi */
    case 1065:  /* quad_halves_uminv8hi */
    case 1064:  /* quad_halves_smaxv8hi */
    case 1063:  /* quad_halves_sminv8hi */
    case 1061:  /* quad_halves_smaxv4sf */
    case 1060:  /* quad_halves_sminv4sf */
    case 1058:  /* quad_halves_umaxv4si */
    case 1057:  /* quad_halves_uminv4si */
    case 1056:  /* quad_halves_smaxv4si */
    case 1055:  /* quad_halves_sminv4si */
    case 979:  /* *uminv8qi3_neon */
    case 980:  /* *uminv16qi3_neon */
    case 981:  /* *uminv4hi3_neon */
    case 982:  /* *uminv8hi3_neon */
    case 983:  /* *uminv2si3_neon */
    case 984:  /* *uminv4si3_neon */
    case 985:  /* *umaxv8qi3_neon */
    case 986:  /* *umaxv16qi3_neon */
    case 987:  /* *umaxv4hi3_neon */
    case 988:  /* *umaxv8hi3_neon */
    case 989:  /* *umaxv2si3_neon */
    case 990:  /* *umaxv4si3_neon */
    case 1085:  /* neon_vpuminv8qi */
    case 1086:  /* neon_vpuminv4hi */
    case 1087:  /* neon_vpuminv2si */
    case 1088:  /* neon_vpumaxv8qi */
    case 1089:  /* neon_vpumaxv4hi */
    case 1090:  /* neon_vpumaxv2si */
    case 1099:  /* *ss_subv8qi_neon */
    case 1100:  /* *ss_subv4hi_neon */
    case 1101:  /* *ss_subv2si_neon */
    case 1102:  /* *ss_subv2sf_neon */
    case 1103:  /* *us_subv8qi_neon */
    case 1104:  /* *us_subv4hi_neon */
    case 1105:  /* *us_subv2si_neon */
    case 1106:  /* *us_subv2sf_neon */
    case 1201:  /* neon_vqsubv8qi */
    case 1202:  /* neon_vqsubv16qi */
    case 1203:  /* neon_vqsubv4hi */
    case 1204:  /* neon_vqsubv8hi */
    case 1205:  /* neon_vqsubv2si */
    case 1206:  /* neon_vqsubv4si */
    case 1207:  /* neon_vqsubdi */
    case 1208:  /* neon_vqsubv2di */
    case 1209:  /* neon_vhsubv8qi */
    case 1210:  /* neon_vhsubv16qi */
    case 1211:  /* neon_vhsubv4hi */
    case 1212:  /* neon_vhsubv8hi */
    case 1213:  /* neon_vhsubv2si */
    case 1214:  /* neon_vhsubv4si */
    case 1234:  /* neon_vcgeuv8qi */
    case 1235:  /* neon_vcgeuv16qi */
    case 1236:  /* neon_vcgeuv4hi */
    case 1237:  /* neon_vcgeuv8hi */
    case 1238:  /* neon_vcgeuv2si */
    case 1239:  /* neon_vcgeuv4si */
    case 1248:  /* neon_vcgtuv8qi */
    case 1249:  /* neon_vcgtuv16qi */
    case 1250:  /* neon_vcgtuv4hi */
    case 1251:  /* neon_vcgtuv8hi */
    case 1252:  /* neon_vcgtuv2si */
    case 1253:  /* neon_vcgtuv4si */
    case 1288:  /* neon_vabdlv8qi */
    case 1289:  /* neon_vabdlv4hi */
    case 1290:  /* neon_vabdlv2si */
      return NEON_TYPE_NEON_INT_5;

    case 1091:  /* *ss_addv8qi_neon */
    case 1092:  /* *ss_addv4hi_neon */
    case 1093:  /* *ss_addv2si_neon */
    case 1094:  /* *ss_addv2sf_neon */
    case 1095:  /* *us_addv8qi_neon */
    case 1096:  /* *us_addv4hi_neon */
    case 1097:  /* *us_addv2si_neon */
    case 1098:  /* *us_addv2sf_neon */
    case 1123:  /* neon_vhaddv8qi */
    case 1124:  /* neon_vhaddv16qi */
    case 1125:  /* neon_vhaddv4hi */
    case 1126:  /* neon_vhaddv8hi */
    case 1127:  /* neon_vhaddv2si */
    case 1128:  /* neon_vhaddv4si */
    case 1129:  /* neon_vqaddv8qi */
    case 1130:  /* neon_vqaddv16qi */
    case 1131:  /* neon_vqaddv4hi */
    case 1132:  /* neon_vqaddv8hi */
    case 1133:  /* neon_vqaddv2si */
    case 1134:  /* neon_vqaddv4si */
    case 1135:  /* neon_vqadddi */
    case 1136:  /* neon_vqaddv2di */
    case 1137:  /* neon_vaddhnv8hi */
    case 1138:  /* neon_vaddhnv4si */
    case 1139:  /* neon_vaddhnv2di */
    case 1215:  /* neon_vsubhnv8hi */
    case 1216:  /* neon_vsubhnv4si */
    case 1217:  /* neon_vsubhnv2di */
    case 1274:  /* neon_vtstv8qi */
    case 1275:  /* neon_vtstv16qi */
    case 1276:  /* neon_vtstv4hi */
    case 1277:  /* neon_vtstv8hi */
    case 1278:  /* neon_vtstv2si */
    case 1279:  /* neon_vtstv4si */
      return NEON_TYPE_NEON_INT_4;

    case 1048:  /* widen_ssumv8qi3 */
    case 1049:  /* widen_ssumv4hi3 */
    case 1050:  /* widen_ssumv2si3 */
    case 1051:  /* widen_usumv8qi3 */
    case 1052:  /* widen_usumv4hi3 */
    case 1053:  /* widen_usumv2si3 */
    case 1117:  /* neon_vaddlv8qi */
    case 1118:  /* neon_vaddlv4hi */
    case 1119:  /* neon_vaddlv2si */
    case 1316:  /* neon_vpaddlv8qi */
    case 1317:  /* neon_vpaddlv16qi */
    case 1318:  /* neon_vpaddlv4hi */
    case 1319:  /* neon_vpaddlv8hi */
    case 1320:  /* neon_vpaddlv2si */
    case 1321:  /* neon_vpaddlv4si */
      return NEON_TYPE_NEON_INT_3;

    case 1120:  /* neon_vaddwv8qi */
    case 1121:  /* neon_vaddwv4hi */
    case 1122:  /* neon_vaddwv2si */
    case 1195:  /* neon_vsublv8qi */
    case 1196:  /* neon_vsublv4hi */
    case 1197:  /* neon_vsublv2si */
    case 1198:  /* neon_vsubwv8qi */
    case 1199:  /* neon_vsubwv4hi */
    case 1200:  /* neon_vsubwv2si */
      return NEON_TYPE_NEON_INT_2;

    case 1067:  /* quad_halves_plusv16qi */
    case 1062:  /* quad_halves_plusv8hi */
    case 1059:  /* quad_halves_plusv4sf */
    case 1054:  /* quad_halves_plusv4si */
    case 903:  /* iorv8qi3 */
    case 904:  /* iorv16qi3 */
    case 905:  /* iorv4hi3 */
    case 906:  /* iorv8hi3 */
    case 907:  /* iorv2si3 */
    case 908:  /* iorv4si3 */
    case 909:  /* iorv2sf3 */
    case 910:  /* iorv4sf3 */
    case 911:  /* iorv2di3 */
    case 913:  /* andv8qi3 */
    case 914:  /* andv16qi3 */
    case 915:  /* andv4hi3 */
    case 916:  /* andv8hi3 */
    case 917:  /* andv2si3 */
    case 918:  /* andv4si3 */
    case 919:  /* andv2sf3 */
    case 920:  /* andv4sf3 */
    case 921:  /* andv2di3 */
    case 923:  /* ornv8qi3_neon */
    case 924:  /* ornv16qi3_neon */
    case 925:  /* ornv4hi3_neon */
    case 926:  /* ornv8hi3_neon */
    case 927:  /* ornv2si3_neon */
    case 928:  /* ornv4si3_neon */
    case 929:  /* ornv2sf3_neon */
    case 930:  /* ornv4sf3_neon */
    case 931:  /* ornv2di3_neon */
    case 933:  /* bicv8qi3_neon */
    case 934:  /* bicv16qi3_neon */
    case 935:  /* bicv4hi3_neon */
    case 936:  /* bicv8hi3_neon */
    case 937:  /* bicv2si3_neon */
    case 938:  /* bicv4si3_neon */
    case 939:  /* bicv2sf3_neon */
    case 940:  /* bicv4sf3_neon */
    case 941:  /* bicv2di3_neon */
    case 943:  /* xorv8qi3 */
    case 944:  /* xorv16qi3 */
    case 945:  /* xorv4hi3 */
    case 946:  /* xorv8hi3 */
    case 947:  /* xorv2si3 */
    case 948:  /* xorv4si3 */
    case 949:  /* xorv2sf3 */
    case 950:  /* xorv4sf3 */
    case 951:  /* xorv2di3 */
    case 953:  /* one_cmplv8qi2 */
    case 954:  /* one_cmplv16qi2 */
    case 955:  /* one_cmplv4hi2 */
    case 956:  /* one_cmplv8hi2 */
    case 957:  /* one_cmplv2si2 */
    case 958:  /* one_cmplv4si2 */
    case 959:  /* one_cmplv2sf2 */
    case 960:  /* one_cmplv4sf2 */
    case 961:  /* one_cmplv2di2 */
    case 1072:  /* reduc_splus_v2di */
    case 1322:  /* neon_vpadalv8qi */
    case 1323:  /* neon_vpadalv16qi */
    case 1324:  /* neon_vpadalv4hi */
    case 1325:  /* neon_vpadalv8hi */
    case 1326:  /* neon_vpadalv2si */
    case 1327:  /* neon_vpadalv4si */
    case 1352:  /* neon_vclsv8qi */
    case 1353:  /* neon_vclsv16qi */
    case 1354:  /* neon_vclsv4hi */
    case 1355:  /* neon_vclsv8hi */
    case 1356:  /* neon_vclsv2si */
    case 1357:  /* neon_vclsv4si */
    case 1358:  /* clzv8qi2 */
    case 1359:  /* clzv16qi2 */
    case 1360:  /* clzv4hi2 */
    case 1361:  /* clzv8hi2 */
    case 1362:  /* clzv2si2 */
    case 1363:  /* clzv4si2 */
    case 1364:  /* popcountv8qi2 */
    case 1365:  /* popcountv16qi2 */
    case 1509:  /* neon_vbslv8qi_internal */
    case 1510:  /* neon_vbslv16qi_internal */
    case 1511:  /* neon_vbslv4hi_internal */
    case 1512:  /* neon_vbslv8hi_internal */
    case 1513:  /* neon_vbslv2si_internal */
    case 1514:  /* neon_vbslv4si_internal */
    case 1515:  /* neon_vbslv2sf_internal */
    case 1516:  /* neon_vbslv4sf_internal */
    case 1517:  /* neon_vbsldi_internal */
    case 1518:  /* neon_vbslv2di_internal */
      return NEON_TYPE_NEON_INT_1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return NEON_TYPE_NONE;

    }
}

int
get_attr_neg_pool_range (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 3581:  /* *p *thumb2_movhi_insn */
    case 741:  /* *thumb2_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else
        {
	  return 250 /* 0xfa */;
        }

    case 3580:  /* *p *thumb2_movsi_insn */
    case 739:  /* *thumb2_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 0;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 427:  /* *cond_iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  return 4084 /* 0xff4 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 3214:  /* *p *movhi_insn_arch4 */
    case 196:  /* *movhi_insn_arch4 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else
        {
	  return 244 /* 0xf4 */;
        }

    case 188:  /* pic_load_addr_unified */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4084 /* 0xff4 */;
        }
      else
        {
	  return 0;
        }

    case 3211:  /* *p *arm_movsi_insn */
    case 186:  /* *arm_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 4084 /* 0xff4 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 189:  /* pic_load_addr_32bit */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_NO))))
        {
	  return 4084 /* 0xff4 */;
        }
      else
        {
	  return 0;
        }

    case 426:  /* *iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 4084 /* 0xff4 */;
        }
      else if (which_alternative == 5)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 8)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 9)
        {
	  return 1012 /* 0x3f4 */;
        }
      else if (which_alternative == 10)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 11)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 12)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 13)
        {
	  return 1008 /* 0x3f0 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 783:  /* *neon_movv8qi */
    case 784:  /* *neon_movv4hi */
    case 785:  /* *neon_movv2si */
    case 786:  /* *neon_movv2sf */
    case 787:  /* *neon_movdi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 1004 /* 0x3ec */;
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  return 1004 /* 0x3ec */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 788:  /* *neon_movv16qi */
    case 789:  /* *neon_movv8hi */
    case 790:  /* *neon_movv4si */
    case 791:  /* *neon_movv4sf */
    case 792:  /* *neon_movv2di */
    case 793:  /* *neon_movti */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 996 /* 0x3e4 */;
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  return 996 /* 0x3e4 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 178:  /* *arm_extendqihi_insn */
    case 3206:  /* *p *arm_extendqihi_insn */
      return 244 /* 0xf4 */;

    case 175:  /* *arm_extendhisi2 */
    case 176:  /* *arm_extendhisi2_v6 */
    case 179:  /* *arm_extendqisi */
    case 180:  /* *arm_extendqisi_v6 */
    case 3204:  /* *p *arm_extendhisi2 */
    case 3205:  /* *p *arm_extendhisi2_v6 */
    case 3207:  /* *p *arm_extendqisi */
    case 3208:  /* *p *arm_extendqisi_v6 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else
        {
	  return 244 /* 0xf4 */;
        }

    case 265:  /* *load_indirect_jump */
    case 3225:  /* *p *load_indirect_jump */
      return 4084 /* 0xff4 */;

    case 428:  /* movv2si_internal */
    case 429:  /* movv4hi_internal */
    case 430:  /* movv8qi_internal */
    case 3299:  /* *p movv2si_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3301:  /* *p movv8qi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  return 244 /* 0xf4 */;
        }
      else if (which_alternative == 3)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 6)
        {
	  return 244 /* 0xf4 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 641:  /* *arm_movsi_vfp */
    case 3512:  /* *p *arm_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 4084 /* 0xff4 */;
        }
      else if (which_alternative == 5)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 8)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 9)
        {
	  return 1008 /* 0x3f0 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 642:  /* *thumb2_movsi_vfp */
    case 3513:  /* *p *thumb2_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 0;
        }
      else if (which_alternative == 5)
        {
	  return 0;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 8)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 9)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 10)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 11)
        {
	  return 1008 /* 0x3f0 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 643:  /* *movdi_vfp */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 3514:  /* *p *movdi_vfp_cortexa8 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 1004 /* 0x3ec */;
        }
      else if (which_alternative == 5)
        {
	  return 0;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 8)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 9)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 10)
        {
	  return 1004 /* 0x3ec */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 647:  /* *movsf_vfp */
    case 3515:  /* *p *movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 1008 /* 0x3f0 */;
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  return 4080 /* 0xff0 */;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 648:  /* *thumb2_movsf_vfp */
    case 650:  /* *thumb2_movdf_vfp */
    case 3516:  /* *p *thumb2_movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 1008 /* 0x3f0 */;
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  return 0;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 649:  /* *movdf_vfp */
    case 3517:  /* *p *movdf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 1004 /* 0x3ec */;
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  return 1004 /* 0x3ec */;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }

    case 758:  /* *thumb2_extendqisi_v6 */
    case 759:  /* *thumb2_zero_extendhisi2_v6 */
    case 760:  /* thumb2_zero_extendqisi2_v6 */
    case 3582:  /* *p *thumb2_extendqisi_v6 */
    case 3583:  /* *p *thumb2_zero_extendhisi2_v6 */
    case 3584:  /* *p thumb2_zero_extendqisi2_v6 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_neg_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_neg_pool_range (insn);
	    }
        }
      else
        {
	  return 250 /* 0xfa */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return get_attr_thumb2_neg_pool_range (insn);
        }
      else
        {
	  return get_attr_arm_neg_pool_range (insn);
        }

    }
}

enum attr_nonce_enabled
get_attr_nonce_enabled (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return NONCE_ENABLED_YES;

    }
}

enum attr_opt_enabled
get_attr_opt_enabled (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_opt cached_opt ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1047:  /* lshrdi3_neon */
    case 1046:  /* ashrdi3_neon */
    case 1041:  /* ashldi3_neon */
      extract_constrain_insn_cached (insn);
      if ((!((1 << which_alternative) & 0xc)) || ((((1 << which_alternative) & 0xc)) && (
#line 164 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(optimize_function_for_speed_p (cfun)))))
        {
	  return OPT_ENABLED_YES;
        }
      else
        {
	  return OPT_ENABLED_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if ((cached_opt = get_attr_opt (insn)) == OPT_ANY)
        {
	  return OPT_ENABLED_YES;
        }
      else if ((cached_opt == OPT_SPEED) && (
#line 164 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(optimize_function_for_speed_p (cfun))))
        {
	  return OPT_ENABLED_YES;
        }
      else if ((cached_opt == OPT_SIZE) && (
#line 168 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(optimize_function_for_size_p (cfun))))
        {
	  return OPT_ENABLED_YES;
        }
      else
        {
	  return OPT_ENABLED_NO;
        }

    default:
      return OPT_ENABLED_YES;

    }
}

enum attr_opt
get_attr_opt (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 1047:  /* lshrdi3_neon */
    case 1046:  /* ashrdi3_neon */
    case 1041:  /* ashldi3_neon */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return OPT_ANY;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return OPT_SPEED;
        }
      else
        {
	  return OPT_ANY;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return OPT_ANY;

    }
}

enum attr_predicable
get_attr_predicable (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 153:  /* one_cmpldi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PREDICABLE_NO;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return PREDICABLE_YES;
        }
      else
        {
	  return PREDICABLE_NO;
        }

    case 149:  /* *arm_abssi2 */
    case 151:  /* *arm_neg_abssi2 */
    case 737:  /* *thumb2_abssi2 */
    case 738:  /* *thumb2_neg_abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PREDICABLE_NO;
        }
      else
        {
	  return PREDICABLE_YES;
        }

    case 5:  /* *arm_addsi3 */
    case 8:  /* *addsi3_compare0_scratch */
    case 9:  /* *compare_negsi_si */
    case 13:  /* *compare_addsi2_op0 */
    case 14:  /* *compare_addsi2_op1 */
    case 32:  /* *arm_subsi3_insn */
    case 36:  /* *arm_mulsi3 */
    case 37:  /* *arm_mulsi3_v6 */
    case 44:  /* *mulsi3addsi */
    case 45:  /* *mulsi3addsi_v6 */
    case 50:  /* *mulsi3subsi */
    case 51:  /* *mulsidi3adddi */
    case 52:  /* *mulsidi3adddi_v6 */
    case 53:  /* *mulsidi3_nov6 */
    case 54:  /* *mulsidi3_v6 */
    case 55:  /* *umulsidi3_nov6 */
    case 56:  /* *umulsidi3_v6 */
    case 57:  /* *umulsidi3adddi */
    case 58:  /* *umulsidi3adddi_v6 */
    case 59:  /* *smulsi3_highpart_nov6 */
    case 60:  /* *smulsi3_highpart_v6 */
    case 61:  /* *umulsi3_highpart_nov6 */
    case 62:  /* *umulsi3_highpart_v6 */
    case 63:  /* mulhisi3 */
    case 64:  /* *mulhisi3tb */
    case 65:  /* *mulhisi3bt */
    case 66:  /* *mulhisi3tt */
    case 67:  /* maddhisi4 */
    case 68:  /* *maddhisi4tb */
    case 69:  /* *maddhisi4tt */
    case 70:  /* maddhidi4 */
    case 71:  /* *maddhidi4tb */
    case 72:  /* *maddhidi4tt */
    case 76:  /* *arm_andsi3_insn */
    case 80:  /* *zeroextractsi_compare0_scratch */
    case 85:  /* insv_zero */
    case 86:  /* insv_t2 */
    case 87:  /* *anddi_notdi_di */
    case 88:  /* *anddi_notzesidi_di */
    case 89:  /* *anddi_notsesidi_di */
    case 90:  /* andsi_notsi_si */
    case 92:  /* andsi_not_shiftsi_si */
    case 95:  /* *iordi3_insn */
    case 96:  /* *iordi_zesidi_di */
    case 97:  /* *iordi_sesidi_di */
    case 98:  /* *iorsi3_insn */
    case 102:  /* *xordi3_insn */
    case 103:  /* *xordi_zesidi_di */
    case 104:  /* *xordi_sesidi_di */
    case 105:  /* *arm_xorsi3 */
    case 109:  /* *andsi_iorsi3_notsi */
    case 110:  /* *smax_0 */
    case 111:  /* *smax_m1 */
    case 113:  /* *smin_0 */
    case 119:  /* *satsi_smax */
    case 120:  /* *satsi_smin */
    case 121:  /* *satsi_smax_shift */
    case 122:  /* *satsi_smin_shift */
    case 130:  /* *arm_shiftsi3 */
    case 133:  /* *not_shiftsi */
    case 136:  /* unaligned_loadsi */
    case 137:  /* unaligned_loadhis */
    case 138:  /* unaligned_loadhiu */
    case 139:  /* unaligned_storesi */
    case 140:  /* unaligned_storehi */
    case 141:  /* *extv_reg */
    case 142:  /* extzv_t2 */
    case 143:  /* divsi3 */
    case 144:  /* udivsi3 */
    case 147:  /* *arm_negsi2 */
    case 154:  /* *arm_one_cmplsi2 */
    case 158:  /* zero_extendqidi2 */
    case 159:  /* zero_extendhidi2 */
    case 160:  /* zero_extendsidi2 */
    case 161:  /* extendqidi2 */
    case 162:  /* extendhidi2 */
    case 163:  /* extendsidi2 */
    case 165:  /* *arm_zero_extendhisi2 */
    case 166:  /* *arm_zero_extendhisi2_v6 */
    case 167:  /* *arm_zero_extendhisi2addsi */
    case 170:  /* *arm_zero_extendqisi2 */
    case 171:  /* *arm_zero_extendqisi2_v6 */
    case 172:  /* *arm_zero_extendqisi2addsi */
    case 173:  /* *compareqi_eq0 */
    case 175:  /* *arm_extendhisi2 */
    case 176:  /* *arm_extendhisi2_v6 */
    case 178:  /* *arm_extendqihi_insn */
    case 179:  /* *arm_extendqisi */
    case 180:  /* *arm_extendqisi_v6 */
    case 181:  /* *arm_extendqisi2addsi */
    case 185:  /* *arm_movt */
    case 186:  /* *arm_movsi_insn */
    case 192:  /* pic_add_dot_plus_eight */
    case 193:  /* tls_load_dot_plus_eight */
    case 196:  /* *movhi_insn_arch4 */
    case 197:  /* *movhi_bytes */
    case 198:  /* *arm_movqi_insn */
    case 200:  /* *arm32_movhf */
    case 202:  /* *arm_movsf_soft_insn */
    case 217:  /* *arm_cmpsi_insn */
    case 220:  /* *arm_cmpsi_negshiftsi_si */
    case 238:  /* *arm_jump */
    case 256:  /* *arm_return */
    case 259:  /* *arm_simple_return */
    case 264:  /* *arm_indirect_jump */
    case 265:  /* *load_indirect_jump */
    case 268:  /* *arith_shiftsi */
    case 271:  /* *sub_shiftsi */
    case 319:  /* *arith_adjacentmem */
    case 327:  /* *load_multiple_with_writeback */
    case 328:  /* *pop_multiple_with_writeback_and_return */
    case 329:  /* *pop_multiple_with_return */
    case 330:  /* *ldr_with_return */
    case 341:  /* clzsi2 */
    case 342:  /* rbitsi2 */
    case 347:  /* load_tp_hard */
    case 350:  /* *arm_movtas_ze */
    case 354:  /* *thumb2_ldrd */
    case 355:  /* *thumb2_ldrd_base */
    case 356:  /* *thumb2_ldrd_base_neg */
    case 357:  /* *thumb2_strd */
    case 358:  /* *thumb2_strd_base */
    case 359:  /* *thumb2_strd_base_neg */
    case 360:  /* *ldm4_ia */
    case 362:  /* *ldm4_ia_update */
    case 364:  /* *stm4_ia */
    case 365:  /* *stm4_ia_update */
    case 367:  /* *ldm4_ib */
    case 368:  /* *ldm4_ib_update */
    case 369:  /* *stm4_ib */
    case 370:  /* *stm4_ib_update */
    case 371:  /* *ldm4_da */
    case 372:  /* *ldm4_da_update */
    case 373:  /* *stm4_da */
    case 374:  /* *stm4_da_update */
    case 375:  /* *ldm4_db */
    case 376:  /* *ldm4_db_update */
    case 377:  /* *stm4_db */
    case 378:  /* *stm4_db_update */
    case 379:  /* *ldm3_ia */
    case 381:  /* *ldm3_ia_update */
    case 383:  /* *stm3_ia */
    case 384:  /* *stm3_ia_update */
    case 386:  /* *ldm3_ib */
    case 387:  /* *ldm3_ib_update */
    case 388:  /* *stm3_ib */
    case 389:  /* *stm3_ib_update */
    case 390:  /* *ldm3_da */
    case 391:  /* *ldm3_da_update */
    case 392:  /* *stm3_da */
    case 393:  /* *stm3_da_update */
    case 394:  /* *ldm3_db */
    case 395:  /* *ldm3_db_update */
    case 396:  /* *stm3_db */
    case 397:  /* *stm3_db_update */
    case 398:  /* *ldm2_ia */
    case 400:  /* *ldm2_ia_update */
    case 402:  /* *stm2_ia */
    case 403:  /* *stm2_ia_update */
    case 405:  /* *ldm2_ib */
    case 406:  /* *ldm2_ib_update */
    case 407:  /* *stm2_ib */
    case 408:  /* *stm2_ib_update */
    case 409:  /* *ldm2_da */
    case 410:  /* *ldm2_da_update */
    case 411:  /* *stm2_da */
    case 412:  /* *stm2_da_update */
    case 413:  /* *ldm2_db */
    case 414:  /* *ldm2_db_update */
    case 415:  /* *stm2_db */
    case 416:  /* *stm2_db_update */
    case 417:  /* *load_multiple */
    case 418:  /* tbcstv8qi */
    case 419:  /* tbcstv4hi */
    case 420:  /* tbcstv2si */
    case 421:  /* iwmmxt_iordi3 */
    case 422:  /* iwmmxt_xordi3 */
    case 423:  /* iwmmxt_anddi3 */
    case 424:  /* iwmmxt_nanddi3 */
    case 428:  /* movv2si_internal */
    case 429:  /* movv4hi_internal */
    case 430:  /* movv8qi_internal */
    case 431:  /* *andv2si3_iwmmxt */
    case 432:  /* *andv4hi3_iwmmxt */
    case 433:  /* *andv8qi3_iwmmxt */
    case 434:  /* *iorv2si3_iwmmxt */
    case 435:  /* *iorv4hi3_iwmmxt */
    case 436:  /* *iorv8qi3_iwmmxt */
    case 437:  /* *xorv2si3_iwmmxt */
    case 438:  /* *xorv4hi3_iwmmxt */
    case 439:  /* *xorv8qi3_iwmmxt */
    case 440:  /* *addv2si3_iwmmxt */
    case 441:  /* *addv4hi3_iwmmxt */
    case 442:  /* *addv8qi3_iwmmxt */
    case 443:  /* ssaddv8qi3 */
    case 444:  /* ssaddv4hi3 */
    case 445:  /* ssaddv2si3 */
    case 446:  /* usaddv8qi3 */
    case 447:  /* usaddv4hi3 */
    case 448:  /* usaddv2si3 */
    case 449:  /* *subv2si3_iwmmxt */
    case 450:  /* *subv4hi3_iwmmxt */
    case 451:  /* *subv8qi3_iwmmxt */
    case 452:  /* sssubv8qi3 */
    case 453:  /* sssubv4hi3 */
    case 454:  /* sssubv2si3 */
    case 455:  /* ussubv8qi3 */
    case 456:  /* ussubv4hi3 */
    case 457:  /* ussubv2si3 */
    case 458:  /* *mulv4hi3_iwmmxt */
    case 459:  /* smulv4hi3_highpart */
    case 460:  /* umulv4hi3_highpart */
    case 461:  /* iwmmxt_wmacs */
    case 462:  /* iwmmxt_wmacsz */
    case 463:  /* iwmmxt_wmacu */
    case 464:  /* iwmmxt_wmacuz */
    case 465:  /* iwmmxt_clrdi */
    case 466:  /* iwmmxt_clrv8qi */
    case 467:  /* iwmmxt_clrv4hi */
    case 468:  /* iwmmxt_clrv2si */
    case 469:  /* iwmmxt_uavgrndv8qi3 */
    case 470:  /* iwmmxt_uavgrndv4hi3 */
    case 471:  /* iwmmxt_uavgv8qi3 */
    case 472:  /* iwmmxt_uavgv4hi3 */
    case 473:  /* iwmmxt_tinsrb */
    case 474:  /* iwmmxt_tinsrh */
    case 475:  /* iwmmxt_tinsrw */
    case 476:  /* iwmmxt_textrmub */
    case 477:  /* iwmmxt_textrmsb */
    case 478:  /* iwmmxt_textrmuh */
    case 479:  /* iwmmxt_textrmsh */
    case 480:  /* iwmmxt_textrmw */
    case 481:  /* iwmmxt_wshufh */
    case 482:  /* eqv8qi3 */
    case 483:  /* eqv4hi3 */
    case 484:  /* eqv2si3 */
    case 485:  /* gtuv8qi3 */
    case 486:  /* gtuv4hi3 */
    case 487:  /* gtuv2si3 */
    case 488:  /* gtv8qi3 */
    case 489:  /* gtv4hi3 */
    case 490:  /* gtv2si3 */
    case 491:  /* *smaxv2si3_iwmmxt */
    case 492:  /* *smaxv4hi3_iwmmxt */
    case 493:  /* *smaxv8qi3_iwmmxt */
    case 494:  /* *umaxv2si3_iwmmxt */
    case 495:  /* *umaxv4hi3_iwmmxt */
    case 496:  /* *umaxv8qi3_iwmmxt */
    case 497:  /* *sminv2si3_iwmmxt */
    case 498:  /* *sminv4hi3_iwmmxt */
    case 499:  /* *sminv8qi3_iwmmxt */
    case 500:  /* *uminv2si3_iwmmxt */
    case 501:  /* *uminv4hi3_iwmmxt */
    case 502:  /* *uminv8qi3_iwmmxt */
    case 503:  /* iwmmxt_wpackhss */
    case 504:  /* iwmmxt_wpackwss */
    case 505:  /* iwmmxt_wpackdss */
    case 506:  /* iwmmxt_wpackhus */
    case 507:  /* iwmmxt_wpackwus */
    case 508:  /* iwmmxt_wpackdus */
    case 509:  /* iwmmxt_wunpckihb */
    case 510:  /* iwmmxt_wunpckihh */
    case 511:  /* iwmmxt_wunpckihw */
    case 512:  /* iwmmxt_wunpckilb */
    case 513:  /* iwmmxt_wunpckilh */
    case 514:  /* iwmmxt_wunpckilw */
    case 515:  /* iwmmxt_wunpckehub */
    case 516:  /* iwmmxt_wunpckehuh */
    case 517:  /* iwmmxt_wunpckehuw */
    case 518:  /* iwmmxt_wunpckehsb */
    case 519:  /* iwmmxt_wunpckehsh */
    case 520:  /* iwmmxt_wunpckehsw */
    case 521:  /* iwmmxt_wunpckelub */
    case 522:  /* iwmmxt_wunpckeluh */
    case 523:  /* iwmmxt_wunpckeluw */
    case 524:  /* iwmmxt_wunpckelsb */
    case 525:  /* iwmmxt_wunpckelsh */
    case 526:  /* iwmmxt_wunpckelsw */
    case 527:  /* rorv4hi3 */
    case 528:  /* rorv2si3 */
    case 529:  /* rordi3 */
    case 530:  /* ashrv4hi3_iwmmxt */
    case 531:  /* ashrv2si3_iwmmxt */
    case 532:  /* ashrdi3_iwmmxt */
    case 533:  /* lshrv4hi3_iwmmxt */
    case 534:  /* lshrv2si3_iwmmxt */
    case 535:  /* lshrdi3_iwmmxt */
    case 536:  /* ashlv4hi3_iwmmxt */
    case 537:  /* ashlv2si3_iwmmxt */
    case 538:  /* ashldi3_iwmmxt */
    case 539:  /* rorv4hi3_di */
    case 540:  /* rorv2si3_di */
    case 541:  /* rordi3_di */
    case 542:  /* ashrv4hi3_di */
    case 543:  /* ashrv2si3_di */
    case 544:  /* ashrdi3_di */
    case 545:  /* lshrv4hi3_di */
    case 546:  /* lshrv2si3_di */
    case 547:  /* lshrdi3_di */
    case 548:  /* ashlv4hi3_di */
    case 549:  /* ashlv2si3_di */
    case 550:  /* ashldi3_di */
    case 551:  /* iwmmxt_wmadds */
    case 552:  /* iwmmxt_wmaddu */
    case 553:  /* iwmmxt_tmia */
    case 554:  /* iwmmxt_tmiaph */
    case 555:  /* iwmmxt_tmiabb */
    case 556:  /* iwmmxt_tmiatb */
    case 557:  /* iwmmxt_tmiabt */
    case 558:  /* iwmmxt_tmiatt */
    case 559:  /* iwmmxt_tmovmskb */
    case 560:  /* iwmmxt_tmovmskh */
    case 561:  /* iwmmxt_tmovmskw */
    case 562:  /* iwmmxt_waccb */
    case 563:  /* iwmmxt_wacch */
    case 564:  /* iwmmxt_waccw */
    case 565:  /* iwmmxt_waligni */
    case 566:  /* iwmmxt_walignr */
    case 567:  /* iwmmxt_walignr0 */
    case 568:  /* iwmmxt_walignr1 */
    case 569:  /* iwmmxt_walignr2 */
    case 570:  /* iwmmxt_walignr3 */
    case 571:  /* iwmmxt_wsadb */
    case 572:  /* iwmmxt_wsadh */
    case 573:  /* iwmmxt_wsadbz */
    case 574:  /* iwmmxt_wsadhz */
    case 575:  /* iwmmxt_wabsv2si3 */
    case 576:  /* iwmmxt_wabsv4hi3 */
    case 577:  /* iwmmxt_wabsv8qi3 */
    case 578:  /* iwmmxt_wabsdiffb */
    case 579:  /* iwmmxt_wabsdiffh */
    case 580:  /* iwmmxt_wabsdiffw */
    case 581:  /* iwmmxt_waddsubhx */
    case 582:  /* iwmmxt_wsubaddhx */
    case 583:  /* addcv4hi3 */
    case 584:  /* addcv2si3 */
    case 585:  /* iwmmxt_avg4 */
    case 586:  /* iwmmxt_avg4r */
    case 587:  /* iwmmxt_wmaddsx */
    case 588:  /* iwmmxt_wmaddux */
    case 589:  /* iwmmxt_wmaddsn */
    case 590:  /* iwmmxt_wmaddun */
    case 591:  /* iwmmxt_wmulwsm */
    case 592:  /* iwmmxt_wmulwum */
    case 593:  /* iwmmxt_wmulsmr */
    case 594:  /* iwmmxt_wmulumr */
    case 595:  /* iwmmxt_wmulwsmr */
    case 596:  /* iwmmxt_wmulwumr */
    case 597:  /* iwmmxt_wmulwl */
    case 598:  /* iwmmxt_wqmulm */
    case 599:  /* iwmmxt_wqmulwm */
    case 600:  /* iwmmxt_wqmulmr */
    case 601:  /* iwmmxt_wqmulwmr */
    case 602:  /* iwmmxt_waddbhusm */
    case 603:  /* iwmmxt_waddbhusl */
    case 604:  /* iwmmxt_wqmiabb */
    case 605:  /* iwmmxt_wqmiabt */
    case 606:  /* iwmmxt_wqmiatb */
    case 607:  /* iwmmxt_wqmiatt */
    case 608:  /* iwmmxt_wqmiabbn */
    case 609:  /* iwmmxt_wqmiabtn */
    case 610:  /* iwmmxt_wqmiatbn */
    case 611:  /* iwmmxt_wqmiattn */
    case 612:  /* iwmmxt_wmiabb */
    case 613:  /* iwmmxt_wmiabt */
    case 614:  /* iwmmxt_wmiatb */
    case 615:  /* iwmmxt_wmiatt */
    case 616:  /* iwmmxt_wmiabbn */
    case 617:  /* iwmmxt_wmiabtn */
    case 618:  /* iwmmxt_wmiatbn */
    case 619:  /* iwmmxt_wmiattn */
    case 620:  /* iwmmxt_wmiawbb */
    case 621:  /* iwmmxt_wmiawbt */
    case 622:  /* iwmmxt_wmiawtb */
    case 623:  /* iwmmxt_wmiawtt */
    case 624:  /* iwmmxt_wmiawbbn */
    case 625:  /* iwmmxt_wmiawbtn */
    case 626:  /* iwmmxt_wmiawtbn */
    case 627:  /* iwmmxt_wmiawttn */
    case 628:  /* iwmmxt_wmerge */
    case 629:  /* iwmmxt_tandcv2si3 */
    case 630:  /* iwmmxt_tandcv4hi3 */
    case 631:  /* iwmmxt_tandcv8qi3 */
    case 632:  /* iwmmxt_torcv2si3 */
    case 633:  /* iwmmxt_torcv4hi3 */
    case 634:  /* iwmmxt_torcv8qi3 */
    case 635:  /* iwmmxt_torvscv2si3 */
    case 636:  /* iwmmxt_torvscv4hi3 */
    case 637:  /* iwmmxt_torvscv8qi3 */
    case 638:  /* iwmmxt_textrcv2si3 */
    case 639:  /* iwmmxt_textrcv4hi3 */
    case 640:  /* iwmmxt_textrcv8qi3 */
    case 641:  /* *arm_movsi_vfp */
    case 642:  /* *thumb2_movsi_vfp */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 647:  /* *movsf_vfp */
    case 648:  /* *thumb2_movsf_vfp */
    case 649:  /* *movdf_vfp */
    case 655:  /* *abssf2_vfp */
    case 656:  /* *absdf2_vfp */
    case 657:  /* *negsf2_vfp */
    case 658:  /* *negdf2_vfp */
    case 659:  /* *addsf3_vfp */
    case 660:  /* *adddf3_vfp */
    case 661:  /* *subsf3_vfp */
    case 662:  /* *subdf3_vfp */
    case 663:  /* *divsf3_vfp */
    case 664:  /* *divdf3_vfp */
    case 665:  /* *mulsf3_vfp */
    case 666:  /* *muldf3_vfp */
    case 667:  /* *mulsf3negsf_vfp */
    case 668:  /* *muldf3negdf_vfp */
    case 669:  /* *mulsf3addsf_vfp */
    case 670:  /* *muldf3adddf_vfp */
    case 671:  /* *mulsf3subsf_vfp */
    case 672:  /* *muldf3subdf_vfp */
    case 673:  /* *mulsf3negsfaddsf_vfp */
    case 674:  /* *fmuldf3negdfadddf_vfp */
    case 675:  /* *mulsf3negsfsubsf_vfp */
    case 676:  /* *muldf3negdfsubdf_vfp */
    case 677:  /* fmasf4 */
    case 678:  /* fmadf4 */
    case 679:  /* *fmsubsf4 */
    case 680:  /* *fmsubdf4 */
    case 681:  /* *fnmsubsf4 */
    case 682:  /* *fnmsubdf4 */
    case 683:  /* *fnmaddsf4 */
    case 684:  /* *fnmadddf4 */
    case 685:  /* *extendsfdf2_vfp */
    case 686:  /* *truncdfsf2_vfp */
    case 687:  /* extendhfsf2 */
    case 688:  /* truncsfhf2 */
    case 689:  /* *truncsisf2_vfp */
    case 690:  /* *truncsidf2_vfp */
    case 691:  /* fixuns_truncsfsi2 */
    case 692:  /* fixuns_truncdfsi2 */
    case 693:  /* *floatsisf2_vfp */
    case 694:  /* *floatsidf2_vfp */
    case 695:  /* floatunssisf2 */
    case 696:  /* floatunssidf2 */
    case 697:  /* *sqrtsf2_vfp */
    case 698:  /* *sqrtdf2_vfp */
    case 704:  /* *cmpsf_vfp */
    case 705:  /* *cmpsf_trap_vfp */
    case 706:  /* *cmpdf_vfp */
    case 707:  /* *cmpdf_trap_vfp */
    case 708:  /* *combine_vcvt_f32_u32 */
    case 709:  /* *combine_vcvt_f32_s32 */
    case 710:  /* *combine_vcvt_f64_u32 */
    case 711:  /* *combine_vcvt_f64_s32 */
    case 713:  /* btruncsf2 */
    case 716:  /* nearbyintsf2 */
    case 717:  /* rintsf2 */
    case 719:  /* btruncdf2 */
    case 722:  /* nearbyintdf2 */
    case 723:  /* rintdf2 */
    case 731:  /* *thumb_andsi_not_shiftsi_si */
    case 739:  /* *thumb2_movsi_insn */
    case 741:  /* *thumb2_movhi_insn */
    case 758:  /* *thumb2_extendqisi_v6 */
    case 759:  /* *thumb2_zero_extendhisi2_v6 */
    case 760:  /* thumb2_zero_extendqisi2_v6 */
    case 765:  /* *thumb2_alusi3_short */
    case 766:  /* *thumb2_shiftsi3_short */
    case 767:  /* *thumb2_movqi_shortim */
    case 768:  /* *thumb2_movhi_shortim */
    case 769:  /* *thumb2_movsi_shortim */
    case 770:  /* *thumb2_addsi_short */
    case 771:  /* *thumb2_subsi_short */
    case 774:  /* *thumb2_mulsi_short */
    case 779:  /* *thumb2_one_cmplsi2_short */
    case 780:  /* *thumb2_negsi2_short */
    case 781:  /* *orsi_notsi_si */
    case 782:  /* *orsi_not_shiftsi_si */
    case 1882:  /* atomic_loaddi_1 */
    case 1963:  /* arm_load_exclusiveqi */
    case 1964:  /* arm_load_exclusivehi */
    case 1965:  /* arm_load_exclusivesi */
    case 1966:  /* arm_load_exclusivedi */
    case 1967:  /* arm_store_exclusiveqi */
    case 1968:  /* arm_store_exclusivehi */
    case 1969:  /* arm_store_exclusivesi */
    case 1970:  /* arm_store_exclusivedi */
    case 1971:  /* addqq3 */
    case 1972:  /* addhq3 */
    case 1973:  /* addsq3 */
    case 1974:  /* adduqq3 */
    case 1975:  /* adduhq3 */
    case 1976:  /* addusq3 */
    case 1977:  /* addha3 */
    case 1978:  /* addsa3 */
    case 1979:  /* adduha3 */
    case 1980:  /* addusa3 */
    case 1981:  /* addv4qq3 */
    case 1982:  /* addv2hq3 */
    case 1983:  /* addv2ha3 */
    case 1984:  /* usaddv4uqq3 */
    case 1985:  /* usaddv2uhq3 */
    case 1986:  /* usadduqq3 */
    case 1987:  /* usadduhq3 */
    case 1988:  /* usaddv2uha3 */
    case 1989:  /* usadduha3 */
    case 1990:  /* ssaddv4qq3 */
    case 1991:  /* ssaddv2hq3 */
    case 1992:  /* ssaddqq3 */
    case 1993:  /* ssaddhq3 */
    case 1994:  /* ssaddv2ha3 */
    case 1995:  /* ssaddha3 */
    case 1996:  /* ssaddsq3 */
    case 1997:  /* ssaddsa3 */
    case 1998:  /* subqq3 */
    case 1999:  /* subhq3 */
    case 2000:  /* subsq3 */
    case 2001:  /* subuqq3 */
    case 2002:  /* subuhq3 */
    case 2003:  /* subusq3 */
    case 2004:  /* subha3 */
    case 2005:  /* subsa3 */
    case 2006:  /* subuha3 */
    case 2007:  /* subusa3 */
    case 2008:  /* subv4qq3 */
    case 2009:  /* subv2hq3 */
    case 2010:  /* subv2ha3 */
    case 2011:  /* ussubv4uqq3 */
    case 2012:  /* ussubv2uhq3 */
    case 2013:  /* ussubuqq3 */
    case 2014:  /* ussubuhq3 */
    case 2015:  /* ussubv2uha3 */
    case 2016:  /* ussubuha3 */
    case 2017:  /* sssubv4qq3 */
    case 2018:  /* sssubv2hq3 */
    case 2019:  /* sssubqq3 */
    case 2020:  /* sssubhq3 */
    case 2021:  /* sssubv2ha3 */
    case 2022:  /* sssubha3 */
    case 2023:  /* sssubsq3 */
    case 2024:  /* sssubsa3 */
    case 2027:  /* arm_ssatsihi_shift */
    case 2028:  /* arm_usatsihi */
      return PREDICABLE_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return PREDICABLE_NO;

    }
}

int
get_attr_pool_range (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 3581:  /* *p *thumb2_movhi_insn */
    case 741:  /* *thumb2_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  return 4094 /* 0xffe */;
        }

    case 3580:  /* *p *thumb2_movsi_insn */
    case 739:  /* *thumb2_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 1018 /* 0x3fa */;
        }
      else if (which_alternative == 5)
        {
	  return 4094 /* 0xffe */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 427:  /* *cond_iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  return 4096 /* 0x1000 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 205:  /* *thumb_movdf_insn */
    case 203:  /* *thumb1_movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 1018 /* 0x3fa */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 201:  /* *thumb1_movhf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  return 1018 /* 0x3fa */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 199:  /* *thumb1_movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 3214:  /* *p *movhi_insn_arch4 */
    case 196:  /* *movhi_insn_arch4 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  return 256 /* 0x100 */;
        }

    case 187:  /* *thumb1_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 6)
        {
	  return 1018 /* 0x3fa */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 3211:  /* *p *arm_movsi_insn */
    case 186:  /* *arm_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 4096 /* 0x1000 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 184:  /* *thumb1_movdi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  return 1018 /* 0x3fa */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 168:  /* *thumb1_zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  return 32 /* 0x20 */;
        }

    case 174:  /* thumb1_extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  return 1018 /* 0x3fa */;
        }

    case 188:  /* pic_load_addr_unified */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4096 /* 0x1000 */;
        }
      else if (which_alternative == 1)
        {
	  return 4094 /* 0xffe */;
        }
      else
        {
	  return 1022 /* 0x3fe */;
        }

    case 189:  /* pic_load_addr_32bit */
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_NO))))
        {
	  return 4096 /* 0x1000 */;
        }
      else
        {
	  return 4094 /* 0xffe */;
        }

    case 190:  /* pic_load_addr_thumb1 */
      return 1018 /* 0x3fa */;

    case 426:  /* *iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 4096 /* 0x1000 */;
        }
      else if (which_alternative == 5)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 8)
        {
	  return 1024 /* 0x400 */;
        }
      else if (which_alternative == 9)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 10)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 11)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 12)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 13)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 650:  /* *thumb2_movdf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 1018 /* 0x3fa */;
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  return 4094 /* 0xffe */;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      return 250 /* 0xfa */;

    case 178:  /* *arm_extendqihi_insn */
    case 3206:  /* *p *arm_extendqihi_insn */
      return 256 /* 0x100 */;

    case 175:  /* *arm_extendhisi2 */
    case 176:  /* *arm_extendhisi2_v6 */
    case 179:  /* *arm_extendqisi */
    case 180:  /* *arm_extendqisi_v6 */
    case 3204:  /* *p *arm_extendhisi2 */
    case 3205:  /* *p *arm_extendhisi2_v6 */
    case 3207:  /* *p *arm_extendqisi */
    case 3208:  /* *p *arm_extendqisi_v6 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  return 256 /* 0x100 */;
        }

    case 265:  /* *load_indirect_jump */
    case 3225:  /* *p *load_indirect_jump */
      return 4096 /* 0x1000 */;

    case 428:  /* movv2si_internal */
    case 429:  /* movv4hi_internal */
    case 430:  /* movv8qi_internal */
    case 3299:  /* *p movv2si_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3301:  /* *p movv8qi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  return 256 /* 0x100 */;
        }
      else if (which_alternative == 3)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 6)
        {
	  return 256 /* 0x100 */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 641:  /* *arm_movsi_vfp */
    case 3512:  /* *p *arm_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 4096 /* 0x1000 */;
        }
      else if (which_alternative == 5)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 8)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 9)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 642:  /* *thumb2_movsi_vfp */
    case 3513:  /* *p *thumb2_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 4)
        {
	  return 1018 /* 0x3fa */;
        }
      else if (which_alternative == 5)
        {
	  return 4094 /* 0xffe */;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 8)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 9)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 10)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 11)
        {
	  return 1018 /* 0x3fa */;
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 647:  /* *movsf_vfp */
    case 3515:  /* *p *movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 1020 /* 0x3fc */;
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  return 4096 /* 0x1000 */;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 648:  /* *thumb2_movsf_vfp */
    case 3516:  /* *p *thumb2_movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 1018 /* 0x3fa */;
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  return 4090 /* 0xffa */;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 649:  /* *movdf_vfp */
    case 3517:  /* *p *movdf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 1)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 2)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 3)
        {
	  return 1020 /* 0x3fc */;
        }
      else if (which_alternative == 4)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 5)
        {
	  return 1020 /* 0x3fc */;
        }
      else if (which_alternative == 6)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else if (which_alternative == 7)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }

    case 758:  /* *thumb2_extendqisi_v6 */
    case 759:  /* *thumb2_zero_extendhisi2_v6 */
    case 760:  /* thumb2_zero_extendqisi2_v6 */
    case 3582:  /* *p *thumb2_extendqisi_v6 */
    case 3583:  /* *p *thumb2_zero_extendhisi2_v6 */
    case 3584:  /* *p thumb2_zero_extendqisi2_v6 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
	    {
	      return get_attr_thumb2_pool_range (insn);
	    }
	  else
	    {
	      return get_attr_arm_pool_range (insn);
	    }
        }
      else
        {
	  return 4094 /* 0xffe */;
        }

    default:
      if (((
#line 69 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(thumb_code)) == (
(IS_THUMB_YES))))
        {
	  return get_attr_thumb2_pool_range (insn);
        }
      else
        {
	  return get_attr_arm_pool_range (insn);
        }

    }
}

int
get_attr_shift (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 268:  /* *arith_shiftsi */
    case 269:  /* *arith_shiftsi_compare0 */
    case 270:  /* *arith_shiftsi_compare0_scratch */
    case 3226:  /* *p *arith_shiftsi */
      return 4;

    case 121:  /* *satsi_smax_shift */
    case 122:  /* *satsi_smin_shift */
    case 271:  /* *sub_shiftsi */
    case 272:  /* *sub_shiftsi_compare0 */
    case 273:  /* *sub_shiftsi_compare0_scratch */
    case 3172:  /* *p *satsi_smax_shift */
    case 3173:  /* *p *satsi_smin_shift */
    case 3227:  /* *p *sub_shiftsi */
      return 3;

    case 92:  /* andsi_not_shiftsi_si */
    case 306:  /* *if_shift_move */
    case 308:  /* *if_move_shift */
    case 731:  /* *thumb_andsi_not_shiftsi_si */
    case 782:  /* *orsi_not_shiftsi_si */
    case 3155:  /* *p andsi_not_shiftsi_si */
    case 3577:  /* *p *thumb_andsi_not_shiftsi_si */
    case 3596:  /* *p *orsi_not_shiftsi_si */
      return 2;

    case 130:  /* *arm_shiftsi3 */
    case 131:  /* *shiftsi3_compare0 */
    case 132:  /* *shiftsi3_compare0_scratch */
    case 133:  /* *not_shiftsi */
    case 134:  /* *not_shiftsi_compare0 */
    case 135:  /* *not_shiftsi_compare0_scratch */
    case 149:  /* *arm_abssi2 */
    case 151:  /* *arm_neg_abssi2 */
    case 161:  /* extendqidi2 */
    case 162:  /* extendhidi2 */
    case 163:  /* extendsidi2 */
    case 218:  /* *cmpsi_shiftsi */
    case 219:  /* *cmpsi_shiftsi_swp */
    case 310:  /* *if_shift_shift */
    case 737:  /* *thumb2_abssi2 */
    case 738:  /* *thumb2_neg_abssi2 */
    case 742:  /* *thumb2_cmpsi_neg_shiftsi */
    case 766:  /* *thumb2_shiftsi3_short */
    case 2027:  /* arm_ssatsihi_shift */
    case 3174:  /* *p *arm_shiftsi3 */
    case 3175:  /* *p *not_shiftsi */
    case 3186:  /* *p *arm_abssi2 */
    case 3187:  /* *p *arm_neg_abssi2 */
    case 3194:  /* *p extendqidi2 */
    case 3195:  /* *p extendhidi2 */
    case 3196:  /* *p extendsidi2 */
    case 3578:  /* *p *thumb2_abssi2 */
    case 3579:  /* *p *thumb2_neg_abssi2 */
    case 3586:  /* *p *thumb2_shiftsi3_short */
    case 3660:  /* *p arm_ssatsihi_shift */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_insn cached_insn ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 793:  /* *neon_movti */
    case 792:  /* *neon_movv2di */
    case 791:  /* *neon_movv4sf */
    case 790:  /* *neon_movv4si */
    case 789:  /* *neon_movv8hi */
    case 788:  /* *neon_movv16qi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD4;
        }
      else
        {
	  return TYPE_STORE4;
        }

    case 787:  /* *neon_movdi */
    case 786:  /* *neon_movv2sf */
    case 785:  /* *neon_movv2si */
    case 784:  /* *neon_movv4hi */
    case 783:  /* *neon_movv8qi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_F_STORED;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_F_LOADD;
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD2;
        }
      else
        {
	  return TYPE_STORE2;
        }

    case 773:  /* *thumb2_addsi3_compare0_scratch */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 3581:  /* *p *thumb2_movhi_insn */
    case 741:  /* *thumb2_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_LOAD1;
        }

    case 3580:  /* *p *thumb2_movsi_insn */
    case 739:  /* *thumb2_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_ALU_REG;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_LOAD1;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 654:  /* *thumb2_movdfcc_vfp */
    case 653:  /* *movdfcc_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_FFARITHD;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return TYPE_R_2_F;
        }
      else
        {
	  return TYPE_F_2_R;
        }

    case 652:  /* *thumb2_movsfcc_vfp */
    case 651:  /* *movsfcc_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_FCPYS;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return TYPE_R_2_F;
        }
      else
        {
	  return TYPE_F_2_R;
        }

    case 3517:  /* *p *movdf_vfp */
    case 650:  /* *thumb2_movdf_vfp */
    case 649:  /* *movdf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_R_2_F;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_F_2_R;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FCONSTD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_F_LOADD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_F_STORED;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD2;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FFARITHD;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 3516:  /* *p *thumb2_movsf_vfp */
    case 3515:  /* *p *movsf_vfp */
    case 648:  /* *thumb2_movsf_vfp */
    case 647:  /* *movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_R_2_F;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_F_2_R;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FCONSTS;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_F_LOADS;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_F_STORES;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FCPYS;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 646:  /* *movhf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FCPYS;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_R_2_F;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_F_2_R;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 645:  /* *movhf_vfp_neon */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FCPYS;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_R_2_F;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_F_2_R;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 643:  /* *movdi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return TYPE_ALU_REG;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_LOAD2;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_R_2_F;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_F_2_R;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_FFARITHD;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_F_LOADD;
        }
      else
        {
	  return TYPE_F_STORED;
        }

    case 3513:  /* *p *thumb2_movsi_vfp */
    case 642:  /* *thumb2_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return TYPE_ALU_REG;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_LOAD1;
        }
      else if (((1 << which_alternative) & 0xc0))
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_R_2_F;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_F_2_R;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_FCPYS;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_F_LOADS;
        }
      else
        {
	  return TYPE_F_STORES;
        }

    case 3512:  /* *p *arm_movsi_vfp */
    case 641:  /* *arm_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ALU_REG;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_R_2_F;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_F_2_R;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_FCPYS;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_F_LOADS;
        }
      else
        {
	  return TYPE_F_STORES;
        }

    case 3301:  /* *p movv8qi_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3299:  /* *p movv2si_internal */
    case 430:  /* movv8qi_internal */
    case 429:  /* movv4hi_internal */
    case 428:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD1;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 427:  /* *cond_iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 426:  /* *iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE1;
        }
      else if (((1 << which_alternative) & 0x3c0))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_R_2_F;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_F_2_R;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_FCPYS;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_F_LOADS;
        }
      else
        {
	  return TYPE_F_STORES;
        }

    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD2;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE2;
        }
      else if (((1 << which_alternative) & 0x3e0))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_R_2_F;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_F_2_R;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_FFARITHD;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_F_LOADD;
        }
      else
        {
	  return TYPE_F_STORED;
        }

    case 294:  /* *if_move_plus */
    case 292:  /* *if_plus_move */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (const_int_operand (operands[3], VOIDmode))
	    {
	      return TYPE_SIMPLE_ALU_IMM;
	    }
	  else
	    {
	      return TYPE_ALU_REG;
	    }
        }
      else if (which_alternative == 1)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 3226:  /* *p *arith_shiftsi */
    case 268:  /* *arith_shiftsi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_ALU_SHIFT;
        }
      else
        {
	  return TYPE_ALU_SHIFT_REG;
        }

    case 3219:  /* *p *arm_cmpsi_insn */
    case 217:  /* *arm_cmpsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_ALU_REG;
        }
      else
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }

    case 205:  /* *thumb_movdf_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD2;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD2;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE2;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 203:  /* *thumb1_movsf_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 3218:  /* *p *arm_movsf_soft_insn */
    case 202:  /* *arm_movsf_soft_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD1;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 3217:  /* *p *arm32_movhf */
    case 200:  /* *arm32_movhf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 199:  /* *thumb1_movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE1;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_ALU_REG;
        }
      else
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }

    case 3216:  /* *p *arm_movqi_insn */
    case 198:  /* *arm_movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_REG;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD1;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 3215:  /* *p *movhi_bytes */
    case 197:  /* *movhi_bytes */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ALU_REG;
        }
      else
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }

    case 3214:  /* *p *movhi_insn_arch4 */
    case 196:  /* *movhi_insn_arch4 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (const_int_operand (operands[1], VOIDmode))
	    {
	      return TYPE_SIMPLE_ALU_IMM;
	    }
	  else
	    {
	      return TYPE_ALU_REG;
	    }
        }
      else if (which_alternative == 1)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_LOAD1;
        }

    case 201:  /* *thumb1_movhf */
    case 195:  /* *thumb1_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 187:  /* *thumb1_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD1;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 3211:  /* *p *arm_movsi_insn */
    case 186:  /* *arm_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_REG;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD1;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 184:  /* *thumb1_movdi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD2;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD2;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE2;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 204:  /* *movdf_soft_insn */
    case 183:  /* *arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD2;
        }
      else
        {
	  return TYPE_STORE2;
        }

    case 3143:  /* *p *arm_andsi3_insn */
    case 76:  /* *arm_andsi3_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_ALU_REG;
        }
      else
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }

    case 3164:  /* *p *arm_xorsi3 */
    case 108:  /* *xorsi3_compare0_scratch */
    case 107:  /* *xorsi3_compare0 */
    case 105:  /* *arm_xorsi3 */
    case 101:  /* *iorsi3_compare0_scratch */
    case 100:  /* *iorsi3_compare0 */
    case 35:  /* *arm_decscc */
    case 34:  /* *subsi3_compare */
    case 33:  /* *subsi3_compare0 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 3114:  /* *p *arm_subsi3_insn */
    case 32:  /* *arm_subsi3_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 3159:  /* *p *iorsi3_insn */
    case 3113:  /* *p *compare_addsi2_op1 */
    case 3112:  /* *p *compare_addsi2_op0 */
    case 3110:  /* *p *addsi3_compare0_scratch */
    case 98:  /* *iorsi3_insn */
    case 79:  /* *andsi3_compare0_scratch */
    case 78:  /* *andsi3_compare0 */
    case 14:  /* *compare_addsi2_op1 */
    case 13:  /* *compare_addsi2_op0 */
    case 12:  /* *addsi3_compare_op2 */
    case 11:  /* *addsi3_compare_op1 */
    case 8:  /* *addsi3_compare0_scratch */
    case 7:  /* addsi3_compare0 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 19:  /* *addsi3_carryin_shift_ltu */
    case 20:  /* *addsi3_carryin_shift_geu */
      extract_insn_cached (insn);
      if (const_int_operand (operands[4], VOIDmode))
        {
	  return TYPE_ALU_SHIFT;
        }
      else
        {
	  return TYPE_ALU_SHIFT_REG;
        }

    case 236:  /* *movsicc_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (const_int_operand (operands[2], VOIDmode))
	    {
	      return TYPE_SIMPLE_ALU_IMM;
	    }
	  else
	    {
	      return TYPE_ALU_REG;
	    }
        }
      else if (which_alternative == 1)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 2)
        {
	  if (const_int_operand (operands[1], VOIDmode))
	    {
	      return TYPE_SIMPLE_ALU_IMM;
	    }
	  else
	    {
	      return TYPE_ALU_REG;
	    }
        }
      else if (which_alternative == 3)
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_ALU_REG;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_ALU_REG;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 310:  /* *if_shift_shift */
      extract_insn_cached (insn);
      if ((const_int_operand (operands[2], VOIDmode)) && (const_int_operand (operands[4], VOIDmode)))
        {
	  return TYPE_ALU_SHIFT;
        }
      else
        {
	  return TYPE_ALU_SHIFT_REG;
        }

    case 5:  /* *arm_addsi3 */
    case 3108:  /* *p *arm_addsi3 */
      extract_insn_cached (insn);
      if (const_int_operand (operands[2], VOIDmode))
        {
	  return TYPE_SIMPLE_ALU_IMM;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 165:  /* *arm_zero_extendhisi2 */
    case 168:  /* *thumb1_zero_extendqisi2 */
    case 170:  /* *arm_zero_extendqisi2 */
    case 175:  /* *arm_extendhisi2 */
    case 179:  /* *arm_extendqisi */
    case 3197:  /* *p *arm_zero_extendhisi2 */
    case 3200:  /* *p *arm_zero_extendqisi2 */
    case 3204:  /* *p *arm_extendhisi2 */
    case 3207:  /* *p *arm_extendqisi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_SHIFT;
        }
      else
        {
	  return TYPE_LOAD_BYTE;
        }

    case 92:  /* andsi_not_shiftsi_si */
    case 220:  /* *arm_cmpsi_negshiftsi_si */
    case 306:  /* *if_shift_move */
    case 308:  /* *if_move_shift */
    case 3155:  /* *p andsi_not_shiftsi_si */
    case 3220:  /* *p *arm_cmpsi_negshiftsi_si */
      extract_insn_cached (insn);
      if (const_int_operand (operands[3], VOIDmode))
        {
	  return TYPE_ALU_SHIFT;
        }
      else
        {
	  return TYPE_ALU_SHIFT_REG;
        }

    case 133:  /* *not_shiftsi */
    case 134:  /* *not_shiftsi_compare0 */
    case 135:  /* *not_shiftsi_compare0_scratch */
    case 218:  /* *cmpsi_shiftsi */
    case 219:  /* *cmpsi_shiftsi_swp */
    case 269:  /* *arith_shiftsi_compare0 */
    case 270:  /* *arith_shiftsi_compare0_scratch */
    case 271:  /* *sub_shiftsi */
    case 272:  /* *sub_shiftsi_compare0 */
    case 273:  /* *sub_shiftsi_compare0_scratch */
    case 3175:  /* *p *not_shiftsi */
    case 3227:  /* *p *sub_shiftsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU_SHIFT;
        }
      else
        {
	  return TYPE_ALU_SHIFT_REG;
        }

    case 182:  /* thumb1_extendqisi2 */
    case 164:  /* *thumb1_zero_extendhisi2 */
    case 166:  /* *arm_zero_extendhisi2_v6 */
    case 169:  /* *thumb1_zero_extendqisi2_v6 */
    case 171:  /* *arm_zero_extendqisi2_v6 */
    case 174:  /* thumb1_extendhisi2 */
    case 176:  /* *arm_extendhisi2_v6 */
    case 180:  /* *arm_extendqisi_v6 */
    case 758:  /* *thumb2_extendqisi_v6 */
    case 759:  /* *thumb2_zero_extendhisi2_v6 */
    case 760:  /* thumb2_zero_extendqisi2_v6 */
    case 3198:  /* *p *arm_zero_extendhisi2_v6 */
    case 3201:  /* *p *arm_zero_extendqisi2_v6 */
    case 3205:  /* *p *arm_extendhisi2_v6 */
    case 3208:  /* *p *arm_extendqisi_v6 */
    case 3582:  /* *p *thumb2_extendqisi_v6 */
    case 3583:  /* *p *thumb2_zero_extendhisi2_v6 */
    case 3584:  /* *p thumb2_zero_extendqisi2_v6 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SIMPLE_ALU_SHIFT;
        }
      else
        {
	  return TYPE_LOAD_BYTE;
        }

    case 130:  /* *arm_shiftsi3 */
    case 131:  /* *shiftsi3_compare0 */
    case 766:  /* *thumb2_shiftsi3_short */
    case 3174:  /* *p *arm_shiftsi3 */
    case 3586:  /* *p *thumb2_shiftsi3_short */
      extract_insn_cached (insn);
      if (const_int_operand (operands[2], VOIDmode))
        {
	  return TYPE_ALU_SHIFT;
        }
      else
        {
	  return TYPE_ALU_SHIFT_REG;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_insn = get_attr_insn (insn)) == INSN_SMULXY) || ((cached_insn == INSN_SMLAXY) || ((cached_insn == INSN_SMLALXY) || ((cached_insn == INSN_SMULWY) || ((cached_insn == INSN_SMLAWX) || ((cached_insn == INSN_MUL) || ((cached_insn == INSN_MULS) || ((cached_insn == INSN_MLA) || ((cached_insn == INSN_MLAS) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_UMULLS) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_UMLALS) || ((cached_insn == INSN_SMULL) || ((cached_insn == INSN_SMULLS) || ((cached_insn == INSN_SMLAL) || (cached_insn == INSN_SMLALS)))))))))))))))))
        {
	  return TYPE_MULT;
        }
      else
        {
	  return TYPE_ALU_REG;
        }

    case 706:  /* *cmpdf_vfp */
    case 707:  /* *cmpdf_trap_vfp */
    case 3565:  /* *p *cmpdf_vfp */
    case 3566:  /* *p *cmpdf_trap_vfp */
      return TYPE_FCMPD;

    case 704:  /* *cmpsf_vfp */
    case 705:  /* *cmpsf_trap_vfp */
    case 3563:  /* *p *cmpsf_vfp */
    case 3564:  /* *p *cmpsf_trap_vfp */
      return TYPE_FCMPS;

    case 656:  /* *absdf2_vfp */
    case 658:  /* *negdf2_vfp */
    case 3519:  /* *p *absdf2_vfp */
    case 3521:  /* *p *negdf2_vfp */
      return TYPE_FFARITHD;

    case 655:  /* *abssf2_vfp */
    case 657:  /* *negsf2_vfp */
    case 3518:  /* *p *abssf2_vfp */
    case 3520:  /* *p *negsf2_vfp */
      return TYPE_FFARITHS;

    case 660:  /* *adddf3_vfp */
    case 662:  /* *subdf3_vfp */
    case 3524:  /* *p *adddf3_vfp */
    case 3526:  /* *p *subdf3_vfp */
      return TYPE_FADDD;

    case 659:  /* *addsf3_vfp */
    case 661:  /* *subsf3_vfp */
    case 3523:  /* *p *addsf3_vfp */
    case 3525:  /* *p *subsf3_vfp */
      return TYPE_FADDS;

    case 325:  /* *push_multi */
    case 364:  /* *stm4_ia */
    case 365:  /* *stm4_ia_update */
    case 366:  /* *thumb_stm4_ia_update */
    case 369:  /* *stm4_ib */
    case 370:  /* *stm4_ib_update */
    case 373:  /* *stm4_da */
    case 374:  /* *stm4_da_update */
    case 377:  /* *stm4_db */
    case 378:  /* *stm4_db_update */
    case 3245:  /* *p *stm4_ia */
    case 3246:  /* *p *stm4_ia_update */
    case 3249:  /* *p *stm4_ib */
    case 3250:  /* *p *stm4_ib_update */
    case 3253:  /* *p *stm4_da */
    case 3254:  /* *p *stm4_da_update */
    case 3257:  /* *p *stm4_db */
    case 3258:  /* *p *stm4_db_update */
      return TYPE_STORE4;

    case 206:  /* movmem12b */
    case 383:  /* *stm3_ia */
    case 384:  /* *stm3_ia_update */
    case 385:  /* *thumb_stm3_ia_update */
    case 388:  /* *stm3_ib */
    case 389:  /* *stm3_ib_update */
    case 392:  /* *stm3_da */
    case 393:  /* *stm3_da_update */
    case 396:  /* *stm3_db */
    case 397:  /* *stm3_db_update */
    case 3261:  /* *p *stm3_ia */
    case 3262:  /* *p *stm3_ia_update */
    case 3265:  /* *p *stm3_ib */
    case 3266:  /* *p *stm3_ib_update */
    case 3269:  /* *p *stm3_da */
    case 3270:  /* *p *stm3_da_update */
    case 3273:  /* *p *stm3_db */
    case 3274:  /* *p *stm3_db_update */
      return TYPE_STORE3;

    case 207:  /* movmem8b */
    case 357:  /* *thumb2_strd */
    case 358:  /* *thumb2_strd_base */
    case 359:  /* *thumb2_strd_base_neg */
    case 402:  /* *stm2_ia */
    case 403:  /* *stm2_ia_update */
    case 404:  /* *thumb_stm2_ia_update */
    case 407:  /* *stm2_ib */
    case 408:  /* *stm2_ib_update */
    case 411:  /* *stm2_da */
    case 412:  /* *stm2_da_update */
    case 415:  /* *stm2_db */
    case 416:  /* *stm2_db_update */
    case 3240:  /* *p *thumb2_strd */
    case 3241:  /* *p *thumb2_strd_base */
    case 3242:  /* *p *thumb2_strd_base_neg */
    case 3277:  /* *p *stm2_ia */
    case 3278:  /* *p *stm2_ia_update */
    case 3281:  /* *p *stm2_ib */
    case 3282:  /* *p *stm2_ib_update */
    case 3285:  /* *p *stm2_da */
    case 3286:  /* *p *stm2_da_update */
    case 3289:  /* *p *stm2_db */
    case 3290:  /* *p *stm2_db_update */
      return TYPE_STORE2;

    case 117:  /* *store_minmaxsi */
    case 139:  /* unaligned_storesi */
    case 140:  /* unaligned_storehi */
    case 3179:  /* *p unaligned_storesi */
    case 3180:  /* *p unaligned_storehi */
      return TYPE_STORE1;

    case 327:  /* *load_multiple_with_writeback */
    case 328:  /* *pop_multiple_with_writeback_and_return */
    case 329:  /* *pop_multiple_with_return */
    case 331:  /* *vfp_pop_multiple_with_writeback */
    case 360:  /* *ldm4_ia */
    case 361:  /* *thumb_ldm4_ia */
    case 362:  /* *ldm4_ia_update */
    case 363:  /* *thumb_ldm4_ia_update */
    case 367:  /* *ldm4_ib */
    case 368:  /* *ldm4_ib_update */
    case 371:  /* *ldm4_da */
    case 372:  /* *ldm4_da_update */
    case 375:  /* *ldm4_db */
    case 376:  /* *ldm4_db_update */
    case 3229:  /* *p *load_multiple_with_writeback */
    case 3230:  /* *p *pop_multiple_with_writeback_and_return */
    case 3231:  /* *p *pop_multiple_with_return */
    case 3243:  /* *p *ldm4_ia */
    case 3244:  /* *p *ldm4_ia_update */
    case 3247:  /* *p *ldm4_ib */
    case 3248:  /* *p *ldm4_ib_update */
    case 3251:  /* *p *ldm4_da */
    case 3252:  /* *p *ldm4_da_update */
    case 3255:  /* *p *ldm4_db */
    case 3256:  /* *p *ldm4_db_update */
      return TYPE_LOAD4;

    case 379:  /* *ldm3_ia */
    case 380:  /* *thumb_ldm3_ia */
    case 381:  /* *ldm3_ia_update */
    case 382:  /* *thumb_ldm3_ia_update */
    case 386:  /* *ldm3_ib */
    case 387:  /* *ldm3_ib_update */
    case 390:  /* *ldm3_da */
    case 391:  /* *ldm3_da_update */
    case 394:  /* *ldm3_db */
    case 395:  /* *ldm3_db_update */
    case 3259:  /* *p *ldm3_ia */
    case 3260:  /* *p *ldm3_ia_update */
    case 3263:  /* *p *ldm3_ib */
    case 3264:  /* *p *ldm3_ib_update */
    case 3267:  /* *p *ldm3_da */
    case 3268:  /* *p *ldm3_da_update */
    case 3271:  /* *p *ldm3_db */
    case 3272:  /* *p *ldm3_db_update */
      return TYPE_LOAD3;

    case 354:  /* *thumb2_ldrd */
    case 355:  /* *thumb2_ldrd_base */
    case 356:  /* *thumb2_ldrd_base_neg */
    case 398:  /* *ldm2_ia */
    case 399:  /* *thumb_ldm2_ia */
    case 400:  /* *ldm2_ia_update */
    case 401:  /* *thumb_ldm2_ia_update */
    case 405:  /* *ldm2_ib */
    case 406:  /* *ldm2_ib_update */
    case 409:  /* *ldm2_da */
    case 410:  /* *ldm2_da_update */
    case 413:  /* *ldm2_db */
    case 414:  /* *ldm2_db_update */
    case 3237:  /* *p *thumb2_ldrd */
    case 3238:  /* *p *thumb2_ldrd_base */
    case 3239:  /* *p *thumb2_ldrd_base_neg */
    case 3275:  /* *p *ldm2_ia */
    case 3276:  /* *p *ldm2_ia_update */
    case 3279:  /* *p *ldm2_ib */
    case 3280:  /* *p *ldm2_ib_update */
    case 3283:  /* *p *ldm2_da */
    case 3284:  /* *p *ldm2_da_update */
    case 3287:  /* *p *ldm2_db */
    case 3288:  /* *p *ldm2_db_update */
      return TYPE_LOAD2;

    case 136:  /* unaligned_loadsi */
    case 188:  /* pic_load_addr_unified */
    case 189:  /* pic_load_addr_32bit */
    case 190:  /* pic_load_addr_thumb1 */
    case 256:  /* *arm_return */
    case 257:  /* *cond_return */
    case 258:  /* *cond_return_inverted */
    case 265:  /* *load_indirect_jump */
    case 319:  /* *arith_adjacentmem */
    case 330:  /* *ldr_with_return */
    case 3176:  /* *p unaligned_loadsi */
    case 3222:  /* *p *arm_return */
    case 3225:  /* *p *load_indirect_jump */
    case 3228:  /* *p *arith_adjacentmem */
    case 3232:  /* *p *ldr_with_return */
      return TYPE_LOAD1;

    case 137:  /* unaligned_loadhis */
    case 138:  /* unaligned_loadhiu */
    case 178:  /* *arm_extendqihi_insn */
    case 3177:  /* *p unaligned_loadhis */
    case 3178:  /* *p unaligned_loadhiu */
    case 3206:  /* *p *arm_extendqihi_insn */
      return TYPE_LOAD_BYTE;

    case 240:  /* *call_reg_armv5 */
    case 241:  /* *call_reg_arm */
    case 242:  /* *call_mem */
    case 243:  /* *call_reg_thumb1_v5 */
    case 244:  /* *call_reg_thumb1 */
    case 245:  /* *call_value_reg_armv5 */
    case 246:  /* *call_value_reg_arm */
    case 247:  /* *call_value_mem */
    case 248:  /* *call_value_reg_thumb1_v5 */
    case 249:  /* *call_value_reg_thumb1 */
    case 250:  /* *call_symbol */
    case 251:  /* *call_value_symbol */
    case 252:  /* *call_insn */
    case 253:  /* *call_value_insn */
    case 254:  /* *sibcall_insn */
    case 255:  /* *sibcall_value_insn */
    case 748:  /* *call_reg_thumb2 */
    case 749:  /* *call_value_reg_thumb2 */
      return TYPE_CALL;

    case 226:  /* arm_cond_branch */
    case 227:  /* *arm_cond_branch_reversed */
    case 259:  /* *arm_simple_return */
    case 763:  /* *thumb2_return */
    case 3223:  /* *p *arm_simple_return */
      return TYPE_BRANCH;

    case 685:  /* *extendsfdf2_vfp */
    case 686:  /* *truncdfsf2_vfp */
    case 687:  /* extendhfsf2 */
    case 688:  /* truncsfhf2 */
    case 689:  /* *truncsisf2_vfp */
    case 690:  /* *truncsidf2_vfp */
    case 691:  /* fixuns_truncsfsi2 */
    case 692:  /* fixuns_truncdfsi2 */
    case 693:  /* *floatsisf2_vfp */
    case 694:  /* *floatsidf2_vfp */
    case 695:  /* floatunssisf2 */
    case 696:  /* floatunssidf2 */
    case 708:  /* *combine_vcvt_f32_u32 */
    case 709:  /* *combine_vcvt_f32_s32 */
    case 710:  /* *combine_vcvt_f64_u32 */
    case 711:  /* *combine_vcvt_f64_s32 */
    case 3549:  /* *p *extendsfdf2_vfp */
    case 3550:  /* *p *truncdfsf2_vfp */
    case 3551:  /* *p extendhfsf2 */
    case 3552:  /* *p truncsfhf2 */
    case 3553:  /* *p *truncsisf2_vfp */
    case 3554:  /* *p *truncsidf2_vfp */
    case 3555:  /* *p fixuns_truncsfsi2 */
    case 3556:  /* *p fixuns_truncdfsi2 */
    case 3557:  /* *p *floatsisf2_vfp */
    case 3558:  /* *p *floatsidf2_vfp */
    case 3559:  /* *p floatunssisf2 */
    case 3560:  /* *p floatunssidf2 */
    case 3567:  /* *p *combine_vcvt_f32_u32 */
    case 3568:  /* *p *combine_vcvt_f32_s32 */
    case 3569:  /* *p *combine_vcvt_f64_u32 */
    case 3570:  /* *p *combine_vcvt_f64_s32 */
      return TYPE_F_CVT;

    case 712:  /* *push_multi_vfp */
      return TYPE_F_STORED;

    case 699:  /* *movcc_vfp */
      return TYPE_F_FLAG;

    case 726:  /* smaxdf3 */
    case 728:  /* smindf3 */
      return TYPE_F_MINMAXD;

    case 725:  /* smaxsf3 */
    case 727:  /* sminsf3 */
      return TYPE_F_MINMAXS;

    case 719:  /* btruncdf2 */
    case 720:  /* ceildf2 */
    case 721:  /* floordf2 */
    case 722:  /* nearbyintdf2 */
    case 723:  /* rintdf2 */
    case 724:  /* rounddf2 */
    case 3574:  /* *p btruncdf2 */
    case 3575:  /* *p nearbyintdf2 */
    case 3576:  /* *p rintdf2 */
      return TYPE_F_RINTD;

    case 713:  /* btruncsf2 */
    case 714:  /* ceilsf2 */
    case 715:  /* floorsf2 */
    case 716:  /* nearbyintsf2 */
    case 717:  /* rintsf2 */
    case 718:  /* roundsf2 */
    case 3571:  /* *p btruncsf2 */
    case 3572:  /* *p nearbyintsf2 */
    case 3573:  /* *p rintsf2 */
      return TYPE_F_RINTS;

    case 678:  /* fmadf4 */
    case 680:  /* *fmsubdf4 */
    case 682:  /* *fnmsubdf4 */
    case 684:  /* *fnmadddf4 */
    case 3542:  /* *p fmadf4 */
    case 3544:  /* *p *fmsubdf4 */
    case 3546:  /* *p *fnmsubdf4 */
    case 3548:  /* *p *fnmadddf4 */
      return TYPE_FFMAD;

    case 677:  /* fmasf4 */
    case 679:  /* *fmsubsf4 */
    case 681:  /* *fnmsubsf4 */
    case 683:  /* *fnmaddsf4 */
    case 3541:  /* *p fmasf4 */
    case 3543:  /* *p *fmsubsf4 */
    case 3545:  /* *p *fnmsubsf4 */
    case 3547:  /* *p *fnmaddsf4 */
      return TYPE_FFMAS;

    case 670:  /* *muldf3adddf_vfp */
    case 672:  /* *muldf3subdf_vfp */
    case 674:  /* *fmuldf3negdfadddf_vfp */
    case 676:  /* *muldf3negdfsubdf_vfp */
    case 3534:  /* *p *muldf3adddf_vfp */
    case 3536:  /* *p *muldf3subdf_vfp */
    case 3538:  /* *p *fmuldf3negdfadddf_vfp */
    case 3540:  /* *p *muldf3negdfsubdf_vfp */
      return TYPE_FMACD;

    case 669:  /* *mulsf3addsf_vfp */
    case 671:  /* *mulsf3subsf_vfp */
    case 673:  /* *mulsf3negsfaddsf_vfp */
    case 675:  /* *mulsf3negsfsubsf_vfp */
    case 3533:  /* *p *mulsf3addsf_vfp */
    case 3535:  /* *p *mulsf3subsf_vfp */
    case 3537:  /* *p *mulsf3negsfaddsf_vfp */
    case 3539:  /* *p *mulsf3negsfsubsf_vfp */
      return TYPE_FMACS;

    case 666:  /* *muldf3_vfp */
    case 668:  /* *muldf3negdf_vfp */
    case 3530:  /* *p *muldf3_vfp */
    case 3532:  /* *p *muldf3negdf_vfp */
      return TYPE_FMULD;

    case 665:  /* *mulsf3_vfp */
    case 667:  /* *mulsf3negsf_vfp */
    case 3529:  /* *p *mulsf3_vfp */
    case 3531:  /* *p *mulsf3negsf_vfp */
      return TYPE_FMULS;

    case 663:  /* *divsf3_vfp */
    case 697:  /* *sqrtsf2_vfp */
    case 3527:  /* *p *divsf3_vfp */
    case 3561:  /* *p *sqrtsf2_vfp */
      return TYPE_FDIVS;

    case 664:  /* *divdf3_vfp */
    case 698:  /* *sqrtdf2_vfp */
    case 3528:  /* *p *divdf3_vfp */
    case 3562:  /* *p *sqrtdf2_vfp */
      return TYPE_FDIVD;

    case 261:  /* blockage */
    case 321:  /* *epilogue_insns */
      return TYPE_BLOCK;

    case 3592:  /* *p *thumb2_mulsi_short */
    case 3142:  /* *p *maddhidi4tt */
    case 3141:  /* *p *maddhidi4tb */
    case 3140:  /* *p maddhidi4 */
    case 3139:  /* *p *maddhisi4tt */
    case 3138:  /* *p *maddhisi4tb */
    case 3137:  /* *p maddhisi4 */
    case 3136:  /* *p *mulhisi3tt */
    case 3135:  /* *p *mulhisi3bt */
    case 3134:  /* *p *mulhisi3tb */
    case 3133:  /* *p mulhisi3 */
    case 3132:  /* *p *umulsi3_highpart_v6 */
    case 3131:  /* *p *umulsi3_highpart_nov6 */
    case 3130:  /* *p *smulsi3_highpart_v6 */
    case 3129:  /* *p *smulsi3_highpart_nov6 */
    case 3128:  /* *p *umulsidi3adddi_v6 */
    case 3127:  /* *p *umulsidi3adddi */
    case 3126:  /* *p *umulsidi3_v6 */
    case 3125:  /* *p *umulsidi3_nov6 */
    case 3124:  /* *p *mulsidi3_v6 */
    case 3123:  /* *p *mulsidi3_nov6 */
    case 3122:  /* *p *mulsidi3adddi_v6 */
    case 3121:  /* *p *mulsidi3adddi */
    case 3120:  /* *p *mulsi3subsi */
    case 3119:  /* *p *mulsi3addsi_v6 */
    case 3118:  /* *p *mulsi3addsi */
    case 3117:  /* *p *arm_mulsi3_v6 */
    case 3116:  /* *p *arm_mulsi3 */
    case 776:  /* *thumb2_mulsi_short_compare0_scratch */
    case 775:  /* *thumb2_mulsi_short_compare0 */
    case 774:  /* *thumb2_mulsi_short */
    case 72:  /* *maddhidi4tt */
    case 71:  /* *maddhidi4tb */
    case 70:  /* maddhidi4 */
    case 69:  /* *maddhisi4tt */
    case 68:  /* *maddhisi4tb */
    case 67:  /* maddhisi4 */
    case 66:  /* *mulhisi3tt */
    case 65:  /* *mulhisi3bt */
    case 64:  /* *mulhisi3tb */
    case 63:  /* mulhisi3 */
    case 62:  /* *umulsi3_highpart_v6 */
    case 61:  /* *umulsi3_highpart_nov6 */
    case 60:  /* *smulsi3_highpart_v6 */
    case 59:  /* *smulsi3_highpart_nov6 */
    case 58:  /* *umulsidi3adddi_v6 */
    case 57:  /* *umulsidi3adddi */
    case 56:  /* *umulsidi3_v6 */
    case 55:  /* *umulsidi3_nov6 */
    case 54:  /* *mulsidi3_v6 */
    case 53:  /* *mulsidi3_nov6 */
    case 52:  /* *mulsidi3adddi_v6 */
    case 51:  /* *mulsidi3adddi */
    case 50:  /* *mulsi3subsi */
    case 49:  /* *mulsi3addsi_compare0_scratch_v6 */
    case 48:  /* *mulsi3addsi_compare0_scratch */
    case 47:  /* *mulsi3addsi_compare0_v6 */
    case 46:  /* *mulsi3addsi_compare0 */
    case 45:  /* *mulsi3addsi_v6 */
    case 44:  /* *mulsi3addsi */
    case 43:  /* *mulsi_compare0_scratch_v6 */
    case 42:  /* *mulsi_compare0_scratch */
    case 41:  /* *mulsi3_compare0_v6 */
    case 40:  /* *mulsi3_compare0 */
    case 39:  /* *thumb_mulsi3_v6 */
    case 38:  /* *thumb_mulsi3 */
    case 37:  /* *arm_mulsi3_v6 */
    case 36:  /* *arm_mulsi3 */
      return TYPE_MULT;

    case 121:  /* *satsi_smax_shift */
    case 122:  /* *satsi_smin_shift */
    case 167:  /* *arm_zero_extendhisi2addsi */
    case 172:  /* *arm_zero_extendqisi2addsi */
    case 181:  /* *arm_extendqisi2addsi */
    case 731:  /* *thumb_andsi_not_shiftsi_si */
    case 742:  /* *thumb2_cmpsi_neg_shiftsi */
    case 782:  /* *orsi_not_shiftsi_si */
    case 2027:  /* arm_ssatsihi_shift */
    case 3172:  /* *p *satsi_smax_shift */
    case 3173:  /* *p *satsi_smin_shift */
    case 3199:  /* *p *arm_zero_extendhisi2addsi */
    case 3202:  /* *p *arm_zero_extendqisi2addsi */
    case 3209:  /* *p *arm_extendqisi2addsi */
    case 3577:  /* *p *thumb_andsi_not_shiftsi_si */
    case 3596:  /* *p *orsi_not_shiftsi_si */
    case 3660:  /* *p arm_ssatsihi_shift */
      return TYPE_ALU_SHIFT;

    case 77:  /* *thumb1_andsi3_insn */
    case 80:  /* *zeroextractsi_compare0_scratch */
    case 106:  /* *thumb1_xorsi3_insn */
    case 194:  /* *movsi_compare0 */
    case 3145:  /* *p *zeroextractsi_compare0_scratch */
      return TYPE_SIMPLE_ALU_IMM;

    default:
      return TYPE_ALU_REG;

    }
}

int
get_attr_thumb2_neg_pool_range (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
get_attr_thumb2_pool_range (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 793:  /* *neon_movti */
    case 792:  /* *neon_movv2di */
    case 791:  /* *neon_movv4sf */
    case 790:  /* *neon_movv4si */
    case 789:  /* *neon_movv8hi */
    case 788:  /* *neon_movv16qi */
    case 787:  /* *neon_movdi */
    case 786:  /* *neon_movv2sf */
    case 785:  /* *neon_movv2si */
    case 784:  /* *neon_movv4hi */
    case 783:  /* *neon_movv8qi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 1018 /* 0x3fa */;
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return 0;
        }
      else if (which_alternative == 7)
        {
	  return 1018 /* 0x3fa */;
        }
      else
        {
	  return 0;
        }

    case 3514:  /* *p *movdi_vfp_cortexa8 */
    case 644:  /* *movdi_vfp_cortexa8 */
    case 643:  /* *movdi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 0;
        }
      else if (which_alternative == 4)
        {
	  return 1018 /* 0x3fa */;
        }
      else if (which_alternative == 5)
        {
	  return 4094 /* 0xffe */;
        }
      else if (((1 << which_alternative) & 0x3c0))
        {
	  return 0;
        }
      else if (which_alternative == 10)
        {
	  return 1018 /* 0x3fa */;
        }
      else
        {
	  return 0;
        }

    case 204:  /* *movdf_soft_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 1018 /* 0x3fa */;
        }
      else
        {
	  return 0;
        }

    case 183:  /* *arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 4094 /* 0xffe */;
        }
      else
        {
	  return 0;
        }

    case 202:  /* *arm_movsf_soft_insn */
    case 3218:  /* *p *arm_movsf_soft_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 4094 /* 0xffe */;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_vqh_mnem
get_attr_vqh_mnem (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 1056:  /* quad_halves_smaxv4si */
    case 1058:  /* quad_halves_umaxv4si */
    case 1061:  /* quad_halves_smaxv4sf */
    case 1064:  /* quad_halves_smaxv8hi */
    case 1066:  /* quad_halves_umaxv8hi */
    case 1069:  /* quad_halves_smaxv16qi */
    case 1071:  /* quad_halves_umaxv16qi */
      return VQH_MNEM_VMAX;

    case 1055:  /* quad_halves_sminv4si */
    case 1057:  /* quad_halves_uminv4si */
    case 1060:  /* quad_halves_sminv4sf */
    case 1063:  /* quad_halves_sminv8hi */
    case 1065:  /* quad_halves_uminv8hi */
    case 1068:  /* quad_halves_sminv16qi */
    case 1070:  /* quad_halves_uminv16qi */
      return VQH_MNEM_VMIN;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return VQH_MNEM_VADD;

    }
}

enum attr_wmmxt_transfer_c3
get_attr_wmmxt_transfer_c3 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_wtype = get_attr_wtype (insn)) == WTYPE_TMIA) || ((cached_wtype == WTYPE_TMIAPH) || (cached_wtype == WTYPE_TMIAXY)))
        {
	  return WMMXT_TRANSFER_C3_YES;
        }
      else
        {
	  return WMMXT_TRANSFER_C3_NO;
        }

    case 3429:  /* *p iwmmxt_tmiatt */
    case 3428:  /* *p iwmmxt_tmiabt */
    case 3427:  /* *p iwmmxt_tmiatb */
    case 3426:  /* *p iwmmxt_tmiabb */
    case 3425:  /* *p iwmmxt_tmiaph */
    case 3424:  /* *p iwmmxt_tmia */
    case 558:  /* iwmmxt_tmiatt */
    case 557:  /* iwmmxt_tmiabt */
    case 556:  /* iwmmxt_tmiatb */
    case 555:  /* iwmmxt_tmiabb */
    case 554:  /* iwmmxt_tmiaph */
    case 553:  /* iwmmxt_tmia */
      return WMMXT_TRANSFER_C3_YES;

    default:
      return WMMXT_TRANSFER_C3_NO;

    }
}

enum attr_wmmxt_transfer_c2
get_attr_wmmxt_transfer_c2 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 3301:  /* *p movv8qi_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3299:  /* *p movv2si_internal */
    case 430:  /* movv8qi_internal */
    case 429:  /* movv4hi_internal */
    case 428:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return WMMXT_TRANSFER_C2_YES;
        }
      else
        {
	  return WMMXT_TRANSFER_C2_NO;
        }

    case 426:  /* *iwmmxt_movsi_insn */
    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 7)
        {
	  return WMMXT_TRANSFER_C2_YES;
        }
      else
        {
	  return WMMXT_TRANSFER_C2_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_wtype = get_attr_wtype (insn)) == WTYPE_TEXTRM) || ((cached_wtype == WTYPE_TMOVMSK) || ((cached_wtype == WTYPE_TMRC) || (cached_wtype == WTYPE_TMRRC))))
        {
	  return WMMXT_TRANSFER_C2_YES;
        }
      else
        {
	  return WMMXT_TRANSFER_C2_NO;
        }

    case 3432:  /* *p iwmmxt_tmovmskw */
    case 3431:  /* *p iwmmxt_tmovmskh */
    case 3430:  /* *p iwmmxt_tmovmskb */
    case 3351:  /* *p iwmmxt_textrmw */
    case 3350:  /* *p iwmmxt_textrmsh */
    case 3349:  /* *p iwmmxt_textrmuh */
    case 3348:  /* *p iwmmxt_textrmsb */
    case 3347:  /* *p iwmmxt_textrmub */
    case 561:  /* iwmmxt_tmovmskw */
    case 560:  /* iwmmxt_tmovmskh */
    case 559:  /* iwmmxt_tmovmskb */
    case 480:  /* iwmmxt_textrmw */
    case 479:  /* iwmmxt_textrmsh */
    case 478:  /* iwmmxt_textrmuh */
    case 477:  /* iwmmxt_textrmsb */
    case 476:  /* iwmmxt_textrmub */
      return WMMXT_TRANSFER_C2_YES;

    default:
      return WMMXT_TRANSFER_C2_NO;

    }
}

enum attr_wmmxt_transfer_c1
get_attr_wmmxt_transfer_c1 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 3301:  /* *p movv8qi_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3299:  /* *p movv2si_internal */
    case 430:  /* movv8qi_internal */
    case 429:  /* movv4hi_internal */
    case 428:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return WMMXT_TRANSFER_C1_YES;
        }
      else
        {
	  return WMMXT_TRANSFER_C1_NO;
        }

    case 426:  /* *iwmmxt_movsi_insn */
    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  return WMMXT_TRANSFER_C1_YES;
        }
      else
        {
	  return WMMXT_TRANSFER_C1_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_wtype = get_attr_wtype (insn)) == WTYPE_TBCST) || ((cached_wtype == WTYPE_TINSR) || ((cached_wtype == WTYPE_TMCR) || (cached_wtype == WTYPE_TMCRR))))
        {
	  return WMMXT_TRANSFER_C1_YES;
        }
      else
        {
	  return WMMXT_TRANSFER_C1_NO;
        }

    case 3346:  /* *p iwmmxt_tinsrw */
    case 3345:  /* *p iwmmxt_tinsrh */
    case 3344:  /* *p iwmmxt_tinsrb */
    case 3294:  /* *p tbcstv2si */
    case 3293:  /* *p tbcstv4hi */
    case 3292:  /* *p tbcstv8qi */
    case 475:  /* iwmmxt_tinsrw */
    case 474:  /* iwmmxt_tinsrh */
    case 473:  /* iwmmxt_tinsrb */
    case 420:  /* tbcstv2si */
    case 419:  /* tbcstv4hi */
    case 418:  /* tbcstv8qi */
      return WMMXT_TRANSFER_C1_YES;

    default:
      return WMMXT_TRANSFER_C1_NO;

    }
}

enum attr_wmmxt_alu_c3
get_attr_wmmxt_alu_c3 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_wtype (insn) == WTYPE_WSAD)
        {
	  return WMMXT_ALU_C3_YES;
        }
      else
        {
	  return WMMXT_ALU_C3_NO;
        }

    case 3445:  /* *p iwmmxt_wsadhz */
    case 3444:  /* *p iwmmxt_wsadbz */
    case 3443:  /* *p iwmmxt_wsadh */
    case 3442:  /* *p iwmmxt_wsadb */
    case 574:  /* iwmmxt_wsadhz */
    case 573:  /* iwmmxt_wsadbz */
    case 572:  /* iwmmxt_wsadh */
    case 571:  /* iwmmxt_wsadb */
      return WMMXT_ALU_C3_YES;

    default:
      return WMMXT_ALU_C3_NO;

    }
}

enum attr_wmmxt_alu_c2
get_attr_wmmxt_alu_c2 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_wtype = get_attr_wtype (insn)) == WTYPE_WACC) || ((cached_wtype == WTYPE_WADD) || ((cached_wtype == WTYPE_WADDSUBHX) || ((cached_wtype == WTYPE_WAVG2) || ((cached_wtype == WTYPE_WAVG4) || ((cached_wtype == WTYPE_WCMPEQ) || ((cached_wtype == WTYPE_WCMPGT) || ((cached_wtype == WTYPE_WMAX) || ((cached_wtype == WTYPE_WMIN) || ((cached_wtype == WTYPE_WSUB) || ((cached_wtype == WTYPE_WADDBHUS) || (cached_wtype == WTYPE_WSUBADDHX))))))))))))
        {
	  return WMMXT_ALU_C2_YES;
        }
      else
        {
	  return WMMXT_ALU_C2_NO;
        }

    case 3474:  /* *p iwmmxt_waddbhusl */
    case 3473:  /* *p iwmmxt_waddbhusm */
    case 3457:  /* *p iwmmxt_avg4r */
    case 3456:  /* *p iwmmxt_avg4 */
    case 3455:  /* *p addcv2si3 */
    case 3454:  /* *p addcv4hi3 */
    case 3453:  /* *p iwmmxt_wsubaddhx */
    case 3452:  /* *p iwmmxt_waddsubhx */
    case 3435:  /* *p iwmmxt_waccw */
    case 3434:  /* *p iwmmxt_wacch */
    case 3433:  /* *p iwmmxt_waccb */
    case 3373:  /* *p *uminv8qi3_iwmmxt */
    case 3372:  /* *p *uminv4hi3_iwmmxt */
    case 3371:  /* *p *uminv2si3_iwmmxt */
    case 3370:  /* *p *sminv8qi3_iwmmxt */
    case 3369:  /* *p *sminv4hi3_iwmmxt */
    case 3368:  /* *p *sminv2si3_iwmmxt */
    case 3367:  /* *p *umaxv8qi3_iwmmxt */
    case 3366:  /* *p *umaxv4hi3_iwmmxt */
    case 3365:  /* *p *umaxv2si3_iwmmxt */
    case 3364:  /* *p *smaxv8qi3_iwmmxt */
    case 3363:  /* *p *smaxv4hi3_iwmmxt */
    case 3362:  /* *p *smaxv2si3_iwmmxt */
    case 3361:  /* *p gtv2si3 */
    case 3360:  /* *p gtv4hi3 */
    case 3359:  /* *p gtv8qi3 */
    case 3358:  /* *p gtuv2si3 */
    case 3357:  /* *p gtuv4hi3 */
    case 3356:  /* *p gtuv8qi3 */
    case 3355:  /* *p eqv2si3 */
    case 3354:  /* *p eqv4hi3 */
    case 3353:  /* *p eqv8qi3 */
    case 3343:  /* *p iwmmxt_uavgv4hi3 */
    case 3342:  /* *p iwmmxt_uavgv8qi3 */
    case 3341:  /* *p iwmmxt_uavgrndv4hi3 */
    case 3340:  /* *p iwmmxt_uavgrndv8qi3 */
    case 3328:  /* *p ussubv2si3 */
    case 3327:  /* *p ussubv4hi3 */
    case 3326:  /* *p ussubv8qi3 */
    case 3325:  /* *p sssubv2si3 */
    case 3324:  /* *p sssubv4hi3 */
    case 3323:  /* *p sssubv8qi3 */
    case 3322:  /* *p *subv8qi3_iwmmxt */
    case 3321:  /* *p *subv4hi3_iwmmxt */
    case 3320:  /* *p *subv2si3_iwmmxt */
    case 3319:  /* *p usaddv2si3 */
    case 3318:  /* *p usaddv4hi3 */
    case 3317:  /* *p usaddv8qi3 */
    case 3316:  /* *p ssaddv2si3 */
    case 3315:  /* *p ssaddv4hi3 */
    case 3314:  /* *p ssaddv8qi3 */
    case 3313:  /* *p *addv8qi3_iwmmxt */
    case 3312:  /* *p *addv4hi3_iwmmxt */
    case 3311:  /* *p *addv2si3_iwmmxt */
    case 603:  /* iwmmxt_waddbhusl */
    case 602:  /* iwmmxt_waddbhusm */
    case 586:  /* iwmmxt_avg4r */
    case 585:  /* iwmmxt_avg4 */
    case 584:  /* addcv2si3 */
    case 583:  /* addcv4hi3 */
    case 582:  /* iwmmxt_wsubaddhx */
    case 581:  /* iwmmxt_waddsubhx */
    case 564:  /* iwmmxt_waccw */
    case 563:  /* iwmmxt_wacch */
    case 562:  /* iwmmxt_waccb */
    case 502:  /* *uminv8qi3_iwmmxt */
    case 501:  /* *uminv4hi3_iwmmxt */
    case 500:  /* *uminv2si3_iwmmxt */
    case 499:  /* *sminv8qi3_iwmmxt */
    case 498:  /* *sminv4hi3_iwmmxt */
    case 497:  /* *sminv2si3_iwmmxt */
    case 496:  /* *umaxv8qi3_iwmmxt */
    case 495:  /* *umaxv4hi3_iwmmxt */
    case 494:  /* *umaxv2si3_iwmmxt */
    case 493:  /* *smaxv8qi3_iwmmxt */
    case 492:  /* *smaxv4hi3_iwmmxt */
    case 491:  /* *smaxv2si3_iwmmxt */
    case 490:  /* gtv2si3 */
    case 489:  /* gtv4hi3 */
    case 488:  /* gtv8qi3 */
    case 487:  /* gtuv2si3 */
    case 486:  /* gtuv4hi3 */
    case 485:  /* gtuv8qi3 */
    case 484:  /* eqv2si3 */
    case 483:  /* eqv4hi3 */
    case 482:  /* eqv8qi3 */
    case 472:  /* iwmmxt_uavgv4hi3 */
    case 471:  /* iwmmxt_uavgv8qi3 */
    case 470:  /* iwmmxt_uavgrndv4hi3 */
    case 469:  /* iwmmxt_uavgrndv8qi3 */
    case 457:  /* ussubv2si3 */
    case 456:  /* ussubv4hi3 */
    case 455:  /* ussubv8qi3 */
    case 454:  /* sssubv2si3 */
    case 453:  /* sssubv4hi3 */
    case 452:  /* sssubv8qi3 */
    case 451:  /* *subv8qi3_iwmmxt */
    case 450:  /* *subv4hi3_iwmmxt */
    case 449:  /* *subv2si3_iwmmxt */
    case 448:  /* usaddv2si3 */
    case 447:  /* usaddv4hi3 */
    case 446:  /* usaddv8qi3 */
    case 445:  /* ssaddv2si3 */
    case 444:  /* ssaddv4hi3 */
    case 443:  /* ssaddv8qi3 */
    case 442:  /* *addv8qi3_iwmmxt */
    case 441:  /* *addv4hi3_iwmmxt */
    case 440:  /* *addv2si3_iwmmxt */
      return WMMXT_ALU_C2_YES;

    default:
      return WMMXT_ALU_C2_NO;

    }
}

enum attr_wmmxt_alu_c1
get_attr_wmmxt_alu_c1 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  return WMMXT_ALU_C1_YES;
        }
      else
        {
	  return WMMXT_ALU_C1_NO;
        }

    case 3301:  /* *p movv8qi_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3299:  /* *p movv2si_internal */
    case 3297:  /* *p iwmmxt_anddi3 */
    case 3296:  /* *p iwmmxt_xordi3 */
    case 3295:  /* *p iwmmxt_iordi3 */
    case 430:  /* movv8qi_internal */
    case 429:  /* movv4hi_internal */
    case 428:  /* movv2si_internal */
    case 423:  /* iwmmxt_anddi3 */
    case 422:  /* iwmmxt_xordi3 */
    case 421:  /* iwmmxt_iordi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return WMMXT_ALU_C1_YES;
        }
      else
        {
	  return WMMXT_ALU_C1_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_wtype = get_attr_wtype (insn)) == WTYPE_WABS) || ((cached_wtype == WTYPE_WABSDIFF) || ((cached_wtype == WTYPE_WAND) || ((cached_wtype == WTYPE_WANDN) || ((cached_wtype == WTYPE_WMOV) || ((cached_wtype == WTYPE_WOR) || (cached_wtype == WTYPE_WXOR)))))))
        {
	  return WMMXT_ALU_C1_YES;
        }
      else
        {
	  return WMMXT_ALU_C1_NO;
        }

    case 3451:  /* *p iwmmxt_wabsdiffw */
    case 3450:  /* *p iwmmxt_wabsdiffh */
    case 3449:  /* *p iwmmxt_wabsdiffb */
    case 3448:  /* *p iwmmxt_wabsv8qi3 */
    case 3447:  /* *p iwmmxt_wabsv4hi3 */
    case 3446:  /* *p iwmmxt_wabsv2si3 */
    case 3339:  /* *p iwmmxt_clrv2si */
    case 3338:  /* *p iwmmxt_clrv4hi */
    case 3337:  /* *p iwmmxt_clrv8qi */
    case 3336:  /* *p iwmmxt_clrdi */
    case 3310:  /* *p *xorv8qi3_iwmmxt */
    case 3309:  /* *p *xorv4hi3_iwmmxt */
    case 3308:  /* *p *xorv2si3_iwmmxt */
    case 3307:  /* *p *iorv8qi3_iwmmxt */
    case 3306:  /* *p *iorv4hi3_iwmmxt */
    case 3305:  /* *p *iorv2si3_iwmmxt */
    case 3304:  /* *p *andv8qi3_iwmmxt */
    case 3303:  /* *p *andv4hi3_iwmmxt */
    case 3302:  /* *p *andv2si3_iwmmxt */
    case 3298:  /* *p iwmmxt_nanddi3 */
    case 580:  /* iwmmxt_wabsdiffw */
    case 579:  /* iwmmxt_wabsdiffh */
    case 578:  /* iwmmxt_wabsdiffb */
    case 577:  /* iwmmxt_wabsv8qi3 */
    case 576:  /* iwmmxt_wabsv4hi3 */
    case 575:  /* iwmmxt_wabsv2si3 */
    case 468:  /* iwmmxt_clrv2si */
    case 467:  /* iwmmxt_clrv4hi */
    case 466:  /* iwmmxt_clrv8qi */
    case 465:  /* iwmmxt_clrdi */
    case 439:  /* *xorv8qi3_iwmmxt */
    case 438:  /* *xorv4hi3_iwmmxt */
    case 437:  /* *xorv2si3_iwmmxt */
    case 436:  /* *iorv8qi3_iwmmxt */
    case 435:  /* *iorv4hi3_iwmmxt */
    case 434:  /* *iorv2si3_iwmmxt */
    case 433:  /* *andv8qi3_iwmmxt */
    case 432:  /* *andv4hi3_iwmmxt */
    case 431:  /* *andv2si3_iwmmxt */
    case 424:  /* iwmmxt_nanddi3 */
      return WMMXT_ALU_C1_YES;

    default:
      return WMMXT_ALU_C1_NO;

    }
}

enum attr_wmmxt_mult_c2
get_attr_wmmxt_mult_c2 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_wtype = get_attr_wtype (insn)) == WTYPE_WMUL) || (cached_wtype == WTYPE_WQMULM))
        {
	  return WMMXT_MULT_C2_YES;
        }
      else
        {
	  return WMMXT_MULT_C2_NO;
        }

    case 3471:  /* *p iwmmxt_wqmulmr */
    case 3469:  /* *p iwmmxt_wqmulm */
    case 3466:  /* *p iwmmxt_wmulwsmr */
    case 3465:  /* *p iwmmxt_wmulumr */
    case 3464:  /* *p iwmmxt_wmulsmr */
    case 3331:  /* *p umulv4hi3_highpart */
    case 3330:  /* *p smulv4hi3_highpart */
    case 3329:  /* *p *mulv4hi3_iwmmxt */
    case 600:  /* iwmmxt_wqmulmr */
    case 598:  /* iwmmxt_wqmulm */
    case 595:  /* iwmmxt_wmulwsmr */
    case 594:  /* iwmmxt_wmulumr */
    case 593:  /* iwmmxt_wmulsmr */
    case 460:  /* umulv4hi3_highpart */
    case 459:  /* smulv4hi3_highpart */
    case 458:  /* *mulv4hi3_iwmmxt */
      return WMMXT_MULT_C2_YES;

    default:
      return WMMXT_MULT_C2_NO;

    }
}

enum attr_wmmxt_mult_c1
get_attr_wmmxt_mult_c1 (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_wtype = get_attr_wtype (insn)) == WTYPE_WMAC) || ((cached_wtype == WTYPE_WMADD) || ((cached_wtype == WTYPE_WMIAXY) || ((cached_wtype == WTYPE_WMIAWXY) || ((cached_wtype == WTYPE_WMULW) || ((cached_wtype == WTYPE_WQMIAXY) || (cached_wtype == WTYPE_WQMULWM)))))))
        {
	  return WMMXT_MULT_C1_YES;
        }
      else
        {
	  return WMMXT_MULT_C1_NO;
        }

    case 3498:  /* *p iwmmxt_wmiawttn */
    case 3497:  /* *p iwmmxt_wmiawtbn */
    case 3496:  /* *p iwmmxt_wmiawbtn */
    case 3495:  /* *p iwmmxt_wmiawbbn */
    case 3494:  /* *p iwmmxt_wmiawtt */
    case 3493:  /* *p iwmmxt_wmiawtb */
    case 3492:  /* *p iwmmxt_wmiawbt */
    case 3491:  /* *p iwmmxt_wmiawbb */
    case 3490:  /* *p iwmmxt_wmiattn */
    case 3489:  /* *p iwmmxt_wmiatbn */
    case 3488:  /* *p iwmmxt_wmiabtn */
    case 3487:  /* *p iwmmxt_wmiabbn */
    case 3486:  /* *p iwmmxt_wmiatt */
    case 3485:  /* *p iwmmxt_wmiatb */
    case 3484:  /* *p iwmmxt_wmiabt */
    case 3483:  /* *p iwmmxt_wmiabb */
    case 3482:  /* *p iwmmxt_wqmiattn */
    case 3481:  /* *p iwmmxt_wqmiatbn */
    case 3480:  /* *p iwmmxt_wqmiabtn */
    case 3479:  /* *p iwmmxt_wqmiabbn */
    case 3478:  /* *p iwmmxt_wqmiatt */
    case 3477:  /* *p iwmmxt_wqmiatb */
    case 3476:  /* *p iwmmxt_wqmiabt */
    case 3475:  /* *p iwmmxt_wqmiabb */
    case 3472:  /* *p iwmmxt_wqmulwmr */
    case 3470:  /* *p iwmmxt_wqmulwm */
    case 3468:  /* *p iwmmxt_wmulwl */
    case 3467:  /* *p iwmmxt_wmulwumr */
    case 3463:  /* *p iwmmxt_wmulwum */
    case 3462:  /* *p iwmmxt_wmulwsm */
    case 3461:  /* *p iwmmxt_wmaddun */
    case 3460:  /* *p iwmmxt_wmaddsn */
    case 3459:  /* *p iwmmxt_wmaddux */
    case 3458:  /* *p iwmmxt_wmaddsx */
    case 3423:  /* *p iwmmxt_wmaddu */
    case 3422:  /* *p iwmmxt_wmadds */
    case 3335:  /* *p iwmmxt_wmacuz */
    case 3334:  /* *p iwmmxt_wmacu */
    case 3333:  /* *p iwmmxt_wmacsz */
    case 3332:  /* *p iwmmxt_wmacs */
    case 627:  /* iwmmxt_wmiawttn */
    case 626:  /* iwmmxt_wmiawtbn */
    case 625:  /* iwmmxt_wmiawbtn */
    case 624:  /* iwmmxt_wmiawbbn */
    case 623:  /* iwmmxt_wmiawtt */
    case 622:  /* iwmmxt_wmiawtb */
    case 621:  /* iwmmxt_wmiawbt */
    case 620:  /* iwmmxt_wmiawbb */
    case 619:  /* iwmmxt_wmiattn */
    case 618:  /* iwmmxt_wmiatbn */
    case 617:  /* iwmmxt_wmiabtn */
    case 616:  /* iwmmxt_wmiabbn */
    case 615:  /* iwmmxt_wmiatt */
    case 614:  /* iwmmxt_wmiatb */
    case 613:  /* iwmmxt_wmiabt */
    case 612:  /* iwmmxt_wmiabb */
    case 611:  /* iwmmxt_wqmiattn */
    case 610:  /* iwmmxt_wqmiatbn */
    case 609:  /* iwmmxt_wqmiabtn */
    case 608:  /* iwmmxt_wqmiabbn */
    case 607:  /* iwmmxt_wqmiatt */
    case 606:  /* iwmmxt_wqmiatb */
    case 605:  /* iwmmxt_wqmiabt */
    case 604:  /* iwmmxt_wqmiabb */
    case 601:  /* iwmmxt_wqmulwmr */
    case 599:  /* iwmmxt_wqmulwm */
    case 597:  /* iwmmxt_wmulwl */
    case 596:  /* iwmmxt_wmulwumr */
    case 592:  /* iwmmxt_wmulwum */
    case 591:  /* iwmmxt_wmulwsm */
    case 590:  /* iwmmxt_wmaddun */
    case 589:  /* iwmmxt_wmaddsn */
    case 588:  /* iwmmxt_wmaddux */
    case 587:  /* iwmmxt_wmaddsx */
    case 552:  /* iwmmxt_wmaddu */
    case 551:  /* iwmmxt_wmadds */
    case 464:  /* iwmmxt_wmacuz */
    case 463:  /* iwmmxt_wmacu */
    case 462:  /* iwmmxt_wmacsz */
    case 461:  /* iwmmxt_wmacs */
      return WMMXT_MULT_C1_YES;

    default:
      return WMMXT_MULT_C1_NO;

    }
}

enum attr_wmmxt_pack
get_attr_wmmxt_pack (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_wtype = get_attr_wtype (insn)) == WTYPE_WALIGNI) || ((cached_wtype == WTYPE_WALIGNR) || ((cached_wtype == WTYPE_WMERGE) || ((cached_wtype == WTYPE_WPACK) || ((cached_wtype == WTYPE_WSHUFH) || ((cached_wtype == WTYPE_WUNPCKEH) || ((cached_wtype == WTYPE_WUNPCKIH) || ((cached_wtype == WTYPE_WUNPCKEL) || (cached_wtype == WTYPE_WUNPCKIL)))))))))
        {
	  return WMMXT_PACK_YES;
        }
      else
        {
	  return WMMXT_PACK_NO;
        }

    case 3499:  /* *p iwmmxt_wmerge */
    case 3441:  /* *p iwmmxt_walignr3 */
    case 3440:  /* *p iwmmxt_walignr2 */
    case 3439:  /* *p iwmmxt_walignr1 */
    case 3438:  /* *p iwmmxt_walignr0 */
    case 3437:  /* *p iwmmxt_walignr */
    case 3436:  /* *p iwmmxt_waligni */
    case 3397:  /* *p iwmmxt_wunpckelsw */
    case 3396:  /* *p iwmmxt_wunpckelsh */
    case 3395:  /* *p iwmmxt_wunpckelsb */
    case 3394:  /* *p iwmmxt_wunpckeluw */
    case 3393:  /* *p iwmmxt_wunpckeluh */
    case 3392:  /* *p iwmmxt_wunpckelub */
    case 3391:  /* *p iwmmxt_wunpckehsw */
    case 3390:  /* *p iwmmxt_wunpckehsh */
    case 3389:  /* *p iwmmxt_wunpckehsb */
    case 3388:  /* *p iwmmxt_wunpckehuw */
    case 3387:  /* *p iwmmxt_wunpckehuh */
    case 3386:  /* *p iwmmxt_wunpckehub */
    case 3385:  /* *p iwmmxt_wunpckilw */
    case 3384:  /* *p iwmmxt_wunpckilh */
    case 3383:  /* *p iwmmxt_wunpckilb */
    case 3382:  /* *p iwmmxt_wunpckihw */
    case 3381:  /* *p iwmmxt_wunpckihh */
    case 3380:  /* *p iwmmxt_wunpckihb */
    case 3379:  /* *p iwmmxt_wpackdus */
    case 3378:  /* *p iwmmxt_wpackwus */
    case 3377:  /* *p iwmmxt_wpackhus */
    case 3376:  /* *p iwmmxt_wpackdss */
    case 3375:  /* *p iwmmxt_wpackwss */
    case 3374:  /* *p iwmmxt_wpackhss */
    case 3352:  /* *p iwmmxt_wshufh */
    case 628:  /* iwmmxt_wmerge */
    case 570:  /* iwmmxt_walignr3 */
    case 569:  /* iwmmxt_walignr2 */
    case 568:  /* iwmmxt_walignr1 */
    case 567:  /* iwmmxt_walignr0 */
    case 566:  /* iwmmxt_walignr */
    case 565:  /* iwmmxt_waligni */
    case 526:  /* iwmmxt_wunpckelsw */
    case 525:  /* iwmmxt_wunpckelsh */
    case 524:  /* iwmmxt_wunpckelsb */
    case 523:  /* iwmmxt_wunpckeluw */
    case 522:  /* iwmmxt_wunpckeluh */
    case 521:  /* iwmmxt_wunpckelub */
    case 520:  /* iwmmxt_wunpckehsw */
    case 519:  /* iwmmxt_wunpckehsh */
    case 518:  /* iwmmxt_wunpckehsb */
    case 517:  /* iwmmxt_wunpckehuw */
    case 516:  /* iwmmxt_wunpckehuh */
    case 515:  /* iwmmxt_wunpckehub */
    case 514:  /* iwmmxt_wunpckilw */
    case 513:  /* iwmmxt_wunpckilh */
    case 512:  /* iwmmxt_wunpckilb */
    case 511:  /* iwmmxt_wunpckihw */
    case 510:  /* iwmmxt_wunpckihh */
    case 509:  /* iwmmxt_wunpckihb */
    case 508:  /* iwmmxt_wpackdus */
    case 507:  /* iwmmxt_wpackwus */
    case 506:  /* iwmmxt_wpackhus */
    case 505:  /* iwmmxt_wpackdss */
    case 504:  /* iwmmxt_wpackwss */
    case 503:  /* iwmmxt_wpackhss */
    case 481:  /* iwmmxt_wshufh */
      return WMMXT_PACK_YES;

    default:
      return WMMXT_PACK_NO;

    }
}

enum attr_wmmxt_shift
get_attr_wmmxt_shift (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_wtype = get_attr_wtype (insn)) == WTYPE_WROR) || ((cached_wtype == WTYPE_WSLL) || ((cached_wtype == WTYPE_WSRA) || (cached_wtype == WTYPE_WSRL))))
        {
	  return WMMXT_SHIFT_YES;
        }
      else
        {
	  return WMMXT_SHIFT_NO;
        }

    case 3421:  /* *p ashldi3_di */
    case 3420:  /* *p ashlv2si3_di */
    case 3419:  /* *p ashlv4hi3_di */
    case 3418:  /* *p lshrdi3_di */
    case 3417:  /* *p lshrv2si3_di */
    case 3416:  /* *p lshrv4hi3_di */
    case 3415:  /* *p ashrdi3_di */
    case 3414:  /* *p ashrv2si3_di */
    case 3413:  /* *p ashrv4hi3_di */
    case 3412:  /* *p rordi3_di */
    case 3411:  /* *p rorv2si3_di */
    case 3410:  /* *p rorv4hi3_di */
    case 3409:  /* *p ashldi3_iwmmxt */
    case 3408:  /* *p ashlv2si3_iwmmxt */
    case 3407:  /* *p ashlv4hi3_iwmmxt */
    case 3406:  /* *p lshrdi3_iwmmxt */
    case 3405:  /* *p lshrv2si3_iwmmxt */
    case 3404:  /* *p lshrv4hi3_iwmmxt */
    case 3403:  /* *p ashrdi3_iwmmxt */
    case 3402:  /* *p ashrv2si3_iwmmxt */
    case 3401:  /* *p ashrv4hi3_iwmmxt */
    case 3400:  /* *p rordi3 */
    case 3399:  /* *p rorv2si3 */
    case 3398:  /* *p rorv4hi3 */
    case 550:  /* ashldi3_di */
    case 549:  /* ashlv2si3_di */
    case 548:  /* ashlv4hi3_di */
    case 547:  /* lshrdi3_di */
    case 546:  /* lshrv2si3_di */
    case 545:  /* lshrv4hi3_di */
    case 544:  /* ashrdi3_di */
    case 543:  /* ashrv2si3_di */
    case 542:  /* ashrv4hi3_di */
    case 541:  /* rordi3_di */
    case 540:  /* rorv2si3_di */
    case 539:  /* rorv4hi3_di */
    case 538:  /* ashldi3_iwmmxt */
    case 537:  /* ashlv2si3_iwmmxt */
    case 536:  /* ashlv4hi3_iwmmxt */
    case 535:  /* lshrdi3_iwmmxt */
    case 534:  /* lshrv2si3_iwmmxt */
    case 533:  /* lshrv4hi3_iwmmxt */
    case 532:  /* ashrdi3_iwmmxt */
    case 531:  /* ashrv2si3_iwmmxt */
    case 530:  /* ashrv4hi3_iwmmxt */
    case 529:  /* rordi3 */
    case 528:  /* rorv2si3 */
    case 527:  /* rorv4hi3 */
      return WMMXT_SHIFT_YES;

    default:
      return WMMXT_SHIFT_NO;

    }
}

enum attr_write_conflict
get_attr_write_conflict (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 3516:  /* *p *thumb2_movsf_vfp */
    case 3515:  /* *p *movsf_vfp */
    case 648:  /* *thumb2_movsf_vfp */
    case 647:  /* *movsf_vfp */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 5)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 3580:  /* *p *thumb2_movsi_insn */
    case 3513:  /* *p *thumb2_movsi_vfp */
    case 739:  /* *thumb2_movsi_insn */
    case 642:  /* *thumb2_movsi_vfp */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x30))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 3301:  /* *p movv8qi_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3299:  /* *p movv2si_internal */
    case 430:  /* movv8qi_internal */
    case 429:  /* movv4hi_internal */
    case 428:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 6)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 645:  /* *movhf_vfp_neon */
    case 427:  /* *cond_iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 203:  /* *thumb1_movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xa))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 3217:  /* *p *arm32_movhf */
    case 646:  /* *movhf_vfp */
    case 200:  /* *arm32_movhf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 3216:  /* *p *arm_movqi_insn */
    case 198:  /* *arm_movqi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x28))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 3581:  /* *p *thumb2_movhi_insn */
    case 3214:  /* *p *movhi_insn_arch4 */
    case 741:  /* *thumb2_movhi_insn */
    case 196:  /* *movhi_insn_arch4 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x7))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 3218:  /* *p *arm_movsf_soft_insn */
    case 202:  /* *arm_movsf_soft_insn */
    case 201:  /* *thumb1_movhf */
    case 199:  /* *thumb1_movqi_insn */
    case 195:  /* *thumb1_movhi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 187:  /* *thumb1_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x50))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 3512:  /* *p *arm_movsi_vfp */
    case 3211:  /* *p *arm_movsi_insn */
    case 641:  /* *arm_movsi_vfp */
    case 426:  /* *iwmmxt_movsi_insn */
    case 186:  /* *arm_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((cached_type = get_attr_type (insn)) == TYPE_BLOCK) || ((cached_type == TYPE_CALL) || (cached_type == TYPE_LOAD1)))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 3232:  /* *p *ldr_with_return */
    case 3228:  /* *p *arith_adjacentmem */
    case 3225:  /* *p *load_indirect_jump */
    case 3222:  /* *p *arm_return */
    case 3176:  /* *p unaligned_loadsi */
    case 749:  /* *call_value_reg_thumb2 */
    case 748:  /* *call_reg_thumb2 */
    case 330:  /* *ldr_with_return */
    case 321:  /* *epilogue_insns */
    case 319:  /* *arith_adjacentmem */
    case 265:  /* *load_indirect_jump */
    case 261:  /* blockage */
    case 258:  /* *cond_return_inverted */
    case 257:  /* *cond_return */
    case 256:  /* *arm_return */
    case 255:  /* *sibcall_value_insn */
    case 254:  /* *sibcall_insn */
    case 253:  /* *call_value_insn */
    case 252:  /* *call_insn */
    case 251:  /* *call_value_symbol */
    case 250:  /* *call_symbol */
    case 249:  /* *call_value_reg_thumb1 */
    case 248:  /* *call_value_reg_thumb1_v5 */
    case 247:  /* *call_value_mem */
    case 246:  /* *call_value_reg_arm */
    case 245:  /* *call_value_reg_armv5 */
    case 244:  /* *call_reg_thumb1 */
    case 243:  /* *call_reg_thumb1_v5 */
    case 242:  /* *call_mem */
    case 241:  /* *call_reg_arm */
    case 240:  /* *call_reg_armv5 */
    case 190:  /* pic_load_addr_thumb1 */
    case 189:  /* pic_load_addr_32bit */
    case 188:  /* pic_load_addr_unified */
    case 136:  /* unaligned_loadsi */
      return WRITE_CONFLICT_YES;

    default:
      return WRITE_CONFLICT_NO;

    }
}

enum attr_wtype
get_attr_wtype (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 3301:  /* *p movv8qi_internal */
    case 3300:  /* *p movv4hi_internal */
    case 3299:  /* *p movv2si_internal */
    case 430:  /* movv8qi_internal */
    case 429:  /* movv4hi_internal */
    case 428:  /* movv2si_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return WTYPE_WMOV;
        }
      else if (which_alternative == 1)
        {
	  return WTYPE_WSTR;
        }
      else if (which_alternative == 2)
        {
	  return WTYPE_WLDR;
        }
      else if (which_alternative == 3)
        {
	  return WTYPE_TMRRC;
        }
      else if (which_alternative == 4)
        {
	  return WTYPE_TMCRR;
        }
      else
        {
	  return WTYPE_NONE;
        }

    case 426:  /* *iwmmxt_movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return WTYPE_NONE;
        }
      else if (which_alternative == 6)
        {
	  return WTYPE_TMCR;
        }
      else if (which_alternative == 7)
        {
	  return WTYPE_TMRC;
        }
      else if (which_alternative == 8)
        {
	  return WTYPE_WLDR;
        }
      else if (which_alternative == 9)
        {
	  return WTYPE_WSTR;
        }
      else
        {
	  return WTYPE_NONE;
        }

    case 425:  /* *iwmmxt_arm_movdi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return WTYPE_NONE;
        }
      else if (which_alternative == 5)
        {
	  return WTYPE_WMOV;
        }
      else if (which_alternative == 6)
        {
	  return WTYPE_TMCRR;
        }
      else if (which_alternative == 7)
        {
	  return WTYPE_TMRRC;
        }
      else if (which_alternative == 8)
        {
	  return WTYPE_WLDR;
        }
      else if (which_alternative == 9)
        {
	  return WTYPE_WSTR;
        }
      else
        {
	  return WTYPE_NONE;
        }

    case 3297:  /* *p iwmmxt_anddi3 */
    case 423:  /* iwmmxt_anddi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return WTYPE_WAND;
        }
      else
        {
	  return WTYPE_NONE;
        }

    case 3296:  /* *p iwmmxt_xordi3 */
    case 422:  /* iwmmxt_xordi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return WTYPE_WXOR;
        }
      else
        {
	  return WTYPE_NONE;
        }

    case 3295:  /* *p iwmmxt_iordi3 */
    case 421:  /* iwmmxt_iordi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return WTYPE_WOR;
        }
      else
        {
	  return WTYPE_NONE;
        }

    case 628:  /* iwmmxt_wmerge */
    case 3499:  /* *p iwmmxt_wmerge */
      return WTYPE_WMERGE;

    case 620:  /* iwmmxt_wmiawbb */
    case 621:  /* iwmmxt_wmiawbt */
    case 622:  /* iwmmxt_wmiawtb */
    case 623:  /* iwmmxt_wmiawtt */
    case 624:  /* iwmmxt_wmiawbbn */
    case 625:  /* iwmmxt_wmiawbtn */
    case 626:  /* iwmmxt_wmiawtbn */
    case 627:  /* iwmmxt_wmiawttn */
    case 3491:  /* *p iwmmxt_wmiawbb */
    case 3492:  /* *p iwmmxt_wmiawbt */
    case 3493:  /* *p iwmmxt_wmiawtb */
    case 3494:  /* *p iwmmxt_wmiawtt */
    case 3495:  /* *p iwmmxt_wmiawbbn */
    case 3496:  /* *p iwmmxt_wmiawbtn */
    case 3497:  /* *p iwmmxt_wmiawtbn */
    case 3498:  /* *p iwmmxt_wmiawttn */
      return WTYPE_WMIAWXY;

    case 612:  /* iwmmxt_wmiabb */
    case 613:  /* iwmmxt_wmiabt */
    case 614:  /* iwmmxt_wmiatb */
    case 615:  /* iwmmxt_wmiatt */
    case 616:  /* iwmmxt_wmiabbn */
    case 617:  /* iwmmxt_wmiabtn */
    case 618:  /* iwmmxt_wmiatbn */
    case 619:  /* iwmmxt_wmiattn */
    case 3483:  /* *p iwmmxt_wmiabb */
    case 3484:  /* *p iwmmxt_wmiabt */
    case 3485:  /* *p iwmmxt_wmiatb */
    case 3486:  /* *p iwmmxt_wmiatt */
    case 3487:  /* *p iwmmxt_wmiabbn */
    case 3488:  /* *p iwmmxt_wmiabtn */
    case 3489:  /* *p iwmmxt_wmiatbn */
    case 3490:  /* *p iwmmxt_wmiattn */
      return WTYPE_WMIAXY;

    case 604:  /* iwmmxt_wqmiabb */
    case 605:  /* iwmmxt_wqmiabt */
    case 606:  /* iwmmxt_wqmiatb */
    case 607:  /* iwmmxt_wqmiatt */
    case 608:  /* iwmmxt_wqmiabbn */
    case 609:  /* iwmmxt_wqmiabtn */
    case 610:  /* iwmmxt_wqmiatbn */
    case 611:  /* iwmmxt_wqmiattn */
    case 3475:  /* *p iwmmxt_wqmiabb */
    case 3476:  /* *p iwmmxt_wqmiabt */
    case 3477:  /* *p iwmmxt_wqmiatb */
    case 3478:  /* *p iwmmxt_wqmiatt */
    case 3479:  /* *p iwmmxt_wqmiabbn */
    case 3480:  /* *p iwmmxt_wqmiabtn */
    case 3481:  /* *p iwmmxt_wqmiatbn */
    case 3482:  /* *p iwmmxt_wqmiattn */
      return WTYPE_WQMIAXY;

    case 602:  /* iwmmxt_waddbhusm */
    case 603:  /* iwmmxt_waddbhusl */
    case 3473:  /* *p iwmmxt_waddbhusm */
    case 3474:  /* *p iwmmxt_waddbhusl */
      return WTYPE_WADDBHUS;

    case 599:  /* iwmmxt_wqmulwm */
    case 601:  /* iwmmxt_wqmulwmr */
    case 3470:  /* *p iwmmxt_wqmulwm */
    case 3472:  /* *p iwmmxt_wqmulwmr */
      return WTYPE_WQMULWM;

    case 598:  /* iwmmxt_wqmulm */
    case 600:  /* iwmmxt_wqmulmr */
    case 3469:  /* *p iwmmxt_wqmulm */
    case 3471:  /* *p iwmmxt_wqmulmr */
      return WTYPE_WQMULM;

    case 591:  /* iwmmxt_wmulwsm */
    case 592:  /* iwmmxt_wmulwum */
    case 596:  /* iwmmxt_wmulwumr */
    case 597:  /* iwmmxt_wmulwl */
    case 3462:  /* *p iwmmxt_wmulwsm */
    case 3463:  /* *p iwmmxt_wmulwum */
    case 3467:  /* *p iwmmxt_wmulwumr */
    case 3468:  /* *p iwmmxt_wmulwl */
      return WTYPE_WMULW;

    case 585:  /* iwmmxt_avg4 */
    case 586:  /* iwmmxt_avg4r */
    case 3456:  /* *p iwmmxt_avg4 */
    case 3457:  /* *p iwmmxt_avg4r */
      return WTYPE_WAVG4;

    case 582:  /* iwmmxt_wsubaddhx */
    case 3453:  /* *p iwmmxt_wsubaddhx */
      return WTYPE_WSUBADDHX;

    case 581:  /* iwmmxt_waddsubhx */
    case 3452:  /* *p iwmmxt_waddsubhx */
      return WTYPE_WADDSUBHX;

    case 578:  /* iwmmxt_wabsdiffb */
    case 579:  /* iwmmxt_wabsdiffh */
    case 580:  /* iwmmxt_wabsdiffw */
    case 3449:  /* *p iwmmxt_wabsdiffb */
    case 3450:  /* *p iwmmxt_wabsdiffh */
    case 3451:  /* *p iwmmxt_wabsdiffw */
      return WTYPE_WABSDIFF;

    case 575:  /* iwmmxt_wabsv2si3 */
    case 576:  /* iwmmxt_wabsv4hi3 */
    case 577:  /* iwmmxt_wabsv8qi3 */
    case 3446:  /* *p iwmmxt_wabsv2si3 */
    case 3447:  /* *p iwmmxt_wabsv4hi3 */
    case 3448:  /* *p iwmmxt_wabsv8qi3 */
      return WTYPE_WABS;

    case 571:  /* iwmmxt_wsadb */
    case 572:  /* iwmmxt_wsadh */
    case 573:  /* iwmmxt_wsadbz */
    case 574:  /* iwmmxt_wsadhz */
    case 3442:  /* *p iwmmxt_wsadb */
    case 3443:  /* *p iwmmxt_wsadh */
    case 3444:  /* *p iwmmxt_wsadbz */
    case 3445:  /* *p iwmmxt_wsadhz */
      return WTYPE_WSAD;

    case 635:  /* iwmmxt_torvscv2si3 */
    case 636:  /* iwmmxt_torvscv4hi3 */
    case 637:  /* iwmmxt_torvscv8qi3 */
    case 3506:  /* *p iwmmxt_torvscv2si3 */
    case 3507:  /* *p iwmmxt_torvscv4hi3 */
    case 3508:  /* *p iwmmxt_torvscv8qi3 */
      return WTYPE_TORVSC;

    case 632:  /* iwmmxt_torcv2si3 */
    case 633:  /* iwmmxt_torcv4hi3 */
    case 634:  /* iwmmxt_torcv8qi3 */
    case 3503:  /* *p iwmmxt_torcv2si3 */
    case 3504:  /* *p iwmmxt_torcv4hi3 */
    case 3505:  /* *p iwmmxt_torcv8qi3 */
      return WTYPE_TORC;

    case 638:  /* iwmmxt_textrcv2si3 */
    case 639:  /* iwmmxt_textrcv4hi3 */
    case 640:  /* iwmmxt_textrcv8qi3 */
    case 3509:  /* *p iwmmxt_textrcv2si3 */
    case 3510:  /* *p iwmmxt_textrcv4hi3 */
    case 3511:  /* *p iwmmxt_textrcv8qi3 */
      return WTYPE_TEXTRC;

    case 629:  /* iwmmxt_tandcv2si3 */
    case 630:  /* iwmmxt_tandcv4hi3 */
    case 631:  /* iwmmxt_tandcv8qi3 */
    case 3500:  /* *p iwmmxt_tandcv2si3 */
    case 3501:  /* *p iwmmxt_tandcv4hi3 */
    case 3502:  /* *p iwmmxt_tandcv8qi3 */
      return WTYPE_TANDC;

    case 566:  /* iwmmxt_walignr */
    case 567:  /* iwmmxt_walignr0 */
    case 568:  /* iwmmxt_walignr1 */
    case 569:  /* iwmmxt_walignr2 */
    case 570:  /* iwmmxt_walignr3 */
    case 3437:  /* *p iwmmxt_walignr */
    case 3438:  /* *p iwmmxt_walignr0 */
    case 3439:  /* *p iwmmxt_walignr1 */
    case 3440:  /* *p iwmmxt_walignr2 */
    case 3441:  /* *p iwmmxt_walignr3 */
      return WTYPE_WALIGNR;

    case 565:  /* iwmmxt_waligni */
    case 3436:  /* *p iwmmxt_waligni */
      return WTYPE_WALIGNI;

    case 562:  /* iwmmxt_waccb */
    case 563:  /* iwmmxt_wacch */
    case 564:  /* iwmmxt_waccw */
    case 3433:  /* *p iwmmxt_waccb */
    case 3434:  /* *p iwmmxt_wacch */
    case 3435:  /* *p iwmmxt_waccw */
      return WTYPE_WACC;

    case 559:  /* iwmmxt_tmovmskb */
    case 560:  /* iwmmxt_tmovmskh */
    case 561:  /* iwmmxt_tmovmskw */
    case 3430:  /* *p iwmmxt_tmovmskb */
    case 3431:  /* *p iwmmxt_tmovmskh */
    case 3432:  /* *p iwmmxt_tmovmskw */
      return WTYPE_TMOVMSK;

    case 418:  /* tbcstv8qi */
    case 419:  /* tbcstv4hi */
    case 420:  /* tbcstv2si */
    case 3292:  /* *p tbcstv8qi */
    case 3293:  /* *p tbcstv4hi */
    case 3294:  /* *p tbcstv2si */
      return WTYPE_TBCST;

    case 555:  /* iwmmxt_tmiabb */
    case 556:  /* iwmmxt_tmiatb */
    case 557:  /* iwmmxt_tmiabt */
    case 558:  /* iwmmxt_tmiatt */
    case 3426:  /* *p iwmmxt_tmiabb */
    case 3427:  /* *p iwmmxt_tmiatb */
    case 3428:  /* *p iwmmxt_tmiabt */
    case 3429:  /* *p iwmmxt_tmiatt */
      return WTYPE_TMIAXY;

    case 554:  /* iwmmxt_tmiaph */
    case 3425:  /* *p iwmmxt_tmiaph */
      return WTYPE_TMIAPH;

    case 553:  /* iwmmxt_tmia */
    case 3424:  /* *p iwmmxt_tmia */
      return WTYPE_TMIA;

    case 551:  /* iwmmxt_wmadds */
    case 552:  /* iwmmxt_wmaddu */
    case 587:  /* iwmmxt_wmaddsx */
    case 588:  /* iwmmxt_wmaddux */
    case 589:  /* iwmmxt_wmaddsn */
    case 590:  /* iwmmxt_wmaddun */
    case 3422:  /* *p iwmmxt_wmadds */
    case 3423:  /* *p iwmmxt_wmaddu */
    case 3458:  /* *p iwmmxt_wmaddsx */
    case 3459:  /* *p iwmmxt_wmaddux */
    case 3460:  /* *p iwmmxt_wmaddsn */
    case 3461:  /* *p iwmmxt_wmaddun */
      return WTYPE_WMADD;

    case 536:  /* ashlv4hi3_iwmmxt */
    case 537:  /* ashlv2si3_iwmmxt */
    case 538:  /* ashldi3_iwmmxt */
    case 548:  /* ashlv4hi3_di */
    case 549:  /* ashlv2si3_di */
    case 550:  /* ashldi3_di */
    case 3407:  /* *p ashlv4hi3_iwmmxt */
    case 3408:  /* *p ashlv2si3_iwmmxt */
    case 3409:  /* *p ashldi3_iwmmxt */
    case 3419:  /* *p ashlv4hi3_di */
    case 3420:  /* *p ashlv2si3_di */
    case 3421:  /* *p ashldi3_di */
      return WTYPE_WSLL;

    case 533:  /* lshrv4hi3_iwmmxt */
    case 534:  /* lshrv2si3_iwmmxt */
    case 535:  /* lshrdi3_iwmmxt */
    case 545:  /* lshrv4hi3_di */
    case 546:  /* lshrv2si3_di */
    case 547:  /* lshrdi3_di */
    case 3404:  /* *p lshrv4hi3_iwmmxt */
    case 3405:  /* *p lshrv2si3_iwmmxt */
    case 3406:  /* *p lshrdi3_iwmmxt */
    case 3416:  /* *p lshrv4hi3_di */
    case 3417:  /* *p lshrv2si3_di */
    case 3418:  /* *p lshrdi3_di */
      return WTYPE_WSRL;

    case 530:  /* ashrv4hi3_iwmmxt */
    case 531:  /* ashrv2si3_iwmmxt */
    case 532:  /* ashrdi3_iwmmxt */
    case 542:  /* ashrv4hi3_di */
    case 543:  /* ashrv2si3_di */
    case 544:  /* ashrdi3_di */
    case 3401:  /* *p ashrv4hi3_iwmmxt */
    case 3402:  /* *p ashrv2si3_iwmmxt */
    case 3403:  /* *p ashrdi3_iwmmxt */
    case 3413:  /* *p ashrv4hi3_di */
    case 3414:  /* *p ashrv2si3_di */
    case 3415:  /* *p ashrdi3_di */
      return WTYPE_WSRA;

    case 527:  /* rorv4hi3 */
    case 528:  /* rorv2si3 */
    case 529:  /* rordi3 */
    case 539:  /* rorv4hi3_di */
    case 540:  /* rorv2si3_di */
    case 541:  /* rordi3_di */
    case 3398:  /* *p rorv4hi3 */
    case 3399:  /* *p rorv2si3 */
    case 3400:  /* *p rordi3 */
    case 3410:  /* *p rorv4hi3_di */
    case 3411:  /* *p rorv2si3_di */
    case 3412:  /* *p rordi3_di */
      return WTYPE_WROR;

    case 521:  /* iwmmxt_wunpckelub */
    case 522:  /* iwmmxt_wunpckeluh */
    case 523:  /* iwmmxt_wunpckeluw */
    case 524:  /* iwmmxt_wunpckelsb */
    case 525:  /* iwmmxt_wunpckelsh */
    case 526:  /* iwmmxt_wunpckelsw */
    case 3392:  /* *p iwmmxt_wunpckelub */
    case 3393:  /* *p iwmmxt_wunpckeluh */
    case 3394:  /* *p iwmmxt_wunpckeluw */
    case 3395:  /* *p iwmmxt_wunpckelsb */
    case 3396:  /* *p iwmmxt_wunpckelsh */
    case 3397:  /* *p iwmmxt_wunpckelsw */
      return WTYPE_WUNPCKEL;

    case 515:  /* iwmmxt_wunpckehub */
    case 516:  /* iwmmxt_wunpckehuh */
    case 517:  /* iwmmxt_wunpckehuw */
    case 518:  /* iwmmxt_wunpckehsb */
    case 519:  /* iwmmxt_wunpckehsh */
    case 520:  /* iwmmxt_wunpckehsw */
    case 3386:  /* *p iwmmxt_wunpckehub */
    case 3387:  /* *p iwmmxt_wunpckehuh */
    case 3388:  /* *p iwmmxt_wunpckehuw */
    case 3389:  /* *p iwmmxt_wunpckehsb */
    case 3390:  /* *p iwmmxt_wunpckehsh */
    case 3391:  /* *p iwmmxt_wunpckehsw */
      return WTYPE_WUNPCKEH;

    case 512:  /* iwmmxt_wunpckilb */
    case 513:  /* iwmmxt_wunpckilh */
    case 514:  /* iwmmxt_wunpckilw */
    case 3383:  /* *p iwmmxt_wunpckilb */
    case 3384:  /* *p iwmmxt_wunpckilh */
    case 3385:  /* *p iwmmxt_wunpckilw */
      return WTYPE_WUNPCKIL;

    case 509:  /* iwmmxt_wunpckihb */
    case 510:  /* iwmmxt_wunpckihh */
    case 511:  /* iwmmxt_wunpckihw */
    case 3380:  /* *p iwmmxt_wunpckihb */
    case 3381:  /* *p iwmmxt_wunpckihh */
    case 3382:  /* *p iwmmxt_wunpckihw */
      return WTYPE_WUNPCKIH;

    case 503:  /* iwmmxt_wpackhss */
    case 504:  /* iwmmxt_wpackwss */
    case 505:  /* iwmmxt_wpackdss */
    case 506:  /* iwmmxt_wpackhus */
    case 507:  /* iwmmxt_wpackwus */
    case 508:  /* iwmmxt_wpackdus */
    case 3374:  /* *p iwmmxt_wpackhss */
    case 3375:  /* *p iwmmxt_wpackwss */
    case 3376:  /* *p iwmmxt_wpackdss */
    case 3377:  /* *p iwmmxt_wpackhus */
    case 3378:  /* *p iwmmxt_wpackwus */
    case 3379:  /* *p iwmmxt_wpackdus */
      return WTYPE_WPACK;

    case 497:  /* *sminv2si3_iwmmxt */
    case 498:  /* *sminv4hi3_iwmmxt */
    case 499:  /* *sminv8qi3_iwmmxt */
    case 500:  /* *uminv2si3_iwmmxt */
    case 501:  /* *uminv4hi3_iwmmxt */
    case 502:  /* *uminv8qi3_iwmmxt */
    case 3368:  /* *p *sminv2si3_iwmmxt */
    case 3369:  /* *p *sminv4hi3_iwmmxt */
    case 3370:  /* *p *sminv8qi3_iwmmxt */
    case 3371:  /* *p *uminv2si3_iwmmxt */
    case 3372:  /* *p *uminv4hi3_iwmmxt */
    case 3373:  /* *p *uminv8qi3_iwmmxt */
      return WTYPE_WMIN;

    case 491:  /* *smaxv2si3_iwmmxt */
    case 492:  /* *smaxv4hi3_iwmmxt */
    case 493:  /* *smaxv8qi3_iwmmxt */
    case 494:  /* *umaxv2si3_iwmmxt */
    case 495:  /* *umaxv4hi3_iwmmxt */
    case 496:  /* *umaxv8qi3_iwmmxt */
    case 3362:  /* *p *smaxv2si3_iwmmxt */
    case 3363:  /* *p *smaxv4hi3_iwmmxt */
    case 3364:  /* *p *smaxv8qi3_iwmmxt */
    case 3365:  /* *p *umaxv2si3_iwmmxt */
    case 3366:  /* *p *umaxv4hi3_iwmmxt */
    case 3367:  /* *p *umaxv8qi3_iwmmxt */
      return WTYPE_WMAX;

    case 485:  /* gtuv8qi3 */
    case 486:  /* gtuv4hi3 */
    case 487:  /* gtuv2si3 */
    case 488:  /* gtv8qi3 */
    case 489:  /* gtv4hi3 */
    case 490:  /* gtv2si3 */
    case 3356:  /* *p gtuv8qi3 */
    case 3357:  /* *p gtuv4hi3 */
    case 3358:  /* *p gtuv2si3 */
    case 3359:  /* *p gtv8qi3 */
    case 3360:  /* *p gtv4hi3 */
    case 3361:  /* *p gtv2si3 */
      return WTYPE_WCMPGT;

    case 482:  /* eqv8qi3 */
    case 483:  /* eqv4hi3 */
    case 484:  /* eqv2si3 */
    case 3353:  /* *p eqv8qi3 */
    case 3354:  /* *p eqv4hi3 */
    case 3355:  /* *p eqv2si3 */
      return WTYPE_WCMPEQ;

    case 481:  /* iwmmxt_wshufh */
    case 3352:  /* *p iwmmxt_wshufh */
      return WTYPE_WSHUFH;

    case 476:  /* iwmmxt_textrmub */
    case 477:  /* iwmmxt_textrmsb */
    case 478:  /* iwmmxt_textrmuh */
    case 479:  /* iwmmxt_textrmsh */
    case 480:  /* iwmmxt_textrmw */
    case 3347:  /* *p iwmmxt_textrmub */
    case 3348:  /* *p iwmmxt_textrmsb */
    case 3349:  /* *p iwmmxt_textrmuh */
    case 3350:  /* *p iwmmxt_textrmsh */
    case 3351:  /* *p iwmmxt_textrmw */
      return WTYPE_TEXTRM;

    case 473:  /* iwmmxt_tinsrb */
    case 474:  /* iwmmxt_tinsrh */
    case 475:  /* iwmmxt_tinsrw */
    case 3344:  /* *p iwmmxt_tinsrb */
    case 3345:  /* *p iwmmxt_tinsrh */
    case 3346:  /* *p iwmmxt_tinsrw */
      return WTYPE_TINSR;

    case 469:  /* iwmmxt_uavgrndv8qi3 */
    case 470:  /* iwmmxt_uavgrndv4hi3 */
    case 471:  /* iwmmxt_uavgv8qi3 */
    case 472:  /* iwmmxt_uavgv4hi3 */
    case 3340:  /* *p iwmmxt_uavgrndv8qi3 */
    case 3341:  /* *p iwmmxt_uavgrndv4hi3 */
    case 3342:  /* *p iwmmxt_uavgv8qi3 */
    case 3343:  /* *p iwmmxt_uavgv4hi3 */
      return WTYPE_WAVG2;

    case 461:  /* iwmmxt_wmacs */
    case 462:  /* iwmmxt_wmacsz */
    case 463:  /* iwmmxt_wmacu */
    case 464:  /* iwmmxt_wmacuz */
    case 3332:  /* *p iwmmxt_wmacs */
    case 3333:  /* *p iwmmxt_wmacsz */
    case 3334:  /* *p iwmmxt_wmacu */
    case 3335:  /* *p iwmmxt_wmacuz */
      return WTYPE_WMAC;

    case 458:  /* *mulv4hi3_iwmmxt */
    case 459:  /* smulv4hi3_highpart */
    case 460:  /* umulv4hi3_highpart */
    case 593:  /* iwmmxt_wmulsmr */
    case 594:  /* iwmmxt_wmulumr */
    case 595:  /* iwmmxt_wmulwsmr */
    case 3329:  /* *p *mulv4hi3_iwmmxt */
    case 3330:  /* *p smulv4hi3_highpart */
    case 3331:  /* *p umulv4hi3_highpart */
    case 3464:  /* *p iwmmxt_wmulsmr */
    case 3465:  /* *p iwmmxt_wmulumr */
    case 3466:  /* *p iwmmxt_wmulwsmr */
      return WTYPE_WMUL;

    case 449:  /* *subv2si3_iwmmxt */
    case 450:  /* *subv4hi3_iwmmxt */
    case 451:  /* *subv8qi3_iwmmxt */
    case 452:  /* sssubv8qi3 */
    case 453:  /* sssubv4hi3 */
    case 454:  /* sssubv2si3 */
    case 455:  /* ussubv8qi3 */
    case 456:  /* ussubv4hi3 */
    case 457:  /* ussubv2si3 */
    case 3320:  /* *p *subv2si3_iwmmxt */
    case 3321:  /* *p *subv4hi3_iwmmxt */
    case 3322:  /* *p *subv8qi3_iwmmxt */
    case 3323:  /* *p sssubv8qi3 */
    case 3324:  /* *p sssubv4hi3 */
    case 3325:  /* *p sssubv2si3 */
    case 3326:  /* *p ussubv8qi3 */
    case 3327:  /* *p ussubv4hi3 */
    case 3328:  /* *p ussubv2si3 */
      return WTYPE_WSUB;

    case 440:  /* *addv2si3_iwmmxt */
    case 441:  /* *addv4hi3_iwmmxt */
    case 442:  /* *addv8qi3_iwmmxt */
    case 443:  /* ssaddv8qi3 */
    case 444:  /* ssaddv4hi3 */
    case 445:  /* ssaddv2si3 */
    case 446:  /* usaddv8qi3 */
    case 447:  /* usaddv4hi3 */
    case 448:  /* usaddv2si3 */
    case 583:  /* addcv4hi3 */
    case 584:  /* addcv2si3 */
    case 3311:  /* *p *addv2si3_iwmmxt */
    case 3312:  /* *p *addv4hi3_iwmmxt */
    case 3313:  /* *p *addv8qi3_iwmmxt */
    case 3314:  /* *p ssaddv8qi3 */
    case 3315:  /* *p ssaddv4hi3 */
    case 3316:  /* *p ssaddv2si3 */
    case 3317:  /* *p usaddv8qi3 */
    case 3318:  /* *p usaddv4hi3 */
    case 3319:  /* *p usaddv2si3 */
    case 3454:  /* *p addcv4hi3 */
    case 3455:  /* *p addcv2si3 */
      return WTYPE_WADD;

    case 424:  /* iwmmxt_nanddi3 */
    case 3298:  /* *p iwmmxt_nanddi3 */
      return WTYPE_WANDN;

    case 431:  /* *andv2si3_iwmmxt */
    case 432:  /* *andv4hi3_iwmmxt */
    case 433:  /* *andv8qi3_iwmmxt */
    case 3302:  /* *p *andv2si3_iwmmxt */
    case 3303:  /* *p *andv4hi3_iwmmxt */
    case 3304:  /* *p *andv8qi3_iwmmxt */
      return WTYPE_WAND;

    case 437:  /* *xorv2si3_iwmmxt */
    case 438:  /* *xorv4hi3_iwmmxt */
    case 439:  /* *xorv8qi3_iwmmxt */
    case 465:  /* iwmmxt_clrdi */
    case 466:  /* iwmmxt_clrv8qi */
    case 467:  /* iwmmxt_clrv4hi */
    case 468:  /* iwmmxt_clrv2si */
    case 3308:  /* *p *xorv2si3_iwmmxt */
    case 3309:  /* *p *xorv4hi3_iwmmxt */
    case 3310:  /* *p *xorv8qi3_iwmmxt */
    case 3336:  /* *p iwmmxt_clrdi */
    case 3337:  /* *p iwmmxt_clrv8qi */
    case 3338:  /* *p iwmmxt_clrv4hi */
    case 3339:  /* *p iwmmxt_clrv2si */
      return WTYPE_WXOR;

    case 434:  /* *iorv2si3_iwmmxt */
    case 435:  /* *iorv4hi3_iwmmxt */
    case 436:  /* *iorv8qi3_iwmmxt */
    case 3305:  /* *p *iorv2si3_iwmmxt */
    case 3306:  /* *p *iorv4hi3_iwmmxt */
    case 3307:  /* *p *iorv8qi3_iwmmxt */
      return WTYPE_WOR;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return WTYPE_NONE;

    }
}

EXPORTED_CONST int length_unit_log = 0;
