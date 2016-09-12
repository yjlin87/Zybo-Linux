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
internal_dfa_insn_code (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_wtype cached_wtype ATTRIBUTE_UNUSED;
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_core_cycles cached_core_cycles ATTRIBUTE_UNUSED;
  enum attr_insn cached_insn ATTRIBUTE_UNUSED;
  enum attr_neon_type cached_neon_type ATTRIBUTE_UNUSED;
  enum attr_mul64 cached_mul64 ATTRIBUTE_UNUSED;
  enum attr_conds cached_conds ATTRIBUTE_UNUSED;
  int cached_shift ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 3576:  /* *p rintdf2 */
    case 3575:  /* *p nearbyintdf2 */
    case 3574:  /* *p btruncdf2 */
    case 3573:  /* *p rintsf2 */
    case 3572:  /* *p nearbyintsf2 */
    case 3571:  /* *p btruncsf2 */
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
      if ((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 26 /* 0x1a */;
        }
      else
        {
	  return 595 /* 0x253 */;
        }

    case 321:  /* *epilogue_insns */
    case 261:  /* blockage */
      if ((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15))))
        {
	  return 416 /* 0x1a0 */;
        }
      else if (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))
        {
	  return 543 /* 0x21f */;
        }
      else
        {
	  return 595 /* 0x253 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c1 (insn) == WMMXT_ALU_C1_YES))
        {
	  return 0;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_pack (insn) == WMMXT_PACK_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_shift (insn) == WMMXT_SHIFT_YES))
        {
	  return 2;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 6;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 7;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 8;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 9;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_wtype = get_attr_wtype (insn)) == WTYPE_WSTR))
        {
	  return 10 /* 0xa */;
        }
      else if (((
#line 56 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_wtype = get_attr_wtype (insn)) == WTYPE_WLDR))
        {
	  return 11 /* 0xb */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 447 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)))
        {
	  return 12 /* 0xc */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 447 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2)))
        {
	  return 13 /* 0xd */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 447 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3)))
        {
	  return 14 /* 0xe */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 447 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4)))
        {
	  return 15 /* 0xf */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 447 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 447 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 447 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4)))
        {
	  return 18 /* 0x12 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 339 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)))
        {
	  return 19 /* 0x13 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 339 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)) && ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2)))))))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 339 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)) && (! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2))))))))))
        {
	  return 21 /* 0x15 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((! (((
#line 339 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD3) || ((cached_type == TYPE_LOAD4) || (cached_type == TYPE_STORE1))))))))
        {
	  return 22 /* 0x16 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 339 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_MULT)))
        {
	  return 23 /* 0x17 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 339 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM110)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1100)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1110))))))) && ((cached_type = get_attr_type (insn)) == TYPE_MULT))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 339 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM110)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1100)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1110)))))))) && ((cached_type = get_attr_type (insn)) == TYPE_MULT))))
        {
	  return 25 /* 0x19 */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && (((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_MULTI) && (! (((cached_type = get_attr_type (insn)) == TYPE_MULT) || ((cached_type == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD3) || ((cached_type == TYPE_LOAD4) || ((cached_type == TYPE_STORE1) || ((cached_type == TYPE_STORE2) || ((cached_type == TYPE_STORE3) || (cached_type == TYPE_STORE4)))))))))))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((! (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))) || (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_SINGLE))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || ((cached_type == TYPE_SIMPLE_ALU_IMM) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)))))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY) || ((cached_insn == INSN_MUL) || (cached_insn == INSN_MLA))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MULS) || (cached_insn == INSN_MLAS)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMULL) || (cached_insn == INSN_SMLAL)))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_UMULLS) || ((cached_insn == INSN_UMLALS) || ((cached_insn == INSN_SMULLS) || (cached_insn == INSN_SMLALS)))))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULXY) || ((cached_insn == INSN_SMLAXY) || (cached_insn == INSN_SMLAWX))))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 45 /* 0x2d */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 46 /* 0x2e */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)))
        {
	  return 47 /* 0x2f */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG))
        {
	  return 48 /* 0x30 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULXY) || (cached_insn == INSN_SMULWY)))
        {
	  return 49 /* 0x31 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLAXY) || ((cached_insn == INSN_SMLALXY) || (cached_insn == INSN_SMLAWX))))
        {
	  return 50 /* 0x32 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY) || ((cached_insn == INSN_MUL) || (cached_insn == INSN_MLA))))
        {
	  return 51 /* 0x33 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MULS) || (cached_insn == INSN_MLAS)))
        {
	  return 52 /* 0x34 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_insn = get_attr_insn (insn)) == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMULL) || (cached_insn == INSN_SMLAL)))))
        {
	  return 53 /* 0x35 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_insn = get_attr_insn (insn)) == INSN_UMULLS) || ((cached_insn == INSN_UMLALS) || ((cached_insn == INSN_SMULLS) || (cached_insn == INSN_SMLALS)))))
        {
	  return 54 /* 0x36 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 55 /* 0x37 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 56 /* 0x38 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 57 /* 0x39 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 58 /* 0x3a */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 60 /* 0x3c */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 61 /* 0x3d */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 62 /* 0x3e */;
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
	  return 63 /* 0x3f */;
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
	  return 64 /* 0x40 */;
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
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 65 /* 0x41 */;
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
	  return 66 /* 0x42 */;
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
	  return 67 /* 0x43 */;
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
	  return 68 /* 0x44 */;
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
	  return 69 /* 0x45 */;
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
	  return 70 /* 0x46 */;
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
	  return 71 /* 0x47 */;
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
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 72 /* 0x48 */;
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
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 73 /* 0x49 */;
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
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_2_R))
        {
	  return 74 /* 0x4a */;
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
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULXY) || (cached_insn == INSN_SMULWY)))
        {
	  return 79 /* 0x4f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLAXY) || ((cached_insn == INSN_SMLALXY) || (cached_insn == INSN_SMLAWX))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY) || ((cached_insn == INSN_MUL) || (cached_insn == INSN_MLA))))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MULS) || (cached_insn == INSN_MLAS)))
        {
	  return 82 /* 0x52 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMULL) || (cached_insn == INSN_SMLAL)))))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_insn = get_attr_insn (insn)) == INSN_UMULLS) || ((cached_insn == INSN_UMLALS) || ((cached_insn == INSN_SMULLS) || (cached_insn == INSN_SMLALS)))))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 87 /* 0x57 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 88 /* 0x58 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 92 /* 0x5c */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)))
        {
	  return 94 /* 0x5e */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG))
        {
	  return 95 /* 0x5f */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || (cached_insn == INSN_MLA)))
        {
	  return 96 /* 0x60 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MULS) || (cached_insn == INSN_MLAS)))
        {
	  return 97 /* 0x61 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULL) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_SMLAL) || (cached_insn == INSN_UMLAL)))))
        {
	  return 98 /* 0x62 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULLS) || ((cached_insn == INSN_UMULLS) || ((cached_insn == INSN_SMLALS) || (cached_insn == INSN_UMLALS)))))
        {
	  return 99 /* 0x63 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULXY) || ((cached_insn == INSN_SMLAXY) || ((cached_insn == INSN_SMULWY) || ((cached_insn == INSN_SMLAWY) || ((cached_insn == INSN_SMUAD) || ((cached_insn == INSN_SMUADX) || ((cached_insn == INSN_SMLAD) || ((cached_insn == INSN_SMLADX) || ((cached_insn == INSN_SMUSD) || ((cached_insn == INSN_SMUSDX) || ((cached_insn == INSN_SMLSD) || (cached_insn == INSN_SMLSDX)))))))))))))
        {
	  return 100 /* 0x64 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY))
        {
	  return 101 /* 0x65 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMMUL) || (cached_insn == INSN_SMMULR)))
        {
	  return 102 /* 0x66 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 103 /* 0x67 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 104 /* 0x68 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD1))
        {
	  return 105 /* 0x69 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 106 /* 0x6a */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 107 /* 0x6b */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 108 /* 0x6c */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 109 /* 0x6d */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 110 /* 0x6e */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 111 /* 0x6f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG))))
        {
	  return 113 /* 0x71 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY) || ((cached_insn == INSN_SMULXY) || (cached_insn == INSN_SMLAXY))))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || ((cached_insn == INSN_MLA) || ((cached_insn == INSN_MULS) || ((cached_insn == INSN_MLAS) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMULL) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_UMULLS) || ((cached_insn == INSN_UMLALS) || ((cached_insn == INSN_SMULLS) || ((cached_insn == INSN_SMLALS) || (cached_insn == INSN_SMLAWX))))))))))))))
        {
	  return 115 /* 0x73 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 116 /* 0x74 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 117 /* 0x75 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 118 /* 0x76 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 119 /* 0x77 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 120 /* 0x78 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 124 /* 0x7c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 125 /* 0x7d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || ((cached_type == TYPE_SIMPLE_ALU_IMM) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG))))))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY))
        {
	  return 127 /* 0x7f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLAXY) || ((cached_insn == INSN_SMULXY) || ((cached_insn == INSN_SMULWY) || (cached_insn == INSN_SMLAWY)))))
        {
	  return 128 /* 0x80 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || ((cached_insn == INSN_MLA) || ((cached_insn == INSN_MULS) || (cached_insn == INSN_MLAS)))))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_insn = get_attr_insn (insn)) == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMULL) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_UMULLS) || ((cached_insn == INSN_UMLALS) || ((cached_insn == INSN_SMULLS) || (cached_insn == INSN_SMLALS)))))))))
        {
	  return 130 /* 0x82 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 132 /* 0x84 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 134 /* 0x86 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 135 /* 0x87 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 136 /* 0x88 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 137 /* 0x89 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 138 /* 0x8a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 139 /* 0x8b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 140 /* 0x8c */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 141 /* 0x8d */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG))))
        {
	  return 142 /* 0x8e */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULWY) || ((cached_insn == INSN_SMLAWY) || ((cached_insn == INSN_SMULXY) || (cached_insn == INSN_SMLAXY)))))
        {
	  return 143 /* 0x8f */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || (cached_insn == INSN_MLA)))
        {
	  return 144 /* 0x90 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MULS) || ((cached_insn == INSN_MLAS) || ((cached_insn == INSN_SMULL) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMLALXY) || (cached_insn == INSN_SMLAWX)))))))))
        {
	  return 145 /* 0x91 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULLS) || ((cached_insn == INSN_SMLALS) || ((cached_insn == INSN_UMULLS) || (cached_insn == INSN_UMLALS)))))
        {
	  return 146 /* 0x92 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 147 /* 0x93 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 148 /* 0x94 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 149 /* 0x95 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 150 /* 0x96 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 151 /* 0x97 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 152 /* 0x98 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 153 /* 0x99 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 155 /* 0x9b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG))))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULWY) || ((cached_insn == INSN_SMLAWY) || ((cached_insn == INSN_SMULXY) || (cached_insn == INSN_SMLAXY)))))
        {
	  return 157 /* 0x9d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || (cached_insn == INSN_MLA)))
        {
	  return 158 /* 0x9e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MULS) || ((cached_insn == INSN_MLAS) || ((cached_insn == INSN_SMULL) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMLALXY) || (cached_insn == INSN_SMLAWX)))))))))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULLS) || ((cached_insn == INSN_SMLALS) || ((cached_insn == INSN_UMULLS) || (cached_insn == INSN_UMLALS)))))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 161 /* 0xa1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 164 /* 0xa4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 168 /* 0xa8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))
        {
	  return 169 /* 0xa9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 170 /* 0xaa */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 171 /* 0xab */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 172 /* 0xac */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLALXY) || ((cached_insn == INSN_MUL) || ((cached_insn == INSN_MLA) || ((cached_insn == INSN_MULS) || ((cached_insn == INSN_MLAS) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_SMULL) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_UMULLS) || ((cached_insn == INSN_UMLALS) || ((cached_insn == INSN_SMULLS) || ((cached_insn == INSN_SMLALS) || ((cached_insn == INSN_SMLAWX) || ((cached_insn == INSN_SMULXY) || (cached_insn == INSN_SMLAXY)))))))))))))))))
        {
	  return 173 /* 0xad */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 175 /* 0xaf */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 176 /* 0xb0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 180 /* 0xb4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 181 /* 0xb5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)))
        {
	  return 182 /* 0xb6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG))))
        {
	  return 183 /* 0xb7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_MULT))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 186 /* 0xba */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 187 /* 0xbb */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 188 /* 0xbc */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 189 /* 0xbd */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 190 /* 0xbe */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 193 /* 0xc1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FCPYS) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))))
        {
	  return 194 /* 0xc2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 195 /* 0xc3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 196 /* 0xc4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 197 /* 0xc5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 198 /* 0xc6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 199 /* 0xc7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 200 /* 0xc8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 201 /* 0xc9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_R_2_F))
        {
	  return 202 /* 0xca */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_2_R))
        {
	  return 203 /* 0xcb */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 204 /* 0xcc */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 205 /* 0xcd */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 206 /* 0xce */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 207 /* 0xcf */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 208 /* 0xd0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 209 /* 0xd1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_CALL) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 210 /* 0xd2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_IMM) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || (((cached_insn = get_attr_insn (insn)) == INSN_MOV) && (! (get_attr_length (insn) == 8))))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULT) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_insn = get_attr_insn (insn)) == INSN_UDIV) || (cached_insn == INSN_SDIV)))
        {
	  return 215 /* 0xd7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 218 /* 0xda */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 220 /* 0xdc */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE4) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 221 /* 0xdd */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD4) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 222 /* 0xde */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 223 /* 0xdf */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FCPYS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))))))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 224 /* 0xe0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 225 /* 0xe1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 226 /* 0xe2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG) || ((cached_neon_type == NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32) || ((cached_neon_type == NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_MUL_QQD_32_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMUL_DDD) || (cached_neon_type == NEON_TYPE_NEON_FP_VMUL_QQD))))))))
        {
	  return 227 /* 0xe3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 228 /* 0xe4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG) || ((cached_neon_type == NEON_TYPE_NEON_MLA_QQQ_8_16) || ((cached_neon_type == NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG) || ((cached_neon_type == NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMLA_DDD) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMLA_QQQ) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR) || (cached_neon_type == NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))))))))))
        {
	  return 229 /* 0xe5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULD) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 230 /* 0xe6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 231 /* 0xe7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFMAD) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 232 /* 0xe8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 233 /* 0xe9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 234 /* 0xea */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_R_2_F) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 235 /* 0xeb */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_2_R) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 236 /* 0xec */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_FLAG) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 237 /* 0xed */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 238 /* 0xee */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 239 /* 0xef */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 240 /* 0xf0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORED) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 241 /* 0xf1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (! (((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE) || ((cached_neon_type == NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG) || ((cached_neon_type == NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32) || ((cached_neon_type == NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG) || ((cached_neon_type == NEON_TYPE_NEON_MLA_QQQ_8_16) || ((cached_neon_type == NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG) || ((cached_neon_type == NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_MUL_QQD_32_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMUL_DDD) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMUL_QQD) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMLA_DDD) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMLA_QQQ) || ((cached_neon_type == NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR) || (cached_neon_type == NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR)))))))))))))))))))
        {
	  return 242 /* 0xf2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))) || ((cached_insn = get_attr_insn (insn)) == INSN_CLZ)))
        {
	  return 243 /* 0xf3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 244 /* 0xf4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 245 /* 0xf5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || ((cached_type == TYPE_SIMPLE_ALU_IMM) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT_REG))))) && (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN))))
        {
	  return 246 /* 0xf6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || ((cached_insn == INSN_SMULXY) || (cached_insn == INSN_SMMUL))))
        {
	  return 247 /* 0xf7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MLA) || ((cached_insn == INSN_SMLAXY) || ((cached_insn == INSN_SMLAWY) || ((cached_insn == INSN_SMMLA) || ((cached_insn == INSN_SMLAD) || (cached_insn == INSN_SMLSD)))))))
        {
	  return 248 /* 0xf8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULL) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_UMLAL) || ((cached_insn == INSN_UMAAL) || (cached_insn == INSN_SMLALXY)))))))
        {
	  return 249 /* 0xf9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULWY) || ((cached_insn == INSN_SMUAD) || (cached_insn == INSN_SMUSD))))
        {
	  return 250 /* 0xfa */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMLALD) || (cached_insn == INSN_SMLSLD)))
        {
	  return 251 /* 0xfb */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || (cached_type == TYPE_LOAD_BYTE))))
        {
	  return 252 /* 0xfc */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 253 /* 0xfd */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 254 /* 0xfe */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 255 /* 0xff */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 256 /* 0x100 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 257 /* 0x101 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))))
        {
	  return 258 /* 0x102 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 259 /* 0x103 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 260 /* 0x104 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 261 /* 0x105 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 262 /* 0x106 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 263 /* 0x107 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 264 /* 0x108 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCPYS) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))
        {
	  return 265 /* 0x109 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 266 /* 0x10a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MRC))
        {
	  return 267 /* 0x10b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MRRC))
        {
	  return 268 /* 0x10c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_1))
        {
	  return 269 /* 0x10d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_2))
        {
	  return 270 /* 0x10e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_3))
        {
	  return 271 /* 0x10f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_4))
        {
	  return 272 /* 0x110 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_5))
        {
	  return 273 /* 0x111 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 274 /* 0x112 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VMOV))
        {
	  return 275 /* 0x113 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA))
        {
	  return 276 /* 0x114 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 277 /* 0x115 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSMA))
        {
	  return 278 /* 0x116 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 279 /* 0x117 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 280 /* 0x118 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 281 /* 0x119 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 282 /* 0x11a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 283 /* 0x11b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 284 /* 0x11c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 285 /* 0x11d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 286 /* 0x11e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 287 /* 0x11f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 288 /* 0x120 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_1))
        {
	  return 289 /* 0x121 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_2))
        {
	  return 290 /* 0x122 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_3))
        {
	  return 291 /* 0x123 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSHL_DDD))
        {
	  return 292 /* 0x124 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 293 /* 0x125 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 294 /* 0x126 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 295 /* 0x127 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 296 /* 0x128 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VSUM))
        {
	  return 297 /* 0x129 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 298 /* 0x12a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 299 /* 0x12b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 300 /* 0x12c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 301 /* 0x12d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 302 /* 0x12e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 303 /* 0x12f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 304 /* 0x130 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 305 /* 0x131 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 306 /* 0x132 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 307 /* 0x133 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 308 /* 0x134 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_LDR))
        {
	  return 309 /* 0x135 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_STR))
        {
	  return 310 /* 0x136 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 311 /* 0x137 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 312 /* 0x138 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 313 /* 0x139 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 314 /* 0x13a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 315 /* 0x13b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 316 /* 0x13c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 317 /* 0x13d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 318 /* 0x13e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST3_VST4))
        {
	  return 319 /* 0x13f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 320 /* 0x140 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 321 /* 0x141 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 322 /* 0x142 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 323 /* 0x143 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 324 /* 0x144 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR))
        {
	  return 325 /* 0x145 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 326 /* 0x146 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)) || (((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT))) && ((cached_insn = get_attr_insn (insn)) == INSN_MOV)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE))))
        {
	  return 327 /* 0x147 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT))) && (! ((cached_insn = get_attr_insn (insn)) == INSN_MOV))))
        {
	  return 328 /* 0x148 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD_BYTE) || ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD))))))
        {
	  return 329 /* 0x149 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 330 /* 0x14a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || ((cached_type == TYPE_STORE2) || ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))))
        {
	  return 331 /* 0x14b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 332 /* 0x14c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_insn = get_attr_insn (insn)) == INSN_SMULXY))
        {
	  return 333 /* 0x14d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_insn = get_attr_insn (insn)) == INSN_SMLAXY))
        {
	  return 334 /* 0x14e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MUL) || ((cached_insn == INSN_SMMUL) || (cached_insn == INSN_SMMULR))))
        {
	  return 335 /* 0x14f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_insn = get_attr_insn (insn)) == INSN_MLA) || (cached_insn == INSN_SMMLA)))
        {
	  return 336 /* 0x150 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_insn = get_attr_insn (insn)) == INSN_SMULL) || ((cached_insn == INSN_UMULL) || ((cached_insn == INSN_SMULLS) || ((cached_insn == INSN_UMULLS) || ((cached_insn == INSN_SMLAL) || ((cached_insn == INSN_SMLALS) || ((cached_insn == INSN_UMLAL) || (cached_insn == INSN_UMLALS)))))))))
        {
	  return 337 /* 0x151 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 338 /* 0x152 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 339 /* 0x153 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCPYS) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_R_2_F) || ((cached_type == TYPE_F_2_R) || (cached_type == TYPE_F_FLAG)))))))))
        {
	  return 340 /* 0x154 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || (cached_type == TYPE_F_CVT))))
        {
	  return 341 /* 0x155 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 342 /* 0x156 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 343 /* 0x157 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 344 /* 0x158 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 345 /* 0x159 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 346 /* 0x15a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 347 /* 0x15b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 348 /* 0x15c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MRC))
        {
	  return 349 /* 0x15d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MRRC))
        {
	  return 350 /* 0x15e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_1))
        {
	  return 351 /* 0x15f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_2))
        {
	  return 352 /* 0x160 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_3))
        {
	  return 353 /* 0x161 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_4))
        {
	  return 354 /* 0x162 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_5))
        {
	  return 355 /* 0x163 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 356 /* 0x164 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VMOV))
        {
	  return 357 /* 0x165 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA))
        {
	  return 358 /* 0x166 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 359 /* 0x167 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSMA))
        {
	  return 360 /* 0x168 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 361 /* 0x169 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 362 /* 0x16a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 363 /* 0x16b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 364 /* 0x16c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 365 /* 0x16d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 366 /* 0x16e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 367 /* 0x16f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 368 /* 0x170 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 369 /* 0x171 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 370 /* 0x172 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_1))
        {
	  return 371 /* 0x173 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_2))
        {
	  return 372 /* 0x174 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_3))
        {
	  return 373 /* 0x175 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSHL_DDD))
        {
	  return 374 /* 0x176 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 375 /* 0x177 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 376 /* 0x178 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 377 /* 0x179 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 378 /* 0x17a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VSUM))
        {
	  return 379 /* 0x17b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 380 /* 0x17c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 381 /* 0x17d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 382 /* 0x17e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 383 /* 0x17f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 384 /* 0x180 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 385 /* 0x181 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 386 /* 0x182 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 387 /* 0x183 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 388 /* 0x184 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 389 /* 0x185 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 390 /* 0x186 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_LDR))
        {
	  return 391 /* 0x187 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_STR))
        {
	  return 392 /* 0x188 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 393 /* 0x189 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 394 /* 0x18a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 395 /* 0x18b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 396 /* 0x18c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 397 /* 0x18d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 398 /* 0x18e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 399 /* 0x18f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 400 /* 0x190 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST3_VST4))
        {
	  return 401 /* 0x191 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 402 /* 0x192 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 403 /* 0x193 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 404 /* 0x194 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 405 /* 0x195 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 406 /* 0x196 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR))
        {
	  return 407 /* 0x197 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 408 /* 0x198 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || (cached_type == TYPE_SIMPLE_ALU_IMM)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 409 /* 0x199 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_SHIFT) || (cached_type == TYPE_ALU_SHIFT)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 410 /* 0x19a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 411 /* 0x19b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULT) && (((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_NO))))
        {
	  return 412 /* 0x19c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULT) && (((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))
        {
	  return 413 /* 0x19d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_insn = get_attr_insn (insn)) == INSN_UDIV))
        {
	  return 414 /* 0x19e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_insn = get_attr_insn (insn)) == INSN_SDIV))
        {
	  return 415 /* 0x19f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_BLOCK) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 416 /* 0x1a0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 417 /* 0x1a1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD2))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 418 /* 0x1a2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 419 /* 0x1a3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 420 /* 0x1a4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 421 /* 0x1a5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_1))
        {
	  return 422 /* 0x1a6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_2))
        {
	  return 423 /* 0x1a7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_3))
        {
	  return 424 /* 0x1a8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_4))
        {
	  return 425 /* 0x1a9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_INT_5))
        {
	  return 426 /* 0x1aa */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 427 /* 0x1ab */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VMOV))
        {
	  return 428 /* 0x1ac */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA))
        {
	  return 429 /* 0x1ad */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 430 /* 0x1ae */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 431 /* 0x1af */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 432 /* 0x1b0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 433 /* 0x1b1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 434 /* 0x1b2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 435 /* 0x1b3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 436 /* 0x1b4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 437 /* 0x1b5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 438 /* 0x1b6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 439 /* 0x1b7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 440 /* 0x1b8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_1))
        {
	  return 441 /* 0x1b9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_2))
        {
	  return 442 /* 0x1ba */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_SHIFT_3))
        {
	  return 443 /* 0x1bb */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSHL_DDD))
        {
	  return 444 /* 0x1bc */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 445 /* 0x1bd */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 446 /* 0x1be */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 447 /* 0x1bf */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 448 /* 0x1c0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 449 /* 0x1c1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 450 /* 0x1c2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 451 /* 0x1c3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 452 /* 0x1c4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 453 /* 0x1c5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 454 /* 0x1c6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 455 /* 0x1c7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 456 /* 0x1c8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 457 /* 0x1c9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 458 /* 0x1ca */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 459 /* 0x1cb */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 460 /* 0x1cc */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 461 /* 0x1cd */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 462 /* 0x1ce */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 463 /* 0x1cf */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 464 /* 0x1d0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 465 /* 0x1d1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 466 /* 0x1d2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 467 /* 0x1d3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST3_VST4))
        {
	  return 468 /* 0x1d4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 469 /* 0x1d5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 470 /* 0x1d6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 471 /* 0x1d7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 472 /* 0x1d8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 473 /* 0x1d9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_LDM_2))
        {
	  return 474 /* 0x1da */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_STM_2))
        {
	  return 475 /* 0x1db */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR))
        {
	  return 476 /* 0x1dc */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 477 /* 0x1dd */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MRC))
        {
	  return 478 /* 0x1de */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NEON_MRRC))
        {
	  return 479 /* 0x1df */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 480 /* 0x1e0 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 481 /* 0x1e1 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 482 /* 0x1e2 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 483 /* 0x1e3 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 484 /* 0x1e4 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 485 /* 0x1e5 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 486 /* 0x1e6 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 487 /* 0x1e7 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 488 /* 0x1e8 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 489 /* 0x1e9 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 490 /* 0x1ea */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCPYS))
        {
	  return 491 /* 0x1eb */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 492 /* 0x1ec */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 493 /* 0x1ed */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 494 /* 0x1ee */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_CALL) && ((cached_neon_type = get_attr_neon_type (insn)) == NEON_TYPE_NONE)))
        {
	  return 495 /* 0x1ef */;
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
	  return 496 /* 0x1f0 */;
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
	  return 497 /* 0x1f1 */;
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
	  return 498 /* 0x1f2 */;
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
	  return 499 /* 0x1f3 */;
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
	  return 500 /* 0x1f4 */;
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
	  return 501 /* 0x1f5 */;
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
	  return 502 /* 0x1f6 */;
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
	  return 503 /* 0x1f7 */;
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
	  return 504 /* 0x1f8 */;
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
	  return 505 /* 0x1f9 */;
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
(TUNE_CORTEXR5))))))) && ((cached_insn = get_attr_insn (insn)) == INSN_UDIV))
        {
	  return 506 /* 0x1fa */;
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
(TUNE_CORTEXR5))))))) && ((cached_insn = get_attr_insn (insn)) == INSN_SDIV))
        {
	  return 507 /* 0x1fb */;
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
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 508 /* 0x1fc */;
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
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 509 /* 0x1fd */;
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
	  return 510 /* 0x1fe */;
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
	  return 511 /* 0x1ff */;
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
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 512 /* 0x200 */;
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
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 513 /* 0x201 */;
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
	  return 514 /* 0x202 */;
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
	  return 515 /* 0x203 */;
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
	  return 516 /* 0x204 */;
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
	  return 517 /* 0x205 */;
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
	  return 518 /* 0x206 */;
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
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 519 /* 0x207 */;
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
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 520 /* 0x208 */;
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
	  return 521 /* 0x209 */;
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
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_2_R))
        {
	  return 522 /* 0x20a */;
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
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 523 /* 0x20b */;
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
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FMULD)))
        {
	  return 524 /* 0x20c */;
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
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 525 /* 0x20d */;
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
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTD)))
        {
	  return 526 /* 0x20e */;
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
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 527 /* 0x20f */;
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
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 528 /* 0x210 */;
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
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_STORED)))
        {
	  return 529 /* 0x211 */;
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
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 530 /* 0x212 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || ((cached_type == TYPE_SIMPLE_ALU_IMM) || ((cached_type == TYPE_SIMPLE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_MULT)))))))
        {
	  return 531 /* 0x213 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 532 /* 0x214 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (
#line 47 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 533 /* 0x215 */;
        }
      else if (((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (! (
#line 47 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 534 /* 0x216 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 535 /* 0x217 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 536 /* 0x218 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 537 /* 0x219 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 538 /* 0x21a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 539 /* 0x21b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 540 /* 0x21c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 541 /* 0x21d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 542 /* 0x21e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 543 /* 0x21f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 544 /* 0x220 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCPYS) || (cached_type == TYPE_FCONSTS)))
        {
	  return 545 /* 0x221 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_2_R) || (cached_type == TYPE_R_2_F)))
        {
	  return 546 /* 0x222 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 547 /* 0x223 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 548 /* 0x224 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 549 /* 0x225 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 550 /* 0x226 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 551 /* 0x227 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 552 /* 0x228 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 553 /* 0x229 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 554 /* 0x22a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 555 /* 0x22b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 556 /* 0x22c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 557 /* 0x22d */;
        }
      else if ((((((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))))))))))) && ((! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FCPYS) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))
        {
	  return 558 /* 0x22e */;
        }
      else if ((((((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))))))))))) && ((! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))))))))
        {
	  return 559 /* 0x22f */;
        }
      else if ((((((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))))))))))) && ((! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULD) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD))))
        {
	  return 560 /* 0x230 */;
        }
      else if ((((((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))))))))))) && ((! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 561 /* 0x231 */;
        }
      else if ((((((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))))))))))) && ((! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 562 /* 0x232 */;
        }
      else if ((((((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))))))))))) && ((! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || ((cached_type == TYPE_F_LOADD) || (cached_type == TYPE_R_2_F))))
        {
	  return 563 /* 0x233 */;
        }
      else if ((((((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))))))))))) && ((! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || ((cached_type == TYPE_F_STORED) || (cached_type == TYPE_F_2_R))))
        {
	  return 564 /* 0x234 */;
        }
      else if ((((((
#line 85 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))))))))))) && ((! ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 565 /* 0x235 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_IMM) || (cached_type == TYPE_ALU_REG)) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 566 /* 0x236 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_IMM) || (cached_type == TYPE_ALU_REG)) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN)))))
        {
	  return 567 /* 0x237 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_IMM) || (cached_type == TYPE_ALU_REG)) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN))))))
        {
	  return 568 /* 0x238 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_SIMPLE_ALU_IMM) || (cached_type == TYPE_ALU_REG)) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (! (((cached_insn = get_attr_insn (insn)) == INSN_MOV) || (cached_insn == INSN_MVN))))))
        {
	  return 569 /* 0x239 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_SIMPLE_ALU_SHIFT))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 570 /* 0x23a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_SIMPLE_ALU_SHIFT))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 571 /* 0x23b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_SIMPLE_ALU_SHIFT)))))
        {
	  return 572 /* 0x23c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT) || ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_SIMPLE_ALU_SHIFT)))))
        {
	  return 573 /* 0x23d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_MULT))
        {
	  return 574 /* 0x23e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_insn = get_attr_insn (insn)) == INSN_UDIV) || (cached_insn == INSN_SDIV)))
        {
	  return 575 /* 0x23f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 576 /* 0x240 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 577 /* 0x241 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 578 /* 0x242 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 579 /* 0x243 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 580 /* 0x244 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 581 /* 0x245 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 582 /* 0x246 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 583 /* 0x247 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 584 /* 0x248 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 585 /* 0x249 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVS))
        {
	  return 586 /* 0x24a */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 587 /* 0x24b */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 588 /* 0x24c */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCPYS) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT)))))))))
        {
	  return 589 /* 0x24d */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 590 /* 0x24e */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 591 /* 0x24f */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_2_R) || (cached_type == TYPE_F_FLAG)))
        {
	  return 592 /* 0x250 */;
        }
      else if ((((
#line 5 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_R_2_F))
        {
	  return 593 /* 0x251 */;
        }
      else
        {
	  return 595 /* 0x253 */;
        }

    }
}

