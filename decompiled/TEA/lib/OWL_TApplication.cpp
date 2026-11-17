// TEA.exe — runtime / library code "OWL_TApplication"
// 19 functions, 0x004a8edc..0x004aae10. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a8edc  OWL::TApplication::~TApplication   (636 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TApplication::_dtor
void __cdecl OWL::TApplication::_dtor(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  
  __InitExceptBlockLDTC(0x50b748);
  if (param_1 == (undefined4 *)0x0) goto LAB_004a9147;
  *(undefined ***)((int)param_1 + 0x1b) = &OWL::TApplication::vftable;
  param_1[1] = &PTR_LAB_0050b6b4;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0050b6c4;
  *(undefined ***)*param_1 = &PTR_LAB_0050b6e4;
  FUN_004aaef4((int)param_1);
  if (*(int *)((int)param_1 + 0x53) != 0) {
    (**(code **)(*(int *)((int)param_1 + 0x53) + 0x11))();
    if (*(undefined4 **)((int)param_1 + 0x53) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x53))();
    }
  }
  if (*(int *)((int)param_1 + 0x4e) != 0) {
    (**(code **)(*(int *)((int)param_1 + 0x4e) + 0x15))();
    if (*(undefined4 **)((int)param_1 + 0x4e) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x4e))();
    }
  }
  piVar1 = (int *)FUN_004a95d8((int)param_1,0);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 8) + 0x18))();
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 8))();
    }
    if (*(int *)((int)param_1 + 0x31) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x31) + 0xc))();
    }
  }
  if (*(int *)((int)param_1 + 0x27) != 0) {
    (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x27) + 8))();
  }
  FUN_00487e60(*(undefined4 **)((int)param_1 + 0x6b));
  if (*(int *)((int)param_1 + 0x3d) != 0) {
    if (*(int *)(*(int *)((int)param_1 + 0x3d) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_004a9115;
    }
    operator_delete();
    *(undefined4 *)((int)param_1 + 0x3d) = 0;
  }
LAB_004a9115:
  OWL::TModule::_dtor(param_1 + 1,0);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004a9147:
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a9444  OWL::TApplication::vf12   (146 bytes)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TApplication::vf12(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((*(char *)(param_1 + 0x4d) == '\0') || (*(int *)(param_1 + 0x4e) == 0)) {
    FUN_004ab428(param_1,'\x01');
    puVar2 = (undefined4 *)FUN_004a89e8();
    uVar1 = (*(code *)*puVar2)();
    FUN_004ab428(param_1,'\0');
  }
  else {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x4e) + 0x31))();
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a94d8  OWL::TApplication::vf15   (5 bytes)   [rtti:vtable virtual slot 15]
void __stdcall OWL::TApplication::vf15(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a94e0  OWL::TApplication::vf16   (82 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TApplication::vf16(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x11;
  uVar2 = OWL::TMsgThread::vf4();
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x44))(uVar2,*(int *)(param_1 + 0x1b),iVar3,param_1);
  if (*(int *)(param_1 + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0x2b) + 0x74);
    *puVar1 = *puVar1 | 0x10;
    (**(code **)(*(int *)(**(int **)(param_1 + 0x2b) + 8) + 0x10))();
    (**(code **)(*(int *)(**(int **)(param_1 + 0x2b) + 8) + 100))();
    return;
  }
  FUN_004ab17c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a9534  OWL::TApplication::vf17   (106 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TApplication::vf17(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x50b800);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_004bd90c(piVar1,0,0,*(uint **)(param_1 + 8),0,'\0',0);
  }
  FUN_004a95d8(param_1,piVar1);
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a95c0  OWL::TApplication::vf18   (23 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TApplication::vf18(int param_1,undefined4 param_2)

{
  OWL::TMsgThread::vf5(param_1 + 0x11,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a9708  OWL::TApplication::vf2   (172 bytes, 3 ranges)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TApplication::vf2(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  
  __InitExceptBlockLDTC(0x50b940);
  if (*(int *)(param_1 + 0x2b) == 0) {
    iVar1 = param_1;
    if (*(int *)(param_1 + 0x1f) == 0) {
      (**(code **)(*(int *)(param_1 + 0x1b) + 0x3c))();
    }
    (**(code **)(*(int *)(param_1 + 0x1b) + 0x40))(param_1,*(int *)(param_1 + 0x1b),iVar1,param_1);
  }
  *(undefined1 *)(param_1 + 0x1a) = 1;
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x10))();
  FUN_00498dd8();
  *(undefined1 *)(param_1 + 0x1a) = 0;
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x48))();
  *in_FS_OFFSET = local_5c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a9b90  OWL::TApplication::vf3   (91 bytes, 2 ranges)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __cdecl OWL::TApplication::vf3(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_7c;
  
  __InitExceptBlockLDTC(0x50ba88);
  if (*(int *)(param_1 + 0x1f) == 0) {
    (**(code **)(*(int *)(param_1 + 0x1b) + 0x3c))();
  }
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x40))();
  *in_FS_OFFSET = local_7c;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aa150  OWL::TApplication::vf4   (267 bytes, 2 ranges)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TApplication::vf4(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_7c;
  
  __InitExceptBlockLDTC(0x50bbf4);
  *(undefined4 *)(param_1 + 0x16) = 0;
  while (*(char *)(param_1 + 0x15) == '\0') {
    cVar2 = (**(code **)(*(int *)(param_1 + 0x1b) + 0x14))();
    if (cVar2 == '\0') {
      DVar3 = MsgWaitForMultipleObjects
                        (*(DWORD *)(param_1 + 0x45),*(HANDLE **)(param_1 + 0x49),0,0xffffffff,0xff);
      if (DVar3 < *(uint *)(param_1 + 0x45)) {
        (**(code **)(*(int *)(param_1 + 0x1b) + 0x24))();
      }
      else if ((0x7f < DVar3) && (DVar3 < *(int *)(param_1 + 0x45) + 0x80U)) {
        (**(code **)(*(int *)(param_1 + 0x1b) + 0x24))();
      }
    }
    FUN_00498d7c((int *)(param_1 + 0x11));
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x16);
  *in_FS_OFFSET = local_7c;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aa88c  OWL::TApplication::vf5   (36 bytes)   [rtti:vtable virtual slot 5]
undefined4 __cdecl OWL::TApplication::vf5(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2b) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2b) + 0xc) + 0x2c))();
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aa8b0  OWL::TApplication::vf6   (186 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TApplication::vf6(undefined4 *param_1,MSG *param_2)

{
  char cVar1;
  undefined4 uVar2;
  UINT local_24 [3];
  undefined4 local_18;
  UINT local_14;
  WPARAM local_10;
  undefined4 local_8;
  
  cVar1 = (**(code **)(*(int *)((int)param_1 + 0x1b) + 0x1c))();
  if (cVar1 == '\0') {
    TranslateMessage(param_2);
    if (param_2->hwnd == (HWND)0x0) {
      local_10 = param_2->wParam;
      local_14 = param_2->message;
      local_8 = 0;
      cVar1 = (**(code **)(*(int *)((int)param_1 + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_0048e7e0(*param_1,(int)&local_14);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      local_24[0] = param_2->message;
      local_24[1] = 0;
      local_18 = 0;
      cVar1 = (**(code **)(*(int *)((int)param_1 + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_0048e7e0(*param_1,(int)local_24);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    DispatchMessageA(param_2);
    FUN_004aaef4((int)param_1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aa96c  OWL::TApplication::vf7   (232 bytes)   [rtti:vtable virtual slot 7]
undefined4 __cdecl OWL::TApplication::vf7(int param_1,int *param_2)

{
  BOOL BVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  HWND hWnd;
  
  if ((((*(int *)(param_1 + 0x31) != 0) &&
       (BVar1 = IsWindow(*(HWND *)(**(int **)(param_1 + 0x31) + 0xc)), BVar1 != 0)) &&
      ((*param_2 == *(int *)(**(int **)(param_1 + 0x2b) + 0xc) ||
       (BVar1 = IsChild(*(HWND *)(**(int **)(param_1 + 0x2b) + 0xc),(HWND)*param_2), BVar1 != 0))))
     && ((0x1ff < (uint)param_2[1] && ((uint)param_2[1] < 0x20e)))) {
    FUN_004a76a8(**(int **)(param_1 + 0x31),0x407,0,(LPARAM)param_2);
  }
  hWnd = (HWND)*param_2;
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    if (DAT_0050bc84 == '\0') {
      DAT_0050bc80 = GetDesktopWindow();
      DAT_0050bc84 = DAT_0050bc84 + '\x01';
    }
    if (hWnd == DAT_0050bc80) break;
    LVar2 = FUN_004a614c(hWnd,param_1);
    if ((LVar2 != 0) && (uVar3 = (**(code **)(*(int *)(LVar2 + 8) + 0x28))(), (char)uVar3 != '\0'))
    {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    hWnd = GetParent(hWnd);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aaa54  OWL::TApplication::vf8   (228 bytes)   [rtti:vtable virtual slot 8]
void __cdecl OWL::TApplication::vf8(int param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x49) != 0) {
    bVar1 = false;
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x45); iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(param_1 + 0x49) + iVar2 * 4) == param_2) {
        bVar1 = true;
        unaff_EDI = iVar2;
      }
    }
  }
  if (param_3 == '\0') {
    if (bVar1) {
      if (*(int *)(param_1 + 0x45) == 1) {
        operator_delete_array();
        *(undefined4 *)(param_1 + 0x49) = 0;
        *(undefined4 *)(param_1 + 0x45) = 0;
      }
      else {
        iVar2 = operator_new_array();
        iVar3 = 0;
        if (0 < unaff_EDI) {
          do {
            *(undefined4 *)(iVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x49) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < unaff_EDI);
        }
        while (unaff_EDI = unaff_EDI + 1, unaff_EDI < *(int *)(param_1 + 0x45)) {
          *(undefined4 *)(iVar2 + -4 + unaff_EDI * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x49) + unaff_EDI * 4);
        }
        operator_delete_array();
        *(int *)(param_1 + 0x49) = iVar2;
        *(int *)(param_1 + 0x45) = *(int *)(param_1 + 0x45) + -1;
      }
    }
  }
  else if (!bVar1) {
    iVar2 = operator_new_array();
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x45); iVar3 = iVar3 + 1) {
      *(undefined4 *)(iVar2 + iVar3 * 4) = *(undefined4 *)(*(int *)(param_1 + 0x49) + iVar3 * 4);
    }
    operator_delete_array();
    *(int *)(param_1 + 0x49) = iVar2;
    *(int *)(*(int *)(param_1 + 0x49) + *(int *)(param_1 + 0x45) * 4) = param_2;
    *(int *)(param_1 + 0x45) = *(int *)(param_1 + 0x45) + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aab38  OWL::TApplication::vf14   (178 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TApplication::vf14(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x50bc98);
  if (*(int *)(param_1 + 0x31) == 0) {
    if (*(int *)(param_1 + 0x2b) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x2b);
    }
    else {
      uVar2 = **(undefined4 **)(param_1 + 0x2b);
    }
    if (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) == 0) {
      uVar2 = 0;
    }
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_0049f628(piVar1,0,uVar2,'\x01',0);
    }
    FUN_004aabec(param_1,piVar1);
  }
  else if (*(int *)(**(int **)(param_1 + 0x31) + 0xc) != 0) {
    FUN_004a76a8(**(int **)(param_1 + 0x31),0x401,(uint)param_2,0);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aacdc  OWL::TApplication::EvActivateApp   (45 bytes)   [owl:response-table message-handler]
//   WM_ACTIVATEAPP
void __cdecl OWL::TApplication::EvActivateApp(int param_1,char param_2)

{
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x2b) != 0)) {
    FUN_004a7aa0(**(int **)(param_1 + 0x2b),(HWND)0x0,0,0,0,0,0x13);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aad0c  OWL::TApplication::CmFileExit   (40 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24310) — &File > E&xit
void __cdecl OWL::TApplication::CmFileExit(int param_1)

{
  if (*(int **)(param_1 + 0x2b) != (int *)0x0) {
    FUN_004a76a8(**(int **)(param_1 + 0x2b),0x10,0,0);
    FUN_004aaef4(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aad34  OWL::TApplication::Find   (98 bytes)   [owl:response-table response-table-find]
//   also: OWL::TApplication::vf11 [rtti:vtable]
undefined4 __cdecl OWL::TApplication::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 0x27) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(*(int *)((int)param_1 + 0x27) + 8) + 0x6c))();
  }
  if ((char)uVar1 == '\0') {
    param_2[2] = (int)param_1;
    uVar1 = FUN_0048e808(*param_1,(int *)&OWL::TApplication::__entries,param_2,param_3);
    if (((char)uVar1 == '\0') && (uVar1 = OWL::TEventHandler::vf0(), (char)uVar1 == '\0')) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aad98  OWL::TApplication::vf1   (118 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TApplication::vf1(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_14 = 0x7ff9;
  local_10 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x2b) == 0) {
LAB_004aadca:
    if (*(int *)(param_1 + 0x27) != 0) {
      cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x27) + 8) + 0x6c))();
      if (cVar1 != '\0') {
        iVar2 = FUN_0048e7e0(**(undefined4 **)(param_1 + 0x27),(int)&local_14);
        if (iVar2 == 0) goto LAB_004aae00;
      }
    }
    uVar3 = 1;
  }
  else {
    cVar1 = (**(code **)(*(int *)(**(int **)(param_1 + 0x2b) + 8) + 0x3c))();
    if (cVar1 != '\0') goto LAB_004aadca;
LAB_004aae00:
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aae10  OWL::TApplication::vf10   (96 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TApplication::vf10(int param_1)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_14 = 0x7ffa;
  local_10 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x27) != 0) {
    cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x27) + 8) + 0x6c))();
    if (cVar1 != '\0') {
      FUN_0048e7e0(**(undefined4 **)(param_1 + 0x27),(int)&local_14);
      DrawMenuBar(*(HWND *)(**(int **)(param_1 + 0x2b) + 0xc));
    }
  }
  return;
}

} // namespace tea
