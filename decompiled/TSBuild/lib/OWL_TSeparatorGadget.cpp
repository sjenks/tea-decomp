// TSBuild.exe — runtime / library code "OWL_TSeparatorGadget"
// 3 functions, 0x00424cc8..0x00424ef8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00424cc8  OWL::TSeparatorGadget::vf8   (13 bytes)   [rtti:vtable virtual slot 8; function defined from vtable-slot]
void __cdecl OWL::TSeparatorGadget::vf8(int param_1)

{
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424cd8  OWL::TSeparatorGadget::vf12   (445 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TSeparatorGadget::vf12(int *param_1,undefined4 *param_2)

{
  int iVar1;
  HDC pHVar2;
  uint uVar3;
  uint uVar4;
  tagRECT *ptVar5;
  int iVar6;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  uint local_8;
  
  if (((DAT_0047b01c & 1) != 0) && ((char)param_1[0x11] != '\0')) {
    if ((DAT_0047b01c & 0x10) == 0) {
      uVar4 = 0;
      local_8 = 4;
    }
    else {
      uVar4 = 0x4000;
      local_8 = 1;
    }
    if (*(char *)(*(int *)((int)param_1 + 6) + 0x35) == '\0') {
      local_20.left = 0;
      local_20.top = 0;
      local_20.right = 0;
      local_20.bottom = 0;
      FUN_004386fc(**(int **)((int)param_1 + 6),&local_20);
      local_c = DAT_0047d5f8;
      iVar1 = GetSystemMetrics(DAT_0047d5f8);
      FUN_004288b4(&local_20.left,0,-iVar1);
      iVar1 = 2;
      ptVar5 = &local_20;
      pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      DPtoLP(pHVar2,(LPPOINT)ptVar5,iVar1);
      uVar3 = *(int *)((int)param_1 + 0x12) - *(int *)((int)param_1 + 10);
      local_20.right = (int)uVar3 >> 1;
      if (local_20.right < 0) {
        local_20.right = local_20.right + (uint)((uVar3 & 1) != 0);
      }
      local_20.left = local_20.right + -1;
      local_20.right = local_20.right + 1;
      FUN_00430d78(param_2,&local_20,local_8,uVar4 | 4);
    }
    else if (*(char *)(*(int *)((int)param_1 + 6) + 0x35) == '\x01') {
      local_30.left = 0;
      local_30.top = 0;
      local_30.right = 0;
      local_30.bottom = 0;
      FUN_004386fc(**(int **)((int)param_1 + 6),&local_30);
      iVar6 = 0;
      local_10 = DAT_0047d5f0;
      iVar1 = GetSystemMetrics(DAT_0047d5f0);
      FUN_004288b4(&local_30.left,-iVar1,iVar6);
      iVar1 = 2;
      ptVar5 = &local_30;
      pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      DPtoLP(pHVar2,(LPPOINT)ptVar5,iVar1);
      uVar3 = *(int *)((int)param_1 + 0x16) - *(int *)((int)param_1 + 0xe);
      local_30.bottom = (int)uVar3 >> 1;
      if (local_30.bottom < 0) {
        local_30.bottom = local_30.bottom + (uint)((uVar3 & 1) != 0);
      }
      local_30.top = local_30.bottom + -1;
      local_30.bottom = local_30.bottom + 1;
      FUN_00430d78(param_2,&local_30,local_8,uVar4 | 2);
    }
  }
  OWL::TGadget::vf12(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424ef8  OWL::TSeparatorGadget::~TSeparatorGadget   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TSeparatorGadget::_dtor
void __cdecl OWL::TSeparatorGadget::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47ae88);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TGadget::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
