// TSMerge.exe — runtime / library code "OWL_TCommandEnabler"
// 2 functions, 0x0042aa5c..0x0042e18c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042aa5c  OWL::TCommandEnabler::vf0   (12 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TCommandEnabler::vf0(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e18c  OWL::TCommandEnabler::vf3   (11 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 OWL::TCommandEnabler::vf3(char *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  HDC pHVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + (char)param_3;
  pbVar1 = (byte *)(param_3 + (int)param_1 * 2);
  *pbVar1 = *pbVar1 ^ (byte)((uint)param_1 >> 8);
  *(char *)(unaff_EDI + 0x57) = *(char *)(unaff_EDI + 0x57) + (char)param_3;
  iVar3 = *(int *)(unaff_ESI + 100) * 0x4344776f;
  *param_2 = *param_2 & (byte)((uint)param_3 >> 8);
  param_1[-0x74aa6f70] = param_1[-0x74aa6f70] + (char)param_2;
  in((short)param_2);
  __InitExceptBlockLDTC(0x46abd0);
  *(undefined2 *)(iVar3 + -0x14) = 8;
  FUN_00416afc(*(undefined4 **)(iVar3 + 8));
  *(int *)(iVar3 + -8) = *(int *)(iVar3 + -8) + 1;
  *(undefined ***)(*(int *)(iVar3 + 8) + 5) = &OWL::TWindowDC::vftable;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0x21) = *(undefined4 *)(iVar3 + 0xc);
  pHVar2 = GetWindowDC(*(HWND *)(*(int *)(iVar3 + 8) + 0x21));
  **(undefined4 **)(iVar3 + 8) = pHVar2;
  FUN_0041c800(*(int **)(iVar3 + 8),0x7fe3);
  *in_FS_OFFSET = *(undefined4 *)(iVar3 + -0x24);
  return *(undefined4 *)(iVar3 + 8);
}

} // namespace tea
