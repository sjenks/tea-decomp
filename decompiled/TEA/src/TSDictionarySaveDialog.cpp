// TEA.exe — application module "TSDictionarySaveDialog"
// 30 functions, 0x0043cdcc..0x0043fd78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043cdcc  TSDictionarySaveDialog::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: TSDictionarySaveDialog::Find [rtti:vtable]; TSDictionarySaveDialog::vf14 [rtti:vtable]
undefined4 __cdecl TSDictionarySaveDialog::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&TSDictionarySaveDialog::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = PropertiesViewWindows::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ce14  TSDictionarySaveDialog::TSDictionarySaveDialog   (1264 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TSDictionarySaveDialog's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x0043d15d) */
/* WARNING: Removing unreachable block (ram,0x0043d1a1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff7c : 0x0043d1ac */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl TSDictionarySaveDialog::TSDictionarySaveDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,uint *param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int refs;
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f555c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x1d8);
    self[0x1d8] = (int)(self + 0x1d5);
    self[0x1d9] = (int)(self + 0x1d6);
    self[1] = (int)(self + 0x1d5);
    self[2] = (int)(self + 0x1d6);
    self[0x1d4] = 0;
    self[0x1d7] = 0;
    self[0x1d5] = (int)&OWL::TEventHandler::vftable;
    self[0x1d6] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x1d8,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x6f0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x6f0;
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x4f5414,param_3,param_4,(uint *)0x16b2,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x6f0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x6f0;
  DictionaryMaintainer::DictionaryMaintainer(self + 0x18);
  self[3] = (int)&TSDictionarySaveDialog::vftable;
  self[0x18] = (int)&PTR_LAB_004f5a68;
  *(undefined ***)self[1] = &PTR_LAB_004f5a84;
  *(undefined ***)self[2] = &PTR_LAB_004f5a90;
  *(undefined ***)(*self + 8) = &TSDictionarySaveDialog::vftable_TWindow;
  self[0x19] = 0;
  self[0x1a] = param_6;
  self[0x1b] = param_7;
  self[0x1c] = param_10;
  self[0x1d] = param_11;
  self[0x20] = 0;
  refs = *(int *)(*(int *)(param_8 + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(param_8 + 8) + -4);
    rep = std::string::__getRep(self + 0x1e,len,len);
    self[0x20] = (int)(rep + 3);
    memcpy((undefined4 *)self[0x20],*(undefined4 **)(param_8 + 8),len);
  }
  else {
    self[0x20] = *(int *)(param_8 + 8);
    rep = (int *)(self[0x20] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  self[0x24] = 0;
  refs = *(int *)(*(int *)(param_9 + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(param_9 + 8) + -4);
    rep = std::string::__getRep(self + 0x22,len,len);
    self[0x24] = (int)(rep + 3);
    memcpy((undefined4 *)self[0x24],*(undefined4 **)(param_9 + 8),len);
  }
  else {
    self[0x24] = *(int *)(param_9 + 8);
    rep = (int *)(self[0x24] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  self[0x26] = -1;
  self[0x29] = 0;
  self[0x2a] = 0;
  self[0x2e] = 0;
  self[0x28] = 0x40;
  self[0x31] = 0;
  self[0x32] = 0;
  self[0x36] = 0;
  self[0x30] = 0x40;
  OWL::TStatic::TStatic_4c7a28(self + 0x38,0,*self,0x2fa8,0,0);
  PVWEdit::PVWEdit(self + 100,0,self,0x1130,1000);
  PVWStatic::PVWStatic(self + 0x93,0,self,0x1702,0);
  PVWPushButton::PVWPushButton(self + 0xc0,0,self,1);
  OWL::TGroupBox::TGroupBox(self + 0xf2,0,*self,0x2cb0,0);
  OWL::TListBox::TListBox((int *)((int)self + 0x473),0,*self,0x1e96,0);
  OWL::TStatic::TStatic_4c7a28((int *)((int)self + 0x51d),0,*self,0x2ca6,0,0);
  PVWEdit::PVWEdit(self + 0x173,0,self,0x8de,0);
  PVWPushButton::PVWPushButton(self + 0x1a2,0,self,0x8d4);
  FUN_004b0c44(self,param_5);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d32c  TSDictionarySaveDialog::~TSDictionarySaveDialog   (1150 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionarySaveDialog::_dtor
void __cdecl TSDictionarySaveDialog::_dtor(int *self,byte dtorFlags)

{
  int prevRefs;
  int *control;
  int *control2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f5634);
  if (self == (int *)0x0) goto LAB_0043d79a;
  self[3] = (int)&TSDictionarySaveDialog::vftable;
  self[0x18] = (int)&PTR_LAB_004f5a68;
  *(undefined ***)self[1] = &PTR_LAB_004f5a84;
  *(undefined ***)self[2] = &PTR_LAB_004f5a90;
  *(undefined ***)(*self + 8) = &TSDictionarySaveDialog::vftable_TWindow;
  PVWPushButton::_dtor(self + 0x1a2,2);
  PVWEdit::_dtor(self + 0x173,2);
  control = (int *)((int)self + 0x51d);
  control2 = (int *)(*(int *)((int)self + 0x521) + -4);
  *control2 = *control2 + -4;
  *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
  OWL::TControl::_dtor(control,0);
  control2 = (int *)(*(int *)((int)self + 0x521) + -4);
  *control2 = *control2 + 4;
  *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
  control2 = (int *)(*(int *)((int)self + 0x521) + -4);
  *control2 = *control2 + 0x96;
  OWL::TWindow::_dtor((undefined4 *)((int)self + 0x545),0);
  control2 = (int *)(*(int *)((int)self + 0x521) + -4);
  *control2 = *control2 + -0x96;
  OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x53d),0);
  OWL::TControl::_dtor((int *)((int)self + 0x473),0);
  control2 = (int *)(*(int *)((int)self + 0x477) + -4);
  *control2 = *control2 + 0x96;
  OWL::TWindow::_dtor((undefined4 *)((int)self + 0x497),0);
  control2 = (int *)(*(int *)((int)self + 0x477) + -4);
  *control2 = *control2 + -0x96;
  OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x48f),0);
  control2 = self + 0xf2;
  *(int *)(self[0xf3] + -4) = *(int *)(self[0xf3] + -4) + -1;
  *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + -1;
  OWL::TControl::_dtor(control2,0);
  *(int *)(self[0xf3] + -4) = *(int *)(self[0xf3] + -4) + 1;
  *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + 1;
  *(int *)(self[0xf3] + -4) = *(int *)(self[0xf3] + -4) + 0x96;
  OWL::TWindow::_dtor((undefined4 *)((int)self + 0x3ed),0);
  *(int *)(self[0xf3] + -4) = *(int *)(self[0xf3] + -4) + -0x96;
  OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x3e5),0);
  PVWPushButton::_dtor(self + 0xc0,2);
  PVWStatic::_dtor(self + 0x93,2);
  PVWEdit::_dtor(self + 100,2);
  control2 = self + 0x38;
  *(int *)(self[0x39] + -4) = *(int *)(self[0x39] + -4) + -4;
  *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + -4;
  OWL::TControl::_dtor(control2,0);
  *(int *)(self[0x39] + -4) = *(int *)(self[0x39] + -4) + 4;
  *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + 4;
  *(int *)(self[0x39] + -4) = *(int *)(self[0x39] + -4) + 0x96;
  OWL::TWindow::_dtor(self + 0x42,0);
  *(int *)(self[0x39] + -4) = *(int *)(self[0x39] + -4) + -0x96;
  OWL::TStreamableBase::_dtor(self + 0x40,0);
  std::_Destroy_range_string(self + 0x30,self[0x31],self[0x32]);
  operator_delete();
  std::_Destroy_range_string(self + 0x28,self[0x29],self[0x2a]);
  operator_delete();
  if (self[0x24] != 0) {
    if (*(int *)(self[0x24] + -0xc) != -1) {
      control2 = (int *)(self[0x24] + -0xc);
      if (control2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (control2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *control2 = *control2 + -1;
        prevRefs = *control2 + 1;
      }
      if (prevRefs != 0) goto LAB_0043d669;
    }
    operator_delete();
    self[0x24] = 0;
  }
LAB_0043d669:
  if (self[0x20] != 0) {
    if (*(int *)(self[0x20] + -0xc) != -1) {
      control2 = (int *)(self[0x20] + -0xc);
      if (control2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (control2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *control2 = *control2 + -1;
        prevRefs = *control2 + 1;
      }
      if (prevRefs != 0) goto LAB_0043d6e3;
    }
    operator_delete();
    self[0x20] = 0;
  }
LAB_0043d6e3:
  DictionaryMaintainer::_dtor(self + 0x18,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x6f0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x6f0;
  PropertiesViewWindows::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x6f0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x6f0;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x1d8,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x1d6,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0043d79a:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d7ac  TSDictionarySaveDialog::OnButton   (866 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19 (introduced by PropertiesViewWindows); a push button, check box or radio button was clicked (PVW*::BNClicked call it with the control id)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TSDictionarySaveDialog::OnButton(int *self,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *sehChainHead;
  char cVar4;
  int lParam [18];
  undefined4 unused;
  int local_188;
  int local_184;
  undefined1 *unused2;
  undefined4 unused3;
  int unused4;
  int unused5;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int local_14c;
  int local_148;
  undefined4 streamableBase [2];
  undefined4 window [34];
  uint data [2];
  LPSTR text;
  undefined1 pvwEdit [8];
  int str;
  
  __InitExceptBlockLDTC(0x4f56b8);
  if (param_3 != 1) {
    if (param_3 == 0x8d4) {
      ehContext = 0x20;
      FUN_004c279c(data,0x80e,(uint *)"TEA&Sympathy Dictionary (TSD)|*.tsd|All Files (*.*)|*.*",0,0,
                   (uint)(PTR_DAT_004f33b8 + 1),0,0,0);
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x2c;
      GetWindowTextA(*(HWND *)(self[0x173] + 0xc),text,0x104);
      ehContext = 0x38;
      piVar1 = OWL::TFileSaveDialog::TFileSaveDialog(&local_14c,0,*self,(int)data,0,0x4f545b,0);
      ehDtorCount = ehDtorCount + 6;
      iVar2 = (**(code **)(piVar1[3] + 0x14))();
      cVar4 = iVar2 == 1;
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x5c;
      *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x5c;
      ehDtorCount = ehDtorCount + -6;
      OWL::TCommonDialog::_dtor(&local_14c,0);
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x5c;
      *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x5c;
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x96;
      ehDtorCount = ehDtorCount + -2;
      OWL::TWindow::_dtor(window,0);
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x96;
      ehDtorCount = ehDtorCount + -1;
      OWL::TStreamableBase::_dtor(streamableBase,0);
      if (cVar4 != '\0') {
        PVWEdit::SetText(self + 0x173,text);
      }
      ehDtorCount = ehDtorCount + -1;
      OWL::TOpenSaveDialog::TData::_dtor((int)data,2);
    }
    goto LAB_0043dafa;
  }
  if (self[0x19] != 1) goto LAB_0043dafa;
  TSDictionarySaveDialog::Child7830_Notify1((int)self);
  TSDictionarySaveDialog::FocusControl(self,'\0');
  self[0x19] = 2;
  uVar3 = 1;
  if (self[0x1b] < 0) {
    local_184 = FUN_004bfdd8((int *)((int)self + 0x473),(LPARAM)lParam,0x10);
    piVar1 = lParam;
    local_188 = 0;
    while ((local_188 < local_184 && (uVar3 != 0))) {
      iVar2 = *piVar1;
      self[0x1b] = iVar2;
      uVar3 = TSDictionarySaveDialog::SaveDictionary(self,iVar2 * 0x10 + self[0x29]);
      local_188 = local_188 + 1;
      piVar1 = piVar1 + 1;
    }
    self[0x1b] = -1;
  }
  else {
    ehContext = 8;
    PVWEdit::GetText((int)pvwEdit,self + 100);
    ehDtorCount = ehDtorCount + 1;
    uVar3 = TSDictionarySaveDialog::SaveDictionary(self,(int)(self + 0x1e));
    ehDtorCount = ehDtorCount + -1;
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        piVar1 = (int *)(str + -0xc);
        if (piVar1 == &g_nullStringRep) {
          iVar2 = 1;
        }
        else if (piVar1 == &g_nullStringRep) {
          iVar2 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1 + 1;
        }
        if (iVar2 != 0) goto LAB_0043d957;
      }
      unused5 = str + -0xc;
      unused4 = str + -0xc;
      operator_delete();
      unused3 = 0;
      unused2 = pvwEdit;
      str = 0;
      unused = 0;
    }
  }
LAB_0043d957:
  if ((self[0x19] == 2) && (uVar3 != 0)) {
    self[0x19] = 4;
    (**(code **)(self[3] + 0x20))();
  }
  else {
    TSDictionarySaveDialog::FocusControl(self,'\x01');
    TSDictionarySaveDialog::UpdateOkButton((int)self);
  }
LAB_0043dafa:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043db94  TSDictionarySaveDialog::SaveDictionary   (1052 bytes)   [analysis]
//   writes the edited word list as a .tsd file (WriteTsdDictionary) next to the chosen name and reopens it ("DictionaryOpen")
uint __cdecl TSDictionarySaveDialog::SaveDictionary(int *self,int fileName)

{
  uint *description;
  int longest;
  int wordLists;
  uint uVar4;
  int *strRep;
  undefined4 *sehChainHead;
  int in_stack_0000000c;
  LPCSTR fileName2;
  int shortest;
  int progressTotal;
  undefined1 *rhs;
  int options;
  _FILETIME fileTime;
  undefined1 *unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  undefined1 *unused5;
  undefined4 unused6;
  int unused7;
  int unused8;
  char *local_6c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 pvwStatic [8];
  int str2;
  undefined1 result [8];
  int str3;
  undefined1 local_24 [8];
  int str4;
  undefined1 str [8];
  LPCSTR local_c;
  
  __InitExceptBlockLDTC(0x4f5758);
  uVar4 = g_stringNpos;
  if (*(uint *)(*(int *)(fileName + 8) + -4) < g_stringNpos) {
    uVar4 = *(uint *)(*(int *)(fileName + 8) + -4);
  }
  local_6c = memrchr(*(char **)(fileName + 8),'\\',uVar4);
  uVar4 = g_stringNpos;
  if (local_6c != (char *)0x0) {
    uVar4 = (int)local_6c - *(int *)(fileName + 8);
  }
  description = (uint *)FUN_004e0520((char *)0x0);
  if (description == (uint *)0x0) {
    description = (uint *)("DictionaryOpen" + 0xe);
  }
  ehContext = 0x14;
  std::string::string_from_cstr((int)str,description);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  if (uVar4 != 0xffffffff) {
    ehContext = 0x20;
    rhs = str;
    std::string::substr((int)local_24,fileName,0,uVar4 + 1);
    ehDtorCount = ehDtorCount + 1;
    std::operator_plus((int)result,(int)local_24,(int)rhs);
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign((int)str,(int)result);
    ehDtorCount = ehDtorCount + -1;
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        strRep = (int *)(str3 + -0xc);
        if (strRep == &g_nullStringRep) {
          longest = 1;
        }
        else if (strRep == &g_nullStringRep) {
          longest = 1;
        }
        else {
          *strRep = *strRep + -1;
          longest = *strRep + 1;
        }
        if (longest != 0) goto LAB_0043dce1;
      }
      unused8 = str3 + -0xc;
      unused7 = str3 + -0xc;
      operator_delete();
      unused6 = 0;
      unused5 = result;
      str3 = 0;
    }
LAB_0043dce1:
    ehContext = 8;
    ehDtorCount = ehDtorCount + -1;
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep = (int *)(str4 + -0xc);
        if (strRep == &g_nullStringRep) {
          longest = 1;
        }
        else if (strRep == &g_nullStringRep) {
          longest = 1;
        }
        else {
          *strRep = *strRep + -1;
          longest = *strRep + 1;
        }
        if (longest != 0) goto LAB_0043dd7a;
      }
      unused4 = str4 + -0xc;
      unused3 = str4 + -0xc;
      operator_delete();
      unused2 = 0;
      unused = local_24;
      str4 = 0;
    }
  }
