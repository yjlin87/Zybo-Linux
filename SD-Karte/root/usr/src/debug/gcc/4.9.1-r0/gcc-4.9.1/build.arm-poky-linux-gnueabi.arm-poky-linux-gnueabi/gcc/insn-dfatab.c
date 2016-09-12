/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "tree.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
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
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mul32 cached_mul32 ATTRIBUTE_UNUSED;
  enum attr_mul64 cached_mul64 ATTRIBUTE_UNUSED;
  enum attr_core_cycles cached_core_cycles ATTRIBUTE_UNUSED;
  enum attr_cortex_a7_neon_type cached_cortex_a7_neon_type ATTRIBUTE_UNUSED;
  enum attr_is_neon_type cached_is_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a8_neon_type cached_cortex_a8_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a9_neon_type cached_cortex_a9_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a15_neon_type cached_cortex_a15_neon_type ATTRIBUTE_UNUSED;
  enum attr_conds cached_conds ATTRIBUTE_UNUSED;
  int cached_shift ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1911:  /* crypto_vmullp64 */
    case 925:  /* neon_vrintnv4sf */
    case 924:  /* neon_vrintav4sf */
    case 923:  /* neon_vrintxv4sf */
    case 922:  /* neon_vrintmv4sf */
    case 921:  /* neon_vrintzv4sf */
    case 920:  /* neon_vrintpv4sf */
    case 919:  /* neon_vrintnv2sf */
    case 918:  /* neon_vrintav2sf */
    case 917:  /* neon_vrintxv2sf */
    case 916:  /* neon_vrintmv2sf */
    case 915:  /* neon_vrintzv2sf */
    case 914:  /* neon_vrintpv2sf */
      if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))
        {
	  return 242 /* 0xf2 */;
        }
      else if (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))
        {
	  return 517 /* 0x205 */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3646:  /* *p iwmmxt_textrcv8qi3 */
    case 3645:  /* *p iwmmxt_textrcv4hi3 */
    case 3644:  /* *p iwmmxt_textrcv2si3 */
    case 3643:  /* *p iwmmxt_torvscv8qi3 */
    case 3642:  /* *p iwmmxt_torvscv4hi3 */
    case 3641:  /* *p iwmmxt_torvscv2si3 */
    case 3640:  /* *p iwmmxt_torcv8qi3 */
    case 3639:  /* *p iwmmxt_torcv4hi3 */
    case 3638:  /* *p iwmmxt_torcv2si3 */
    case 3637:  /* *p iwmmxt_tandcv8qi3 */
    case 3636:  /* *p iwmmxt_tandcv4hi3 */
    case 3635:  /* *p iwmmxt_tandcv2si3 */
    case 662:  /* iwmmxt_textrcv8qi3 */
    case 661:  /* iwmmxt_textrcv4hi3 */
    case 660:  /* iwmmxt_textrcv2si3 */
    case 659:  /* iwmmxt_torvscv8qi3 */
    case 658:  /* iwmmxt_torvscv4hi3 */
    case 657:  /* iwmmxt_torvscv2si3 */
    case 656:  /* iwmmxt_torcv8qi3 */
    case 655:  /* iwmmxt_torcv4hi3 */
    case 654:  /* iwmmxt_torcv2si3 */
    case 653:  /* iwmmxt_tandcv8qi3 */
    case 652:  /* iwmmxt_tandcv4hi3 */
    case 651:  /* iwmmxt_tandcv2si3 */
      if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3580:  /* *p iwmmxt_wsadhz */
    case 3579:  /* *p iwmmxt_wsadbz */
    case 3578:  /* *p iwmmxt_wsadh */
    case 3577:  /* *p iwmmxt_wsadb */
    case 596:  /* iwmmxt_wsadhz */
    case 595:  /* iwmmxt_wsadbz */
    case 594:  /* iwmmxt_wsadh */
    case 593:  /* iwmmxt_wsadb */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 6;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3564:  /* *p iwmmxt_tmiatt */
    case 3563:  /* *p iwmmxt_tmiabt */
    case 3562:  /* *p iwmmxt_tmiatb */
    case 3561:  /* *p iwmmxt_tmiabb */
    case 3560:  /* *p iwmmxt_tmiaph */
    case 3559:  /* *p iwmmxt_tmia */
    case 580:  /* iwmmxt_tmiatt */
    case 579:  /* iwmmxt_tmiabt */
    case 578:  /* iwmmxt_tmiatb */
    case 577:  /* iwmmxt_tmiabb */
    case 576:  /* iwmmxt_tmiaph */
    case 575:  /* iwmmxt_tmia */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 7;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3556:  /* *p ashldi3_di */
    case 3555:  /* *p ashlv2si3_di */
    case 3554:  /* *p ashlv4hi3_di */
    case 3553:  /* *p lshrdi3_di */
    case 3552:  /* *p lshrv2si3_di */
    case 3551:  /* *p lshrv4hi3_di */
    case 3550:  /* *p ashrdi3_di */
    case 3549:  /* *p ashrv2si3_di */
    case 3548:  /* *p ashrv4hi3_di */
    case 3547:  /* *p rordi3_di */
    case 3546:  /* *p rorv2si3_di */
    case 3545:  /* *p rorv4hi3_di */
    case 3544:  /* *p ashldi3_iwmmxt */
    case 3543:  /* *p ashlv2si3_iwmmxt */
    case 3542:  /* *p ashlv4hi3_iwmmxt */
    case 3541:  /* *p lshrdi3_iwmmxt */
    case 3540:  /* *p lshrv2si3_iwmmxt */
    case 3539:  /* *p lshrv4hi3_iwmmxt */
    case 3538:  /* *p ashrdi3_iwmmxt */
    case 3537:  /* *p ashrv2si3_iwmmxt */
    case 3536:  /* *p ashrv4hi3_iwmmxt */
    case 3535:  /* *p rordi3 */
    case 3534:  /* *p rorv2si3 */
    case 3533:  /* *p rorv4hi3 */
    case 572:  /* ashldi3_di */
    case 571:  /* ashlv2si3_di */
    case 570:  /* ashlv4hi3_di */
    case 569:  /* lshrdi3_di */
    case 568:  /* lshrv2si3_di */
    case 567:  /* lshrv4hi3_di */
    case 566:  /* ashrdi3_di */
    case 565:  /* ashrv2si3_di */
    case 564:  /* ashrv4hi3_di */
    case 563:  /* rordi3_di */
    case 562:  /* rorv2si3_di */
    case 561:  /* rorv4hi3_di */
    case 560:  /* ashldi3_iwmmxt */
    case 559:  /* ashlv2si3_iwmmxt */
    case 558:  /* ashlv4hi3_iwmmxt */
    case 557:  /* lshrdi3_iwmmxt */
    case 556:  /* lshrv2si3_iwmmxt */
    case 555:  /* lshrv4hi3_iwmmxt */
    case 554:  /* ashrdi3_iwmmxt */
    case 553:  /* ashrv2si3_iwmmxt */
    case 552:  /* ashrv4hi3_iwmmxt */
    case 551:  /* rordi3 */
    case 550:  /* rorv2si3 */
    case 549:  /* rorv4hi3 */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 2;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3634:  /* *p iwmmxt_wmerge */
    case 3576:  /* *p iwmmxt_walignr3 */
    case 3575:  /* *p iwmmxt_walignr2 */
    case 3574:  /* *p iwmmxt_walignr1 */
    case 3573:  /* *p iwmmxt_walignr0 */
    case 3572:  /* *p iwmmxt_walignr */
    case 3571:  /* *p iwmmxt_waligni */
    case 3532:  /* *p iwmmxt_wunpckelsw */
    case 3531:  /* *p iwmmxt_wunpckelsh */
    case 3530:  /* *p iwmmxt_wunpckelsb */
    case 3529:  /* *p iwmmxt_wunpckeluw */
    case 3528:  /* *p iwmmxt_wunpckeluh */
    case 3527:  /* *p iwmmxt_wunpckelub */
    case 3526:  /* *p iwmmxt_wunpckehsw */
    case 3525:  /* *p iwmmxt_wunpckehsh */
    case 3524:  /* *p iwmmxt_wunpckehsb */
    case 3523:  /* *p iwmmxt_wunpckehuw */
    case 3522:  /* *p iwmmxt_wunpckehuh */
    case 3521:  /* *p iwmmxt_wunpckehub */
    case 3520:  /* *p iwmmxt_wunpckilw */
    case 3519:  /* *p iwmmxt_wunpckilh */
    case 3518:  /* *p iwmmxt_wunpckilb */
    case 3517:  /* *p iwmmxt_wunpckihw */
    case 3516:  /* *p iwmmxt_wunpckihh */
    case 3515:  /* *p iwmmxt_wunpckihb */
    case 3514:  /* *p iwmmxt_wpackdus */
    case 3513:  /* *p iwmmxt_wpackwus */
    case 3512:  /* *p iwmmxt_wpackhus */
    case 3511:  /* *p iwmmxt_wpackdss */
    case 3510:  /* *p iwmmxt_wpackwss */
    case 3509:  /* *p iwmmxt_wpackhss */
    case 3487:  /* *p iwmmxt_wshufh */
    case 650:  /* iwmmxt_wmerge */
    case 592:  /* iwmmxt_walignr3 */
    case 591:  /* iwmmxt_walignr2 */
    case 590:  /* iwmmxt_walignr1 */
    case 589:  /* iwmmxt_walignr0 */
    case 588:  /* iwmmxt_walignr */
    case 587:  /* iwmmxt_waligni */
    case 548:  /* iwmmxt_wunpckelsw */
    case 547:  /* iwmmxt_wunpckelsh */
    case 546:  /* iwmmxt_wunpckelsb */
    case 545:  /* iwmmxt_wunpckeluw */
    case 544:  /* iwmmxt_wunpckeluh */
    case 543:  /* iwmmxt_wunpckelub */
    case 542:  /* iwmmxt_wunpckehsw */
    case 541:  /* iwmmxt_wunpckehsh */
    case 540:  /* iwmmxt_wunpckehsb */
    case 539:  /* iwmmxt_wunpckehuw */
    case 538:  /* iwmmxt_wunpckehuh */
    case 537:  /* iwmmxt_wunpckehub */
    case 536:  /* iwmmxt_wunpckilw */
    case 535:  /* iwmmxt_wunpckilh */
    case 534:  /* iwmmxt_wunpckilb */
    case 533:  /* iwmmxt_wunpckihw */
    case 532:  /* iwmmxt_wunpckihh */
    case 531:  /* iwmmxt_wunpckihb */
    case 530:  /* iwmmxt_wpackdus */
    case 529:  /* iwmmxt_wpackwus */
    case 528:  /* iwmmxt_wpackhus */
    case 527:  /* iwmmxt_wpackdss */
    case 526:  /* iwmmxt_wpackwss */
    case 525:  /* iwmmxt_wpackhss */
    case 503:  /* iwmmxt_wshufh */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 1;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3567:  /* *p iwmmxt_tmovmskw */
    case 3566:  /* *p iwmmxt_tmovmskh */
    case 3565:  /* *p iwmmxt_tmovmskb */
    case 3486:  /* *p iwmmxt_textrmw */
    case 3485:  /* *p iwmmxt_textrmsh */
    case 3484:  /* *p iwmmxt_textrmuh */
    case 3483:  /* *p iwmmxt_textrmsb */
    case 3482:  /* *p iwmmxt_textrmub */
    case 583:  /* iwmmxt_tmovmskw */
    case 582:  /* iwmmxt_tmovmskh */
    case 581:  /* iwmmxt_tmovmskb */
    case 502:  /* iwmmxt_textrmw */
    case 501:  /* iwmmxt_textrmsh */
    case 500:  /* iwmmxt_textrmuh */
    case 499:  /* iwmmxt_textrmsb */
    case 498:  /* iwmmxt_textrmub */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 4;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3633:  /* *p iwmmxt_wmiawttn */
    case 3632:  /* *p iwmmxt_wmiawtbn */
    case 3631:  /* *p iwmmxt_wmiawbtn */
    case 3630:  /* *p iwmmxt_wmiawbbn */
    case 3629:  /* *p iwmmxt_wmiawtt */
    case 3628:  /* *p iwmmxt_wmiawtb */
    case 3627:  /* *p iwmmxt_wmiawbt */
    case 3626:  /* *p iwmmxt_wmiawbb */
    case 3625:  /* *p iwmmxt_wmiattn */
    case 3624:  /* *p iwmmxt_wmiatbn */
    case 3623:  /* *p iwmmxt_wmiabtn */
    case 3622:  /* *p iwmmxt_wmiabbn */
    case 3621:  /* *p iwmmxt_wmiatt */
    case 3620:  /* *p iwmmxt_wmiatb */
    case 3619:  /* *p iwmmxt_wmiabt */
    case 3618:  /* *p iwmmxt_wmiabb */
    case 3617:  /* *p iwmmxt_wqmiattn */
    case 3616:  /* *p iwmmxt_wqmiatbn */
    case 3615:  /* *p iwmmxt_wqmiabtn */
    case 3614:  /* *p iwmmxt_wqmiabbn */
    case 3613:  /* *p iwmmxt_wqmiatt */
    case 3612:  /* *p iwmmxt_wqmiatb */
    case 3611:  /* *p iwmmxt_wqmiabt */
    case 3610:  /* *p iwmmxt_wqmiabb */
    case 3607:  /* *p iwmmxt_wqmulwmr */
    case 3605:  /* *p iwmmxt_wqmulwm */
    case 3603:  /* *p iwmmxt_wmulwl */
    case 3602:  /* *p iwmmxt_wmulwumr */
    case 3598:  /* *p iwmmxt_wmulwum */
    case 3597:  /* *p iwmmxt_wmulwsm */
    case 3596:  /* *p iwmmxt_wmaddun */
    case 3595:  /* *p iwmmxt_wmaddsn */
    case 3594:  /* *p iwmmxt_wmaddux */
    case 3593:  /* *p iwmmxt_wmaddsx */
    case 3558:  /* *p iwmmxt_wmaddu */
    case 3557:  /* *p iwmmxt_wmadds */
    case 3470:  /* *p iwmmxt_wmacuz */
    case 3469:  /* *p iwmmxt_wmacu */
    case 3468:  /* *p iwmmxt_wmacsz */
    case 3467:  /* *p iwmmxt_wmacs */
    case 649:  /* iwmmxt_wmiawttn */
    case 648:  /* iwmmxt_wmiawtbn */
    case 647:  /* iwmmxt_wmiawbtn */
    case 646:  /* iwmmxt_wmiawbbn */
    case 645:  /* iwmmxt_wmiawtt */
    case 644:  /* iwmmxt_wmiawtb */
    case 643:  /* iwmmxt_wmiawbt */
    case 642:  /* iwmmxt_wmiawbb */
    case 641:  /* iwmmxt_wmiattn */
    case 640:  /* iwmmxt_wmiatbn */
    case 639:  /* iwmmxt_wmiabtn */
    case 638:  /* iwmmxt_wmiabbn */
    case 637:  /* iwmmxt_wmiatt */
    case 636:  /* iwmmxt_wmiatb */
    case 635:  /* iwmmxt_wmiabt */
    case 634:  /* iwmmxt_wmiabb */
    case 633:  /* iwmmxt_wqmiattn */
    case 632:  /* iwmmxt_wqmiatbn */
    case 631:  /* iwmmxt_wqmiabtn */
    case 630:  /* iwmmxt_wqmiabbn */
    case 629:  /* iwmmxt_wqmiatt */
    case 628:  /* iwmmxt_wqmiatb */
    case 627:  /* iwmmxt_wqmiabt */
    case 626:  /* iwmmxt_wqmiabb */
    case 623:  /* iwmmxt_wqmulwmr */
    case 621:  /* iwmmxt_wqmulwm */
    case 619:  /* iwmmxt_wmulwl */
    case 618:  /* iwmmxt_wmulwumr */
    case 614:  /* iwmmxt_wmulwum */
    case 613:  /* iwmmxt_wmulwsm */
    case 612:  /* iwmmxt_wmaddun */
    case 611:  /* iwmmxt_wmaddsn */
    case 610:  /* iwmmxt_wmaddux */
    case 609:  /* iwmmxt_wmaddsx */
    case 574:  /* iwmmxt_wmaddu */
    case 573:  /* iwmmxt_wmadds */
    case 486:  /* iwmmxt_wmacuz */
    case 485:  /* iwmmxt_wmacu */
    case 484:  /* iwmmxt_wmacsz */
    case 483:  /* iwmmxt_wmacs */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 8;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3606:  /* *p iwmmxt_wqmulmr */
    case 3604:  /* *p iwmmxt_wqmulm */
    case 3601:  /* *p iwmmxt_wmulwsmr */
    case 3600:  /* *p iwmmxt_wmulumr */
    case 3599:  /* *p iwmmxt_wmulsmr */
    case 3466:  /* *p umulv4hi3_highpart */
    case 3465:  /* *p smulv4hi3_highpart */
    case 3464:  /* *p *mulv4hi3_iwmmxt */
    case 622:  /* iwmmxt_wqmulmr */
    case 620:  /* iwmmxt_wqmulm */
    case 617:  /* iwmmxt_wmulwsmr */
    case 616:  /* iwmmxt_wmulumr */
    case 615:  /* iwmmxt_wmulsmr */
    case 482:  /* umulv4hi3_highpart */
    case 481:  /* smulv4hi3_highpart */
    case 480:  /* *mulv4hi3_iwmmxt */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 9;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3609:  /* *p iwmmxt_waddbhusl */
    case 3608:  /* *p iwmmxt_waddbhusm */
    case 3592:  /* *p iwmmxt_avg4r */
    case 3591:  /* *p iwmmxt_avg4 */
    case 3590:  /* *p addcv2si3 */
    case 3589:  /* *p addcv4hi3 */
    case 3588:  /* *p iwmmxt_wsubaddhx */
    case 3587:  /* *p iwmmxt_waddsubhx */
    case 3570:  /* *p iwmmxt_waccw */
    case 3569:  /* *p iwmmxt_wacch */
    case 3568:  /* *p iwmmxt_waccb */
    case 3508:  /* *p *uminv8qi3_iwmmxt */
    case 3507:  /* *p *uminv4hi3_iwmmxt */
    case 3506:  /* *p *uminv2si3_iwmmxt */
    case 3505:  /* *p *sminv8qi3_iwmmxt */
    case 3504:  /* *p *sminv4hi3_iwmmxt */
    case 3503:  /* *p *sminv2si3_iwmmxt */
    case 3502:  /* *p *umaxv8qi3_iwmmxt */
    case 3501:  /* *p *umaxv4hi3_iwmmxt */
    case 3500:  /* *p *umaxv2si3_iwmmxt */
    case 3499:  /* *p *smaxv8qi3_iwmmxt */
    case 3498:  /* *p *smaxv4hi3_iwmmxt */
    case 3497:  /* *p *smaxv2si3_iwmmxt */
    case 3496:  /* *p gtv2si3 */
    case 3495:  /* *p gtv4hi3 */
    case 3494:  /* *p gtv8qi3 */
    case 3493:  /* *p gtuv2si3 */
    case 3492:  /* *p gtuv4hi3 */
    case 3491:  /* *p gtuv8qi3 */
    case 3490:  /* *p eqv2si3 */
    case 3489:  /* *p eqv4hi3 */
    case 3488:  /* *p eqv8qi3 */
    case 3478:  /* *p iwmmxt_uavgv4hi3 */
    case 3477:  /* *p iwmmxt_uavgv8qi3 */
    case 3476:  /* *p iwmmxt_uavgrndv4hi3 */
    case 3475:  /* *p iwmmxt_uavgrndv8qi3 */
    case 3463:  /* *p ussubv2si3 */
    case 3462:  /* *p ussubv4hi3 */
    case 3461:  /* *p ussubv8qi3 */
    case 3460:  /* *p sssubv2si3 */
    case 3459:  /* *p sssubv4hi3 */
    case 3458:  /* *p sssubv8qi3 */
    case 3457:  /* *p *subv8qi3_iwmmxt */
    case 3456:  /* *p *subv4hi3_iwmmxt */
    case 3455:  /* *p *subv2si3_iwmmxt */
    case 3454:  /* *p usaddv2si3 */
    case 3453:  /* *p usaddv4hi3 */
    case 3452:  /* *p usaddv8qi3 */
    case 3451:  /* *p ssaddv2si3 */
    case 3450:  /* *p ssaddv4hi3 */
    case 3449:  /* *p ssaddv8qi3 */
    case 3448:  /* *p *addv8qi3_iwmmxt */
    case 3447:  /* *p *addv4hi3_iwmmxt */
    case 3446:  /* *p *addv2si3_iwmmxt */
    case 625:  /* iwmmxt_waddbhusl */
    case 624:  /* iwmmxt_waddbhusm */
    case 608:  /* iwmmxt_avg4r */
    case 607:  /* iwmmxt_avg4 */
    case 606:  /* addcv2si3 */
    case 605:  /* addcv4hi3 */
    case 604:  /* iwmmxt_wsubaddhx */
    case 603:  /* iwmmxt_waddsubhx */
    case 586:  /* iwmmxt_waccw */
    case 585:  /* iwmmxt_wacch */
    case 584:  /* iwmmxt_waccb */
    case 524:  /* *uminv8qi3_iwmmxt */
    case 523:  /* *uminv4hi3_iwmmxt */
    case 522:  /* *uminv2si3_iwmmxt */
    case 521:  /* *sminv8qi3_iwmmxt */
    case 520:  /* *sminv4hi3_iwmmxt */
    case 519:  /* *sminv2si3_iwmmxt */
    case 518:  /* *umaxv8qi3_iwmmxt */
    case 517:  /* *umaxv4hi3_iwmmxt */
    case 516:  /* *umaxv2si3_iwmmxt */
    case 515:  /* *smaxv8qi3_iwmmxt */
    case 514:  /* *smaxv4hi3_iwmmxt */
    case 513:  /* *smaxv2si3_iwmmxt */
    case 512:  /* gtv2si3 */
    case 511:  /* gtv4hi3 */
    case 510:  /* gtv8qi3 */
    case 509:  /* gtuv2si3 */
    case 508:  /* gtuv4hi3 */
    case 507:  /* gtuv8qi3 */
    case 506:  /* eqv2si3 */
    case 505:  /* eqv4hi3 */
    case 504:  /* eqv8qi3 */
    case 494:  /* iwmmxt_uavgv4hi3 */
    case 493:  /* iwmmxt_uavgv8qi3 */
    case 492:  /* iwmmxt_uavgrndv4hi3 */
    case 491:  /* iwmmxt_uavgrndv8qi3 */
    case 479:  /* ussubv2si3 */
    case 478:  /* ussubv4hi3 */
    case 477:  /* ussubv8qi3 */
    case 476:  /* sssubv2si3 */
    case 475:  /* sssubv4hi3 */
    case 474:  /* sssubv8qi3 */
    case 473:  /* *subv8qi3_iwmmxt */
    case 472:  /* *subv4hi3_iwmmxt */
    case 471:  /* *subv2si3_iwmmxt */
    case 470:  /* usaddv2si3 */
    case 469:  /* usaddv4hi3 */
    case 468:  /* usaddv8qi3 */
    case 467:  /* ssaddv2si3 */
    case 466:  /* ssaddv4hi3 */
    case 465:  /* ssaddv8qi3 */
    case 464:  /* *addv8qi3_iwmmxt */
    case 463:  /* *addv4hi3_iwmmxt */
    case 462:  /* *addv2si3_iwmmxt */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 5;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3586:  /* *p iwmmxt_wabsdiffw */
    case 3585:  /* *p iwmmxt_wabsdiffh */
    case 3584:  /* *p iwmmxt_wabsdiffb */
    case 3583:  /* *p iwmmxt_wabsv8qi3 */
    case 3582:  /* *p iwmmxt_wabsv4hi3 */
    case 3581:  /* *p iwmmxt_wabsv2si3 */
    case 3474:  /* *p iwmmxt_clrv2si */
    case 3473:  /* *p iwmmxt_clrv4hi */
    case 3472:  /* *p iwmmxt_clrv8qi */
    case 3471:  /* *p iwmmxt_clrdi */
    case 3445:  /* *p *xorv8qi3_iwmmxt */
    case 3444:  /* *p *xorv4hi3_iwmmxt */
    case 3443:  /* *p *xorv2si3_iwmmxt */
    case 3442:  /* *p *iorv8qi3_iwmmxt */
    case 3441:  /* *p *iorv4hi3_iwmmxt */
    case 3440:  /* *p *iorv2si3_iwmmxt */
    case 3439:  /* *p *andv8qi3_iwmmxt */
    case 3438:  /* *p *andv4hi3_iwmmxt */
    case 3437:  /* *p *andv2si3_iwmmxt */
    case 3433:  /* *p iwmmxt_nanddi3 */
    case 602:  /* iwmmxt_wabsdiffw */
    case 601:  /* iwmmxt_wabsdiffh */
    case 600:  /* iwmmxt_wabsdiffb */
    case 599:  /* iwmmxt_wabsv8qi3 */
    case 598:  /* iwmmxt_wabsv4hi3 */
    case 597:  /* iwmmxt_wabsv2si3 */
    case 490:  /* iwmmxt_clrv2si */
    case 489:  /* iwmmxt_clrv4hi */
    case 488:  /* iwmmxt_clrv8qi */
    case 487:  /* iwmmxt_clrdi */
    case 461:  /* *xorv8qi3_iwmmxt */
    case 460:  /* *xorv4hi3_iwmmxt */
    case 459:  /* *xorv2si3_iwmmxt */
    case 458:  /* *iorv8qi3_iwmmxt */
    case 457:  /* *iorv4hi3_iwmmxt */
    case 456:  /* *iorv2si3_iwmmxt */
    case 455:  /* *andv8qi3_iwmmxt */
    case 454:  /* *andv4hi3_iwmmxt */
    case 453:  /* *andv2si3_iwmmxt */
    case 446:  /* iwmmxt_nanddi3 */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 0;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3481:  /* *p iwmmxt_tinsrw */
    case 3480:  /* *p iwmmxt_tinsrh */
    case 3479:  /* *p iwmmxt_tinsrb */
    case 3429:  /* *p tbcstv2si */
    case 3428:  /* *p tbcstv4hi */
    case 3427:  /* *p tbcstv8qi */
    case 497:  /* iwmmxt_tinsrw */
    case 496:  /* iwmmxt_tinsrh */
    case 495:  /* iwmmxt_tinsrb */
    case 442:  /* tbcstv2si */
    case 441:  /* tbcstv4hi */
    case 440:  /* tbcstv8qi */
      if ((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 3;
        }
      else if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3369:  /* *p rbitsi2 */
    case 3368:  /* *p clzsi2 */
    case 358:  /* rbitsi2 */
    case 357:  /* clzsi2 */
      if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))
        {
	  return 243 /* 0xf3 */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 342:  /* stack_tie */
    case 337:  /* *epilogue_insns */
    case 275:  /* blockage */
      if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15))))
        {
	  return 411 /* 0x19b */;
        }
      else if (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))
        {
	  return 565 /* 0x235 */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case 3751:  /* *p arm_store_release_exclusivesi */
    case 3750:  /* *p arm_store_release_exclusivehi */
    case 3749:  /* *p arm_store_release_exclusiveqi */
    case 3748:  /* *p arm_store_release_exclusivedi */
    case 3747:  /* *p arm_store_exclusivedi */
    case 3746:  /* *p arm_store_exclusivesi */
    case 3745:  /* *p arm_store_exclusivehi */
    case 3744:  /* *p arm_store_exclusiveqi */
    case 3743:  /* *p arm_load_acquire_exclusivedi */
    case 3742:  /* *p arm_load_exclusivedi */
    case 3741:  /* *p arm_load_acquire_exclusivesi */
    case 3740:  /* *p arm_load_exclusivesi */
    case 3739:  /* *p arm_load_acquire_exclusivehi */
    case 3738:  /* *p arm_load_acquire_exclusiveqi */
    case 3737:  /* *p arm_load_exclusivehi */
    case 3736:  /* *p arm_load_exclusiveqi */
    case 3735:  /* *p atomic_loaddi_1 */
    case 3712:  /* *p rintdf2 */
    case 3711:  /* *p nearbyintdf2 */
    case 3710:  /* *p btruncdf2 */
    case 3709:  /* *p rintsf2 */
    case 3708:  /* *p nearbyintsf2 */
    case 3707:  /* *p btruncsf2 */
    case 3426:  /* *p *load_multiple */
    case 2018:  /* arm_store_release_exclusivesi */
    case 2017:  /* arm_store_release_exclusivehi */
    case 2016:  /* arm_store_release_exclusiveqi */
    case 2015:  /* arm_store_release_exclusivedi */
    case 2014:  /* arm_store_exclusivedi */
    case 2013:  /* arm_store_exclusivesi */
    case 2012:  /* arm_store_exclusivehi */
    case 2011:  /* arm_store_exclusiveqi */
    case 2010:  /* arm_load_acquire_exclusivedi */
    case 2009:  /* arm_load_exclusivedi */
    case 2008:  /* arm_load_acquire_exclusivesi */
    case 2007:  /* arm_load_exclusivesi */
    case 2006:  /* arm_load_acquire_exclusivehi */
    case 2005:  /* arm_load_acquire_exclusiveqi */
    case 2004:  /* arm_load_exclusivehi */
    case 2003:  /* arm_load_exclusiveqi */
    case 2002:  /* atomic_nand_fetchdi */
    case 2001:  /* atomic_nand_fetchsi */
    case 2000:  /* atomic_nand_fetchhi */
    case 1999:  /* atomic_nand_fetchqi */
    case 1998:  /* atomic_and_fetchdi */
    case 1997:  /* atomic_xor_fetchdi */
    case 1996:  /* atomic_or_fetchdi */
    case 1995:  /* atomic_sub_fetchdi */
    case 1994:  /* atomic_add_fetchdi */
    case 1993:  /* atomic_and_fetchsi */
    case 1992:  /* atomic_xor_fetchsi */
    case 1991:  /* atomic_or_fetchsi */
    case 1990:  /* atomic_sub_fetchsi */
    case 1989:  /* atomic_add_fetchsi */
    case 1988:  /* atomic_and_fetchhi */
    case 1987:  /* atomic_xor_fetchhi */
    case 1986:  /* atomic_or_fetchhi */
    case 1985:  /* atomic_sub_fetchhi */
    case 1984:  /* atomic_add_fetchhi */
    case 1983:  /* atomic_and_fetchqi */
    case 1982:  /* atomic_xor_fetchqi */
    case 1981:  /* atomic_or_fetchqi */
    case 1980:  /* atomic_sub_fetchqi */
    case 1979:  /* atomic_add_fetchqi */
    case 1978:  /* atomic_fetch_nanddi */
    case 1977:  /* atomic_fetch_nandsi */
    case 1976:  /* atomic_fetch_nandhi */
    case 1975:  /* atomic_fetch_nandqi */
    case 1974:  /* atomic_fetch_anddi */
    case 1973:  /* atomic_fetch_xordi */
    case 1972:  /* atomic_fetch_ordi */
    case 1971:  /* atomic_fetch_subdi */
    case 1970:  /* atomic_fetch_adddi */
    case 1969:  /* atomic_fetch_andsi */
    case 1968:  /* atomic_fetch_xorsi */
    case 1967:  /* atomic_fetch_orsi */
    case 1966:  /* atomic_fetch_subsi */
    case 1965:  /* atomic_fetch_addsi */
    case 1964:  /* atomic_fetch_andhi */
    case 1963:  /* atomic_fetch_xorhi */
    case 1962:  /* atomic_fetch_orhi */
    case 1961:  /* atomic_fetch_subhi */
    case 1960:  /* atomic_fetch_addhi */
    case 1959:  /* atomic_fetch_andqi */
    case 1958:  /* atomic_fetch_xorqi */
    case 1957:  /* atomic_fetch_orqi */
    case 1956:  /* atomic_fetch_subqi */
    case 1955:  /* atomic_fetch_addqi */
    case 1954:  /* atomic_nanddi */
    case 1953:  /* atomic_nandsi */
    case 1952:  /* atomic_nandhi */
    case 1951:  /* atomic_nandqi */
    case 1950:  /* atomic_anddi */
    case 1949:  /* atomic_xordi */
    case 1948:  /* atomic_ordi */
    case 1947:  /* atomic_subdi */
    case 1946:  /* atomic_adddi */
    case 1945:  /* atomic_andsi */
    case 1944:  /* atomic_xorsi */
    case 1943:  /* atomic_orsi */
    case 1942:  /* atomic_subsi */
    case 1941:  /* atomic_addsi */
    case 1940:  /* atomic_andhi */
    case 1939:  /* atomic_xorhi */
    case 1938:  /* atomic_orhi */
    case 1937:  /* atomic_subhi */
    case 1936:  /* atomic_addhi */
    case 1935:  /* atomic_andqi */
    case 1934:  /* atomic_xorqi */
    case 1933:  /* atomic_orqi */
    case 1932:  /* atomic_subqi */
    case 1931:  /* atomic_addqi */
    case 1930:  /* atomic_exchangedi */
    case 1929:  /* atomic_exchangesi */
    case 1928:  /* atomic_exchangehi */
    case 1927:  /* atomic_exchangeqi */
    case 1926:  /* atomic_compare_and_swapdi_1 */
    case 1925:  /* atomic_compare_and_swapsi_1 */
    case 1924:  /* atomic_compare_and_swaphi_1 */
    case 1923:  /* atomic_compare_and_swapqi_1 */
    case 1922:  /* atomic_loaddi_1 */
    case 1921:  /* atomic_storesi */
    case 1920:  /* atomic_storehi */
    case 1919:  /* atomic_storeqi */
    case 1918:  /* atomic_loadsi */
    case 1917:  /* atomic_loadhi */
    case 1916:  /* atomic_loadqi */
    case 1915:  /* *memory_barrier */
    case 790:  /* thumb2_eh_return */
    case 751:  /* smindf3 */
    case 750:  /* sminsf3 */
    case 749:  /* smaxdf3 */
    case 748:  /* smaxsf3 */
    case 747:  /* rounddf2 */
    case 746:  /* rintdf2 */
    case 745:  /* nearbyintdf2 */
    case 744:  /* floordf2 */
    case 743:  /* ceildf2 */
    case 742:  /* btruncdf2 */
    case 741:  /* roundsf2 */
    case 740:  /* rintsf2 */
    case 739:  /* nearbyintsf2 */
    case 738:  /* floorsf2 */
    case 737:  /* ceilsf2 */
    case 736:  /* btruncsf2 */
    case 725:  /* *cmpdf_trap_split_vfp */
    case 724:  /* *cmpdf_split_vfp */
    case 723:  /* *cmpsf_trap_split_vfp */
    case 722:  /* *cmpsf_split_vfp */
    case 439:  /* *load_multiple */
    case 381:  /* crc32cw */
    case 380:  /* crc32ch */
    case 379:  /* crc32cb */
    case 378:  /* crc32w */
    case 377:  /* crc32h */
    case 376:  /* crc32b */
    case 361:  /* arm_eh_return */
    case 282:  /* trap */
    case 247:  /* *cmovdf */
    case 246:  /* *cmovsf */
    case 242:  /* *cstoresi_ne0_thumb1_insn */
      if ((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 26 /* 0x1a */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c1 (insn) == WMMXT_ALU_C1_YES))
        {
	  return 0;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_pack (insn) == WMMXT_PACK_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_shift (insn) == WMMXT_SHIFT_YES))
        {
	  return 2;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 6;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 7;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 8;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 9;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WSTR))
        {
	  return 10 /* 0xa */;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WLDR))
        {
	  return 11 /* 0xb */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 304 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)))
        {
	  return 12 /* 0xc */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 304 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2)))
        {
	  return 13 /* 0xd */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 304 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3)))
        {
	  return 14 /* 0xe */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 304 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4)))
        {
	  return 15 /* 0xf */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 304 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 304 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 304 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4)))
        {
	  return 18 /* 0x12 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 263 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)))
        {
	  return 19 /* 0x13 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 263 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)) && ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2)))))))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 263 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)) && (! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2))))))))))
        {
	  return 21 /* 0x15 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((! (((
#line 263 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD3) || ((cached_type == TYPE_LOAD4) || (cached_type == TYPE_STORE1))))))))
        {
	  return 22 /* 0x16 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 263 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_NO)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 263 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM110)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1100)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1110))))))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 263 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM110)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1100)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1110)))))))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))))
        {
	  return 25 /* 0x19 */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && (((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_MULTI) && ((! (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD3) || ((cached_type == TYPE_LOAD4) || ((cached_type == TYPE_STORE1) || ((cached_type == TYPE_STORE2) || ((cached_type == TYPE_STORE3) || (cached_type == TYPE_STORE4)))))))))) && (! (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((! (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))))))))))))) || (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_SINGLE))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))))))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 45 /* 0x2d */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 46 /* 0x2e */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 47 /* 0x2f */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 48 /* 0x30 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 49 /* 0x31 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 50 /* 0x32 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 51 /* 0x33 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 52 /* 0x34 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 53 /* 0x35 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 54 /* 0x36 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 55 /* 0x37 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 56 /* 0x38 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 57 /* 0x39 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 58 /* 0x3a */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 60 /* 0x3c */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 61 /* 0x3d */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 62 /* 0x3e */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))
        {
	  return 63 /* 0x3f */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 64 /* 0x40 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_CVTF2I))))
        {
	  return 65 /* 0x41 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || ((cached_type == TYPE_FMACS) || ((cached_type == TYPE_FFMAS) || ((cached_type == TYPE_FMULD) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))))))
        {
	  return 66 /* 0x42 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 67 /* 0x43 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 69 /* 0x45 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 70 /* 0x46 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 71 /* 0x47 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 72 /* 0x48 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 73 /* 0x49 */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 74 /* 0x4a */;
        }
      else if (((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 79 /* 0x4f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 82 /* 0x52 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 87 /* 0x57 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 88 /* 0x58 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 92 /* 0x5c */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 94 /* 0x5e */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 95 /* 0x5f */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 96 /* 0x60 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 97 /* 0x61 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))))
        {
	  return 98 /* 0x62 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 99 /* 0x63 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMUAD) || ((cached_type == TYPE_SMUADX) || ((cached_type == TYPE_SMLAD) || ((cached_type == TYPE_SMLADX) || ((cached_type == TYPE_SMUSD) || ((cached_type == TYPE_SMUSDX) || ((cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX)))))))))))))
        {
	  return 100 /* 0x64 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 101 /* 0x65 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 102 /* 0x66 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 103 /* 0x67 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 104 /* 0x68 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD1))
        {
	  return 105 /* 0x69 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 106 /* 0x6a */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 107 /* 0x6b */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 108 /* 0x6c */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 109 /* 0x6d */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 110 /* 0x6e */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 111 /* 0x6f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 113 /* 0x71 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY))))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX))))))))))))))
        {
	  return 115 /* 0x73 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 116 /* 0x74 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 117 /* 0x75 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 118 /* 0x76 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 119 /* 0x77 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 120 /* 0x78 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 124 /* 0x7c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 125 /* 0x7d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))))))))))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 127 /* 0x7f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMULXY) || ((cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY)))))
        {
	  return 128 /* 0x80 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))))))
        {
	  return 130 /* 0x82 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 132 /* 0x84 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 134 /* 0x86 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 135 /* 0x87 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 136 /* 0x88 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 137 /* 0x89 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 138 /* 0x8a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 139 /* 0x8b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 140 /* 0x8c */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 141 /* 0x8d */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 142 /* 0x8e */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))
        {
	  return 143 /* 0x8f */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 144 /* 0x90 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))))))))
        {
	  return 145 /* 0x91 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 146 /* 0x92 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 147 /* 0x93 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 148 /* 0x94 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 149 /* 0x95 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 150 /* 0x96 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 151 /* 0x97 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 152 /* 0x98 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 153 /* 0x99 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG))))))))))))))))))))))
        {
	  return 155 /* 0x9b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))
        {
	  return 157 /* 0x9d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 158 /* 0x9e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))))))))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 161 /* 0xa1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 164 /* 0xa4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 168 /* 0xa8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))
        {
	  return 169 /* 0xa9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))
        {
	  return 170 /* 0xaa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM))))))
        {
	  return 171 /* 0xab */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 172 /* 0xac */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_SMLAWX) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))))))))))))))
        {
	  return 173 /* 0xad */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 175 /* 0xaf */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 176 /* 0xb0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 180 /* 0xb4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 181 /* 0xb5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 182 /* 0xb6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 183 /* 0xb7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 186 /* 0xba */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 187 /* 0xbb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 188 /* 0xbc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 189 /* 0xbd */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 190 /* 0xbe */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 193 /* 0xc1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))))))
        {
	  return 194 /* 0xc2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 195 /* 0xc3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 196 /* 0xc4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 197 /* 0xc5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 198 /* 0xc6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 199 /* 0xc7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 200 /* 0xc8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 201 /* 0xc9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 202 /* 0xca */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 203 /* 0xcb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 204 /* 0xcc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 205 /* 0xcd */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 206 /* 0xce */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 207 /* 0xcf */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 208 /* 0xd0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 209 /* 0xd1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 210 /* 0xd2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ADR) || ((cached_type == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_EXTEND)))))))) || (((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG))) && (! (get_attr_length (insn) == 8)))))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG)))))))))))))))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 215 /* 0xd7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 218 /* 0xda */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 220 /* 0xdc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 221 /* 0xdd */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 222 /* 0xde */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 223 /* 0xdf */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))))))))))
        {
	  return 224 /* 0xe0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 225 /* 0xe1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 226 /* 0xe2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MUL))
        {
	  return 227 /* 0xe3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 228 /* 0xe4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MLA))
        {
	  return 229 /* 0xe5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 230 /* 0xe6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMACD))
        {
	  return 231 /* 0xe7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFMAD))
        {
	  return 232 /* 0xe8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 233 /* 0xe9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 234 /* 0xea */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 235 /* 0xeb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 236 /* 0xec */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 237 /* 0xed */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 238 /* 0xee */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 239 /* 0xef */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 240 /* 0xf0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 241 /* 0xf1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_is_neon_type = get_attr_is_neon_type (insn)) == IS_NEON_TYPE_YES) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_OTHER)))
        {
	  return 242 /* 0xf2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))
        {
	  return 243 /* 0xf3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND))))))
        {
	  return 244 /* 0xf4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 245 /* 0xf5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS))))))))))
        {
	  return 246 /* 0xf6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMMUL))))
        {
	  return 247 /* 0xf7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMMLA) || ((cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))))))
        {
	  return 248 /* 0xf8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_UMAAL) || (cached_type == TYPE_SMLALXY)))))))
        {
	  return 249 /* 0xf9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD))))
        {
	  return 250 /* 0xfa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 251 /* 0xfb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || (cached_type == TYPE_LOAD_BYTE))))
        {
	  return 252 /* 0xfc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 253 /* 0xfd */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 254 /* 0xfe */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 255 /* 0xff */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 256 /* 0x100 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 257 /* 0x101 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))))
        {
	  return 258 /* 0x102 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 259 /* 0x103 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 260 /* 0x104 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 261 /* 0x105 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 262 /* 0x106 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 263 /* 0x107 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 264 /* 0x108 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))
        {
	  return 265 /* 0x109 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 266 /* 0x10a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRC))
        {
	  return 267 /* 0x10b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRRC))
        {
	  return 268 /* 0x10c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_1))
        {
	  return 269 /* 0x10d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_2))
        {
	  return 270 /* 0x10e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_3))
        {
	  return 271 /* 0x10f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_4))
        {
	  return 272 /* 0x110 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_5))
        {
	  return 273 /* 0x111 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 274 /* 0x112 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VMOV))
        {
	  return 275 /* 0x113 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA))
        {
	  return 276 /* 0x114 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 277 /* 0x115 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 278 /* 0x116 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 279 /* 0x117 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 280 /* 0x118 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 281 /* 0x119 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 282 /* 0x11a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 283 /* 0x11b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 284 /* 0x11c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 285 /* 0x11d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 286 /* 0x11e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 287 /* 0x11f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 288 /* 0x120 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 289 /* 0x121 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 290 /* 0x122 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 291 /* 0x123 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 292 /* 0x124 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 293 /* 0x125 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 294 /* 0x126 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 295 /* 0x127 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 296 /* 0x128 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 297 /* 0x129 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 298 /* 0x12a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 299 /* 0x12b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 300 /* 0x12c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 301 /* 0x12d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 302 /* 0x12e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 303 /* 0x12f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q)))
        {
	  return 304 /* 0x130 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 305 /* 0x131 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 306 /* 0x132 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 307 /* 0x133 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_LDR))
        {
	  return 308 /* 0x134 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_STR))
        {
	  return 309 /* 0x135 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 310 /* 0x136 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 311 /* 0x137 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 312 /* 0x138 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 313 /* 0x139 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 314 /* 0x13a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 315 /* 0x13b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 316 /* 0x13c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 317 /* 0x13d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 318 /* 0x13e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 319 /* 0x13f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 320 /* 0x140 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 321 /* 0x141 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR))
        {
	  return 322 /* 0x142 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 323 /* 0x143 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))
        {
	  return 324 /* 0x144 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))
        {
	  return 325 /* 0x145 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD_BYTE) || ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD))))))
        {
	  return 326 /* 0x146 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 327 /* 0x147 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || ((cached_type == TYPE_STORE2) || ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))))
        {
	  return 328 /* 0x148 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 329 /* 0x149 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMULXY))
        {
	  return 330 /* 0x14a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLAXY))
        {
	  return 331 /* 0x14b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR))))
        {
	  return 332 /* 0x14c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 333 /* 0x14d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))))))))
        {
	  return 334 /* 0x14e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 335 /* 0x14f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 336 /* 0x150 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_F_MCR) || ((cached_type == TYPE_F_MCRR) || ((cached_type == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))))))))))
        {
	  return 337 /* 0x151 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))))
        {
	  return 338 /* 0x152 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 339 /* 0x153 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 340 /* 0x154 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 341 /* 0x155 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 342 /* 0x156 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 343 /* 0x157 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 344 /* 0x158 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 345 /* 0x159 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRC))
        {
	  return 346 /* 0x15a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRRC))
        {
	  return 347 /* 0x15b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_1))
        {
	  return 348 /* 0x15c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_2))
        {
	  return 349 /* 0x15d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_3))
        {
	  return 350 /* 0x15e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_4))
        {
	  return 351 /* 0x15f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_5))
        {
	  return 352 /* 0x160 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 353 /* 0x161 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VMOV))
        {
	  return 354 /* 0x162 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA))
        {
	  return 355 /* 0x163 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 356 /* 0x164 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 357 /* 0x165 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 358 /* 0x166 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 359 /* 0x167 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 360 /* 0x168 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 361 /* 0x169 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 362 /* 0x16a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 363 /* 0x16b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 364 /* 0x16c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 365 /* 0x16d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 366 /* 0x16e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 367 /* 0x16f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 368 /* 0x170 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 369 /* 0x171 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 370 /* 0x172 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 371 /* 0x173 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 372 /* 0x174 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 373 /* 0x175 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 374 /* 0x176 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 375 /* 0x177 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 376 /* 0x178 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 377 /* 0x179 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 378 /* 0x17a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 379 /* 0x17b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 380 /* 0x17c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 381 /* 0x17d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 382 /* 0x17e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 383 /* 0x17f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 384 /* 0x180 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 385 /* 0x181 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 386 /* 0x182 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_LDR))
        {
	  return 387 /* 0x183 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_STR))
        {
	  return 388 /* 0x184 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 389 /* 0x185 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 390 /* 0x186 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 391 /* 0x187 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 392 /* 0x188 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 393 /* 0x189 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 394 /* 0x18a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 395 /* 0x18b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 396 /* 0x18c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 397 /* 0x18d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 398 /* 0x18e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 399 /* 0x18f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 400 /* 0x190 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 401 /* 0x191 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR))
        {
	  return 402 /* 0x192 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 403 /* 0x193 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 404 /* 0x194 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 405 /* 0x195 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 406 /* 0x196 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 407 /* 0x197 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 408 /* 0x198 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 409 /* 0x199 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 410 /* 0x19a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 411 /* 0x19b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 412 /* 0x19c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD2))))
        {
	  return 413 /* 0x19d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 414 /* 0x19e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 415 /* 0x19f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 416 /* 0x1a0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD))
        {
	  return 417 /* 0x1a1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD_Q))
        {
	  return 418 /* 0x1a2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 419 /* 0x1a3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 420 /* 0x1a4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 421 /* 0x1a5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 422 /* 0x1a6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 423 /* 0x1a7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 424 /* 0x1a8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA))
        {
	  return 425 /* 0x1a9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA_Q))
        {
	  return 426 /* 0x1aa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 427 /* 0x1ab */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 428 /* 0x1ac */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 429 /* 0x1ad */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 430 /* 0x1ae */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 431 /* 0x1af */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 432 /* 0x1b0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 433 /* 0x1b1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 434 /* 0x1b2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 435 /* 0x1b3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 436 /* 0x1b4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 437 /* 0x1b5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 438 /* 0x1b6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 439 /* 0x1b7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 440 /* 0x1b8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL))
        {
	  return 441 /* 0x1b9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 442 /* 0x1ba */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA))
        {
	  return 443 /* 0x1bb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 444 /* 0x1bc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 445 /* 0x1bd */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 446 /* 0x1be */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS))
        {
	  return 447 /* 0x1bf */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 448 /* 0x1c0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP))
        {
	  return 449 /* 0x1c1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 450 /* 0x1c2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 451 /* 0x1c3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 452 /* 0x1c4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TO_GP))
        {
	  return 453 /* 0x1c5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_A))
        {
	  return 454 /* 0x1c6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_B))
        {
	  return 455 /* 0x1c7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_C))
        {
	  return 456 /* 0x1c8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_D))
        {
	  return 457 /* 0x1c9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_E))
        {
	  return 458 /* 0x1ca */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_F))
        {
	  return 459 /* 0x1cb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_A))
        {
	  return 460 /* 0x1cc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_B))
        {
	  return 461 /* 0x1cd */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_C))
        {
	  return 462 /* 0x1ce */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_D))
        {
	  return 463 /* 0x1cf */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_E))
        {
	  return 464 /* 0x1d0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_F))
        {
	  return 465 /* 0x1d1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_G))
        {
	  return 466 /* 0x1d2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_H))
        {
	  return 467 /* 0x1d3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 468 /* 0x1d4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 469 /* 0x1d5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 470 /* 0x1d6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 471 /* 0x1d7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 472 /* 0x1d8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 473 /* 0x1d9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 474 /* 0x1da */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 475 /* 0x1db */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 476 /* 0x1dc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 477 /* 0x1dd */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 478 /* 0x1de */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 479 /* 0x1df */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || ((cached_type == TYPE_F_MCRR) || ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))))
        {
	  return 480 /* 0x1e0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 481 /* 0x1e1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 482 /* 0x1e2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 483 /* 0x1e3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 484 /* 0x1e4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CSEL) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))
        {
	  return 485 /* 0x1e5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 486 /* 0x1e6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 487 /* 0x1e7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 488 /* 0x1e8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 489 /* 0x1e9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD_ACQ))))
        {
	  return 490 /* 0x1ea */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE_REL)))
        {
	  return 491 /* 0x1eb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 492 /* 0x1ec */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 493 /* 0x1ed */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 494 /* 0x1ee */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 495 /* 0x1ef */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 496 /* 0x1f0 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCSEL)))))))))))))
        {
	  return 497 /* 0x1f1 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 498 /* 0x1f2 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 499 /* 0x1f3 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || ((cached_type == TYPE_FMACD) || ((cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))))
        {
	  return 500 /* 0x1f4 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 501 /* 0x1f5 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 502 /* 0x1f6 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE))
        {
	  return 503 /* 0x1f7 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESMC))
        {
	  return 504 /* 0x1f8 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 505 /* 0x1f9 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 506 /* 0x1fa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 507 /* 0x1fb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 508 /* 0x1fc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 509 /* 0x1fd */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 510 /* 0x1fe */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 511 /* 0x1ff */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 512 /* 0x200 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD2_2REG_Q))
        {
	  return 513 /* 0x201 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG_Q))
        {
	  return 514 /* 0x202 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 515 /* 0x203 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 516 /* 0x204 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_is_neon_type = get_attr_is_neon_type (insn)) == IS_NEON_TYPE_YES))
        {
	  return 517 /* 0x205 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG))))))))))))))))))))
        {
	  return 518 /* 0x206 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG)))
        {
	  return 519 /* 0x207 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 520 /* 0x208 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))
        {
	  return 521 /* 0x209 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMMUL)))
        {
	  return 522 /* 0x20a */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMULWY) || ((cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))))
        {
	  return 523 /* 0x20b */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 524 /* 0x20c */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))))
        {
	  return 525 /* 0x20d */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 526 /* 0x20e */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL)))))
        {
	  return 527 /* 0x20f */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 528 /* 0x210 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 529 /* 0x211 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 530 /* 0x212 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 531 /* 0x213 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD2)))
        {
	  return 532 /* 0x214 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 533 /* 0x215 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 534 /* 0x216 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 535 /* 0x217 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 536 /* 0x218 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCMPS))))
        {
	  return 537 /* 0x219 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FMULS)))
        {
	  return 538 /* 0x21a */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 539 /* 0x21b */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 540 /* 0x21c */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 541 /* 0x21d */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 542 /* 0x21e */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 543 /* 0x21f */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 544 /* 0x220 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 545 /* 0x221 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FMULD)))
        {
	  return 546 /* 0x222 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 547 /* 0x223 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTD)))
        {
	  return 548 /* 0x224 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 549 /* 0x225 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 550 /* 0x226 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_STORED)))
        {
	  return 551 /* 0x227 */;
        }
      else if ((((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 552 /* 0x228 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))))))))) || (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))
        {
	  return 553 /* 0x229 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 554 /* 0x22a */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (
#line 60 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 555 /* 0x22b */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (! (
#line 60 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 556 /* 0x22c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 557 /* 0x22d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 558 /* 0x22e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 559 /* 0x22f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 560 /* 0x230 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 561 /* 0x231 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 562 /* 0x232 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 563 /* 0x233 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 564 /* 0x234 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 565 /* 0x235 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 566 /* 0x236 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS)))
        {
	  return 567 /* 0x237 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))))
        {
	  return 568 /* 0x238 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 569 /* 0x239 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 570 /* 0x23a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 571 /* 0x23b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 572 /* 0x23c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 573 /* 0x23d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 574 /* 0x23e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 575 /* 0x23f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 576 /* 0x240 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 577 /* 0x241 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 578 /* 0x242 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 579 /* 0x243 */;
        }
      else if ((((((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))) && ((! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))
        {
	  return 580 /* 0x244 */;
        }
      else if ((((((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))) && ((! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))))))))))
        {
	  return 581 /* 0x245 */;
        }
      else if ((((((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))) && ((! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULD) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD))))
        {
	  return 582 /* 0x246 */;
        }
      else if ((((((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))) && ((! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 583 /* 0x247 */;
        }
      else if ((((((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))) && ((! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 584 /* 0x248 */;
        }
      else if ((((((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))) && ((! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || ((cached_type == TYPE_F_LOADD) || ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))))
        {
	  return 585 /* 0x249 */;
        }
      else if ((((((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))) && ((! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || ((cached_type == TYPE_F_STORED) || ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))))
        {
	  return 586 /* 0x24a */;
        }
      else if ((((((
#line 116 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))))))))))) && ((! ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 587 /* 0x24b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET))))
        {
	  return 588 /* 0x24c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 589 /* 0x24d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG))))))))))))))))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET))))
        {
	  return 590 /* 0x24e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG))))))))))))))))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 591 /* 0x24f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 592 /* 0x250 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 593 /* 0x251 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))
        {
	  return 594 /* 0x252 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))
        {
	  return 595 /* 0x253 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 596 /* 0x254 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 597 /* 0x255 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 598 /* 0x256 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 599 /* 0x257 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 600 /* 0x258 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 601 /* 0x259 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 602 /* 0x25a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 603 /* 0x25b */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 604 /* 0x25c */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 605 /* 0x25d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 606 /* 0x25e */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 607 /* 0x25f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 608 /* 0x260 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 609 /* 0x261 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 610 /* 0x262 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FCMPD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))))))))))
        {
	  return 611 /* 0x263 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 612 /* 0x264 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 613 /* 0x265 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG))))
        {
	  return 614 /* 0x266 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 615 /* 0x267 */;
        }
      else
        {
	  return 617 /* 0x269 */;
        }

    }
}

