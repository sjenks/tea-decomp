// TSMerge.exe — runtime / library code "OWL_TLayoutWindow"
// 8 functions, 0x0041dc70..0x0041f268. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041dc70  OWL::TLayoutWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: OWL::TLayoutWindow::vf3 [rtti:vtable]
undefined4 __cdecl OWL::TLayoutWindow::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_004179f4(param_1[1],(int *)&OWL::TLayoutWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dd10  OWL::TLayoutWindow::~TLayoutWindow   (302 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TLayoutWindow::_dtor
void __cdecl OWL::TLayoutWindow::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x467a94);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TLayoutWindow::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_00467c60;
    *(undefined ***)param_1[2] = &PTR_LAB_00467c6c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00467c78;
    operator_delete_array();
    iVar1 = param_1[6];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x55);
      operator_delete();
    }
    param_1[6] = 0;
    FUN_0041e38c((int)param_1);
    iVar1 = param_1[7];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      operator_delete();
    }
    param_1[7] = 0;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x41),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x39),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041de40  OWL::TLayoutWindow::vf1   (390 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TLayoutWindow::vf1(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  __InitExceptBlockLDTC(0x467ac8);
  if (param_1[6] != 0) {
    FUN_0041ebd4(param_1);
    *(int *)(param_1[9] + 0x12) = param_1[4] + -1;
    *(int *)(param_1[9] + 0x1b) = param_1[5] + -1;
    uVar3 = FUN_0041d8bc(*param_1);
    if ((char)uVar3 == '\0') {
      *(undefined4 *)param_1[9] = 0;
      *(undefined4 *)(param_1[9] + 9) = 0;
    }
    else {
      iVar4 = GetSystemMetrics(DAT_0046973c);
      iVar5 = GetSystemMetrics(DAT_00469744);
      *(int *)param_1[9] = -iVar4;
      *(int *)(param_1[9] + 9) = -iVar5;
      *(int *)(param_1[9] + 0x12) = *(int *)(param_1[9] + 0x12) + iVar4;
      *(int *)(param_1[9] + 0x1b) = *(int *)(param_1[9] + 0x1b) + iVar5;
    }
    if ((char)param_1[10] != '\0') {
      *(undefined1 *)(param_1 + 10) = 0;
      for (pcVar2 = (char *)param_1[6]; pcVar2 != (char *)0x0; pcVar2 = *(char **)(pcVar2 + 0x55)) {
        FUN_0041e9c8(param_1,pcVar2);
      }
      FUN_0041e3c4(param_1);
    }
    FUN_0041e368((int)param_1);
    iVar5 = 0;
    for (iVar4 = param_1[6]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x55)) {
      if (*(int *)(*(int *)(iVar4 + 1) + 0xc) != 0) {
        iVar5 = iVar5 + 1;
      }
    }
    FUN_0041db94(&local_8,iVar5);
    for (iVar4 = param_1[6]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x55)) {
      iVar5 = *(int *)(iVar4 + 1);
      piVar1 = (int *)(iVar4 + 0x31);
      if (*(int *)(iVar5 + 0xc) == 0) {
        *(int *)(iVar5 + 0x20) = *piVar1;
        *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar4 + 0x3a);
        *(int *)(iVar5 + 0x28) = (*(int *)(iVar4 + 0x43) - *piVar1) + 1;
        *(int *)(iVar5 + 0x2c) = (*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x3a)) + 1;
      }
      else {
        FUN_0041dbf4(&local_8,*(HWND *)(iVar5 + 0xc),(HWND)0x0,*piVar1,*(int *)(iVar4 + 0x3a),
                     (*(int *)(iVar4 + 0x43) - *piVar1) + 1,
                     (*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x3a)) + 1,0x14);
      }
    }
    OWL::TDeferWinPos::_dtor(&local_8,2);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e2cc  OWL::TLayoutWindow::EvSize   (86 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __cdecl OWL::TLayoutWindow::EvSize(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  
  OWL::TWindow::EvSize(*param_1,param_2);
  if (param_2 != 1) {
    if ((param_1[4] == *param_3) && (param_1[5] == param_3[1])) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_1[4] = *param_3;
      param_1[5] = param_3[1];
      (**(code **)(param_1[3] + 4))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e324  OWL::TLayoutWindow::vf2   (36 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TLayoutWindow::vf2(int *param_1,int param_2)

{
  OWL::TWindow::vf32(*param_1,param_2);
  FUN_0041e11c((int)param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eddc  OWL::TLayoutWindow::Streamer::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TLayoutWindow::Streamer::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ede8  OWL::TLayoutWindow::Streamer::vf2   (5 bytes)   [rtti:vtable virtual slot 2]
void __stdcall OWL::TLayoutWindow::Streamer::vf2(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f268  OWL::TLayoutWindow::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TLayoutWindow::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
