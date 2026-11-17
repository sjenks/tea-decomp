// TSMerge.exe — runtime / library code "OWL_TMessageBar"
// 5 functions, 0x0042113c..0x004213d8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042113c  OWL::TMessageBar::~TMessageBar   (272 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMessageBar::_dtor
void __cdecl OWL::TMessageBar::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4685ac);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&OWL::TMessageBar::vftable;
    param_1[1] = (int)&PTR_LAB_00468644;
    *(undefined ***)param_1[4] = &PTR_LAB_00468664;
    *(undefined ***)param_1[5] = &PTR_LAB_00468670;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046867c;
    operator_delete_array();
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -5;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -5;
    OWL::TGadgetWindow::_dtor(param_1,0);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 5;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 5;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x62),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x5a),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042124c  OWL::TMessageBar::vf15   (311 bytes)   [rtti:vtable virtual slot 15]
void OWL::TMessageBar::vf15(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4, undefined4 *param_5,undefined1 param_6,int *param_7)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  byte bVar4;
  tagRECT local_48;
  LONG local_38;
  int local_34;
  RECT local_28;
  int local_14;
  int local_c;
  int local_8;
  
  bVar4 = 0;
  if ((*(char *)((int)param_4 + 0x4d) != '\0') && (param_7[1] == 0)) {
    local_8 = GetSystemMetrics(DAT_00469744);
    local_c = param_7[2];
    (**(code **)(*(int *)((int)param_5 + 5) + 0x20))();
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = local_c;
    local_28.bottom = local_8;
    ExtTextOutA((HDC)*param_5,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
    param_1 = 0;
  }
  if (*(int *)((int)param_4 + 0x4e) == 0) {
    OWL::TGadgetWindow::vf15((int)param_4,param_5,CONCAT31((int3)((uint)param_1 >> 8),param_6),param_7);
  }
  else {
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    FUN_0042d568(*param_4,&local_48);
    ptVar2 = &local_48;
    pLVar3 = &local_38;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar3 = ptVar2->left;
      ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    }
    if (*(char *)((int)param_4 + 0x4d) != '\0') {
      local_14 = DAT_00469744;
      iVar1 = GetSystemMetrics(DAT_00469744);
      local_34 = local_34 + iVar1;
    }
    (**(code **)(*(int *)((int)param_5 + 5) + 0x14))();
    (**(code **)(*(int *)((int)param_5 + 5) + 0x20))();
    strlen(*(uint **)((int)param_4 + 0x4e));
    (**(code **)(*(int *)((int)param_5 + 5) + 0x48))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421384  OWL::TMessageBar::vf16   (46 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TMessageBar::vf16(int *param_1,int *param_2)

{
  int iVar1;
  
  OWL::TGadgetWindow::vf16(param_1,param_2);
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    iVar1 = GetSystemMetrics(DAT_00469744);
    param_2[1] = param_2[1] + iVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004213b4  OWL::TMessageBar::vf14   (34 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TMessageBar::vf14(int *param_1,undefined4 *param_2)

{
  OWL::TGadgetWindow::vf14(param_1,param_2);
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    param_2[1] = param_2[1] + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004213d8  OWL::TMessageBar::vf27   (70 bytes)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TMessageBar::vf27(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(uint **)((int)param_1 + 0x4e)) {
    operator_delete_array();
    if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0041fd2c(param_2);
    }
    *(undefined4 *)((int)param_1 + 0x4e) = uVar1;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}

} // namespace tea
