// TEA.exe — runtime / library code "OWL_TEdit"
// 28 functions, 0x004b5f24..0x004b7644. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b5f24  OWL::TEdit::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TEdit::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TEdit::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TEdit::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TStatic::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5f6c  OWL::TEdit::Cmd24322   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24322)
void __cdecl OWL::TEdit::Cmd24322(int *param_1)

{
  FUN_004a76a8(*param_1,0x300,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5f88  OWL::TEdit::Cmd24323   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24323)
void __cdecl OWL::TEdit::Cmd24323(int *param_1)

{
  FUN_004a76a8(*param_1,0x301,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5fa4  OWL::TEdit::Cmd24324   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24324)
void __cdecl OWL::TEdit::Cmd24324(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5fb4  OWL::TEdit::Cmd24325   (15 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24325)
void __cdecl OWL::TEdit::Cmd24325(int *param_1)

{
  FUN_004b6e50(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5fc4  OWL::TEdit::Cmd24326   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24326)
void __cdecl OWL::TEdit::Cmd24326(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5fd4  OWL::TEdit::Cmd24321   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24321)
void __cdecl OWL::TEdit::Cmd24321(int *param_1)

{
  FUN_004a76a8(*param_1,0x304,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b62bc  OWL::TEdit::~TEdit   (303 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TEdit::_dtor
void __cdecl OWL::TEdit::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50e21c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TEdit::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_0050e3a4;
    *(undefined ***)param_1[2] = &PTR_LAB_0050e3b0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050e3bc;
    FUN_004b70e0((int)param_1,0);
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
// 0x004b63ec  OWL::TEdit::NotifyAtChild_1280   (25 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 1280)
void __cdecl OWL::TEdit::NotifyAtChild_1280(int *param_1)

{
  MessageBeep(0);
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6408  OWL::TEdit::EvGetDlgCode   (42 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
uint __cdecl OWL::TEdit::EvGetDlgCode(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_004a5774(*param_1);
  cVar1 = FUN_004b7060(param_1,'\0');
  if (cVar1 == '\0') {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6434  OWL::TEdit::EvChar   (502 bytes)   [owl:response-table message-handler]
//   WM_CHAR
void __cdecl OWL::TEdit::EvChar(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char **ppcVar3;
  uint *puVar4;
  char **ppcVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  char *local_40;
  byte local_3a;
  byte local_39;
  char *local_38;
  char *local_34;
  char *local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  LPSTR local_8;
  
  __InitExceptBlockLDTC(0x50e250);
  if ((param_1[6] == 0) || (param_2 == 8)) {
    FUN_004a5774(*param_1);
  }
  else {
    local_30 = (char *)GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
    local_1c = 0x14;
    local_8 = (LPSTR)operator_new_array();
    local_10 = local_10 + 1;
    local_1c = 8;
    GetWindowTextA(*(HWND *)(*param_1 + 0xc),local_8,(int)(local_30 + 1));
    (**(code **)(param_1[3] + 0x34))();
    bVar6 = local_38 == local_30;
    iVar2 = FUN_004a76a8(*param_1,0xb8,0,0);
    local_39 = iVar2 != 0;
    FUN_004a5774(*param_1);
    iVar2 = FUN_004a76a8(*param_1,0xb8,0,0);
    local_3a = iVar2 != 0;
    (**(code **)(param_1[3] + 0x34))();
    local_40 = (char *)GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
    if (local_40 < local_30) {
      ppcVar3 = &local_30;
    }
    else {
      ppcVar3 = &local_40;
    }
    ppcVar5 = (char **)(param_1 + 5);
    if ((char *)param_1[5] <= *ppcVar3) {
      ppcVar5 = ppcVar3;
    }
    puVar4 = (uint *)FUN_004b6ba0(param_1,(SIZE_T)(*ppcVar5 + 1));
    if (((*(byte *)(param_1[6] + 4) & 4) == 0) || ((bVar6 && (local_38 == local_40)))) {
      cVar1 = (**(code **)(*(int *)param_1[6] + 8))();
      if (cVar1 == '\0') {
        FUN_004dc9c4((char *)puVar4,local_8);
        local_3a = local_39;
      }
      else if (bVar6) {
        local_38 = strlen(puVar4);
        local_34 = local_38;
      }
      FUN_004b6c5c(param_1,(LPCSTR)puVar4,'\x01');
      (**(code **)(param_1[3] + 0x3c))();
    }
    else {
      if (local_38 == local_40) {
        cVar1 = (**(code **)(*(int *)param_1[6] + 8))();
        if (cVar1 == '\0') {
          (**(code **)(*(int *)param_1[6] + 4))();
        }
      }
      FUN_004b6c5c(param_1,(LPCSTR)puVar4,'\0');
    }
    FUN_004a76a8(*param_1,0xb9,(uint)local_3a,0);
    local_10 = local_10 + -1;
    operator_delete_array();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b662c  OWL::TEdit::EvKeyDown   (243 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
void __cdecl OWL::TEdit::EvKeyDown(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  char *local_c;
  
  if ((param_2 == 9) && (cVar3 = FUN_004b7060(param_1,'\0'), cVar3 == '\0')) {
    FUN_004b6920(param_1);
    return;
  }
  if ((param_1[6] == 0) || ((*(byte *)(param_1[6] + 4) & 4) == 0)) {
    FUN_004a5774(*param_1);
    return;
  }
  (**(code **)(param_1[3] + 0x34))();
  pcVar4 = (char *)GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
  FUN_004a5774(*param_1);
  if (pcVar4 == local_c) {
    return;
  }
  (**(code **)(param_1[3] + 0x34))();
  puVar5 = (uint *)FUN_004b6ba0(param_1,0);
  puVar6 = puVar5;
  pcVar4 = strlen(puVar5);
  if (pcVar4 == local_c) {
    piVar1 = (int *)param_1[6];
    cVar3 = (**(code **)(*piVar1 + 8))(piVar1,*piVar1,puVar6,piVar1,puVar5,0);
    if (cVar3 == '\0') {
      bVar2 = true;
      goto LAB_004b66f0;
    }
  }
  bVar2 = false;
LAB_004b66f0:
  FUN_004b6c5c(param_1,(LPCSTR)puVar5,'\0');
  if (bVar2) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b67bc  OWL::TEdit::EvSetFocus   (32 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
void __cdecl OWL::TEdit::EvSetFocus(int *param_1)

{
  if (param_1 == DAT_0050dfc8) {
    DAT_0050dfc8 = (int *)0x0;
  }
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b67dc  OWL::TEdit::NotifyAtChild_m722   (306 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code -722)
undefined4 __cdecl OWL::TEdit::NotifyAtChild_m722(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  __InitExceptBlockLDTC(0x50e29c);
  if (param_1[6] != 0) {
    (**(code **)(param_1[3] + 0x34))();
    puVar1 = (uint *)FUN_004b6ba0(param_1,0);
    std::string::string_from_cstr((int)local_14,puVar1);
    iVar2 = (**(code **)(*(int *)param_1[6] + 0x14))();
    if (iVar2 != 0) {
      FUN_004dc9c4((char *)puVar1,local_c);
    }
    FUN_004b6c5c(param_1,(LPCSTR)puVar1,iVar2 != 0);
    (**(code **)(param_1[3] + 0x3c))();
    if (local_c != (char *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
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
        if (iVar2 != 0) goto LAB_004b68fb;
      }
      operator_delete();
    }
  }
LAB_004b68fb:
  *in_FS_OFFSET = local_38;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6910  OWL::TEdit::EvChildinvalid   (15 bytes)   [owl:response-table message-handler]
//   WM_CHILDINVALID
void __cdecl OWL::TEdit::EvChildinvalid(int *param_1)

{
  FUN_004b6920(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6954  OWL::TEdit::vf9   (21 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TEdit::vf9(int *param_1)

{
  FUN_004b6e94(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b696c  OWL::TEdit::vf21   (85 bytes)   [rtti:vtable virtual slot 21]
bool __cdecl OWL::TEdit::vf21(int *param_1)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  
  bVar1 = OWL::TWindow::vf15(*param_1);
  if (((bVar1) && (BVar3 = IsWindowEnabled(*(HWND *)(*param_1 + 0xc)), BVar3 != 0)) &&
     (cVar2 = FUN_004b7060(param_1,'\x01'), cVar2 == '\0')) {
    DAT_0050dfc8 = param_1;
    SetFocus(*(HWND *)(*param_1 + 0xc));
    bVar1 = false;
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b69c4  OWL::TEdit::CeShared_4b69c4   (55 bytes)   [owl:response-table message-handler]
//   one handler for 3 table entries: id 24322; id 24323; id 24325
//   also: OWL::TEdit::CeShared_4b69c4 [owl:response-table]; OWL::TEdit::CeShared_4b69c4 [owl:response-table]
void __cdecl OWL::TEdit::CeShared_4b69c4(int param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x34))();
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b69fc  OWL::TEdit::CeCmd24324   (113 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24324)
void __cdecl OWL::TEdit::CeCmd24324(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  __InitExceptBlockLDTC(0x50e2e8);
  FUN_0048ba8c(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
  IsClipboardFormatAvailable(1);
  (**(code **)*param_2)();
  OWL::TClipboard::_dtor(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6a70  OWL::TEdit::CeCmd24326   (68 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24326)
void __cdecl OWL::TEdit::CeCmd24326(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*param_1,0xba,0,0);
  if (iVar1 == 1) {
    FUN_004b6ae8(param_1,0);
  }
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6ab4  OWL::TEdit::CeCmd24321   (49 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24321)
void __cdecl OWL::TEdit::CeCmd24321(int *param_1,undefined4 *param_2)

{
  FUN_004a76a8(*param_1,0xb8,0,0);
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6d08  OWL::TEdit::vf16   (326 bytes)   [rtti:vtable virtual slot 16]
int __cdecl OWL::TEdit::vf16(int *param_1,int param_2,uint *param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  int local_c;
  int local_8;
  
  if ((param_3 == (uint *)0x0) || ((char)*param_3 == '\0')) {
    iVar1 = -1;
  }
  else {
    if ((param_2 == -1) && ((**(code **)(param_1[3] + 0x34))(), param_2 = local_c, param_6 != '\0'))
    {
      param_2 = local_8;
    }
    pcVar2 = strlen(param_3);
    puVar3 = (uint *)FUN_004b6ba0(param_1,0);
    while( true ) {
      if (param_6 == '\0') {
        puVar4 = FUN_004b5e14((uint *)(param_2 + (int)puVar3),param_3,param_4);
      }
      else {
        puVar4 = (uint *)FUN_004b5ea2((char *)puVar3,param_2,param_3,param_4);
      }
      if (((param_5 == '\0') || (puVar4 == (uint *)0x0)) ||
         (((puVar4 <= puVar3 || (iVar1 = FUN_004e1310((int)*(char *)((int)puVar4 + -1)), iVar1 == 0)
           ) && ((pcVar5 = strlen(puVar4), (int)pcVar5 <= (int)pcVar2 ||
                 (iVar1 = FUN_004e1310((int)*(char *)((int)puVar4 + (int)pcVar2)), iVar1 == 0))))))
      break;
      param_2 = (int)puVar4 + ((uint)(param_6 == '\0') - (int)puVar3);
    }
    if (puVar4 == (uint *)0x0) {
      FUN_004b6c5c(param_1,(LPCSTR)puVar3,'\0');
      iVar1 = -1;
    }
    else {
      iVar1 = (int)puVar4 - (int)puVar3;
      FUN_004b6c5c(param_1,(LPCSTR)puVar3,'\0');
      (**(code **)(param_1[3] + 0x3c))();
      FUN_004a76a8(*param_1,0x100,0x27,0);
      (**(code **)(param_1[3] + 0x3c))();
    }
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6ec0  OWL::TEdit::vf12   (356 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TEdit::vf12(int *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  WPARAM WVar3;
  WPARAM WVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar11;
  WPARAM WVar12;
  int local_8;
  int iVar10;
  
  local_8 = 0;
  if (param_3 <= param_4) {
    bVar1 = true;
    WVar3 = FUN_004a76a8(*param_1,0xc9,param_3,0);
    WVar4 = FUN_004a76a8(*param_1,0xc9,param_4,0);
    iVar5 = FUN_004a76a8(*param_1,0xbb,WVar3,0);
    iVar6 = FUN_004a76a8(*param_1,0xbb,WVar4,0);
    WVar12 = WVar3;
    while (((int)WVar12 <= (int)WVar4 && (bVar1))) {
      iVar7 = FUN_004b6ae8(param_1,WVar12);
      puVar8 = (undefined2 *)operator_new_array();
      iVar11 = param_3 - iVar5;
      if (WVar12 != WVar3) {
        iVar11 = 0;
      }
      iVar10 = iVar7;
      if ((WVar12 == WVar4) && (iVar10 = param_4 - iVar6, iVar7 < (int)(param_4 - iVar6))) {
        iVar10 = iVar7;
      }
      uVar9 = iVar10 - iVar11;
      bVar2 = FUN_004b6b2c(param_1,puVar8,iVar7 + 2,WVar12);
      if (bVar2) {
        if (0 < (int)uVar9) {
          memcpy((undefined4 *)(param_2 + local_8),(undefined4 *)((int)puVar8 + iVar11),uVar9)
          ;
          local_8 = local_8 + uVar9;
        }
        if (WVar12 != WVar4) {
          *(undefined1 *)(param_2 + local_8) = 0xd;
          *(undefined1 *)(param_2 + local_8 + 1) = 10;
          local_8 = local_8 + 2;
        }
      }
      else {
        bVar1 = false;
      }
      operator_delete_array();
      WVar12 = WVar12 + 1;
    }
  }
  *(undefined1 *)(param_2 + local_8) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b7024  OWL::TEdit::vf11   (10 bytes)   [rtti:vtable virtual slot 11]
undefined * __stdcall OWL::TEdit::vf11(void)

{
  return &DAT_0050dfc1 /* "EDIT" */;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b7030  OWL::TEdit::vf20   (46 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TEdit::vf20(int *param_1)

{
  OWL::TWindow::vf30(*param_1);
  if (param_1[5] != 0) {
    FUN_004a76a8(*param_1,0xc5,param_1[5] - 1,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b7164  OWL::TEdit::vf10   (181 bytes)   [rtti:vtable virtual slot 10]
int __cdecl OWL::TEdit::vf10(int *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  LPSTR lpString;
  int local_8;
  
  if (((param_1[6] != 0) && ((*(byte *)(param_1[6] + 4) & 2) != 0)) &&
     (iVar1 = FUN_004a76a8(*param_1,0xba,0,0), iVar1 < 2)) {
    lpString = (LPSTR)operator_new_array();
    GetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString,param_1[5]);
    local_8 = (**(code **)(*(int *)param_1[6] + 0x10))();
    if (local_8 == 0) {
      local_8 = OWL::TStatic::vf10(param_1,param_2,param_3);
    }
    else if (param_3 == 1) {
      SetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString);
    }
    operator_delete_array();
    return local_8;
  }
  iVar1 = OWL::TStatic::vf10(param_1,param_2,param_3);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b750c  OWL::TEdit::Streamer::vf2   (45 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TEdit::Streamer::vf2(int param_1,int *param_2)

{
  FUN_004a44dc(*(int *)(param_1 + 8),param_2);
  FUN_004c9fc4(param_2,*(int **)(*(int *)(param_1 + 8) + 0x18));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b7644  OWL::TEdit::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TEdit::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
