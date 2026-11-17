// TSBuild.exe — runtime / library code "OWL_TDecoratedFrame"
// 18 functions, 0x0043dee0..0x0043f3a4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043dee0  OWL::TDecoratedFrame::Find   (88 bytes)   [owl:response-table response-table-find]
//   also: OWL::TDecoratedFrame::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TDecoratedFrame::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[2],(int *)&OWL::TDecoratedFrame::__entries,param_2,param_3);
  if ((((char)uVar1 == '\0') &&
      (uVar1 = OWL::TFrameWindow::Find((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) &&
     (uVar1 = OWL::TLayoutWindow::Find(param_1 + 1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043df5c  OWL::TDecoratedFrame::~TDecoratedFrame   (384 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDecoratedFrame::_dtor
void __cdecl OWL::TDecoratedFrame::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47fc50);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x35) = &OWL::TDecoratedFrame::vftable;
    param_1[4] = (int)&PTR_LAB_0047fd30;
    *(undefined ***)param_1[2] = &PTR_LAB_0047fd48;
    *(undefined ***)param_1[3] = &PTR_LAB_0047fd54;
    *(undefined ***)(param_1[1] + 8) = &PTR_LAB_0047fd60;
    *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_0047fdf0;
    operator_delete();
    operator_delete();
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x12;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x12;
    OWL::TLayoutWindow::_dtor(param_1 + 1,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x12;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x12;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
      OWL::TFrameWindow::_dtor((int *)((int)param_1 + 0xe1),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x57),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x4f),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e0dc  OWL::TDecoratedFrame::vf9   (133 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TDecoratedFrame::vf9(int *param_1)

{
  int iVar1;
  int *piVar2;
  tagRECT *ptVar3;
  LONG *pLVar4;
  tagRECT local_24;
  LONG local_14 [2];
  int local_c;
  int local_8;
  
  OWL::TFrameWindow::vf16((int *)*param_1);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  FUN_004386fc(param_1[1],&local_24);
  ptVar3 = &local_24;
  pLVar4 = local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar4 = ptVar3->left;
    ptVar3 = (tagRECT *)&ptVar3->top;
    pLVar4 = pLVar4 + 1;
  }
  param_1[5] = local_c;
  param_1[6] = local_8;
  piVar2 = (int *)param_1[1];
  if (((*(byte *)(piVar2 + 0x1d) & 0x10) != 0) && (*(int *)(*param_1 + 0x25) != 0)) {
    piVar2 = param_1;
    (**(code **)(*(int *)((int)param_1 + 0x35) + 0x20))();
  }
  (**(code **)(param_1[4] + 4))(param_1 + 1,param_1[4],piVar2,param_1 + 1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e164  OWL::TDecoratedFrame::vf10   (52 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TDecoratedFrame::vf10(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  OWL::TFrameWindow::vf17(piVar2);
  if (*(int *)(*param_1 + 0x25) != 0) {
    iVar1 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x14))
                      (*param_1,*(int *)((int)param_1 + 0x35),piVar2,param_1);
    if (iVar1 != 0) {
      FUN_00456024(*(undefined4 *)(*param_1 + 0x25),iVar1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e198  OWL::TDecoratedFrame::vf4   (419 bytes)   [rtti:vtable virtual slot 4]
int __cdecl OWL::TDecoratedFrame::vf4(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int *local_68 [2];
  int *local_5d;
  int *local_52;
  int *local_47;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x47fc84);
  FUN_0042a154((undefined4*)local_68);
  FUN_0042925c((int)(param_1 + 1),*(int *)(*param_1 + 0x15),(undefined4*)local_68);
  if ((param_2 == (int *)0x0) &&
     (param_2 = (int *)operator_new(), local_8 = param_2, param_2 != (int *)0x0)) {
    local_24 = 0x14;
    FUN_00435c28(param_2,0,param_1[1],(uint *)&DAT_0047fbdc,0);
    local_24 = 8;
    param_2 = local_8;
  }
  (**(code **)(param_2[2] + 0x34))();
  FUN_0042918c((int)(param_1 + 1),(int)param_2,(undefined4*)local_68);
  piVar1 = (int *)(**(code **)(*(int *)(*param_1 + 0xc) + 0x18))();
  if (*(int *)(param_1[1] + 0x7a) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(int *)(*(int *)(param_1[1] + 0x7a) + 0x7e);
  }
  iVar3 = local_38;
  if (local_38 != 0) {
    do {
      local_3c = iVar3;
      uVar2 = FUN_0042925c((int)(param_1 + 1),local_3c,(undefined4*)local_68);
      if ((char)uVar2 != '\0') {
        if (piVar1 == local_68[0]) {
          local_68[0] = param_2;
        }
        if (piVar1 == local_5d) {
          local_5d = param_2;
        }
        if (piVar1 == local_52) {
          local_52 = param_2;
        }
        if (piVar1 == local_47) {
          local_47 = param_2;
        }
        FUN_0042918c((int)(param_1 + 1),local_3c,(undefined4*)local_68);
      }
      local_3c = *(int *)(local_3c + 0x7e);
      iVar3 = local_3c;
    } while (local_3c != local_38);
  }
  *(undefined1 *)((int)param_1 + 0x3e) = 1;
  iVar3 = OWL::TFrameWindow::vf7((int *)*param_1,param_2);
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  if (((short)((uint)*(undefined4 *)(iVar3 + 0x10) >> 0x10) != 0) &&
     (**(char **)(iVar3 + 0x10) == '\a')) {
    (**(code **)(*(int *)(iVar3 + 8) + 0x18))();
    local_10 = iVar3;
    if (iVar3 != 0) {
      local_c = *(undefined4 *)(iVar3 + 8);
      local_24 = 0x2c;
      (*(code *)**(undefined4 **)(iVar3 + 8))();
      local_24 = 0x20;
    }
    iVar3 = 0;
  }
  (**(code **)(param_1[4] + 4))();
  *in_FS_OFFSET = local_34;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e33c  OWL::TDecoratedFrame::vf11   (64 bytes)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TDecoratedFrame::vf11(int *param_1,int param_2)

{
  if ((param_2 == *(int *)(*param_1 + 0x15)) && (*(char *)((int)param_1 + 0x3e) == '\0')) {
    (**(code **)(*(int *)((int)param_1 + 0x35) + 0x10))();
  }
  OWL::TFrameWindow::vf8((int *)*param_1,param_2);
  OWL::TLayoutWindow::vf2(param_1 + 1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e37c  OWL::TDecoratedFrame::vf3   (110 bytes)   [rtti:vtable virtual slot 3]
undefined4 __cdecl OWL::TDecoratedFrame::vf3(int *param_1,LPMSG param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1[1] + 0x7a) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1[1] + 0x7a) + 0x7e);
  }
  iVar4 = iVar5;
  if (iVar5 != 0) {
    do {
      if ((((iVar4 != *(int *)(*param_1 + 0x15)) && (*(int *)(iVar4 + 0xc) != 0)) &&
          (uVar2 = GetWindowLongA(*(HWND *)(iVar4 + 0xc),-0x10), (uVar2 & 0x10000000) != 0)) &&
         (uVar3 = (**(code **)(*(int *)(iVar4 + 8) + 0x28))(), (char)uVar3 != '\0')) {
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      piVar1 = (int *)(iVar4 + 0x7e);
      iVar4 = *piVar1;
    } while (iVar5 != *piVar1);
  }
  uVar3 = OWL::TFrameWindow::vf10((int *)*param_1,param_2);
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e3ec  OWL::TDecoratedFrame::vf2   (437 bytes)   [rtti:vtable virtual slot 2]
char * __cdecl OWL::TDecoratedFrame::vf2(int *param_1,uint param_2,uint *param_3,char *param_4,int param_5)

{
  HMENU hMenu;
  BOOL BVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  CHAR local_108 [256];
  char *local_8;
  
  if (param_2 == 0xffffffff) {
    return (char *)0x0;
  }
  pcVar4 = (char *)0x0;
  if (param_5 == 2) {
    hMenu = GetMenu(*(HWND *)(param_1[1] + 0xc));
    BVar1 = IsMenu(hMenu);
    if (BVar1 != 0) {
      GetMenu(*(HWND *)(param_1[1] + 0xc));
      iVar2 = FUN_0045032c();
      if (iVar2 != 0) {
        pcVar4 = thunk_FUN_004676d0((char *)param_3,'\t');
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = thunk_FUN_004676d0((char *)param_3,'\b');
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strlen(param_3);
        while ((pcVar4 = pcVar4 + -1, -1 < (int)pcVar4 &&
               (*(char *)((int)param_3 + (int)pcVar4) == '.'))) {
          *(char *)((int)param_3 + (int)pcVar4) = '\0';
        }
        iVar2 = -1;
        do {
          iVar2 = iVar2 + 1;
          if (*(char *)((int)param_3 + iVar2) == '\0') goto LAB_0043e4b8;
        } while (*(char *)((int)param_3 + iVar2) != '&');
        do {
          *(undefined1 *)((int)param_3 + iVar2) = *(undefined1 *)((int)param_3 + iVar2 + 1);
          iVar2 = iVar2 + 1;
        } while (*(char *)((int)param_3 + iVar2) != '\0');
LAB_0043e4b8:
        pcVar4 = strlen(param_3);
        goto LAB_0043e53e;
      }
    }
    iVar2 = FUN_0044f0b4(*(int *)(param_1[1] + 0x70),param_2,local_108,0x100);
    if ((iVar2 == 0) && (*(int *)(*param_1 + 0x1d) != 0)) {
      iVar2 = FUN_0044f0b4(*(int *)(*param_1 + 0x1d),param_2,local_108,0x100);
    }
    if ((iVar2 != 0) && (local_8 = thunk_FUN_004676d0(local_108,'\n'), local_8 != (char *)0x0)) {
      FUN_004679ec(param_3,(uint *)(local_8 + 1),param_4);
      pcVar4 = strlen(param_3);
    }
  }
LAB_0043e53e:
  if (param_5 == 1) {
    pcVar4 = (char *)FUN_0044f0b4(*(int *)(param_1[1] + 0x70),param_2,(LPSTR)param_3,(int)param_4);
    if ((pcVar4 == (char *)0x0) && (*(int *)(*param_1 + 0x1d) != 0)) {
      pcVar4 = (char *)FUN_0044f0b4(*(int *)(*param_1 + 0x1d),param_2,(LPSTR)param_3,(int)param_4);
    }
    if ((pcVar4 != (char *)0x0) &&
       (pcVar3 = thunk_FUN_004676d0((char *)param_3,'\n'), pcVar3 != (char *)0x0)) {
      *pcVar3 = '\0';
      pcVar4 = pcVar3 + (-1 - (int)param_3);
    }
  }
  return pcVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e5a4  OWL::TDecoratedFrame::EvMenuSelect   (229 bytes)   [owl:response-table message-handler]
//   WM_MENUSELECT
void __cdecl OWL::TDecoratedFrame::EvMenuSelect(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  UINT UVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47fccc);
  if (*(char *)(param_1 + 0x39) != '\0') {
    if ((param_3 == 0xffff) && (param_4 == 0)) {
      iVar1 = FUN_0043831c(*(int *)(param_1 + 4));
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      puVar2 = FUN_00468488(iVar1,iVar4,(int *)&DAT_00403c70,(int *)&DAT_0042c594,0);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)(puVar2[6] + 0x6c))();
      }
      *(undefined4 *)(param_1 + 0x3a) = 0;
    }
    else if ((param_3 & 0x10) == 0) {
      if ((param_3 & 0x860) == 0) {
        *(int *)(param_1 + 0x3a) = param_2;
      }
      else {
        *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
      }
    }
    else {
      puVar2 = FUN_0042bc04(local_10,param_4,0);
      UVar3 = FUN_0042bce8((int)puVar2,param_2);
      *(UINT *)(param_1 + 0x3a) = UVar3;
      OWL::TMenu::_dtor(local_10,2);
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e68c  OWL::TDecoratedFrame::EvSize   (46 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __cdecl OWL::TDecoratedFrame::EvSize(undefined4 *param_1,WPARAM param_2,int *param_3)

{
  OWL::TLayoutWindow::EvSize(param_1 + 1,param_2,param_3);
  FUN_0044e228((int *)*param_1,param_2,(LPARAM)param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e6bc  OWL::TDecoratedFrame::EvEnteridle   (179 bytes)   [owl:response-table message-handler]
//   WM_ENTERIDLE
void __cdecl OWL::TDecoratedFrame::EvEnteridle(undefined4 *param_1,int param_2,HWND param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 == 2) && (*(int *)((int)param_1 + 0x3a) != 0)) {
    iVar1 = FUN_0043831c(param_1[1]);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 8);
    }
    puVar3 = FUN_00468488(iVar1,iVar2,(int *)&DAT_00403c70,(int *)&DAT_0042c594,0);
    if (puVar3 != (undefined4 *)0x0) {
      if (*(int *)((int)param_1 + 0x3a) != -1) {
        (**(code **)(*(int *)((int)param_1 + 0x35) + 8))();
      }
      (**(code **)(puVar3[6] + 0x6c))();
    }
    *(undefined4 *)((int)param_1 + 0x3a) = 0;
  }
  OWL::TWindow::EvEnteridle(*(int *)*param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e770  OWL::TDecoratedFrame::vf12   (352 bytes, 2 ranges)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TDecoratedFrame::vf12(int *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  bool bVar5;
  int local_10;
  
  if ((param_3 == (HWND)0x0) && (iVar2 = FUN_0043831c(param_1[1]), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      bVar5 = (*(byte *)(iVar2 + 0x1b) & 0x10) != 0;
    }
    else {
      BVar3 = IsWindowVisible(*(HWND *)(iVar2 + 0xc));
      bVar5 = BVar3 != 0;
    }
    if (bVar5) {
      FUN_00429290((int)(param_1 + 1),iVar2);
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0x18);
      local_10 = 0;
      if ((*(byte *)(iVar2 + 0x75) & 0x80) == 0) {
        FUN_00438220(param_1[1],(undefined*)FUN_0043de35);
      }
      else {
        local_10 = FUN_00438220(param_1[1],(undefined*)FUN_0043de8b);
      }
      if (local_10 == 0) {
        local_10 = *(int *)(*param_1 + 0x15);
      }
      switch((uVar1 & 0xf00) >> 8) {
      case 1:
        FUN_0043e9b0((int)param_1,iVar2,local_10);
        break;
      case 2:
        FUN_0043eb34(param_1,iVar2,local_10);
        break;
      case 3:
        FUN_0043ecf8(param_1,iVar2,local_10);
        break;
      case 4:
        FUN_0043ef34(param_1,iVar2,local_10);
      }
    }
    (**(code **)(param_1[4] + 4))();
    (**(code **)(*(int *)(iVar2 + 8) + 100))();
    uVar4 = 0;
  }
  else {
    uVar4 = OWL::TFrameWindow::vf14((int *)*param_1,param_2,param_3,param_4);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e8e8  OWL::TDecoratedFrame::vf13   (198 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TDecoratedFrame::vf13(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_0041d640,(int *)&DAT_00430bf8,0);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)(*(int *)((int)param_1 + 0x35) + 8))(), iVar2 == 0)) {
    iVar2 = FUN_0043831c(param_1[1]);
    if (iVar2 == 0) {
      OWL::TFrameWindow::vf15((undefined4 *)*param_1,param_2);
    }
    else {
      (**(code **)*param_2)();
      if (*(int *)(iVar2 + 0xc) != 0) {
        IsWindowVisible(*(HWND *)(iVar2 + 0xc));
      }
      (**(code **)(*param_2 + 8))();
    }
  }
  else {
    (**(code **)(*param_2 + 4))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f1b4  OWL::TDecoratedFrame::vf1   (177 bytes, 2 ranges)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TDecoratedFrame::vf1(int *param_1,int param_2,int param_3)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xfffff0ff | param_3 << 8;
  FUN_00438618(param_1[1],0,0x4000000,0);
  (**(code **)(*(int *)(param_2 + 8) + 0x34))();
  FUN_00429290((int)(param_1 + 1),param_2);
  if ((*(byte *)(param_2 + 0x1b) & 0x10) != 0) {
    switch(param_3) {
    case 1:
      FUN_0043e9b0((int)param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 2:
      FUN_0043eb34(param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 3:
      FUN_0043ecf8(param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 4:
      FUN_0043ef34(param_1,param_2,*(int *)(*param_1 + 0x15));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f27c  OWL::TDecoratedFrame::vf5   (121 bytes)   [rtti:vtable virtual slot 5]
undefined4 * __cdecl OWL::TDecoratedFrame::vf5(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_0043831c(*(int *)(param_1 + 4));
  if (iVar1 == 0) {
    iVar1 = FUN_00438220(*(int *)(param_1 + 4),(undefined*)FUN_0043deb4);
    if (iVar1 != 0) {
      iVar1 = FUN_0043831c(iVar1);
      if (iVar1 != 0) goto LAB_0043f2ca;
    }
    puVar2 = (undefined4 *)0x0;
  }
  else {
LAB_0043f2ca:
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 8);
    }
    puVar2 = FUN_00468488(iVar1,iVar3,(int *)&DAT_00403c70,(int *)&DAT_00421464,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f2f8  OWL::TDecoratedFrame::vf8   (105 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TDecoratedFrame::vf8(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x14))();
  if (iVar2 == 0) {
    piVar3 = (int *)(**(code **)(*(int *)((int)param_1 + 0x3f) + 0x10))();
    *(undefined4 *)(*piVar3 + 0x34) = 0x7d29;
  }
  cVar1 = (**(code **)(**(int **)(*param_1 + 0x25) + 4))();
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(int *)((int)param_1 + 0x43) + 0x10))();
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f364  OWL::TDecoratedFrame::vf6   (64 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TDecoratedFrame::vf6(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1[1] + 0xc) != 0) && (*(int *)(*param_1 + 0x25) != 0)) {
    iVar1 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x14))();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (**(code **)(**(int **)(*param_1 + 0x25) + 8))();
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f3a4  OWL::TDecoratedFrame::vf7   (61 bytes)   [rtti:vtable virtual slot 7]
undefined4 __cdecl OWL::TDecoratedFrame::vf7(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1[1] + 0xc) != 0) && (*(int *)(*param_1 + 0x25) != 0)) {
    iVar1 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x14))();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (**(code **)(**(int **)(*param_1 + 0x25) + 0xc))();
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}

} // namespace tea
