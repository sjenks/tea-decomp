// TSMerge.exe — runtime / library code "OWL_TMemoryDC"
// 3 functions, 0x00417368..0x00420a04. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00417368  OWL::TMemoryDC::vf5   (20 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TMemoryDC::vf5(undefined4 *param_1,uint *param_2)

{
  OWL::TDC::vf5(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420914  OWL::TMemoryDC::~TMemoryDC   (147 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMemoryDC::_dtor
int * __cdecl OWL::TMemoryDC::_dtor(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_28;
  
  piVar1 = (int *)__InitExceptBlockLDTC(0x468294);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
    FUN_004208e8(param_1);
    FUN_00416d80(param_1);
    FUN_004208e8(param_1);
    piVar1 = param_1;
    if ((char)param_1[1] == '\0') {
      iVar2 = *param_1;
      piVar1 = (int *)FUN_00420530();
      FUN_00420708((int)piVar1,iVar2);
    }
    OWL::TCreatedDC::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      piVar1 = (int *)operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a04  OWL::TMemoryDC::vf24   (28 bytes)   [rtti:vtable virtual slot 24; function defined from vtable-slot]
undefined4 OWL::TMemoryDC::vf24(byte *param_1,undefined **param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  HMENU pHVar3;
  int unaff_EBP;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_11;
  undefined1 *local_d;
  undefined1 uStack_9;
  int iStack_8;
  byte *pbStack_4;
  
  bVar1 = *param_1;
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  *param_1 = *param_1 + bVar2 + CARRY1(bVar1,bVar2);
  pbStack_4 = param_1;
  *param_3 = *param_3 | bVar2;
  iStack_8 = unaff_EDI + -1;
  local_d = &uStack_9;
  puVar4 = (undefined1 *)(unaff_EBP + -1);
  out(*unaff_ESI,(short)param_2);
  ppuVar5 = (undefined1 **)puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    ppuVar5 = &puStack_11;
    puStack_11 = puVar4;
    __InitExceptBlockLDTC(0x468354);
    param_2 = &OWL::TMenu::vftable;
  }
  **(undefined4 **)((int)ppuVar5 + 8) = param_2;
  pHVar3 = CreateMenu();
  *(HMENU *)(*(int *)((int)ppuVar5 + 8) + 4) = pHVar3;
  *(bool *)(*(int *)((int)ppuVar5 + 8) + 8) = *(int *)((int)ppuVar5 + 0x10) != 0;
  FUN_00420c24(*(int *)((int)ppuVar5 + 8),0x7fe8);
  FUN_00420c4c(*(int *)((int)ppuVar5 + 8),*(int **)((int)ppuVar5 + 0xc),0,-1);
  *in_FS_OFFSET = *(undefined4 *)((int)ppuVar5 + -0x24);
  return *(undefined4 *)((int)ppuVar5 + 8);
}

} // namespace tea
