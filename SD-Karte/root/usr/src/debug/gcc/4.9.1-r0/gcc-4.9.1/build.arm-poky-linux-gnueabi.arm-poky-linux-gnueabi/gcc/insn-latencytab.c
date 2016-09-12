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
insn_default_latency (rtx insn ATTRIBUTE_UNUSED)
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
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))))
        {
	  return 4;
        }
      else
        {
	  return 0;
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
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 1;
        }
      else
        {
	  return 0;
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
    case 3564:  /* *p iwmmxt_tmiatt */
    case 3563:  /* *p iwmmxt_tmiabt */
    case 3562:  /* *p iwmmxt_tmiatb */
    case 3561:  /* *p iwmmxt_tmiabb */
    case 3560:  /* *p iwmmxt_tmiaph */
    case 3559:  /* *p iwmmxt_tmia */
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
    case 580:  /* iwmmxt_tmiatt */
    case 579:  /* iwmmxt_tmiabt */
    case 578:  /* iwmmxt_tmiatb */
    case 577:  /* iwmmxt_tmiabb */
    case 576:  /* iwmmxt_tmiaph */
    case 575:  /* iwmmxt_tmia */
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
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3606:  /* *p iwmmxt_wqmulmr */
    case 3604:  /* *p iwmmxt_wqmulm */
    case 3601:  /* *p iwmmxt_wmulwsmr */
    case 3600:  /* *p iwmmxt_wmulumr */
    case 3599:  /* *p iwmmxt_wmulsmr */
    case 3580:  /* *p iwmmxt_wsadhz */
    case 3579:  /* *p iwmmxt_wsadbz */
    case 3578:  /* *p iwmmxt_wsadh */
    case 3577:  /* *p iwmmxt_wsadb */
    case 3466:  /* *p umulv4hi3_highpart */
    case 3465:  /* *p smulv4hi3_highpart */
    case 3464:  /* *p *mulv4hi3_iwmmxt */
    case 622:  /* iwmmxt_wqmulmr */
    case 620:  /* iwmmxt_wqmulm */
    case 617:  /* iwmmxt_wmulwsmr */
    case 616:  /* iwmmxt_wmulumr */
    case 615:  /* iwmmxt_wmulsmr */
    case 596:  /* iwmmxt_wsadhz */
    case 595:  /* iwmmxt_wsadbz */
    case 594:  /* iwmmxt_wsadh */
    case 593:  /* iwmmxt_wsadb */
    case 482:  /* umulv4hi3_highpart */
    case 481:  /* smulv4hi3_highpart */
    case 480:  /* *mulv4hi3_iwmmxt */
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
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3634:  /* *p iwmmxt_wmerge */
    case 3586:  /* *p iwmmxt_wabsdiffw */
    case 3585:  /* *p iwmmxt_wabsdiffh */
    case 3584:  /* *p iwmmxt_wabsdiffb */
    case 3583:  /* *p iwmmxt_wabsv8qi3 */
    case 3582:  /* *p iwmmxt_wabsv4hi3 */
    case 3581:  /* *p iwmmxt_wabsv2si3 */
    case 3576:  /* *p iwmmxt_walignr3 */
    case 3575:  /* *p iwmmxt_walignr2 */
    case 3574:  /* *p iwmmxt_walignr1 */
    case 3573:  /* *p iwmmxt_walignr0 */
    case 3572:  /* *p iwmmxt_walignr */
    case 3571:  /* *p iwmmxt_waligni */
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
    case 3481:  /* *p iwmmxt_tinsrw */
    case 3480:  /* *p iwmmxt_tinsrh */
    case 3479:  /* *p iwmmxt_tinsrb */
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
    case 3429:  /* *p tbcstv2si */
    case 3428:  /* *p tbcstv4hi */
    case 3427:  /* *p tbcstv8qi */
    case 650:  /* iwmmxt_wmerge */
    case 602:  /* iwmmxt_wabsdiffw */
    case 601:  /* iwmmxt_wabsdiffh */
    case 600:  /* iwmmxt_wabsdiffb */
    case 599:  /* iwmmxt_wabsv8qi3 */
    case 598:  /* iwmmxt_wabsv4hi3 */
    case 597:  /* iwmmxt_wabsv2si3 */
    case 592:  /* iwmmxt_walignr3 */
    case 591:  /* iwmmxt_walignr2 */
    case 590:  /* iwmmxt_walignr1 */
    case 589:  /* iwmmxt_walignr0 */
    case 588:  /* iwmmxt_walignr */
    case 587:  /* iwmmxt_waligni */
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
    case 497:  /* iwmmxt_tinsrw */
    case 496:  /* iwmmxt_tinsrh */
    case 495:  /* iwmmxt_tinsrb */
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
    case 442:  /* tbcstv2si */
    case 441:  /* tbcstv4hi */
    case 440:  /* tbcstv8qi */
      if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) || ((! (((((
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
(TUNE_CORTEXR5)))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 32 /* 0x20 */;
        }
      else if (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))
        {
	  return 2;
        }
      else
        {
	  return 0;
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
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 32 /* 0x20 */;
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
      extract_constrain_insn_cached (insn);
      if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c1 (insn) == WMMXT_ALU_C1_YES))
        {
	  return 1;
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
	  return 1;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 2;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WSTR))
        {
	  return 0;
        }
      else if (((
#line 56 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WLDR))
        {
	  return 5;
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
	  return 5;
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
	  return 7;
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
	  return 9;
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
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2)))
        {
	  return 3;
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
	  return 4;
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
	  return 5;
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
	  return 1;
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
	  return 3;
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
	  return 2;
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
	  return 2;
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
	  return 3;
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
	  return 4;
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
	  return 32 /* 0x20 */;
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
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 1;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 1;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 3;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 3;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
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
	  return 5;
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
	  return 5;
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
	  return 5;
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
	  return 6;
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
	  return 18 /* 0x12 */;
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
	  return 32 /* 0x20 */;
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
	  return 4;
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
	  return 5;
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
	  return 4;
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
	  return 1;
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
	  return 1;
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
	  return 1;
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
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 3;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))))
        {
	  return 5;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 5;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMUAD) || ((cached_type == TYPE_SMUADX) || ((cached_type == TYPE_SMLAD) || ((cached_type == TYPE_SMLADX) || ((cached_type == TYPE_SMUSD) || ((cached_type == TYPE_SMUSDX) || ((cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX)))))))))))))
        {
	  return 3;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD1))
        {
	  return 3;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX))))))))))))))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMULXY) || ((cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY)))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))))))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 1;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))))))))
        {
	  return 3;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 4;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 1;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))))))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM))))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_SMLAWX) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))))))))))))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ADR) || ((cached_type == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_EXTEND)))))))) || (((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG))) && (! (get_attr_length (insn) == 8)))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG)))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))))))))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MUL))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MLA))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMACD))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFMAD))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_is_neon_type = get_attr_is_neon_type (insn)) == IS_NEON_TYPE_YES) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_OTHER)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS))))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMMUL))))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMMLA) || ((cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))))))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_UMAAL) || (cached_type == TYPE_SMLALXY)))))))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD))))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || (cached_type == TYPE_LOAD_BYTE))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRC))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRRC))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD_BYTE) || ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD))))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || ((cached_type == TYPE_STORE2) || ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMULXY))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLAXY))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))))))))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_F_MCR) || ((cached_type == TYPE_F_MCRR) || ((cached_type == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRC))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRRC))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD2))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_C))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_D))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_E))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_F))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_G))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_H))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || ((cached_type == TYPE_F_MCRR) || ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CSEL) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD_ACQ))))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE_REL)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCSEL)))))))))))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || ((cached_type == TYPE_FMACD) || ((cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))))
        {
	  return 8;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESMC))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD2_2REG_Q))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG_Q))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_is_neon_type = get_attr_is_neon_type (insn)) == IS_NEON_TYPE_YES))
        {
	  return 4;
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
	  return 2;
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
	  return 2;
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
	  return 2;
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
	  return 2;
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
	  return 4;
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
	  return 3;
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
	  return 4;
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
	  return 3;
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
	  return 3;
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
	  return 4;
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
	  return 9;
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
	  return 10 /* 0xa */;
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
	  return 0;
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
	  return 32 /* 0x20 */;
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
	  return 3;
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
	  return 4;
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
	  return 0;
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
	  return 0;
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
	  return 2;
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
	  return 2;
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
	  return 3;
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
	  return 6;
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
	  return 17 /* 0x11 */;
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
	  return 2;
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
	  return 1;
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
	  return 2;
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
	  return 3;
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
	  return 20 /* 0x14 */;
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
	  return 10 /* 0xa */;
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
	  return 97 /* 0x61 */;
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
	  return 2;
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
	  return 2;
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
	  return 8;
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
	  return 8;
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
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))))))))) || (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (
#line 60 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 1;
        }
      else if (((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (! (
#line 60 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 3;
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
	  return 4;
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
	  return 8;
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
	  return 9;
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
	  return 19 /* 0x13 */;
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
	  return 33 /* 0x21 */;
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
	  return 4;
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
	  return 4;
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
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG))))))))))))))))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_REG) || ((cached_type == TYPE_ALUS_REG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG))))))))))))))))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 2;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 5;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 9;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FCMPD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))))))))))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 1;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG))))
        {
	  return 7;
        }
      else if ((((
#line 34 "/home/daniel/Schreibtisch/Zybo_Linux/Yocto/poky/build/tmp/work-shared/gcc-4.9.1-r0/gcc-4.9.1/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    }
}

