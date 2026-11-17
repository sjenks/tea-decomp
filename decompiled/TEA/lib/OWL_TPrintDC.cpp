// TEA.exe — runtime / library code "OWL_TPrintDC"
// 1 functions, 0x0049cc00..0x0049cc00. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049cc00  OWL::TPrintDC::vf24   (32 bytes)   [rtti:vtable virtual slot 24; function defined from vtable-slot]
void OWL::TPrintDC::vf24(char *param_1,byte *param_2,char param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  byte unaff_BH;
  undefined1 *unaff_EBP;
  undefined1 *puVar4;
  undefined4 *unaff_ESI;
  undefined1 *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  unaff_EDI[0x57] = unaff_EDI[0x57] + param_3 + -1;
  bVar2 = *param_2;
  uVar3 = SUB42(param_2,0);
  out(*unaff_ESI,uVar3);
  out(unaff_ESI[1],uVar3);
  uVar1 = in(uVar3);
  *unaff_EDI = uVar1;
  if (unaff_BH < bVar2) {
    unaff_EBP = &GHIDRA_STACK(0xffffffef);
    __InitExceptBlockLDTC(0x508ed0);
    puVar4 = &GHIDRA_STACK(0xffffffef);
    if (&GHIDRA_STACK(0x00000000) == (undefined1 *)0x5) goto LAB_0049cc93;
  }
  *(undefined2 *)(unaff_EBP + -0x18) = 8;
  if ((*(char *)(*(int *)(unaff_EBP + 8) + 0xc) != '\0') &&
     (*(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8),
     *(int *)(unaff_EBP + -4) != 0)) {
    *(undefined2 *)(unaff_EBP + -0x18) = 0x20;
    OWL::TBitmap::_dtor(*(uint **)(unaff_EBP + -4),3);
    *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
  }
  *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1;
  OWL::TResource_OWL_TOOLBARTEMPLATE_241::_dtor(*(undefined4 **)(unaff_EBP + 8),0);
  puVar4 = unaff_EBP;
  if ((unaff_EBP[0xc] & 1) != 0) {
    operator_delete();
  }
LAB_0049cc93:
  *in_FS_OFFSET = *(undefined4 *)(puVar4 + -0x28);
  return;
}

} // namespace tea
