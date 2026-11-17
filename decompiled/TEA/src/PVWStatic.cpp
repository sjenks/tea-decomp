// TEA.exe — application module "PVWStatic"
// 6 functions, 0x0041b638..0x0041bad8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041b638  PVWStatic::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWStatic::vf8 [rtti:vtable]
undefined4 __cdecl PVWStatic::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWStatic::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TStatic::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b680  FUN_0041b680   (313 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0041b680(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eebcc);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&OWL::TEventHandler::vftable;
    param_1[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004c7a28(param_1,1,uVar1,param_4,param_5,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PVWStatic::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f04b0;
  *(undefined ***)param_1[2] = &PTR_LAB_004f04bc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f04c8;
  param_1[6] = (int)param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b7d4  PVWStatic::~PVWStatic   (291 bytes)   [rtti:dtor destructor]
//   written in code as PVWStatic::_dtor
void __cdecl PVWStatic::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eebf0);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PVWStatic::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004f04b0;
    *(undefined ***)param_1[2] = &PTR_LAB_004f04bc;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f04c8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xb,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 9,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b8f8  FUN_0041b8f8   (28 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_0041b8f8(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004a78f0(*param_1);
  return (uVar1 & 0x100) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b914  FUN_0041b914   (450 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0041b914(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *lpString;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4eec44);
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_2 + 0xc));
  lpString = (uint *)operator_new_array();
  GetWindowTextA(*(HWND *)(*param_2 + 0xc),(LPSTR)lpString,iVar2 + 1);
  std::string::string_from_cstr((int)local_14,lpString);
  operator_delete_array();
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar3 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar3 = local_c + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0041babb;
    }
    operator_delete();
  }
LAB_0041babb:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bad8  PVWStatic::BNClicked   (36 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWStatic::BNClicked(int *param_1)

{
  GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0x50))();
  return;
}

} // namespace tea
