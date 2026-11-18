// TSBuild.exe — runtime / library code "OWL_TRichEdit"
// 34 functions, 0x00419e94..0x0041b3e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00419e94  OWL::TRichEdit::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TRichEdit::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TRichEdit::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_00422b68(self[1],(int *)&OWL::TRichEdit::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TEditFile::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419edc  OWL::TRichEdit::Cmd24322   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24322)
void __cdecl OWL::TRichEdit::Cmd24322(int *self)

{
  FUN_00438338(*self,0x300,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419ef8  OWL::TRichEdit::Cmd24323   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24323)
void __cdecl OWL::TRichEdit::Cmd24323(int *self)

{
  FUN_00438338(*self,0x301,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f14  OWL::TRichEdit::Cmd24324   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24324)
void __cdecl OWL::TRichEdit::Cmd24324(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f24  OWL::TRichEdit::Cmd24325   (15 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24325)
void __cdecl OWL::TRichEdit::Cmd24325(int *self)

{
  FUN_0044634c(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f34  OWL::TRichEdit::Cmd24326   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24326)
void __cdecl OWL::TRichEdit::Cmd24326(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f44  OWL::TRichEdit::Cmd24321   (27 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24321)
void __cdecl OWL::TRichEdit::Cmd24321(int *self)

{
  FUN_00438338(*self,0x304,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a03c  OWL::TRichEdit::GetSelection   (54 bytes)   [rtti:vtable virtual slot 13]
//   vtable slot 13 (introduced by OWL::TEdit); EM_GETSEL
void __cdecl OWL::TRichEdit::GetSelection(int *self,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 lParam;
  undefined4 local_8;
  
  lParam = 0;
  local_8 = 0xffffffff;
  FUN_0041a074(self,(LPARAM)&lParam);
  *param_2 = lParam;
  *param_3 = local_8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a090  OWL::TRichEdit::SetSelection   (48 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15 (introduced by OWL::TEdit); EM_SETSEL
bool __cdecl OWL::TRichEdit::SetSelection(int *self,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 range;
  undefined4 unused;
  
  range = param_2;
  unused = param_3;
  iVar1 = OWL::TRichEdit::SetSelection_46924c(self,(LPARAM)&range);
  return -1 < iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a0f8  OWL::TRichEdit::GetSubText   (46 bytes)   [rtti:vtable virtual slot 12]
//   vtable slot 12 (introduced by OWL::TEdit); text between two positions (EM_LINEINDEX / EM_LINEFROMCHAR per line)
void __cdecl OWL::TRichEdit::GetSubText(int *self,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 textRange;
  undefined4 unused;
  undefined4 unused2;
  
  textRange = param_3;
  unused = param_4;
  unused2 = param_2;
  OWL::TRichEdit::GetTextRange(self,(LPARAM)&textRange);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a148  OWL::TRichEdit::vf16   (185 bytes)   [rtti:vtable virtual slot 16]
int __cdecl OWL::TRichEdit::vf16(int *self,int param_2,uint *param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  char *len;
  uint uVar4;
  int lParam [2];
  uint *unused;
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
    lParam[1] = 0xffffffff;
    unused = param_3;
    if (param_4 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 4;
    }
    if (param_5 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 2;
    }
    lParam[0] = param_2;
    iVar1 = FUN_0041a128(self,uVar2 | uVar4 | (uint)(param_6 == '\0'),(LPARAM)lParam);
    if (-1 < iVar1) {
      len = strlen(param_3);
      (**(code **)(self[3] + 0x3c))
                (len + iVar1,self[3],param_3,self,len + iVar1,iVar1);
    }
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a204  OWL::TRichEdit::Paste   (27 bytes)   [rtti:vtable virtual slot 17]
//   vtable slot 17 (introduced by OWL::TEdit); WM_PASTE
void __cdecl OWL::TRichEdit::Paste(int *self)

{
  FUN_00438338(*self,0x302,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a260  OWL::TRichEdit::EvGetDlgCode   (18 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
void __cdecl OWL::TRichEdit::EvGetDlgCode(int *self)

{
  FUN_00436428(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a274  OWL::TRichEdit::EvChar   (16 bytes)   [owl:response-table message-handler]
//   WM_CHAR
void __cdecl OWL::TRichEdit::EvChar(int *self)

{
  FUN_00436428(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a284  OWL::TRichEdit::EvKeyDown   (16 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
void __cdecl OWL::TRichEdit::EvKeyDown(int *self)

{
  FUN_00436428(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a294  OWL::TRichEdit::EvKillFocus   (21 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
void __cdecl OWL::TRichEdit::EvKillFocus(int *self)

{
  OWL::TWindow::EvKillFocus(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a2ac  OWL::TRichEdit::EvSetFocus   (16 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
void __cdecl OWL::TRichEdit::EvSetFocus(int *self)

{
  FUN_00436428(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a2bc  OWL::TRichEdit::CeShared_41a2bc   (55 bytes)   [owl:response-table message-handler]
//   one handler for 3 table entries: id 24322; id 24323; id 24325
//   also: OWL::TRichEdit::CeShared_41a2bc [owl:response-table]; OWL::TRichEdit::CeShared_41a2bc [owl:response-table]
void __cdecl OWL::TRichEdit::CeShared_41a2bc(int self,undefined4 *commandEnabler)

{
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a2f4  OWL::TRichEdit::CeCmd24324   (184 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24324)
void __cdecl OWL::TRichEdit::CeCmd24324(int *self,undefined4 *commandEnabler)

{
  int iVar1;
  BOOL ok;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  char clipboard;
  
  __InitExceptBlockLDTC(0x4780d4);
  FUN_0041fcdc(&clipboard,*(HWND *)(*self + 0xc),'\x01');
  if (clipboard != '\0') {
    iVar1 = CountClipboardFormats();
    if (iVar1 != 0) {
      ok = IsClipboardFormatAvailable(1);
      if (ok == 0) {
        ok = IsClipboardFormatAvailable(7);
        if (ok == 0) {
          ok = IsClipboardFormatAvailable(0xd);
          if (ok == 0) goto LAB_0041a382;
        }
      }
      (**(code **)*commandEnabler)();
      goto LAB_0041a38c;
    }
  }
LAB_0041a382:
  (**(code **)*commandEnabler)();
LAB_0041a38c:
  OWL::TClipboard::_dtor(&clipboard,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a3f8  OWL::TRichEdit::CeCmd24326   (68 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_COMMAND_ENABLE(24326)
void __cdecl OWL::TRichEdit::CeCmd24326(int *self,undefined4 *commandEnabler)

{
  int iVar1;
  
  iVar1 = FUN_00438338(*self,0xba,0,0);
  if (iVar1 == 1) {
    FUN_00445fe4(self,0);
  }
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a43c  OWL::TRichEdit::CeCmd24321   (49 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24321)
void __cdecl OWL::TRichEdit::CeCmd24321(int *self,undefined4 *commandEnabler)

{
  FUN_00438338(*self,0xc6,0,0);
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a470  OWL::TRichEdit::vf11   (37 bytes)   [rtti:vtable virtual slot 11]
char * __stdcall OWL::TRichEdit::vf11(void)

{
  int iVar1;
  char load;
  
  load = '\0';
  OWL::TRichEdit::GetModule();
  iVar1 = OWL::TRichEdit::UseRichEdit2(load);
  if (1 < iVar1) {
    return "RichEdit20A";
  }
  return "RICHEDIT";
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a498  OWL::TRichEdit::vf20   (205 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TRichEdit::vf20(int *self)

{
  int prevRefs;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_14 [8];
  char *str;
  
  __InitExceptBlockLDTC(0x478104);
  OWL::TEditFile::SetupWindow(self);
  FUN_0044f1ec((int)local_14,*(int *)(*self + 0x70),0x7f2b);
  FUN_00450c98(str,extraout_EDX,extraout_ECX,(int)(self + 0xe),(uint *)str);
  if (str != (char *)0x0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0041a554;
    }
    operator_delete();
  }
LAB_0041a554:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a63c  OWL::TRichEdit::vf10   (7 bytes)   [rtti:vtable virtual slot 10]
undefined4 __stdcall OWL::TRichEdit::vf10(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a6bc  OWL::TRichEdit::ReadFromFile   (285 bytes)   [rtti:vtable virtual slot 25]
//   vtable slot 25; loads a file into the control (stream in, EM_SETMODIFY)
undefined4 __cdecl OWL::TRichEdit::ReadFromFile(int *self,LPCSTR fileName)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int basicIfstream [34];
  
  __InitExceptBlockLDTC(0x478144);
  if (fileName == (LPCSTR)0x0) {
    if (self[0x18] == 0) {
      *sehChainHead = sehPrevFrame;
      return 0;
    }
    fileName = (LPCSTR)self[0x18];
  }
  std::basic_ifstream_char::basic_ifstream(basicIfstream,0,fileName,6,0x1b6);
  if ((*(byte *)(basicIfstream[0] + 0x30) & 5) == 0) {
    (**(code **)(self[3] + 0x24))();
    bVar1 = FUN_0041a644(self,basicIfstream,self[0x19]);
    if (bVar1) {
      uVar2 = FUN_00438338(*self,0xb9,0,0);
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
      std::basic_ifstream_char::_dtor(basicIfstream,2);
      *sehChainHead = sehPrevFrame;
      return uVar2;
    }
  }
  uVar2 = 0;
  std::basic_ifstream_char::_dtor(basicIfstream,2);
  *sehChainHead = sehPrevFrame;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a7dc  OWL::TRichEdit::WriteToFile   (277 bytes)   [rtti:vtable virtual slot 29]
//   vtable slot 29; saves the control to a file (stream out, EM_SETMODIFY)
undefined4 __cdecl OWL::TRichEdit::WriteToFile(int *self,LPCSTR fileName)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int basicOfstream [33];
  
  __InitExceptBlockLDTC(0x478184);
  if (fileName == (LPCSTR)0x0) {
    if (self[0x18] == 0) {
      *sehChainHead = sehPrevFrame;
      return 0;
    }
    fileName = (LPCSTR)self[0x18];
  }
  std::basic_ofstream_char::basic_ofstream(basicOfstream,0,fileName,10,0x1b6);
  if (((*(byte *)(basicOfstream[0] + 0x30) & 5) == 0) &&
     (bVar1 = FUN_0041a680(self,basicOfstream,self[0x19]), bVar1)) {
    uVar2 = FUN_00438338(*self,0xb9,0,0);
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    std::basic_ofstream_char::_dtor(basicOfstream,2);
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar2 = 0;
    std::basic_ofstream_char::_dtor(basicOfstream,2);
    *sehChainHead = sehPrevFrame;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa00  OWL::TRichEdit::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TRichEdit::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TRichEdit::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4781a4);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TRichEdit::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_0041a984,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa68  OWL::TRichEdit::TRichEdit   (284 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TRichEdit's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TRichEdit::TRichEdit(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4781bc);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x1e);
    self[0x1e] = (int)(self + 0x1b);
    self[0x1f] = (int)(self + 0x1c);
    self[1] = (int)(self + 0x1b);
    self[2] = (int)(self + 0x1c);
    self[0x1a] = 0;
    self[0x1d] = 0;
    self[0x1b] = (int)&OWL::TEventHandler::vftable;
    self[0x1c] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_435d18(self + 0x1e,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TEditFile::TEditFile(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TRichEdit::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0047853c;
  *(undefined ***)self[2] = &PTR_LAB_00478548;
  *(undefined ***)(*self + 8) = &PTR_LAB_00478554;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ab84  OWL::TRichEdit::Streamer::vf1   (27 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TRichEdit::Streamer::vf1(int self,int *param_2)

{
  FUN_0041aba0(*(int *)(self + 8),param_2);
  return *(undefined4 *)(self + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041abf8  OWL::TRichEdit::Streamer::vf2   (22 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TRichEdit::Streamer::vf2(int self,int *param_2)

{
  FUN_0041ac10(*(int *)(self + 8),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ae38  OWL::TRichEdit::~TRichEdit   (162 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TRichEdit::_dtor
void __cdecl OWL::TRichEdit::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47821c);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TEditFile::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x1e,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x1c,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b0ac  OWL::TRichEdit::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3]
undefined4 __stdcall OWL::TRichEdit::Streamer::vf3(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b3b4  OWL::TRichEdit::CharFromPos   (50 bytes)   [rtti:vtable virtual slot 18]
//   vtable slot 18 (introduced by OWL::TEdit); EM_CHARFROMPOS
void __cdecl OWL::TRichEdit::CharFromPos(int *self,short param_2,short param_3)

{
  int lParam;
  int unused;
  
  lParam = (int)param_2;
  unused = (int)param_3;
  FUN_00438338(*self,0xd7,0,(LPARAM)&lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b3e8  OWL::TRichEdit::PosFromChar   (93 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19 (introduced by OWL::TEdit); EM_POSFROMCHAR
undefined4 __cdecl OWL::TRichEdit::PosFromChar(int *self,WPARAM wParam)

{
  int iVar1;
  undefined4 uVar2;
  char load;
  undefined2 wParam2 [2];
  undefined2 local_8;
  
  load = '\0';
  OWL::TRichEdit::GetModule();
  iVar1 = OWL::TRichEdit::UseRichEdit2(load);
  if (iVar1 == 2) {
    uVar2 = FUN_00438338(*self,0xd6,wParam,0);
  }
  else {
    FUN_00438338(*self,0xd6,(WPARAM)wParam2,wParam);
    uVar2 = CONCAT22(wParam2[0],local_8);
  }
  return uVar2;
}

} // namespace tea
