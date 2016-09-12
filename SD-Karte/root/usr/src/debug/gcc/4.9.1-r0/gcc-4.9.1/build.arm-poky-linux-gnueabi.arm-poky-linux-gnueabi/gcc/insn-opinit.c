/* Generated automatically by the program `genopinit'
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
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expr.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x011718, CODE_FOR_extendqihi2 },
  { 0x011719, CODE_FOR_extendqisi2 },
  { 0x01171a, CODE_FOR_extendqidi2 },
  { 0x011819, CODE_FOR_extendhisi2 },
  { 0x01181a, CODE_FOR_extendhidi2 },
  { 0x01191a, CODE_FOR_extendsidi2 },
  { 0x013233, CODE_FOR_extendhfsf2 },
  { 0x013234, CODE_FOR_extendhfdf2 },
  { 0x013334, CODE_FOR_extendsfdf2 },
  { 0x023332, CODE_FOR_truncsfhf2 },
  { 0x023432, CODE_FOR_truncdfhf2 },
  { 0x023433, CODE_FOR_truncdfsf2 },
  { 0x031719, CODE_FOR_zero_extendqisi2 },
  { 0x03171a, CODE_FOR_zero_extendqidi2 },
  { 0x031819, CODE_FOR_zero_extendhisi2 },
  { 0x03181a, CODE_FOR_zero_extendhidi2 },
  { 0x03191a, CODE_FOR_zero_extendsidi2 },
  { 0x061932, CODE_FOR_floatsihf2 },
  { 0x061933, CODE_FOR_floatsisf2 },
  { 0x061934, CODE_FOR_floatsidf2 },
  { 0x061a32, CODE_FOR_floatdihf2 },
  { 0x064a56, CODE_FOR_floatv2siv2sf2 },
  { 0x064d58, CODE_FOR_floatv4siv4sf2 },
  { 0x071933, CODE_FOR_floatunssisf2 },
  { 0x071934, CODE_FOR_floatunssidf2 },
  { 0x074a56, CODE_FOR_floatunsv2siv2sf2 },
  { 0x074d58, CODE_FOR_floatunsv4siv4sf2 },
  { 0x103219, CODE_FOR_fix_trunchfsi2 },
  { 0x10321a, CODE_FOR_fix_trunchfdi2 },
  { 0x103319, CODE_FOR_fix_truncsfsi2 },
  { 0x103419, CODE_FOR_fix_truncdfsi2 },
  { 0x10564a, CODE_FOR_fix_truncv2sfv2si2 },
  { 0x10584d, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x113319, CODE_FOR_fixuns_truncsfsi2 },
  { 0x113419, CODE_FOR_fixuns_truncdfsi2 },
  { 0x11564a, CODE_FOR_fixuns_truncv2sfv2si2 },
  { 0x11584d, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x121819, CODE_FOR_mulhisi3 },
  { 0x12191a, CODE_FOR_mulsidi3 },
  { 0x13191a, CODE_FOR_umulsidi3 },
  { 0x151819, CODE_FOR_maddhisi4 },
  { 0x15181a, CODE_FOR_maddhidi4 },
  { 0x15191a, CODE_FOR_maddsidi4 },
  { 0x16191a, CODE_FOR_umaddsidi4 },
  { 0x1d1a1a, CODE_FOR_vec_load_lanesdidi },
  { 0x1d1a1b, CODE_FOR_vec_load_lanestidi },
  { 0x1d1a1c, CODE_FOR_vec_load_laneseidi },
  { 0x1d1a1d, CODE_FOR_vec_load_lanesoidi },
  { 0x1d481b, CODE_FOR_vec_load_lanestiv8qi },
  { 0x1d481c, CODE_FOR_vec_load_laneseiv8qi },
  { 0x1d481d, CODE_FOR_vec_load_lanesoiv8qi },
  { 0x1d4848, CODE_FOR_vec_load_lanesv8qiv8qi },
  { 0x1d491b, CODE_FOR_vec_load_lanestiv4hi },
  { 0x1d491c, CODE_FOR_vec_load_laneseiv4hi },
  { 0x1d491d, CODE_FOR_vec_load_lanesoiv4hi },
  { 0x1d4949, CODE_FOR_vec_load_lanesv4hiv4hi },
  { 0x1d4a1b, CODE_FOR_vec_load_lanestiv2si },
  { 0x1d4a1c, CODE_FOR_vec_load_laneseiv2si },
  { 0x1d4a1d, CODE_FOR_vec_load_lanesoiv2si },
  { 0x1d4a4a, CODE_FOR_vec_load_lanesv2siv2si },
  { 0x1d4b1d, CODE_FOR_vec_load_lanesoiv16qi },
  { 0x1d4b1e, CODE_FOR_vec_load_lanesciv16qi },
  { 0x1d4b1f, CODE_FOR_vec_load_lanesxiv16qi },
  { 0x1d4b4b, CODE_FOR_vec_load_lanesv16qiv16qi },
  { 0x1d4c1d, CODE_FOR_vec_load_lanesoiv8hi },
  { 0x1d4c1e, CODE_FOR_vec_load_lanesciv8hi },
  { 0x1d4c1f, CODE_FOR_vec_load_lanesxiv8hi },
  { 0x1d4c4c, CODE_FOR_vec_load_lanesv8hiv8hi },
  { 0x1d4d1d, CODE_FOR_vec_load_lanesoiv4si },
  { 0x1d4d1e, CODE_FOR_vec_load_lanesciv4si },
  { 0x1d4d1f, CODE_FOR_vec_load_lanesxiv4si },
  { 0x1d4d4d, CODE_FOR_vec_load_lanesv4siv4si },
  { 0x1d4e4e, CODE_FOR_vec_load_lanesv2div2di },
  { 0x1d561b, CODE_FOR_vec_load_lanestiv2sf },
  { 0x1d561c, CODE_FOR_vec_load_laneseiv2sf },
  { 0x1d561d, CODE_FOR_vec_load_lanesoiv2sf },
  { 0x1d5656, CODE_FOR_vec_load_lanesv2sfv2sf },
  { 0x1d581d, CODE_FOR_vec_load_lanesoiv4sf },
  { 0x1d581e, CODE_FOR_vec_load_lanesciv4sf },
  { 0x1d581f, CODE_FOR_vec_load_lanesxiv4sf },
  { 0x1d5858, CODE_FOR_vec_load_lanesv4sfv4sf },
  { 0x1e1a1a, CODE_FOR_vec_store_lanesdidi },
  { 0x1e1a1b, CODE_FOR_vec_store_lanestidi },
  { 0x1e1a1c, CODE_FOR_vec_store_laneseidi },
  { 0x1e1a1d, CODE_FOR_vec_store_lanesoidi },
  { 0x1e481b, CODE_FOR_vec_store_lanestiv8qi },
  { 0x1e481c, CODE_FOR_vec_store_laneseiv8qi },
  { 0x1e481d, CODE_FOR_vec_store_lanesoiv8qi },
  { 0x1e4848, CODE_FOR_vec_store_lanesv8qiv8qi },
  { 0x1e491b, CODE_FOR_vec_store_lanestiv4hi },
  { 0x1e491c, CODE_FOR_vec_store_laneseiv4hi },
  { 0x1e491d, CODE_FOR_vec_store_lanesoiv4hi },
  { 0x1e4949, CODE_FOR_vec_store_lanesv4hiv4hi },
  { 0x1e4a1b, CODE_FOR_vec_store_lanestiv2si },
  { 0x1e4a1c, CODE_FOR_vec_store_laneseiv2si },
  { 0x1e4a1d, CODE_FOR_vec_store_lanesoiv2si },
  { 0x1e4a4a, CODE_FOR_vec_store_lanesv2siv2si },
  { 0x1e4b1d, CODE_FOR_vec_store_lanesoiv16qi },
  { 0x1e4b1e, CODE_FOR_vec_store_lanesciv16qi },
  { 0x1e4b1f, CODE_FOR_vec_store_lanesxiv16qi },
  { 0x1e4b4b, CODE_FOR_vec_store_lanesv16qiv16qi },
  { 0x1e4c1d, CODE_FOR_vec_store_lanesoiv8hi },
  { 0x1e4c1e, CODE_FOR_vec_store_lanesciv8hi },
  { 0x1e4c1f, CODE_FOR_vec_store_lanesxiv8hi },
  { 0x1e4c4c, CODE_FOR_vec_store_lanesv8hiv8hi },
  { 0x1e4d1d, CODE_FOR_vec_store_lanesoiv4si },
  { 0x1e4d1e, CODE_FOR_vec_store_lanesciv4si },
  { 0x1e4d1f, CODE_FOR_vec_store_lanesxiv4si },
  { 0x1e4d4d, CODE_FOR_vec_store_lanesv4siv4si },
  { 0x1e4e4e, CODE_FOR_vec_store_lanesv2div2di },
  { 0x1e561b, CODE_FOR_vec_store_lanestiv2sf },
  { 0x1e561c, CODE_FOR_vec_store_laneseiv2sf },
  { 0x1e561d, CODE_FOR_vec_store_lanesoiv2sf },
  { 0x1e5656, CODE_FOR_vec_store_lanesv2sfv2sf },
  { 0x1e581d, CODE_FOR_vec_store_lanesoiv4sf },
  { 0x1e581e, CODE_FOR_vec_store_lanesciv4sf },
  { 0x1e581f, CODE_FOR_vec_store_lanesxiv4sf },
  { 0x1e5858, CODE_FOR_vec_store_lanesv4sfv4sf },
  { 0x1f4848, CODE_FOR_vcondv8qiv8qi },
  { 0x1f4949, CODE_FOR_vcondv4hiv4hi },
  { 0x1f4a4a, CODE_FOR_vcondv2siv2si },
  { 0x1f4b4b, CODE_FOR_vcondv16qiv16qi },
  { 0x1f4c4c, CODE_FOR_vcondv8hiv8hi },
  { 0x1f4d4d, CODE_FOR_vcondv4siv4si },
  { 0x1f5656, CODE_FOR_vcondv2sfv2sf },
  { 0x1f5858, CODE_FOR_vcondv4sfv4sf },
  { 0x204848, CODE_FOR_vconduv8qiv8qi },
  { 0x204949, CODE_FOR_vconduv4hiv4hi },
  { 0x204a4a, CODE_FOR_vconduv2siv2si },
  { 0x204b4b, CODE_FOR_vconduv16qiv16qi },
  { 0x204c4c, CODE_FOR_vconduv8hiv8hi },
  { 0x204d4d, CODE_FOR_vconduv4siv4si },
  { 0x210019, CODE_FOR_addsi3 },
  { 0x21001a, CODE_FOR_adddi3 },
  { 0x210020, CODE_FOR_addqq3 },
  { 0x210021, CODE_FOR_addhq3 },
  { 0x210022, CODE_FOR_addsq3 },
  { 0x210025, CODE_FOR_adduqq3 },
  { 0x210026, CODE_FOR_adduhq3 },
  { 0x210027, CODE_FOR_addusq3 },
  { 0x21002a, CODE_FOR_addha3 },
  { 0x21002b, CODE_FOR_addsa3 },
  { 0x21002e, CODE_FOR_adduha3 },
  { 0x21002f, CODE_FOR_addusa3 },
  { 0x210033, CODE_FOR_addsf3 },
  { 0x210034, CODE_FOR_adddf3 },
  { 0x210048, CODE_FOR_addv8qi3 },
  { 0x210049, CODE_FOR_addv4hi3 },
  { 0x21004a, CODE_FOR_addv2si3 },
  { 0x21004b, CODE_FOR_addv16qi3 },
  { 0x21004c, CODE_FOR_addv8hi3 },
  { 0x21004d, CODE_FOR_addv4si3 },
  { 0x21004e, CODE_FOR_addv2di3 },
  { 0x21004f, CODE_FOR_addv4qq3 },
  { 0x210050, CODE_FOR_addv2hq3 },
  { 0x210053, CODE_FOR_addv2ha3 },
  { 0x210056, CODE_FOR_addv2sf3 },
  { 0x210058, CODE_FOR_addv4sf3 },
  { 0x230020, CODE_FOR_ssaddqq3 },
  { 0x230021, CODE_FOR_ssaddhq3 },
  { 0x230022, CODE_FOR_ssaddsq3 },
  { 0x23002a, CODE_FOR_ssaddha3 },
  { 0x23002b, CODE_FOR_ssaddsa3 },
  { 0x23004f, CODE_FOR_ssaddv4qq3 },
  { 0x230050, CODE_FOR_ssaddv2hq3 },
  { 0x230053, CODE_FOR_ssaddv2ha3 },
  { 0x240025, CODE_FOR_usadduqq3 },
  { 0x240026, CODE_FOR_usadduhq3 },
  { 0x24002e, CODE_FOR_usadduha3 },
  { 0x240051, CODE_FOR_usaddv4uqq3 },
  { 0x240052, CODE_FOR_usaddv2uhq3 },
  { 0x240054, CODE_FOR_usaddv2uha3 },
  { 0x250019, CODE_FOR_subsi3 },
  { 0x25001a, CODE_FOR_subdi3 },
  { 0x250020, CODE_FOR_subqq3 },
  { 0x250021, CODE_FOR_subhq3 },
  { 0x250022, CODE_FOR_subsq3 },
  { 0x250025, CODE_FOR_subuqq3 },
  { 0x250026, CODE_FOR_subuhq3 },
  { 0x250027, CODE_FOR_subusq3 },
  { 0x25002a, CODE_FOR_subha3 },
  { 0x25002b, CODE_FOR_subsa3 },
  { 0x25002e, CODE_FOR_subuha3 },
  { 0x25002f, CODE_FOR_subusa3 },
  { 0x250033, CODE_FOR_subsf3 },
  { 0x250034, CODE_FOR_subdf3 },
  { 0x250048, CODE_FOR_subv8qi3 },
  { 0x250049, CODE_FOR_subv4hi3 },
  { 0x25004a, CODE_FOR_subv2si3 },
  { 0x25004b, CODE_FOR_subv16qi3 },
  { 0x25004c, CODE_FOR_subv8hi3 },
  { 0x25004d, CODE_FOR_subv4si3 },
  { 0x25004e, CODE_FOR_subv2di3 },
  { 0x25004f, CODE_FOR_subv4qq3 },
  { 0x250050, CODE_FOR_subv2hq3 },
  { 0x250053, CODE_FOR_subv2ha3 },
  { 0x250056, CODE_FOR_subv2sf3 },
  { 0x250058, CODE_FOR_subv4sf3 },
  { 0x270020, CODE_FOR_sssubqq3 },
  { 0x270021, CODE_FOR_sssubhq3 },
  { 0x270022, CODE_FOR_sssubsq3 },
  { 0x27002a, CODE_FOR_sssubha3 },
  { 0x27002b, CODE_FOR_sssubsa3 },
  { 0x27004f, CODE_FOR_sssubv4qq3 },
  { 0x270050, CODE_FOR_sssubv2hq3 },
  { 0x270053, CODE_FOR_sssubv2ha3 },
  { 0x280025, CODE_FOR_ussubuqq3 },
  { 0x280026, CODE_FOR_ussubuhq3 },
  { 0x28002e, CODE_FOR_ussubuha3 },
  { 0x280051, CODE_FOR_ussubv4uqq3 },
  { 0x280052, CODE_FOR_ussubv2uhq3 },
  { 0x280054, CODE_FOR_ussubv2uha3 },
  { 0x290018, CODE_FOR_mulhi3 },
  { 0x290019, CODE_FOR_mulsi3 },
  { 0x290020, CODE_FOR_mulqq3 },
  { 0x290021, CODE_FOR_mulhq3 },
  { 0x290022, CODE_FOR_mulsq3 },
  { 0x29002a, CODE_FOR_mulha3 },
  { 0x29002b, CODE_FOR_mulsa3 },
  { 0x29002e, CODE_FOR_muluha3 },
  { 0x29002f, CODE_FOR_mulusa3 },
  { 0x290033, CODE_FOR_mulsf3 },
  { 0x290034, CODE_FOR_muldf3 },
  { 0x290048, CODE_FOR_mulv8qi3 },
  { 0x290049, CODE_FOR_mulv4hi3 },
  { 0x29004a, CODE_FOR_mulv2si3 },
  { 0x29004b, CODE_FOR_mulv16qi3 },
  { 0x29004c, CODE_FOR_mulv8hi3 },
  { 0x29004d, CODE_FOR_mulv4si3 },
  { 0x290056, CODE_FOR_mulv2sf3 },
  { 0x290058, CODE_FOR_mulv4sf3 },
  { 0x2b002a, CODE_FOR_ssmulha3 },
  { 0x2b002b, CODE_FOR_ssmulsa3 },
  { 0x2c002e, CODE_FOR_usmuluha3 },
  { 0x2c002f, CODE_FOR_usmulusa3 },
  { 0x2d0019, CODE_FOR_divsi3 },
  { 0x2d0033, CODE_FOR_divsf3 },
  { 0x2d0034, CODE_FOR_divdf3 },
  { 0x300019, CODE_FOR_udivsi3 },
  { 0x370019, CODE_FOR_andsi3 },
  { 0x37001a, CODE_FOR_anddi3 },
  { 0x370048, CODE_FOR_andv8qi3 },
  { 0x370049, CODE_FOR_andv4hi3 },
  { 0x37004a, CODE_FOR_andv2si3 },
  { 0x37004b, CODE_FOR_andv16qi3 },
  { 0x37004c, CODE_FOR_andv8hi3 },
  { 0x37004d, CODE_FOR_andv4si3 },
  { 0x37004e, CODE_FOR_andv2di3 },
  { 0x370056, CODE_FOR_andv2sf3 },
  { 0x370058, CODE_FOR_andv4sf3 },
  { 0x380019, CODE_FOR_iorsi3 },
  { 0x38001a, CODE_FOR_iordi3 },
  { 0x380048, CODE_FOR_iorv8qi3 },
  { 0x380049, CODE_FOR_iorv4hi3 },
  { 0x38004a, CODE_FOR_iorv2si3 },
  { 0x38004b, CODE_FOR_iorv16qi3 },
  { 0x38004c, CODE_FOR_iorv8hi3 },
  { 0x38004d, CODE_FOR_iorv4si3 },
  { 0x38004e, CODE_FOR_iorv2di3 },
  { 0x380056, CODE_FOR_iorv2sf3 },
  { 0x380058, CODE_FOR_iorv4sf3 },
  { 0x390019, CODE_FOR_xorsi3 },
  { 0x39001a, CODE_FOR_xordi3 },
  { 0x390048, CODE_FOR_xorv8qi3 },
  { 0x390049, CODE_FOR_xorv4hi3 },
  { 0x39004a, CODE_FOR_xorv2si3 },
  { 0x39004b, CODE_FOR_xorv16qi3 },
  { 0x39004c, CODE_FOR_xorv8hi3 },
  { 0x39004d, CODE_FOR_xorv4si3 },
  { 0x39004e, CODE_FOR_xorv2di3 },
  { 0x390056, CODE_FOR_xorv2sf3 },
  { 0x390058, CODE_FOR_xorv4sf3 },
  { 0x3a0019, CODE_FOR_ashlsi3 },
  { 0x3a001a, CODE_FOR_ashldi3 },
  { 0x3d0019, CODE_FOR_ashrsi3 },
  { 0x3d001a, CODE_FOR_ashrdi3 },
  { 0x3e0019, CODE_FOR_lshrsi3 },
  { 0x3e001a, CODE_FOR_lshrdi3 },
  { 0x3f0019, CODE_FOR_rotlsi3 },
  { 0x400019, CODE_FOR_rotrsi3 },
  { 0x410048, CODE_FOR_vashlv8qi3 },
  { 0x410049, CODE_FOR_vashlv4hi3 },
  { 0x41004a, CODE_FOR_vashlv2si3 },
  { 0x41004b, CODE_FOR_vashlv16qi3 },
  { 0x41004c, CODE_FOR_vashlv8hi3 },
  { 0x41004d, CODE_FOR_vashlv4si3 },
  { 0x420048, CODE_FOR_vashrv8qi3 },
  { 0x420049, CODE_FOR_vashrv4hi3 },
  { 0x42004a, CODE_FOR_vashrv2si3 },
  { 0x42004b, CODE_FOR_vashrv16qi3 },
  { 0x42004c, CODE_FOR_vashrv8hi3 },
  { 0x42004d, CODE_FOR_vashrv4si3 },
  { 0x430048, CODE_FOR_vlshrv8qi3 },
  { 0x430049, CODE_FOR_vlshrv4hi3 },
  { 0x43004a, CODE_FOR_vlshrv2si3 },
  { 0x43004b, CODE_FOR_vlshrv16qi3 },
  { 0x43004c, CODE_FOR_vlshrv8hi3 },
  { 0x43004d, CODE_FOR_vlshrv4si3 },
  { 0x460019, CODE_FOR_sminsi3 },
  { 0x460033, CODE_FOR_sminsf3 },
  { 0x460034, CODE_FOR_smindf3 },
  { 0x460048, CODE_FOR_sminv8qi3 },
  { 0x460049, CODE_FOR_sminv4hi3 },
  { 0x46004a, CODE_FOR_sminv2si3 },
  { 0x46004b, CODE_FOR_sminv16qi3 },
  { 0x46004c, CODE_FOR_sminv8hi3 },
  { 0x46004d, CODE_FOR_sminv4si3 },
  { 0x460056, CODE_FOR_sminv2sf3 },
  { 0x460058, CODE_FOR_sminv4sf3 },
  { 0x470019, CODE_FOR_smaxsi3 },
  { 0x470033, CODE_FOR_smaxsf3 },
  { 0x470034, CODE_FOR_smaxdf3 },
  { 0x470048, CODE_FOR_smaxv8qi3 },
  { 0x470049, CODE_FOR_smaxv4hi3 },
  { 0x47004a, CODE_FOR_smaxv2si3 },
  { 0x47004b, CODE_FOR_smaxv16qi3 },
  { 0x47004c, CODE_FOR_smaxv8hi3 },
  { 0x47004d, CODE_FOR_smaxv4si3 },
  { 0x470056, CODE_FOR_smaxv2sf3 },
  { 0x470058, CODE_FOR_smaxv4sf3 },
  { 0x480019, CODE_FOR_uminsi3 },
  { 0x480048, CODE_FOR_uminv8qi3 },
  { 0x480049, CODE_FOR_uminv4hi3 },
  { 0x48004a, CODE_FOR_uminv2si3 },
  { 0x48004b, CODE_FOR_uminv16qi3 },
  { 0x48004c, CODE_FOR_uminv8hi3 },
  { 0x48004d, CODE_FOR_uminv4si3 },
  { 0x490019, CODE_FOR_umaxsi3 },
  { 0x490048, CODE_FOR_umaxv8qi3 },
  { 0x490049, CODE_FOR_umaxv4hi3 },
  { 0x49004a, CODE_FOR_umaxv2si3 },
  { 0x49004b, CODE_FOR_umaxv16qi3 },
  { 0x49004c, CODE_FOR_umaxv8hi3 },
  { 0x49004d, CODE_FOR_umaxv4si3 },
  { 0x4a0019, CODE_FOR_negsi2 },
  { 0x4a001a, CODE_FOR_negdi2 },
  { 0x4a0033, CODE_FOR_negsf2 },
  { 0x4a0034, CODE_FOR_negdf2 },
  { 0x4a0048, CODE_FOR_negv8qi2 },
  { 0x4a0049, CODE_FOR_negv4hi2 },
  { 0x4a004a, CODE_FOR_negv2si2 },
  { 0x4a004b, CODE_FOR_negv16qi2 },
  { 0x4a004c, CODE_FOR_negv8hi2 },
  { 0x4a004d, CODE_FOR_negv4si2 },
  { 0x4a0056, CODE_FOR_negv2sf2 },
  { 0x4a0058, CODE_FOR_negv4sf2 },
  { 0x4e0019, CODE_FOR_abssi2 },
  { 0x4e0033, CODE_FOR_abssf2 },
  { 0x4e0034, CODE_FOR_absdf2 },
  { 0x4e0048, CODE_FOR_absv8qi2 },
  { 0x4e0049, CODE_FOR_absv4hi2 },
  { 0x4e004a, CODE_FOR_absv2si2 },
  { 0x4e004b, CODE_FOR_absv16qi2 },
  { 0x4e004c, CODE_FOR_absv8hi2 },
  { 0x4e004d, CODE_FOR_absv4si2 },
  { 0x4e0056, CODE_FOR_absv2sf2 },
  { 0x4e0058, CODE_FOR_absv4sf2 },
  { 0x500019, CODE_FOR_one_cmplsi2 },
  { 0x50001a, CODE_FOR_one_cmpldi2 },
  { 0x500048, CODE_FOR_one_cmplv8qi2 },
  { 0x500049, CODE_FOR_one_cmplv4hi2 },
  { 0x50004a, CODE_FOR_one_cmplv2si2 },
  { 0x50004b, CODE_FOR_one_cmplv16qi2 },
  { 0x50004c, CODE_FOR_one_cmplv8hi2 },
  { 0x50004d, CODE_FOR_one_cmplv4si2 },
  { 0x50004e, CODE_FOR_one_cmplv2di2 },
  { 0x500056, CODE_FOR_one_cmplv2sf2 },
  { 0x500058, CODE_FOR_one_cmplv4sf2 },
  { 0x510018, CODE_FOR_bswaphi2 },
  { 0x510019, CODE_FOR_bswapsi2 },
  { 0x530019, CODE_FOR_clzsi2 },
  { 0x530048, CODE_FOR_clzv8qi2 },
  { 0x530049, CODE_FOR_clzv4hi2 },
  { 0x53004a, CODE_FOR_clzv2si2 },
  { 0x53004b, CODE_FOR_clzv16qi2 },
  { 0x53004c, CODE_FOR_clzv8hi2 },
  { 0x53004d, CODE_FOR_clzv4si2 },
  { 0x540019, CODE_FOR_ctzsi2 },
  { 0x560048, CODE_FOR_popcountv8qi2 },
  { 0x56004b, CODE_FOR_popcountv16qi2 },
  { 0x620033, CODE_FOR_sqrtsf2 },
  { 0x620034, CODE_FOR_sqrtdf2 },
  { 0x710017, CODE_FOR_movqi },
  { 0x710018, CODE_FOR_movhi },
  { 0x710019, CODE_FOR_movsi },
  { 0x71001a, CODE_FOR_movdi },
  { 0x71001b, CODE_FOR_movti },
  { 0x71001c, CODE_FOR_movei },
  { 0x71001d, CODE_FOR_movoi },
  { 0x71001e, CODE_FOR_movci },
  { 0x71001f, CODE_FOR_movxi },
  { 0x710032, CODE_FOR_movhf },
  { 0x710033, CODE_FOR_movsf },
  { 0x710034, CODE_FOR_movdf },
  { 0x710048, CODE_FOR_movv8qi },
  { 0x710049, CODE_FOR_movv4hi },
  { 0x71004a, CODE_FOR_movv2si },
  { 0x71004b, CODE_FOR_movv16qi },
  { 0x71004c, CODE_FOR_movv8hi },
  { 0x71004d, CODE_FOR_movv4si },
  { 0x71004e, CODE_FOR_movv2di },
  { 0x710056, CODE_FOR_movv2sf },
  { 0x710058, CODE_FOR_movv4sf },
  { 0x73001a, CODE_FOR_movmisaligndi },
  { 0x730048, CODE_FOR_movmisalignv8qi },
  { 0x730049, CODE_FOR_movmisalignv4hi },
  { 0x73004a, CODE_FOR_movmisalignv2si },
  { 0x73004b, CODE_FOR_movmisalignv16qi },
  { 0x73004c, CODE_FOR_movmisalignv8hi },
  { 0x73004d, CODE_FOR_movmisalignv4si },
  { 0x73004e, CODE_FOR_movmisalignv2di },
  { 0x730056, CODE_FOR_movmisalignv2sf },
  { 0x730058, CODE_FOR_movmisalignv4sf },
  { 0x7c0018, CODE_FOR_reload_inhi },
  { 0x7d0018, CODE_FOR_reload_outhi },
  { 0x7d0034, CODE_FOR_reload_outdf },
  { 0x7e0017, CODE_FOR_cbranchqi4 },
  { 0x7e0019, CODE_FOR_cbranchsi4 },
  { 0x7e001a, CODE_FOR_cbranchdi4 },
  { 0x7e0033, CODE_FOR_cbranchsf4 },
  { 0x7e0034, CODE_FOR_cbranchdf4 },
  { 0x800019, CODE_FOR_movsicc },
  { 0x800033, CODE_FOR_movsfcc },
  { 0x800034, CODE_FOR_movdfcc },
  { 0x820019, CODE_FOR_cstoresi4 },
  { 0x82001a, CODE_FOR_cstoredi4 },
  { 0x820033, CODE_FOR_cstoresf4 },
  { 0x820034, CODE_FOR_cstoredf4 },
  { 0x890019, CODE_FOR_smulsi3_highpart },
  { 0x890049, CODE_FOR_smulv4hi3_highpart },
  { 0x8a0019, CODE_FOR_umulsi3_highpart },
  { 0x8a0049, CODE_FOR_umulv4hi3_highpart },
  { 0x8e0017, CODE_FOR_movmemqi },
  { 0x910033, CODE_FOR_fmasf4 },
  { 0x910034, CODE_FOR_fmadf4 },
  { 0x910056, CODE_FOR_fmav2sf4 },
  { 0x910058, CODE_FOR_fmav4sf4 },
  { 0x950033, CODE_FOR_rintsf2 },
  { 0x950034, CODE_FOR_rintdf2 },
  { 0x960033, CODE_FOR_roundsf2 },
  { 0x960034, CODE_FOR_rounddf2 },
  { 0x970033, CODE_FOR_floorsf2 },
  { 0x970034, CODE_FOR_floordf2 },
  { 0x980033, CODE_FOR_ceilsf2 },
  { 0x980034, CODE_FOR_ceildf2 },
  { 0x990033, CODE_FOR_btruncsf2 },
  { 0x990034, CODE_FOR_btruncdf2 },
  { 0x9a0033, CODE_FOR_nearbyintsf2 },
  { 0x9a0034, CODE_FOR_nearbyintdf2 },
  { 0xb60048, CODE_FOR_reduc_smax_v8qi },
  { 0xb60049, CODE_FOR_reduc_smax_v4hi },
  { 0xb6004a, CODE_FOR_reduc_smax_v2si },
  { 0xb6004b, CODE_FOR_reduc_smax_v16qi },
  { 0xb6004c, CODE_FOR_reduc_smax_v8hi },
  { 0xb6004d, CODE_FOR_reduc_smax_v4si },
  { 0xb60056, CODE_FOR_reduc_smax_v2sf },
  { 0xb60058, CODE_FOR_reduc_smax_v4sf },
  { 0xb70048, CODE_FOR_reduc_smin_v8qi },
  { 0xb70049, CODE_FOR_reduc_smin_v4hi },
  { 0xb7004a, CODE_FOR_reduc_smin_v2si },
  { 0xb7004b, CODE_FOR_reduc_smin_v16qi },
  { 0xb7004c, CODE_FOR_reduc_smin_v8hi },
  { 0xb7004d, CODE_FOR_reduc_smin_v4si },
  { 0xb70056, CODE_FOR_reduc_smin_v2sf },
  { 0xb70058, CODE_FOR_reduc_smin_v4sf },
  { 0xb80048, CODE_FOR_reduc_splus_v8qi },
  { 0xb80049, CODE_FOR_reduc_splus_v4hi },
  { 0xb8004a, CODE_FOR_reduc_splus_v2si },
  { 0xb8004b, CODE_FOR_reduc_splus_v16qi },
  { 0xb8004c, CODE_FOR_reduc_splus_v8hi },
  { 0xb8004d, CODE_FOR_reduc_splus_v4si },
  { 0xb8004e, CODE_FOR_reduc_splus_v2di },
  { 0xb80056, CODE_FOR_reduc_splus_v2sf },
  { 0xb80058, CODE_FOR_reduc_splus_v4sf },
  { 0xb90048, CODE_FOR_reduc_umax_v8qi },
  { 0xb90049, CODE_FOR_reduc_umax_v4hi },
  { 0xb9004a, CODE_FOR_reduc_umax_v2si },
  { 0xb9004b, CODE_FOR_reduc_umax_v16qi },
  { 0xb9004c, CODE_FOR_reduc_umax_v8hi },
  { 0xb9004d, CODE_FOR_reduc_umax_v4si },
  { 0xba0048, CODE_FOR_reduc_umin_v8qi },
  { 0xba0049, CODE_FOR_reduc_umin_v4hi },
  { 0xba004a, CODE_FOR_reduc_umin_v2si },
  { 0xba004b, CODE_FOR_reduc_umin_v16qi },
  { 0xba004c, CODE_FOR_reduc_umin_v8hi },
  { 0xba004d, CODE_FOR_reduc_umin_v4si },
  { 0xbb0048, CODE_FOR_reduc_uplus_v8qi },
  { 0xbb0049, CODE_FOR_reduc_uplus_v4hi },
  { 0xbb004a, CODE_FOR_reduc_uplus_v2si },
  { 0xbb004b, CODE_FOR_reduc_uplus_v16qi },
  { 0xbb004c, CODE_FOR_reduc_uplus_v8hi },
  { 0xbb004d, CODE_FOR_reduc_uplus_v4si },
  { 0xbb004e, CODE_FOR_reduc_uplus_v2di },
  { 0xbd0048, CODE_FOR_widen_ssumv8qi3 },
  { 0xbd0049, CODE_FOR_widen_ssumv4hi3 },
  { 0xbd004a, CODE_FOR_widen_ssumv2si3 },
  { 0xbf0048, CODE_FOR_widen_usumv8qi3 },
  { 0xbf0049, CODE_FOR_widen_usumv4hi3 },
  { 0xbf004a, CODE_FOR_widen_usumv2si3 },
  { 0xc20048, CODE_FOR_vec_extractv8qi },
  { 0xc20049, CODE_FOR_vec_extractv4hi },
  { 0xc2004a, CODE_FOR_vec_extractv2si },
  { 0xc2004b, CODE_FOR_vec_extractv16qi },
  { 0xc2004c, CODE_FOR_vec_extractv8hi },
  { 0xc2004d, CODE_FOR_vec_extractv4si },
  { 0xc2004e, CODE_FOR_vec_extractv2di },
  { 0xc20056, CODE_FOR_vec_extractv2sf },
  { 0xc20058, CODE_FOR_vec_extractv4sf },
  { 0xc30048, CODE_FOR_vec_initv8qi },
  { 0xc30049, CODE_FOR_vec_initv4hi },
  { 0xc3004a, CODE_FOR_vec_initv2si },
  { 0xc3004b, CODE_FOR_vec_initv16qi },
  { 0xc3004c, CODE_FOR_vec_initv8hi },
  { 0xc3004d, CODE_FOR_vec_initv4si },
  { 0xc3004e, CODE_FOR_vec_initv2di },
  { 0xc30056, CODE_FOR_vec_initv2sf },
  { 0xc30058, CODE_FOR_vec_initv4sf },
  { 0xc6001a, CODE_FOR_vec_pack_trunc_di },
  { 0xc60049, CODE_FOR_vec_pack_trunc_v4hi },
  { 0xc6004a, CODE_FOR_vec_pack_trunc_v2si },
  { 0xc6004c, CODE_FOR_vec_pack_trunc_v8hi },
  { 0xc6004d, CODE_FOR_vec_pack_trunc_v4si },
  { 0xc6004e, CODE_FOR_vec_pack_trunc_v2di },
  { 0xc90048, CODE_FOR_vec_perm_constv8qi },
  { 0xc90049, CODE_FOR_vec_perm_constv4hi },
  { 0xc9004a, CODE_FOR_vec_perm_constv2si },
  { 0xc9004b, CODE_FOR_vec_perm_constv16qi },
  { 0xc9004c, CODE_FOR_vec_perm_constv8hi },
  { 0xc9004d, CODE_FOR_vec_perm_constv4si },
  { 0xc9004e, CODE_FOR_vec_perm_constv2di },
  { 0xc90056, CODE_FOR_vec_perm_constv2sf },
  { 0xc90058, CODE_FOR_vec_perm_constv4sf },
  { 0xca0048, CODE_FOR_vec_permv8qi },
  { 0xca004b, CODE_FOR_vec_permv16qi },
  { 0xcc0048, CODE_FOR_vec_setv8qi },
  { 0xcc0049, CODE_FOR_vec_setv4hi },
  { 0xcc004a, CODE_FOR_vec_setv2si },
  { 0xcc004b, CODE_FOR_vec_setv16qi },
  { 0xcc004c, CODE_FOR_vec_setv8hi },
  { 0xcc004d, CODE_FOR_vec_setv4si },
  { 0xcc004e, CODE_FOR_vec_setv2di },
  { 0xcc0056, CODE_FOR_vec_setv2sf },
  { 0xcc0058, CODE_FOR_vec_setv4sf },
  { 0xcd0048, CODE_FOR_vec_shl_v8qi },
  { 0xcd0049, CODE_FOR_vec_shl_v4hi },
  { 0xcd004a, CODE_FOR_vec_shl_v2si },
  { 0xcd004b, CODE_FOR_vec_shl_v16qi },
  { 0xcd004c, CODE_FOR_vec_shl_v8hi },
  { 0xcd004d, CODE_FOR_vec_shl_v4si },
  { 0xcd004e, CODE_FOR_vec_shl_v2di },
  { 0xcd0056, CODE_FOR_vec_shl_v2sf },
  { 0xcd0058, CODE_FOR_vec_shl_v4sf },
  { 0xce0048, CODE_FOR_vec_shr_v8qi },
  { 0xce0049, CODE_FOR_vec_shr_v4hi },
  { 0xce004a, CODE_FOR_vec_shr_v2si },
  { 0xce004b, CODE_FOR_vec_shr_v16qi },
  { 0xce004c, CODE_FOR_vec_shr_v8hi },
  { 0xce004d, CODE_FOR_vec_shr_v4si },
  { 0xce004e, CODE_FOR_vec_shr_v2di },
  { 0xce0056, CODE_FOR_vec_shr_v2sf },
  { 0xce0058, CODE_FOR_vec_shr_v4sf },
  { 0xd10048, CODE_FOR_vec_unpacks_hi_v8qi },
  { 0xd10049, CODE_FOR_vec_unpacks_hi_v4hi },
  { 0xd1004a, CODE_FOR_vec_unpacks_hi_v2si },
  { 0xd1004b, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0xd1004c, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0xd1004d, CODE_FOR_vec_unpacks_hi_v4si },
  { 0xd20048, CODE_FOR_vec_unpacks_lo_v8qi },
  { 0xd20049, CODE_FOR_vec_unpacks_lo_v4hi },
  { 0xd2004a, CODE_FOR_vec_unpacks_lo_v2si },
  { 0xd2004b, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0xd2004c, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0xd2004d, CODE_FOR_vec_unpacks_lo_v4si },
  { 0xd50048, CODE_FOR_vec_unpacku_hi_v8qi },
  { 0xd50049, CODE_FOR_vec_unpacku_hi_v4hi },
  { 0xd5004a, CODE_FOR_vec_unpacku_hi_v2si },
  { 0xd5004b, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0xd5004c, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0xd5004d, CODE_FOR_vec_unpacku_hi_v4si },
  { 0xd60048, CODE_FOR_vec_unpacku_lo_v8qi },
  { 0xd60049, CODE_FOR_vec_unpacku_lo_v4hi },
  { 0xd6004a, CODE_FOR_vec_unpacku_lo_v2si },
  { 0xd6004b, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0xd6004c, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0xd6004d, CODE_FOR_vec_unpacku_lo_v4si },
  { 0xd80048, CODE_FOR_vec_widen_smult_hi_v8qi },
  { 0xd80049, CODE_FOR_vec_widen_smult_hi_v4hi },
  { 0xd8004a, CODE_FOR_vec_widen_smult_hi_v2si },
  { 0xd8004b, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0xd8004c, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0xd8004d, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0xd90048, CODE_FOR_vec_widen_smult_lo_v8qi },
  { 0xd90049, CODE_FOR_vec_widen_smult_lo_v4hi },
  { 0xd9004a, CODE_FOR_vec_widen_smult_lo_v2si },
  { 0xd9004b, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0xd9004c, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0xd9004d, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0xdb0048, CODE_FOR_vec_widen_sshiftl_hi_v8qi },
  { 0xdb0049, CODE_FOR_vec_widen_sshiftl_hi_v4hi },
  { 0xdb004a, CODE_FOR_vec_widen_sshiftl_hi_v2si },
  { 0xdb004b, CODE_FOR_vec_widen_sshiftl_hi_v16qi },
  { 0xdb004c, CODE_FOR_vec_widen_sshiftl_hi_v8hi },
  { 0xdb004d, CODE_FOR_vec_widen_sshiftl_hi_v4si },
  { 0xdc0048, CODE_FOR_vec_widen_sshiftl_lo_v8qi },
  { 0xdc0049, CODE_FOR_vec_widen_sshiftl_lo_v4hi },
  { 0xdc004a, CODE_FOR_vec_widen_sshiftl_lo_v2si },
  { 0xdc004b, CODE_FOR_vec_widen_sshiftl_lo_v16qi },
  { 0xdc004c, CODE_FOR_vec_widen_sshiftl_lo_v8hi },
  { 0xdc004d, CODE_FOR_vec_widen_sshiftl_lo_v4si },
  { 0xde0048, CODE_FOR_vec_widen_umult_hi_v8qi },
  { 0xde0049, CODE_FOR_vec_widen_umult_hi_v4hi },
  { 0xde004a, CODE_FOR_vec_widen_umult_hi_v2si },
  { 0xde004b, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0xde004c, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0xde004d, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0xdf0048, CODE_FOR_vec_widen_umult_lo_v8qi },
  { 0xdf0049, CODE_FOR_vec_widen_umult_lo_v4hi },
  { 0xdf004a, CODE_FOR_vec_widen_umult_lo_v2si },
  { 0xdf004b, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0xdf004c, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0xdf004d, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0xe10048, CODE_FOR_vec_widen_ushiftl_hi_v8qi },
  { 0xe10049, CODE_FOR_vec_widen_ushiftl_hi_v4hi },
  { 0xe1004a, CODE_FOR_vec_widen_ushiftl_hi_v2si },
  { 0xe1004b, CODE_FOR_vec_widen_ushiftl_hi_v16qi },
  { 0xe1004c, CODE_FOR_vec_widen_ushiftl_hi_v8hi },
  { 0xe1004d, CODE_FOR_vec_widen_ushiftl_hi_v4si },
  { 0xe20048, CODE_FOR_vec_widen_ushiftl_lo_v8qi },
  { 0xe20049, CODE_FOR_vec_widen_ushiftl_lo_v4hi },
  { 0xe2004a, CODE_FOR_vec_widen_ushiftl_lo_v2si },
  { 0xe2004b, CODE_FOR_vec_widen_ushiftl_lo_v16qi },
  { 0xe2004c, CODE_FOR_vec_widen_ushiftl_lo_v8hi },
  { 0xe2004d, CODE_FOR_vec_widen_ushiftl_lo_v4si },
  { 0xea0017, CODE_FOR_atomic_add_fetchqi },
  { 0xea0018, CODE_FOR_atomic_add_fetchhi },
  { 0xea0019, CODE_FOR_atomic_add_fetchsi },
  { 0xea001a, CODE_FOR_atomic_add_fetchdi },
  { 0xeb0017, CODE_FOR_atomic_addqi },
  { 0xeb0018, CODE_FOR_atomic_addhi },
  { 0xeb0019, CODE_FOR_atomic_addsi },
  { 0xeb001a, CODE_FOR_atomic_adddi },
  { 0xec0017, CODE_FOR_atomic_and_fetchqi },
  { 0xec0018, CODE_FOR_atomic_and_fetchhi },
  { 0xec0019, CODE_FOR_atomic_and_fetchsi },
  { 0xec001a, CODE_FOR_atomic_and_fetchdi },
  { 0xed0017, CODE_FOR_atomic_andqi },
  { 0xed0018, CODE_FOR_atomic_andhi },
  { 0xed0019, CODE_FOR_atomic_andsi },
  { 0xed001a, CODE_FOR_atomic_anddi },
  { 0xee0017, CODE_FOR_atomic_compare_and_swapqi },
  { 0xee0018, CODE_FOR_atomic_compare_and_swaphi },
  { 0xee0019, CODE_FOR_atomic_compare_and_swapsi },
  { 0xee001a, CODE_FOR_atomic_compare_and_swapdi },
  { 0xef0017, CODE_FOR_atomic_exchangeqi },
  { 0xef0018, CODE_FOR_atomic_exchangehi },
  { 0xef0019, CODE_FOR_atomic_exchangesi },
  { 0xef001a, CODE_FOR_atomic_exchangedi },
  { 0xf00017, CODE_FOR_atomic_fetch_addqi },
  { 0xf00018, CODE_FOR_atomic_fetch_addhi },
  { 0xf00019, CODE_FOR_atomic_fetch_addsi },
  { 0xf0001a, CODE_FOR_atomic_fetch_adddi },
  { 0xf10017, CODE_FOR_atomic_fetch_andqi },
  { 0xf10018, CODE_FOR_atomic_fetch_andhi },
  { 0xf10019, CODE_FOR_atomic_fetch_andsi },
  { 0xf1001a, CODE_FOR_atomic_fetch_anddi },
  { 0xf20017, CODE_FOR_atomic_fetch_nandqi },
  { 0xf20018, CODE_FOR_atomic_fetch_nandhi },
  { 0xf20019, CODE_FOR_atomic_fetch_nandsi },
  { 0xf2001a, CODE_FOR_atomic_fetch_nanddi },
  { 0xf30017, CODE_FOR_atomic_fetch_orqi },
  { 0xf30018, CODE_FOR_atomic_fetch_orhi },
  { 0xf30019, CODE_FOR_atomic_fetch_orsi },
  { 0xf3001a, CODE_FOR_atomic_fetch_ordi },
  { 0xf40017, CODE_FOR_atomic_fetch_subqi },
  { 0xf40018, CODE_FOR_atomic_fetch_subhi },
  { 0xf40019, CODE_FOR_atomic_fetch_subsi },
  { 0xf4001a, CODE_FOR_atomic_fetch_subdi },
  { 0xf50017, CODE_FOR_atomic_fetch_xorqi },
  { 0xf50018, CODE_FOR_atomic_fetch_xorhi },
  { 0xf50019, CODE_FOR_atomic_fetch_xorsi },
  { 0xf5001a, CODE_FOR_atomic_fetch_xordi },
  { 0xf60017, CODE_FOR_atomic_loadqi },
  { 0xf60018, CODE_FOR_atomic_loadhi },
  { 0xf60019, CODE_FOR_atomic_loadsi },
  { 0xf6001a, CODE_FOR_atomic_loaddi },
  { 0xf70017, CODE_FOR_atomic_nand_fetchqi },
  { 0xf70018, CODE_FOR_atomic_nand_fetchhi },
  { 0xf70019, CODE_FOR_atomic_nand_fetchsi },
  { 0xf7001a, CODE_FOR_atomic_nand_fetchdi },
  { 0xf80017, CODE_FOR_atomic_nandqi },
  { 0xf80018, CODE_FOR_atomic_nandhi },
  { 0xf80019, CODE_FOR_atomic_nandsi },
  { 0xf8001a, CODE_FOR_atomic_nanddi },
  { 0xf90017, CODE_FOR_atomic_or_fetchqi },
  { 0xf90018, CODE_FOR_atomic_or_fetchhi },
  { 0xf90019, CODE_FOR_atomic_or_fetchsi },
  { 0xf9001a, CODE_FOR_atomic_or_fetchdi },
  { 0xfa0017, CODE_FOR_atomic_orqi },
  { 0xfa0018, CODE_FOR_atomic_orhi },
  { 0xfa0019, CODE_FOR_atomic_orsi },
  { 0xfa001a, CODE_FOR_atomic_ordi },
  { 0xfb0017, CODE_FOR_atomic_storeqi },
  { 0xfb0018, CODE_FOR_atomic_storehi },
  { 0xfb0019, CODE_FOR_atomic_storesi },
  { 0xfc0017, CODE_FOR_atomic_sub_fetchqi },
  { 0xfc0018, CODE_FOR_atomic_sub_fetchhi },
  { 0xfc0019, CODE_FOR_atomic_sub_fetchsi },
  { 0xfc001a, CODE_FOR_atomic_sub_fetchdi },
  { 0xfd0017, CODE_FOR_atomic_subqi },
  { 0xfd0018, CODE_FOR_atomic_subhi },
  { 0xfd0019, CODE_FOR_atomic_subsi },
  { 0xfd001a, CODE_FOR_atomic_subdi },
  { 0xfe0017, CODE_FOR_atomic_xor_fetchqi },
  { 0xfe0018, CODE_FOR_atomic_xor_fetchhi },
  { 0xfe0019, CODE_FOR_atomic_xor_fetchsi },
  { 0xfe001a, CODE_FOR_atomic_xor_fetchdi },
  { 0xff0017, CODE_FOR_atomic_xorqi },
  { 0xff0018, CODE_FOR_atomic_xorhi },
  { 0xff0019, CODE_FOR_atomic_xorsi },
  { 0xff001a, CODE_FOR_atomic_xordi },
  { 0x1000019, CODE_FOR_get_thread_pointersi },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendhfsf2;
  ena[7] = HAVE_extendhfdf2;
  ena[8] = HAVE_extendsfdf2;
  ena[9] = HAVE_truncsfhf2;
  ena[10] = HAVE_truncdfhf2;
  ena[11] = HAVE_truncdfsf2;
  ena[12] = HAVE_zero_extendqisi2;
  ena[13] = HAVE_zero_extendqidi2;
  ena[14] = HAVE_zero_extendhisi2;
  ena[15] = HAVE_zero_extendhidi2;
  ena[16] = HAVE_zero_extendsidi2;
  ena[17] = HAVE_floatsihf2;
  ena[18] = HAVE_floatsisf2;
  ena[19] = HAVE_floatsidf2;
  ena[20] = HAVE_floatdihf2;
  ena[21] = HAVE_floatv2siv2sf2;
  ena[22] = HAVE_floatv4siv4sf2;
  ena[23] = HAVE_floatunssisf2;
  ena[24] = HAVE_floatunssidf2;
  ena[25] = HAVE_floatunsv2siv2sf2;
  ena[26] = HAVE_floatunsv4siv4sf2;
  ena[27] = HAVE_fix_trunchfsi2;
  ena[28] = HAVE_fix_trunchfdi2;
  ena[29] = HAVE_fix_truncsfsi2;
  ena[30] = HAVE_fix_truncdfsi2;
  ena[31] = HAVE_fix_truncv2sfv2si2;
  ena[32] = HAVE_fix_truncv4sfv4si2;
  ena[33] = HAVE_fixuns_truncsfsi2;
  ena[34] = HAVE_fixuns_truncdfsi2;
  ena[35] = HAVE_fixuns_truncv2sfv2si2;
  ena[36] = HAVE_fixuns_truncv4sfv4si2;
  ena[37] = HAVE_mulhisi3;
  ena[38] = HAVE_mulsidi3;
  ena[39] = HAVE_umulsidi3;
  ena[40] = HAVE_maddhisi4;
  ena[41] = HAVE_maddhidi4;
  ena[42] = HAVE_maddsidi4;
  ena[43] = HAVE_umaddsidi4;
  ena[44] = HAVE_vec_load_lanesdidi;
  ena[45] = HAVE_vec_load_lanestidi;
  ena[46] = HAVE_vec_load_laneseidi;
  ena[47] = HAVE_vec_load_lanesoidi;
  ena[48] = HAVE_vec_load_lanestiv8qi;
  ena[49] = HAVE_vec_load_laneseiv8qi;
  ena[50] = HAVE_vec_load_lanesoiv8qi;
  ena[51] = HAVE_vec_load_lanesv8qiv8qi;
  ena[52] = HAVE_vec_load_lanestiv4hi;
  ena[53] = HAVE_vec_load_laneseiv4hi;
  ena[54] = HAVE_vec_load_lanesoiv4hi;
  ena[55] = HAVE_vec_load_lanesv4hiv4hi;
  ena[56] = HAVE_vec_load_lanestiv2si;
  ena[57] = HAVE_vec_load_laneseiv2si;
  ena[58] = HAVE_vec_load_lanesoiv2si;
  ena[59] = HAVE_vec_load_lanesv2siv2si;
  ena[60] = HAVE_vec_load_lanesoiv16qi;
  ena[61] = HAVE_vec_load_lanesciv16qi;
  ena[62] = HAVE_vec_load_lanesxiv16qi;
  ena[63] = HAVE_vec_load_lanesv16qiv16qi;
  ena[64] = HAVE_vec_load_lanesoiv8hi;
  ena[65] = HAVE_vec_load_lanesciv8hi;
  ena[66] = HAVE_vec_load_lanesxiv8hi;
  ena[67] = HAVE_vec_load_lanesv8hiv8hi;
  ena[68] = HAVE_vec_load_lanesoiv4si;
  ena[69] = HAVE_vec_load_lanesciv4si;
  ena[70] = HAVE_vec_load_lanesxiv4si;
  ena[71] = HAVE_vec_load_lanesv4siv4si;
  ena[72] = HAVE_vec_load_lanesv2div2di;
  ena[73] = HAVE_vec_load_lanestiv2sf;
  ena[74] = HAVE_vec_load_laneseiv2sf;
  ena[75] = HAVE_vec_load_lanesoiv2sf;
  ena[76] = HAVE_vec_load_lanesv2sfv2sf;
  ena[77] = HAVE_vec_load_lanesoiv4sf;
  ena[78] = HAVE_vec_load_lanesciv4sf;
  ena[79] = HAVE_vec_load_lanesxiv4sf;
  ena[80] = HAVE_vec_load_lanesv4sfv4sf;
  ena[81] = HAVE_vec_store_lanesdidi;
  ena[82] = HAVE_vec_store_lanestidi;
  ena[83] = HAVE_vec_store_laneseidi;
  ena[84] = HAVE_vec_store_lanesoidi;
  ena[85] = HAVE_vec_store_lanestiv8qi;
  ena[86] = HAVE_vec_store_laneseiv8qi;
  ena[87] = HAVE_vec_store_lanesoiv8qi;
  ena[88] = HAVE_vec_store_lanesv8qiv8qi;
  ena[89] = HAVE_vec_store_lanestiv4hi;
  ena[90] = HAVE_vec_store_laneseiv4hi;
  ena[91] = HAVE_vec_store_lanesoiv4hi;
  ena[92] = HAVE_vec_store_lanesv4hiv4hi;
  ena[93] = HAVE_vec_store_lanestiv2si;
  ena[94] = HAVE_vec_store_laneseiv2si;
  ena[95] = HAVE_vec_store_lanesoiv2si;
  ena[96] = HAVE_vec_store_lanesv2siv2si;
  ena[97] = HAVE_vec_store_lanesoiv16qi;
  ena[98] = HAVE_vec_store_lanesciv16qi;
  ena[99] = HAVE_vec_store_lanesxiv16qi;
  ena[100] = HAVE_vec_store_lanesv16qiv16qi;
  ena[101] = HAVE_vec_store_lanesoiv8hi;
  ena[102] = HAVE_vec_store_lanesciv8hi;
  ena[103] = HAVE_vec_store_lanesxiv8hi;
  ena[104] = HAVE_vec_store_lanesv8hiv8hi;
  ena[105] = HAVE_vec_store_lanesoiv4si;
  ena[106] = HAVE_vec_store_lanesciv4si;
  ena[107] = HAVE_vec_store_lanesxiv4si;
  ena[108] = HAVE_vec_store_lanesv4siv4si;
  ena[109] = HAVE_vec_store_lanesv2div2di;
  ena[110] = HAVE_vec_store_lanestiv2sf;
  ena[111] = HAVE_vec_store_laneseiv2sf;
  ena[112] = HAVE_vec_store_lanesoiv2sf;
  ena[113] = HAVE_vec_store_lanesv2sfv2sf;
  ena[114] = HAVE_vec_store_lanesoiv4sf;
  ena[115] = HAVE_vec_store_lanesciv4sf;
  ena[116] = HAVE_vec_store_lanesxiv4sf;
  ena[117] = HAVE_vec_store_lanesv4sfv4sf;
  ena[118] = HAVE_vcondv8qiv8qi;
  ena[119] = HAVE_vcondv4hiv4hi;
  ena[120] = HAVE_vcondv2siv2si;
  ena[121] = HAVE_vcondv16qiv16qi;
  ena[122] = HAVE_vcondv8hiv8hi;
  ena[123] = HAVE_vcondv4siv4si;
  ena[124] = HAVE_vcondv2sfv2sf;
  ena[125] = HAVE_vcondv4sfv4sf;
  ena[126] = HAVE_vconduv8qiv8qi;
  ena[127] = HAVE_vconduv4hiv4hi;
  ena[128] = HAVE_vconduv2siv2si;
  ena[129] = HAVE_vconduv16qiv16qi;
  ena[130] = HAVE_vconduv8hiv8hi;
  ena[131] = HAVE_vconduv4siv4si;
  ena[132] = HAVE_addsi3;
  ena[133] = HAVE_adddi3;
  ena[134] = HAVE_addqq3;
  ena[135] = HAVE_addhq3;
  ena[136] = HAVE_addsq3;
  ena[137] = HAVE_adduqq3;
  ena[138] = HAVE_adduhq3;
  ena[139] = HAVE_addusq3;
  ena[140] = HAVE_addha3;
  ena[141] = HAVE_addsa3;
  ena[142] = HAVE_adduha3;
  ena[143] = HAVE_addusa3;
  ena[144] = HAVE_addsf3;
  ena[145] = HAVE_adddf3;
  ena[146] = HAVE_addv8qi3;
  ena[147] = HAVE_addv4hi3;
  ena[148] = HAVE_addv2si3;
  ena[149] = HAVE_addv16qi3;
  ena[150] = HAVE_addv8hi3;
  ena[151] = HAVE_addv4si3;
  ena[152] = HAVE_addv2di3;
  ena[153] = HAVE_addv4qq3;
  ena[154] = HAVE_addv2hq3;
  ena[155] = HAVE_addv2ha3;
  ena[156] = HAVE_addv2sf3;
  ena[157] = HAVE_addv4sf3;
  ena[158] = HAVE_ssaddqq3;
  ena[159] = HAVE_ssaddhq3;
  ena[160] = HAVE_ssaddsq3;
  ena[161] = HAVE_ssaddha3;
  ena[162] = HAVE_ssaddsa3;
  ena[163] = HAVE_ssaddv4qq3;
  ena[164] = HAVE_ssaddv2hq3;
  ena[165] = HAVE_ssaddv2ha3;
  ena[166] = HAVE_usadduqq3;
  ena[167] = HAVE_usadduhq3;
  ena[168] = HAVE_usadduha3;
  ena[169] = HAVE_usaddv4uqq3;
  ena[170] = HAVE_usaddv2uhq3;
  ena[171] = HAVE_usaddv2uha3;
  ena[172] = HAVE_subsi3;
  ena[173] = HAVE_subdi3;
  ena[174] = HAVE_subqq3;
  ena[175] = HAVE_subhq3;
  ena[176] = HAVE_subsq3;
  ena[177] = HAVE_subuqq3;
  ena[178] = HAVE_subuhq3;
  ena[179] = HAVE_subusq3;
  ena[180] = HAVE_subha3;
  ena[181] = HAVE_subsa3;
  ena[182] = HAVE_subuha3;
  ena[183] = HAVE_subusa3;
  ena[184] = HAVE_subsf3;
  ena[185] = HAVE_subdf3;
  ena[186] = HAVE_subv8qi3;
  ena[187] = HAVE_subv4hi3;
  ena[188] = HAVE_subv2si3;
  ena[189] = HAVE_subv16qi3;
  ena[190] = HAVE_subv8hi3;
  ena[191] = HAVE_subv4si3;
  ena[192] = HAVE_subv2di3;
  ena[193] = HAVE_subv4qq3;
  ena[194] = HAVE_subv2hq3;
  ena[195] = HAVE_subv2ha3;
  ena[196] = HAVE_subv2sf3;
  ena[197] = HAVE_subv4sf3;
  ena[198] = HAVE_sssubqq3;
  ena[199] = HAVE_sssubhq3;
  ena[200] = HAVE_sssubsq3;
  ena[201] = HAVE_sssubha3;
  ena[202] = HAVE_sssubsa3;
  ena[203] = HAVE_sssubv4qq3;
  ena[204] = HAVE_sssubv2hq3;
  ena[205] = HAVE_sssubv2ha3;
  ena[206] = HAVE_ussubuqq3;
  ena[207] = HAVE_ussubuhq3;
  ena[208] = HAVE_ussubuha3;
  ena[209] = HAVE_ussubv4uqq3;
  ena[210] = HAVE_ussubv2uhq3;
  ena[211] = HAVE_ussubv2uha3;
  ena[212] = HAVE_mulhi3;
  ena[213] = HAVE_mulsi3;
  ena[214] = HAVE_mulqq3;
  ena[215] = HAVE_mulhq3;
  ena[216] = HAVE_mulsq3;
  ena[217] = HAVE_mulha3;
  ena[218] = HAVE_mulsa3;
  ena[219] = HAVE_muluha3;
  ena[220] = HAVE_mulusa3;
  ena[221] = HAVE_mulsf3;
  ena[222] = HAVE_muldf3;
  ena[223] = HAVE_mulv8qi3;
  ena[224] = HAVE_mulv4hi3;
  ena[225] = HAVE_mulv2si3;
  ena[226] = HAVE_mulv16qi3;
  ena[227] = HAVE_mulv8hi3;
  ena[228] = HAVE_mulv4si3;
  ena[229] = HAVE_mulv2sf3;
  ena[230] = HAVE_mulv4sf3;
  ena[231] = HAVE_ssmulha3;
  ena[232] = HAVE_ssmulsa3;
  ena[233] = HAVE_usmuluha3;
  ena[234] = HAVE_usmulusa3;
  ena[235] = HAVE_divsi3;
  ena[236] = HAVE_divsf3;
  ena[237] = HAVE_divdf3;
  ena[238] = HAVE_udivsi3;
  ena[239] = HAVE_andsi3;
  ena[240] = HAVE_anddi3;
  ena[241] = HAVE_andv8qi3;
  ena[242] = HAVE_andv4hi3;
  ena[243] = HAVE_andv2si3;
  ena[244] = HAVE_andv16qi3;
  ena[245] = HAVE_andv8hi3;
  ena[246] = HAVE_andv4si3;
  ena[247] = HAVE_andv2di3;
  ena[248] = HAVE_andv2sf3;
  ena[249] = HAVE_andv4sf3;
  ena[250] = HAVE_iorsi3;
  ena[251] = HAVE_iordi3;
  ena[252] = HAVE_iorv8qi3;
  ena[253] = HAVE_iorv4hi3;
  ena[254] = HAVE_iorv2si3;
  ena[255] = HAVE_iorv16qi3;
  ena[256] = HAVE_iorv8hi3;
  ena[257] = HAVE_iorv4si3;
  ena[258] = HAVE_iorv2di3;
  ena[259] = HAVE_iorv2sf3;
  ena[260] = HAVE_iorv4sf3;
  ena[261] = HAVE_xorsi3;
  ena[262] = HAVE_xordi3;
  ena[263] = HAVE_xorv8qi3;
  ena[264] = HAVE_xorv4hi3;
  ena[265] = HAVE_xorv2si3;
  ena[266] = HAVE_xorv16qi3;
  ena[267] = HAVE_xorv8hi3;
  ena[268] = HAVE_xorv4si3;
  ena[269] = HAVE_xorv2di3;
  ena[270] = HAVE_xorv2sf3;
  ena[271] = HAVE_xorv4sf3;
  ena[272] = HAVE_ashlsi3;
  ena[273] = HAVE_ashldi3;
  ena[274] = HAVE_ashrsi3;
  ena[275] = HAVE_ashrdi3;
  ena[276] = HAVE_lshrsi3;
  ena[277] = HAVE_lshrdi3;
  ena[278] = HAVE_rotlsi3;
  ena[279] = HAVE_rotrsi3;
  ena[280] = HAVE_vashlv8qi3;
  ena[281] = HAVE_vashlv4hi3;
  ena[282] = HAVE_vashlv2si3;
  ena[283] = HAVE_vashlv16qi3;
  ena[284] = HAVE_vashlv8hi3;
  ena[285] = HAVE_vashlv4si3;
  ena[286] = HAVE_vashrv8qi3;
  ena[287] = HAVE_vashrv4hi3;
  ena[288] = HAVE_vashrv2si3;
  ena[289] = HAVE_vashrv16qi3;
  ena[290] = HAVE_vashrv8hi3;
  ena[291] = HAVE_vashrv4si3;
  ena[292] = HAVE_vlshrv8qi3;
  ena[293] = HAVE_vlshrv4hi3;
  ena[294] = HAVE_vlshrv2si3;
  ena[295] = HAVE_vlshrv16qi3;
  ena[296] = HAVE_vlshrv8hi3;
  ena[297] = HAVE_vlshrv4si3;
  ena[298] = HAVE_sminsi3;
  ena[299] = HAVE_sminsf3;
  ena[300] = HAVE_smindf3;
  ena[301] = HAVE_sminv8qi3;
  ena[302] = HAVE_sminv4hi3;
  ena[303] = HAVE_sminv2si3;
  ena[304] = HAVE_sminv16qi3;
  ena[305] = HAVE_sminv8hi3;
  ena[306] = HAVE_sminv4si3;
  ena[307] = HAVE_sminv2sf3;
  ena[308] = HAVE_sminv4sf3;
  ena[309] = HAVE_smaxsi3;
  ena[310] = HAVE_smaxsf3;
  ena[311] = HAVE_smaxdf3;
  ena[312] = HAVE_smaxv8qi3;
  ena[313] = HAVE_smaxv4hi3;
  ena[314] = HAVE_smaxv2si3;
  ena[315] = HAVE_smaxv16qi3;
  ena[316] = HAVE_smaxv8hi3;
  ena[317] = HAVE_smaxv4si3;
  ena[318] = HAVE_smaxv2sf3;
  ena[319] = HAVE_smaxv4sf3;
  ena[320] = HAVE_uminsi3;
  ena[321] = HAVE_uminv8qi3;
  ena[322] = HAVE_uminv4hi3;
  ena[323] = HAVE_uminv2si3;
  ena[324] = HAVE_uminv16qi3;
  ena[325] = HAVE_uminv8hi3;
  ena[326] = HAVE_uminv4si3;
  ena[327] = HAVE_umaxsi3;
  ena[328] = HAVE_umaxv8qi3;
  ena[329] = HAVE_umaxv4hi3;
  ena[330] = HAVE_umaxv2si3;
  ena[331] = HAVE_umaxv16qi3;
  ena[332] = HAVE_umaxv8hi3;
  ena[333] = HAVE_umaxv4si3;
  ena[334] = HAVE_negsi2;
  ena[335] = HAVE_negdi2;
  ena[336] = HAVE_negsf2;
  ena[337] = HAVE_negdf2;
  ena[338] = HAVE_negv8qi2;
  ena[339] = HAVE_negv4hi2;
  ena[340] = HAVE_negv2si2;
  ena[341] = HAVE_negv16qi2;
  ena[342] = HAVE_negv8hi2;
  ena[343] = HAVE_negv4si2;
  ena[344] = HAVE_negv2sf2;
  ena[345] = HAVE_negv4sf2;
  ena[346] = HAVE_abssi2;
  ena[347] = HAVE_abssf2;
  ena[348] = HAVE_absdf2;
  ena[349] = HAVE_absv8qi2;
  ena[350] = HAVE_absv4hi2;
  ena[351] = HAVE_absv2si2;
  ena[352] = HAVE_absv16qi2;
  ena[353] = HAVE_absv8hi2;
  ena[354] = HAVE_absv4si2;
  ena[355] = HAVE_absv2sf2;
  ena[356] = HAVE_absv4sf2;
  ena[357] = HAVE_one_cmplsi2;
  ena[358] = HAVE_one_cmpldi2;
  ena[359] = HAVE_one_cmplv8qi2;
  ena[360] = HAVE_one_cmplv4hi2;
  ena[361] = HAVE_one_cmplv2si2;
  ena[362] = HAVE_one_cmplv16qi2;
  ena[363] = HAVE_one_cmplv8hi2;
  ena[364] = HAVE_one_cmplv4si2;
  ena[365] = HAVE_one_cmplv2di2;
  ena[366] = HAVE_one_cmplv2sf2;
  ena[367] = HAVE_one_cmplv4sf2;
  ena[368] = HAVE_bswaphi2;
  ena[369] = HAVE_bswapsi2;
  ena[370] = HAVE_clzsi2;
  ena[371] = HAVE_clzv8qi2;
  ena[372] = HAVE_clzv4hi2;
  ena[373] = HAVE_clzv2si2;
  ena[374] = HAVE_clzv16qi2;
  ena[375] = HAVE_clzv8hi2;
  ena[376] = HAVE_clzv4si2;
  ena[377] = HAVE_ctzsi2;
  ena[378] = HAVE_popcountv8qi2;
  ena[379] = HAVE_popcountv16qi2;
  ena[380] = HAVE_sqrtsf2;
  ena[381] = HAVE_sqrtdf2;
  ena[382] = HAVE_movqi;
  ena[383] = HAVE_movhi;
  ena[384] = HAVE_movsi;
  ena[385] = HAVE_movdi;
  ena[386] = HAVE_movti;
  ena[387] = HAVE_movei;
  ena[388] = HAVE_movoi;
  ena[389] = HAVE_movci;
  ena[390] = HAVE_movxi;
  ena[391] = HAVE_movhf;
  ena[392] = HAVE_movsf;
  ena[393] = HAVE_movdf;
  ena[394] = HAVE_movv8qi;
  ena[395] = HAVE_movv4hi;
  ena[396] = HAVE_movv2si;
  ena[397] = HAVE_movv16qi;
  ena[398] = HAVE_movv8hi;
  ena[399] = HAVE_movv4si;
  ena[400] = HAVE_movv2di;
  ena[401] = HAVE_movv2sf;
  ena[402] = HAVE_movv4sf;
  ena[403] = HAVE_movmisaligndi;
  ena[404] = HAVE_movmisalignv8qi;
  ena[405] = HAVE_movmisalignv4hi;
  ena[406] = HAVE_movmisalignv2si;
  ena[407] = HAVE_movmisalignv16qi;
  ena[408] = HAVE_movmisalignv8hi;
  ena[409] = HAVE_movmisalignv4si;
  ena[410] = HAVE_movmisalignv2di;
  ena[411] = HAVE_movmisalignv2sf;
  ena[412] = HAVE_movmisalignv4sf;
  ena[413] = HAVE_reload_inhi;
  ena[414] = HAVE_reload_outhi;
  ena[415] = HAVE_reload_outdf;
  ena[416] = HAVE_cbranchqi4;
  ena[417] = HAVE_cbranchsi4;
  ena[418] = HAVE_cbranchdi4;
  ena[419] = HAVE_cbranchsf4;
  ena[420] = HAVE_cbranchdf4;
  ena[421] = HAVE_movsicc;
  ena[422] = HAVE_movsfcc;
  ena[423] = HAVE_movdfcc;
  ena[424] = HAVE_cstoresi4;
  ena[425] = HAVE_cstoredi4;
  ena[426] = HAVE_cstoresf4;
  ena[427] = HAVE_cstoredf4;
  ena[428] = HAVE_smulsi3_highpart;
  ena[429] = HAVE_smulv4hi3_highpart;
  ena[430] = HAVE_umulsi3_highpart;
  ena[431] = HAVE_umulv4hi3_highpart;
  ena[432] = HAVE_movmemqi;
  ena[433] = HAVE_fmasf4;
  ena[434] = HAVE_fmadf4;
  ena[435] = HAVE_fmav2sf4;
  ena[436] = HAVE_fmav4sf4;
  ena[437] = HAVE_rintsf2;
  ena[438] = HAVE_rintdf2;
  ena[439] = HAVE_roundsf2;
  ena[440] = HAVE_rounddf2;
  ena[441] = HAVE_floorsf2;
  ena[442] = HAVE_floordf2;
  ena[443] = HAVE_ceilsf2;
  ena[444] = HAVE_ceildf2;
  ena[445] = HAVE_btruncsf2;
  ena[446] = HAVE_btruncdf2;
  ena[447] = HAVE_nearbyintsf2;
  ena[448] = HAVE_nearbyintdf2;
  ena[449] = HAVE_reduc_smax_v8qi;
  ena[450] = HAVE_reduc_smax_v4hi;
  ena[451] = HAVE_reduc_smax_v2si;
  ena[452] = HAVE_reduc_smax_v16qi;
  ena[453] = HAVE_reduc_smax_v8hi;
  ena[454] = HAVE_reduc_smax_v4si;
  ena[455] = HAVE_reduc_smax_v2sf;
  ena[456] = HAVE_reduc_smax_v4sf;
  ena[457] = HAVE_reduc_smin_v8qi;
  ena[458] = HAVE_reduc_smin_v4hi;
  ena[459] = HAVE_reduc_smin_v2si;
  ena[460] = HAVE_reduc_smin_v16qi;
  ena[461] = HAVE_reduc_smin_v8hi;
  ena[462] = HAVE_reduc_smin_v4si;
  ena[463] = HAVE_reduc_smin_v2sf;
  ena[464] = HAVE_reduc_smin_v4sf;
  ena[465] = HAVE_reduc_splus_v8qi;
  ena[466] = HAVE_reduc_splus_v4hi;
  ena[467] = HAVE_reduc_splus_v2si;
  ena[468] = HAVE_reduc_splus_v16qi;
  ena[469] = HAVE_reduc_splus_v8hi;
  ena[470] = HAVE_reduc_splus_v4si;
  ena[471] = HAVE_reduc_splus_v2di;
  ena[472] = HAVE_reduc_splus_v2sf;
  ena[473] = HAVE_reduc_splus_v4sf;
  ena[474] = HAVE_reduc_umax_v8qi;
  ena[475] = HAVE_reduc_umax_v4hi;
  ena[476] = HAVE_reduc_umax_v2si;
  ena[477] = HAVE_reduc_umax_v16qi;
  ena[478] = HAVE_reduc_umax_v8hi;
  ena[479] = HAVE_reduc_umax_v4si;
  ena[480] = HAVE_reduc_umin_v8qi;
  ena[481] = HAVE_reduc_umin_v4hi;
  ena[482] = HAVE_reduc_umin_v2si;
  ena[483] = HAVE_reduc_umin_v16qi;
  ena[484] = HAVE_reduc_umin_v8hi;
  ena[485] = HAVE_reduc_umin_v4si;
  ena[486] = HAVE_reduc_uplus_v8qi;
  ena[487] = HAVE_reduc_uplus_v4hi;
  ena[488] = HAVE_reduc_uplus_v2si;
  ena[489] = HAVE_reduc_uplus_v16qi;
  ena[490] = HAVE_reduc_uplus_v8hi;
  ena[491] = HAVE_reduc_uplus_v4si;
  ena[492] = HAVE_reduc_uplus_v2di;
  ena[493] = HAVE_widen_ssumv8qi3;
  ena[494] = HAVE_widen_ssumv4hi3;
  ena[495] = HAVE_widen_ssumv2si3;
  ena[496] = HAVE_widen_usumv8qi3;
  ena[497] = HAVE_widen_usumv4hi3;
  ena[498] = HAVE_widen_usumv2si3;
  ena[499] = HAVE_vec_extractv8qi;
  ena[500] = HAVE_vec_extractv4hi;
  ena[501] = HAVE_vec_extractv2si;
  ena[502] = HAVE_vec_extractv16qi;
  ena[503] = HAVE_vec_extractv8hi;
  ena[504] = HAVE_vec_extractv4si;
  ena[505] = HAVE_vec_extractv2di;
  ena[506] = HAVE_vec_extractv2sf;
  ena[507] = HAVE_vec_extractv4sf;
  ena[508] = HAVE_vec_initv8qi;
  ena[509] = HAVE_vec_initv4hi;
  ena[510] = HAVE_vec_initv2si;
  ena[511] = HAVE_vec_initv16qi;
  ena[512] = HAVE_vec_initv8hi;
  ena[513] = HAVE_vec_initv4si;
  ena[514] = HAVE_vec_initv2di;
  ena[515] = HAVE_vec_initv2sf;
  ena[516] = HAVE_vec_initv4sf;
  ena[517] = HAVE_vec_pack_trunc_di;
  ena[518] = HAVE_vec_pack_trunc_v4hi;
  ena[519] = HAVE_vec_pack_trunc_v2si;
  ena[520] = HAVE_vec_pack_trunc_v8hi;
  ena[521] = HAVE_vec_pack_trunc_v4si;
  ena[522] = HAVE_vec_pack_trunc_v2di;
  ena[523] = HAVE_vec_perm_constv8qi;
  ena[524] = HAVE_vec_perm_constv4hi;
  ena[525] = HAVE_vec_perm_constv2si;
  ena[526] = HAVE_vec_perm_constv16qi;
  ena[527] = HAVE_vec_perm_constv8hi;
  ena[528] = HAVE_vec_perm_constv4si;
  ena[529] = HAVE_vec_perm_constv2di;
  ena[530] = HAVE_vec_perm_constv2sf;
  ena[531] = HAVE_vec_perm_constv4sf;
  ena[532] = HAVE_vec_permv8qi;
  ena[533] = HAVE_vec_permv16qi;
  ena[534] = HAVE_vec_setv8qi;
  ena[535] = HAVE_vec_setv4hi;
  ena[536] = HAVE_vec_setv2si;
  ena[537] = HAVE_vec_setv16qi;
  ena[538] = HAVE_vec_setv8hi;
  ena[539] = HAVE_vec_setv4si;
  ena[540] = HAVE_vec_setv2di;
  ena[541] = HAVE_vec_setv2sf;
  ena[542] = HAVE_vec_setv4sf;
  ena[543] = HAVE_vec_shl_v8qi;
  ena[544] = HAVE_vec_shl_v4hi;
  ena[545] = HAVE_vec_shl_v2si;
  ena[546] = HAVE_vec_shl_v16qi;
  ena[547] = HAVE_vec_shl_v8hi;
  ena[548] = HAVE_vec_shl_v4si;
  ena[549] = HAVE_vec_shl_v2di;
  ena[550] = HAVE_vec_shl_v2sf;
  ena[551] = HAVE_vec_shl_v4sf;
  ena[552] = HAVE_vec_shr_v8qi;
  ena[553] = HAVE_vec_shr_v4hi;
  ena[554] = HAVE_vec_shr_v2si;
  ena[555] = HAVE_vec_shr_v16qi;
  ena[556] = HAVE_vec_shr_v8hi;
  ena[557] = HAVE_vec_shr_v4si;
  ena[558] = HAVE_vec_shr_v2di;
  ena[559] = HAVE_vec_shr_v2sf;
  ena[560] = HAVE_vec_shr_v4sf;
  ena[561] = HAVE_vec_unpacks_hi_v8qi;
  ena[562] = HAVE_vec_unpacks_hi_v4hi;
  ena[563] = HAVE_vec_unpacks_hi_v2si;
  ena[564] = HAVE_vec_unpacks_hi_v16qi;
  ena[565] = HAVE_vec_unpacks_hi_v8hi;
  ena[566] = HAVE_vec_unpacks_hi_v4si;
  ena[567] = HAVE_vec_unpacks_lo_v8qi;
  ena[568] = HAVE_vec_unpacks_lo_v4hi;
  ena[569] = HAVE_vec_unpacks_lo_v2si;
  ena[570] = HAVE_vec_unpacks_lo_v16qi;
  ena[571] = HAVE_vec_unpacks_lo_v8hi;
  ena[572] = HAVE_vec_unpacks_lo_v4si;
  ena[573] = HAVE_vec_unpacku_hi_v8qi;
  ena[574] = HAVE_vec_unpacku_hi_v4hi;
  ena[575] = HAVE_vec_unpacku_hi_v2si;
  ena[576] = HAVE_vec_unpacku_hi_v16qi;
  ena[577] = HAVE_vec_unpacku_hi_v8hi;
  ena[578] = HAVE_vec_unpacku_hi_v4si;
  ena[579] = HAVE_vec_unpacku_lo_v8qi;
  ena[580] = HAVE_vec_unpacku_lo_v4hi;
  ena[581] = HAVE_vec_unpacku_lo_v2si;
  ena[582] = HAVE_vec_unpacku_lo_v16qi;
  ena[583] = HAVE_vec_unpacku_lo_v8hi;
  ena[584] = HAVE_vec_unpacku_lo_v4si;
  ena[585] = HAVE_vec_widen_smult_hi_v8qi;
  ena[586] = HAVE_vec_widen_smult_hi_v4hi;
  ena[587] = HAVE_vec_widen_smult_hi_v2si;
  ena[588] = HAVE_vec_widen_smult_hi_v16qi;
  ena[589] = HAVE_vec_widen_smult_hi_v8hi;
  ena[590] = HAVE_vec_widen_smult_hi_v4si;
  ena[591] = HAVE_vec_widen_smult_lo_v8qi;
  ena[592] = HAVE_vec_widen_smult_lo_v4hi;
  ena[593] = HAVE_vec_widen_smult_lo_v2si;
  ena[594] = HAVE_vec_widen_smult_lo_v16qi;
  ena[595] = HAVE_vec_widen_smult_lo_v8hi;
  ena[596] = HAVE_vec_widen_smult_lo_v4si;
  ena[597] = HAVE_vec_widen_sshiftl_hi_v8qi;
  ena[598] = HAVE_vec_widen_sshiftl_hi_v4hi;
  ena[599] = HAVE_vec_widen_sshiftl_hi_v2si;
  ena[600] = HAVE_vec_widen_sshiftl_hi_v16qi;
  ena[601] = HAVE_vec_widen_sshiftl_hi_v8hi;
  ena[602] = HAVE_vec_widen_sshiftl_hi_v4si;
  ena[603] = HAVE_vec_widen_sshiftl_lo_v8qi;
  ena[604] = HAVE_vec_widen_sshiftl_lo_v4hi;
  ena[605] = HAVE_vec_widen_sshiftl_lo_v2si;
  ena[606] = HAVE_vec_widen_sshiftl_lo_v16qi;
  ena[607] = HAVE_vec_widen_sshiftl_lo_v8hi;
  ena[608] = HAVE_vec_widen_sshiftl_lo_v4si;
  ena[609] = HAVE_vec_widen_umult_hi_v8qi;
  ena[610] = HAVE_vec_widen_umult_hi_v4hi;
  ena[611] = HAVE_vec_widen_umult_hi_v2si;
  ena[612] = HAVE_vec_widen_umult_hi_v16qi;
  ena[613] = HAVE_vec_widen_umult_hi_v8hi;
  ena[614] = HAVE_vec_widen_umult_hi_v4si;
  ena[615] = HAVE_vec_widen_umult_lo_v8qi;
  ena[616] = HAVE_vec_widen_umult_lo_v4hi;
  ena[617] = HAVE_vec_widen_umult_lo_v2si;
  ena[618] = HAVE_vec_widen_umult_lo_v16qi;
  ena[619] = HAVE_vec_widen_umult_lo_v8hi;
  ena[620] = HAVE_vec_widen_umult_lo_v4si;
  ena[621] = HAVE_vec_widen_ushiftl_hi_v8qi;
  ena[622] = HAVE_vec_widen_ushiftl_hi_v4hi;
  ena[623] = HAVE_vec_widen_ushiftl_hi_v2si;
  ena[624] = HAVE_vec_widen_ushiftl_hi_v16qi;
  ena[625] = HAVE_vec_widen_ushiftl_hi_v8hi;
  ena[626] = HAVE_vec_widen_ushiftl_hi_v4si;
  ena[627] = HAVE_vec_widen_ushiftl_lo_v8qi;
  ena[628] = HAVE_vec_widen_ushiftl_lo_v4hi;
  ena[629] = HAVE_vec_widen_ushiftl_lo_v2si;
  ena[630] = HAVE_vec_widen_ushiftl_lo_v16qi;
  ena[631] = HAVE_vec_widen_ushiftl_lo_v8hi;
  ena[632] = HAVE_vec_widen_ushiftl_lo_v4si;
  ena[633] = HAVE_atomic_add_fetchqi;
  ena[634] = HAVE_atomic_add_fetchhi;
  ena[635] = HAVE_atomic_add_fetchsi;
  ena[636] = HAVE_atomic_add_fetchdi;
  ena[637] = HAVE_atomic_addqi;
  ena[638] = HAVE_atomic_addhi;
  ena[639] = HAVE_atomic_addsi;
  ena[640] = HAVE_atomic_adddi;
  ena[641] = HAVE_atomic_and_fetchqi;
  ena[642] = HAVE_atomic_and_fetchhi;
  ena[643] = HAVE_atomic_and_fetchsi;
  ena[644] = HAVE_atomic_and_fetchdi;
  ena[645] = HAVE_atomic_andqi;
  ena[646] = HAVE_atomic_andhi;
  ena[647] = HAVE_atomic_andsi;
  ena[648] = HAVE_atomic_anddi;
  ena[649] = HAVE_atomic_compare_and_swapqi;
  ena[650] = HAVE_atomic_compare_and_swaphi;
  ena[651] = HAVE_atomic_compare_and_swapsi;
  ena[652] = HAVE_atomic_compare_and_swapdi;
  ena[653] = HAVE_atomic_exchangeqi;
  ena[654] = HAVE_atomic_exchangehi;
  ena[655] = HAVE_atomic_exchangesi;
  ena[656] = HAVE_atomic_exchangedi;
  ena[657] = HAVE_atomic_fetch_addqi;
  ena[658] = HAVE_atomic_fetch_addhi;
  ena[659] = HAVE_atomic_fetch_addsi;
  ena[660] = HAVE_atomic_fetch_adddi;
  ena[661] = HAVE_atomic_fetch_andqi;
  ena[662] = HAVE_atomic_fetch_andhi;
  ena[663] = HAVE_atomic_fetch_andsi;
  ena[664] = HAVE_atomic_fetch_anddi;
  ena[665] = HAVE_atomic_fetch_nandqi;
  ena[666] = HAVE_atomic_fetch_nandhi;
  ena[667] = HAVE_atomic_fetch_nandsi;
  ena[668] = HAVE_atomic_fetch_nanddi;
  ena[669] = HAVE_atomic_fetch_orqi;
  ena[670] = HAVE_atomic_fetch_orhi;
  ena[671] = HAVE_atomic_fetch_orsi;
  ena[672] = HAVE_atomic_fetch_ordi;
  ena[673] = HAVE_atomic_fetch_subqi;
  ena[674] = HAVE_atomic_fetch_subhi;
  ena[675] = HAVE_atomic_fetch_subsi;
  ena[676] = HAVE_atomic_fetch_subdi;
  ena[677] = HAVE_atomic_fetch_xorqi;
  ena[678] = HAVE_atomic_fetch_xorhi;
  ena[679] = HAVE_atomic_fetch_xorsi;
  ena[680] = HAVE_atomic_fetch_xordi;
  ena[681] = HAVE_atomic_loadqi;
  ena[682] = HAVE_atomic_loadhi;
  ena[683] = HAVE_atomic_loadsi;
  ena[684] = HAVE_atomic_loaddi;
  ena[685] = HAVE_atomic_nand_fetchqi;
  ena[686] = HAVE_atomic_nand_fetchhi;
  ena[687] = HAVE_atomic_nand_fetchsi;
  ena[688] = HAVE_atomic_nand_fetchdi;
  ena[689] = HAVE_atomic_nandqi;
  ena[690] = HAVE_atomic_nandhi;
  ena[691] = HAVE_atomic_nandsi;
  ena[692] = HAVE_atomic_nanddi;
  ena[693] = HAVE_atomic_or_fetchqi;
  ena[694] = HAVE_atomic_or_fetchhi;
  ena[695] = HAVE_atomic_or_fetchsi;
  ena[696] = HAVE_atomic_or_fetchdi;
  ena[697] = HAVE_atomic_orqi;
  ena[698] = HAVE_atomic_orhi;
  ena[699] = HAVE_atomic_orsi;
  ena[700] = HAVE_atomic_ordi;
  ena[701] = HAVE_atomic_storeqi;
  ena[702] = HAVE_atomic_storehi;
  ena[703] = HAVE_atomic_storesi;
  ena[704] = HAVE_atomic_sub_fetchqi;
  ena[705] = HAVE_atomic_sub_fetchhi;
  ena[706] = HAVE_atomic_sub_fetchsi;
  ena[707] = HAVE_atomic_sub_fetchdi;
  ena[708] = HAVE_atomic_subqi;
  ena[709] = HAVE_atomic_subhi;
  ena[710] = HAVE_atomic_subsi;
  ena[711] = HAVE_atomic_subdi;
  ena[712] = HAVE_atomic_xor_fetchqi;
  ena[713] = HAVE_atomic_xor_fetchhi;
  ena[714] = HAVE_atomic_xor_fetchsi;
  ena[715] = HAVE_atomic_xor_fetchdi;
  ena[716] = HAVE_atomic_xorqi;
  ena[717] = HAVE_atomic_xorhi;
  ena[718] = HAVE_atomic_xorsi;
  ena[719] = HAVE_atomic_xordi;
  ena[720] = HAVE_get_thread_pointersi;
}

static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, enum machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '4', "divmod", gen_int_libfunc },
  { '4', "udivmod", gen_int_libfunc },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

