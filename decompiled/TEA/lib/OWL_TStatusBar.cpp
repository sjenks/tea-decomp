// TEA.exe — runtime / library code "OWL_TStatusBar"
// 6 functions, 0x0049d3fc..0x0049dc20. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049d3fc  OWL::TStatusBar::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TStatusBar::vf26 [rtti:vtable]
undefined4 __cdecl OWL::TStatusBar::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[4],(int *)&OWL::TStatusBar::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TGadgetWindow::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049da5c  OWL::TStatusBar::vf20   (147 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TStatusBar::vf20(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = GetSystemMetrics(DAT_00509de8);
  if (*(int *)(param_1 + 0x52) == 1) {
    *param_4 = *param_4 - iVar1;
  }
  if (param_3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *param_3;
  }
  puVar2 = FUN_004dd744((int)param_3,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  if ((puVar2 == (undefined4 *)0x0) &&
     (uVar3 = FUN_0049da2c(param_1,(int)param_3), (char)uVar3 != '\0')) {
    iVar5 = *(int *)(param_1 + 0x56);
    if (iVar5 == 0) {
      *param_4 = *param_4 + *(int *)(param_1 + 0x5a);
    }
    else if (iVar5 == 1) {
      uVar4 = FUN_004917ac(param_1,*(int *)(param_1 + 0x5a));
      *param_4 = *param_4 + uVar4;
    }
    else if (iVar5 == 2) {
      *param_4 = *param_4 + *(int *)(param_1 + 0x5a) * iVar1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049daf0  OWL::TStatusBar::vf5   (72 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TStatusBar::vf5(int *param_1,int param_2,int param_3,int param_4)

{
  FUN_0048ff7c(param_2,*(undefined4 *)((int)param_1 + 0x52));
  if (param_4 == 0) {
    param_4 = FUN_00490df0(param_1 + 1,(param_1[3] - *(int *)((int)param_1 + 0x5e)) + -1);
  }
  OWL::TGadgetWindow::vf5(param_1,param_2,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049db38  OWL::TStatusBar::vf27   (39 bytes)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TStatusBar::vf27(int *param_1,uint *param_2)

{
  if (*(char *)((int)param_1 + 0x6a) != '\0') {
    OWL::TMessageBar::vf27(param_1,param_2);
    return;
  }
  FUN_004987c4((int)param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049db60  OWL::TStatusBar::EvNCHitTest   (190 bytes)   [owl:response-table message-handler]
//   WM_NCHITTEST
undefined4 __cdecl OWL::TStatusBar::EvNCHitTest(int *param_1,LPPOINT param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int local_14 [4];
  
  uVar2 = FUN_004a5774(*param_1);
  piVar3 = (int *)FUN_00490dd0((int)(param_1 + 1),0x7537);
  if (piVar3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar3;
  }
  puVar4 = FUN_004dd744((int)piVar3,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  if ((puVar4 != (undefined4 *)0x0) && ((*(byte *)((int)puVar4 + 0x42) & 1) != 0)) {
    ScreenToClient(*(HWND *)(*param_1 + 0xc),param_2);
    piVar3 = (int *)((int)puVar4 + 10);
    piVar6 = local_14;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar6 = piVar6 + 1;
    }
    if ((((param_2->x < local_14[0]) || (local_14[2] + 1 <= param_2->x)) ||
        (param_2->y < local_14[1])) || (local_14[3] + 1 <= param_2->y)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = 0x11;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049dc20  OWL::TStatusBar::EvMsg_7ef5   (259 bytes)   [owl:response-table message-handler]
//   message 0x7ef5
void __cdecl OWL::TStatusBar::EvMsg_7ef5(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x5091e4);
  piVar2 = (int *)FUN_00490dd0((int)(param_1 + 1),0x7537);
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  puVar3 = FUN_004dd744((int)piVar2,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  bVar1 = false;
  if (param_2 == 2) {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(param_1[6] + 0x1c))();
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)();
      }
      *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + -1;
      (**(code **)(param_1[6] + 0x34))();
      bVar1 = true;
    }
  }
  else if (((param_2 == 0) && (puVar3 == (undefined4 *)0x0)) &&
          ((*(byte *)((int)param_1 + 0x62) & 0x40) != 0)) {
    piVar2 = param_1;
    uVar4 = FUN_0049d994(param_1);
    (**(code **)(param_1[6] + 0x34))(uVar4,param_1[6],piVar2,param_1);
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = *(int *)(*param_1 + 0x14);
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar5 + 8);
    }
    puVar3 = FUN_004dd744(iVar5,iVar6,(int *)&DAT_0040299c,(int *)&DAT_00428c70,0);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(puVar3[3] + 4))();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

} // namespace tea
