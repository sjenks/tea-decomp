// TEA.exe — runtime / library code "OWL_TCommandEnabler"
// 2 functions, 0x004a4da8..0x004a8654. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a4da8  OWL::TCommandEnabler::vf0   (12 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TCommandEnabler::vf0(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8654  OWL::TCommandEnabler::vf3   (12 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 OWL::TCommandEnabler::vf3(char *param_1,byte *param_2,undefined4 param_3)

{
  HDC pHVar1;
  int unaff_EBX;
  int iVar2;
  int unaff_ESI;
  undefined4 *in_FS_OFFSET;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + (char)param_3;
  *(undefined1 *)(unaff_EBX + 0x40) = *(undefined1 *)(unaff_EBX + 0x40);
  iVar2 = *(int *)(unaff_ESI + 100) * 0x4344776f;
  *param_2 = *param_2 & (byte)((uint)param_3 >> 8);
  param_1[-0x74aa6f70] = param_1[-0x74aa6f70] + (char)param_2;
  in((short)param_2);
  __InitExceptBlockLDTC(0x50b414);
  *(undefined2 *)(iVar2 + -0x14) = 8;
  FUN_0048d82c(*(undefined4 **)(iVar2 + 8));
  *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + 1;
  *(undefined ***)(*(int *)(iVar2 + 8) + 5) = &OWL::TWindowDC::vftable;
  *(undefined4 *)(*(int *)(iVar2 + 8) + 0x21) = *(undefined4 *)(iVar2 + 0xc);
  pHVar1 = GetWindowDC(*(HWND *)(*(int *)(iVar2 + 8) + 0x21));
  **(undefined4 **)(iVar2 + 8) = pHVar1;
  FUN_00493530(*(int **)(iVar2 + 8),0x7fe3);
  *in_FS_OFFSET = *(undefined4 *)(iVar2 + -0x24);
  return *(undefined4 *)(iVar2 + 8);
}

} // namespace tea
