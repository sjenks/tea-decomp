// TSBuild.exe — runtime / library code "OWL_TDialog"
// 15 functions, 0x0043f5e0..0x0044051c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043f5e0  OWL::TDialog::vf14   (70 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TDialog::vf14(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[1],(int *)&DAT_0047fe40,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f8f4  OWL::TDialog::~TDialog   (369 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDialog::_dtor
void __cdecl OWL::TDialog::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48005c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TDialog::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_0047ffa4;
    *(undefined ***)param_1[2] = &PTR_LAB_0047ffb0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047ffbc;
    if (param_1 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_1;
    }
    if ((*(byte *)(iVar1 + 0x76) & 0xf) == 0) {
      if ((short)((uint)param_1[4] >> 0x10) != 0) {
        operator_delete_array();
      }
    }
    else {
      if (param_1 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_1;
      }
      if ((*(byte *)(iVar1 + 0x76) & 10) != 0) {
        if (param_1 == (int *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *param_1;
        }
        if ((*(byte *)(iVar1 + 0x76) & 2) == 0) {
          if (param_1 == (int *)0x0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *param_1;
          }
          if ((*(byte *)(iVar1 + 0x76) & 1) != 0) {
            hMem = GlobalHandle((LPCVOID)param_1[4]);
            GlobalUnlock(hMem);
          }
        }
        else {
          GlobalFree((HGLOBAL)param_1[4]);
        }
      }
    }
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 8,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fa68  OWL::TDialog::vf7   (146 bytes)   [rtti:vtable virtual slot 7]
bool __cdecl OWL::TDialog::vf7(int *param_1,LPMSG param_2)

{
  bool bVar1;
  HWND hWnd;
  HWND hWnd_00;
  HWND pHVar2;
  BOOL BVar3;
  
  bVar1 = OWL::TWindow::vf10(*param_1,param_2);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if (*(int *)(*param_1 + 0xc) == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = GetParent(*(HWND *)(*param_1 + 0xc));
    }
    if ((((hWnd != (HWND)0x0) && (hWnd_00 = GetParent(hWnd), hWnd_00 != (HWND)0x0)) &&
        (pHVar2 = (HWND)SendMessageA(hWnd_00,0x229,0,0), hWnd == pHVar2)) &&
       (BVar3 = TranslateMDISysAccel(hWnd_00,param_2), BVar3 != 0)) {
      return true;
    }
    BVar3 = IsDialogMessageA(*(HWND *)(*param_1 + 0xc),param_2);
    bVar1 = BVar3 != 0;
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fafc  OWL::TDialog::vf12   (31 bytes)   [rtti:vtable virtual slot 12]
char * __cdecl OWL::TDialog::vf12(int *param_1)

{
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x4d) != '\0') {
    return "BorDlg";
  }
  return (char *)0x8002;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fb1c  OWL::TDialog::vf13   (166 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TDialog::vf13(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x4d) != '\0') {
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x4e) + 0x11))();
  }
  uVar1 = FUN_004502e8();
  if (uVar1 == 0) {
    iVar2 = FUN_004502e8();
    uVar1 = (uint)(iVar2 != 0);
  }
  uVar3 = (**(code **)(param_1[3] + 0x30))(uVar1);
  *(undefined4 *)(param_2 + 0x24) = uVar3;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fc98  OWL::TDialog::vf1   (230 bytes)   [rtti:vtable virtual slot 1]
