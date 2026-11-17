// TSBuild.exe — runtime / library code "code_0x0044c000"
// 46 functions, 0x0044c00c..0x0044ff60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044c00c  FUN_0044c00c   (154 bytes)   [unnamed]
void __cdecl FUN_0044c00c(int *param_1,int param_2)

{
  int iVar1;
  
  memset(param_1 + 7,0,0x28);
  param_1[7] = 0x28;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar1;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  *(uint *)param_1[0x11] = *(uint *)param_1[0x11] & 0xffffff87;
  param_1[10] = *(uint *)param_1[0x11] | 0x100;
  if (param_2 == 0) {
    param_1[10] = param_1[10] & 0xfffffdff;
  }
  else {
    param_1[0x10] = param_2;
    param_1[10] = param_1[10] | 0x200;
  }
  param_1[0xb] = *(int *)(param_1[0x11] + 0xc);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_1[0x11] + 4);
  param_1[0xc] = *(int *)(param_1[0x11] + 0x10);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)(param_1[0x11] + 4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c0a8  FUN_0044c0a8   (318 bytes)   [unnamed]
int * __cdecl FUN_0044c0a8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4824ec);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x16);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[0x17] = (int)(param_1 + 0x14);
    param_1[1] = (int)(param_1 + 0x13);
    param_1[2] = (int)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = (int)&OWL::TEventHandler::vftable;
    param_1[0x14] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_00420634(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&OWL::TFindReplaceDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00482778;
  *(undefined ***)param_1[2] = &PTR_LAB_00482784;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00482790;
  param_1[0x11] = param_4;
  FUN_0044c00c(param_1,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c224  FUN_0044c224   (33 bytes)   [unnamed]
void __cdecl FUN_0044c224(int param_1,int param_2)

{
  if (param_2 != 0) {
    **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c248  FUN_0044c248   (287 bytes)   [unnamed]
int * __cdecl FUN_0044c248(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482510);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x16);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[0x17] = (int)(param_1 + 0x14);
    param_1[1] = (int)(param_1 + 0x13);
    param_1[2] = (int)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = (int)&OWL::TEventHandler::vftable;
    param_1[0x14] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_0044c0a8(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TFindDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00482688;
  *(undefined ***)param_1[2] = &PTR_LAB_00482694;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004826a0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c38c  FUN_0044c38c   (287 bytes)   [unnamed]
int * __cdecl FUN_0044c38c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482534);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x16);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[0x17] = (int)(param_1 + 0x14);
    param_1[1] = (int)(param_1 + 0x13);
    param_1[2] = (int)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = (int)&OWL::TEventHandler::vftable;
    param_1[0x14] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_0044c0a8(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TReplaceDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00482598;
  *(undefined ***)param_1[2] = &PTR_LAB_004825a4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004825b0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c80c  FUN_0044c80c   (127 bytes)   [unnamed]
void __cdecl FUN_0044c80c(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_0042d9a0(param_2,param_1,4);
  uVar1 = FUN_0042da9c(param_2);
  *(uint *)(param_1 + 4) = uVar1;
  operator_delete_array();
  operator_delete_array();
  uVar2 = operator_new_array();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = operator_new_array();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_0042d9a0(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4));
  FUN_0042d9a0(param_2,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c88c  FUN_0044c88c   (86 bytes)   [unnamed]
void __cdecl FUN_0044c88c(undefined4 *param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = *param_1;
  FUN_0042de94(param_2,&local_8,4);
  FUN_0042df1c(param_2);
  FUN_0042de94(param_2,param_1[3],param_1[1]);
  FUN_0042de94(param_2,param_1[4],param_1[1]);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c8e4  FUN_0044c8e4   (68 bytes)   [unnamed]
uint __cdecl FUN_0044c8e4(HMENU param_1,int param_2)

{
  UINT UVar1;
  UINT uId;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = 1;
  local_8 = 0;
  uId = 0;
  if (0 < param_2) {
    do {
      UVar1 = GetMenuState(param_1,uId,0x400);
      if ((UVar1 != 0xffffffff) && ((UVar1 & 3) == 0)) {
        local_8 = local_8 | uVar2;
      }
      uVar2 = uVar2 * 2;
      uId = uId + 1;
    } while ((int)uId < param_2);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c928  FUN_0044c928   (163 bytes)   [unnamed]
HICON __stdcall FUN_0044c928(void)

{
  HICON pHVar1;
  WNDCLASSA local_2c;
  
  if (DAT_00482818 == (HICON)0x0) {
    memset(&local_2c.style,0,0x28);
    local_2c.hInstance = *(HINSTANCE *)(DAT_00484890 + 8);
    local_2c.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_2c.lpszClassName = "IconSnarfer";
    local_2c.lpfnWndProc = DefWindowProcA;
    RegisterClassA(&local_2c);
    GetClassInfoA(*(HINSTANCE *)(DAT_00484890 + 8),"IconSnarfer",&local_2c);
    DAT_00482818 = local_2c.hIcon;
    UnregisterClassA("IconSnarfer",*(HINSTANCE *)(DAT_00484890 + 8));
  }
  pHVar1 = DAT_00482818;
  if (DAT_00482818 == (HICON)0x0) {
    pHVar1 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c9cb  FUN_0044c9cb   (105 bytes)   [unnamed]
int __cdecl FUN_0044c9cb(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x7a) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
  }
  iVar4 = iVar5;
  if (iVar5 != 0) {
    do {
      if ((*(int *)(iVar4 + 0xc) != 0) &&
         (uVar2 = GetWindowLongA(*(HWND *)(iVar4 + 0xc),-0x10), (uVar2 & 0x58000000) == 0x50000000))
      {
        if ((uVar2 & 0x10000) != 0) {
          return iVar4;
        }
        iVar3 = FUN_0044c9cb(iVar4);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      piVar1 = (int *)(iVar4 + 0x7e);
      iVar4 = *piVar1;
    } while (iVar5 != *piVar1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ca34  FUN_0044ca34   (52 bytes)   [unnamed]
bool __cdecl FUN_0044ca34(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
    bVar2 = (uVar1 & 0x58000000) == 0x50000000;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cb34  FUN_0044cb34   (316 bytes)   [unnamed]
int * __cdecl FUN_0044cb34(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,char param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482938);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5a;
    *(int *)((int)param_1 + 0x5a) = (int)param_1 + 0x4e;
    *(int *)((int)param_1 + 0x5e) = (int)param_1 + 0x52;
    param_1[1] = (int)param_1 + 0x4e;
    param_1[2] = (int)param_1 + 0x52;
    *(undefined4 *)((int)param_1 + 0x4a) = 0;
    *(undefined4 *)((int)param_1 + 0x56) = 0;
    *(undefined ***)((int)param_1 + 0x4e) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x52) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18((int *)((int)param_1 + 0x5a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TFrameWindow::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00482af8;
  *(undefined ***)param_1[2] = &PTR_LAB_00482b04;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00482b10;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  FUN_00435df4(*param_1,param_3,param_4,param_7);
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  FUN_0044cc70(param_1,param_5,param_6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cc70  FUN_0044cc70   (78 bytes)   [unnamed]
void __cdecl FUN_0044cc70(int *param_1,int param_2,char param_3)

{
  if (*(int *)((int)param_1 + 0x2e) == 0) {
    *(undefined4 *)(*param_1 + 0x18) = 0x10cf0000;
    *(undefined4 *)(*param_1 + 0x28) = 0x80000000;
    *(undefined4 *)(*param_1 + 0x20) = 0x80000000;
    if (param_2 != 0) {
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x2000000;
    }
    if (param_3 != '\0') {
      *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 8;
    }
    FUN_0044ccc0(param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ccc0  FUN_0044ccc0   (186 bytes)   [unnamed]
void __cdecl FUN_0044ccc0(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = param_2;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  FUN_0044d2f0(param_1,(*(undefined4 *)&DAT_00484890),32000);
  FUN_0044d37c(param_1,(*(undefined4 *)&DAT_00484890),(HANDLE)0x7d01);
  *(undefined4 *)((int)param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x3e) = 0xffffffff;
  if (*(int *)((int)param_1 + 0x15) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x34))();
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 2;
    *(undefined4 *)(*param_1 + 0x5c) = (*(undefined4 *)&DAT_0048c658);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cfcc  Child4509768_Notify4453474_44cfcc   (122 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 4509768, code 4453474)
//   also: OWL::TFrameWindow::vf11 [rtti:vtable]
void __cdecl Child4509768_Notify4453474_44cfcc(int *param_1,int param_2)

{
  HWND pHVar1;
  uint uVar2;
  BOOL BVar3;
  HMENU hMenu;
  
  if (param_2 == 0) {
    pHVar1 = GetFocus();
    if (pHVar1 != (HWND)0x0) {
      uVar2 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
      if ((uVar2 & 0x40000000) == 0) {
        BVar3 = IsWindow(*(HWND *)(*param_1 + 0xc));
        if (BVar3 != 0) {
          hMenu = GetMenu(*(HWND *)(*param_1 + 0xc));
          BVar3 = IsMenu(hMenu);
          if (BVar3 != 0) {
            FUN_00436d48(*param_1,0x117,hMenu,0);
          }
        }
      }
    }
  }
  OWL::TWindow::vf11(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d2f0  FUN_0044d2f0   (137 bytes)   [unnamed]
undefined4 __cdecl FUN_0044d2f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  BOOL BVar1;
  
  if ((*(int *)((int)param_1 + 0x42) != 0) && (*(int *)((int)param_1 + 0x2a) != 0)) {
    FUN_004502b0();
    in_EAX = 0;
    *(undefined4 *)((int)param_1 + 0x42) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x2a) = param_2;
  *(undefined4 *)((int)param_1 + 0x2e) = param_3;
  if (*(int *)((int)param_1 + 0x2a) != 0) {
    in_EAX = *(undefined4 *)((int)param_1 + 0x2a);
  }
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    in_EAX = FUN_00450270();
    *(undefined4 *)((int)param_1 + 0x42) = in_EAX;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    BVar1 = IsWindow(*(HWND *)(*param_1 + 0xc));
    in_EAX = 0;
    if (BVar1 != 0) {
      in_EAX = FUN_00438338(*param_1,0x80,1,*(LPARAM *)((int)param_1 + 0x42));
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d37c  FUN_0044d37c   (209 bytes)   [unnamed]
undefined4 __cdecl FUN_0044d37c(int *param_1,undefined4 param_2,HANDLE param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int cy;
  int cx;
  BOOL BVar3;
  HINSTANCE hInst;
  UINT fuLoad;
  
  bVar1 = FUN_0041b9e4();
  if (bVar1) {
    if ((*(int *)((int)param_1 + 0x46) != 0) && (*(int *)((int)param_1 + 0x32) != 0)) {
      FUN_004502b0();
      *(undefined4 *)((int)param_1 + 0x46) = 0;
    }
    *(undefined4 *)((int)param_1 + 0x32) = param_2;
    *(HANDLE *)((int)param_1 + 0x36) = param_3;
    if (*(int *)((int)param_1 + 0x32) == 0) {
      hInst = (HINSTANCE)0x0;
    }
    else {
      hInst = *(HINSTANCE *)(*(int *)((int)param_1 + 0x32) + 8);
    }
    if (*(int *)((int)param_1 + 0x36) != 0) {
      fuLoad = 0;
      cy = GetSystemMetrics(DAT_0047d680);
      cx = GetSystemMetrics(DAT_0047d678);
      param_3 = LoadImageA(hInst,*(LPCSTR *)((int)param_1 + 0x36),1,cx,cy,fuLoad);
      *(HANDLE *)((int)param_1 + 0x46) = param_3;
      if (*(int *)((int)param_1 + 0x46) == 0) {
        param_3 = (HANDLE)FUN_00450270();
        *(HANDLE *)((int)param_1 + 0x46) = param_3;
      }
    }
    if (*(int *)((int)param_1 + 0x46) != 0) {
      BVar3 = IsWindow(*(HWND *)(*param_1 + 0xc));
      param_3 = (HANDLE)0x0;
      if (BVar3 != 0) {
        param_3 = (HANDLE)FUN_00438338(*param_1,0x80,0,*(LPARAM *)((int)param_1 + 0x46));
      }
    }
    uVar2 = CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d8dc  FUN_0044d8dc   (47 bytes)   [unnamed]
int __cdecl FUN_0044d8dc(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044c9cb(*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00438220(*param_1,(undefined*)FUN_0044ca34);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044daec  FUN_0044daec   (1371 bytes)   [unnamed]
undefined4 __cdecl FUN_0044daec(int *param_1,char param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  tagRECT *ptVar8;
  LONG *pLVar9;
  tagRECT local_128;
  int local_118 [4];
  int local_108 [4];
  tagRECT local_f8;
  int local_e8 [4];
  tagRECT local_d8;
  int local_c8 [4];
  tagRECT local_b8;
  int local_a8 [4];
  tagRECT local_98;
  int local_88 [4];
  tagRECT local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char local_3d;
  int local_3c;
  int local_38;
  char local_31;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)param_1 + 0x15) == 0) {
    uVar3 = 0;
  }
  else if ((*(byte *)(*(int *)((int)param_1 + 0x15) + 0x74) & 8) == 0) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 8;
    uVar3 = 0;
    local_78.left = 0;
    local_78.top = 0;
    local_78.right = 0;
    local_78.bottom = 0;
    FUN_004386fc(*param_1,&local_78);
    ptVar8 = &local_78;
    pLVar9 = local_88;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = ptVar8->left;
      ptVar8 = (tagRECT *)&ptVar8->top;
      pLVar9 = pLVar9 + 1;
    }
    local_8 = local_88[3] - local_88[1];
    local_c = local_88[2] - local_88[0];
    local_98.left = 0;
    local_98.top = 0;
    local_98.right = 0;
    local_98.bottom = 0;
    FUN_004386c0(*(int *)((int)param_1 + 0x15),&local_98);
    ptVar8 = &local_98;
    pLVar9 = local_a8;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = ptVar8->left;
      ptVar8 = (tagRECT *)&ptVar8->top;
      pLVar9 = pLVar9 + 1;
    }
    local_10 = local_a8[3] - local_a8[1];
    local_14 = local_a8[2] - local_a8[0];
    uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
    if (((uVar4 & 0x80440000) != 0) ||
       (uVar4 = FUN_004385cc(*(int *)((int)param_1 + 0x15)), (uVar4 & 0x20101) != 0)) {
      if ((*(byte *)(*param_1 + 0x74) & 8) != 0) {
        local_b8.left = 0;
        local_b8.top = 0;
        local_b8.right = 0;
        local_b8.bottom = 0;
        FUN_004386fc(*(int *)((int)param_1 + 0x15),&local_b8);
        ptVar8 = &local_b8;
        pLVar9 = local_c8;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = ptVar8->left;
          ptVar8 = (tagRECT *)&ptVar8->top;
          pLVar9 = pLVar9 + 1;
        }
        local_18 = local_c8[3] - local_c8[1];
        local_20 = local_c8[2] - local_c8[0];
        local_1c = local_20;
        ShowScrollBar(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),3,0);
        local_d8.left = 0;
        local_d8.top = 0;
        local_d8.right = 0;
        local_d8.bottom = 0;
        FUN_004386fc(*(int *)((int)param_1 + 0x15),&local_d8);
        ptVar8 = &local_d8;
        pLVar9 = local_e8;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = ptVar8->left;
          ptVar8 = (tagRECT *)&ptVar8->top;
          pLVar9 = pLVar9 + 1;
        }
        local_2c = local_e8[3] - local_e8[1];
        local_30 = local_e8[2] - local_e8[0];
        if ((local_1c == local_30) && (local_18 == local_2c)) {
          local_31 = '\0';
        }
        else {
          local_31 = '\x01';
        }
        local_28 = local_30;
        local_24 = local_2c;
        local_14 = local_30;
        local_10 = local_2c;
        if (local_31 != '\0') {
          local_38 = 3;
          if (local_30 == local_1c) {
            local_38 = 0;
          }
          if (local_2c == local_18) {
            local_38 = 1;
          }
          local_3c = local_38;
          ShowScrollBar(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),local_38,1);
        }
      }
      uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x80440000) != 0) {
        uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
        local_3d = (uVar4 & 0x80000000) != 0;
        uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
        FUN_004385a0(*(int *)((int)param_1 + 0x15),uVar4 & 0x7fbbffff | 0x50800000);
        if (local_3d != '\0') {
          SetParent(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),*(HWND *)(*param_1 + 0xc));
        }
      }
      uVar4 = FUN_004385cc(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x20101) != 0) {
        uVar4 = FUN_004385cc(*(int *)((int)param_1 + 0x15));
        FUN_004385ec(*(int *)((int)param_1 + 0x15),uVar4 & 0xfffdfefe);
      }
    }
    uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) != 0) {
      local_f8.left = 0;
      local_f8.top = 0;
      local_f8.right = 0;
      local_f8.bottom = 0;
      FUN_004386fc(*(int *)((int)param_1 + 0x15),&local_f8);
      ptVar8 = &local_f8;
      pLVar9 = local_108;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pLVar9 = ptVar8->left;
        ptVar8 = (tagRECT *)&ptVar8->top;
        pLVar9 = pLVar9 + 1;
      }
      local_48 = local_108[3] - local_108[1];
      local_4c = local_108[2] - local_108[0];
      local_44 = local_4c;
      local_14 = local_4c;
      local_10 = local_48;
    }
    if ((local_c == local_14) && (local_8 == local_10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((*(byte *)(*param_1 + 0x74) & 8) == 0) {
        uVar3 = 1;
      }
      else {
        local_128.left = 0;
        local_128.top = 0;
        local_128.right = 0;
        local_128.bottom = 0;
        FUN_004386c0(*param_1,&local_128);
        ptVar8 = &local_128;
        pLVar9 = local_118;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = ptVar8->left;
          ptVar8 = (tagRECT *)&ptVar8->top;
          pLVar9 = pLVar9 + 1;
        }
        local_58 = local_118[3] - local_118[1];
        local_5c = local_118[2] - local_118[0];
        local_50 = local_58 - local_8;
        local_54 = local_5c - local_c;
        if (param_2 == '\0') {
          uVar4 = 8;
        }
        else {
          uVar4 = 0;
        }
        FUN_00438730(*param_1,(HWND)0x0,0,0,local_14 + local_54,local_10 + local_50,uVar4 | 0x12);
        local_c = local_14;
        local_8 = local_10;
      }
    }
    if ((*(byte *)(*param_1 + 0x1a) & 4) != 0) {
      if (param_1 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_1[3];
      }
      puVar5 = FUN_00468488((int)param_1,iVar7,(int *)&DAT_00403a74,(int *)&DAT_00440e5c,0);
      if (puVar5 == (undefined4 *)0x0) {
        *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffff7;
      }
    }
    uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) == 0) {
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_00438730(*(int *)((int)param_1 + 0x15),(HWND)0x0,0,0,local_c,local_8,uVar4 | 0x214);
    }
    else {
      iVar7 = GetSystemMetrics(DAT_0047d518);
      local_60 = DAT_0047d520;
      iVar6 = GetSystemMetrics(DAT_0047d520);
      local_64 = local_8 + iVar6 * 2;
      local_68 = local_c + iVar7 * 2;
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_00438730(*(int *)((int)param_1 + 0x15),(HWND)0x0,-iVar7,-iVar6,local_68,local_64,
                   uVar4 | 0x214);
    }
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  else {
    uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e228  FUN_0044e228   (44 bytes)   [unnamed]
void __cdecl FUN_0044e228(int *param_1,WPARAM param_2,LPARAM param_3)

{
  if (((param_2 == 1) || (param_2 == 2)) || (param_2 == 0)) {
    FUN_004383d0(*param_1,0x7ef5,param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e25a  FUN_0044e25a   (187 bytes)   [unnamed]
void __stdcall FUN_0044e25a(void)

{
  undefined4 *puVar1;
  WPARAM WVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  WVar2 = *(WPARAM *)(unaff_EBP + 0xc);
  piVar3 = *(int **)(unaff_EBP + 8);
  OWL::TWindow::EvSize(*piVar3,WVar2);
  if (*(int *)((int)piVar3 + 0x15) != 0) {
    *(undefined1 *)(unaff_EBP + -1) = 0;
    if (WVar2 != 1) {
      uVar4 = FUN_0044daec(piVar3,'\x01');
      *(char *)(unaff_EBP + -1) = (char)uVar4;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_004386fc(*(int *)((int)piVar3 + 0x15),(LPRECT)(unaff_EBP + -0x24));
      puVar6 = (undefined4 *)(unaff_EBP + -0x24);
      puVar7 = (undefined4 *)(unaff_EBP + -0x34);
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x30);
      *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0xc);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -8);
      *puVar1 = *(undefined4 *)(unaff_EBP + -0x14);
      puVar1[1] = *(undefined4 *)(unaff_EBP + -0x10);
    }
    if (*(char *)(unaff_EBP + -1) == '\0') {
      FUN_00438398(*(int *)((int)piVar3 + 0x15),'\x01');
    }
  }
  FUN_0044e228(piVar3,WVar2,(LPARAM)puVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e630  FUN_0044e630   (124 bytes)   [unnamed]
undefined4 __cdecl FUN_0044e630(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  local_c = 0;
  iVar2 = 0;
  do {
    if (*(int *)((int)param_2 + iVar2 * 4 + 0x11) < 1) {
      if ((*(int *)((int)param_2 + iVar2 * 4 + 0x11) == 0) &&
         (0 < *(int *)((int)param_1 + iVar2 * 4 + 0x11))) {
        iVar1 = FUN_0042bdc0(param_3,param_1,local_8,*(int *)((int)param_1 + iVar2 * 4 + 0x11));
      }
    }
    else {
      FUN_0042bdc0(param_3,param_2,local_c,*(int *)((int)param_2 + iVar2 * 4 + 0x11));
      iVar1 = *(int *)((int)param_2 + iVar2 * 4 + 0x11);
      local_c = local_c + iVar1;
    }
    if (0 < *(int *)((int)param_1 + iVar2 * 4 + 0x11)) {
      local_8 = local_8 + *(int *)((int)param_1 + iVar2 * 4 + 0x11);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e6b8  FUN_0044e6b8   (170 bytes)   [unnamed]
void __stdcall FUN_0044e6b8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482c62);
  if (DAT_00482c5e != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048cdb7,2);
    DAT_00482c5e = '\0';
  }
  if (DAT_00482c5c != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048cda6,2);
    DAT_00482c5c = '\0';
  }
  if (DAT_00482c57 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048cd89,2);
    DAT_00482c57 = '\0';
  }
  if (DAT_00482c51 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048cd68,2);
    DAT_00482c51 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e764  FUN_0044e764   (110 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044e7a2) */
DWORD * __cdecl FUN_0044e764(DWORD *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482dfc);
  param_1[3] = 0;
  param_1[3] = (DWORD)&DAT_00485bd8;
  DVar1 = GetLastError();
  *param_1 = DVar1;
  FUN_0044e7f8(param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e7f8  FUN_0044e7f8   (120 bytes)   [unnamed]
void __cdecl FUN_0044e7f8(DWORD *param_1,ushort param_2)

{
  DWORD DVar1;
  uint local_10c [65];
  uint *local_8;
  
  local_8 = (uint *)0x0;
  DVar1 = FormatMessageA(0x1100,(LPCVOID)0x0,*param_1,(uint)param_2,(LPSTR)&local_8,0,(va_list *)0x0
                        );
  if (DVar1 == 0) {
    wsprintfA((LPSTR)local_10c,"Error: %#X occurred (no further info)",*param_1);
    FUN_00459b6c((int)(param_1 + 1),local_10c);
  }
  else {
    FUN_00459b6c((int)(param_1 + 1),local_8);
    LocalFree(local_8);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e870  FUN_0044e870   (155 bytes)   [unnamed]
undefined4 __cdecl FUN_0044e870(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x482e30);
  uVar1 = FUN_0044eb8c(param_1);
  if ((char)uVar1 == '\0') {
    if ((DAT_00482e1c == 0) && (DAT_00482e1c = operator_new(), DAT_00482e1c != 0)) {
      *(undefined4 *)(DAT_00482e1c + 1) = 0;
      *(undefined4 *)(DAT_00482e1c + 5) = 0;
      *(undefined4 *)(DAT_00482e1c + 9) = 0;
    }
    FUN_0044e93c(DAT_00482e1c,param_1,0);
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e93c  FUN_0044e93c   (159 bytes)   [unnamed]
void __cdecl FUN_0044e93c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == *(uint *)(param_1 + 1)) {
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_0044e9dc(param_1,*(int *)(param_1 + 1) + 1);
    }
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar1 * 4) = param_2;
  }
  else {
    if (*(uint *)(param_1 + 5) <= param_3) {
      FUN_0044e9dc(param_1,param_3 + 1);
    }
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_0044e9dc(param_1,*(int *)(param_1 + 1) + 1);
    }
    if ((param_3 < *(uint *)(param_1 + 1)) && (*(int *)(param_1 + 1) != 0)) {
      FUN_004675a4((undefined4 *)((param_3 + 1) * 4 + *(int *)(param_1 + 9)),
                   (undefined4 *)(param_3 * 4 + *(int *)(param_1 + 9)),
                   (*(int *)(param_1 + 1) - param_3) * 4);
    }
    *(undefined4 *)(*(int *)(param_1 + 9) + param_3 * 4) = param_2;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e9dc  FUN_0044e9dc   (155 bytes)   [unnamed]
void __cdecl FUN_0044e9dc(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ea78  FUN_0044ea78   (167 bytes)   [unnamed]
uint __cdecl FUN_0044ea78(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *in_FS_OFFSET;
  bool bVar3;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x482e60);
  uVar1 = FUN_0044eb8c(param_1);
  if ((char)uVar1 == '\0') {
    *in_FS_OFFSET = local_2c;
    uVar2 = local_2c;
  }
  else {
    FUN_0044eb20(DAT_00482e1c,param_1);
    bVar3 = *(int *)(DAT_00482e1c + 1) == 0;
    uVar2 = (uint)bVar3;
    if (bVar3) {
      if (DAT_00482e1c != 0) {
        if (*(int *)(DAT_00482e1c + 9) != 0) {
          free();
        }
        uVar2 = operator_delete();
      }
      DAT_00482e1c = 0;
    }
    *in_FS_OFFSET = local_2c;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eb20  FUN_0044eb20   (72 bytes)   [unnamed]
undefined4 __cdecl FUN_0044eb20(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0044eb68(param_1,param_2);
  if (iVar1 != -1) {
    puVar2 = FUN_004675a4((undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 9)),
                          (undefined4 *)((iVar1 + 1) * 4 + *(int *)(param_1 + 9)),
                          ((*(int *)(param_1 + 1) - iVar1) + -1) * 4);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eb68  FUN_0044eb68   (34 bytes)   [unnamed]
int __cdecl FUN_0044eb68(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + 1) <= iVar1) {
      return -1;
    }
    if (param_2 == *(int *)(*(int *)(param_1 + 9) + iVar1 * 4)) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eb8c  FUN_0044eb8c   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_0044eb8c(int param_1)

{
  uint uVar1;
  
  if (DAT_00482e1c == 0) {
    return 0;
  }
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_00482e1c + 1) <= uVar1) {
      return 0;
    }
    if (param_1 == *(int *)(*(int *)(DAT_00482e1c + 9) + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ebc4  FUN_0044ebc4   (248 bytes)   [unnamed]
undefined4 __cdecl FUN_0044ebc4(LPCSTR param_1,LPCSTR param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HRSRC pHVar3;
  WORD wLanguage;
  int iVar4;
  int local_18;
  int local_c;
  
  if (DAT_00482e1c != 0) {
    iVar4 = 0;
    puVar1 = (undefined4 *)FUN_0041c4a0();
    iVar2 = FUN_0041c6e8(puVar1,iVar4);
    iVar4 = DAT_00482e1c;
    if (iVar2 == 0) {
      wLanguage = 0;
    }
    else {
      wLanguage = *(WORD *)(iVar2 + 0x2f);
    }
    for (local_c = 0; iVar2 = DAT_00482e1c, local_c < *(int *)(iVar4 + 1); local_c = local_c + 1) {
      pHVar3 = FindResourceExA(*(HMODULE *)(*(int *)(*(int *)(iVar4 + 9) + local_c * 4) + 8),param_2
                               ,param_1,wLanguage);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar4 + 9) + local_c * 4);
      }
    }
    for (local_18 = 0; local_18 < *(int *)(iVar2 + 1); local_18 = local_18 + 1) {
      pHVar3 = FindResourceA(*(HMODULE *)(*(int *)(*(int *)(iVar2 + 9) + local_18 * 4) + 8),param_1,
                             param_2);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar2 + 9) + local_18 * 4);
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ecbc  FUN_0044ecbc   (205 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044ecbc(undefined4 *param_1,uint *param_2,char param_3,char param_4,char param_5)

{
  UINT uMode;
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x482ebc);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  param_1[1] = 0;
  if (param_3 == '\0') {
    param_1[2] = 0;
  }
  else {
    uMode = SetErrorMode(0x8001);
    pHVar1 = LoadLibraryA((LPCSTR)param_2);
    param_1[2] = pHVar1;
    if (((uint)param_1[2] < 0x21) && (param_4 != '\0')) {
      FUN_0045063c(param_2);
    }
    SetErrorMode(uMode);
  }
  *(char *)(param_1 + 3) = param_3;
  FUN_0044ef34((int)param_1,param_2);
  if (param_5 != '\0') {
    FUN_0044e870((int)param_1);
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ed8c  FUN_0044ed8c   (115 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044ed8c(undefined4 *param_1,uint *param_2,undefined4 param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482f04);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_0044ef34((int)param_1,param_2);
  if (param_4 != '\0') {
    FUN_0044e870((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ee00  FUN_0044ee00   (138 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044ee00(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482f28);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_0044ef34((int)param_1,param_2);
  if (param_3 != 0) {
    FUN_0044efd0((int)param_1,param_3);
  }
  if (param_5 != '\0') {
    FUN_0044e870((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef18  FUN_0044ef18   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_0044ef18(LPCSTR param_1,LPCSTR param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0044ebc4(param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef34  FUN_0044ef34   (155 bytes)   [unnamed]
void __cdecl FUN_0044ef34(int param_1,uint *param_2)

{
  uint *lpFilename;
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x482f80);
  operator_delete_array();
  if ((0x20 < *(uint *)(param_1 + 8)) && (param_2 == (uint *)0x0)) {
    lpFilename = (uint *)operator_new_array();
    operator_delete_array();
    DVar1 = GetModuleFileNameA(*(HMODULE *)(param_1 + 8),(LPSTR)lpFilename,0x104);
    if (DVar1 != 0) {
      param_2 = lpFilename;
    }
  }
  uVar2 = FUN_0042aea0(param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  operator_delete_array();
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044efd0  FUN_0044efd0   (88 bytes)   [unnamed]
void __cdecl FUN_0044efd0(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  CHAR *pCVar3;
  CHAR local_34 [28];
  CHAR local_18 [20];
  
  FUN_0044f0a4(param_1,param_2);
  if ((*(UINT *)&DAT_0047eb5c) == 0) {
    pcVar2 = "GetWindowPtr(%X)";
    pCVar3 = local_18;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pCVar3 = pCVar3 + 4;
    }
    *pCVar3 = *pcVar2;
    wsprintfA(local_34,local_18,param_2);
    (*(UINT *)&DAT_0047eb5c) = RegisterWindowMessageA(local_34);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f0a4  FUN_0044f0a4   (14 bytes)   [unnamed]
void __cdecl FUN_0044f0a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f0b4  FUN_0044f0b4   (311 bytes)   [unnamed]
int __cdecl FUN_0044f0b4(int param_1,uint param_2,LPSTR param_3,int param_4)

{
  WORD wLanguage;
  undefined4 *puVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint cchWideChar;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  puVar1 = (undefined4 *)FUN_0041c4a0();
  iVar5 = FUN_0041c6e8(puVar1,iVar5);
  if (iVar5 == 0) {
    wLanguage = 0;
  }
  else {
    wLanguage = *(WORD *)(iVar5 + 0x2f);
  }
  hResInfo = FindResourceExA(*(HMODULE *)(param_1 + 8),(LPCSTR)0x6,(LPCSTR)((param_2 >> 4) + 1),
                             wLanguage);
  if (hResInfo == (HRSRC)0x0) {
    hResInfo = FindResourceA(*(HMODULE *)(param_1 + 8),(LPCSTR)((param_2 >> 4) + 1),(LPCSTR)0x6);
  }
  if (hResInfo == (HRSRC)0x0) {
    iVar4 = FUN_0044ef18((LPCSTR)((param_2 >> 4) + 1),(LPCSTR)0x6);
    if (iVar4 != 0) {
      iVar4 = FUN_0044f0b4(iVar4,param_2,param_3,param_4);
      return iVar4;
    }
  }
  else {
    hResData = LoadResource(*(HMODULE *)(param_1 + 8),hResInfo);
    if (hResData != (HGLOBAL)0x0) {
      puVar2 = LockResource(hResData);
      if (puVar2 != (ushort *)0x0) {
        uVar3 = param_2 & 0xf;
        while( true ) {
          cchWideChar = (uint)*puVar2;
          if (uVar3 == 0) break;
          puVar2 = (ushort *)((int)(puVar2 + 1) + cchWideChar * 2);
          uVar3 = uVar3 - 1;
        }
        iVar4 = 0;
        if ((cchWideChar != 0) &&
           (iVar4 = WideCharToMultiByte(0,0,(LPCWSTR)(puVar2 + 1),cchWideChar,param_3,param_4,
                                        (LPCSTR)0x0,(LPBOOL)0x0), iVar4 != 0)) {
          param_3[iVar4] = '\0';
        }
      }
      FreeResource(hResData);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
  }
  if (param_4 != 0) {
    *param_3 = '\0';
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f1ec  FUN_0044f1ec   (3214 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044f232) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0044f1ec(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  HRSRC hResInfo;
  ushort *puVar2;
  uint uVar3;
  uint cchWideChar;
  int *piVar4;
  LPCWSTR lpWideCharStr;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 local_418 [248];
  undefined4 local_320;
  int *local_310;
  undefined1 local_2f8 [248];
  undefined *local_200;
  undefined4 *local_1f0;
  undefined4 *local_1ec;
  undefined4 *local_1e8;
  undefined4 *local_1e4;
  uint local_1e0;
  int local_1dc;
  int *local_1d8;
  int *local_1d4;
  int *local_1d0;
  int local_1cc;
  undefined4 *local_1c8;
  undefined4 local_1c4;
  undefined4 *local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1a8;
  undefined4 *local_1a4;
  int *local_1a0;
  undefined4 *local_19c;
  undefined4 *local_198;
  uint local_194;
  int local_190;
  int *local_18c;
  int *local_188;
  uint local_184;
  int *local_180;
  int local_17c;
  undefined4 *local_178;
  undefined4 local_174;
  undefined4 *local_170;
  int local_16c;
  undefined4 *local_168;
  uint local_164;
  undefined1 local_15d;
  uint local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  uint local_13c;
  undefined1 *local_138;
  int *local_134;
  int *local_130;
  uint local_12c;
  int *local_128;
  undefined1 *local_124;
  int *local_120;
  undefined4 local_11c;
  uint *local_110;
  uint local_10c;
  undefined1 *local_108;
  undefined4 local_104;
  int *local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  uint local_ec;
  undefined1 *local_e8;
  int *local_e4;
  int *local_e0;
  uint local_dc;
  int *local_d8;
  undefined1 *local_d4;
  int *local_d0;
  undefined4 local_cc;
  uint *local_c0;
  uint local_bc;
  LPSTR local_b8;
  LPSTR local_b4;
  int local_b0;
  uint local_ac;
  HRSRC local_a8;
  LPCSTR local_a4;
  LPCSTR local_a0;
  LPCSTR local_9c;
  LPCSTR local_98;
  WORD local_92;
  HGLOBAL local_90;
  undefined4 local_8c;
  undefined2 local_7c;
  int local_70;
  undefined1 local_68 [8];
  int *local_60;
  undefined1 local_58 [8];
  int *local_50;
  undefined **local_48 [2];
  undefined1 local_40 [8];
  int *local_38;
  undefined **local_30 [2];
  undefined1 local_28 [8];
  int *local_20;
  LPSTR local_18;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4830a0);
  uVar3 = 0;
  local_c = (undefined4 *)&DAT_00485bd8;
  local_200 = &DAT_00485bd8;
  local_70 = local_70 + 1;
  local_7c = 0x20;
  iVar11 = 0;
  puVar1 = (undefined4 *)FUN_0041c4a0();
  iVar11 = FUN_0041c6e8(puVar1,iVar11);
  if (iVar11 == 0) {
    local_92 = 0;
  }
  else {
    local_92 = *(WORD *)(iVar11 + 0x2f);
  }
  local_9c = (LPCSTR)((param_3 >> 4) + 1);
  local_98 = local_9c;
  hResInfo = FindResourceExA(*(HMODULE *)(param_2 + 8),(LPCSTR)0x6,local_9c,local_92);
  if (hResInfo == (HRSRC)0x0) {
    local_a4 = (LPCSTR)((param_3 >> 4) + 1);
    local_a0 = local_a4;
    hResInfo = FindResourceA(*(HMODULE *)(param_2 + 8),local_a4,(LPCSTR)0x6);
  }
  if (hResInfo == (HRSRC)0x0) {
    iVar11 = FUN_0044ef18((LPCSTR)((param_3 >> 4) + 1),(LPCSTR)0x6);
    if (iVar11 != 0) {
      local_7c = 0xec;
      FUN_0044f1ec(param_1,iVar11,param_3);
      local_7c = 0xf8;
      local_70 = local_70 + -1;
      if (local_c != (undefined4 *)0x0) {
        if (local_c[-3] != -1) {
          piVar4 = local_c + -3;
          if (piVar4 == &DAT_00485bcc) {
            iVar11 = 1;
          }
          else if (piVar4 == &DAT_00485bcc) {
            iVar11 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar11 = *piVar4 + 1;
          }
          if (iVar11 != 0) goto LAB_0044fca4;
        }
        local_1b4 = local_c + -3;
        local_1b8 = local_c + -3;
        operator_delete();
      }
LAB_0044fca4:
      *in_FS_OFFSET = local_8c;
      return param_1;
    }
  }
  else {
    local_a8 = hResInfo;
    local_90 = LoadResource(*(HMODULE *)(param_2 + 8),hResInfo);
    if (local_90 != (HGLOBAL)0x0) {
      puVar2 = LockResource(local_90);
      if (puVar2 != (ushort *)0x0) {
        local_ac = param_3 & 0xf;
        while( true ) {
          lpWideCharStr = (LPCWSTR)(puVar2 + 1);
          cchWideChar = (uint)*puVar2;
          uVar7 = local_ac - 1;
          if (local_ac == 0) break;
          puVar2 = (ushort *)((int)lpWideCharStr + cchWideChar * 2);
          local_ac = uVar7;
        }
        uVar3 = 0;
        local_ac = uVar7;
        if (cchWideChar != 0) {
          local_b0 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0);
          local_7c = 0x38;
          local_b8 = (LPSTR)operator_new_array();
          local_70 = local_70 + 1;
          local_7c = 0x2c;
          local_b4 = local_b8;
          local_18 = local_b8;
          uVar3 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,local_b8,local_b0 + 1,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          local_bc = uVar3;
          if (DAT_00485f20 - 0xeU < uVar3) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar6 = &LAB_00402064;
            uVar5 = 0;
            local_7c = 0x50;
            local_c0 = (uint *)FUN_004670cc(local_2f8,
                                            PTR_s_invalid_string_size_parameter_in_00488a54);
            std::string::string_from_cstr((int)local_58,local_c0);
            local_70 = local_70 + 2;
            local_30[0] = &std::logic_error::vftable;
            local_cc = 0;
            local_20 = (int *)0x0;
            local_7c = 0x5c;
            if (local_50[-3] == -1 || local_50[-3] + 1 < 0) {
              local_dc = local_50[-1];
              local_e4 = std::string::__getRep(local_28,local_dc,local_dc);
              local_310 = local_e4 + 3;
              local_e8 = local_28;
              local_ec = local_dc;
              local_f0 = local_50;
              local_f4 = local_310;
              local_e0 = local_310;
              local_20 = local_310;
              memcpy(local_310,local_50,local_dc);
            }
            else {
              local_d0 = local_50;
              local_20 = local_50;
              local_d4 = local_28;
              local_d8 = local_50 + -3;
              if (local_d8 != &DAT_00485bcc) {
                *local_d8 = *local_d8 + 1;
              }
            }
            local_7c = 0x50;
            local_30[0] = &std::length_error::vftable;
            local_70 = local_70 + 2;
            if (local_50 != (int *)0x0) {
              if (local_50[-3] != -1) {
                local_f8 = local_50 + -3;
                if (local_f8 == &DAT_00485bcc) {
                  iVar11 = 1;
                }
                else if (local_f8 == &DAT_00485bcc) {
                  iVar11 = 1;
                }
                else {
                  *local_f8 = *local_f8 + -1;
                  iVar11 = *local_f8 + 1;
                }
                if (iVar11 != 0) goto LAB_0044f61a;
              }
              local_fc = local_50 + -3;
              local_100 = local_50 + -3;
              operator_delete();
              local_104 = 0;
              local_50 = (int *)0x0;
              local_108 = local_58;
              local_320 = 0;
            }
LAB_0044f61a:
            local_7c = 0x44;
            FUN_00471ae8((uint *)&DAT_00402008,(undefined4*)local_30,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
          }
          if (local_bc < (uint)local_c[-1]) {
            local_10c = local_c[-1] - local_bc;
            if ((uint)local_c[-1] < local_bc) {
              uVar10 = 0;
              uVar9 = 0;
              uVar8 = 0;
              uVar7 = 1;
              puVar6 = &LAB_004021bc;
              uVar5 = 0;
              local_7c = 0x80;
              local_110 = (uint *)FUN_004670cc(local_418,
                                               PTR_s_string_index_out_of_range_in_fun_00488a60);
              std::string::string_from_cstr((int)local_68,local_110);
              local_70 = local_70 + 2;
              local_48[0] = &std::logic_error::vftable;
              local_11c = 0;
              local_38 = (int *)0x0;
              local_7c = 0x8c;
              if (local_60[-3] == -1 || local_60[-3] + 1 < 0) {
                local_12c = local_60[-1];
                local_134 = std::string::__getRep(local_40,local_12c,local_12c);
                local_144 = local_134 + 3;
                local_138 = local_40;
                local_13c = local_12c;
                local_140 = local_60;
                local_130 = local_144;
                local_38 = local_144;
                memcpy(local_144,local_60,local_12c);
              }
              else {
                local_120 = local_60;
                local_38 = local_60;
                local_124 = local_40;
                local_128 = local_60 + -3;
                if (local_128 != &DAT_00485bcc) {
                  *local_128 = *local_128 + 1;
                }
              }
              local_7c = 0x80;
              local_48[0] = &std::out_of_range::vftable;
              local_70 = local_70 + 2;
              if (local_60 != (int *)0x0) {
                if (local_60[-3] != -1) {
                  local_148 = local_60 + -3;
                  if (local_148 == &DAT_00485bcc) {
                    iVar11 = 1;
                  }
                  else if (local_148 == &DAT_00485bcc) {
                    iVar11 = 1;
                  }
                  else {
                    *local_148 = *local_148 + -1;
                    iVar11 = *local_148 + 1;
                  }
                  if (iVar11 != 0) goto LAB_0044f8ac;
                }
                local_14c = local_60 + -3;
                local_150 = local_60 + -3;
                operator_delete();
                local_154 = 0;
                local_60 = (int *)0x0;
                local_158 = local_68;
              }
LAB_0044f8ac:
              local_7c = 0x44;
              FUN_00471ae8((uint *)&DAT_00402160,(undefined4*)local_48,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
            }
            local_15c = local_c[-1] - local_bc;
            local_15d = 0;
            local_164 = local_15c;
            if (local_10c < local_15c) {
              local_164 = local_10c;
            }
            FUN_0045a224((int)local_14,local_bc,local_164,(uint)&local_15d,0,0,0);
          }
          else {
            std::string::replace_fill((int)local_14,local_c[-1],0,local_bc - local_c[-1],0);
          }
          local_168 = local_c + -3;
          if (local_168 != &DAT_00485bcc) {
            *local_168 = 0;
          }
          iVar11 = 0;
          if (0 < (int)uVar3) {
            do {
              local_16c = iVar11;
              if (1 < local_c[-3] + 1) {
                FUN_0045f64c((int)local_14);
              }
              local_170 = local_c + -3;
              if (local_170 != &DAT_00485bcc) {
                *local_170 = 0xffffffff;
              }
              *(CHAR *)((int)local_c + local_16c) = local_b8[iVar11];
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)uVar3);
          }
          local_70 = local_70 + -1;
          operator_delete_array();
          local_7c = 0x20;
        }
      }
      FreeResource(local_90);
      if (uVar3 != 0) {
        local_7c = 0xbc;
        local_174 = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
          local_184 = local_c[-1];
          local_18c = std::string::__getRep(param_1,local_184,local_184);
          local_188 = local_18c + 3;
          *(int **)(param_1 + 8) = local_188;
          local_190 = param_1;
          local_194 = local_184;
          local_198 = local_c;
          local_19c = *(undefined4 **)(param_1 + 8);
          memcpy(local_19c,local_c,local_184);
        }
        else {
          local_178 = local_c;
          *(undefined4 **)(param_1 + 8) = local_c;
          local_17c = param_1;
          local_180 = (int *)(*(int *)(param_1 + 8) + -0xc);
          if (local_180 != &DAT_00485bcc) {
            *local_180 = *local_180 + 1;
          }
        }
        local_7c = 0xd4;
        if (local_c != (undefined4 *)0x0) {
          if (local_c[-3] != -1) {
            local_1a0 = local_c + -3;
            if (local_1a0 == &DAT_00485bcc) {
              iVar11 = 1;
            }
            else if (local_1a0 == &DAT_00485bcc) {
              iVar11 = 1;
            }
            else {
              *local_1a0 = *local_1a0 + -1;
              iVar11 = *local_1a0 + 1;
            }
            if (iVar11 != 0) goto LAB_0044fbb9;
          }
          local_1a4 = local_c + -3;
          local_1a8 = local_c + -3;
          operator_delete();
        }
LAB_0044fbb9:
        *in_FS_OFFSET = local_8c;
        return param_1;
      }
    }
  }
  local_7c = 0x110;
  local_1c4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar3 = local_c[-1];
    local_1d8 = std::string::__getRep(param_1,uVar3,uVar3);
    local_1d4 = local_1d8 + 3;
    *(int **)(param_1 + 8) = local_1d4;
    local_1dc = param_1;
    local_1e4 = local_c;
    local_1e8 = *(undefined4 **)(param_1 + 8);
    local_1e0 = uVar3;
    memcpy(local_1e8,local_c,uVar3);
  }
  else {
    local_1c8 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_1cc = param_1;
    local_1d0 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (local_1d0 != &DAT_00485bcc) {
      *local_1d0 = *local_1d0 + 1;
    }
  }
  local_7c = 0x128;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00485bcc) {
        iVar11 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar11 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar11 = *piVar4 + 1;
      }
      if (iVar11 != 0) goto LAB_0044fe5c;
    }
    local_1ec = local_c + -3;
    local_1f0 = local_c + -3;
    operator_delete();
  }
LAB_0044fe5c:
  *in_FS_OFFSET = local_8c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fe7c  FUN_0044fe7c   (73 bytes)   [unnamed]
HACCEL __cdecl FUN_0044fe7c(int param_1,LPCSTR param_2)

{
  HACCEL pHVar1;
  int iVar2;
  
  pHVar1 = LoadAcceleratorsA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HACCEL)0x0) {
    iVar2 = FUN_0044ef18(param_2,(LPCSTR)0x9);
    if (iVar2 != 0) {
      pHVar1 = FUN_0044fe7c(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fec8  FUN_0044fec8   (73 bytes)   [unnamed]
HMENU __cdecl FUN_0044fec8(int param_1,LPCSTR param_2)

{
  HMENU pHVar1;
  int iVar2;
  
  pHVar1 = LoadMenuA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HMENU)0x0) {
    iVar2 = FUN_0044ef18(param_2,(LPCSTR)0x4);
    if (iVar2 != 0) {
      pHVar1 = FUN_0044fec8(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ff14  FUN_0044ff14   (73 bytes)   [unnamed]
HCURSOR __cdecl FUN_0044ff14(int param_1,LPCSTR param_2)

{
  HCURSOR pHVar1;
  int iVar2;
  
  pHVar1 = LoadCursorA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HCURSOR)0x0) {
    iVar2 = FUN_0044ef18(param_2,(LPCSTR)0x1);
    if (iVar2 != 0) {
      pHVar1 = FUN_0044ff14(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ff60  FUN_0044ff60   (685 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044ffc3) */
int * __cdecl FUN_0044ff60(int *param_1,int param_2,LPCSTR param_3)

{
  uint *puVar1;
  uint uVar2;
  FARPROC pFVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x483220);
  pFVar3 = GetProcAddress(*(HMODULE *)(param_2 + 8),param_3);
  *param_1 = (int)pFVar3;
  if (*param_1 != 0) goto LAB_004501fa;
  local_c = &DAT_00485bd8;
  if ((short)((uint)param_3 >> 0x10) == 0) {
    FUN_004236bc((int)local_34,0x7ff4,(uint)param_3 & 0xffff,DAT_00484890);
    FUN_00459ad4((int)local_14,(int)local_34);
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00450148;
      }
      operator_delete();
      local_2c = 0;
    }
  }
  else {
    FUN_004235b8((int)local_24,0x7ff5,param_3,DAT_00484890);
    FUN_00459ad4((int)local_14,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00450148;
      }
      operator_delete();
      local_1c = 0;
    }
  }
LAB_00450148:
  puVar1 = *(uint **)(param_2 + 4);
  uVar2 = *(uint *)(local_c + -4);
  pcVar5 = strlen(puVar1);
  FUN_0045a224((int)local_14,uVar2,0,(uint)puVar1,(uint)pcVar5,0,(uint)pcVar5);
  FUN_00423384((int)local_14,0);
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004501fa;
    }
    operator_delete();
  }
LAB_004501fa:
  *in_FS_OFFSET = local_58;
  return param_1;
}

} // namespace tea
