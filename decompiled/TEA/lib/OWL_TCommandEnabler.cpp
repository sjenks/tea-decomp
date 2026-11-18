// TEA.exe — runtime / library code "OWL_TCommandEnabler"
// 3 functions, 0x004a4d68..0x004a8654. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a4d68  OWL::TCommandEnabler::TCommandEnabler   (61 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TCommandEnabler's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TCommandEnabler::TCommandEnabler(undefined4 *self,undefined4 param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b050);
  *self = &OWL::TCommandEnabler::vftable;
  self[1] = param_2;
  self[2] = param_3;
  self[3] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4da8  OWL::TCommandEnabler::vf0   (12 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TCommandEnabler::vf0(int self)

{
  *(uint *)(self + 0xc) = *(uint *)(self + 0xc) | 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8654  OWL::TCommandEnabler::vf3   (12 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 OWL::TCommandEnabler::vf3(char *self,byte *param_2,undefined4 param_3)

{
  HDC hdc;
  int unaff_EBX;
  int iVar2;
  int unaff_ESI;
  undefined4 *sehChainHead;
  
  *self = *self + (char)self;
  *(char *)((int)self * 2) = *(char *)((int)self * 2) + (char)param_3;
  *(undefined1 *)(unaff_EBX + 0x40) = *(undefined1 *)(unaff_EBX + 0x40);
  iVar2 = *(int *)(unaff_ESI + 100) * 0x4344776f;
  *param_2 = *param_2 & (byte)((uint)param_3 >> 8);
  self[-0x74aa6f70] = self[-0x74aa6f70] + (char)param_2;
  in((short)param_2);
  __InitExceptBlockLDTC(0x50b414);
  *(undefined2 *)(iVar2 + -0x14) = 8;
  FUN_0048d82c(*(undefined4 **)(iVar2 + 8));
  *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + 1;
  *(undefined ***)(*(int *)(iVar2 + 8) + 5) = &OWL::TWindowDC::vftable;
  *(undefined4 *)(*(int *)(iVar2 + 8) + 0x21) = *(undefined4 *)(iVar2 + 0xc);
  hdc = GetWindowDC(*(HWND *)(*(int *)(iVar2 + 8) + 0x21));
  **(undefined4 **)(iVar2 + 8) = hdc;
  FUN_00493530(*(int **)(iVar2 + 8),0x7fe3);
  *sehChainHead = *(undefined4 *)(iVar2 + -0x24);
  return *(undefined4 *)(iVar2 + 8);
}

} // namespace tea
