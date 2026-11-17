// TEA.exe — application module "PVWEnumeration"
// 6 functions, 0x0041be30..0x0041c1e4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041be30  PVWEnumeration::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWEnumeration::vf8 [rtti:vtable]
undefined4 __cdecl PVWEnumeration::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWEnumeration::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::vf8(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041be78  FUN_0041be78   (328 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0041be78(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 )

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eed4c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xd);
    param_1[0xd] = (int)(param_1 + 10);
    param_1[0xe] = (int)(param_1 + 0xb);
    param_1[1] = (int)(param_1 + 10);
    param_1[2] = (int)(param_1 + 0xb);
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[10] = (int)&OWL::TEventHandler::vftable;
    param_1[0xb] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xd,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004acc48(param_1,1,uVar1,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc;
  param_1[3] = (int)&PVWEnumeration::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f02e8;
  *(undefined ***)param_1[2] = &PTR_LAB_004f02f4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0300;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[8] = (int)param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bfe0  PVWEnumeration::~PVWEnumeration   (251 bytes)   [rtti:dtor destructor]
//   written in code as PVWEnumeration::_dtor
void __cdecl PVWEnumeration::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eed70);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PVWEnumeration::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004f02e8;
    *(undefined ***)param_1[2] = &PTR_LAB_004f02f4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0300;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc;
    OWL::TComboBox::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xd,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0xb,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c0dc  PVWEnumeration::vf33   (237 bytes)   [rtti:vtable virtual slot 33]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl PVWEnumeration::vf33(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  int local_c;
  
  __InitExceptBlockLDTC(0x4eeda4);
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar2) {
      *in_FS_OFFSET = local_38;
      return;
    }
    (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0xa8))();
    (**(code **)(*(int *)(param_1 + 0xc) + 100))();
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar1 = *piVar3 + 1;
        }
        if (iVar1 != 0) goto LAB_0041c1a9;
      }
      operator_delete();
      local_c = 0;
    }
LAB_0041c1a9:
    iVar2 = iVar2 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c1cc  FUN_0041c1cc   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041c1cc(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c1e4  PVWEnumeration::NotifyAtChild_9   (44 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 9)
void __cdecl PVWEnumeration::NotifyAtChild_9(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
  piVar4 = param_1;
  uVar3 = (**(code **)(param_1[3] + 0x6c))();
  iVar1 = param_1[8];
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1,*(int *)(iVar1 + 0xc),piVar4,iVar1,uVar3,iVar2);
  return;
}

} // namespace tea