LAB_0043dd7a:
  longest = TSDictionaryList::EnsureCurrent(self[0x1a],self[0x1b]);
  if (longest == 0) {
    TSDictionaryList::GetPath(self[0x1a],self[0x1b]);
    (**(code **)(self[3] + 0xc4))();
    uVar4 = 0;
  }
  else {
    options = 0;
    progressTotal = 100;
    longest = self[0x1d];
    shortest = self[0x1c];
    description = *(uint **)(in_stack_0000000c + 8);
    fileName2 = local_c;
    wordLists = TSDictionaryList::GetSymbolBytes(self[0x1a],self[0x1b]);
    uVar4 = WriteTsdDictionary(self + 0x18,wordLists,fileName2,description,shortest,longest,progressTotal,options);
    uVar4 = uVar4 & 0xff;
  }
  if (uVar4 != 0) {
    BackupFile(fileName,&fileTime);
    longest = FUN_004df65c(local_c,*(LPCSTR *)(fileName + 8));
    if (longest != 0) {
      (**(code **)(self[3] + 0xc4))();
      uVar4 = 0;
    }
  }
  if (uVar4 == 0) {
    thunk_FUN_004e0588(local_c);
    ehContext = 0x50;
    PVWStatic::GetText((int)pvwStatic,self + 0x93);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x44;
    (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
    ehDtorCount = ehDtorCount + -1;
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        strRep = (int *)(str2 + -0xc);
        if (strRep == &g_nullStringRep) {
          longest = 1;
        }
        else if (strRep == &g_nullStringRep) {
          longest = 1;
        }
        else {
          *strRep = *strRep + -1;
          longest = *strRep + 1;
        }
        if (longest != 0) goto LAB_0043df06;
      }
      operator_delete();
      str2 = 0;
    }
