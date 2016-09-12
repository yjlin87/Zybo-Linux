/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_5[] = {
  "add%?\t%0, %0, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "addw%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "#",
};

static const char *
output_6 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 742 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

   static const char * const asms[] = 
   {
     "add\t%0, %0, %2",
     "sub\t%0, %0, #%n2",
     "add\t%0, %1, %2",
     "add\t%0, %0, %2",
     "add\t%0, %0, %2",
     "add\t%0, %1, %2",
     "add\t%0, %1, %2",
     "#",
     "#",
     "#"
   };
   if ((which_alternative == 2 || which_alternative == 6)
       && CONST_INT_P (operands[2])
       && INTVAL (operands[2]) < 0)
     return "sub\t%0, %1, #%n2";
   return asms[which_alternative];
  
}

static const char * const output_7[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
  "add%.\t%0, %1, %2",
};

static const char * const output_8[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_10[] = {
  "add%.\t%0, %1, %3",
  "sub%.\t%0, %1, #%n3",
};

static const char * const output_11[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
  "add%.\t%0, %1, %2",
};

static const char * const output_12[] = {
  "add%.\t%0, %1, %2",
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
};

static const char * const output_13[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_14[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_15[] = {
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_16[] = {
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_17[] = {
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_18[] = {
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_23[] = {
  "add%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\tadd%d2\t%0, %1, #1",
};

static const char * const output_32[] = {
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_33[] = {
  "sub%.\t%0, %1, %2",
  "sub%.\t%0, %1, %2",
  "rsb%.\t%0, %2, %1",
};

static const char * const output_34[] = {
  "sub%.\t%0, %1, %2",
  "sub%.\t%0, %1, %2",
  "rsb%.\t%0, %2, %1",
};

static const char * const output_35[] = {
  "sub%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\tsub%d2\t%0, %1, #1",
};

static const char *
output_38 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1353 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  if (which_alternative < 2)
    return "mov\t%0, %1\n\tmul\t%0, %2";
  else
    return "mul\t%0, %2";
  
}

static const char * const output_39[] = {
  "mul\t%0, %2",
  "mul\t%0, %1",
  "mul\t%0, %1",
};

static const char * const output_76[] = {
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "and%?\t%0, %1, %2",
  "#",
};

static const char * const output_78[] = {
  "and%.\t%0, %1, %2",
  "bic%.\t%0, %1, #%B2",
  "and%.\t%0, %1, %2",
};

static const char * const output_79[] = {
  "tst%?\t%0, %1",
  "bic%.\t%2, %0, #%B1",
  "tst%?\t%0, %1",
};

static const char *
output_80 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2227 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_88[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_96[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_98[] = {
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_103[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_105[] = {
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "#",
};

static const char * const output_112[] = {
  "cmp\t%1, %2\n\tmovlt\t%0, %2",
  "cmp\t%1, %2\n\tmovge\t%0, %1\n\tmovlt\t%0, %2",
};

static const char * const output_114[] = {
  "cmp\t%1, %2\n\tmovge\t%0, %2",
  "cmp\t%1, %2\n\tmovlt\t%0, %1\n\tmovge\t%0, %2",
};

static const char * const output_115[] = {
  "cmp\t%1, %2\n\tmovcc\t%0, %2",
  "cmp\t%1, %2\n\tmovcs\t%0, %1",
  "cmp\t%1, %2\n\tmovcs\t%0, %1\n\tmovcc\t%0, %2",
};

static const char * const output_116[] = {
  "cmp\t%1, %2\n\tmovcs\t%0, %2",
  "cmp\t%1, %2\n\tmovcc\t%0, %1",
  "cmp\t%1, %2\n\tmovcc\t%0, %1\n\tmovcs\t%0, %2",
};

static const char *
output_117 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3364 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  operands[3] = gen_rtx_fmt_ee (minmax_code (operands[3]), SImode,
				operands[1], operands[2]);
  output_asm_insn ("cmp\t%1, %2", operands);
  if (TARGET_THUMB2)
    output_asm_insn ("ite\t%d3", operands);
  output_asm_insn ("str%d3\t%1, %0", operands);
  output_asm_insn ("str%D3\t%2, %0", operands);
  return "";
  
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3393 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    enum rtx_code code = GET_CODE (operands[4]);
    bool need_else;

    if (which_alternative != 0 || operands[3] != const0_rtx
        || (code != PLUS && code != IOR && code != XOR))
      need_else = true;
    else
      need_else = false;

    operands[5] = gen_rtx_fmt_ee (minmax_code (operands[5]), SImode,
				  operands[2], operands[3]);
    output_asm_insn ("cmp\t%2, %3", operands);
    if (TARGET_THUMB2)
      {
	if (need_else)
	  output_asm_insn ("ite\t%d5", operands);
	else
	  output_asm_insn ("it\t%d5", operands);
      }
    output_asm_insn ("%i4%d5\t%0, %1, %2", operands);
    if (need_else)
      output_asm_insn ("%i4%D5\t%0, %1, %3", operands);
    return "";
  }
}

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3438 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3438 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3463 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_122 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3463 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3786 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char *
output_131 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3803 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char *
output_132 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3819 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char * const output_149[] = {
  "cmp\t%0, #0\n\trsblt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\tsub%?\t%0, %0, %1, asr #31",
};

static const char * const output_151[] = {
  "cmp\t%0, #0\n\trsbgt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\trsb%?\t%0, %0, %1, asr #31",
};

static const char * const output_153[] = {
  "vmvn\t%P0, %P1",
  "#",
  "#",
  "vmvn\t%P0, %P1",
};

static const char *
output_164 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4606 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  rtx mem;

  if (which_alternative == 0 && arm_arch6)
    return "uxth\t%0, %1";
  if (which_alternative == 0)
    return "#";

  mem = XEXP (operands[1], 0);

  if (GET_CODE (mem) == CONST)
    mem = XEXP (mem, 0);
    
  if (GET_CODE (mem) == PLUS)
    {
      rtx a = XEXP (mem, 0);

      /* This can happen due to bugs in reload.  */
      if (REG_P (a) && REGNO (a) == SP_REGNUM)
        {
          rtx ops[2];
          ops[0] = operands[0];
          ops[1] = a;
      
          output_asm_insn ("mov\t%0, %1", ops);

          XEXP (mem, 0) = operands[0];
       }
    }
    
  return "ldrh\t%0, %1";
}
}

static const char * const output_165[] = {
  "#",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_166[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_168[] = {
  "#",
  "ldrb\t%0, %1",
};

static const char * const output_169[] = {
  "uxtb\t%0, %1",
  "ldrb\t%0, %1",
};

static const char * const output_170[] = {
  "#",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_171[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_174 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4872 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    rtx ops[4];
    rtx mem;

    if (which_alternative == 0 && !arm_arch6)
      return "#";
    if (which_alternative == 0)
      return "sxth\t%0, %1";

    mem = XEXP (operands[1], 0);

    /* This code used to try to use 'V', and fix the address only if it was
       offsettable, but this fails for e.g. REG+48 because 48 is outside the
       range of QImode offsets, and offsettable_address_p does a QImode
       address check.  */
       
    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);
    
    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";
    
    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
        rtx b = XEXP (mem, 1);

        if (GET_CODE (a) == LABEL_REF
	    && CONST_INT_P (b))
          return "ldr\t%0, %1";

        if (REG_P (b))
          return "ldrsh\t%0, %1";
	  
        ops[1] = a;
        ops[2] = b;
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
      }
      
    gcc_assert (REG_P (ops[1]));

    ops[0] = operands[0];
    if (reg_mentioned_p (operands[2], ops[1]))
      ops[3] = ops[0];
    else
      ops[3] = operands[2];
    output_asm_insn ("mov\t%3, %2\n\tldrsh\t%0, [%1, %3]", ops);
    return "";
  }
}

static const char * const output_175[] = {
  "#",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_176[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_179[] = {
  "#",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_180[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char *
output_182 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5195 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  rtx addr;

  if (which_alternative == 0 && arm_arch6)
    return "sxtb\t%0, %1";
  if (which_alternative == 0)
    return "#";

  addr = XEXP (operands[1], 0);
  if (GET_CODE (addr) == PLUS
      && REG_P (XEXP (addr, 0)) && REG_P (XEXP (addr, 1)))
    return "ldrsb\t%0, %1";
      
  return "#";
}
}

static const char *
output_183 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5323 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands, true, NULL);
    }
  
}

static const char *
output_184 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5443 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0,  %1,  #0\n\tadd\t%H0, %H1, #0";
      return   "add\t%H0, %H1, #0\n\tadd\t%0,  %1,  #0";
    case 1:
      return "mov\t%Q0, %1\n\tmov\t%R0, #0";
    case 2:
      operands[1] = GEN_INT (- INTVAL (operands[1]));
      return "mov\t%Q0, %1\n\tneg\t%Q0, %Q0\n\tasr\t%R0, %Q0, #31";
    case 3:
      return "ldmia\t%1, {%0, %H0}";
    case 4:
      return "stmia\t%0, {%1, %H1}";
    case 5:
      return thumb_load_double_from_address (operands);
    case 6:
      operands[2] = gen_rtx_MEM (SImode,
			     plus_constant (Pmode, XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 7:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  }
}

static const char * const output_186[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char * const output_187[] = {
  "mov	%0, %1",
  "mov	%0, %1",
  "#",
  "#",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
};

static const char *
output_191 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5797 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				     INTVAL (operands[2]));
  return "add\t%0, %|pc";
  
}

static const char *
output_192 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5812 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_193 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5827 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_194[] = {
  "cmp%?\t%0, #0",
  "sub%.\t%0, %1, #0",
};

static const char *
output_195 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6211 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0: return "add	%0, %1, #0";
    case 2: return "strh	%1, %0";
    case 3: return "mov	%0, %1";
    case 4: return "mov	%0, %1";
    case 5: return "mov	%0, %1";
    default: gcc_unreachable ();
    case 1:
      /* The stack pointer can end up being taken as an index register.
          Catch this case here and deal with it.  */
      if (GET_CODE (XEXP (operands[1], 0)) == PLUS
	  && REG_P (XEXP (XEXP (operands[1], 0), 0))
	  && REGNO    (XEXP (XEXP (operands[1], 0), 0)) == SP_REGNUM)
        {
	  rtx ops[2];
          ops[0] = operands[0];
          ops[1] = XEXP (XEXP (operands[1], 0), 0);
      
          output_asm_insn ("mov	%0, %1", ops);

          XEXP (XEXP (operands[1], 0), 0) = operands[0];
    
	}
      return "ldrh	%0, %1";
    }
}

static const char * const output_196[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_197[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_198[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char * const output_199[] = {
  "add\t%0, %1, #0",
  "ldrb\t%0, %1",
  "strb\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6521 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6566 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 1:
      {
	rtx addr;
	gcc_assert (MEM_P (operands[1]));
	addr = XEXP (operands[1], 0);
	if (GET_CODE (addr) == LABEL_REF
	    || (GET_CODE (addr) == CONST
		&& GET_CODE (XEXP (addr, 0)) == PLUS
		&& GET_CODE (XEXP (XEXP (addr, 0), 0)) == LABEL_REF
		&& CONST_INT_P (XEXP (XEXP (addr, 0), 1))))
	  {
	    /* Constant pool entry.  */
	    return "ldr\t%0, %1";
	  }
	return "ldrh\t%0, %1";
      }
    case 2: return "strh\t%1, %0";
    default: return "mov\t%0, %1";
    }
  
}

static const char * const output_202[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_203[] = {
  "add\t%0, %1, #0",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6746 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands, true, NULL);
    }
  
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6775 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0, %1, #0\n\tadd\t%H0, %H1, #0";
      return "add\t%H0, %H1, #0\n\tadd\t%0, %1, #0";
    case 1:
      return "ldmia\t%1, {%0, %H0}";
    case 2:
      return "stmia\t%0, {%1, %H1}";
    case 3:
      return thumb_load_double_from_address (operands);
    case 4:
      operands[2] = gen_rtx_MEM (SImode,
				 plus_constant (Pmode,
						XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 5:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6909 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
 return thumb_output_move_mem_multiple (3, operands);
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6928 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
 return thumb_output_move_mem_multiple (2, operands);
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7054 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  rtx t = cfun->machine->thumb1_cc_insn;
  if (t != NULL_RTX)
    {
      if (!rtx_equal_p (cfun->machine->thumb1_cc_op0, operands[1])
	  || !rtx_equal_p (cfun->machine->thumb1_cc_op1, operands[2]))
	t = NULL_RTX;
      if (cfun->machine->thumb1_cc_mode == CC_NOOVmode)
	{
	  if (!noov_comparison_operator (operands[0], VOIDmode))
	    t = NULL_RTX;
	}
      else if (cfun->machine->thumb1_cc_mode != CCmode)
	t = NULL_RTX;
    }
  if (t == NULL_RTX)
    {
      output_asm_insn ("cmp\t%1, %2", operands);
      cfun->machine->thumb1_cc_insn = insn;
      cfun->machine->thumb1_cc_op0 = operands[1];
      cfun->machine->thumb1_cc_op1 = operands[2];
      cfun->machine->thumb1_cc_mode = CCmode;
    }
  else
    /* Ensure we emit the right type of condition code on the jump.  */
    XEXP (operands[0], 0) = gen_rtx_REG (cfun->machine->thumb1_cc_mode,
					 CC_REGNUM);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
}
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7115 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  output_asm_insn ("add\t%0, %1, #%n2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7151 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  output_asm_insn ("cmn\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7189 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - 1 - INTVAL (operands[2]));

  output_asm_insn ("lsl\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7233 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - INTVAL (operands[2]));

  output_asm_insn ("lsl\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7275 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
  output_asm_insn ("tst\t%0, %1", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7313 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

   {
     rtx cond[2];
     cond[0] = gen_rtx_fmt_ee ((GET_CODE (operands[3]) == NE
				? GEU : LTU),
			       VOIDmode, operands[2], const1_rtx);
     cond[1] = operands[4];

     if (which_alternative == 0)
       output_asm_insn ("sub\t%0, %2, #1", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload 
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
       {
	 case 4:
	   output_asm_insn ("b%d0\t%l1", cond);
	   return "";
	 case 6:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "b\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "bl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7424 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

   {
     rtx cond[3];

     cond[0] = (which_alternative < 2) ? operands[0] : operands[1];
     cond[1] = operands[2];
     cond[2] = operands[3];

     if (CONST_INT_P (cond[2]) && INTVAL (cond[2]) < 0)
       output_asm_insn ("sub\t%0, %1, #%n2", cond);
     else
       output_asm_insn ("add\t%0, %1, %2", cond);

     if (which_alternative >= 2
	 && which_alternative < 4)
       output_asm_insn ("mov\t%0, %1", operands);
     else if (which_alternative >= 4)
       output_asm_insn ("str\t%1, %0", operands);

     switch (get_attr_length (insn) - ((which_alternative >= 2) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7502 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

   {
     switch (which_alternative)
       {
       case 0:
	 output_asm_insn ("cmp\t%1, #%n2", operands);
	 break;
       case 1:
	 output_asm_insn ("cmn\t%1, %2", operands);
	 break;
       case 2:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("sub\t%0, %1, %2", operands);
	 else
	   output_asm_insn ("add\t%0, %1, %2", operands);
	 break;
       case 3:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("sub\t%0, %0, %2", operands);
	 else
	   output_asm_insn ("add\t%0, %0, %2", operands);
	 break;
       }

     switch (get_attr_length (insn))
       {
	 case 4:
	   return "b%d3\t%l4";
	 case 6:
	   return "b%D3\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D3\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char * const output_217[] = {
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7702 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%d1\t%l0";
  
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7728 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%D1\t%l0";
  
}

static const char * const output_231[] = {
  "neg\t%0, %1\n\tadc\t%0, %0, %1",
  "neg\t%2, %1\n\tadc\t%0, %1, %2",
};

static const char * const output_236[] = {
  "mov%D3\t%0, %2",
  "mvn%D3\t%0, #%B2",
  "mov%d3\t%0, %1",
  "mvn%d3\t%0, #%B1",
  "mov%d3\t%0, %1\n\tmov%D3\t%0, %2",
  "mov%d3\t%0, %1\n\tmvn%D3\t%0, #%B2",
  "mvn%d3\t%0, #%B1\n\tmov%D3\t%0, %2",
  "mvn%d3\t%0, #%B1\n\tmvn%D3\t%0, #%B2",
};

static const char * const output_237[] = {
  "mov%D3\t%0, %2",
  "mov%d3\t%0, %1",
};

static const char *
output_238 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8176 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_239 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8200 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  if (get_attr_length (insn) == 2)
    return "b\t%l0";
  return "bl\t%l0\t%@ far jump";
  
}

static const char *
output_241 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8269 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  return output_call (operands);
  
}

static const char *
output_242 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8288 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  return output_call_mem (operands);
  
}

static const char *
output_244 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8312 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[0]);
    else if (operands[1] == const0_rtx)
      return "bl\t%__interwork_call_via_%0";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%0";
    else
      return "bl\t%__interwork_r11_call_via_%0";
  }
}

static const char *
output_246 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8382 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  return output_call (&operands[1]);
  
}

static const char *
output_247 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8398 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  return output_call_mem (&operands[1]);
  
}

static const char *
output_249 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8424 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[1]);
    else if (operands[2] == const0_rtx)
      return "bl\t%__interwork_call_via_%1";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%1";
    else
      return "bl\t%__interwork_r11_call_via_%1";
  }
}

static const char *
output_250 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8449 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a0(PLT)" : "bl%?\t%a0";
  }
}

static const char *
output_251 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8465 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a1(PLT)" : "bl%?\t%a1";
  }
}

static const char *
output_254 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8533 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  return NEED_PLT_RELOC ? "b%?\t%a0(PLT)" : "b%?\t%a0";
  
}

