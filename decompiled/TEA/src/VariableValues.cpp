// TEA.exe — application module "VariableValues"
// 47 functions, 0x004601e8..0x004695a8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004601e8  VariableValues::~VariableValues   (53 bytes)   [rtti:dtor destructor]
//   written in code as VariableValues::_dtor
void __cdecl VariableValues::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    if (*self == 0) {
      g_varsActive = 0;
    }
    else if (*self == 1) {
      VariableValues::Restore((int)self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468ab8  VariableValues::Bind   (74 bytes)   [analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). 
bool __cdecl VariableValues::Bind(int var,char letter)

{
  int taken;
  
  if ((*(int *)&g_varsActive) == 0) {
    VariableValues::Clear();
  }
  if (((&g_varValues)[var] == -2) && (taken = VariableValues::IsLetterBound(letter), taken == 0)) {
    (&g_varValues)[var] = letter;
    return true;
  }
  return letter == (&g_varValues)[var];
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b04  VariableValues::Get   (27 bytes)   [analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). 
undefined1 * __cdecl VariableValues::Get(int var)

{
  if ((*(int *)&g_varsActive) == 0) {
    VariableValues::Clear();
  }
  return &g_varValues + var;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b20  VariableValues::IsLetterBound   (45 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040d9e4. true when the exclusive option is on and another variable already holds this letter
undefined4 __cdecl VariableValues::IsLetterBound(char letter)

{
  char *i;
  
  if (g_exclusiveVariables != 0) {
    for (i = &g_varValues; i < &g_varValuesEnd; i = i + 1) {
      if (letter == *i) {
        return 1;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b50  VariableValues::Clear   (28 bytes)   [analysis]
//   marks all ten variables unbound (0xfe)
void __stdcall VariableValues::Clear(void)

{
  undefined1 *value;
  int i;
  
  i = 0;
  value = &g_varValues;
  do {
    *value = 0xfe;
    i = i + 1;
    value = value + 1;
  } while (i < 10);
  g_varsActive = 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b6c  VariableValues::Save   (32 bytes)   [analysis]
//   copies the ten bindings into a snapshot
void __cdecl VariableValues::Save(int snapshot)

{
  undefined1 *value;
  int i;
  undefined1 *dst;
  
  i = 0;
  dst = (undefined1 *)(snapshot + 4);
  value = &g_varValues;
  do {
    *dst = *value;
    i = i + 1;
    dst = dst + 1;
    value = value + 1;
  } while (i < 10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b8c  VariableValues::Restore   (42 bytes)   [analysis]
//   restores the ten bindings from a snapshot
void __cdecl VariableValues::Restore(int snapshot)

{
  undefined1 *src;
  int i;
  undefined1 *value;
  
  g_varsActive = 1;
  i = 0;
  value = &g_varValues;
  src = (undefined1 *)(snapshot + 4);
  do {
    *value = *src;
    i = i + 1;
    value = value + 1;
    src = src + 1;
  } while (i < 10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468bb8  MatchEngine::ResetMatchState   (16 bytes)   [analysis]
//   clears the variable-binding flag and the balance flag
void __stdcall MatchEngine::ResetMatchState(void)

{
  g_varsActive = 0;
  (*(undefined4 *)&g_balanceCount) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468bc8  GetRichEditVersion   (129 bytes)   [analysis]
//   2 when RICHED20.DLL can be loaded, else 1
//   file placement: inferred (address adjacency)
undefined4 __stdcall GetRichEditVersion(void)

{
  UINT prevErrorMode;
  HMODULE hLibModule;
  undefined4 *sehChainHead;
  undefined4 version;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fcbb0);
  prevErrorMode = SetErrorMode(0x8001);
  hLibModule = LoadLibraryA("RICHED20.DLL");
  if (hLibModule < (HMODULE)0x21) {
    version = 1;
    SetErrorMode(prevErrorMode);
    *sehChainHead = sehPrevFrame;
  }
  else {
    FreeLibrary(hLibModule);
    version = 2;
    SetErrorMode(prevErrorMode);
    *sehChainHead = sehPrevFrame;
  }
  return version;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468c4c  DestroyRichEditLoader   (64 bytes)   [analysis]
//   static destructor of the TRichEdit DLL loader
//   file placement: inferred (address adjacency)
void __stdcall DestroyRichEditLoader(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fcbf0);
  if (DAT_004fcb88 != '\0') {
    OWL::TDllLoader_OWL_TRichEditModule::_dtor(0x51ac74,2);
    DAT_004fcb88 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468c8c  OWL::TRichEdit::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: OWL::TRichEdit::vf8 [rtti:vtable]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&OWL::TRichEdit::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TEditFile::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468cd4  OWL::TRichEdit::Cmd24322   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24322)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24322(int *self)

{
  FUN_004a76a8(*self,0x300,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468cf0  OWL::TRichEdit::Cmd24323   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24323)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24323(int *self)

{
  FUN_004a76a8(*self,0x301,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d0c  OWL::TRichEdit::Cmd24324   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24324)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24324(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d1c  OWL::TRichEdit::Cmd24325   (15 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24325)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24325(int *self)

{
  FUN_004b6e50(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d2c  OWL::TRichEdit::Cmd24326   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24326)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24326(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d3c  OWL::TRichEdit::Cmd24321   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24321)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24321(int *self)

{
  FUN_004a76a8(*self,0x304,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d58  OWL::TRichEdit::TRichEdit   (366 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TRichEdit's vtable at its vptr offset (+0xc) in this
//   file placement: inferred (address adjacency)
int * __cdecl OWL::TRichEdit::TRichEdit(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, uint *param_10,int param_11)

{
  bool bVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fcde8);
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
    OWL::TWindow::TWindow_4a4fbc(self + 0x1e,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TEditFile::TEditFile(self,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TRichEdit::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004fd2b4;
  *(undefined ***)self[2] = &PTR_LAB_004fd2c0;
  *(undefined ***)(*self + 8) = &PTR_LAB_004fd2cc;
  bVar1 = OWL::TRichEdit::LoadModule();
  if (!bVar1) {
    FUN_0048739c();
  }
  self[0x19] = 2;
  FUN_004a7988(*self,0x4b8,0x810000,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468ee0  OWL::TRichEdit::LoadModule   (82 bytes)   [analysis]
//   loads the rich-edit DLL through the shared TDllLoader; true when available
//   file placement: inferred (address adjacency)
bool __stdcall OWL::TRichEdit::LoadModule(void)

{
  int iVar1;
  int *dllLoader;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fce0c);
  if (DAT_004fcb88 == '\0') {
    OWL::TRichEdit::CreateModule(&DAT_0051ac74);
    DAT_004fcb88 = DAT_004fcb88 + '\x01';
  }
  dllLoader = (int *)OWL::TRichEdit::GetDllLoader();
  iVar1 = *dllLoader;
  *sehChainHead = sehPrevFrame;
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468f98  OWL::TRichEdit::CreateModule   (117 bytes, 2 ranges)   [analysis]
//   creates the TRichEditModule for the loader
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::CreateModule(undefined4 loader)

{
  int *dllLoader;
  undefined4 *richEditModule;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fce60);
  dllLoader = (int *)OWL::TRichEdit::GetDllLoader();
  if (*dllLoader == 0) {
    richEditModule = (undefined4 *)operator_new();
    if (richEditModule != (undefined4 *)0x0) {
      OWL::TRichEditModule::TRichEditModule(richEditModule);
    }
    *dllLoader = (int)richEditModule;
  }
  *sehChainHead = sehPrevFrame;
  return loader;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469054  OWL::TDllLoader<OWL::TRichEditModule>::~TDllLoader   (106 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDllLoader_OWL_TRichEditModule::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TDllLoader_OWL_TRichEditModule::_dtor(int self,byte dtorFlags)

{
  int *dllLoader;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fcea8);
  if (self != 0) {
    dllLoader = (int *)OWL::TRichEdit::GetDllLoader();
    if ((undefined4 *)*dllLoader != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*dllLoader)();
    }
    *dllLoader = 0;
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004690e8  OWL::TRichEdit::GetDllLoader   (6 bytes)   [analysis]
//   the static TDllLoader<TRichEditModule>
//   file placement: inferred (address adjacency)
undefined * __stdcall OWL::TRichEdit::GetDllLoader(void)

{
  return &DAT_004fcb8c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004690f0  OWL::TRichEdit::GetCharFormat   (46 bytes)   [analysis]
//   EM_GETCHARFORMAT (selection or default)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::GetCharFormat(int *self,LPARAM charFormat,char selection)

{
  FUN_004a76a8(*self,0x43a,(uint)(selection != '\0'),charFormat);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469120  OWL::TRichEdit::SetCharFormat   (42 bytes)   [analysis]
//   EM_SETCHARFORMAT
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TRichEdit::SetCharFormat(int *self,LPARAM charFormat,WPARAM flags)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*self,0x444,flags,charFormat);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046914c  OWL::TRichEdit::SetBkgndColor   (120 bytes)   [analysis]
//   EM_SETBKGNDCOLOR
//   file placement: inferred (address adjacency)
undefined4 * __cdecl OWL::TRichEdit::SetBkgndColor(undefined4 *result,int *self,uint *colour)

{
  undefined4 uVar1;
  uint lParam;
  bool wParam;
  
  wParam = *colour == (*(uint *)&DAT_0051b19c);
  if (*colour == (*(uint *)&DAT_0051b19c)) {
    lParam = 0;
  }
  else {
    lParam = FUN_0048c12c(colour);
  }
  uVar1 = FUN_004a76a8(*self,0x443,(uint)wParam,lParam);
  *result = uVar1;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x004691c4  OWL::TRichEdit::GetSelection   (54 bytes)   [rtti:vtable virtual slot 13]
//   vtable slot 13 (introduced by OWL::TEdit); EM_GETSEL
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::GetSelection(int *self,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 range;
  undefined4 local_8;
  
  range = 0;
  local_8 = 0xffffffff;
  OWL::TRichEdit::GetSelection_4691fc(self,(LPARAM)&range);
  *param_2 = range;
  *param_3 = local_8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004691fc  OWL::TRichEdit::GetSelection_4691fc   (30 bytes)   [analysis]
//   EM_EXGETSEL
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::GetSelection_4691fc(int *self,LPARAM range)

{
  FUN_004a76a8(*self,0x434,0,range);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046921c  OWL::TRichEdit::SetSelection   (48 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15 (introduced by OWL::TEdit); EM_SETSEL
//   file placement: inferred (address adjacency)
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
// 0x0046924c  OWL::TRichEdit::SetSelection_46924c   (30 bytes)   [analysis]
//   EM_EXSETSEL
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::SetSelection_46924c(int *self,LPARAM range)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004a76a8(*self,0x437,0,range);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046926c  OWL::TRichEdit::GetTextRange   (30 bytes)   [analysis]
//   EM_GETTEXTRANGE
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::GetTextRange(int *self,LPARAM textRange)

{
  FUN_004a76a8(*self,1099,0,textRange);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046928c  OWL::TRichEdit::GetSubText   (46 bytes)   [rtti:vtable virtual slot 12]
//   vtable slot 12 (introduced by OWL::TEdit); text between two positions (EM_LINEINDEX / EM_LINEFROMCHAR per line)
//   file placement: inferred (address adjacency)
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
// 0x004692bc  OWL::TRichEdit::FindText   (32 bytes)   [analysis]
//   EM_FINDTEXT
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::FindText(int *self,WPARAM flags,LPARAM findText)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004a76a8(*self,0x438,flags,findText);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004692dc  OWL::TRichEdit::vf16   (166 bytes)   [rtti:vtable virtual slot 16]
//   file placement: inferred (address adjacency)
int __cdecl OWL::TRichEdit::vf16(int *self,int param_2,uint *param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  char *len;
  uint uVar4;
  int findText [2];
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
    findText[1] = 0xffffffff;
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
    findText[0] = param_2;
    iVar1 = OWL::TRichEdit::FindText(self,uVar2 | uVar4,(LPARAM)findText);
    if (-1 < iVar1) {
      len = strlen(param_3);
      (**(code **)(self[3] + 0x3c))
                (len + iVar1,self[3],param_3,self,len + iVar1,iVar1);
    }
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469384  OWL::TRichEdit::Paste   (28 bytes)   [rtti:vtable virtual slot 17]
//   vtable slot 17 (introduced by OWL::TEdit); WM_PASTE
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Paste(int *self)

{
  FUN_004a76a8(*self,0x302,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004693a0  OWL::TRichEdit::StreamIn   (34 bytes)   [analysis]
//   EM_STREAMIN
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::StreamIn(int *self,WPARAM format,LPARAM editStream)

{
  FUN_004a76a8(*self,0x449,format,editStream);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004693c4  OWL::TRichEdit::StreamOut   (34 bytes)   [analysis]
//   EM_STREAMOUT
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::StreamOut(int *self,WPARAM format,LPARAM editStream)

{
  FUN_004a76a8(*self,0x44a,format,editStream);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004693e8  OWL::TRichEdit::GetEventMask   (30 bytes)   [analysis]
//   EM_GETEVENTMASK
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::GetEventMask(int *self)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004a76a8(*self,0x43b,0,0);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469408  OWL::TRichEdit::SetEventMask   (32 bytes)   [analysis]
//   EM_SETEVENTMASK
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::SetEventMask(int *self,LPARAM mask)

{
  FUN_004a76a8(*self,0x445,0,mask);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469428  OWL::TRichEdit::EvGetDlgCode   (19 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvGetDlgCode(int *self)

{
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046943c  OWL::TRichEdit::EvChar   (17 bytes)   [owl:response-table message-handler]
//   WM_CHAR
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvChar(int *self)

{
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469450  OWL::TRichEdit::EvKeyDown   (17 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvKeyDown(int *self)

{
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469464  OWL::TRichEdit::EvKillFocus   (23 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvKillFocus(int *self)

{
  OWL::TWindow::EvKillFocus(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046947c  OWL::TRichEdit::EvSetFocus   (17 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvSetFocus(int *self)

{
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469490  OWL::TRichEdit::CeShared_469490   (55 bytes)   [owl:response-table message-handler]
//   one handler for 3 table entries: id 24322; id 24323; id 24325
//   also: OWL::TRichEdit::CeShared_469490 [owl:response-table]; OWL::TRichEdit::CeShared_469490 [owl:response-table]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::CeShared_469490(int self,undefined4 *commandEnabler)

{
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004694c8  OWL::TRichEdit::CeCmd24324   (151 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24324)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::CeCmd24324(int *self,undefined4 *commandEnabler)

{
  BOOL ok;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  char clipboard;
  
  __InitExceptBlockLDTC(0x4fcee8);
  FUN_0048ba8c(&clipboard,*(HWND *)(*self + 0xc),'\x01');
  ok = IsClipboardFormatAvailable(1);
  if (ok == 0) {
    ok = IsClipboardFormatAvailable(7);
    if (ok == 0) {
      (**(code **)*commandEnabler)();
      goto LAB_0046953f;
    }
  }
  (**(code **)*commandEnabler)();
LAB_0046953f:
  OWL::TClipboard::_dtor(&clipboard,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469560  OWL::TRichEdit::CeCmd24326   (69 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24326)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::CeCmd24326(int *self,undefined4 *commandEnabler)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*self,0xba,0,0);
  if (iVar1 == 1) {
    FUN_004b6ae8(self,0);
  }
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004695a8  OWL::TRichEdit::CeCmd24321   (50 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24321)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::CeCmd24321(int *self,undefined4 *commandEnabler)

{
  FUN_004a76a8(*self,0xc6,0,0);
  (**(code **)*commandEnabler)();
  return;
}

} // namespace tea