LAB_0043df06:
    ehContext = 8;
  }
  uVar4 = (uint)(uVar4 != 0);
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = (int *)(local_c + -0xc);
      if (strRep == &g_nullStringRep) {
        longest = 1;
      }
      else if (strRep == &g_nullStringRep) {
        longest = 1;
      }
      else {
        *strRep = *strRep + -1;
        longest = *strRep + 1;
      }
      if (longest != 0) goto LAB_0043df98;
    }
    operator_delete();
  }
LAB_0043df98:
  *sehChainHead = sehPrevFrame;
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dfb0  TSDictionarySaveDialog::UpdateOkButton   (123 bytes)   [analysis]
//   enables OK when a file name is entered
undefined4 __cdecl TSDictionarySaveDialog::UpdateOkButton(int self)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(self + 0x6c) < 0) {
    iVar1 = FUN_004bfd60((int *)(self + 0x473));
    if (iVar1 < 1) {
      *(undefined4 *)(self + 100) = 0;
      (**(code **)(*(int *)(self + 0xc) + 0xc0))();
    }
    else {
      *(undefined4 *)(self + 100) = 1;
      (**(code **)(*(int *)(self + 0xc) + 0xc0))();
    }
  }
  else {
    *(undefined4 *)(self + 100) = 1;
  }
  uVar2 = (**(code **)(*(int *)(*(int *)(self + 0x300) + 8) + 0x60))();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e02c  TSDictionarySaveDialog::FocusControl   (72 bytes)   [analysis]