static const char *
output_255 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8546 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  return NEED_PLT_RELOC ? "b%?\t%a1(PLT)" : "b%?\t%a1";
  
}

static const char *
output_256 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8573 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, false);
  }
}

static const char *
output_257 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8594 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, false, false);
  }
}

static const char *
output_258 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8615 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, true, false);
  }
}

static const char *
output_259 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8632 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, true);
  }
}

static const char *
output_262 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8855 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    if (flag_pic)
      return "cmp\t%0, %1\n\taddls\t%|pc, %|pc, %0, asl #2\n\tb\t%l3";
    return   "cmp\t%0, %1\n\tldrls\t%|pc, [%|pc, %0, asl #2]\n\tb\t%l3";
  
}

static const char *
output_263 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8891 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
 return thumb1_output_casesi(operands);
}

static const char *
output_267 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8948 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  if (TARGET_UNIFIED_ASM)
    return "nop";
  if (TARGET_ARM)
    return "mov%?\t%|r0, %|r0\t%@ nop";
  return  "mov\tr8, r8";
  
}

static const char * const output_275[] = {
  "orr%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\torr%d2\t%0, %1, #1",
};

static const char *
output_277 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9249 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("mov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("mov%d4\t%0, %1", operands);
        return "";
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_278 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9278 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      output_asm_insn ("mov%D4\t%0, #0", operands);
    else if (GET_CODE (operands[5]) == MINUS)
      output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
    else if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_279 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9303 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_280 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9330 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    static const char * const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d5\t%0, %1",
       "cmp%d4\t%2, %3"},
      {"cmn%d5\t%0, #%n1",
       "cmp%d4\t%2, %3"},
      {"cmp%d5\t%0, %1",
       "cmn%d4\t%2, #%n3"},
      {"cmn%d5\t%0, #%n1",
       "cmn%d4\t%2, #%n3"}
    };
    static const char * const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%2, %3",
       "cmp\t%0, %1"},
      {"cmp\t%2, %3",
       "cmn\t%0, #%n1"},
      {"cmn\t%2, #%n3",
       "cmp\t%0, %1"},
      {"cmn\t%2, #%n3",
       "cmn\t%0, #%n1"}
    };
    static const char * const ite[2] =
    {
      "it\t%d5",
      "it\t%d4"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9411 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    static const char * const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%0, %1",
       "cmp\t%2, %3"},
      {"cmn\t%0, #%n1",
       "cmp\t%2, %3"},
      {"cmp\t%0, %1",
       "cmn\t%2, #%n3"},
      {"cmn\t%0, #%n1",
       "cmn\t%2, #%n3"}
    };
    static const char * const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d4\t%2, %3",
       "cmp%D5\t%0, %1"},
      {"cmp%d4\t%2, %3",
       "cmn%D5\t%0, #%n1"},
      {"cmn%d4\t%2, #%n3",
       "cmp%D5\t%0, %1"},
      {"cmn%d4\t%2, #%n3",
       "cmn%D5\t%0, #%n1"}
    };
    static const char * const ite[2] =
    {
      "it\t%d4",
      "it\t%D5"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]),
			      reverse_condition (GET_CODE (operands[4])));

    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9492 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    static const char *const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d5\t%0, %1",
       "cmp%d4\t%2, %3"},
      {"cmn%d5\t%0, #%n1",
       "cmp%d4\t%2, %3"},
      {"cmp%d5\t%0, %1",
       "cmn%d4\t%2, #%n3"},
      {"cmn%d5\t%0, #%n1",
       "cmn%d4\t%2, #%n3"}
    };
    static const char *const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%2, %3",
       "cmp\t%0, %1"},
      {"cmp\t%2, %3",
       "cmn\t%0, #%n1"},
      {"cmn\t%2, #%n3",
       "cmp\t%0, %1"},
      {"cmn\t%2, #%n3",
       "cmn\t%0, #%n1"}
    };
    static const char *const ite[2] =
    {
      "it\t%d5",
      "it\t%d4"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_283 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9573 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    static const char *const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%0, %1",
       "cmp\t%2, %3"},
      {"cmn\t%0, #%n1",
       "cmp\t%2, %3"},
      {"cmp\t%0, %1",
       "cmn\t%2, #%n3"},
      {"cmn\t%0, #%n1",
       "cmn\t%2, #%n3"}
    };
    static const char *const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp%D4\t%2, %3",
       "cmp%D5\t%0, %1"},
      {"cmp%D4\t%2, %3",
       "cmn%D5\t%0, #%n1"},
      {"cmn%D4\t%2, #%n3",
       "cmp%D5\t%0, %1"},
      {"cmn%D4\t%2, #%n3",
       "cmn%D5\t%0, #%n1"}
    };
    static const char *const ite[2] =
    {
      "it\t%D4",
      "it\t%D5"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
  
}

static const char *
output_289 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9832 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  if (GET_CODE (operands[3]) == LT && operands[2] == const0_rtx)
    return "mov\t%0, %1, asr #31";

  if (GET_CODE (operands[3]) == NE)
    return "subs\t%0, %1, %2\n\tmvnne\t%0, #0";

  output_asm_insn ("cmp\t%1, %2", operands);
  output_asm_insn ("mov%D3\t%0, #0", operands);
  return "mvn%d3\t%0, #0";
  
}

static const char *
output_290 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9857 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (CONST_INT_P (operands[4])
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_292[] = {
  "add%d4\t%0, %2, %3",
  "sub%d4\t%0, %2, #%n3",
  "add%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
  "sub%d4\t%0, %2, #%n3\n\tmov%D4\t%0, %1",
};

static const char * const output_294[] = {
  "add%D4\t%0, %2, %3",
  "sub%D4\t%0, %2, #%n3",
  "add%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
  "sub%D4\t%0, %2, #%n3\n\tmov%d4\t%0, %1",
};

static const char *
output_297 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10041 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions.  */
  if (operands[3] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && REG_P (operands[5])
      && REG_P (operands[1])
      && REGNO (operands[1]) == REGNO (operands[4])
      && REGNO (operands[4]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == LT)
	return "and\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
      else if (GET_CODE (operands[6]) == GE)
	return "bic\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
    }
  if (CONST_INT_P (operands[3])
      && !const_ok_for_arm (INTVAL (operands[3])))
    output_asm_insn ("cmn\t%2, #%n3", operands);
  else
    output_asm_insn ("cmp\t%2, %3", operands);
  output_asm_insn ("%I7%d6\t%0, %4, %5", operands);
  if (which_alternative != 0)
    return "mov%D6\t%0, %1";
  return "";
  
}

static const char * const output_298[] = {
  "%I5%d4\t%0, %2, %3",
  "%I5%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
};

static const char *
output_299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10099 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions */
  if (operands[5] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && REG_P (operands[3])
      && REG_P (operands[1])
      && REGNO (operands[1]) == REGNO (operands[2])
      && REGNO (operands[2]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == GE)
	return "and\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
      else if (GET_CODE (operands[6]) == LT)
	return "bic\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
    }

  if (CONST_INT_P (operands[5])
      && !const_ok_for_arm (INTVAL (operands[5])))
    output_asm_insn ("cmn\t%4, #%n5", operands);
  else
    output_asm_insn ("cmp\t%4, %5", operands);

  if (which_alternative != 0)
    output_asm_insn ("mov%d6\t%0, %1", operands);
  return "%I7%D6\t%0, %2, %3";
  
}

static const char * const output_300[] = {
  "%I5%D4\t%0, %2, %3",
  "%I5%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
};

static const char * const output_302[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
  "mvn%d4\t%0, #%B1\n\tmvn%D4\t%0, %2",
};

static const char * const output_304[] = {
  "mvn%d4\t%0, %2",
  "mov%D4\t%0, %1\n\tmvn%d4\t%0, %2",
  "mvn%D4\t%0, #%B1\n\tmvn%d4\t%0, %2",
};

static const char * const output_306[] = {
  "mov%d5\t%0, %2%S4",
  "mov%D5\t%0, %1\n\tmov%d5\t%0, %2%S4",
  "mvn%D5\t%0, #%B1\n\tmov%d5\t%0, %2%S4",
};

static const char * const output_308[] = {
  "mov%D5\t%0, %2%S4",
  "mov%d5\t%0, %1\n\tmov%D5\t%0, %2%S4",
  "mvn%d5\t%0, #%B1\n\tmov%D5\t%0, %2%S4",
};

static const char * const output_316[] = {
  "rsb%d4\t%0, %2, #0",
  "mov%D4\t%0, %1\n\trsb%d4\t%0, %2, #0",
  "mvn%D4\t%0, #%B1\n\trsb%d4\t%0, %2, #0",
};

static const char * const output_318[] = {
  "rsb%D4\t%0, %2, #0",
  "mov%d4\t%0, %1\n\trsb%D4\t%0, %2, #0",
  "mvn%d4\t%0, #%B1\n\trsb%D4\t%0, %2, #0",
};

static const char *
output_319 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10472 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char *
output_320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10659 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
 return thumb1_output_interwork ();
}

static const char *
output_321 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10681 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    return thumb1_unexpanded_epilogue ();
  
}

static const char * const output_322[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
};

static const char *
output_323 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10861 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("ands\t%0, %1, %2", operands);
    return "mvnne\t%0, #0";
  
}

static const char *
output_324 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10878 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("tst\t%1, %2", operands);
    output_asm_insn ("mvneq\t%0, #0", operands);
    return "movne\t%0, #0";
  
}

static const char *
output_325 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10900 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    int num_saves = XVECLEN (operands[2], 0);
     
    /* For the StrongARM at least it is faster to
       use STR to store only a single register.
       In Thumb mode always use push, and the assembler will pick
       something appropriate.  */
    if (num_saves == 1 && TARGET_ARM)
      output_asm_insn ("str%?\t%1, [%m0, #-4]!", operands);
    else
      {
	int i;
	char pattern[100];

	if (TARGET_ARM)
	    strcpy (pattern, "stm%(fd%)\t%m0!, {%1");
	else if (TARGET_THUMB2)
	    strcpy (pattern, "push%?\t{%1");
	else
	    strcpy (pattern, "push\t{%1");

	for (i = 1; i < num_saves; i++)
	  {
	    strcat (pattern, ", %|");
	    strcat (pattern,
		    reg_names[REGNO (XEXP (XVECEXP (operands[2], 0, i), 0))]);
	  }

	strcat (pattern, "}");
	output_asm_insn (pattern, operands);
      }

    return "";
  }
}

static const char *
output_327 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10961 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_328 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10990 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_329 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11010 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char *
output_331 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11042 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    int num_regs = XVECLEN (operands[0], 0);
    char pattern[100];
    rtx op_list[2];
    strcpy (pattern, "fldmfdd\t");
    strcat (pattern, reg_names[REGNO (SET_DEST (XVECEXP (operands[0], 0, 0)))]);
    strcat (pattern, "!, {");
    op_list[0] = XEXP (XVECEXP (operands[0], 0, 1), 0);
    strcat (pattern, "%P0");
    if ((num_regs - 1) > 1)
      {
        strcat (pattern, "-%P1");
        op_list [1] = XEXP (XVECEXP (operands[0], 0, num_regs - 1), 0);
      }

    strcat (pattern, "}");
    output_asm_insn (pattern, op_list);
    return "";
  }
  
}

static const char *
output_332 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11073 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  assemble_align (32);
  return "";
  
}

static const char *
output_333 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11082 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  assemble_align (64);
  return "";
  
}

static const char *
output_334 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11091 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  making_const_table = FALSE;
  return "";
  
}

static const char *
output_335 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11100 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  assemble_integer (operands[0], 1, BITS_PER_WORD, 1);
  assemble_zeros (3);
  return "";
  
}

static const char *
output_336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11112 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  gcc_assert (GET_MODE_CLASS (GET_MODE (operands[0])) != MODE_FLOAT);
  assemble_integer (operands[0], 2, BITS_PER_WORD, 1);
  assemble_zeros (2);
  return "";
  
}

static const char *
output_337 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11125 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    rtx x = operands[0];
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (x)))
      {
      case MODE_FLOAT:
 	if (GET_MODE (x) == HFmode)
 	  arm_emit_fp16_const (x);
 	else
 	  {
 	    REAL_VALUE_TYPE r;
 	    REAL_VALUE_FROM_CONST_DOUBLE (r, x);
 	    assemble_real (r, GET_MODE (x), BITS_PER_WORD);
 	  }
 	break;
      default:
	/* XXX: Sometimes gcc does something really dumb and ends up with
	   a HIGH in a constant pool entry, usually because it's trying to
	   load into a VFP register.  We know this will always be used in
	   combination with a LO_SUM which ignores the high bits, so just
	   strip off the HIGH.  */
	if (GET_CODE (x) == HIGH)
	  x = XEXP (x, 0);
        assemble_integer (x, 4, BITS_PER_WORD, 1);
	mark_symbol_refs_as_used (x);
        break;
      }
    return "";
  }
}

static const char *
output_338 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11161 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 8, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char *
output_339 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11185 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 16, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char *
output_349 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11371 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
    targetm.asm_out.internal_label (asm_out_file, "LPIC",
				    INTVAL (operands[1]));
    return "bl\t%c0(tlscall)";
  }
}

static const char * const output_351[] = {
  "rev\t%0, %1",
  "rev%?\t%0, %1",
  "rev%?\t%0, %1",
};

static const char * const output_352[] = {
  "revsh\t%0, %1",
  "revsh%?\t%0, %1",
  "revsh%?\t%0, %1",
};

static const char * const output_353[] = {
  "rev16\t%0, %1",
  "rev16%?\t%0, %1",
  "rev16%?\t%0, %1",
};

static const char *
output_417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11640 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char * const output_421[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_422[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_423[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_425 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 115 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    case 3: case 4:
      return output_move_double (operands, true, NULL);
    case 5:
      return "wmov%?\t%0,%1";
    case 6:
      return "tmcrr%?\t%0,%Q1,%R1";
    case 7:
      return "tmrrc%?\t%Q0,%R0,%1";
    case 8:
      return "wldrd%?\t%0,%1";
    case 9:
      return "wstrd%?\t%1,%0";
    case 10:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 11:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 12:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 13: case 14:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_426 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 170 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
     {
     case 0: return "mov\t%0, %1";
     case 1: return "mov\t%0, %1";
     case 2: return "mvn\t%0, #%B1";
     case 3: return "movw\t%0, %1";
     case 4: return "ldr\t%0, %1";
     case 5: return "str\t%1, %0";
     case 6: return "tmcr\t%0, %1";
     case 7: return "tmrc\t%0, %1";
     case 8: return arm_output_load_gr (operands);
     case 9: return "wstrw\t%1, %0";
     case 10:return "fmsr\t%0, %1";
     case 11:return "fmrs\t%0, %1";
     case 12:return "fcpys\t%0, %1\t%@ int";
     case 13: case 14:
       return output_move_vfp (operands);
     default:
       gcc_unreachable ();
     }
}

static const char *
output_427 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 220 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "mov%?\t%0, %1";
   case 1: return "mvn%?\t%0, #%B1";
   case 2: return "ldr%?\t%0, %1";
   case 3: return "str%?\t%1, %0";
   case 4: return "tmcr%?\t%0, %1";
   default: return "tmrc%?\t%0, %1";
  }
}

