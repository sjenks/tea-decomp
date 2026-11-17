// TEA.exe — runtime / library code "OWL_TUrlLink"
// 22 functions, 0x004a224c..0x004a4690. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a224c  OWL::TUrlLink::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TUrlLink::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TUrlLink::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TUrlLink::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TStatic::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a22b0  OWL::TUrlLink::~TUrlLink   (479 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TUrlLink::_dtor
void __cdecl OWL::TUrlLink::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x50a344);
  if (param_1 == (int *)0x0) goto LAB_004a247e;
  param_1[3] = (int)&OWL::TUrlLink::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050aac0;
  *(undefined ***)param_1[2] = &PTR_LAB_0050aacc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050aad8;
  if ((uint *)param_1[6] != (uint *)0x0) {
    OWL::TGdiObject::_dtor((uint *)param_1[6],0);
    operator_delete();
  }
  if (param_1[0xd] != 0) {
    if (*(int *)(param_1[0xd] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xd] + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004a23bc;
    }
    operator_delete();
    param_1[0xd] = 0;
  }
LAB_004a23bc:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x27;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  OWL::TControl::_dtor(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x27;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x4f),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x47),0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004a247e:
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2490  OWL::TUrlLink::vf11   (10 bytes)   [rtti:vtable virtual slot 11]
char * __stdcall OWL::TUrlLink::vf11(void)

{
  return "OWL_UrlLink";
}