bool __cdecl OWL::TDialog::vf1(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  LONG dwNewLong;
  int local_20 [3];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if (param_2 != 0xc) {
    if (param_2 == 0x30) {
      if ((*(byte *)(*param_1 + 0x74) & 0x20) == 0) {
        local_20[0] = param_2;
        local_20[1] = 0;
        local_14 = 0;
        cVar2 = (**(code **)(param_1[3] + 0x38))();
        if (cVar2 != '\0') {
          iVar3 = FUN_00422b40(param_1[1],(int)local_20);
          return iVar3 == 0;
        }
      }
      return true;
    }
    if (1 < param_2 - 0x85U) {
      if (param_2 != 0x110) {
        return false;
      }
      uVar1 = (**(code **)(param_1[3] + 8))();
      return (bool)uVar1;
    }
  }
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') {
    local_8 = param_3;
    local_c = param_2;
    local_10 = *(undefined4 *)(*param_1 + 0xc);
    dwNewLong = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x35))();
    SetWindowLongA(*(HWND *)(*param_1 + 0xc),0,dwNewLong);
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fe6c  OWL::TDialog::vf3   (119 bytes)   [rtti:vtable virtual slot 3]
undefined4 __cdecl OWL::TDialog::vf3(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xffefffff;
  cVar1 = (**(code **)(*(int *)(*param_1 + 8) + 0xc))();
  if (cVar1 == '\0') {
    FUN_004391f0(*param_1,0x7fed);
  }
  DAT_0047fe3c = param_1;
  FUN_00437a30(*param_1);
  FUN_0043fe3c(param_1);
  (**(code **)(param_1[3] + 0x10))();
  if (*(int *)(*param_1 + 0xc) == 0) {
    FUN_004391f0(*param_1,0x7feb);
  }
  uVar2 = FUN_004384cc(*param_1,'\0');
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fee4  OWL::TDialog::vf4   (124 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TDialog::vf4(int *param_1,LPCDLGTEMPLATEA param_2)

{
  HWND pHVar1;
  
  if ((*(byte *)(*param_1 + 0x76) & 0xf) == 0) {
    if (*(int *)(*param_1 + 0x14) == 0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = *(HWND *)(*(int *)(*param_1 + 0x14) + 0xc);
    }
    pHVar1 = CreateDialogParamA(*(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8),(LPCSTR)param_2,pHVar1
                                ,FUN_0043fd80,param_1[5]);
  }
  else {
    if (*(int *)(*param_1 + 0x14) == 0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = *(HWND *)(*(int *)(*param_1 + 0x14) + 0xc);
    }
    pHVar1 = CreateDialogIndirectParamA
                       (*(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8),param_2,pHVar1,FUN_0043fd80,
                        param_1[5]);
  }
  *(HWND *)(*param_1 + 0xc) = pHVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ff60  OWL::TDialog::vf5   (95 bytes)   [rtti:vtable virtual slot 5]
int __cdecl OWL::TDialog::vf5(int *param_1)

{
  char cVar1;
  int iVar2;
  
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x100000;
  cVar1 = (**(code **)(*(int *)(*param_1 + 8) + 0xc))();
  if (cVar1 == '\0') {
    FUN_004391f0(*param_1,0x7fed);
  }
  DAT_0047fe3c = param_1;
  FUN_0043fe3c(param_1);
  iVar2 = (**(code **)(param_1[3] + 0x18))();
  if (iVar2 == -1) {
    FUN_004391f0(*param_1,0x7fea);
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ffc0  OWL::TDialog::vf6   (146 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TDialog::vf6(int *param_1)

{
  HWND pHVar1;
  
  if ((*(byte *)(*param_1 + 0x76) & 0x20) != 0) {
    OWL::TWindow::vf8(*param_1);
    return;
  }
  if ((*(byte *)(*param_1 + 0x76) & 0xf) != 0) {
    if (*(int *)(*param_1 + 0x14) == 0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = *(HWND *)(*(int *)(*param_1 + 0x14) + 0xc);
    }
    DialogBoxIndirectParamA
              (*(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8),(LPCDLGTEMPLATEA)param_1[4],pHVar1,
               FUN_0043fd80,param_1[5]);
    return;
  }
  if (*(int *)(*param_1 + 0x14) == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  DialogBoxParamA(*(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8),(LPCSTR)param_1[4],pHVar1,
                  FUN_0043fd80,param_1[5]);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440188  OWL::TDialog::vf2   (45 bytes)   [rtti:vtable virtual slot 2]
undefined4 __cdecl OWL::TDialog::vf2(int *param_1)

{
  undefined4 uVar1;
  
  FUN_004384cc(*param_1,'\0');
  FUN_00440054(param_1);
  uVar1 = (**(code **)(param_1[3] + 0x2c))();
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x20;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004401b8  OWL::TDialog::vf11   (65 bytes)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TDialog::vf11(int *param_1)

{
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') {
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x1d))();
  }
  FUN_004402b8(param_1,*(uint **)(*param_1 + 0x10));
  OWL::TWindow::vf30(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004401fc  OWL::TDialog::vf8   (85 bytes)   [rtti:vtable virtual slot 8]
void __cdecl OWL::TDialog::vf8(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((*(byte *)(*param_1 + 0x76) & 0x10) == 0) {
    OWL::TWindow::vf9(*param_1,param_2);
  }
  else {
    iVar3 = *param_1;
    cVar2 = (**(code **)(*(int *)(iVar3 + 8) + 0x3c))();
    if (cVar2 != '\0') {
      iVar1 = *param_1;
      (**(code **)(*(int *)(iVar1 + 8) + 0x5c))(iVar1,*(int *)(iVar1 + 8),iVar3,iVar1,0);
      (**(code **)(param_1[3] + 0x24))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440254  OWL::TDialog::vf9   (100 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TDialog::vf9(int *param_1,INT_PTR param_2)

{
  if ((((*(byte *)(*param_1 + 0x76) & 0x20) == 0) && ((*(byte *)(*param_1 + 0x76) & 0x10) != 0)) &&
     (*(int *)(*param_1 + 0xc) != 0)) {
    FUN_00438260(*param_1,(undefined*)FUN_00437880);
    EndDialog(*(HWND *)(*param_1 + 0xc),param_2);
  }
  else {
    OWL::TWindow::vf6(*param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044051c  OWL::TDialog::vf10   (114 bytes)   [rtti:vtable virtual slot 10]
undefined4 __cdecl OWL::TDialog::vf10(int *param_1,int param_2)

{
  HWND hWnd;
  LONG LVar1;
  BOOL BVar2;
  undefined4 local_14 [4];
  
  OWL::TWindow::vf11(*param_1,param_2);
  if (param_2 == 0) {
    hWnd = GetWindow(*(HWND *)(*param_1 + 0xc),5);
    while( true ) {
      BVar2 = IsWindow(hWnd);
      if (BVar2 == 0) break;
      LVar1 = GetWindowLongA(hWnd,-0xc);
      FUN_00440398(local_14,LVar1,hWnd);
      FUN_00436810((undefined4 *)*param_1,*(HWND *)(*param_1 + 0xc),local_14);
      hWnd = GetWindow(hWnd,2);
    }
  }
  return 0;
}

} // namespace tea