static const char *
output_428 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_429 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_430 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_473 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 687 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_474 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 704 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_475 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 721 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_527 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1288 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_528 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1288 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_529 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1288 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrordg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_530 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1309 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrahg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_531 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1309 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrawg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_532 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1309 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsradg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_533 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1330 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_534 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1330 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1330 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1351 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1351 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1351 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wslldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_539 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1372 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1372 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_541 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1372 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrord%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1393 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrah%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_543 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1393 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsraw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_544 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1393 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrad%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_545 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1414 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1414 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1414 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_548 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1435 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1435 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1435 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wslld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_641 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 55 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_642 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 96 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
    case 5:
      return "ldr%?\t%0, %1";
    case 6:
    case 7:
      return "str%?\t%1, %0";
    case 8:
      return "fmsr%?\t%0, %1\t%@ int";
    case 9:
      return "fmrs%?\t%0, %1\t%@ int";
    case 10:
      return "fcpys%?\t%0, %1\t%@ int";
    case 11: case 12:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_643 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 142 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_644 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 194 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      return "fcpyd%?\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_645 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 244 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* S register from memory */
      return "vld1.16\t{%z0}, %A1";
    case 1:     /* memory from S register */
      return "vst1.16\t{%z1}, %A0";
    case 2:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 3:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 4:	/* S register from S register */
      return "fcpys\t%0, %1";
    case 5:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 6:	/* S register from ARM register */
      return "fmsr\t%0, %1";
    case 7:	/* ARM register from S register */
      return "fmrs\t%0, %1";
    case 8:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_646 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 299 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 1:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 2:	/* S register from S register */
      return "fcpys\t%0, %1";
    case 3:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 4:	/* S register from ARM register */
      return "fmsr\t%0, %1";
    case 5:	/* ARM register from S register */
      return "fmrs\t%0, %1";
    case 6:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_647 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 353 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_648 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 432 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "fconstd%?\t%P0, #%G1";
      case 3: case 4:
	return output_move_vfp (operands);
      case 5: case 6:
	return output_move_double (operands, true, NULL);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      case 8:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char *
output_650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 480 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
	return "fconstd%?\t%P0, #%G1";
      case 3: case 4:
	return output_move_vfp (operands);
      case 5: case 6: case 8:
	return output_move_double (operands, true, NULL);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      default:
	abort ();
      }
    }
  
}

static const char * const output_651[] = {
  "fcpys%D3\t%0, %2",
  "fcpys%d3\t%0, %1",
  "fcpys%D3\t%0, %2\n\tfcpys%d3\t%0, %1",
  "fmsr%D3\t%0, %2",
  "fmsr%d3\t%0, %1",
  "fmsr%D3\t%0, %2\n\tfmsr%d3\t%0, %1",
  "fmrs%D3\t%0, %2",
  "fmrs%d3\t%0, %1",
  "fmrs%D3\t%0, %2\n\tfmrs%d3\t%0, %1",
};

static const char * const output_652[] = {
  "it\t%D3\n\tfcpys%D3\t%0, %2",
  "it\t%d3\n\tfcpys%d3\t%0, %1",
  "ite\t%D3\n\tfcpys%D3\t%0, %2\n\tfcpys%d3\t%0, %1",
  "it\t%D3\n\tfmsr%D3\t%0, %2",
  "it\t%d3\n\tfmsr%d3\t%0, %1",
  "ite\t%D3\n\tfmsr%D3\t%0, %2\n\tfmsr%d3\t%0, %1",
  "it\t%D3\n\tfmrs%D3\t%0, %2",
  "it\t%d3\n\tfmrs%d3\t%0, %1",
  "ite\t%D3\n\tfmrs%D3\t%0, %2\n\tfmrs%d3\t%0, %1",
};

static const char * const output_653[] = {
  "fcpyd%D3\t%P0, %P2",
  "fcpyd%d3\t%P0, %P1",
  "fcpyd%D3\t%P0, %P2\n\tfcpyd%d3\t%P0, %P1",
  "fmdrr%D3\t%P0, %Q2, %R2",
  "fmdrr%d3\t%P0, %Q1, %R1",
  "fmdrr%D3\t%P0, %Q2, %R2\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "fmrrd%D3\t%Q0, %R0, %P2",
  "fmrrd%d3\t%Q0, %R0, %P1",
  "fmrrd%D3\t%Q0, %R0, %P2\n\tfmrrd%d3\t%Q0, %R0, %P1",
};

static const char * const output_654[] = {
  "it\t%D3\n\tfcpyd%D3\t%P0, %P2",
  "it\t%d3\n\tfcpyd%d3\t%P0, %P1",
  "ite\t%D3\n\tfcpyd%D3\t%P0, %P2\n\tfcpyd%d3\t%P0, %P1",
  "it\t%D3\n\tfmdrr%D3\t%P0, %Q2, %R2",
  "it\t%d3\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "ite\t%D3\n\tfmdrr%D3\t%P0, %Q2, %R2\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "it\t%D3\n\tfmrrd%D3\t%Q0, %R0, %P2",
  "it\t%d3\n\tfmrrd%d3\t%Q0, %R0, %P1",
  "ite\t%D3\n\tfmrrd%D3\t%Q0, %R0, %P2\n\tfmrrd%d3\t%Q0, %R0, %P1",
};

static const char * const output_657[] = {
  "fnegs%?\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_658[] = {
  "fnegd%?\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_704[] = {
  "fcmps%?\t%0, %1",
  "fcmpzs%?\t%0",
};

static const char * const output_705[] = {
  "fcmpes%?\t%0, %1",
  "fcmpezs%?\t%0",
};

static const char * const output_706[] = {
  "fcmpd%?\t%P0, %P1",
  "fcmpzd%?\t%P0",
};

static const char * const output_707[] = {
  "fcmped%?\t%P0, %P1",
  "fcmpezd%?\t%P0",
};

static const char * const output_710[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
};

static const char * const output_711[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
};

static const char *
output_712 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1251 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"
 return vfp_output_fstmd (operands);
}

static const char * const output_729[] = {
  "it\t%d2\n\tadd%d2\t%0, %1, #1",
  "ite\t%D2\n\tmov%D2\t%0, %1\n\tadd%d2\t%0, %1, #1",
};

static const char * const output_730[] = {
  "it\t%d2\n\tsub%d2\t%0, %1, #1",
  "ite\t%D2\n\tmov%D2\t%0, %1\n\tsub%d2\t%0, %1, #1",
};

static const char * const output_732[] = {
  "cmp\t%1, %2\n\tit\tlt\n\tmovlt\t%0, %2",
  "cmp\t%1, %2\n\tit\tge\n\tmovge\t%0, %1",
  "cmp\t%1, %2\n\tite\tge\n\tmovge\t%0, %1\n\tmovlt\t%0, %2",
};

static const char * const output_733[] = {
  "cmp\t%1, %2\n\tit\tge\n\tmovge\t%0, %2",
  "cmp\t%1, %2\n\tit\tlt\n\tmovlt\t%0, %1",
  "cmp\t%1, %2\n\tite\tlt\n\tmovlt\t%0, %1\n\tmovge\t%0, %2",
};

static const char * const output_734[] = {
  "cmp\t%1, %2\n\tit\tcc\n\tmovcc\t%0, %2",
  "cmp\t%1, %2\n\tit\tcs\n\tmovcs\t%0, %1",
  "cmp\t%1, %2\n\tite\tcs\n\tmovcs\t%0, %1\n\tmovcc\t%0, %2",
};

static const char * const output_735[] = {
  "cmp\t%1, %2\n\tit\tcs\n\tmovcs\t%0, %2",
  "cmp\t%1, %2\n\tit\tcc\n\tmovcc\t%0, %1",
  "cmp\t%1, %2\n\tite\tcc\n\tmovcc\t%0, %1\n\tmovcs\t%0, %2",
};

static const char * const output_737[] = {
  "cmp\t%0, #0\n\tit\tlt\n\trsblt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\tsub%?\t%0, %0, %1, asr #31",
};

static const char * const output_738[] = {
  "cmp\t%0, #0\n\tit\tgt\n\trsbgt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\trsb%?\t%0, %0, %1, asr #31",
};

static const char * const output_739[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
  "str%?\t%1, %0",
};

static const char *
output_740 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 199 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
			     INTVAL (operands[3]));
  return "add\t%2, %|pc\n\tldr%?\t%0, [%2]";
  
}

static const char * const output_741[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_746[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%D3\n\tmvn%D3\t%0, #%B2",
  "it\t%d3\n\tmov%d3\t%0, %1",
  "it\t%d3\n\tmvn%d3\t%0, #%B1",
  "ite\t%d3\n\tmov%d3\t%0, %1\n\tmov%D3\t%0, %2",
  "ite\t%d3\n\tmov%d3\t%0, %1\n\tmvn%D3\t%0, #%B2",
  "ite\t%d3\n\tmvn%d3\t%0, #%B1\n\tmov%D3\t%0, %2",
  "ite\t%d3\n\tmvn%d3\t%0, #%B1\n\tmvn%D3\t%0, #%B2",
};

static const char * const output_747[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%d3\n\tmov%d3\t%0, %1",
};

static const char * const output_752[] = {
  "it\t%d2\n\torr%d2\t%0, %1, #1",
  "ite\t%D2\n\tmov%D2\t%0, %1\n\torr%d2\t%0, %1, #1",
};

static const char *
output_753 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 369 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("it\t%D4\n\tmov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("it\t%d4\n\tmov%d4\t%0, %1", operands);
        return "";
      }
    switch (which_alternative)
      {
      case 0:
	output_asm_insn ("it\t%d4", operands);
	break;
      case 1:
	output_asm_insn ("it\t%D4", operands);
	break;
      case 2:
	output_asm_insn ("ite\t%D4", operands);
	break;
      default:
	abort();
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_754 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 411 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, #0", operands);
      }
    else if (GET_CODE (operands[5]) == MINUS)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
      }
    else if (which_alternative != 0)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, %1", operands);
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_755 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, %1", operands);
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_756 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 469 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

  if (GET_CODE (operands[3]) == LT && operands[2] == const0_rtx)
    return "asr\t%0, %1, #31";

  if (GET_CODE (operands[3]) == NE)
    return "subs\t%0, %1, %2\n\tit\tne\n\tmvnne\t%0, #0";

  output_asm_insn ("cmp\t%1, %2", operands);
  output_asm_insn ("ite\t%D3", operands);
  output_asm_insn ("mov%D3\t%0, #0", operands);
  return "mvn%d3\t%0, #0";
  
}

static const char *
output_757 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 495 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (CONST_INT_P (operands[4])
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  switch (which_alternative)
    {
    case 0:
      output_asm_insn ("it\t%D5", operands);
      break;
    case 1:
      output_asm_insn ("it\t%d5", operands);
      break;
    case 2:
      output_asm_insn ("ite\t%d5", operands);
      break;
    default:
      abort();
    }
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_758[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_759[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_760[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 617 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_762 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 635 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_763 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 643 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"
 return output_return_instruction (const_true_rtx, true, false, true);
}

static const char *
output_766 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 686 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_770 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 711 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_772 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 775 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL (operands[2]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "subs\t%0, %1, #%n2";
    else
      return "adds\t%0, %1, %2";
  
}

static const char *
output_773 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 799 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[1]))
      val = INTVAL (operands[1]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "cmp\t%0, #%n1";
    else
      return "cmn\t%0, %1";
  
}

static const char *
output_777 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 861 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbeq\t%l1";
  
}

static const char *
output_778 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 884 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbnz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbne\t%l1";
  
}

static const char *
output_783 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v8qi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v8qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v8qi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v8qi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v8qi";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_784 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v4hi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v4hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v4hi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v4hi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v4hi";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_785 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2si";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v2si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2si";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2si";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2si";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_786 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2sf";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v2sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2sf";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2sf";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2sf";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_787 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ di";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ di";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ di";
    case 5: return "vmov\t%P0, %Q1, %R1  @ di";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_788 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V16QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v16qi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v16qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v16qi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v16qi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v16qi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_789 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v8hi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v8hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v8hi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v8hi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v8hi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_790 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4si";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4si";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4si\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4si\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_791 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4sf";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4sf";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4sf\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4sf\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_792 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v2di";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v2di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v2di";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v2di\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v2di\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_793 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], TImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ ti";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ ti", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ ti";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ ti\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ ti\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_794 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 147 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_795 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 147 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_796 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 147 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_797 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 147 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_818 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 297 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.8\t{%P0[%c2]}, %A1";
  else
    return "vmov.8\t%P0[%c2], %1";
}
}

static const char *
output_819 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 297 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_820 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 297 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_821 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 297 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_822 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 318 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.8\t{%P0[%c2]}, %A1";
  else
    return "vmov.8\t%P0[%c2], %1";
}
}

static const char *
output_823 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 318 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_824 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 318 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_825 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 318 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_826 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 347 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int regno = REGNO (operands[0]) + 2 * elem;

  operands[0] = gen_rtx_REG (DImode, regno);

  if (which_alternative == 0)
    return "vld1.64\t%P0, %A1";
  else
    return "vmov\t%P0, %Q1, %R1";
}
}

static const char *
output_827 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 379 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.8\t{%P1[%c2]}, %A0";
  else
    return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_828 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 379 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_829 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 379 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_830 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 379 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_831 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 401 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.8\t{%P1[%c2]}, %A0";
  else
    return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_832 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 401 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_833 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 401 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_834 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 401 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_835 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]) + 2 * INTVAL (operands[2]);

  operands[1] = gen_rtx_REG (DImode, regno);

  if (which_alternative == 0)
    return "vst1.64\t{%P1}, %A0  @ v2di";
  else
    return "vmov\t%Q0, %R0, %P1  @ v2di";
}
}

static const char *
output_845 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 474 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 3: return "vadd.i64\t%P0, %P1, %P2";
    case 1: return "#";
    case 2: return "#";
    case 4: return "#";
    case 5: return "#";
    case 6: return "#";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_855 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 513 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 4: return "vsub.i64\t%P0, %P1, %P2";
    case 1: /* fall through */ 
    case 2: /* fall through */
    case 3: return  "subs\t%Q0, %Q1, %Q2\n\tsbc\t%R0, %R1, %R2";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_903 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8QImode, 0, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_904 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V16QImode, 0, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_905 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4HImode, 0, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_906 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8HImode, 0, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_907 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SImode, 0, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_908 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SImode, 0, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_909 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SFmode, 0, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_910 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SFmode, 0, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_911 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2DImode, 0, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_912 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 687 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 4: return "vorr\t%P0, %P1, %P2";
    case 1: /* fall through */
    case 5: return neon_output_logic_immediate ("vorr", &operands[2],
		     DImode, 0, VALID_NEON_QREG_MODE (DImode));
    case 2: return "#";
    case 3: return "#";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_913 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 715 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8QImode, 1, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_914 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 715 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V16QImode, 1, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_915 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 715 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4HImode, 1, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_916 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 715 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8HImode, 1, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_917 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 715 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SImode, 1, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_918 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 715 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SImode, 1, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_919 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 715 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SFmode, 1, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_920 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 715 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SFmode, 1, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_921 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 715 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2DImode, 1, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_922 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 732 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 4: return "vand\t%P0, %P1, %P2";
    case 1: /* fall through */
    case 5: return neon_output_logic_immediate ("vand", &operands[2],
    		     DImode, 1, VALID_NEON_QREG_MODE (DImode));
    case 2: return "#";
    case 3: return "#";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_932[] = {
  "vorn\t%P0, %P1, %P2",
  "#",
  "#",
  "#",
};

static const char * const output_942[] = {
  "vbic\t%P0, %P1, %P2",
  "#",
  "#",
};

static const char * const output_952[] = {
  "veor\t%P0, %P1, %P2",
  "#",
  "#",
  "veor\t%P0, %P1, %P2",
};

static const char *
output_1007 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 970 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s8\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V8QImode,
						    VALID_NEON_QREG_MODE (V8QImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1008 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 970 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s8\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V16QImode,
						    VALID_NEON_QREG_MODE (V16QImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1009 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 970 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s16\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V4HImode,
						    VALID_NEON_QREG_MODE (V4HImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1010 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 970 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s16\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V8HImode,
						    VALID_NEON_QREG_MODE (V8HImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1011 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 970 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s32\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V2SImode,
						    VALID_NEON_QREG_MODE (V2SImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1012 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 970 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s32\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V4SImode,
						    VALID_NEON_QREG_MODE (V4SImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1013 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 992 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V8QImode, VALID_NEON_QREG_MODE (V8QImode),
					false);
  }
}

static const char *
output_1014 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 992 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V16QImode, VALID_NEON_QREG_MODE (V16QImode),
					false);
  }
}

static const char *
output_1015 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 992 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V4HImode, VALID_NEON_QREG_MODE (V4HImode),
					false);
  }
}

static const char *
output_1016 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 992 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V8HImode, VALID_NEON_QREG_MODE (V8HImode),
					false);
  }
}