//   moves the focus to the name edit (or to the list)
void __cdecl TSDictionarySaveDialog::FocusControl(int *self,char toList)

{
  HWND hWnd;
  
  if (toList == '\0') {
    hWnd = GetDlgItem(*(HWND *)(*self + 0xc),2);
    SetFocus(hWnd);
  }
  (**(code **)(*(int *)(self[100] + 8) + 0x60))();
  (**(code **)(*(int *)(self[0xc0] + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e074  TSDictionarySaveDialog::SetupWindow   (2081 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from TSDictionarySaveDialog's OWL::TWindow subobject vtable at 0x004f5a9c (through the this-adjusting thunk at 0x0043ed4d); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TSDictionarySaveDialog::vf11 [rtti:vtable]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TSDictionarySaveDialog::SetupWindow(int *self)

{
  uint len;
  int *rep;
  uint *path;
  int iVar4;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_58 [8];
  undefined4 *local_50;
  int local_48;
  undefined1 value [8];
  undefined4 *local_3c;
  undefined1 result [8];
  int str;
  undefined1 result2 [8];
  int str2;
  undefined1 local_14 [8];
  int str3;
  
  __InitExceptBlockLDTC(0x4f585c);
  PropertiesViewWindows::SetupWindow(self);
  if (self[0x1b] < 0) {
    for (index = 0; iVar4 = TSDictionaryList::GetCount(self[0x1a]), index < iVar4; index = index + 1) {
      TSDictionaryList::GetFileTitle(result,self[0x1a],index);
      (**(code **)(*(int *)((int)self + 0x47f) + 0x60))();
      path = (uint *)TSDictionaryList::GetPath(self[0x1a],index);
      std::string::string_from_cstr((int)value,path);
      if (self[0x2a] == self[0x2e]) {
        std::vector_string::insert_aux((int)(self + 0x28),self[0x2a],(int)value);
      }
      else {
        local_48 = self[0x2a];
        if (local_48 != 0) {
          *(undefined4 *)(local_48 + 8) = 0;
          if (local_3c[-3] == -1 || local_3c[-3] + 1 < 0) {
            len = local_3c[-1];
            rep = std::string::__getRep(local_48,len,len);
            *(int **)(local_48 + 8) = rep + 3;
            memcpy(*(undefined4 **)(local_48 + 8),local_3c,len);
          }
          else {
            *(undefined4 **)(local_48 + 8) = local_3c;
            rep = (int *)(*(int *)(local_48 + 8) + -0xc);
            if (rep != &g_nullStringRep) {
              *rep = *rep + 1;
            }
          }
        }
        self[0x2a] = self[0x2a] + 0x10;
      }
      if (local_3c != (undefined4 *)0x0) {
        if (local_3c[-3] != -1) {
          rep = local_3c + -3;
          if (rep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else if (rep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else {
            *rep = *rep + -1;
            iVar4 = *rep + 1;
          }
          if (iVar4 != 0) goto LAB_0043e550;
        }
        operator_delete();
        local_3c = (undefined4 *)0x0;
      }
LAB_0043e550:
      TSDictionaryList::GetDescription(local_58,self[0x1a],index);
      if (self[0x32] == self[0x36]) {
        std::vector_string::insert_aux((int)(self + 0x30),self[0x32],(int)local_58);
      }
      else {
        iVar4 = self[0x32];
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 8) = 0;
          if (local_50[-3] == -1 || local_50[-3] + 1 < 0) {
            len = local_50[-1];
            rep = std::string::__getRep(iVar4,len,len);
            *(int **)(iVar4 + 8) = rep + 3;
            memcpy(*(undefined4 **)(iVar4 + 8),local_50,len);
          }
          else {
            *(undefined4 **)(iVar4 + 8) = local_50;
            rep = (int *)(*(int *)(iVar4 + 8) + -0xc);
            if (rep != &g_nullStringRep) {
              *rep = *rep + 1;
            }
          }
        }
        self[0x32] = self[0x32] + 0x10;
      }
      if (local_50 != (undefined4 *)0x0) {
        if (local_50[-3] != -1) {
          rep = local_50 + -3;
          if (rep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else if (rep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else {
            *rep = *rep + -1;
            iVar4 = *rep + 1;
          }
          if (iVar4 != 0) goto LAB_0043e78c;
        }
        operator_delete();
        local_50 = (undefined4 *)0x0;
      }
LAB_0043e78c:
      if (str != 0) {
        if (*(int *)(str + -0xc) != -1) {
          rep = (int *)(str + -0xc);
          if (rep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else if (rep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else {
            *rep = *rep + -1;
            iVar4 = *rep + 1;
          }
          if (iVar4 != 0) goto LAB_0043e825;
        }
        operator_delete();
        str = 0;
      }
LAB_0043e825:
    }
    FUN_004a76a8(*(int *)((int)self + 0x473),0x185,1,0);
    TSDictionarySaveDialog::Child7830_Notify1((int)self);
    goto LAB_0043e87e;
  }
  (**(code **)(*(int *)(self[0xf2] + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)((int)self + 0x473) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)((int)self + 0x51d) + 8) + 0x60))();
  (**(code **)(*(int *)(self[0x173] + 8) + 0x60))();
  (**(code **)(*(int *)(self[0x1a2] + 8) + 0x60))();
  TSDictionaryList::GetFileTitle(local_14,self[0x1a],self[0x1b]);
  TEAAppWindows::LoadResourceString((int)result2,self[0xe],0x170c);
  std::string::append((int)local_14,(int)result2);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      rep = (int *)(str2 + -0xc);
      if (rep == &g_nullStringRep) {
        index = 1;
      }
      else if (rep == &g_nullStringRep) {
        index = 1;
      }
      else {
        *rep = *rep + -1;
        index = *rep + 1;
      }
      if (index != 0) goto LAB_0043e1fe;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0043e1fe:
  std::string::append((int)local_14,(int)(self + 0x22));
  PVWEdit::SetIntValue(self + 100,(int)local_14);
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      rep = (int *)(str3 + -0xc);
      if (rep == &g_nullStringRep) {
        index = 1;
      }
      else if (rep == &g_nullStringRep) {
        index = 1;
      }
      else {
        *rep = *rep + -1;
        index = *rep + 1;
      }
      if (index != 0) goto LAB_0043e87e;
    }
    operator_delete();
    str3 = 0;
  }
LAB_0043e87e:
  TSDictionarySaveDialog::UpdateOkButton((int)self);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e898  TSDictionarySaveDialog::Destroy   (36 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from TSDictionarySaveDialog's OWL::TWindow subobject vtable at 0x004f5a9c (through the this-adjusting thunk at 0x0043ee0a); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TSDictionarySaveDialog::vf9 [rtti:vtable]
void __cdecl TSDictionarySaveDialog::Destroy(int *self,INT_PTR result)

{
  if (self[0x19] == 2) {
    self[0x19] = 3;
    return;
  }
  PropertiesViewWindows::Destroy(self,result);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e8bc  TSDictionarySaveDialog::vf48   (63 bytes)   [rtti:vtable virtual slot 48]
void __cdecl TSDictionarySaveDialog::vf48(int self,byte *format)

{
  CHAR string_ [1024];
  
  sprintf(string_,format);
  SetWindowTextA(*(HWND *)(*(int *)(self + 0x24c) + 0xc),string_);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e8fc  TSDictionarySaveDialog::vf49   (29 bytes)   [rtti:vtable virtual slot 49]
void __cdecl TSDictionarySaveDialog::vf49(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0xc0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e91c  TSDictionarySaveDialog::Child7830_Notify1   (741 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 7830, code 1)
undefined4 __cdecl TSDictionarySaveDialog::Child7830_Notify1(int self)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 local_48;
  undefined1 pvwEdit [8];
  int str;
  undefined1 pvwEdit2 [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4f5944);
  if (-1 < *(int *)(self + 0x6c)) {
    *sehChainHead = local_48;
    return local_48;
  }
  iVar2 = *(int *)(self + 0x98);
  if ((iVar2 < 0) || (iVar1 = (**(code **)(*(int *)(self + 0x47f) + 0x24))(), iVar1 <= iVar2))
  goto LAB_0043eac2;
  PVWEdit::GetText((int)pvwEdit2,(int *)(self + 0x5cc));
  std::string::operator_assign(*(int *)(self + 0x98) * 0x10 + *(int *)(self + 0xa4),(int)pvwEdit2);
  if (str2 != 0) {
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
      if (iVar2 != 0) goto LAB_0043ea19;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0043ea19:
  PVWEdit::GetText((int)pvwEdit,(int *)(self + 400));
  std::string::operator_assign(*(int *)(self + 0x98) * 0x10 + *(int *)(self + 0xc4),(int)pvwEdit);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
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
      if (iVar2 != 0) goto LAB_0043eac2;
    }
    operator_delete();
    str = 0;
  }
LAB_0043eac2:
  *(undefined4 *)(self + 0x98) = 0xffffffff;
  iVar2 = FUN_004bfd60((int *)(self + 0x473));
  if ((iVar2 == 1) && (iVar2 = FUN_004bfdd8((int *)(self + 0x473),self + 0x98,1), iVar2 == 1))
  {
    PVWEdit::SetIntValue((int *)(self + 0x5cc),*(int *)(self + 0x98) * 0x10 + *(int *)(self + 0xa4)
                );
    PVWEdit::SetIntValue((int *)(self + 400),*(int *)(self + 0x98) * 0x10 + *(int *)(self + 0xc4));
  }
  else {
    (**(code **)(*(int *)(self + 0x5d8) + 0x24))();
    (**(code **)(*(int *)(self + 0x19c) + 0x24))();
  }
  (**(code **)(*(int *)(*(int *)(self + 0x51d) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x5cc) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x688) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0xe0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 400) + 8) + 0x60))();
  uVar3 = TSDictionarySaveDialog::UpdateOkButton(self);
  *sehChainHead = local_48;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ec04  OWL::TFileSaveDialog::~TFileSaveDialog   (175 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFileSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFileSaveDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f597c);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x5c;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x22,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x20,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043eea0  OWL::TOpenSaveDialog::~TOpenSaveDialog   (168 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TOpenSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TOpenSaveDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f5b24);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x5c;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x22,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x20,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef48  BitWriter::FlushWord   (40 bytes)   [analysis]
//   writes the pending 16-bit word of the bit stream to the file
//   file placement: inferred (address adjacency)
void __cdecl BitWriter::FlushWord(int *file)

{
  uint uVar1;
  
  uVar1 = FUN_004def90(&GHIDRA_STACK(0x00000008),2,1,file);
  if (uVar1 != 1) {
    (*(undefined4 *)&DAT_004f5b2c) = 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef70  BitWriter::BitWriter   (24 bytes)   [analysis]
//   bit stream on a FILE
//   file placement: inferred (address adjacency)
void __cdecl BitWriter::BitWriter(undefined4 *self,undefined4 file)

{
  *self = file;
  *(undefined2 *)(self + 1) = 0;
  self[2] = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef88  BitWriter::WriteBits   (140 bytes)   [analysis]
//   appends an nbits-long code to the 16-bit-word bit stream, flushing full words
//   file placement: inferred (address adjacency)
void __cdecl BitWriter::WriteBits(undefined4 *self,int nbits,uint code_)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0xf < (int)self[2]) {
    BitWriter::FlushWord((int *)*self);
    self[2] = 0;
    *(undefined2 *)(self + 1) = 0;
  }
  *(ushort *)(self + 1) = *(ushort *)(self + 1) | (short)code_ << ((byte)self[2] & 0x1f);
  iVar1 = 0x10 - self[2];
  if (iVar1 < nbits) {
    iVar2 = nbits - iVar1;
    uVar3 = code_ >> ((byte)iVar1 & 0x1f);
    BitWriter::FlushWord((int *)*self);
    *(short *)(self + 1) = (short)uVar3;
    if (0x10 < iVar2) {
      BitWriter::FlushWord((int *)*self);
      iVar2 = iVar2 + -0x10;
      *(short *)(self + 1) = (short)(uVar3 >> 0x10);
    }
    self[2] = iVar2;
  }
  else {
    self[2] = self[2] + nbits;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f014  BitWriter::WriteBytes   (65 bytes)   [analysis]
//   writes bytes through the Huffman code table
//   file placement: inferred (address adjacency)
void __cdecl BitWriter::WriteBytes(undefined4 *self,byte *bytes,int count)

{
  byte *pbVar1;
  
  pbVar1 = bytes + count;
  for (; bytes < pbVar1; bytes = bytes + 1) {
    BitWriter::WriteBits(self,(uint)(byte)(&DAT_00519d3c)[*bytes],(&DAT_0051993c)[*bytes]);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f058  BitWriter::AlignToWord   (32 bytes)   [analysis]
//   pads the stream to a word boundary
//   file placement: inferred (address adjacency)
void __cdecl BitWriter::AlignToWord(undefined4 *self)

{
  BitWriter::WriteBits(self,(uint)DAT_00519d3c,DAT_0051993c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f078  BitWriter::Flush   (30 bytes)   [analysis]
//   writes out any pending bits
//   file placement: inferred (address adjacency)
void __cdecl BitWriter::Flush(undefined4 *self)

{
  if (0 < (int)self[2]) {
    BitWriter::FlushWord((int *)*self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f098  ScaleFrequency   (137 bytes)   [analysis]
//   frequency scaled to the Huffman weight range (floating-point arithmetic not visible; ends in __ftol)
//   file placement: inferred (address adjacency)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl ScaleFrequency(uint count,uint total,uint range)

{
  double dVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),0x80);
  if (count != 0) {
    dVar1 = ((double)range * (double)count) / (double)total;
    FUN_004e3e60(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    uVar2 = __ftol();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f138  ReverseHuffmanCodes   (94 bytes)   [analysis]
//   reverses the bits of every byte code so the stream can be written low bit first
//   file placement: inferred (address adjacency)
void __stdcall ReverseHuffmanCodes(void)

{
  int i;
  uint uVar2;
  uint *puVar3;
  int local_18;
  byte *local_14;
  
  puVar3 = &DAT_0051993c;
  local_18 = 0;
  local_14 = &DAT_00519d3c;
  do {
    uVar2 = 0;
    for (i = 0; i < (int)(uint)*local_14; i = i + 1) {
      uVar2 = uVar2 * 2;
      if ((1 << ((byte)i & 0x1f) & *puVar3) != 0) {
        uVar2 = uVar2 | 1;
      }
    }
    *puVar3 = uVar2;
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
    puVar3 = puVar3 + 1;
  } while (local_18 < 0x100);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f198  HuffmanNodeLess   (47 bytes)   [analysis]
//   order of two Huffman nodes by weight
//   file placement: inferred (address adjacency)
undefined4 __cdecl HuffmanNodeLess(int *a,int *b)

{
  if (*(uint *)(*a + 0xc) < *(uint *)(*b + 0xc)) {
    return 1;
  }
  if (*(uint *)(*b + 0xc) < *(uint *)(*a + 0xc)) {
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f1c8  AddBitToSubtree   (58 bytes)   [analysis]
//   appends one bit to the code of every leaf under a Huffman tree node
//   file placement: inferred (address adjacency)
void __cdecl AddBitToSubtree(int *node,int bit)

{
  if (*node == 0) {
    node[5] = node[5] | bit << ((byte)node[4] & 0x1f);
    node[4] = node[4] + 1;
  }
  else {
    AddBitToSubtree((int *)*node,bit);
    AddBitToSubtree((int *)node[1],bit);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f204  StoreCodesAndFree   (64 bytes)   [analysis]
//   walks a Huffman (sub)tree storing each leaf byte code and length in the tables, freeing the nodes
//   file placement: inferred (address adjacency)
void __cdecl StoreCodesAndFree(int *node)

{
  int iVar1;
  
  if ((int *)*node == (int *)0x0) {
    iVar1 = node[2];
    (&DAT_0051993c)[iVar1] = node[5];
    (&DAT_00519d3c)[iVar1] = (char)node[4];
  }
  else {
    StoreCodesAndFree((int *)*node);
    StoreCodesAndFree((int *)node[1]);
  }
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f244  BuildHuffmanCodes   (340 bytes)   [analysis]
//   builds the Huffman tree from the byte frequencies and assigns each byte its code and length
//   file placement: inferred (address adjacency)
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __stdcall BuildHuffmanCodes(void)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  int i;
  int iVar6;
  int **ppiVar7;
  int local_418;
  int *local_414 [257];
  
  iVar6 = 0;
  uVar4 = 0;
  local_418 = 1;
  local_414[0] = &DAT_00519e3c;
  ppiVar7 = local_414 + 1;
  do {
    if (*local_414[0] != 0) {
      piVar1 = (int *)operator_new();
      *ppiVar7 = piVar1;
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = uVar4 & 0xff;
      iVar6 = iVar6 + 1;
      piVar1[3] = *local_414[0];
      piVar1[4] = 0;
      piVar1[5] = 0;
      ppiVar7 = ppiVar7 + 1;
    }
    uVar4 = uVar4 + 1;
    local_414[0] = local_414[0] + 1;
  } while ((int)uVar4 < 0x100);
  if (iVar6 == 0) {
    local_418 = -1;
  }
  else {
    _DAT_00519938 = iVar6;
    for (i = 0; i < iVar6 + -1; i = i + 1) {
      uVar4 = iVar6 - i;
      FUN_004e6244((undefined1 *)(local_414 + 1),uVar4,4,HuffmanNodeLess);
      AddBitToSubtree((int *)(&local_418)[uVar4],0);
      AddBitToSubtree(local_414[uVar4],1);
      piVar1 = (int *)operator_new();
      piVar1[3] = *(int *)((&local_418)[uVar4] + 0xc) + local_414[uVar4][3];
      piVar1[2] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[1] = (int)local_414[uVar4];
      *piVar1 = (&local_418)[uVar4];
      (&local_418)[uVar4] = (int)piVar1;
      local_414[uVar4] = (int *)0x0;
    }
    StoreCodesAndFree(local_414[1]);
    iVar6 = 0;
    pbVar2 = &DAT_00519d3c;
    do {
      if (0x20 < *pbVar2) break;
      iVar6 = iVar6 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar6 < 0x100);
    if (iVar6 < 0x100) {
      iVar6 = 0;
      local_418 = 0;
      piVar1 = &DAT_0051993c;
      puVar3 = &DAT_00519d3c;
      do {
        *puVar3 = 8;
        *piVar1 = iVar6;
        iVar6 = iVar6 + 1;
        piVar1 = piVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 < 0x100);
    }
  }
  return local_418;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f398  ParseDefinitionLine   (1400 bytes)   [analysis]
//   splits one definition line into headwords, qualifiers and text (RTF braces escaped)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0043f454) */
int __cdecl ParseDefinitionLine(int out,uint *line2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  int *strRep;
  undefined4 *sehChainHead;
  byte bVar10;
  char local_114;
  char local_113 [19];
  undefined *unused;
  undefined4 *unused2;
  undefined4 *unused3;
  undefined4 *dest;
  undefined4 *unused4;
  uint unused5;
  int unused6;
  int *newRep;
  int *newData;
  int unused7;
  undefined4 *unused8;
  undefined4 unused9;
  undefined1 unused10;
  undefined1 unused11;
  uint *unused12;
  uint *unused13;
  char *local_b8;
  char local_b4 [76];
  uint *local_68;
  uint *local_64;
  char *len;
  uint pos;
  uint *s;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_40;
  undefined2 unused14;
  undefined1 unused15;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  undefined4 *local_c;
  
  bVar10 = 0;
  __InitExceptBlockLDTC(0x4f5bd4);
  local_40 = DAT_004f5b30;
  unused14 = DAT_004f5b34;
  unused15 = DAT_004f5b36;
  uVar2 = FUN_004dcac0((byte *)line2,(byte *)&local_40,6);
  if (uVar2 != 0) {
    pcVar3 = strlen(line2);
    if ((pcVar3 != (char *)0x0) && (pcVar3[(int)line2 + -1] == '\n')) {
      pcVar3 = pcVar3 + -1;
    }
    ehContext = 8;
    std::string::string_from_buf(out,line2,(uint)pcVar3);
    *sehChainHead = sehPrevFrame;
    return out;
  }
  local_c = (undefined4 *)&g_emptyStringData;
  unused = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x2c;
  local_4c = 2;
  iVar7 = 0;
  local_50 = 0;
  local_54 = 0;
  while ((cVar1 = (char)*line2, cVar1 != '\n' && (cVar1 != '\0'))) {
    puVar5 = line2;
    if (iVar7 == 2) {
      local_54 = local_54 + -1;
    }
    else if (cVar1 == '\\') {
      puVar5 = (uint *)((int)line2 + 1);
      cVar1 = *(char *)puVar5;
      if (cVar1 < ']') {
        if (cVar1 == '\\') {
LAB_0043f4ef:
          pos = local_c[-1];
          s = puVar5;
          len = strlen(puVar5);
          std::string::replace((int)str,pos,0,(uint)s,(uint)len,0,(uint)len);
        }
        else if (cVar1 == '\'') {
          iVar7 = 1;
        }
        else if (cVar1 != '*') {
          if (cVar1 != '-') goto LAB_0043f54b;
          goto LAB_0043f52d;
        }
      }
      else if (cVar1 == '_') {
LAB_0043f52d:
        std::string::replace_fill((int)str,local_c[-1],0,1,0x2d);
      }
      else {
        if ((cVar1 == '{') || (cVar1 == '}')) goto LAB_0043f4ef;
LAB_0043f54b:
        iVar4 = isalpha((int)*(char *)puVar5);
        if (iVar4 == 0) {
          puVar5 = (uint *)((int)line2 + 2);
        }
        else {
          ehContext = 0x2c;
          local_64 = puVar5;
          do {
            puVar6 = puVar5;
            puVar5 = (uint *)((int)puVar6 + 1);
            iVar4 = isalpha((int)*(char *)puVar5);
          } while (iVar4 != 0);
          if (*(char *)puVar5 == '-') {
            puVar5 = (uint *)((int)puVar6 + 2);
          }
          ehContext = 0x2c;
          local_68 = puVar5;
          while (iVar4 = FUN_004e1368((int)(char)*puVar5), iVar4 != 0) {
            puVar5 = (uint *)((int)puVar5 + 1);
          }
          if ((int)puVar5 - (int)local_64 < 10) {
            local_114 = '|';
            strncpy((undefined4 *)local_113,local_64,(char *)((int)puVar5 - (int)local_64));
            *(char *)((int)puVar5 + ((int)local_113 - (int)local_64)) = '|';
            *(char *)((int)puVar5 + (int)(local_113 + (1 - (int)local_64))) = '\0';
            pcVar3 = "|bin|par|line|tab|emdash|endash|bullet|lquote|rquote|ldblquote|rdblquote|";
            pcVar8 = local_b4;
            for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + ((uint)bVar10 * -2 + 1) * 4;
              pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
            }
            *(undefined2 *)pcVar8 = *(undefined2 *)pcVar3;
            ehContext = 0x2c;
            local_b8 = thunk_FUN_004dcd18(local_b4,&local_114);
            if ((local_b8 != (char *)0x0) &&
               (std::string::replace_fill((int)str,local_c[-1],0,1,0x20), local_b4 == local_b8)) {
              unused13 = local_68;
              local_54 = atoi((char *)local_68);
            }
          }
          if ((char)*puVar5 != ' ') {
            puVar5 = (uint *)((int)puVar5 + -1);
          }
        }
      }
    }
    else if ((cVar1 != '{') && (cVar1 != '}')) {
      if (iVar7 == 0) {
        uVar2 = strcspn((char *)line2,&DAT_004f5d62 /* "\{}" */);
        ehContext = 0x2c;
        unused12 = line2;
        std::string::replace((int)str,local_c[-1],0,(uint)line2,uVar2,0,uVar2);
        puVar5 = (uint *)((int)line2 + (uVar2 - 1));
      }
      else {
        local_50 = local_50 * 0x10;
        iVar4 = (int)(char)*line2;
        if ((iVar4 < 0x30) || (0x39 < iVar4)) {
          iVar4 = (int)(char)*line2;
          if ((iVar4 < 0x61) || (0x66 < iVar4)) {
            iVar4 = (int)(char)*line2;
            if ((0x40 < iVar4) && (iVar4 < 0x47)) {
              local_50 = local_50 + iVar4 + -0x37;
            }
          }
          else {
            local_50 = local_50 + iVar4 + -0x57;
          }
        }
        else {
          local_50 = local_50 + iVar4 + -0x30;
        }
        local_4c = local_4c + -1;
        if (local_4c == 0) {
          unused11 = (undefined1)local_50;
          ehContext = 0x2c;
          unused10 = (undefined1)local_50;
          std::string::replace_fill((int)str,local_c[-1],0,1,(undefined1)local_50);
          local_4c = 2;
          iVar7 = 0;
          local_50 = 0;
        }
      }
    }
    line2 = (uint *)((int)puVar5 + 1);
  }
  ehContext = 0x38;
  unused9 = 0;
  *(undefined4 *)(out + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar2 = local_c[-1];
    newRep = std::string::__getRep(out,uVar2,uVar2);
    newData = newRep + 3;
    *(int **)(out + 8) = newData;
    unused6 = out;
    unused4 = local_c;
    dest = *(undefined4 **)(out + 8);
    unused5 = uVar2;
    memcpy(dest,local_c,uVar2);
  }
  else {
    unused8 = local_c;
    *(undefined4 **)(out + 8) = local_c;
    unused7 = out;
    strRep = (int *)(*(int *)(out + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x50;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        iVar7 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar7 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar7 = *strRep + 1;
      }
      if (iVar7 != 0) goto LAB_0043f8f5;
    }
    unused3 = local_c + -3;
    unused2 = local_c + -3;
    operator_delete();
  }
LAB_0043f8f5:
  *sehChainHead = sehPrevFrame;
  return out;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f910  ParseMappingLine   (649 bytes)   [analysis]
//   parses one line of the letter mapping (byte, letter class, display byte)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0043f954) */
int __cdecl ParseMappingLine(int mapping,char *line)

{
  uint len;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str3;
  undefined1 str2 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4f5c8c);
  local_c = (undefined4 *)&g_emptyStringData;
  iVar2 = FUN_004dcce8(line,&DAT_004f5d58);
  if (line[iVar2] != '\0') {
    pcVar4 = line + iVar2;
    pcVar3 = thunk_FUN_004dcc90(pcVar4,&DAT_004f5d58);
    if (pcVar3 != (char *)0x0) {
      iVar2 = std::string::string_from_buf((int)str,(undefined4 *)pcVar4,(int)pcVar3 - (int)pcVar4);
      std::string::operator_assign((int)str2,iVar2);
      if (str3 != 0) {
        if (*(int *)(str3 + -0xc) != -1) {
          rep = (int *)(str3 + -0xc);
          if (rep == &g_nullStringRep) {
            iVar2 = 1;
          }
          else if (rep == &g_nullStringRep) {
            iVar2 = 1;
          }
          else {
            *rep = *rep + -1;
            iVar2 = *rep + 1;
          }
          if (iVar2 != 0) goto LAB_0043fa35;
        }
        operator_delete();
        str3 = 0;
      }
    }
  }
LAB_0043fa35:
  *(undefined4 *)(mapping + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    rep = std::string::__getRep(mapping,len,len);
    *(int **)(mapping + 8) = rep + 3;
    memcpy(*(undefined4 **)(mapping + 8),local_c,len);
  }
  else {
    *(undefined4 **)(mapping + 8) = local_c;
    rep = (int *)(*(int *)(mapping + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      rep = local_c + -3;
      if (rep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar2 = *rep + 1;
      }
      if (iVar2 != 0) goto LAB_0043fb7e;
    }
    operator_delete();
  }
LAB_0043fb7e:
  *sehChainHead = sehPrevFrame;
  return mapping;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fb9c  WriteDefinitionRecord   (476 bytes)   [analysis]
//   writes one definition record (headwords, qualifiers and text, XOR 0xBD) and returns its offset
//   file placement: inferred (address adjacency)
uint __cdecl WriteDefinitionRecord(int *writer,int definition)

{
  int *newRep;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  byte *buffer;
  
  __InitExceptBlockLDTC(0x4f5d20);
  buffer = (byte *)0x0;
  iVar4 = *(int *)(*(int *)(definition + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar3 = *(uint *)(*(int *)(definition + 8) + -4);
    newRep = std::string::__getRep(str,uVar3,uVar3);
    buffer = (byte *)(newRep + 3);
    memcpy((undefined4 *)buffer,*(undefined4 **)(definition + 8),uVar3);
  }
  else {
    buffer = *(byte **)(definition + 8);
    pbVar6 = buffer + -0xc;
    if (pbVar6 != (byte *)&g_nullStringRep) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (1 < *(int *)(buffer + -0xc) + 1) {
    std::string::__unshare((int)str);
  }
  pbVar5 = buffer + -0xc;
  pbVar6 = buffer;
  if (pbVar5 != (byte *)&g_nullStringRep) {
    pbVar5[0] = 0xff;
    pbVar5[1] = 0xff;
    pbVar5[2] = 0xff;
    pbVar5[3] = 0xff;
  }
  while( true ) {
    if (1 < *(int *)(buffer + -0xc) + 1) {
      std::string::__unshare((int)str);
    }
    pbVar5 = buffer + -0xc;
    if (pbVar5 != (byte *)&g_nullStringRep) {
      pbVar5[0] = 0xff;
      pbVar5[1] = 0xff;
      pbVar5[2] = 0xff;
      pbVar5[3] = 0xff;
    }
    if (buffer + *(int *)(buffer + -4) <= pbVar6) break;
    *pbVar6 = *pbVar6 ^ 0xbd;
    pbVar6 = pbVar6 + 1;
  }
  std::string::replace_fill((int)str,*(uint *)(buffer + -4),0,1,0xbd);
  uVar3 = *(uint *)(buffer + -4);
  uVar2 = FUN_004def90(buffer,1,uVar3,writer);
  uVar3 = (uint)(uVar3 == uVar2);
  if (buffer != (byte *)0x0) {
    if (*(int *)(buffer + -0xc) != -1) {
      pbVar6 = buffer + -0xc;
      if (pbVar6 == (byte *)&g_nullStringRep) {
        iVar4 = 1;
      }
      else if (pbVar6 == (byte *)&g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar4 = *(int *)pbVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0043fd66;
    }
    operator_delete();
  }
LAB_0043fd66:
  *sehChainHead = sehPrevFrame;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fd78  DefinitionRecordLess   (29 bytes)   [analysis]
//   order of two definition entries by their stored offset
//   file placement: inferred (address adjacency)
bool __cdecl DefinitionRecordLess(int a,int b)

{
  return *(int *)(*(int *)(a + 8) + 0x20) < *(int *)(*(int *)(b + 8) + 0x20);
}

} // namespace tea
