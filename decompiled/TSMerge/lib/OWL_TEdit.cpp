// TSMerge.exe — runtime / library code "OWL_TEdit"
// 38 functions, 0x0041019c..0x0043b9ac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041019c  OWL::TEdit::GetSelection   (29 bytes)   [rtti:vtable virtual slot 13; function defined from vtable-slot]
//   vtable slot 13; EM_GETSEL
void __cdecl OWL::TEdit::GetSelection(int *self,WPARAM wParam,LPARAM lParam)

{
  FUN_0042d1a4(*self,0xb0,wParam,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004101bc  OWL::TEdit::vf14   (36 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TEdit::vf14(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004101e0  OWL::TEdit::SetSelection   (39 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15; EM_SETSEL
bool __cdecl OWL::TEdit::SetSelection(int *self,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  
  iVar1 = FUN_0042d1a4(*self,0xb1,wParam,lParam);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410208  OWL::TEdit::Paste   (27 bytes)   [rtti:vtable virtual slot 17]
//   vtable slot 17; WM_PASTE
void __cdecl OWL::TEdit::Paste(int *self)

{
  FUN_0042d1a4(*self,0x302,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410224  OWL::TEdit::CharFromPos   (41 bytes)   [rtti:vtable virtual slot 18]
//   vtable slot 18; EM_CHARFROMPOS
void __cdecl OWL::TEdit::CharFromPos(int *self,undefined2 param_2,undefined2 param_3)

{
  FUN_0042d1a4(*self,0xd7,0,CONCAT22(param_2,param_3));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00410250  OWL::TEdit::PosFromChar   (30 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19; EM_POSFROMCHAR
void __cdecl OWL::TEdit::PosFromChar(int *self,WPARAM wParam)

{
  FUN_0042d1a4(*self,0xd6,wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a404  OWL::TEdit::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TEdit::Find [rtti:vtable]; OWL::TEdit::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TEdit::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_004179f4(self[1],(int *)&OWL::TEdit::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TStatic::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a44c  OWL::TEdit::Cmd24322   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24322)
void __cdecl OWL::TEdit::Cmd24322(int *self)

{
  FUN_0042d1a4(*self,0x300,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a468  OWL::TEdit::Cmd24323   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24323)
void __cdecl OWL::TEdit::Cmd24323(int *self)

{
  FUN_0042d1a4(*self,0x301,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a484  OWL::TEdit::Cmd24324   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24324)
void __cdecl OWL::TEdit::Cmd24324(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a494  OWL::TEdit::Cmd24325   (15 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24325)
void __cdecl OWL::TEdit::Cmd24325(int *self)

{
  FUN_0043b1b8(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a4a4  OWL::TEdit::Cmd24326   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24326)
void __cdecl OWL::TEdit::Cmd24326(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a4b4  OWL::TEdit::Cmd24321   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24321)
void __cdecl OWL::TEdit::Cmd24321(int *self)

{
  FUN_0042d1a4(*self,0x304,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a4ec  OWL::TEdit::TEdit   (311 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TEdit's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TEdit::TEdit(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46d4b8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xb);
    self[0xb] = (int)(self + 8);
    self[0xc] = (int)(self + 9);
    self[1] = (int)(self + 8);
    self[2] = (int)(self + 9);
    self[7] = 0;
    self[10] = 0;
    self[8] = (int)&OWL::TEventHandler::vftable;
    self[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84(self + 0xb,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TStatic::TStatic(self,1,param_3,param_4,param_5,param_6);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TEdit::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046d664;
  *(undefined ***)self[2] = &PTR_LAB_0046d670;
  *(undefined ***)(*self + 8) = &OWL::TEdit::vftable_TWindow;
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) | 0x100;
  self[6] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a624  OWL::TEdit::~TEdit   (303 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TEdit::_dtor
void __cdecl OWL::TEdit::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46d4dc);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TEdit::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0046d664;
    *(undefined ***)self[2] = &PTR_LAB_0046d670;
    *(undefined ***)(*self + 8) = &OWL::TEdit::vftable_TWindow;
    FUN_0043b448((int)self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xb,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 9,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a754  OWL::TEdit::NotifyAtChild_1280   (25 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 1280)
void __cdecl OWL::TEdit::NotifyAtChild_1280(int *self)

{
  MessageBeep(0);
  FUN_0042b294(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a770  OWL::TEdit::EvGetDlgCode   (42 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
uint __cdecl OWL::TEdit::EvGetDlgCode(int *self)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_0042b294(*self);
  cVar1 = FUN_0043b3c8(self,'\0');
  if (cVar1 == '\0') {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a79c  OWL::TEdit::EvChar   (502 bytes)   [owl:response-table message-handler]
//   WM_CHAR
void __cdecl OWL::TEdit::EvChar(int *self,int param_2)

{
  char cVar1;
  int iVar2;
  char **ppcVar3;
  uint *puVar4;
  char **ppcVar5;
  undefined4 *sehChainHead;
  bool bVar6;
  char *textLen;
  byte wParam;
  byte local_39;
  char *len;
  char *unused;
  char *textLen2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  LPSTR string_;
  
  __InitExceptBlockLDTC(0x46d510);
  if ((self[6] == 0) || (param_2 == 8)) {
    FUN_0042b294(*self);
  }
  else {
    textLen2 = (char *)GetWindowTextLengthA(*(HWND *)(*self + 0xc));
    ehContext = 0x14;
    string_ = (LPSTR)operator_new_array();
    ehDtorCount = ehDtorCount + 1;
    ehContext = 8;
    GetWindowTextA(*(HWND *)(*self + 0xc),string_,(int)(textLen2 + 1));
    (**(code **)(self[3] + 0x34))();
    bVar6 = len == textLen2;
    iVar2 = FUN_0042d1a4(*self,0xb8,0,0);
    local_39 = iVar2 != 0;
    FUN_0042b294(*self);
    iVar2 = FUN_0042d1a4(*self,0xb8,0,0);
    wParam = iVar2 != 0;
    (**(code **)(self[3] + 0x34))();
    textLen = (char *)GetWindowTextLengthA(*(HWND *)(*self + 0xc));
    if (textLen < textLen2) {
      ppcVar3 = &textLen2;
    }
    else {
      ppcVar3 = &textLen;
    }
    ppcVar5 = (char **)(self + 5);
    if ((char *)self[5] <= *ppcVar3) {
      ppcVar5 = ppcVar3;
    }
    puVar4 = (uint *)FUN_0043af08(self,(SIZE_T)(*ppcVar5 + 1));
    if (((*(byte *)(self[6] + 4) & 4) == 0) || ((bVar6 && (len == textLen)))) {
      cVar1 = (**(code **)(*(int *)self[6] + 8))();
      if (cVar1 == '\0') {
        FUN_00455bc0((char *)puVar4,string_);
        wParam = local_39;
      }
      else if (bVar6) {
        len = strlen(puVar4);
        unused = len;
      }
      FUN_0043afc4(self,(LPCSTR)puVar4,'\x01');
      (**(code **)(self[3] + 0x3c))();
    }
    else {
      if (len == textLen) {
        cVar1 = (**(code **)(*(int *)self[6] + 8))();
        if (cVar1 == '\0') {
          (**(code **)(*(int *)self[6] + 4))();
        }
      }
      FUN_0043afc4(self,(LPCSTR)puVar4,'\0');
    }
    FUN_0042d1a4(*self,0xb9,(uint)wParam,0);
    ehDtorCount = ehDtorCount + -1;
    operator_delete_array();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a994  OWL::TEdit::EvKeyDown   (243 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
void __cdecl OWL::TEdit::EvKeyDown(int *self,int param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  char *local_c;
  
  if ((param_2 == 9) && (cVar3 = FUN_0043b3c8(self,'\0'), cVar3 == '\0')) {
    FUN_0043ac88(self);
    return;
  }
  if ((self[6] == 0) || ((*(byte *)(self[6] + 4) & 4) == 0)) {
    FUN_0042b294(*self);
    return;
  }
  (**(code **)(self[3] + 0x34))();
  pcVar4 = (char *)GetWindowTextLengthA(*(HWND *)(*self + 0xc));
  FUN_0042b294(*self);
  if (pcVar4 == local_c) {
    return;
  }
  (**(code **)(self[3] + 0x34))();
  puVar5 = (uint *)FUN_0043af08(self,0);
  puVar6 = puVar5;
  pcVar4 = strlen(puVar5);
  if (pcVar4 == local_c) {
    piVar1 = (int *)self[6];
    cVar3 = (**(code **)(*piVar1 + 8))(piVar1,*piVar1,puVar6,piVar1,puVar5,0);
    if (cVar3 == '\0') {
      bVar2 = true;
      goto LAB_0043aa58;
    }
  }
  bVar2 = false;
LAB_0043aa58:
  FUN_0043afc4(self,(LPCSTR)puVar5,'\0');
  if (bVar2) {
    (**(code **)(*(int *)self[6] + 4))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043aa88  OWL::TEdit::EvKillFocus   (154 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
void __cdecl OWL::TEdit::EvKillFocus(int *self,HWND hWndGetFocus)

{
  char cVar1;
  HWND hWnd;
  LRESULT lResult;
  int iVar3;
  
  if ((self[6] != 0) && (hWnd = hWndGetFocus, DAT_0046d2ac == (int *)0x0)) {
    while ((hWnd != (HWND)0x0 &&
           (lResult = FUN_0042bc6c(hWnd,*(LPARAM *)(*self + 0x6c)), lResult == 0))) {
      hWnd = GetParent(hWnd);
    }
    if ((((hWnd != (HWND)0x0) && (iVar3 = GetDlgCtrlID(hWndGetFocus), iVar3 != 2)) && (iVar3 != 1)) &&
       (cVar1 = FUN_0043b3c8(self,'\0'), cVar1 == '\0')) {
      DAT_0046d2ac = self;
      PostMessageA(*(HWND *)(*(int *)(*self + 0x14) + 0xc),0x7ffe,*(WPARAM *)(*self + 0xc),0);
    }
  }
  OWL::TWindow::EvKillFocus(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ab24  OWL::TEdit::EvSetFocus   (32 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
void __cdecl OWL::TEdit::EvSetFocus(int *self)

{
  if (self == DAT_0046d2ac) {
    DAT_0046d2ac = (int *)0x0;
  }
  FUN_0042b294(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ab44  OWL::TEdit::NotifyAtChild_m722   (306 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code -722)
undefined4 __cdecl OWL::TEdit::NotifyAtChild_m722(int *self)

{
  uint *puVar1;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  char *str2;
  
  __InitExceptBlockLDTC(0x46d55c);
  if (self[6] != 0) {
    (**(code **)(self[3] + 0x34))();
    puVar1 = (uint *)FUN_0043af08(self,0);
    std::string::string_from_cstr((int)str,puVar1);
    iVar2 = (**(code **)(*(int *)self[6] + 0x14))();
    if (iVar2 != 0) {
      FUN_00455bc0((char *)puVar1,str2);
    }
    FUN_0043afc4(self,(LPCSTR)puVar1,iVar2 != 0);
    (**(code **)(self[3] + 0x3c))();
    if (str2 != (char *)0x0) {
      if (*(int *)(str2 + -0xc) != -1) {
        strRep = (int *)(str2 + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar2 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar2 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar2 = *strRep + 1;
        }
        if (iVar2 != 0) goto LAB_0043ac63;
      }
      operator_delete();
    }
  }
LAB_0043ac63:
  *sehChainHead = sehPrevFrame;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ac78  OWL::TEdit::EvChildinvalid   (15 bytes)   [owl:response-table message-handler]
//   WM_CHILDINVALID
void __cdecl OWL::TEdit::EvChildinvalid(int *self)

{
  FUN_0043ac88(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043acbc  OWL::TEdit::vf9   (21 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TEdit::vf9(int *self)

{
  FUN_0043b1fc(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043acd4  OWL::TEdit::CanClose   (85 bytes)   [rtti:vtable virtual slot 15]
//   override of OWL::TWindow vtable slot 15, from OWL::TEdit's OWL::TWindow subobject vtable at 0x0046d67c (through the this-adjusting thunk at 0x0043b5f4); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TEdit::vf21 [rtti:vtable]
bool __cdecl OWL::TEdit::CanClose(int *self)

{
  bool bVar1;
  char cVar2;
  BOOL ok;
  
  bVar1 = OWL::TWindow::CanClose(*self);
  if (((bVar1) && (ok = IsWindowEnabled(*(HWND *)(*self + 0xc)), ok != 0)) &&
     (cVar2 = FUN_0043b3c8(self,'\x01'), cVar2 == '\0')) {
    DAT_0046d2ac = self;
    SetFocus(*(HWND *)(*self + 0xc));
    bVar1 = false;
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ad2c  OWL::TEdit::CeShared_43ad2c   (55 bytes)   [owl:response-table message-handler]
//   one handler for 3 table entries: id 24322; id 24323; id 24325
//   also: OWL::TEdit::CeShared_43ad2c [owl:response-table]; OWL::TEdit::CeShared_43ad2c [owl:response-table]
void __cdecl OWL::TEdit::CeShared_43ad2c(int self,undefined4 *commandEnabler)

{
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ad64  OWL::TEdit::CeCmd24324   (113 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24324)
void __cdecl OWL::TEdit::CeCmd24324(int *self,undefined4 *commandEnabler)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  char clipboard;
  
  __InitExceptBlockLDTC(0x46d5a8);
  FUN_00414cb8(&clipboard,*(HWND *)(*self + 0xc),'\x01');
  IsClipboardFormatAvailable(1);
  (**(code **)*commandEnabler)();
  OWL::TClipboard::_dtor(&clipboard,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043add8  OWL::TEdit::CeCmd24326   (68 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24326)
void __cdecl OWL::TEdit::CeCmd24326(int *self,undefined4 *commandEnabler)

{
  int iVar1;
  
  iVar1 = FUN_0042d1a4(*self,0xba,0,0);
  if (iVar1 == 1) {
    FUN_0043ae50(self,0);
  }
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ae1c  OWL::TEdit::CeCmd24321   (49 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24321)
void __cdecl OWL::TEdit::CeCmd24321(int *self,undefined4 *commandEnabler)

{
  FUN_0042d1a4(*self,0xb8,0,0);
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b070  OWL::TEdit::vf16   (326 bytes)   [rtti:vtable virtual slot 16]
int __cdecl OWL::TEdit::vf16(int *self,int param_2,uint *param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  char *len;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  int local_c;
  int local_8;
  
  if ((param_3 == (uint *)0x0) || ((char)*param_3 == '\0')) {
    iVar1 = -1;
  }
  else {
    if ((param_2 == -1) && ((**(code **)(self[3] + 0x34))(), param_2 = local_c, param_6 != '\0'))
    {
      param_2 = local_8;
    }
    len = strlen(param_3);
    puVar3 = (uint *)FUN_0043af08(self,0);
    while( true ) {
      if (param_6 == '\0') {
        puVar4 = FUN_0043a2f4((uint *)(param_2 + (int)puVar3),param_3,param_4);
      }
      else {
        puVar4 = (uint *)FUN_0043a382((char *)puVar3,param_2,param_3,param_4);
      }
      if (((param_5 == '\0') || (puVar4 == (uint *)0x0)) ||
         (((puVar4 <= puVar3 || (iVar1 = isalnum((int)*(char *)((int)puVar4 + -1)), iVar1 == 0)
           ) && ((pcVar5 = strlen(puVar4), (int)pcVar5 <= (int)len ||
                 (iVar1 = isalnum((int)*(char *)((int)puVar4 + (int)len)), iVar1 == 0))))))
      break;
      param_2 = (int)puVar4 + ((uint)(param_6 == '\0') - (int)puVar3);
    }
    if (puVar4 == (uint *)0x0) {
      FUN_0043afc4(self,(LPCSTR)puVar3,'\0');
      iVar1 = -1;
    }
    else {
      iVar1 = (int)puVar4 - (int)puVar3;
      FUN_0043afc4(self,(LPCSTR)puVar3,'\0');
      (**(code **)(self[3] + 0x3c))();
      FUN_0042d1a4(*self,0x100,0x27,0);
      (**(code **)(self[3] + 0x3c))();
    }
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b228  OWL::TEdit::GetSubText   (356 bytes)   [rtti:vtable virtual slot 12]
//   vtable slot 12; text between two positions (EM_LINEINDEX / EM_LINEFROMCHAR per line)
void __cdecl OWL::TEdit::GetSubText(int *self,int param_2,uint wParam4,uint wParam5)

{
  bool bVar1;
  bool bVar2;
  WPARAM wParam;
  WPARAM wParam2;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *lParam;
  uint uVar9;
  int iVar11;
  WPARAM wParam3;
  int local_8;
  int iVar10;
  
  local_8 = 0;
  if (wParam4 <= wParam5) {
    bVar1 = true;
    wParam = FUN_0042d1a4(*self,0xc9,wParam4,0);
    wParam2 = FUN_0042d1a4(*self,0xc9,wParam5,0);
    iVar5 = FUN_0042d1a4(*self,0xbb,wParam,0);
    iVar6 = FUN_0042d1a4(*self,0xbb,wParam2,0);
    wParam3 = wParam;
    while (((int)wParam3 <= (int)wParam2 && (bVar1))) {
      iVar7 = FUN_0043ae50(self,wParam3);
      lParam = (undefined2 *)operator_new_array();
      iVar11 = wParam4 - iVar5;
      if (wParam3 != wParam) {
        iVar11 = 0;
      }
      iVar10 = iVar7;
      if ((wParam3 == wParam2) && (iVar10 = wParam5 - iVar6, iVar7 < (int)(wParam5 - iVar6))) {
        iVar10 = iVar7;
      }
      uVar9 = iVar10 - iVar11;
      bVar2 = FUN_0043ae94(self,lParam,iVar7 + 2,wParam3);
      if (bVar2) {
        if (0 < (int)uVar9) {
          memcpy((undefined4 *)(param_2 + local_8),(undefined4 *)((int)lParam + iVar11),uVar9)
          ;
          local_8 = local_8 + uVar9;
        }
        if (wParam3 != wParam2) {
          *(undefined1 *)(param_2 + local_8) = 0xd;
          *(undefined1 *)(param_2 + local_8 + 1) = 10;
          local_8 = local_8 + 2;
        }
      }
      else {
        bVar1 = false;
      }
      operator_delete_array();
      wParam3 = wParam3 + 1;
    }
  }
  *(undefined1 *)(param_2 + local_8) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b38c  OWL::TEdit::GetClassName   (10 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from OWL::TEdit's OWL::TWindow subobject vtable at 0x0046d67c (through the this-adjusting thunk at 0x0043b5ce); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TEdit::vf11 [rtti:vtable]
undefined * __stdcall OWL::TEdit::GetClassName(void)

{
  return &DAT_0046d2a5 /* "EDIT" */;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b398  OWL::TEdit::SetupWindow   (46 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TEdit's OWL::TWindow subobject vtable at 0x0046d67c (through the this-adjusting thunk at 0x0043b5bb); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TEdit::vf20 [rtti:vtable]
void __cdecl OWL::TEdit::SetupWindow(int *self)

{
  OWL::TWindow::SetupWindow(*self);
  if (self[5] != 0) {
    FUN_0042d1a4(*self,0xc5,self[5] - 1,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b4cc  OWL::TEdit::Transfer   (181 bytes)   [rtti:vtable virtual slot 22]
//   override of OWL::TWindow vtable slot 22, from OWL::TEdit's OWL::TWindow subobject vtable at 0x0046d67c (through the this-adjusting thunk at 0x0043b5e1); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TEdit::vf10 [rtti:vtable]
int __cdecl OWL::TEdit::Transfer(int *self,LPSTR string_,int param_3)

{
  int iVar1;
  LPSTR lpString;
  int local_8;
  
  if (((self[6] != 0) && ((*(byte *)(self[6] + 4) & 2) != 0)) &&
     (iVar1 = FUN_0042d1a4(*self,0xba,0,0), iVar1 < 2)) {
    lpString = (LPSTR)operator_new_array();
    GetWindowTextA(*(HWND *)(*self + 0xc),lpString,self[5]);
    local_8 = (**(code **)(*(int *)self[6] + 0x10))();
    if (local_8 == 0) {
      local_8 = OWL::TUrlLink::Transfer(self,string_,param_3);
    }
    else if (param_3 == 1) {
      SetWindowTextA(*(HWND *)(*self + 0xc),lpString);
    }
    operator_delete_array();
    return local_8;
  }
  iVar1 = OWL::TUrlLink::Transfer(self,string_,param_3);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b6c0  OWL::TEdit::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TEdit::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TEdit::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46d730);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TEdit::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_00405450,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b728  OWL::TEdit::TEdit_43b728   (284 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TEdit's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TEdit::TEdit_43b728(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46d748);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xb);
    self[0xb] = (int)(self + 8);
    self[0xc] = (int)(self + 9);
    self[1] = (int)(self + 8);
    self[2] = (int)(self + 9);
    self[7] = 0;
    self[10] = 0;
    self[8] = (int)&OWL::TEventHandler::vftable;
    self[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84(self + 0xb,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TStatic::TStatic_447bb4(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TEdit::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046d664;
  *(undefined ***)self[2] = &PTR_LAB_0046d670;
  *(undefined ***)(*self + 8) = &OWL::TEdit::vftable_TWindow;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b874  OWL::TEdit::Streamer::vf2   (45 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TEdit::Streamer::vf2(int self,int *param_2)

{
  FUN_0042a190(*(int *)(self + 8),param_2);
  FUN_00449e28(param_2,*(int **)(*(int *)(self + 8) + 0x18));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b9ac  OWL::TEdit::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TEdit::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