static const char *
output_1017 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 992 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V2SImode, VALID_NEON_QREG_MODE (V2SImode),
					false);
  }
}

static const char *
output_1018 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 992 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V4SImode, VALID_NEON_QREG_MODE (V4SImode),
					false);
  }
}

static const char *
output_1019 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1008 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V8QImode, VALID_NEON_QREG_MODE (V8QImode),
					false);
  }
}

static const char *
output_1020 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1008 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V16QImode, VALID_NEON_QREG_MODE (V16QImode),
					false);
  }
}

static const char *
output_1021 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1008 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V4HImode, VALID_NEON_QREG_MODE (V4HImode),
					false);
  }
}

static const char *
output_1022 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1008 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V8HImode, VALID_NEON_QREG_MODE (V8HImode),
					false);
  }
}

static const char *
output_1023 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1008 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V2SImode, VALID_NEON_QREG_MODE (V2SImode),
					false);
  }
}

static const char *
output_1024 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1008 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V4SImode, VALID_NEON_QREG_MODE (V4SImode),
					false);
  }
}

static const char * const output_1039[] = {
  "vld1.32\t{%P0[0]}, %A1",
  "vmov.32\t%P0[0], %1",
};

static const char * const output_1040[] = {
  "vshl.u64\t%P0, %P1, %2",
  "vshl.u64\t%P0, %P1, %P2",
};

static const char * const output_1218[] = {
  "vceq.i8\t%P0, %P1, %P2",
  "vceq.i8\t%P0, %P1, #0",
};

static const char * const output_1219[] = {
  "vceq.i8\t%q0, %q1, %q2",
  "vceq.i8\t%q0, %q1, #0",
};

static const char * const output_1220[] = {
  "vceq.i16\t%P0, %P1, %P2",
  "vceq.i16\t%P0, %P1, #0",
};

static const char * const output_1221[] = {
  "vceq.i16\t%q0, %q1, %q2",
  "vceq.i16\t%q0, %q1, #0",
};

static const char * const output_1222[] = {
  "vceq.i32\t%P0, %P1, %P2",
  "vceq.i32\t%P0, %P1, #0",
};

static const char * const output_1223[] = {
  "vceq.i32\t%q0, %q1, %q2",
  "vceq.i32\t%q0, %q1, #0",
};

static const char * const output_1224[] = {
  "vceq.f32\t%P0, %P1, %P2",
  "vceq.f32\t%P0, %P1, #0",
};

static const char * const output_1225[] = {
  "vceq.f32\t%q0, %q1, %q2",
  "vceq.f32\t%q0, %q1, #0",
};

static const char * const output_1226[] = {
  "vcge.%T3%#8\t%P0, %P1, %P2",
  "vcge.%T3%#8\t%P0, %P1, #0",
};

static const char * const output_1227[] = {
  "vcge.%T3%#8\t%q0, %q1, %q2",
  "vcge.%T3%#8\t%q0, %q1, #0",
};

static const char * const output_1228[] = {
  "vcge.%T3%#16\t%P0, %P1, %P2",
  "vcge.%T3%#16\t%P0, %P1, #0",
};

static const char * const output_1229[] = {
  "vcge.%T3%#16\t%q0, %q1, %q2",
  "vcge.%T3%#16\t%q0, %q1, #0",
};

static const char * const output_1230[] = {
  "vcge.%T3%#32\t%P0, %P1, %P2",
  "vcge.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1231[] = {
  "vcge.%T3%#32\t%q0, %q1, %q2",
  "vcge.%T3%#32\t%q0, %q1, #0",
};

static const char * const output_1232[] = {
  "vcge.%T3%#32\t%P0, %P1, %P2",
  "vcge.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1233[] = {
  "vcge.%T3%#32\t%q0, %q1, %q2",
  "vcge.%T3%#32\t%q0, %q1, #0",
};

static const char * const output_1240[] = {
  "vcgt.%T3%#8\t%P0, %P1, %P2",
  "vcgt.%T3%#8\t%P0, %P1, #0",
};

static const char * const output_1241[] = {
  "vcgt.%T3%#8\t%q0, %q1, %q2",
  "vcgt.%T3%#8\t%q0, %q1, #0",
};

static const char * const output_1242[] = {
  "vcgt.%T3%#16\t%P0, %P1, %P2",
  "vcgt.%T3%#16\t%P0, %P1, #0",
};

static const char * const output_1243[] = {
  "vcgt.%T3%#16\t%q0, %q1, %q2",
  "vcgt.%T3%#16\t%q0, %q1, #0",
};

static const char * const output_1244[] = {
  "vcgt.%T3%#32\t%P0, %P1, %P2",
  "vcgt.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1245[] = {
  "vcgt.%T3%#32\t%q0, %q1, %q2",
  "vcgt.%T3%#32\t%q0, %q1, #0",
};

static const char * const output_1246[] = {
  "vcgt.%T3%#32\t%P0, %P1, %P2",
  "vcgt.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1247[] = {
  "vcgt.%T3%#32\t%q0, %q1, %q2",
  "vcgt.%T3%#32\t%q0, %q1, #0",
};

static const char *
output_1374 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2864 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s8\t%0, %P1[%c2]";
}
}

static const char *
output_1375 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2864 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s16\t%0, %P1[%c2]";
}
}

static const char *
output_1376 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2864 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1377 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2864 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1378 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2883 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_1379 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2883 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_1380 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2883 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1381 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2883 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1382 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1383 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1384 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1385 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1386 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2929 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1387 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2929 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1388 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2929 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1389 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2929 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char * const output_1394[] = {
  "vdup.32\t%P0, %1",
  "vdup.32\t%P0, %y1",
};

static const char * const output_1395[] = {
  "vdup.32\t%P0, %1",
  "vdup.32\t%P0, %y1",
};

static const char * const output_1396[] = {
  "vdup.32\t%q0, %1",
  "vdup.32\t%q0, %y1",
};

static const char * const output_1397[] = {
  "vdup.32\t%q0, %1",
  "vdup.32\t%q0, %y1",
};

static const char * const output_1398[] = {
  "vmov\t%e0, %Q1, %R1\n\tvmov\t%f0, %Q1, %R1",
  "vmov\t%e0, %P1\n\tvmov\t%f0, %P1",
};

static const char *
output_1399 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1400 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1401 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1402 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1403 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1404 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1405 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1406 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3121 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1434 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3315 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.%T3%#32.f32\t%P0, %P1, %2";
}
}

static const char *
output_1435 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3315 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.%T3%#32.f32\t%q0, %q1, %2";
}
}

static const char *
output_1436 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3332 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1437 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3332 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1450 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3391 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1451 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3391 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1452 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3391 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1453 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3412 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1454 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3412 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1455 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3412 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1456 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3433 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmull.%T4%#16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1457 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3433 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmull.%T4%#32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1458 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3452 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmull.s16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1459 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3452 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmull.s32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1460 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3471 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vq%O4dmulh.%T4%#16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1461 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3471 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vq%O4dmulh.%T4%#32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1462 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3490 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vq%O4dmulh.%T4%#16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1463 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3490 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vq%O4dmulh.%T4%#32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1464 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3510 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmla.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1465 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3510 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmla.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1466 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3510 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmla.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1467 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3532 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmla.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1468 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3532 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmla.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1469 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3532 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmla.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1470 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3554 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlal.%T5%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1471 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3554 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlal.%T5%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1472 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3574 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlal.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1473 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3574 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlal.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1474 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3594 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmls.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1475 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3594 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmls.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1476 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3594 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmls.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1477 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3616 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmls.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1478 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3616 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmls.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1479 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3616 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmls.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1480 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3638 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlsl.%T5%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1481 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3638 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlsl.%T5%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1482 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3658 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlsl.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1483 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3658 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlsl.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1484 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8QImode));
  return "vext.8\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1485 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V16QImode));
  return "vext.8\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1486 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vext.16\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1487 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vext.16\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1488 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1489 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1490 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1491 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SFmode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1492 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (DImode));
  return "vext.64\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1493 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3886 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2DImode));
  return "vext.64\t%q0, %q1, %q2, %3";
}
}

static const char * const output_1509[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1510[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1511[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1512[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1513[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1514[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1515[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1516[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1517[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1518[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char *
output_1535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3995 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "v%O3shr.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3995 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "v%O3shr.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3995 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "v%O3shr.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3995 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "v%O3shr.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1539 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3995 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "v%O3shr.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3995 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "v%O3shr.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1541 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3995 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "v%O3shr.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3995 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "v%O3shr.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1543 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4009 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "v%O3shrn.i16\t%P0, %q1, %2";
}
}

static const char *
output_1544 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4009 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "v%O3shrn.i32\t%P0, %q1, %2";
}
}

static const char *
output_1545 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4009 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "v%O3shrn.i64\t%P0, %q1, %2";
}
}

static const char *
output_1546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4023 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vq%O3shrn.%T3%#16\t%P0, %q1, %2";
}
}

static const char *
output_1547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4023 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vq%O3shrn.%T3%#32\t%P0, %q1, %2";
}
}

static const char *
output_1548 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4023 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vq%O3shrn.%T3%#64\t%P0, %q1, %2";
}
}

static const char *
output_1549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4037 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vq%O3shrun.%T3%#16\t%P0, %q1, %2";
}
}

static const char *
output_1550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4037 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vq%O3shrun.%T3%#32\t%P0, %q1, %2";
}
}

static const char *
output_1551 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4037 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vq%O3shrun.%T3%#64\t%P0, %q1, %2";
}
}

static const char *
output_1552 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4051 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vshl.i8\t%P0, %P1, %2";
}
}

static const char *
output_1553 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4051 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vshl.i8\t%q0, %q1, %2";
}
}

static const char *
output_1554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4051 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vshl.i16\t%P0, %P1, %2";
}
}

static const char *
output_1555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4051 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vshl.i16\t%q0, %q1, %2";
}
}

static const char *
output_1556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4051 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vshl.i32\t%P0, %P1, %2";
}
}

static const char *
output_1557 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4051 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vshl.i32\t%q0, %q1, %2";
}
}

static const char *
output_1558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4051 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vshl.i64\t%P0, %P1, %2";
}
}

static const char *
output_1559 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4051 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vshl.i64\t%q0, %q1, %2";
}
}

static const char *
output_1560 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4065 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshl.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1561 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4065 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshl.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4065 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshl.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1563 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4065 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshl.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1564 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4065 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshl.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4065 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshl.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4065 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshl.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4065 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshl.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4079 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshlu.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1569 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4079 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshlu.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4079 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshlu.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1571 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4079 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshlu.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1572 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4079 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshlu.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1573 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4079 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshlu.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1574 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4079 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshlu.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1575 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4079 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshlu.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1576 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4093 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode) + 1);
  return "vshll.%T3%#8\t%q0, %P1, %2";
}
}

static const char *
output_1577 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4093 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode) + 1);
  return "vshll.%T3%#16\t%q0, %P1, %2";
}
}

static const char *
output_1578 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4093 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode) + 1);
  return "vshll.%T3%#32\t%q0, %P1, %2";
}
}

static const char *
output_1579 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "v%O4sra.%T4%#8\t%P0, %P2, %3";
}
}

static const char *
output_1580 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "v%O4sra.%T4%#8\t%q0, %q2, %3";
}
}

static const char *
output_1581 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "v%O4sra.%T4%#16\t%P0, %P2, %3";
}
}

static const char *
output_1582 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "v%O4sra.%T4%#16\t%q0, %q2, %3";
}
}

static const char *
output_1583 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "v%O4sra.%T4%#32\t%P0, %P2, %3";
}
}

static const char *
output_1584 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "v%O4sra.%T4%#32\t%q0, %q2, %3";
}
}

static const char *
output_1585 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "v%O4sra.%T4%#64\t%P0, %P2, %3";
}
}

static const char *
output_1586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4109 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "v%O4sra.%T4%#64\t%q0, %q2, %3";
}
}

static const char *
output_1587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4123 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsri.8\t%P0, %P2, %3";
}
}

static const char *
output_1588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4123 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsri.8\t%q0, %q2, %3";
}
}

static const char *
output_1589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4123 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsri.16\t%P0, %P2, %3";
}
}

static const char *
output_1590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4123 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsri.16\t%q0, %q2, %3";
}
}

static const char *
output_1591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4123 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsri.32\t%P0, %P2, %3";
}
}

static const char *
output_1592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4123 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsri.32\t%q0, %q2, %3";
}
}

static const char *
output_1593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4123 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsri.64\t%P0, %P2, %3";
}
}

static const char *
output_1594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4123 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsri.64\t%q0, %q2, %3";
}
}

static const char *
output_1595 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4140 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8QImode));
  return "vsli.8\t%P0, %P2, %3";
}
}

static const char *
output_1596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4140 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V16QImode));
  return "vsli.8\t%q0, %q2, %3";
}
}

static const char *
output_1597 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4140 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4HImode));
  return "vsli.16\t%P0, %P2, %3";
}
}

static const char *
output_1598 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4140 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8HImode));
  return "vsli.16\t%q0, %q2, %3";
}
}

static const char *
output_1599 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4140 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2SImode));
  return "vsli.32\t%P0, %P2, %3";
}
}

static const char *
output_1600 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4140 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4SImode));
  return "vsli.32\t%q0, %q2, %3";
}
}

static const char *
output_1601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4140 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (DImode));
  return "vsli.64\t%P0, %P2, %3";
}
}

static const char *
output_1602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4140 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2DImode));
  return "vsli.64\t%q0, %q2, %3";
}
}

static const char *
output_1604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4166 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1605 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4187 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1606 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4209 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1611 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4321 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1612 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4343 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1613 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4366 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1648 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4615 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.8\t%P0, %A1";
  else
    return "vld1.8\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4615 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4615 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1651 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4615 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1652 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4615 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.64\t%P0, %A1";
  else
    return "vld1.64\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1653 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4638 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vld1.8\t%P0, %A1";
  else
    return "vld1.8\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1654 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4638 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1655 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4638 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1656 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4638 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1657 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4638 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vld1.64\t%P0, %A1";
  else
    return "vld1.64\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1658 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4666 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    return "vld1.8\t{%P0[]}, %A1";
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_1659 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4666 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    return "vld1.16\t{%P0[]}, %A1";
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_1660 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4666 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    return "vld1.32\t{%P0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1661 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4666 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    return "vld1.32\t{%P0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1662 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4666 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    return "vld1.64\t{%P0[]}, %A1";
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_1663 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4682 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vld1.8\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1664 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4682 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vld1.16\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1665 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4682 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vld1.32\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1666 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4682 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vld1.32\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1678 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4726 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.8\t{%P1}, %A0";
  else
    return "vst1.8\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1679 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4726 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1680 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4726 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1681 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4726 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1682 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4726 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.64\t{%P1}, %A0";
  else
    return "vst1.64\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1683 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4748 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vst1.8\t{%P1}, %A0";
  else
    return "vst1.8\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1684 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4748 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1685 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4748 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1686 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4748 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1687 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4748 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vst1.64\t{%P1}, %A0";
  else
    return "vst1.64\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1688 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4782 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.8\t%h0, %A1";
}
}

static const char *
output_1689 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4782 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.16\t%h0, %A1";
}
}

static const char *
output_1690 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4782 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.32\t%h0, %A1";
}
}

static const char *
output_1691 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4782 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.32\t%h0, %A1";
}
}

static const char *
output_1692 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4782 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.64\t%h0, %A1";
}
}

static const char *
output_1697 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4818 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.8\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1698 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4818 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1699 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4818 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1700 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4818 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1701 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4843 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1702 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4843 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1703 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4843 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_1704 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4871 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    return "vld2.8\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_1705 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4871 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    return "vld2.16\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_1706 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4871 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1707 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4871 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1708 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4871 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    return "vld2.64\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_1709 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4896 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.8\t%h1, %A0";
}
}

static const char *
output_1710 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4896 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.16\t%h1, %A0";
}
}

static const char *
output_1711 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4896 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.32\t%h1, %A0";
}
}

static const char *
output_1712 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4896 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.32\t%h1, %A0";
}
}

static const char *
output_1713 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4896 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.64\t%h1, %A0";
}
}

static const char *
output_1718 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4933 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.8\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1719 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4933 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1720 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4933 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1721 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4933 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1722 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4958 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1723 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4958 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1724 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4958 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_1725 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4993 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.8\t%h0, %A1";
}
}

static const char *
output_1726 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4993 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.16\t%h0, %A1";
}
}

static const char *
output_1727 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4993 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.32\t%h0, %A1";
}
}

static const char *
output_1728 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4993 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.32\t%h0, %A1";
}
}

