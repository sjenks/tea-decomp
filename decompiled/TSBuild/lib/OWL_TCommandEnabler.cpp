// TSBuild.exe — runtime / library code "OWL_TCommandEnabler"
// 3 functions, 0x00435bb0..0x00439320. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00435bb0  OWL::TCommandEnabler::TCommandEnabler   (61 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TCommandEnabler's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TCommandEnabler::TCommandEnabler(undefined4 *self,undefined4 param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47e60c);
  *self = &OWL::TCommandEnabler::vftable;
  self[1] = param_2;
  self[2] = param_3;
  self[3] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435bf0  OWL::TCommandEnabler::vf0   (12 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TCommandEnabler::vf0(int self)

{
  *(uint *)(self + 0xc) = *(uint *)(self + 0xc) | 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439320  OWL::TCommandEnabler::vf3   (11 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 OWL::TCommandEnabler::vf3(char *self,byte *param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  HDC hdc;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *sehChainHead;
  
  bVar2 = (byte)self;
  *self = *self + bVar2;
  *(char *)((int)self * 2) = *(char *)((int)self * 2) + (char)param_3;
  *(char *)(unaff_EDI + 0x57) = *(char *)(unaff_EDI + 0x57) + (char)param_3;
  iVar4 = *(int *)(unaff_ESI + 100) * 0x4344776f;
  *param_2 = *param_2 & (byte)((uint)param_3 >> 8);
  pcVar1 = (char *)(CONCAT31((int3)(CONCAT22((short)((uint)self >> 0x10),
                                             CONCAT11(bVar2 / 0x41,bVar2)) >> 8),bVar2 % 0x41) +
                   -0x74aa6f70);
  *pcVar1 = *pcVar1 + (char)param_2;
  in((short)param_2);
  __InitExceptBlockLDTC(0x47e9ac);
  *(undefined2 *)(iVar4 + -0x14) = 8;
  FUN_00421c70(*(undefined4 **)(iVar4 + 8));
  *(int *)(iVar4 + -8) = *(int *)(iVar4 + -8) + 1;
  *(undefined ***)(*(int *)(iVar4 + 8) + 5) = &OWL::TWindowDC::vftable;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x21) = *(undefined4 *)(iVar4 + 0xc);
  hdc = GetWindowDC(*(HWND *)(*(int *)(iVar4 + 8) + 0x21));
  **(undefined4 **)(iVar4 + 8) = hdc;
  FUN_00427974(*(int **)(iVar4 + 8),0x7fe3);
  *sehChainHead = *(undefined4 *)(iVar4 + -0x24);
  return *(undefined4 *)(iVar4 + 8);
}

} // namespace tea
