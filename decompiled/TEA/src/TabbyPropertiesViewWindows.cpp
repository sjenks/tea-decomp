// TEA.exe — application module "TabbyPropertiesViewWindows"
// 15 functions, 0x00467d40..0x00468548. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00467d40  TabbyPropertiesViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: TabbyPropertiesViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl TabbyPropertiesViewWindows::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&TabbyPropertiesViewWindows::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = PropertiesViewWindows::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467d88  FUN_00467d88   (410 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00467d88(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6, undefined4 param_7,int param_8,uint *param_9,int param_10)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fc8c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x4c);
    param_1[0x4c] = (int)(param_1 + 0x49);
    param_1[0x4d] = (int)(param_1 + 0x4a);
    param_1[1] = (int)(param_1 + 0x49);
    param_1[2] = (int)(param_1 + 0x4a);
    param_1[0x48] = 0;
    param_1[0x4b] = 0;
    param_1[0x49] = (int)&OWL::TEventHandler::vftable;
    param_1[0x4a] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x4c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc0;
  FUN_00413cf4(param_1,1,param_6,param_7,param_8,param_9,param_10,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc0;
  param_1[3] = (int)&TabbyPropertiesViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fcae4;
  *(undefined ***)param_1[2] = &PTR_LAB_004fcaf0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fcafc;
  FUN_0041eac8(param_1 + 0x18,0,param_1,0x1f5e);
  param_1[0x44] = param_3;
  param_1[0x45] = param_4;
  param_1[0x46] = param_5;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467f50  TabbyPropertiesViewWindows::~TabbyPropertiesViewWindows   (288 bytes)   [rtti:dtor destructor]
//   written in code as TabbyPropertiesViewWindows::_dtor
void __cdecl TabbyPropertiesViewWindows::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fc8f8);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&TabbyPropertiesViewWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004fcae4;
    *(undefined ***)param_1[2] = &PTR_LAB_004fcaf0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fcafc;
    PVWTabs::_dtor(param_1 + 0x18,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc0;
    PropertiesViewWindows::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc0;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x4c,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x4a,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468070  TabbyPropertiesViewWindows::vf15   (54 bytes)   [rtti:vtable virtual slot 15]
void __cdecl TabbyPropertiesViewWindows::vf15(int *param_1)

{
  PropertiesViewWindows::vf15(param_1);
  (**(code **)(param_1[3] + 0xc0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004680a8  TabbyPropertiesViewWindows::vf31   (176 bytes)   [rtti:vtable virtual slot 31]
undefined4 __cdecl TabbyPropertiesViewWindows::vf31(int param_1,int param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  WPARAM WVar5;
  
  BVar1 = IsWindowEnabled(*(HWND *)(*(int *)(param_1 + 0x60) + 0xc));
  if (BVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_004a76a8(*(int *)(param_1 + 0x60),0x1304,0,0);
    iVar4 = FUN_004a76a8(*(int *)(param_1 + 0x60),0x130b,0,0);
    WVar5 = iVar4 + param_2;
    if ((int)WVar5 < 0) {
      WVar5 = iVar3 - 1;
    }
    else if (iVar3 <= (int)WVar5) {
      WVar5 = 0;
    }
    FUN_004a76a8(*(int *)(param_1 + 0x60),0x130c,WVar5,0);
    GetDlgCtrlID(*(HWND *)(*(int *)(param_1 + 0x60) + 0xc));
    uVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0xc0))();
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468158  TabbyPropertiesViewWindows::vf38   (68 bytes)   [rtti:vtable virtual slot 38]
void __cdecl TabbyPropertiesViewWindows::vf38(int *param_1,int param_2,undefined4 *param_3)

{
  if ((param_3[2] == -0x208) && ((uint)param_3[1] < (uint)param_1[0x45])) {
    param_3[3] = (uint)*(ushort *)(param_1[0x44] + 4 + param_3[1] * 0x10);
  }
  PropertiesViewWindows::vf38(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046819c  TabbyPropertiesViewWindows::vf7   (96 bytes)   [rtti:vtable virtual slot 7]
void __cdecl TabbyPropertiesViewWindows::vf7(int *param_1,LPMSG param_2)

{
  UINT UVar1;
  HWND hWnd;
  
  hWnd = (HWND)FUN_004a76a8(param_1[0x18],0x132d,0,0);
  if ((hWnd != (HWND)0x0) &&
     (((UVar1 = param_2->message, UVar1 - 0x200 < 3 || (UVar1 - 0x204 < 2)) || (UVar1 - 0x207 < 2)))
     ) {
    SendMessageA(hWnd,0x407,0,(LPARAM)param_2);
  }
  PropertiesViewWindows::vf7(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004681fc  TabbyPropertiesViewWindows::vf43   (62 bytes)   [rtti:vtable virtual slot 43]
void __cdecl TabbyPropertiesViewWindows::vf43(int param_1,undefined4 param_2,LPARAM param_3)

{
  HWND hWnd;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    hWnd = (HWND)FUN_004a76a8(*(int *)(param_1 + 0x60),0x132d,0,0);
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0x407,0,param_3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046823c  TabbyPropertiesViewWindows::vf11   (388 bytes)   [rtti:vtable virtual slot 11]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TabbyPropertiesViewWindows::vf11(int *param_1)

{
  HWND pHVar1;
  WPARAM WVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  uint local_78 [11];
  undefined1 *local_4c;
  undefined4 local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fc92c);
  PropertiesViewWindows::vf11(param_1);
  pHVar1 = (HWND)FUN_004a76a8(param_1[0x18],0x132d,0,0);
  FUN_00417760(param_1,pHVar1);
  uVar4 = 0;
  do {
    if ((uint)param_1[0x45] <= uVar4) {
      if (param_1[0x13] == 0) {
        (**(code **)(param_1[3] + 0xc0))();
      }
      *in_FS_OFFSET = local_38;
      return;
    }
    local_28 = 0x14;
    FUN_00464a94((int)local_14,param_1[0xe],*(uint *)(param_1[0x44] + uVar4 * 0x10));
    local_1c = local_1c + 1;
    local_28 = 8;
    local_3c = FUN_0049e814(local_78,local_c,(char *)0x0,0);
    WVar2 = FUN_004a76a8(param_1[0x18],0x1304,0,0);
    FUN_004a76a8(param_1[0x18],0x1307,WVar2,(LPARAM)local_3c);
    local_1c = local_1c + -1;
    if (local_c != (uint *)0x0) {
      if (local_c[-3] != 0xffffffff) {
        puVar5 = local_c + -3;
        if (puVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (puVar5 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *puVar5 = *puVar5 - 1;
          iVar3 = *puVar5 + 1;
        }
        if (iVar3 != 0) goto LAB_0046836a;
      }
      local_40 = local_c + -3;
      local_44 = local_c + -3;
      operator_delete();
      local_48 = 0;
      local_4c = local_14;
      local_c = (uint *)0x0;
    }
LAB_0046836a:
    local_28 = 0;
    uVar4 = uVar4 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004683c0  TabbyPropertiesViewWindows::vf45   (64 bytes)   [rtti:vtable virtual slot 45]
void __cdecl TabbyPropertiesViewWindows::vf45(int param_1)

{
  FUN_004a76a8(*(int *)(param_1 + 0x60),0x130b,0,0);
  FUN_00464980();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468400  TabbyPropertiesViewWindows::vf18   (39 bytes)   [rtti:vtable virtual slot 18]
void __cdecl TabbyPropertiesViewWindows::vf18(int *param_1,byte param_2)

{
  FUN_004684d4(param_1,param_2);
  (**(code **)(*(int *)(param_1[0x18] + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468428  TabbyPropertiesViewWindows::vf48   (78 bytes)   [rtti:vtable virtual slot 48]
void __cdecl TabbyPropertiesViewWindows::vf48(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_004a76a8(param_1[0x18],0x130b,0,0);
  for (uVar2 = 0; uVar2 < (uint)param_1[0x46]; uVar2 = uVar2 + 1) {
    if (uVar1 != uVar2) {
      FUN_00468478(param_1,uVar2,0);
    }
  }
  FUN_00468478(param_1,uVar1,5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468478  FUN_00468478   (92 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00468478(int *param_1,int param_2,int param_3)

{
  HWND hWnd;
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1[0x44] + 8 + param_2 * 0x10); iVar1 = iVar1 + 1) {
    hWnd = GetDlgItem(*(HWND *)(*param_1 + 0xc),
                      *(int *)(*(int *)(param_1[0x44] + 0xc + param_2 * 0x10) + iVar1 * 4));
    ShowWindow(hWnd,param_3);
    EnableWindow(hWnd,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004684d4  FUN_004684d4   (113 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004684d4(int *param_1,byte param_2)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  
  iVar1 = FUN_004a76a8(param_1[0x18],0x130b,0,0);
  for (iVar2 = 0; iVar2 < *(int *)(param_1[0x44] + 8 + iVar1 * 0x10); iVar2 = iVar2 + 1) {
    hWnd = GetDlgItem(*(HWND *)(*param_1 + 0xc),
                      *(int *)(*(int *)(param_1[0x44] + 0xc + iVar1 * 0x10) + iVar2 * 4));
    EnableWindow(hWnd,(uint)param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468548  TabbyPropertiesViewWindows::vf46   (1061 bytes)   [rtti:vtable virtual slot 46]
/* WARNING: Removing unreachable block (ram,0x004685da) */
/* WARNING: Removing unreachable block (ram,0x00468636) */
/* WARNING: Removing unreachable block (ram,0x0046870a) */
/* WARNING: Removing unreachable block (ram,0x004686bc) */
/* WARNING: Removing unreachable block (ram,0x004686fd) */
/* WARNING: Removing unreachable block (ram,0x004687a1) */
/* WARNING: Removing unreachable block (ram,0x004687c5) */
/* WARNING: Removing unreachable block (ram,0x004687d0) */
/* WARNING: Removing unreachable block (ram,0x00468810) */
/* WARNING: Removing unreachable block (ram,0x004687e9) */
/* WARNING: Removing unreachable block (ram,0x00468809) */
/* WARNING: Removing unreachable block (ram,0x004687f6) */
/* WARNING: Removing unreachable block (ram,0x00468815) */
/* WARNING: Removing unreachable block (ram,0x00468819) */
/* WARNING: Removing unreachable block (ram,0x00468867) */
void __cdecl TabbyPropertiesViewWindows::vf46(int *param_1,int *param_2)

{
  HWND hWnd;
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  char *local_110;
  char *local_104;
  undefined1 local_100 [144];
  char *local_70;
  int local_6c;
  undefined1 local_65;
  int local_64;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined1 local_14 [8];
  char *local_c;
  
  __InitExceptBlockLDTC(0x4fc9a4);
  hWnd = (HWND)FUN_004a76a8(param_1[0x18],0x132d,0,0);
  if (hWnd != (HWND)0x0) {
    local_134 = 0x2c;
    local_130 = 1;
    local_12c = *(undefined4 *)(*param_1 + 0xc);
    local_50 = 0x14;
    uVar1 = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
    FUN_00464a94((int)local_14,param_1[0xe],uVar1);
    local_44 = local_44 + 1;
    local_50 = 8;
    local_65 = 10;
    local_6c = *(int *)(local_c + -4);
    local_70 = local_c;
    pcVar2 = thunk_memchr(local_c,'\n',local_6c);
    local_64 = (*(int *)&DAT_005140ac);
    if (pcVar2 != (char *)0x0) {
      local_64 = (int)pcVar2 - (int)local_c;
    }
    if (local_64 != -1) {
      local_100[0] = 0;
      uVar1 = local_64 + 1U;
      if (*(uint *)(local_c + -4) <= local_64 + 1U) {
        uVar1 = *(uint *)(local_c + -4);
      }
      FUN_004cfad4((int)local_14,0,uVar1,(uint)local_100,0,0,0);
    }
    local_110 = local_c;
    local_128 = *(undefined4 *)(*param_2 + 0xc);
    SendMessageA(hWnd,0x404,0,(LPARAM)&local_134);
    local_50 = 8;
    local_44 = local_44 + -1;
    if (local_c != (char *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar3 = *piVar4 + 1;
        }
        if (iVar3 != 0) goto LAB_0046895c;
      }
      local_104 = local_c + -0xc;
      operator_delete();
    }
  }
LAB_0046895c:
  *in_FS_OFFSET = local_60;
  return;
}

} // namespace tea