static const char *
output_1729 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4993 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.64\t%h0, %A1";
}
}

static const char *
output_1730 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5036 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1731 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5036 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1732 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5036 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1733 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5036 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1734 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5056 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1735 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5056 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1736 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5056 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1737 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5056 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_1738 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5077 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.8\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1739 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5077 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1740 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5077 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1741 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5077 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1742 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5104 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1743 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5104 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1744 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5104 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_1745 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5134 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.8\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_1746 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5134 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.16\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_1747 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5134 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1748 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5134 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1749 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5134 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.64\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_1750 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5167 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.8\t%h1, %A0";
}
}

static const char *
output_1751 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5167 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.16\t%h1, %A0";
}
}

static const char *
output_1752 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5167 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.32\t%h1, %A0";
}
}

static const char *
output_1753 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5167 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.32\t%h1, %A0";
}
}

static const char *
output_1754 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5167 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.64\t%h1, %A0";
}
}

static const char *
output_1755 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5209 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1756 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5209 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1757 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5209 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1758 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5209 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1759 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5228 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1760 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5228 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5228 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1762 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5228 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_1763 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5249 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.8\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1764 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5249 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1765 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5249 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1766 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5249 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1767 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5276 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1768 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5276 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1769 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5276 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_1770 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5312 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.8\t%h0, %A1";
}
}

static const char *
output_1771 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5312 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.16\t%h0, %A1";
}
}

static const char *
output_1772 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5312 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.32\t%h0, %A1";
}
}

static const char *
output_1773 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5312 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.32\t%h0, %A1";
}
}

static const char *
output_1774 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5312 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.64\t%h0, %A1";
}
}

static const char *
output_1775 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5355 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1776 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5355 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1777 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5355 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1778 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5355 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1779 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5376 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1780 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5376 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1781 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5376 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1782 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5376 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_1783 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5398 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.8\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1784 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5398 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1785 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5398 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1786 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5398 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1787 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5426 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1788 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5426 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1789 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5426 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_1790 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5457 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.8\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_1791 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5457 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.16\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_1792 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5457 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1793 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5457 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_1794 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5457 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.64\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_1795 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5493 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.8\t%h1, %A0";
}
}

static const char *
output_1796 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5493 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.16\t%h1, %A0";
}
}

static const char *
output_1797 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5493 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.32\t%h1, %A0";
}
}

static const char *
output_1798 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5493 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.32\t%h1, %A0";
}
}

static const char *
output_1799 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5493 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.64\t%h1, %A0";
}
}

static const char *
output_1800 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5536 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1801 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5536 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1802 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5536 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1803 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5536 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1804 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5556 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1805 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5556 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1806 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5556 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1807 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5556 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_1808 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5578 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.8\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1809 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5578 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1810 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5578 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1811 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5578 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1812 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5606 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1813 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5606 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1814 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5606 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_1839 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5817 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vshll.s8 %q0, %P1, %2";
}
}

static const char *
output_1840 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5817 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vshll.u8 %q0, %P1, %2";
}
}

static const char *
output_1841 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5817 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vshll.s16 %q0, %P1, %2";
}
}

static const char *
output_1842 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5817 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vshll.u16 %q0, %P1, %2";
}
}

static const char *
output_1843 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5817 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vshll.s32 %q0, %P1, %2";
}
}

static const char *
output_1844 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5817 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/neon.md"
{
  return "vshll.u32 %q0, %P1, %2";
}
}

static const char *
output_1881 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 50 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/sync.md"
{
    if (TARGET_HAVE_DMB)
      {
	/* Note we issue a system level barrier. We should consider issuing
	   a inner shareabilty zone barrier here instead, ie. "DMB ISH".  */
	/* ??? Differentiate based on SEQ_CST vs less strict?  */
	return "dmb\tsy";
      }

    if (TARGET_HAVE_DMB_MCR)
      return "mcr\tp15, 0, r0, c7, c10, 5";

    gcc_unreachable ();
  }
}

static const char *
output_1967 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 356 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/sync.md"
{
    if (QImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexb%?\t%0, %2, %C1";
  }
}

static const char *
output_1968 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 356 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/sync.md"
{
    if (HImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexh%?\t%0, %2, %C1";
  }
}

static const char *
output_1969 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 356 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/sync.md"
{
    if (SImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strex%?\t%0, %2, %C1";
  }
}

static const char *
output_1970 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 356 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/sync.md"
{
    if (DImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexd%?\t%0, %2, %C1";
  }
}

static const char *
output_2025 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 199 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-fixed.md"
{
  /* s16.15 * s16.15 -> s32.30.  */
  output_asm_insn ("smull\t%Q3, %R3, %1, %2", operands);

  if (TARGET_ARM)
    output_asm_insn ("msr\tAPSR_nzcvq, #0", operands);
  else
    {
      output_asm_insn ("mov\t%4, #0", operands);
      output_asm_insn ("msr\tAPSR_nzcvq, %4", operands);
    }

  /* We have:
      31  high word  0     31  low word  0 

    [ S i i .... i i i ] [ i f f f ... f f ]
                        |
			v
	     [ S i ... i f ... f f ]

    Need 16 integral bits, so saturate at 15th bit of high word.  */

  output_asm_insn ("ssat\t%R3, #15, %R3", operands);
  output_asm_insn ("mrs\t%4, APSR", operands);
  output_asm_insn ("tst\t%4, #1<<27", operands);
  if (TARGET_THUMB2)
    output_asm_insn ("it\tne", operands);
  output_asm_insn ("mvnne\t%Q3, %R3, asr #32", operands);
  output_asm_insn ("mov\t%0, %Q3, lsr #15", operands);
  output_asm_insn ("orr\t%0, %0, %R3, asl #17", operands);
  return "";
}
}

static const char *
output_2026 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 247 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm-fixed.md"
{
  /* 16.16 * 16.16 -> 32.32.  */
  output_asm_insn ("umull\t%Q3, %R3, %1, %2", operands);

  if (TARGET_ARM)
    output_asm_insn ("msr\tAPSR_nzcvq, #0", operands);
  else
    {
      output_asm_insn ("mov\t%4, #0", operands);
      output_asm_insn ("msr\tAPSR_nzcvq, %4", operands);
    }

  /* We have:
      31  high word  0     31  low word  0 

    [ i i i .... i i i ] [ f f f f ... f f ]
                        |
			v
	     [ i i ... i f ... f f ]

    Need 16 integral bits, so saturate at 16th bit of high word.  */

  output_asm_insn ("usat\t%R3, #16, %R3", operands);
  output_asm_insn ("mrs\t%4, APSR", operands);
  output_asm_insn ("tst\t%4, #1<<27", operands);
  if (TARGET_THUMB2)
    output_asm_insn ("it\tne", operands);
  output_asm_insn ("sbfxne\t%Q3, %R3, #15, #1", operands);
  output_asm_insn ("lsr\t%0, %Q3, #16", operands);
  output_asm_insn ("orr\t%0, %0, %R3, asl #16", operands);
  return "";
}
}

static const char * const output_3108[] = {
  "add%?\t%0, %0, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "addw%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "#",
};

