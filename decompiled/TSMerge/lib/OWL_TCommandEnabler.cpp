// TSMerge.exe — runtime / library code "OWL_TCommandEnabler"
// 3 functions, 0x0042aa1c..0x0042e18c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042aa1c  OWL::TCommandEnabler::TCommandEnabler   (61 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TCommandEnabler's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TCommandEnabler::TCommandEnabler(undefined4 *self,undefined4 param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46a830);
  *self = &OWL::TCommandEnabler::vftable;
  self[1] = param_2;
  self[2] = param_3;
  self[3] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aa5c  OWL::TCommandEnabler::vf0   (12 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TCommandEnabler::vf0(int self)

{
  *(uint *)(self + 0xc) = *(uint *)(self + 0xc) | 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e18c  OWL::TCommandEnabler::vf3   (11 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 OWL::TCommandEnabler::vf3(char *self,byte *param_2,int param_3)

{
  byte *pbVar1;
  HDC hdc;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *sehChainHead;
  
  *self = *self + (char)self;
  *(char *)((int)self * 2) = *(char *)((int)self * 2) + (char)param_3;
  pbVar1 = (byte *)(param_3 + (int)self * 2);
  *pbVar1 = *pbVar1 ^ (byte)((uint)self >> 8);
  *(char *)(unaff_EDI + 0x57) = *(char *)(unaff_EDI + 0x57) + (char)param_3;
  iVar3 = *(int *)(unaff_ESI + 100) * 0x4344776f;
  *param_2 = *param_2 & (byte)((uint)param_3 >> 8);
  self[-0x74aa6f70] = self[-0x74aa6f70] + (char)param_2;
  in((short)param_2);
  __InitExceptBlockLDTC(0x46abd0);
  *(undefined2 *)(iVar3 + -0x14) = 8;
  FUN_00416afc(*(undefined4 **)(iVar3 + 8));
  *(int *)(iVar3 + -8) = *(int *)(iVar3 + -8) + 1;
  *(undefined ***)(*(int *)(iVar3 + 8) + 5) = &OWL::TWindowDC::vftable;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0x21) = *(undefined4 *)(iVar3 + 0xc);
  hdc = GetWindowDC(*(HWND *)(*(int *)(iVar3 + 8) + 0x21));
  **(undefined4 **)(iVar3 + 8) = hdc;
  FUN_0041c800(*(int **)(iVar3 + 8),0x7fe3);
  *sehChainHead = *(undefined4 *)(iVar3 + -0x24);
  return *(undefined4 *)(iVar3 + 8);
}

} // namespace tea