// ----------------------------------------------------------------------------------------------------
// 0x004a249c  OWL::TUrlLink::vf15   (743 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TUrlLink::vf15(int *param_1)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  tagRECT local_c8;
  LOGFONTA local_b8;
  uint *local_7c;
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined4 local_54 [12];
  uint *local_24;
  uint local_20 [2];
  uint *local_18;
  uint local_14 [2];
  uint *local_c [2];
  
  __InitExceptBlockLDTC(0x50a3fc);
  OWL::TWindow::vf30(*param_1);
  iVar1 = FUN_004a76a8(*(int *)(*param_1 + 0x14),0x31,0,0);
  if (iVar1 == 0) {
    local_68 = 0x2c;
    puVar2 = FUN_0048faec(local_20);
    local_5c = local_5c + 3;
    iVar1 = GetObjectA((HANDLE)*puVar2,0x3c,&local_b8);
    cVar4 = iVar1 != 0;
    local_5c = local_5c + -3;
    OWL::TGdiObject::_dtor(local_20,0);
    if (cVar4 != '\0') {
      local_b8.lfUnderline = (BYTE)param_1[0xf];
      local_24 = (uint *)operator_new();
      if (local_24 != (uint *)0x0) {
        local_68 = 0x44;
        FUN_0048f7fc(local_24,&local_b8);
      }
      param_1[6] = (int)local_24;
    }
  }
  else {
    local_68 = 8;
    local_7c = FUN_0048f708(local_14,iVar1,0);
    local_5c = local_5c + 2;
    iVar1 = GetObjectA((HANDLE)*local_7c,0x3c,&local_b8);
    cVar4 = iVar1 != 0;
    local_5c = local_5c + -2;
    OWL::TGdiObject::_dtor(local_14,0);
    if (cVar4 != '\0') {
      local_b8.lfUnderline = (BYTE)param_1[0xf];
      local_18 = (uint *)operator_new();
      if (local_18 != (uint *)0x0) {
        local_68 = 0x20;
        FUN_0048f7fc(local_18,&local_b8);
      }
      param_1[6] = (int)local_18;
    }
  }
  local_68 = 0x50;
  FUN_00497298((int *)local_c,0x104);
  local_5c = local_5c + 2;
  local_68 = 0x5c;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_c[0],0x104);
  if (*(int *)(param_1[0xd] + -4) == 0) {
    FUN_004cf41c((int)(param_1 + 0xb),local_c[0]);
  }
  pcVar3 = strlen(local_c[0]);
  if (pcVar3 == (char *)0x0) {
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)param_1[0xd]);
  }
  FUN_004a31b8(param_1);
  if ((param_1[7] != 0) && (*(int *)(*(int *)param_1[7] + 0xc) == 0)) {
    FUN_004a7988(*(int *)param_1[7],0,0x8000000,0);
    (**(code **)(*(int *)(*(int *)param_1[7] + 8) + 0x10))();
  }
  if (param_1[7] != 0) {
    local_c8.left = 0;
    local_c8.top = 0;
    local_c8.right = 0;
    local_c8.bottom = 0;
    FUN_004a7a6c(*param_1,&local_c8);
    local_68 = 0x68;
    FUN_0049f414(local_54,*(undefined4 *)(*param_1 + 0xc),&local_c8.left,0x3eb,(uint *)0xffffffff);
    local_5c = local_5c + 2;
    local_68 = 0x74;
    FUN_0049f534((int)local_54,(uint *)param_1[0xd],'\x01');
    FUN_004a76a8(*(int *)param_1[7],0x404,0,(LPARAM)local_54);
    local_5c = local_5c + -2;
    operator_delete_array();
    local_68 = 0x5c;
  }
  local_5c = local_5c + -2;
  OWL::TTmpBufferBase::_dtor((undefined4*)local_c,0);
  *in_FS_OFFSET = local_78;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2784  OWL::TUrlLink::vf13   (148 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TUrlLink::vf13(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x50a498);
  if (param_1[7] == 0) {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_0049f628(piVar1,0,*param_1,'\x01',0);
    }
    FUN_004a2818(param_1,(int)piVar1);
  }
  else if (*(int *)(*(int *)param_1[7] + 0xc) != 0) {
    FUN_004a76a8(*(int *)param_1[7],0x401,(uint)param_2,0);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2974  OWL::TUrlLink::vf14   (134 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TUrlLink::vf14(int *param_1,LPMSG param_2)

{
  BOOL BVar1;
  
  if (param_1[7] != 0) {
    BVar1 = IsWindow(*(HWND *)(*(int *)param_1[7] + 0xc));
    if (BVar1 != 0) {
      if (*(HWND *)(*param_1 + 0xc) != param_2->hwnd) {
        BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_2->hwnd);
        if (BVar1 == 0) goto LAB_004a29ea;
      }
      if ((0x1ff < param_2->message) && (param_2->message < 0x20e)) {
        FUN_004a76a8(*(int *)param_1[7],0x407,0,(LPARAM)param_2);
      }
    }
  }
LAB_004a29ea:
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2a28  OWL::TUrlLink::vf16   (116 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TUrlLink::vf16(int *param_1,LPWNDCLASSA param_2)

{
  BOOL BVar1;
  LPCSTR pCVar2;
  
  BVar1 = GetClassInfoA((HINSTANCE)0x0,"STATIC",param_2);
  if (BVar1 == 0) {
    OWL::TWindow::vf28(*param_1,&param_2->style);
    param_2->style = 0x83;
    param_2->hbrBackground = (HBRUSH)0x10;
    param_2->hCursor = *(HCURSOR *)(*param_1 + 0x58);
  }
  else {
    param_2->hInstance = *(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8);
    param_2->style = 0x83;
    pCVar2 = (LPCSTR)(**(code **)(param_1[3] + 0x2c))();
    param_2->lpszClassName = pCVar2;
    param_2->lpfnWndProc = FUN_004a29fc;
    param_2->hCursor = *(HCURSOR *)(*param_1 + 0x58);
    param_2->hbrBackground = (HBRUSH)0x10;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2a9c  OWL::TUrlLink::vf17   (616 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TUrlLink::vf17(int *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  HWND hWnd;
  HGDIOBJ pvVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagRECT local_64 [2];
  int local_44;
  LPSTR local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int local_20;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  LPSTR local_c;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x50a598);
  local_8 = (uint *)0x0;
  local_c = (LPSTR)0x0;
  local_20 = local_20 + 2;
  local_2c = 0x14;
  puVar1 = local_8;
  if (param_1[6] == 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x31;
    hWnd = GetParent(*(HWND *)(*param_1 + 0xc));
    pvVar3 = (HGDIOBJ)SendMessageA(hWnd,Msg,wParam,lParam);
    if (pvVar3 == (HGDIOBJ)0x0) {
      bVar2 = FUN_004875a8();
      if (bVar2) {
        iVar4 = 0xc;
      }
      else {
        iVar4 = 0xd;
      }
      pvVar3 = GetStockObject(iVar4);
    }
    puVar1 = local_8;
    if (pvVar3 != (HGDIOBJ)0x0) {
      local_10 = (uint *)operator_new();
      if (local_10 != (uint *)0x0) {
        local_2c = 0x38;
        FUN_0048f708(local_10,pvVar3,0);
        local_2c = 0x2c;
      }
      puVar1 = local_10;
      local_14 = local_8;
      if (local_8 != (uint *)0x0) {
        local_2c = 0x44;
        local_20 = local_20 + -1;
        OWL::TGdiObject::_dtor(local_8,0);
        operator_delete();
        local_2c = 0x2c;
      }
    }
  }
  local_8 = puVar1;
  if (param_1[6] == 0) {
    if (local_8 != (uint *)0x0) {
      (**(code **)(*(int *)(param_2 + 5) + 0x14))();
    }
  }
  else {
    (**(code **)(*(int *)(param_2 + 5) + 0x14))();
  }
  iVar4 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
  local_2c = 0x14;
  local_40 = (LPSTR)operator_new_array();
  operator_delete_array();
  local_c = local_40;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),local_40,iVar4 + 1);
  local_64[0].left = 0;
  local_64[0].top = 0;
  local_64[0].right = 0;
  local_64[0].bottom = 0;
  FUN_004a7a6c(*param_1,local_64);
  local_44 = param_1[8];
  if (*(char *)((int)param_1 + 0x3e) == '\0') {
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      local_44 = param_1[9];
    }
  }
  else {
    local_44 = param_1[10];
  }
  (**(code **)(*(int *)(param_2 + 5) + 0x24))();
  (**(code **)(*(int *)(param_2 + 5) + 0x20))();
  (**(code **)(*(int *)(param_2 + 5) + 0x50))();
  (**(code **)(*(int *)(param_2 + 5) + 0x20))();
  (**(code **)(*(int *)(param_2 + 5) + 0x24))();
  if ((param_1[6] != 0) || (local_8 != (uint *)0x0)) {
    (**(code **)(*(int *)(param_2 + 5) + 0x1c))();
  }
  local_20 = local_20 + -1;
  operator_delete_array();
  local_18 = local_8;
  if (local_8 != (uint *)0x0) {
    local_2c = 0x68;
    local_20 = local_20 + -2;
    OWL::TGdiObject::_dtor(local_8,0);
    operator_delete();
  }
  *in_FS_OFFSET = local_3c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2d68  OWL::TUrlLink::EvPaint   (121 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_PAINT
void __cdecl OWL::TUrlLink::EvPaint(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  int local_6c [26];
  
  __InitExceptBlockLDTC(0x50a62c);
  FUN_0049af8c(local_6c,*(HWND *)(*param_1 + 0xc));
  (**(code **)(param_1[3] + 0x44))();
  OWL::TPaintDC::_dtor(local_6c,2);
  *in_FS_OFFSET = local_90;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2de4  OWL::TUrlLink::EvMsg_19   (180 bytes)   [owl:response-table message-handler]
//   message 0x0019
uint __cdecl OWL::TUrlLink::EvMsg_19(int *param_1,HDC param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  COLORREF local_58;
  COLORREF local_54;
  COLORREF local_50;
  undefined4 local_4c;
  undefined2 local_3c;
  int local_30;
  int local_28 [9];
  
  __InitExceptBlockLDTC(0x50a66c);
  local_3c = 8;
  FUN_0048d7c8(local_28,param_2);
  local_30 = local_30 + 1;
  local_3c = 0x14;
  if (*(char *)((int)param_1 + 0x3e) == '\0') {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      OWL::TDC::vf9(&local_58,local_28,(uint *)(param_1 + 8));
    }
    else {
      OWL::TDC::vf9(&local_54,local_28,(uint *)(param_1 + 9));
    }
  }
  else {
    OWL::TDC::vf9(&local_50,local_28,(uint *)(param_1 + 10));
  }
  uVar1 = OWL::TWindow::EvMsg_19(*param_1,param_2,param_3,param_4);
  local_30 = local_30 + -1;
  OWL::TDC::_dtor(local_28,2);
  *in_FS_OFFSET = local_4c;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2e98  OWL::TUrlLink::EvLButtonDown   (104 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDOWN
void __cdecl OWL::TUrlLink::EvLButtonDown(int *param_1)

{
  int iVar1;
  
  OWL::TWindow::EvLButtonDown(*param_1);
  iVar1 = (**(code **)(param_1[3] + 0x4c))();
  if (iVar1 < 0x21) {
    MessageBeep(0x30);
    (**(code **)(param_1[3] + 0x50))();
  }
  else {
    ReleaseCapture();
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    FUN_004a3194(param_1,1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2f00  OWL::TUrlLink::EvMouseMove   (162 bytes)   [owl:response-table message-handler]
//   WM_MOUSEMOVE
void __cdecl OWL::TUrlLink::EvMouseMove(int *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  tagRECT local_14;
  
  FUN_004a5774(*param_1);
  if (*(char *)((int)param_1 + 0x3e) == '\0') {
    SetCapture(*(HWND *)(*param_1 + 0xc));
    *(undefined1 *)((int)param_1 + 0x3e) = 1;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  else {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a6c(*param_1,&local_14);
    if ((((*param_3 < local_14.left) || (local_14.right <= *param_3)) || (param_3[1] < local_14.top)
        ) || (local_14.bottom <= param_3[1])) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      ReleaseCapture();
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2fa4  OWL::TUrlLink::EvGetfont   (25 bytes)   [owl:response-table message-handler]
//   WM_GETFONT
undefined4 __cdecl OWL::TUrlLink::EvGetfont(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 0x18);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2fc0  OWL::TUrlLink::EvSetfont   (248 bytes)   [owl:response-table message-handler]
//   WM_SETFONT
void __cdecl OWL::TUrlLink::EvSetfont(int *param_1,undefined4 param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  LOGFONTA local_74;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  uint *local_14;
  uint local_10 [2];
  uint *local_8;
  
  __InitExceptBlockLDTC(0x50a6bc);
  FUN_004a5774(*param_1);
  local_8 = (uint *)param_1[6];
  if (local_8 != (uint *)0x0) {
    local_28 = 0x14;
    local_1c = local_1c + -1;
    OWL::TGdiObject::_dtor(local_8,0);
    operator_delete();
  }
  local_28 = 0x20;
  puVar1 = FUN_0048f708(local_10,param_2,0);
  local_1c = local_1c + 2;
  iVar2 = GetObjectA((HANDLE)*puVar1,0x3c,&local_74);
  cVar3 = iVar2 != 0;
  local_1c = local_1c + -2;
  OWL::TGdiObject::_dtor(local_10,0);
  if (cVar3 != '\0') {
    local_74.lfUnderline = (BYTE)param_1[0xf];
    local_14 = (uint *)operator_new();
    if (local_14 != (uint *)0x0) {
      local_28 = 0x38;
      FUN_0048f7fc(local_14,&local_74);
      local_28 = 0x2c;
    }
    param_1[6] = (int)local_14;
  }
  if (param_3 != '\0') {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a30b8  OWL::TUrlLink::EvGetDlgCode   (10 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
undefined4 __stdcall OWL::TUrlLink::EvGetDlgCode(void)

{
  return 0x104;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a30c4  OWL::TUrlLink::vf18   (205 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TUrlLink::vf18(int *param_1)

{
  LPSTR lpBuffer;
  HMODULE hInstance;
  HCURSOR hIcon;
  HICON pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x50a720);
  FUN_004a7bfc(*param_1,*(int *)(*param_1 + 0x70),0x3f8);
  if (*(int *)(*param_1 + 0x58) == 0) {
    lpBuffer = (LPSTR)operator_new_array();
    GetWindowsDirectoryA(lpBuffer,0x104);
    FUN_004dc8e8(lpBuffer,"\\winhlp32.exe");
    hInstance = LoadLibraryA(lpBuffer);
    if (hInstance != (HMODULE)0x0) {
      hIcon = LoadCursorA(hInstance,(LPCSTR)0x6a);
      if (hIcon != (HCURSOR)0x0) {
        pHVar1 = CopyIcon(hIcon);
        *(HICON *)(*param_1 + 0x58) = pHVar1;
      }
      FreeLibrary(hInstance);
    }
    operator_delete_array();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a3318  OWL::TUrlLink::vf19   (2799 bytes)   [rtti:vtable virtual slot 19]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl OWL::TUrlLink::vf19(undefined4 param_1,uint *param_2,UINT param_3)

{
  uint uVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_444 [248];
  undefined4 local_34c;
  int *local_33c;
  undefined1 local_324 [248];
  undefined4 local_22c;
  undefined4 local_21c;
  int local_20c;
  int local_208;
  undefined1 *local_204;
  undefined4 local_200;
  LPCSTR local_1fc;
  LPCSTR local_1f8;
  int *local_1f4;
  uint local_1f0;
  undefined1 local_1e9;
  undefined1 *local_1e8;
  undefined4 local_1e4;
  int *local_1e0;
  int *local_1dc;
  int *local_1d8;
  int *local_1d4;
  int *local_1d0;
  uint local_1cc;
  undefined1 *local_1c8;
  int *local_1c4;
  int *local_1c0;
  uint local_1bc;
  int *local_1b8;
  undefined1 *local_1b4;
  int *local_1b0;
  undefined4 local_1ac;
  uint *local_1a0;
  uint local_19c;
  uint local_198;
  undefined1 local_191;
  uint local_190;
  undefined1 *local_18c;
  undefined4 local_188;
  int *local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  int *local_174;
  uint local_170;
  undefined1 *local_16c;
  int *local_168;
  int *local_164;
  uint local_160;
  int *local_15c;
  undefined1 *local_158;
  int *local_154;
  undefined4 local_150;
  uint *local_144;
  uint local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  int *local_12c;
  undefined1 *local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  int *local_110;
  undefined4 *local_104;
  uint local_100;
  undefined4 *local_f4;
  undefined4 local_e8;
  undefined2 local_d8;
  int local_cc;
  undefined1 local_c4 [8];
  int *local_bc;
  undefined **local_b4 [2];
  undefined1 local_ac [8];
  int *local_a4;
  undefined1 local_9c [8];
  int *local_94;
  undefined **local_8c [2];
  undefined1 local_84 [8];
  int *local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined4 local_54 [6];
  undefined4 local_3c [6];
  undefined1 local_24 [8];
  LPCSTR local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x50a85c);
  uVar1 = FUN_004cb224();
  if (0x20 < uVar1) goto LAB_004a3df5;
  local_d8 = 0x14;
  std::string::string_from_cstr((int)local_14,(uint *)&DAT_0050a21e /* ".htm" */);
  local_cc = local_cc + 1;
  local_d8 = 0x20;
  iVar4 = local_c;
  puVar2 = FUN_004876f0();
  local_f4 = FUN_00487a14(local_3c,puVar2,iVar4);
  local_cc = local_cc + 1;
  std::string::string_from_cstr((int)local_24,(uint *)local_f4[1]);
  OWL::TRegValue::_dtor((int)local_3c,2);
  local_d8 = 8;
  if (*(int *)(local_1c + -4) != 0) {
    FUN_004cf384((int)local_14,(int)local_24);
    local_100 = *(uint *)(local_c + -4);
    pcVar3 = strlen((uint *)"\\shell\\open\\command");
    FUN_004cfad4((int)local_14,local_100,0,0x50a223,(uint)pcVar3,0,(uint)pcVar3);
    local_d8 = 0x2c;
    iVar4 = local_c;
    puVar2 = FUN_004876f0();
    local_104 = FUN_00487a14(local_54,puVar2,iVar4);
    local_cc = local_cc + 1;
    FUN_004cf41c((int)local_24,(uint *)local_104[1]);
    local_cc = local_cc + -1;
    OWL::TRegValue::_dtor((int)local_54,2);
    if (*(int *)(local_1c + -4) != 0) {
      local_d8 = 0x44;
      iVar4 = std::string::string_from_cstr((int)local_64,(uint *)&DAT_0050a237 /* ""%1"" */);
      local_cc = local_cc + 1;
      uVar1 = FUN_004d7be4((int)local_24,*(byte **)(iVar4 + 8),0,*(int *)(*(int *)(iVar4 + 8) + -4))
      ;
      local_cc = local_cc + -1;
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          local_110 = (int *)(local_5c + -0xc);
          if (local_110 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_110 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_110 = *local_110 + -1;
            iVar4 = *local_110 + 1;
          }
          if (iVar4 != 0) goto LAB_004a3564;
        }
        local_114 = local_5c + -0xc;
        local_118 = local_5c + -0xc;
        operator_delete();
        local_11c = 0;
        local_5c = 0;
        local_120 = local_64;
        local_21c = 0;
      }
LAB_004a3564:
      local_d8 = 0x38;
      if (uVar1 == 0xffffffff) {
        local_d8 = 0x5c;
        iVar4 = std::string::string_from_cstr((int)local_74,(uint *)&DAT_0050a23c);
        local_cc = local_cc + 1;
        uVar1 = FUN_004d7be4((int)local_24,*(byte **)(iVar4 + 8),0,
                             *(int *)(*(int *)(iVar4 + 8) + -4));
        local_cc = local_cc + -1;
        if (local_6c != 0) {
          if (*(int *)(local_6c + -0xc) != -1) {
            local_12c = (int *)(local_6c + -0xc);
            if (local_12c == &DAT_00513d58) {
              iVar4 = 1;
            }
            else if (local_12c == &DAT_00513d58) {
              iVar4 = 1;
            }
            else {
              *local_12c = *local_12c + -1;
              iVar4 = *local_12c + 1;
            }
            if (iVar4 != 0) goto LAB_004a365a;
          }
          local_130 = local_6c + -0xc;
          local_134 = local_6c + -0xc;
          operator_delete();
          local_138 = 0;
          local_6c = 0;
          local_13c = local_74;
          local_22c = 0;
        }
LAB_004a365a:
        local_d8 = 0x38;
        if (uVar1 != 0xffffffff) {
          local_140 = DAT_005140ac;
          if (*(uint *)(local_1c + -4) < uVar1) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar2 = &LAB_004084c8;
            uVar6 = 0;
            local_d8 = 0x80;
            local_144 = (uint *)FUN_004dc320(local_324,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            std::string::string_from_cstr((int)local_9c,local_144);
            local_cc = local_cc + 2;
            local_8c[0] = &std::logic_error::vftable;
            local_150 = 0;
            local_7c = (int *)0x0;
            local_d8 = 0x8c;
            if (local_94[-3] == -1 || local_94[-3] + 1 < 0) {
              local_160 = local_94[-1];
              local_168 = std::string::__getRep(local_84,local_160,local_160);
              local_33c = local_168 + 3;
              local_16c = local_84;
              local_170 = local_160;
              local_174 = local_94;
              local_178 = local_33c;
              local_164 = local_33c;
              local_7c = local_33c;
              memcpy(local_33c,local_94,local_160);
            }
            else {
              local_154 = local_94;
              local_7c = local_94;
              local_158 = local_84;
              local_15c = local_94 + -3;
              if (local_15c != &DAT_00513d58) {
                *local_15c = *local_15c + 1;
              }
            }
            local_d8 = 0x80;
            local_8c[0] = &std::out_of_range::vftable;
            local_cc = local_cc + 2;
            if (local_94 != (int *)0x0) {
              if (local_94[-3] != -1) {
                local_17c = local_94 + -3;
                if (local_17c == &DAT_00513d58) {
                  iVar4 = 1;
                }
                else if (local_17c == &DAT_00513d58) {
                  iVar4 = 1;
                }
                else {
                  *local_17c = *local_17c + -1;
                  iVar4 = *local_17c + 1;
                }
                if (iVar4 != 0) goto LAB_004a38e8;
              }
              local_180 = local_94 + -3;
              local_184 = local_94 + -3;
              operator_delete();
              local_188 = 0;
              local_94 = (int *)0x0;
              local_18c = local_9c;
              local_34c = 0;
            }
LAB_004a38e8:
            local_d8 = 0x74;
            FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_8c,uVar6,puVar2,uVar7,uVar8,uVar9,uVar10);
          }
          local_190 = *(int *)(local_1c + -4) - uVar1;
          local_191 = 0;
          local_198 = local_190;
          if (local_140 < local_190) {
            local_198 = local_140;
          }
          FUN_004cfad4((int)local_24,uVar1,local_198,(uint)&local_191,0,0,0);
        }
      }
      else {
        local_19c = DAT_005140ac;
        if (*(uint *)(local_1c + -4) < uVar1) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar2 = &LAB_004084c8;
          uVar6 = 0;
          local_d8 = 0xbc;
          local_1a0 = (uint *)FUN_004dc320(local_444,PTR_s_string_index_out_of_range_in_fun_00516d2c
                                          );
          std::string::string_from_cstr((int)local_c4,local_1a0);
          local_cc = local_cc + 2;
          local_b4[0] = &std::logic_error::vftable;
          local_1ac = 0;
          local_a4 = (int *)0x0;
          local_d8 = 200;
          if (local_bc[-3] == -1 || local_bc[-3] + 1 < 0) {
            local_1bc = local_bc[-1];
            local_1c4 = std::string::__getRep(local_ac,local_1bc,local_1bc);
            local_1d4 = local_1c4 + 3;
            local_1c8 = local_ac;
            local_1cc = local_1bc;
            local_1d0 = local_bc;
            local_1c0 = local_1d4;
            local_a4 = local_1d4;
            memcpy(local_1d4,local_bc,local_1bc);
          }
          else {
            local_1b0 = local_bc;
            local_a4 = local_bc;
            local_1b4 = local_ac;
            local_1b8 = local_bc + -3;
            if (local_1b8 != &DAT_00513d58) {
              *local_1b8 = *local_1b8 + 1;
            }
          }
          local_d8 = 0xbc;
          local_b4[0] = &std::out_of_range::vftable;
          local_cc = local_cc + 2;
          if (local_bc != (int *)0x0) {
            if (local_bc[-3] != -1) {
              local_1d8 = local_bc + -3;
              if (local_1d8 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else if (local_1d8 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else {
                *local_1d8 = *local_1d8 + -1;
                iVar4 = *local_1d8 + 1;
              }
              if (iVar4 != 0) goto LAB_004a3bf2;
            }
            local_1dc = local_bc + -3;
            local_1e0 = local_bc + -3;
            operator_delete();
            local_1e4 = 0;
            local_bc = (int *)0x0;
            local_1e8 = local_c4;
          }
LAB_004a3bf2:
          local_d8 = 0xb0;
          FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_b4,uVar6,puVar2,uVar7,uVar8,uVar9,uVar10);
        }
        uVar7 = *(int *)(local_1c + -4) - uVar1;
        local_1e9 = 0;
        if (local_19c < uVar7) {
          uVar7 = local_19c;
        }
        FUN_004cfad4((int)local_24,uVar1,uVar7,(uint)&local_1e9,0,0,0);
      }
      uVar1 = *(uint *)(local_1c + -4);
      pcVar3 = strlen((uint *)&DAT_0050a262);
      FUN_004cfad4((int)local_24,uVar1,0,0x50a262,(uint)pcVar3,0,(uint)pcVar3);
      local_1f0 = *(uint *)(local_1c + -4);
      pcVar3 = strlen(param_2);
      FUN_004cfad4((int)local_24,local_1f0,0,(uint)param_2,(uint)pcVar3,0,(uint)pcVar3);
      uVar1 = WinExec(local_1c,param_3);
      local_d8 = 8;
    }
  }
  local_cc = local_cc + -1;
  if (local_1c != (LPCSTR)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      local_1f4 = (int *)(local_1c + -0xc);
      if (local_1f4 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_1f4 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_1f4 = *local_1f4 + -1;
        iVar4 = *local_1f4 + 1;
      }
      if (iVar4 != 0) goto LAB_004a3d57;
    }
    local_1f8 = local_1c + -0xc;
    local_1fc = local_1c + -0xc;
    operator_delete();
    local_200 = 0;
    local_1c = (LPCSTR)0x0;
    local_204 = local_24;
  }
LAB_004a3d57:
  local_d8 = 8;
  local_cc = local_cc + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_004a3df5;
    }
    local_208 = local_c + -0xc;
    local_20c = local_c + -0xc;
    operator_delete();
  }
LAB_004a3df5:
  *in_FS_OFFSET = local_e8;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a3e08  OWL::TUrlLink::vf20   (581 bytes, 2 ranges)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TUrlLink::vf20(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  CHAR local_160 [264];
  int local_58;
  undefined1 *local_54;
  undefined4 local_50;
  LPCSTR local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  __InitExceptBlockLDTC(0x50a980);
  switch(param_2) {
  case 0:
    uVar2 = 0x7ff9;
    break;
  default:
    local_38 = 8;
    FUN_004c0e0c((int)local_14,*(int *)(*param_1 + 0x70),0x7fd8);
    local_2c = local_2c + 1;
    wsprintfA(local_160,local_c,param_2);
    local_2c = local_2c + -1;
    if (local_c != (LPCSTR)0x0) {
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
        if (iVar1 != 0) goto LAB_004a3fc1;
      }
      local_4c = local_c + -0xc;
      operator_delete();
      local_50 = 0;
      local_c = (LPCSTR)0x0;
      local_54 = local_14;
    }
LAB_004a3fc1:
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    *in_FS_OFFSET = local_48;
    return;
  case 2:
    uVar2 = 0x7fcf;
    break;
  case 3:
    uVar2 = 0x7fce;
    break;
  case 5:
    uVar2 = 0x7fd1;
    break;
  case 8:
    uVar2 = 0x7ff9;
    break;
  case 0xb:
    uVar2 = 0x7fd0;
    break;
  case 0x1a:
    uVar2 = 0x7fd7;
    break;
  case 0x1b:
    uVar2 = 0x7fd2;
    break;
  case 0x1c:
    uVar2 = 0x7fd5;
    break;
  case 0x1d:
    uVar2 = 0x7fd4;
    break;
  case 0x1e:
    uVar2 = 0x7fd3;
    break;
  case 0x1f:
    uVar2 = 0x7fd6;
    break;
  case 0x20:
    uVar2 = 0x7fcf;
  }
  local_38 = 0x20;
  FUN_004c0e0c((int)local_24,*(int *)(*param_1 + 0x70),uVar2);
  local_2c = local_2c + 1;
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  local_2c = local_2c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
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
      if (iVar1 != 0) goto LAB_004a4095;
    }
    local_58 = local_1c + -0xc;
    operator_delete();
  }
LAB_004a4095:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a42fc  OWL::TUrlLink::Streamer::vf1   (201 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TUrlLink::Streamer::vf1(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004a43c8(*(int *)(param_1 + 8),param_2);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = 0;
  FUN_00499da0(param_2,*(int *)(param_1 + 8) + 0x20,4);
  FUN_00499da0(param_2,*(int *)(param_1 + 8) + 0x24,4);
  FUN_00499da0(param_2,*(int *)(param_1 + 8) + 0x28,4);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3c) = iVar2 != 0;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3d) = iVar2 != 0;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3e) = iVar2 != 0;
  (**(code **)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x48))();
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4420  OWL::TUrlLink::Streamer::vf2   (187 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TUrlLink::Streamer::vf2(int param_1,int *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004a44dc(*(int *)(param_1 + 8),param_2);
  local_8 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x20);
  FUN_0049a294(param_2,&local_8,4);
  local_c = *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
  FUN_0049a294(param_2,&local_c,4);
  local_10 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x28);
  FUN_0049a294(param_2,&local_10,4);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  FUN_0049a31c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4684  OWL::TUrlLink::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TUrlLink::Streamer::vf3(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a4690  OWL::TUrlLink::vf12   (11 bytes)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TUrlLink::vf12(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

} // namespace tea