static const char * const output_3110[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3112[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3113[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3114[] = {
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_3143[] = {
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "and%?\t%0, %1, %2",
  "#",
};

static const char *
output_3145 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2227 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_3150[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3157[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3159[] = {
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_3162[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3164[] = {
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "#",
};

static const char *
output_3170 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3438 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3171 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3438 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3172 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3463 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3173 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3463 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3174 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3786 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char * const output_3186[] = {
  "cmp\t%0, #0\n\trsblt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\tsub%?\t%0, %0, %1, asr #31",
};

static const char * const output_3187[] = {
  "cmp\t%0, #0\n\trsbgt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\trsb%?\t%0, %0, %1, asr #31",
};

static const char * const output_3188[] = {
  "vmvn\t%P0, %P1",
  "#",
  "#",
  "vmvn\t%P0, %P1",
};

static const char * const output_3197[] = {
  "#",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_3198[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_3200[] = {
  "#",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_3201[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_3204[] = {
  "#",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_3205[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_3207[] = {
  "#",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_3208[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_3211[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_3212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5812 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_3213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5827 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_3214[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_3215[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_3216[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char *
output_3217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6521 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char * const output_3218[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_3219[] = {
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_3221 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8176 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_3222 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8573 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, false);
  }
}

static const char *
output_3223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8632 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, true);
  }
}

static const char *
output_3228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10472 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char *
output_3229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10961 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_3230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10990 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_3231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11010 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char *
output_3291 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11640 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char * const output_3295[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_3296[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_3297[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_3299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3300 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3344 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 687 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3345 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 704 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3346 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 721 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3398 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1288 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3399 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1288 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3400 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1288 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrordg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3401 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1309 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrahg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3402 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1309 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrawg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3403 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1309 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsradg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3404 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1330 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3405 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1330 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3406 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1330 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3407 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1351 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3408 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1351 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3409 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1351 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wslldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3410 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1372 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3411 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1372 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3412 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1372 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrord%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3413 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1393 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrah%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3414 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1393 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsraw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3415 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1393 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrad%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3416 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1414 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1414 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1414 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1435 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3420 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1435 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1435 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wslld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3512 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 55 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3513 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 96 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
    case 5:
      return "ldr%?\t%0, %1";
    case 6:
    case 7:
      return "str%?\t%1, %0";
    case 8:
      return "fmsr%?\t%0, %1\t%@ int";
    case 9:
      return "fmrs%?\t%0, %1\t%@ int";
    case 10:
      return "fcpys%?\t%0, %1\t%@ int";
    case 11: case 12:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3514 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 194 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      return "fcpyd%?\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3515 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 353 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3516 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3517 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 432 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "fconstd%?\t%P0, #%G1";
      case 3: case 4:
	return output_move_vfp (operands);
      case 5: case 6:
	return output_move_double (operands, true, NULL);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      case 8:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char * const output_3520[] = {
  "fnegs%?\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_3521[] = {
  "fnegd%?\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_3563[] = {
  "fcmps%?\t%0, %1",
  "fcmpzs%?\t%0",
};

static const char * const output_3564[] = {
  "fcmpes%?\t%0, %1",
  "fcmpezs%?\t%0",
};

static const char * const output_3565[] = {
  "fcmpd%?\t%P0, %P1",
  "fcmpzd%?\t%P0",
};

static const char * const output_3566[] = {
  "fcmped%?\t%P0, %P1",
  "fcmpezd%?\t%P0",
};

static const char * const output_3569[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
};

static const char * const output_3570[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
};

static const char * const output_3578[] = {
  "cmp\t%0, #0\n\tit\tlt\n\trsblt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\tsub%?\t%0, %0, %1, asr #31",
};

static const char * const output_3579[] = {
  "cmp\t%0, #0\n\tit\tgt\n\trsbgt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\trsb%?\t%0, %0, %1, asr #31",
};

static const char * const output_3580[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
  "str%?\t%1, %0",
};

static const char * const output_3581[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_3582[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_3583[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_3584[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_3586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 686 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_3590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 711 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_3602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 356 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/sync.md"
{
    if (QImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexb%?\t%0, %2, %C1";
  }
}

static const char *
output_3603 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 356 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/sync.md"
{
    if (HImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexh%?\t%0, %2, %C1";
  }
}

static const char *
output_3604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 356 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/sync.md"
{
    if (SImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strex%?\t%0, %2, %C1";
  }
}

static const char *
output_3605 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 356 "/home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/sync.md"
{
    if (DImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexd%?\t%0, %2, %C1";
  }
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,0,r,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "r,0,r,Dd,Dd",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk,r,k,r,r,k,r,k,k,r,k,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,rk,k,r,rk,k,rk,k,r,rk,k,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rk,rI,rI,k,Pj,Pj,L,L,L,PJ,PJ,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,l,*rk,*hk,l,k,l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,l,*0,*0,k,k,0,l,k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "I,J,lL,*hk,*rk,M,O,Pa,Pb,Pc",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_addimm_operand,
    "L,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_addimm_operand,
    "I,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "lPd",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,rk,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rI,r,r,k,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,I,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "r,r,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&l,&l,&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%l,*h,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "?r,r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,K,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "I,K,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,r,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,K,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "N,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,0,rUq,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,V,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,>,l,m,*r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,I,J,>,l,mi,l,*r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,l,>,l,m,*l*h*k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,I,J,K,>,l,mi,l,*l*h*k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX,mX,mX",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,K,r,mi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r,K",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,l,Uu,r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,I,K,Uu,l,m,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,mF,l,*h,*r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r,*h",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*h,*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=r,r,r,r,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "rDa,Db,Dc,mF,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,l*h",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmpneg_operand,
    "L,J",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*!h,*?h,*?m,*?m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,X,l,l,&l,&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,l,*l,1,1,1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "IJ,lL,*l,lIJ,lIJ,lIJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,X,l,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%l,l,l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "J,l,L,IJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Py,r,rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_di_operand,
    "rDi",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=X,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,*h",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,0,rI,K,rI,rI,K,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rI,K,0,0,rI,K,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "X",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    CC_NOOVmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk,rk,r,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,l,r,r,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,lPy,lPy,rI,L,rI,L,rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,l,l,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,rI,L,lPy,lPy,rI,rI,L,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,0,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,0,?rI,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM,rM,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    push_mult_memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_fp,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,m,y,y,yr,y,yrUy,*w,r,*w,*w,*Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,r,y,yr,y,yrUy,y,r,*w,*w,*Uvi,*w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,z,r,?z,?Uy,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,z,Uy,z,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,z,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,K,mi,r,r,z",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,*mi,l,*hk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,r,r,m,w,r,w,w,Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,r,r,m,w,!r,w,w,Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=t,Um,r,m,t,r,t,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Um,t,m,r,t,r,r,t,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,t,r,t,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,t,r,r,t,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,Uv,r,m,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,UvF,w,mF,r,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=t,t,t,t,t,t,?r,?r,?r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,t,t,0,?r,?r,0,t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,0,t,?r,0,?r,t,0,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w,w,w,w,?r,?r,?r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w,0,?r,?r,0,w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w,?r,0,?r,w,0,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "tG",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "wG",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=x,x,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt,Dt,Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    vfp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "?r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,l,*hk,m,*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,*mi,l,*hk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,l,X,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0,1,0,1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,n,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "0,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "l,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPt,Ps,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Pv,l,IL,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "=Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "=Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?w,?&r,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,w,r,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "w,r,0,w,r,Dd,Dd",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,0,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,0,0,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,?&r,?&r,?w,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,r,w,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl,r,r,w,Dl",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,?&r,?&r,?w,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,r,w,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL,r,r,w,DL",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?=&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w,r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,&w,X,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "i,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,?&r,?r,?w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0w,w,0r,r,0w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "rUm,i,r,i,rUm,i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,X,?&r,X,X,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,?&r,X,X,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&w,X,X,X,&w,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,?&r,?r,?w,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0w,w,0r,r,0w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,i,r,i,r,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2r,X,&r,X,2r,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&r,X,X,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&w,X,X,X,&w,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "=Um",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    cmpdi_operand,
    "rDi",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reload_memory_operand,
    "=o",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reload_memory_operand,
    "o",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    lt_ge_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    commutative_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register,
    "",
    CC_NOOVmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    equality_operator,
    "",
    CC_NOOVmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_or_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_or_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk,r,k,r,r,k,r,k,k,r,k,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,rk,k,r,rk,k,rk,k,r,rk,k,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rk,rI,rI,k,Pj,Pj,L,L,L,PJ,PJ,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,rk,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rI,r,r,k,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,I,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,K,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,K,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,0,rUq,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,K,r,mi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r,K",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,l,Uu,r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,I,K,Uu,l,m,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Py,r,rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk,rk,r,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,*mi,l,*hk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,r,r,m,w,!r,w,w,Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,Uv,r,m,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,UvF,w,mF,r,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=x,x,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt,Dt,Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,l,*hk,m,*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,*mi,l,*hk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,n,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "0,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "l,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:569 */
  {
    "*thumb1_adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%Q0, %Q0, %Q2\n\tadc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:580 */
  {
    "*arm_adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    5,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:608 */
  {
    "*adddi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:637 */
  {
    "*adddi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:699 */
  {
    "*arm_addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_5 },
#else
    { 0, output_5, 0 },
#endif
    { 0 },
    &operand_data[10],
    3,
    3,
    0,
    12,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:737 */
  {
    "*thumb1_addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_6 },
#else
    { 0, 0, output_6 },
#endif
    { 0 },
    &operand_data[13],
    3,
    3,
    0,
    10,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:800 */
  {
    "addsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_7 },
#else
    { 0, output_7, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_compare0 },
    &operand_data[16],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:817 */
  {
    "*addsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_8 },
#else
    { 0, output_8, 0 },
#endif
    { 0 },
    &operand_data[17],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:834 */
  {
    "*compare_negsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[19],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:847 */
  {
    "*cmpsi2_addneg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    { 0 },
    &operand_data[21],
    4,
    4,
    1,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:903 */
  {
    "*addsi3_compare_op1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    { 0 },
    &operand_data[16],
    3,
    3,
    3,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:920 */
  {
    "*addsi3_compare_op2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    { 0 },
    &operand_data[16],
    3,
    3,
    3,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:937 */
  {
    "*compare_addsi2_op0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    { 0 },
    &operand_data[17],
    2,
    2,
    1,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:953 */
  {
    "*compare_addsi2_op1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    { 0 },
    &operand_data[17],
    2,
    2,
    1,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:969 */
  {
    "*addsi3_carryin_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_15 },
#else
    { 0, output_15, 0 },
#endif
    { 0 },
    &operand_data[25],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:969 */
  {
    "*addsi3_carryin_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_16 },
#else
    { 0, output_16, 0 },
#endif
    { 0 },
    &operand_data[25],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:981 */
  {
    "*addsi3_carryin_alt2_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_17 },
#else
    { 0, output_17, 0 },
#endif
    { 0 },
    &operand_data[28],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:981 */
  {
    "*addsi3_carryin_alt2_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_18 },
#else
    { 0, output_18, 0 },
#endif
    { 0 },
    &operand_data[28],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:993 */
  {
    "*addsi3_carryin_shift_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:993 */
  {
    "*addsi3_carryin_shift_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1009 */
  {
    "*addsi3_carryin_clobercc_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[36],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1009 */
  {
    "*addsi3_carryin_clobercc_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[36],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1029 */
  {
    "*arm_incscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_23 },
#else
    { 0, output_23, 0 },
#endif
    { 0 },
    &operand_data[39],
    4,
    4,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1090 */
  {
    "*arm_subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %Q2\n\tsbc\t%R0, %R1, %R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[43],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1101 */
  {
    "*thumb_subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%Q0, %Q0, %Q2\n\tsbc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[46],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1111 */
  {
    "*subdi_di_zesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %2\n\tsbc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1123 */
  {
    "*subdi_di_sesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %2\n\tsbc\t%R0, %R1, %2, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1135 */
  {
    "*subdi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, %2\n\trsc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1147 */
  {
    "*subdi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, %2\n\trsc\t%R0, %R1, %2, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1159 */
  {
    "*subdi_zesidi_zesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %1, %2\n\tsbc\t%R0, %1, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[49],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1193 */
  {
    "thumb1_subsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_subsi3_insn },
    &operand_data[52],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1203 */
  {
    "*arm_subsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_32 },
#else
    { 0, output_32, 0 },
#endif
    { 0 },
    &operand_data[55],
    3,
    3,
    0,
    5,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1240 */
  {
    "*subsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_33 },
#else
    { 0, output_33, 0 },
#endif
    { 0 },
    &operand_data[58],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1257 */
  {
    "*subsi3_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_34 },
#else
    { 0, output_34, 0 },
#endif
    { 0 },
    &operand_data[58],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1281 */
  {
    "*arm_decscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_35 },
#else
    { 0, output_35, 0 },
#endif
    { 0 },
    &operand_data[61],
    4,
    4,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1323 */
  {
    "*arm_mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[65],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1333 */
  {
    "*arm_mulsi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[68],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1348 */
  {
    "*thumb_mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_38 },
#else
    { 0, 0, output_38 },
#endif
    { 0 },
    &operand_data[71],
    3,
    3,
    0,
    3,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1363 */
  {
    "*thumb_mulsi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_39 },
#else
    { 0, output_39, 0 },
#endif
    { 0 },
    &operand_data[74],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1376 */
  {
    "*mulsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[65],
    3,
    3,
    2,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1390 */
  {
    "*mulsi3_compare0_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[68],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1404 */
  {
    "*mulsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[77],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1417 */
  {
    "*mulsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[80],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1432 */
  {
    "*mulsi3addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[83],
    4,
    4,
    0,
    4,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1444 */
  {
    "*mulsi3addsi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[87],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1456 */
  {
    "*mulsi3addsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[83],
    4,
    4,
    3,
    4,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1473 */
  {
    "*mulsi3addsi_compare0_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[87],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1490 */
  {
    "*mulsi3addsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[91],
    4,
    4,
    0,
    4,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1505 */
  {
    "*mulsi3addsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[95],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1520 */
  {
    "*mulsi3subsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mls%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[87],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1542 */
  {
    "*mulsidi3adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[99],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1555 */
  {
    "*mulsidi3adddi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[103],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1583 */
  {
    "*mulsidi3_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[107],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1594 */
  {
    "*mulsidi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[49],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1614 */
  {
    "*umulsidi3_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[107],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1625 */
  {
    "*umulsidi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[49],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1646 */
  {
    "*umulsidi3adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[99],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1659 */
  {
    "*umulsidi3adddi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[103],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1686 */
  {
    "*smulsi3_highpart_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[110],
    3,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1701 */
  {
    "*smulsi3_highpart_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[114],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1730 */
  {
    "*umulsi3_highpart_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[110],
    3,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1745 */
  {
    "*umulsi3_highpart_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[114],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1760 */
  {
    "mulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhisi3 },
    &operand_data[118],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1772 */
  {
    "*mulhisi3tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[121],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1785 */
  {
    "*mulhisi3bt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[124],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1798 */
  {
    "*mulhisi3tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[68],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1812 */
  {
    "maddhisi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlabb%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddhisi4 },
    &operand_data[127],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1826 */
  {
    "*maddhisi4tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlatb%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[131],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1840 */
  {
    "*maddhisi4tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlatt%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[87],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1855 */
  {
    "maddhidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlalbb%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddhidi4 },
    &operand_data[135],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1869 */
  {
    "*maddhidi4tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlaltb%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[139],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:1884 */
  {
    "*maddhidi4tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlaltt%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[143],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2027 */
  {
    "*anddi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[147],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2036 */
  {
    "*anddi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2057 */
  {
    "*anddi_sesdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2147 */
  {
    "*arm_andsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_76 },
#else
    { 0, output_76, 0 },
#endif
    { 0 },
    &operand_data[150],
    3,
    3,
    0,
    4,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2172 */
  {
    "*thumb1_andsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2182 */
  {
    "*andsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_78 },
#else
    { 0, output_78, 0 },
#endif
    { 0 },
    &operand_data[156],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2199 */
  {
    "*andsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_79 },
#else
    { 0, output_79, 0 },
#endif
    { 0 },
    &operand_data[157],
    2,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2215 */
  {
    "*zeroextractsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_80 },
#else
    { 0, 0, output_80 },
#endif
    { 0 },
    &operand_data[160],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2238 */
  {
    "*ne_zeroextractsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[163],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2275 */
  {
    "*ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[163],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2300 */
  {
    "*ite_ne_zeroextractsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[163],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2338 */
  {
    "*ite_ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[168],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2654 */
  {
    "insv_zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfc%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insv_zero },
    &operand_data[172],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2665 */
  {
    "insv_t2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfi%?\t%0, %3, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insv_t2 },
    &operand_data[172],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2677 */
  {
    "*anddi_notdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[176],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2701 */
  {
    "*anddi_notzesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_88 },
#else
    { 0, output_88, 0 },
#endif
    { 0 },
    &operand_data[179],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2728 */
  {
    "*anddi_notsesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2751 */
  {
    "andsi_notsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi_notsi_si },
    &operand_data[68],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2760 */
  {
    "thumb1_bicsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_bicsi3 },
    &operand_data[182],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2769 */
  {
    "andsi_not_shiftsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi_not_shiftsi_si },
    &operand_data[185],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2784 */
  {
    "*andsi_notsi_si_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[68],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2797 */
  {
    "*andsi_notsi_si_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[80],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2817 */
  {
    "*iordi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[147],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2827 */
  {
    "*iordi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_96 },
#else
    { 0, output_96, 0 },
#endif
    { 0 },
    &operand_data[179],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2840 */
  {
    "*iordi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2881 */
  {
    "*iorsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_98 },
#else
    { 0, output_98, 0 },
#endif
    { 0 },
    &operand_data[190],
    3,
    3,
    0,
    4,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2907 */
  {
    "*thumb1_iorsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2929 */
  {
    "*iorsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[193],
    3,
    3,
    2,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2942 */
  {
    "*iorsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[196],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2962 */
  {
    "*xordi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[147],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2972 */
  {
    "*xordi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_103 },
#else
    { 0, output_103, 0 },
#endif
    { 0 },
    &operand_data[179],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:2985 */
  {
    "*xordi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3024 */
  {
    "*arm_xorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_105 },
#else
    { 0, output_105, 0 },
#endif
    { 0 },
    &operand_data[199],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3047 */
  {
    "*thumb1_xorsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3058 */
  {
    "*xorsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[202],
    3,
    3,
    2,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3071 */
  {
    "*xorsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[203],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3099 */
  {
    "*andsi_iorsi3_notsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %2\n\tbic%?\t%0, %0, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[205],
    4,
    4,
    0,
    3,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3238 */
  {
    "*smax_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3247 */
  {
    "*smax_m1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3256 */
  {
    "*arm_smax_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_112 },
#else
    { 0, output_112, 0 },
#endif
    { 0 },
    &operand_data[209],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3287 */
  {
    "*smin_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3296 */
  {
    "*arm_smin_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_114 },
#else
    { 0, output_114, 0 },
#endif
    { 0 },
    &operand_data[209],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3319 */
  {
    "*arm_umaxsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_115 },
#else
    { 0, output_115, 0 },
#endif
    { 0 },
    &operand_data[212],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3343 */
  {
    "*arm_uminsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_116 },
#else
    { 0, output_116, 0 },
#endif
    { 0 },
    &operand_data[212],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3357 */
  {
    "*store_minmaxsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_117 },
#else
    { 0, 0, output_117 },
#endif
    { 0 },
    &operand_data[215],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3384 */
  {
    "*minmax_arithsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    { 0 },
    &operand_data[219],
    6,
    6,
    0,
    2,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3431 */
  {
    "*satsi_smax",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_119 },
#else
    { 0, 0, output_119 },
#endif
    { 0 },
    &operand_data[225],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3431 */
  {
    "*satsi_smin",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    { 0 },
    &operand_data[225],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3454 */
  {
    "*satsi_smax_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    { 0 },
    &operand_data[229],
    6,
    6,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3454 */
  {
    "*satsi_smin_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_122 },
#else
    { 0, 0, output_122 },
#endif
    { 0 },
    &operand_data[229],
    6,
    6,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3536 */
  {
    "arm_ashldi3_1bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%Q0, %Q1, asl #1\n\tadc\t%R0, %R1, %R1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_ashldi3_1bit },
    &operand_data[235],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3562 */
  {
    "*thumb1_ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsl\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[237],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3618 */
  {
    "arm_ashrdi3_1bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, asr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_ashrdi3_1bit },
    &operand_data[235],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3642 */
  {
    "*thumb1_ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "asr\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[237],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3698 */
  {
    "arm_lshrdi3_1bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, lsr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_lshrdi3_1bit },
    &operand_data[235],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3725 */
  {
    "*thumb1_lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsr\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[237],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3771 */
  {
    "*thumb1_rotrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror\t%0, %0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[240],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3780 */
  {
    "*arm_shiftsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    { 0 },
    &operand_data[243],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3794 */
  {
    "*shiftsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_131 },
#else
    { 0, 0, output_131 },
#endif
    { 0 },
    &operand_data[247],
    4,
    4,
    3,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3811 */
  {
    "*shiftsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_132 },
#else
    { 0, 0, output_132 },
#endif
    { 0 },
    &operand_data[251],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3824 */
  {
    "*not_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[255],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3837 */
  {
    "*not_shiftsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[255],
    4,
    4,
    3,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:3854 */
  {
    "*not_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[259],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4036 */
  {
    "unaligned_loadsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loadsi },
    &operand_data[263],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4047 */
  {
    "unaligned_loadhis",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sh%)\t%0, %1\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loadhis },
    &operand_data[265],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4059 */
  {
    "unaligned_loadhiu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(h%)\t%0, %1\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loadhiu },
    &operand_data[265],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4071 */
  {
    "unaligned_storesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%1, %0\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_storesi },
    &operand_data[267],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4082 */
  {
    "unaligned_storehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%(h%)\t%1, %0\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_storehi },
    &operand_data[269],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4093 */
  {
    "*extv_reg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[271],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4104 */
  {
    "extzv_t2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ubfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extzv_t2 },
    &operand_data[271],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4117 */
  {
    "divsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3 },
    &operand_data[68],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4127 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "udiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3 },
    &operand_data[68],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4157 */
  {
    "*arm_negdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, #0\n\trsc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[235],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4167 */
  {
    "*thumb1_negdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%R0, #0\n\tneg\t%Q0, %Q1\n\tsbc\t%R0, %R1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[275],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4183 */
  {
    "*arm_negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsb%?\t%0, %1, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4191 */
  {
    "*thumb1_negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[52],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4230 */
  {
    "*arm_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_149 },
#else
    { 0, output_149, 0 },
#endif
    { 0 },
    &operand_data[277],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4244 */
  {
    "*thumb1_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[279],
    2,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4258 */
  {
    "*arm_neg_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_151 },
#else
    { 0, output_151, 0 },
#endif
    { 0 },
    &operand_data[277],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4272 */
  {
    "*thumb1_neg_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[279],
    2,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4310 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_153 },
#else
    { 0, output_153, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmpldi2 },
    &operand_data[282],
    2,
    2,
    0,
    4,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4343 */
  {
    "*arm_one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4352 */
  {
    "*thumb1_one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[52],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4361 */
  {
    "*notsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    2,
    2,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4373 */
  {
    "*notsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[80],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4494 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqidi2 },
    &operand_data[284],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4494 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhidi2 },
    &operand_data[286],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4494 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendsidi2 },
    &operand_data[288],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4506 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqidi2 },
    &operand_data[290],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4506 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhidi2 },
    &operand_data[292],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4506 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendsidi2 },
    &operand_data[294],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4602 */
  {
    "*thumb1_zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_164 },
#else
    { 0, 0, output_164 },
#endif
    { 0 },
    &operand_data[296],
    2,
    2,
    0,
    2,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4645 */
  {
    "*arm_zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_165 },
#else
    { 0, output_165, 0 },
#endif
    { 0 },
    &operand_data[298],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4656 */
  {
    "*arm_zero_extendhisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_166 },
#else
    { 0, output_166, 0 },
#endif
    { 0 },
    &operand_data[298],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4667 */
  {
    "*arm_zero_extendhisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[124],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4714 */
  {
    "*thumb1_zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_168 },
#else
    { 0, output_168, 0 },
#endif
    { 0 },
    &operand_data[300],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4726 */
  {
    "*thumb1_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_169 },
#else
    { 0, output_169, 0 },
#endif
    { 0 },
    &operand_data[300],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4737 */
  {
    "*arm_zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_170 },
#else
    { 0, output_170, 0 },
#endif
    { 0 },
    &operand_data[302],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4749 */
  {
    "*arm_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_171 },
#else
    { 0, output_171, 0 },
#endif
    { 0 },
    &operand_data[302],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4760 */
  {
    "*arm_zero_extendqisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4812 */
  {
    "*compareqi_eq0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tst%?\t%0, #255",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[305],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4867 */
  {
    "thumb1_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_174 },
#else
    { 0, 0, output_174 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_extendhisi2 },
    &operand_data[307],
    2,
    3,
    0,
    2,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4981 */
  {
    "*arm_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    { 0 },
    &operand_data[298],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:4996 */
  {
    "*arm_extendhisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_176 },
#else
    { 0, output_176, 0 },
#endif
    { 0 },
    &operand_data[298],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5009 */
  {
    "*arm_extendhisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[124],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5042 */
  {
    "*arm_extendqihi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sb%)\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[310],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5081 */
  {
    "*arm_extendqisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_179 },
#else
    { 0, output_179, 0 },
#endif
    { 0 },
    &operand_data[312],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5095 */
  {
    "*arm_extendqisi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_180 },
#else
    { 0, output_180, 0 },
#endif
    { 0 },
    &operand_data[312],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5109 */
  {
    "*arm_extendqisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5191 */
  {
    "thumb1_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_182 },
#else
    { 0, 0, output_182 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_extendqisi2 },
    &operand_data[314],
    2,
    2,
    0,
    3,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5315 */
  {
    "*arm_movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_183 },
#else
    { 0, 0, output_183 },
#endif
    { 0 },
    &operand_data[316],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5437 */
  {
    "*thumb1_movdi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_184 },
#else
    { 0, 0, output_184 },
#endif
    { 0 },
    &operand_data[318],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5566 */
  {
    "*arm_movt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, #:upper16:%c2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[320],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5576 */
  {
    "*arm_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_186 },
#else
    { 0, output_186, 0 },
#endif
    { 0 },
    &operand_data[323],
    2,
    2,
    0,
    6,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5629 */
  {
    "*thumb1_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_187 },
#else
    { 0, output_187, 0 },
#endif
    { 0 },
    &operand_data[325],
    2,
    2,
    0,
    9,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5742 */
  {
    "pic_load_addr_unified",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_load_addr_unified },
    &operand_data[327],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5765 */
  {
    "pic_load_addr_32bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_load_addr_32bit },
    &operand_data[330],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5781 */
  {
    "pic_load_addr_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_load_addr_thumb1 },
    &operand_data[332],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5790 */
  {
    "pic_add_dot_plus_four",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_191 },
#else
    { 0, 0, output_191 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_add_dot_plus_four },
    &operand_data[334],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5805 */
  {
    "pic_add_dot_plus_eight",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_192 },
#else
    { 0, 0, output_192 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_add_dot_plus_eight },
    &operand_data[337],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5820 */
  {
    "tls_load_dot_plus_eight",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_193 },
#else
    { 0, 0, output_193 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tls_load_dot_plus_eight },
    &operand_data[337],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:5882 */
  {
    "*movsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_194 },
#else
    { 0, output_194, 0 },
#endif
    { 0 },
    &operand_data[340],
    2,
    2,
    1,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6205 */
  {
    "*thumb1_movhi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_195 },
#else
    { 0, 0, output_195 },
#endif
    { 0 },
    &operand_data[342],
    2,
    2,
    0,
    6,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6294 */
  {
    "*movhi_insn_arch4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_196 },
#else
    { 0, output_196, 0 },
#endif
    { 0 },
    &operand_data[344],
    2,
    2,
    0,
    4,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6319 */
  {
    "*movhi_bytes",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_197 },
#else
    { 0, output_197, 0 },
#endif
    { 0 },
    &operand_data[346],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6453 */
  {
    "*arm_movqi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_198 },
#else
    { 0, output_198, 0 },
#endif
    { 0 },
    &operand_data[348],
    2,
    2,
    0,
    7,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6474 */
  {
    "*thumb1_movqi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_199 },
#else
    { 0, output_199, 0 },
#endif
    { 0 },
    &operand_data[350],
    2,
    2,
    0,
    6,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6515 */
  {
    "*arm32_movhf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    { 0 },
    &operand_data[352],
    2,
    2,
    0,
    4,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6560 */
  {
    "*thumb1_movhf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    { 0 },
    &operand_data[354],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6633 */
  {
    "*arm_movsf_soft_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_202 },
#else
    { 0, output_202, 0 },
#endif
    { 0 },
    &operand_data[356],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6654 */
  {
    "*thumb1_movsf_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_203 },
#else
    { 0, output_203, 0 },
#endif
    { 0 },
    &operand_data[358],
    2,
    2,
    0,
    7,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6740 */
  {
    "*movdf_soft_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_204 },
#else
    { 0, 0, output_204 },
#endif
    { 0 },
    &operand_data[360],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6769 */
  {
    "*thumb_movdf_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    { 0 },
    &operand_data[362],
    2,
    2,
    0,
    6,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6894 */
  {
    "movmem12b",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movmem12b },
    &operand_data[364],
    4,
    7,
    6,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:6916 */
  {
    "movmem8b",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movmem8b },
    &operand_data[364],
    4,
    6,
    4,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7046 */
  {
    "cbranchsi4_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4_insn },
    &operand_data[371],
    4,
    4,
    0,
    2,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7106 */
  {
    "cbranchsi4_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4_scratch },
    &operand_data[375],
    5,
    5,
    0,
    2,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7142 */
  {
    "*negated_cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    { 0 },
    &operand_data[380],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7177 */
  {
    "*tbit_cbranch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    { 0 },
    &operand_data[384],
    4,
    5,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7221 */
  {
    "*tlobits_cbranch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    { 0 },
    &operand_data[384],
    4,
    5,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7265 */
  {
    "*tstsi3_cbranch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    { 0 },
    &operand_data[389],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7302 */
  {
    "*cbranchne_decr1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    { 0 },
    &operand_data[393],
    5,
    5,
    1,
    4,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7405 */
  {
    "*addsi3_cbranch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    { 0 },
    &operand_data[398],
    6,
    6,
    2,
    6,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7486 */
  {
    "*addsi3_cbranch_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    { 0 },
    &operand_data[404],
    5,
    5,
    0,
    4,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7557 */
  {
    "*arm_cmpsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_217 },
#else
    { 0, output_217, 0 },
#endif
    { 0 },
    &operand_data[409],
    2,
    2,
    0,
    4,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7574 */
  {
    "*cmpsi_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[411],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7587 */
  {
    "*cmpsi_shiftsi_swp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[411],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7600 */
  {
    "*arm_cmpsi_negshiftsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%0, %2%S1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[32],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7620 */
  {
    "*arm_cmpdi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%Q0, %Q1\n\tsbcs\t%2, %R0, %R1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[415],
    2,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7631 */
  {
    "*arm_cmpdi_unsigned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%R0, %R1\n\tit eq\n\tcmpeq\t%Q0, %Q1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[415],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7641 */
  {
    "*arm_cmpdi_zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%1, %Q0, %R0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[418],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7651 */
  {
    "*thumb_cmpdi_zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr\t%1, %Q0, %R0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[420],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7668 */
  {
    "*deleted_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "\t%@ deleted compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[64],
    1,
    1,
    1,
    0,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7695 */
  {
    "arm_cond_branch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_cond_branch },
    &operand_data[422],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7721 */
  {
    "*arm_cond_branch_reversed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_227 },
#else
    { 0, 0, output_227 },
#endif
    { 0 },
    &operand_data[422],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7761 */
  {
    "*mov_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmov%d1\t%0, #1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[425],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7772 */
  {
    "*mov_negscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmvn%d1\t%0, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[425],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7783 */
  {
    "*mov_notscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%D1\t%0, #0\n\tmvn%d1\t%0, #1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[425],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7987 */
  {
    "*cstoresi_eq0_thumb1_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_231 },
#else
    { 0, output_231, 0 },
#endif
    { 0 },
    &operand_data[428],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:7999 */
  {
    "*cstoresi_ne0_thumb1_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%2, %1, #1\n\tsbc\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[431],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8010 */
  {
    "cstoresi_nltu_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%1, %2\n\tsbc\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresi_nltu_thumb1 },
    &operand_data[434],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8019 */
  {
    "cstoresi_ltu_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresi_ltu_thumb1 },
    &operand_data[434],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8034 */
  {
    "thumb1_addsi3_addgeu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%3, %4\n\tadc\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_addsi3_addgeu },
    &operand_data[437],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8113 */
  {
    "*movsicc_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_236 },
#else
    { 0, output_236, 0 },
#endif
    { 0 },
    &operand_data[442],
    5,
    5,
    0,
    8,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8148 */
  {
    "*movsfcc_soft_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_237 },
#else
    { 0, output_237, 0 },
#endif
    { 0 },
    &operand_data[447],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8172 */
  {
    "*arm_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_238 },
#else
    { 0, 0, output_238 },
#endif
    { 0 },
    &operand_data[336],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8196 */
  {
    "*thumb_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_239 },
#else
    { 0, 0, output_239 },
#endif
    { 0 },
    &operand_data[336],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8253 */
  {
    "*call_reg_armv5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[452],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8263 */
  {
    "*call_reg_arm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_241 },
#else
    { 0, 0, output_241 },
#endif
    { 0 },
    &operand_data[452],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8282 */
  {
    "*call_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_242 },
#else
    { 0, 0, output_242 },
#endif
    { 0 },
    &operand_data[455],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8295 */
  {
    "*call_reg_thumb1_v5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[458],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8306 */
  {
    "*call_reg_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_244 },
#else
    { 0, 0, output_244 },
#endif
    { 0 },
    &operand_data[458],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8364 */
  {
    "*call_value_reg_armv5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[460],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8375 */
  {
    "*call_value_reg_arm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_246 },
#else
    { 0, 0, output_246 },
#endif
    { 0 },
    &operand_data[460],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8391 */
  {
    "*call_value_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_247 },
#else
    { 0, 0, output_247 },
#endif
    { 0 },
    &operand_data[454],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8405 */
  {
    "*call_value_reg_thumb1_v5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[457],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8417 */
  {
    "*call_value_reg_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_249 },
#else
    { 0, 0, output_249 },
#endif
    { 0 },
    &operand_data[457],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8441 */
  {
    "*call_symbol",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_250 },
#else
    { 0, 0, output_250 },
#endif
    { 0 },
    &operand_data[464],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8456 */
  {
    "*call_value_symbol",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_251 },
#else
    { 0, 0, output_251 },
#endif
    { 0 },
    &operand_data[466],
    4,
    4,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8472 */
  {
    "*call_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[467],
    3,
    3,
    0,
    0,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8485 */
  {
    "*call_value_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[469],
    4,
    4,
    0,
    0,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8527 */
  {
    "*sibcall_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_254 },
#else
    { 0, 0, output_254 },
#endif
    { 0 },
    &operand_data[473],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8539 */
  {
    "*sibcall_value_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_255 },
#else
    { 0, 0, output_255 },
#endif
    { 0 },
    &operand_data[472],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8570 */
  {
    "*arm_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_256 },
#else
    { 0, 0, output_256 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8587 */
  {
    "*cond_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_257 },
#else
    { 0, 0, output_257 },
#endif
    { 0 },
    &operand_data[423],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8608 */
  {
    "*cond_return_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_258 },
#else
    { 0, 0, output_258 },
#endif
    { 0 },
    &operand_data[423],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8629 */
  {
    "*arm_simple_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_259 },
#else
    { 0, 0, output_259 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8663 */
  {
    "*check_arch2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq\t%|r0, %|r0\n\tteq\t%|pc, %|pc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[476],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8796 */
  {
    "blockage",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_blockage },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8844 */
  {
    "arm_casesi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_262 },
#else
    { 0, 0, output_262 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_casesi_internal },
    &operand_data[477],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8882 */
  {
    "thumb1_casesi_dispatch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_263 },
#else
    { 0, 0, output_263 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb1_casesi_dispatch },
    &operand_data[336],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8913 */
  {
    "*arm_indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%|pc, %0\t%@ indirect register jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[19],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8921 */
  {
    "*load_indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, %0\t%@ indirect memory jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[481],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8933 */
  {
    "*thumb1_indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\tpc, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[458],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8945 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_267 },
#else
    { 0, 0, output_267 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nop },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:8964 */
  {
    "*arith_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[482],
    6,
    6,
    0,
    4,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9014 */
  {
    "*arith_shiftsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[488],
    6,
    6,
    5,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9033 */
  {
    "*arith_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[494],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9050 */
  {
    "*sub_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[500],
    5,
    5,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9063 */
  {
    "*sub_shiftsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[505],
    5,
    5,
    4,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9081 */
  {
    "*sub_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[510],
    5,
    5,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9098 */
  {
    "*and_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tand%d1\t%0, %2, #1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[515],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9110 */
  {
    "*ior_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_275 },
#else
    { 0, output_275, 0 },
#endif
    { 0 },
    &operand_data[61],
    4,
    4,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9186 */
  {
    "*compare_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[519],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9240 */
  {
    "*cond_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_277 },
#else
    { 0, 0, output_277 },
#endif
    { 0 },
    &operand_data[523],
    6,
    6,
    0,
    3,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9269 */
  {
    "*cond_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_278 },
#else
    { 0, 0, output_278 },
#endif
    { 0 },
    &operand_data[529],
    6,
    6,
    0,
    2,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9295 */
  {
    "*cond_sub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_279 },
#else
    { 0, 0, output_279 },
#endif
    { 0 },
    &operand_data[529],
    5,
    5,
    0,
    2,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9313 */
  {
    "*cmp_ite0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_280 },
#else
    { 0, 0, output_280 },
#endif
    { 0 },
    &operand_data[535],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9394 */
  {
    "*cmp_ite1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_281 },
#else
    { 0, 0, output_281 },
#endif
    { 0 },
    &operand_data[535],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9476 */
  {
    "*cmp_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_282 },
#else
    { 0, 0, output_282 },
#endif
    { 0 },
    &operand_data[535],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9557 */
  {
    "*cmp_ior",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_283 },
#else
    { 0, 0, output_283 },
#endif
    { 0 },
    &operand_data[535],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9638 */
  {
    "*ior_scc_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[542],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9668 */
  {
    "*ior_scc_scc_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[549],
    8,
    8,
    6,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9694 */
  {
    "*and_scc_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[542],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9726 */
  {
    "*and_scc_scc_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[549],
    8,
    8,
    6,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9756 */
  {
    "*and_scc_scc_nodom",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[557],
    7,
    7,
    0,
    3,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9825 */
  {
    "*negscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_289 },
#else
    { 0, 0, output_289 },
#endif
    { 0 },
    &operand_data[564],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9847 */
  {
    "movcond",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_290 },
#else
    { 0, 0, output_290 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movcond },
    &operand_data[568],
    6,
    6,
    0,
    3,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9912 */
  {
    "*ifcompare_plus_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[574],
    7,
    7,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9928 */
  {
    "*if_plus_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_292 },
#else
    { 0, output_292, 0 },
#endif
    { 0 },
    &operand_data[581],
    6,
    6,
    0,
    4,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9954 */
  {
    "*ifcompare_move_plus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[574],
    7,
    7,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9970 */
  {
    "*if_move_plus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_294 },
#else
    { 0, output_294, 0 },
#endif
    { 0 },
    &operand_data[581],
    6,
    6,
    0,
    4,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:9996 */
  {
    "*ifcompare_arith_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[587],
    10,
    10,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10014 */
  {
    "*if_arith_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%I6%d5\t%0, %1, %2\n\t%I7%D5\t%0, %3, %4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[597],
    9,
    9,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10030 */
  {
    "*ifcompare_arith_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_297 },
#else
    { 0, 0, output_297 },
#endif
    { 0 },
    &operand_data[606],
    8,
    8,
    0,
    2,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10071 */
  {
    "*if_arith_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_298 },
#else
    { 0, output_298, 0 },
#endif
    { 0 },
    &operand_data[614],
    7,
    7,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10088 */
  {
    "*ifcompare_move_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_299 },
#else
    { 0, 0, output_299 },
#endif
    { 0 },
    &operand_data[621],
    8,
    8,
    0,
    2,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10130 */
  {
    "*if_move_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_300 },
#else
    { 0, output_300, 0 },
#endif
    { 0 },
    &operand_data[614],
    7,
    7,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10148 */
  {
    "*ifcompare_move_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[629],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10164 */
  {
    "*if_move_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_302 },
#else
    { 0, output_302, 0 },
#endif
    { 0 },
    &operand_data[635],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10181 */
  {
    "*ifcompare_not_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[629],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10197 */
  {
    "*if_not_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_304 },
#else
    { 0, output_304, 0 },
#endif
    { 0 },
    &operand_data[635],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10214 */
  {
    "*ifcompare_shift_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[640],
    8,
    8,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10231 */
  {
    "*if_shift_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_306 },
#else
    { 0, output_306, 0 },
#endif
    { 0 },
    &operand_data[648],
    7,
    7,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10254 */
  {
    "*ifcompare_move_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[640],
    8,
    8,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10271 */
  {
    "*if_move_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_308 },
#else
    { 0, output_308, 0 },
#endif
    { 0 },
    &operand_data[648],
    7,
    7,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10294 */
  {
    "*ifcompare_shift_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[655],
    10,
    10,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10313 */
  {
    "*if_shift_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%d5\t%0, %1%S6\n\tmov%D5\t%0, %3%S7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[665],
    9,
    9,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10337 */
  {
    "*ifcompare_not_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[674],
    8,
    8,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10354 */
  {
    "*if_not_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%d5\t%0, %1\n\t%I6%D5\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[682],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10370 */
  {
    "*ifcompare_arith_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[674],
    8,
    8,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10387 */
  {
    "*if_arith_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%D5\t%0, %1\n\t%I6%d5\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[682],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10403 */
  {
    "*ifcompare_neg_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[629],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10418 */
  {
    "*if_neg_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_316 },
#else
    { 0, output_316, 0 },
#endif
    { 0 },
    &operand_data[635],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10434 */
  {
    "*ifcompare_move_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[629],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10449 */
  {
    "*if_move_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_318 },
#else
    { 0, output_318, 0 },
#endif
    { 0 },
    &operand_data[635],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10465 */
  {
    "*arith_adjacentmem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_319 },
#else
    { 0, 0, output_319 },
#endif
    { 0 },
    &operand_data[689],
    4,
    5,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10656 */
  {
    "prologue_thumb1_interwork",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_320 },
#else
    { 0, 0, output_320 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prologue_thumb1_interwork },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10678 */
  {
    "*epilogue_insns",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_321 },
#else
    { 0, 0, output_321 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10835 */
  {
    "*cond_move_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_322 },
#else
    { 0, output_322, 0 },
#endif
    { 0 },
    &operand_data[694],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10854 */
  {
    "*sign_extract_onebit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_323 },
#else
    { 0, 0, output_323 },
#endif
    { 0 },
    &operand_data[163],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10870 */
  {
    "*not_signextract_onebit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_324 },
#else
    { 0, 0, output_324 },
#endif
    { 0 },
    &operand_data[163],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10894 */
  {
    "*push_multi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_325 },
#else
    { 0, 0, output_325 },
#endif
    { 0 },
    &operand_data[699],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10940 */
  {
    "stack_tie",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_tie },
    &operand_data[702],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10952 */
  {
    "*load_multiple_with_writeback",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_327 },
#else
    { 0, 0, output_327 },
#endif
    { 0 },
    &operand_data[704],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:10980 */
  {
    "*pop_multiple_with_writeback_and_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_328 },
#else
    { 0, 0, output_328 },
#endif
    { 0 },
    &operand_data[708],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11003 */
  {
    "*pop_multiple_with_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_329 },
#else
    { 0, 0, output_329 },
#endif
    { 0 },
    &operand_data[712],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11024 */
  {
    "*ldr_with_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, [%0], #4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[705],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11034 */
  {
    "*vfp_pop_multiple_with_writeback",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_331 },
#else
    { 0, 0, output_331 },
#endif
    { 0 },
    &operand_data[715],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11070 */
  {
    "align_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_332 },
#else
    { 0, 0, output_332 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_align_4 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11079 */
  {
    "align_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_333 },
#else
    { 0, 0, output_333 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_align_8 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11088 */
  {
    "consttable_end",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_334 },
#else
    { 0, 0, output_334 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_end },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11097 */
  {
    "consttable_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_335 },
#else
    { 0, 0, output_335 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_1 },
    &operand_data[336],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11109 */
  {
    "consttable_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_336 },
#else
    { 0, 0, output_336 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_2 },
    &operand_data[336],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11122 */
  {
    "consttable_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_337 },
#else
    { 0, 0, output_337 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_4 },
    &operand_data[336],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11158 */
  {
    "consttable_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_338 },
#else
    { 0, 0, output_338 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_8 },
    &operand_data[336],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11182 */
  {
    "consttable_16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_339 },
#else
    { 0, 0, output_339 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_16 },
    &operand_data[336],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11226 */
  {
    "*thumb1_tablejump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%|pc, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[458],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11236 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzsi2 },
    &operand_data[31],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11244 */
  {
    "rbitsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rbit%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rbitsi2 },
    &operand_data[31],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11268 */
  {
    "prefetch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pld\t%a0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prefetch },
    &operand_data[719],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11285 */
  {
    "force_register_use",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%@ %0 needed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_force_register_use },
    &operand_data[722],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11309 */
  {
    "arm_eh_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_eh_return },
    &operand_data[723],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11324 */
  {
    "thumb_eh_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_thumb_eh_return },
    &operand_data[280],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11342 */
  {
    "load_tp_hard",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mrc%?\tp15, 0, %0, c13, c0, 3\t@ load_tp_hard",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_tp_hard },
    &operand_data[334],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11351 */
  {
    "load_tp_soft",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t__aeabi_read_tp\t@ load_tp_soft",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_tp_soft },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11362 */
  {
    "tlscall",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_349 },
#else
    { 0, 0, output_349 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tlscall },
    &operand_data[473],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11394 */
  {
    "*arm_movtas_ze",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, %L1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[725],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11405 */
  {
    "*arm_rev",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_351 },
#else
    { 0, output_351, 0 },
#endif
    { 0 },
    &operand_data[727],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11505 */
  {
    "*arm_revsh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_352 },
#else
    { 0, output_352, 0 },
#endif
    { 0 },
    &operand_data[729],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11517 */
  {
    "*arm_rev16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_353 },
#else
    { 0, output_353, 0 },
#endif
    { 0 },
    &operand_data[731],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11538 */
  {
    "*thumb2_ldrd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrd%?\t%0, %3, [%1, %2]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[733],
    5,
    5,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11555 */
  {
    "*thumb2_ldrd_base",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrd%?\t%0, %2, [%1]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[738],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11569 */
  {
    "*thumb2_ldrd_base_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrd%?\t%0, %2, [%1, #-4]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[738],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11583 */
  {
    "*thumb2_strd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "strd%?\t%2, %4, [%0, %1]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[741],
    5,
    5,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11600 */
  {
    "*thumb2_strd_base",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "strd%?\t%1, %2, [%0]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[746],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11614 */
  {
    "*thumb2_strd_base_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "strd%?\t%1, %2, [%0, #-4]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[746],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:24 */
  {
    "*ldm4_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[749],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:42 */
  {
    "*thumb_ldm4_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[755],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:59 */
  {
    "*ldm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[761],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:79 */
  {
    "*thumb_ldm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[767],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:98 */
  {
    "*stm4_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[773],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:113 */
  {
    "*stm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[779],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:130 */
  {
    "*thumb_stm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[785],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:146 */
  {
    "*ldm4_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[749],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:165 */
  {
    "*ldm4_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[761],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:186 */
  {
    "*stm4_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[773],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:201 */
  {
    "*stm4_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[779],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:218 */
  {
    "*ldm4_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[749],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:236 */
  {
    "*ldm4_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[761],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:256 */
  {
    "*stm4_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[773],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:271 */
  {
    "*stm4_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[779],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:288 */
  {
    "*ldm4_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[749],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:307 */
  {
    "*ldm4_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[761],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:328 */
  {
    "*stm4_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[773],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:343 */
  {
    "*stm4_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[779],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:467 */
  {
    "*ldm3_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[791],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:482 */
  {
    "*thumb_ldm3_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[796],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:496 */
  {
    "*ldm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[801],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:513 */
  {
    "*thumb_ldm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[806],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:529 */
  {
    "*stm3_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[811],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:542 */
  {
    "*stm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[816],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:557 */
  {
    "*thumb_stm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[821],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:571 */
  {
    "*ldm3_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[791],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:587 */
  {
    "*ldm3_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[801],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:605 */
  {
    "*stm3_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[811],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:618 */
  {
    "*stm3_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[816],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:633 */
  {
    "*ldm3_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[791],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:648 */
  {
    "*ldm3_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[801],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:665 */
  {
    "*stm3_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[811],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:678 */
  {
    "*stm3_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[816],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:693 */
  {
    "*ldm3_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[791],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:709 */
  {
    "*ldm3_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[801],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:727 */
  {
    "*stm3_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[811],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:740 */
  {
    "*stm3_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[816],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:848 */
  {
    "*ldm2_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[826],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:860 */
  {
    "*thumb_ldm2_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[830],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:871 */
  {
    "*ldm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[834],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:885 */
  {
    "*thumb_ldm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:898 */
  {
    "*stm2_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[842],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:909 */
  {
    "*stm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[846],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:922 */
  {
    "*thumb_stm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[850],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:934 */
  {
    "*ldm2_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[826],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:947 */
  {
    "*ldm2_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[834],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:962 */
  {
    "*stm2_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[842],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:973 */
  {
    "*stm2_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[846],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:986 */
  {
    "*ldm2_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[826],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:998 */
  {
    "*ldm2_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[834],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:1012 */
  {
    "*stm2_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[842],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:1023 */
  {
    "*stm2_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[846],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:1036 */
  {
    "*ldm2_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[826],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:1049 */
  {
    "*ldm2_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[834],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:1064 */
  {
    "*stm2_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[842],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/ldmstm.md:1075 */
  {
    "*stm2_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[846],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/arm.md:11634 */
  {
    "*load_multiple",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_417 },
#else
    { 0, 0, output_417 },
#endif
    { 0 },
    &operand_data[854],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:30 */
  {
    "tbcstv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstb%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tbcstv8qi },
    &operand_data[857],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:39 */
  {
    "tbcstv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcsth%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tbcstv4hi },
    &operand_data[859],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:48 */
  {
    "tbcstv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstw%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tbcstv2si },
    &operand_data[861],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:57 */
  {
    "iwmmxt_iordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_421 },
#else
    { 0, output_421, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_iordi3 },
    &operand_data[863],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:71 */
  {
    "iwmmxt_xordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_422 },
#else
    { 0, output_422, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_xordi3 },
    &operand_data[863],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:85 */
  {
    "iwmmxt_anddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_423 },
#else
    { 0, output_423, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_anddi3 },
    &operand_data[863],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:99 */
  {
    "iwmmxt_nanddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wandn%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_nanddi3 },
    &operand_data[866],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:109 */
  {
    "*iwmmxt_arm_movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_425 },
#else
    { 0, 0, output_425 },
#endif
    { 0 },
    &operand_data[869],
    2,
    2,
    0,
    15,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:164 */
  {
    "*iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_426 },
#else
    { 0, 0, output_426 },
#endif
    { 0 },
    &operand_data[871],
    2,
    2,
    0,
    15,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:210 */
  {
    "*cond_iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_427 },
#else
    { 0, 0, output_427 },
#endif
    { 0 },
    &operand_data[873],
    4,
    4,
    0,
    6,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:235 */
  {
    "movv2si_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_428 },
#else
    { 0, 0, output_428 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2si_internal },
    &operand_data[877],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:235 */
  {
    "movv4hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_429 },
#else
    { 0, 0, output_429 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4hi_internal },
    &operand_data[879],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:235 */
  {
    "movv8qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_430 },
#else
    { 0, 0, output_430 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv8qi_internal },
    &operand_data[881],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:314 */
  {
    "*andv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:314 */
  {
    "*andv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:314 */
  {
    "*andv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:324 */
  {
    "*iorv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:324 */
  {
    "*iorv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:324 */
  {
    "*iorv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:334 */
  {
    "*xorv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:334 */
  {
    "*xorv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:334 */
  {
    "*xorv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:347 */
  {
    "*addv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:347 */
  {
    "*addv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:347 */
  {
    "*addv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:357 */
  {
    "ssaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv8qi3 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:367 */
  {
    "ssaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv4hi3 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:377 */
  {
    "ssaddv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv2si3 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:387 */
  {
    "usaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv8qi3 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:397 */
  {
    "usaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv4hi3 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:407 */
  {
    "usaddv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv2si3 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:417 */
  {
    "*subv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:417 */
  {
    "*subv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:417 */
  {
    "*subv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:427 */
  {
    "sssubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv8qi3 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:437 */
  {
    "sssubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv4hi3 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:447 */
  {
    "sssubv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv2si3 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:457 */
  {
    "ussubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv8qi3 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:467 */
  {
    "ussubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv4hi3 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:477 */
  {
    "ussubv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv2si3 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:487 */
  {
    "*mulv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:497 */
  {
    "smulv4hi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulsm%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulv4hi3_highpart },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:510 */
  {
    "umulv4hi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulum%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulv4hi3_highpart },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:523 */
  {
    "iwmmxt_wmacs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wmacs },
    &operand_data[892],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:534 */
  {
    "iwmmxt_wmacsz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacsz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wmacsz },
    &operand_data[896],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:544 */
  {
    "iwmmxt_wmacu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacu%?\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wmacu },
    &operand_data[892],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:555 */
  {
    "iwmmxt_wmacuz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacuz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wmacuz },
    &operand_data[896],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:567 */
  {
    "iwmmxt_clrdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_clrdi },
    &operand_data[866],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:578 */
  {
    "iwmmxt_clrv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_clrv8qi },
    &operand_data[899],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:590 */
  {
    "iwmmxt_clrv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_clrv4hi },
    &operand_data[900],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:600 */
  {
    "iwmmxt_clrv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_clrv2si },
    &operand_data[861],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:611 */
  {
    "iwmmxt_uavgrndv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2br%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_uavgrndv8qi3 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:633 */
  {
    "iwmmxt_uavgrndv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2hr%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_uavgrndv4hi3 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:651 */
  {
    "iwmmxt_uavgv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2b%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_uavgv8qi3 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:664 */
  {
    "iwmmxt_uavgv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2h%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_uavgv4hi3 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:679 */
  {
    "iwmmxt_tinsrb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_473 },
#else
    { 0, 0, output_473 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_tinsrb },
    &operand_data[901],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:696 */
  {
    "iwmmxt_tinsrh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_474 },
#else
    { 0, 0, output_474 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_tinsrh },
    &operand_data[905],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:713 */
  {
    "iwmmxt_tinsrw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_475 },
#else
    { 0, 0, output_475 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_tinsrw },
    &operand_data[909],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:730 */
  {
    "iwmmxt_textrmub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmub },
    &operand_data[913],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:741 */
  {
    "iwmmxt_textrmsb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmsb },
    &operand_data[913],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:752 */
  {
    "iwmmxt_textrmuh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmuh },
    &operand_data[916],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:763 */
  {
    "iwmmxt_textrmsh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmsh },
    &operand_data[916],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:776 */
  {
    "iwmmxt_textrmw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmw },
    &operand_data[919],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:786 */
  {
    "iwmmxt_wshufh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wshufh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wshufh },
    &operand_data[922],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:807 */
  {
    "eqv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eqv8qi3 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:818 */
  {
    "eqv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eqv4hi3 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:829 */
  {
    "eqv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eqv2si3 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:841 */
  {
    "gtuv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtuv8qi3 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:852 */
  {
    "gtuv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtuv4hi3 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:863 */
  {
    "gtuv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtuv2si3 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:874 */
  {
    "gtv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtv8qi3 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:885 */
  {
    "gtv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtv4hi3 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:896 */
  {
    "gtv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtv2si3 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:909 */
  {
    "*smaxv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:909 */
  {
    "*smaxv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:909 */
  {
    "*smaxv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:919 */
  {
    "*umaxv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:919 */
  {
    "*umaxv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:919 */
  {
    "*umaxv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:929 */
  {
    "*sminv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:929 */
  {
    "*sminv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:929 */
  {
    "*sminv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:939 */
  {
    "*uminv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:939 */
  {
    "*uminv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:939 */
  {
    "*uminv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:951 */
  {
    "iwmmxt_wpackhss",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackhss },
    &operand_data[925],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:962 */
  {
    "iwmmxt_wpackwss",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackwss },
    &operand_data[928],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:973 */
  {
    "iwmmxt_wpackdss",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackdss },
    &operand_data[931],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:984 */
  {
    "iwmmxt_wpackhus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackhus },
    &operand_data[925],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:995 */
  {
    "iwmmxt_wpackwus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackwus },
    &operand_data[928],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1006 */
  {
    "iwmmxt_wpackdus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackdus },
    &operand_data[931],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1017 */
  {
    "iwmmxt_wunpckihb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckihb },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1045 */
  {
    "iwmmxt_wunpckihh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckihh },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1065 */
  {
    "iwmmxt_wunpckihw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckihw },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1081 */
  {
    "iwmmxt_wunpckilb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckilb },
    &operand_data[889],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1109 */
  {
    "iwmmxt_wunpckilh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckilh },
    &operand_data[886],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1129 */
  {
    "iwmmxt_wunpckilw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckilw },
    &operand_data[883],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1145 */
  {
    "iwmmxt_wunpckehub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehub%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckehub },
    &operand_data[934],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1157 */
  {
    "iwmmxt_wunpckehuh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuh%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckehuh },
    &operand_data[936],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1168 */
  {
    "iwmmxt_wunpckehuw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuw%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckehuw },
    &operand_data[938],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1179 */
  {
    "iwmmxt_wunpckehsb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsb%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckehsb },
    &operand_data[934],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1191 */
  {
    "iwmmxt_wunpckehsh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsh%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckehsh },
    &operand_data[936],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1202 */
  {
    "iwmmxt_wunpckehsw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsw%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckehsw },
    &operand_data[938],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1213 */
  {
    "iwmmxt_wunpckelub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelub%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckelub },
    &operand_data[934],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1225 */
  {
    "iwmmxt_wunpckeluh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluh%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wunpckeluh },
    &operand_data[936],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/daniel/Dropbox/Hobby/Zybo_Xilinx_Xilibus/Yocto/poky/build/tmp/work-shared/gcc-4.8.2-r0/gcc-4.8.2/gcc/config/arm/iwmmxt.md:1236 */
  {
    "iwmmxt_wunpckeluw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluw%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
  },