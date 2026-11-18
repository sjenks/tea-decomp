// TEA.exe — application module "DefinitionViewWindows"
// 41 functions, 0x0046a3c4..0x00472370. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0046a3c4  DefinitionViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: DefinitionViewWindows::Find [rtti:vtable]; DefinitionViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl DefinitionViewWindows::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&DefinitionViewWindows::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = PropertiesViewWindows::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a40c  DefinitionViewWindows::DefinitionViewWindows   (625 bytes)   [rtti:vtable-store constructor]
//   constructor: stores DefinitionViewWindows's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x0046a58b) */
/* WARNING: Removing unreachable block (ram,0x0046a5d3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffcc : 0x0046a5db */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl DefinitionViewWindows::DefinitionViewWindows(int *self,int vbasesBuilt,int param_3,int param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fd7c8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x8c);
    self[0x8c] = (int)(self + 0x89);
    self[0x8d] = (int)(self + 0x8a);
    self[1] = (int)(self + 0x89);
    self[2] = (int)(self + 0x8a);
    self[0x88] = 0;
    self[0x8b] = 0;
    self[0x89] = (int)&OWL::TEventHandler::vftable;
    self[0x8a] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x8c,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x1c0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x1c0;
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x4fd385,0,param_3,(uint *)0x3110,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x1c0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x1c0;
  self[3] = (int)&DefinitionViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004ff124;
  *(undefined ***)self[2] = &PTR_LAB_004ff130;
  *(undefined ***)(*self + 8) = &DefinitionViewWindows::vftable_TWindow;
  self[0x18] = param_4;
  self[0x1b] = 0;
  self[0x1c] = 0;
  self[0x20] = 0;
  self[0x1a] = 0x40;
  self[0x22] = 0;
  self[0x25] = 0;
  self[0x26] = 0;
  self[0x2a] = 0;
  self[0x24] = 8;
  self[0x2c] = -1;
  self[0x2d] = 0;
  OWL::TStatic::TStatic_4c7a28(self + 0x2e,0,*self,0x3638,0,0);
  OWL::TTreeWindow::TTreeWindow((int *)((int)self + 0x166),0,*self,0x3624,0);
  self[0x85] = 0;
  *(undefined1 *)(self + 0x86) = 0;
  *(undefined1 *)((int)self + 0x219) = 0;
  PropertiesViewWindows::SetHelpTopic(self,0x3282);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a6a4  DefinitionViewWindows::~DefinitionViewWindows   (555 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as DefinitionViewWindows::_dtor
void __cdecl DefinitionViewWindows::_dtor(int *self,uint dtorFlags)

{
  int *control;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fd82c);
  if (self != (int *)0x0) {
    self[3] = (int)&DefinitionViewWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004ff124;
    *(undefined ***)self[2] = &PTR_LAB_004ff130;
    *(undefined ***)(*self + 8) = &DefinitionViewWindows::vftable_TWindow;
    OWL::TImageList::_dtor(self[0x2d],3);
    if (self[0x85] != 0) {
      (*(code *)**(undefined4 **)(self[0x85] + 0xc))();
    }
    OWL::TTreeWindow::_dtor((int *)((int)self + 0x166),2);
    control = self + 0x2e;
    *(int *)(self[0x2f] + -4) = *(int *)(self[0x2f] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x2f] + -4) = *(int *)(self[0x2f] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x2f] + -4) = *(int *)(self[0x2f] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x38,0);
    *(int *)(self[0x2f] + -4) = *(int *)(self[0x2f] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x36,0);
    std::_Destroy_range_DefinitionRecord(self + 0x24,self[0x25],self[0x26]);
    operator_delete();
    std::_Destroy_range_string(self + 0x1a,self[0x1b],self[0x1c]);
    operator_delete();
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x1c0;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x1c0;
    PropertiesViewWindows::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x1c0;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x1c0;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x8c,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x8a,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a8f4  DefinitionViewWindows::CeShared_46a8f4   (45 bytes)   [owl:response-table message-handler]
//   one handler for 5 table entries: &Edit > &Copy	Ctrl+C; &Go To > &Back	Alt+Left Arrow; &Go To > &Forward	Alt+Right Arrow; &Go To > &Previous Result	Alt+Up Arrow; &Go To > &Next Result	Alt+Down Arrow
//   also: DefinitionViewWindows::CeShared_46a8f4 [owl:response-table]; DefinitionViewWindows::CeShared_46a8f4 [owl:response-table]; DefinitionViewWindows::CeShared_46a8f4 [owl:response-table]; DefinitionViewWindows::CeShared_46a8f4 [owl:response-table]
void __cdecl DefinitionViewWindows::CeShared_46a8f4(int *self,undefined4 *commandEnabler)

{
  DefinitionViewWindows::NavigateResults(self,commandEnabler[1]);
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a924  DefinitionViewWindows::CmShared_46a924   (1924 bytes)   [owl:response-table message-handler]
//   one handler for 20 table entries: &Edit > &Copy	Ctrl+C; &Edit > &Select All	Ctrl+A; &Edit > &Lookup...	Ctrl+Enter; &Edit > Lookup in &New Window...	Shift+Ctrl+Enter; &Go To > &Back	Alt+Left Arrow; &Go To > &Forward	Alt+Right Arrow; &Go To > &Previous Result	Alt+Up Arrow; &Go To > &Next Result	Alt+Down Arrow; &Go To > &Previous Definition	Shift+Ctrl+Tab; &Go To > &Next Definition	Ctrl+Tab; id 12670; id 12671; …
//   also: DefinitionViewWindows::CmShared_46a924 [owl:response-table]; DefinitionViewWindows::CmShared_46a924 [owl:response-table]; DefinitionViewWindows::CmShared_46a924 [owl:response-table]; DefinitionViewWindows::CmShared_46a924 [owl:response-table]
void __cdecl DefinitionViewWindows::CmShared_46a924(int *self,uint param_2)

{
  int word_;
  int last;
  uint uVar3;
  int iVar4;
  int first;
  undefined4 uVar6;
  undefined4 *sehChainHead;
  char cVar7;
  undefined4 sehPrevFrame;
  undefined4 dest;
  int local_1e0;
  undefined4 dest2 [12];
  undefined4 dest3;
  int local_180;
  undefined4 dest4 [12];
  undefined4 dest5 [12];
  byte dest6 [4];
  int local_f0;
  int *local_cc;
  byte dest7 [4];
  int local_c0;
  int *local_9c;
  undefined4 dest8;
  int local_90;
  undefined4 dest9;
  int lParam;
  int *local_3c;
  undefined4 dest10;
  int local_30;
  
  __InitExceptBlockLDTC(0x4fd954);
  uVar3 = DefinitionViewWindows::NavigateResults(self,param_2);
  if (uVar3 == 0) goto LAB_0046b094;
  iVar4 = self[0x22];
  if ((param_2 < 0x317e) || (0x3187 < param_2)) {
    if (param_2 == 0x3174) {
      iVar4 = self[0x22] + 1;
    }
    else if (param_2 == 0x316a) {
      iVar4 = self[0x22] + -1;
    }
  }
  else {
    iVar4 = DefinitionViewWindows::GetDefinitionCount((int)self);
    iVar4 = iVar4 + (param_2 - 0x317e);
  }
  if (iVar4 != self[0x22]) {
    self[0x22] = iVar4;
    iVar4 = self[0x26];
    word_ = self[0x25];
    first = DefinitionViewWindows::CompareDefinitions_40b5a8(iVar4,iVar4,word_);
    last = self[0x26];
    iVar4 = iVar4 - word_;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x7f;
    }
    self[0x26] = self[0x26] + (iVar4 >> 7) * -0x80;
    std::_Destroy_range_DefinitionRecord(self + 0x24,first,last);
    TEAAppWindows::FindDefinitions(self[0xe],self[0x1b] + (self[0x22] + -1) * 0x10,(int)(self + 0x24));
    DefinitionViewWindows::RenderDefinitions(self,0,0);
    DefinitionViewWindows::HighlightWord((int)self);
    goto LAB_0046b094;
  }
  if ((int)param_2 < 0x31c5) {
    if (param_2 != 0x31c4) {
      if (param_2 == 0x1d4c) {
        FUN_004a76a8(*(int *)self[0x85],0x301,0,0);
        goto LAB_0046b094;
      }
      if (param_2 == 0x1d56) {
        (**(code **)(*(int *)(self[0x85] + 0xc) + 0x3c))();
        goto LAB_0046b094;
      }
      if (param_2 != 0x31ba) goto LAB_0046b078;
    }
    if (param_2 == 0x31ba) {
      iVar4 = 1;
    }
    else {
      iVar4 = -1;
    }
    TEAAppWindows::MoveCaretAndShowDefinition(self[0xe],*(int *)(*self + 0x14),iVar4,0);
  }
  else {
    if ((param_2 == 0x3642) || (param_2 == 0x364c)) {
      iVar4 = (int)self + 0x166;
      FUN_004cb6ec(&dest10,iVar4);
      FUN_004cb3b4(&dest9,iVar4,0xffff0000);
      FUN_004cb3b4(&dest8,iVar4,0xffff0000);
      iVar4 = lParam;
      if (lParam == -0x10000) {
        iVar4 = 0;
      }
      uVar6 = FUN_004a76a8(*local_3c,0x110a,4,iVar4);
      FUN_004cb3b4((undefined4 *)dest7,local_3c,uVar6);
      while (iVar4 = FUN_004cbb48(dest7), iVar4 != 0) {
        if ((local_90 == local_30) && (param_2 == 0x3642)) {
          FUN_004cb40c(&dest9,(undefined4 *)dest7);
        }
        else if ((local_c0 == local_30) && (param_2 == 0x364c)) {
          FUN_004cb40c(&dest9,&dest8);
        }
        FUN_004cb40c(&dest8,(undefined4 *)dest7);
        iVar4 = local_c0;
        if (local_c0 == -0x10000) {
          iVar4 = 0;
        }
        uVar6 = FUN_004a76a8(*local_9c,0x110a,4,iVar4);
        FUN_004cb3b4((undefined4 *)dest6,local_9c,uVar6);
        while (iVar4 = FUN_004cbb48(dest6), iVar4 != 0) {
          if ((local_90 == local_30) && (param_2 == 0x3642)) {
            FUN_004cb40c(&dest9,(undefined4 *)dest6);
          }
          else if ((local_f0 == local_30) && (param_2 == 0x364c)) {
            FUN_004cb40c(&dest9,&dest8);
          }
          FUN_004cb40c(&dest8,(undefined4 *)dest6);
          iVar4 = local_f0;
          if (local_f0 == -0x10000) {
            iVar4 = 0;
          }
          uVar6 = FUN_004a76a8(*local_cc,0x110a,1,iVar4);
          FUN_004cb3b4(dest5,local_cc,uVar6);
          FUN_004cb40c((undefined4 *)dest6,dest5);
          operator_delete_array();
        }
        iVar4 = local_c0;
        if (local_c0 == -0x10000) {
          iVar4 = 0;
        }
        uVar6 = FUN_004a76a8(*local_9c,0x110a,1,iVar4);
        FUN_004cb3b4(dest4,local_9c,uVar6);
        FUN_004cb40c((undefined4 *)dest7,dest4);
        operator_delete_array();
        operator_delete_array();
      }
      FUN_004cb3b4(&dest3,(int)self + 0x166,0xffff0000);
      cVar7 = local_180 == lParam;
      operator_delete_array();
      if (cVar7 != '\0') {
        if (param_2 == 0x3642) {
          iVar4 = lParam;
          if (lParam == -0x10000) {
            iVar4 = 0;
          }
          uVar6 = FUN_004a76a8(*local_3c,0x110a,4,iVar4);
          FUN_004cb3b4(dest2,local_3c,uVar6);
          FUN_004cb40c(&dest9,dest2);
          operator_delete_array();
        }
        else {
          FUN_004cb40c(&dest9,&dest8);
        }
      }
      FUN_004cb3b4(&dest,(int)self + 0x166,0xffff0000);
      cVar7 = local_1e0 != lParam;
      operator_delete_array();
      if (cVar7 != '\0') {
        FUN_004a76a8(*local_3c,0x110b,9,lParam);
      }
      operator_delete_array();
      operator_delete_array();
      operator_delete_array();
      operator_delete_array();
      goto LAB_0046b094;
    }
LAB_0046b078:
    if ((param_2 < 0x317e) || (0x3187 < param_2)) {
      DefinitionViewWindows::FollowLinkAt(self,param_2,0);
    }
  }
LAB_0046b094:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b0fc  DefinitionViewWindows::NavigateResults   (495 bytes)   [analysis]
//   previous/next-result commands in a definition window: moves the result list's caret and reports whether the command applies
uint __cdecl DefinitionViewWindows::NavigateResults(int *self,uint cmdId)

{
  int key;
  int *strRep;
  uint uVar3;
  undefined4 *sehChainHead;
  undefined4 charFormat [17];
  int unused;
  uint local_40;
  uint local_3c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int str;
  
  __InitExceptBlockLDTC(0x4fda74);
  OWL::TCharFormat::TCharFormat(charFormat,(int *)self[0x85],'\x01',0xf800003f);
  uVar3 = 1;
  if ((int)cmdId < 0x31bb) {
    if (cmdId == 0x31ba) {
LAB_0046b1b0:
      if (cmdId == 0x31ba) {
        key = 1;
      }
      else {
        key = -1;
      }
      uVar3 = TEAAppWindows::MoveCaretAndShowDefinition(self[0xe],*(int *)(*self + 0x14),key,1);
      goto LAB_0046b2d8;
    }
    if (cmdId == 0x1d4c) {
      (**(code **)(*(int *)(self[0x85] + 0xc) + 0x34))();
      uVar3 = (uint)(local_3c < local_40);
      goto LAB_0046b2d8;
    }
    if (cmdId == 0x316a) {
      uVar3 = (uint)(1 < (uint)self[0x22]);
      goto LAB_0046b2d8;
    }
    if (cmdId == 0x3174) {
      key = self[0x1c] - self[0x1b];
      if (key < 0) {
        key = key + 0xf;
      }
      uVar3 = (uint)((uint)self[0x22] < (uint)(key >> 4));
      goto LAB_0046b2d8;
    }
  }
  else {
    if (cmdId == 0x31c4) goto LAB_0046b1b0;
    if ((cmdId == 0x3642) || (cmdId == 0x364c)) goto LAB_0046b2d8;
  }
  if ((cmdId != 0x1d56) && ((cmdId < 0x317e || (0x3187 < cmdId)))) {
    ehContext = 8;
    (**(code **)(self[3] + 0xb0))();
    uVar3 = (uint)(*(int *)(str + -4) != 0);
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        strRep = (int *)(str + -0xc);
        if (strRep == &g_nullStringRep) {
          key = 1;
        }
        else if (strRep == &g_nullStringRep) {
          key = 1;
        }
        else {
          *strRep = *strRep + -1;
          key = *strRep + 1;
        }
        if (key != 0) goto LAB_0046b2d8;
      }
      unused = str + -0xc;
      operator_delete();
    }
  }
LAB_0046b2d8:
  *sehChainHead = sehPrevFrame;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b2ec  DefinitionViewWindows::BuildContextMenu   (2005 bytes)   [analysis]
//   fills the rich edit's context menu: one "%d " item per definition and the lookup entries
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DefinitionViewWindows::BuildContextMenu(int self,int hMenu)

{
  char *len;
  int *lookupConfiguration;
  int iVar3;
  UINT uFlags;
  int position;
  uint uVar5;
  UINT *pUVar6;
  UINT *pUVar7;
  undefined4 *sehChainHead;
  byte bVar8;
  undefined4 *hMenu4;
  uint uVar10;
  undefined1 *puVar11;
  UINT local_ec;
  uint auStack_e8 [5];
  undefined1 *unused;
  undefined4 unused2;
  LPCSTR unused3;
  LPCSTR unused4;
  int *strRep;
  UINT flags;
  UINT_PTR idNewItem;
  LPCSTR unused5;
  uint pos;
  uint *local_b0;
  uint local_a4 [3];
  uint local_98;
  HMENU hMenu2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int str5;
  undefined1 alloc [8];
  int *newItem;
  undefined1 str2 [8];
  int str6;
  undefined4 local_3c [3];
  undefined1 str3 [8];
  LPCSTR newItem2;
  undefined4 local_20;
  HMENU hMenu3;
  undefined1 str4 [8];
  int str7;
  
  bVar8 = 0;
  __InitExceptBlockLDTC(0x4fdb50);
  hMenu2 = GetSubMenu(*(HMENU *)(hMenu + 4),0);
  if (hMenu2 != (HMENU)0x0) {
    ehContext = 8;
    OWL::TPopupMenu::TPopupMenu_497f68(&local_20,hMenu2,0);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x14;
    local_98 = DefinitionViewWindows::GetDefinitionCount(self);
    uVar5 = 0;
    while( true ) {
      position = *(int *)(self + 0x70) - *(int *)(self + 0x6c);
      if (position < 0) {
        position = position + 0xf;
      }
      if (((uint)(position >> 4) < local_98) || (9 < uVar5)) break;
      sprintf((undefined1 *)local_a4,&DAT_004fd390 /* "%d " */);
      ehContext = 0x2c;
      std::string::string_from_cstr((int)str3,local_a4);
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x20;
      local_b0 = *(uint **)(*(int *)(self + 0x6c) + 8 + (local_98 - 1) * 0x10);
      pos = *(uint *)(newItem2 + -4);
      len = strlen(local_b0);
      std::string::replace((int)str3,pos,0,(uint)local_b0,(uint)len,0,(uint)len);
      std::string::replace_fill((int)str3,(uint)(uVar5 == 9),0,1,0x26);
      flags = 0;
      if (*(uint *)(self + 0x88) == local_98) {
        flags = 8;
      }
      unused5 = newItem2;
      idNewItem = uVar5 + 0x317e;
      AppendMenuA(hMenu3,flags,idNewItem,newItem2);
      ehDtorCount = ehDtorCount + -1;
      if (newItem2 != (LPCSTR)0x0) {
        if (*(int *)(newItem2 + -0xc) != -1) {
          strRep = (int *)(newItem2 + -0xc);
          if (strRep == &g_nullStringRep) {
            position = 1;
          }
          else if (strRep == &g_nullStringRep) {
            position = 1;
          }
          else {
            *strRep = *strRep + -1;
            position = *strRep + 1;
          }
          if (position != 0) goto LAB_0046b510;
        }
        unused4 = newItem2 + -0xc;
        unused3 = newItem2 + -0xc;
        operator_delete();
        unused2 = 0;
        unused = str3;
        newItem2 = (LPCSTR)0x0;
      }
LAB_0046b510:
      ehContext = 0x14;
      local_98 = local_98 + 1;
      uVar5 = uVar5 + 1;
    }
    ehDtorCount = ehDtorCount + -2;
    OWL::TMenu::_dtor(&local_20,0);
    ehContext = 0;
  }
  hMenu2 = GetSubMenu(*(HMENU *)(hMenu + 4),4);
  if (hMenu2 != (HMENU)0x0) {
    ehContext = 0x44;
    OWL::TPopupMenu::TPopupMenu_497f68(local_3c,hMenu2,0);
    hMenu4 = local_3c;
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x50;
    position = 1;
    lookupConfiguration = (int *)GetLookupConfiguration(*(int *)(self + 0x38));
    LookupConfiguration::FillMenu(lookupConfiguration,(int)hMenu4,position);
    ehDtorCount = ehDtorCount + -2;
    OWL::TMenu::_dtor(local_3c,0);
  }
  pUVar6 = &DAT_004fd35c;
  pUVar7 = &local_ec;
  for (position = 6; position != 0; position = position + -1) {
    *pUVar7 = *pUVar6;
    pUVar6 = pUVar6 + (uint)bVar8 * -2 + 1;
    pUVar7 = pUVar7 + (uint)bVar8 * -2 + 1;
  }
  ehContext = 0x68;
  (**(code **)(*(int *)(self + 0xc) + 0xb0))();
  ehDtorCount = ehDtorCount + 1;
  if (*(int *)(str7 + -4) != 0) {
    puVar11 = str4;
    uVar5 = 2;
    ehContext = 0x74;
    position = std::string::string_from_cstr((int)str2,(uint *)&DAT_004fd3d1 /* " """ */);
    ehDtorCount = ehDtorCount + 1;
    position = std::string::insert(position,uVar5,(int)puVar11);
    std::string::operator_assign((int)str4,position);
    ehDtorCount = ehDtorCount + -1;
    if (str6 != 0) {
      if (*(int *)(str6 + -0xc) != -1) {
        lookupConfiguration = (int *)(str6 + -0xc);
        if (lookupConfiguration == &g_nullStringRep) {
          position = 1;
        }
        else if (lookupConfiguration == &g_nullStringRep) {
          position = 1;
        }
        else {
          *lookupConfiguration = *lookupConfiguration + -1;
          position = *lookupConfiguration + 1;
        }
        if (position != 0) goto LAB_0046b700;
      }
      operator_delete();
      str6 = 0;
    }
  }
LAB_0046b700:
  uVar5 = 0;
  do {
    ehContext = 0x98;
    puVar11 = str4;
    uVar10 = auStack_e8[uVar5 * 3];
    position = std::string::string_from_cstr((int)str,(uint *)auStack_e8[uVar5 * 3 + 1]);
    ehDtorCount = ehDtorCount + 1;
    iVar3 = std::string::insert(position,uVar10,(int)puVar11);
    newItem = (int *)0x0;
    position = *(int *)(*(int *)(iVar3 + 8) + -0xc);
    if (position == -1 || position + 1 < 0) {
      uVar10 = *(uint *)(*(int *)(iVar3 + 8) + -4);
      newItem = std::string::__getRep(alloc,uVar10,uVar10);
      newItem = newItem + 3;
      memcpy(newItem,*(undefined4 **)(iVar3 + 8),uVar10);
    }
    else {
      newItem = *(int **)(iVar3 + 8);
      lookupConfiguration = *(int **)(iVar3 + 8) + -3;
      if (lookupConfiguration != &g_nullStringRep) {
        *lookupConfiguration = *lookupConfiguration + 1;
      }
    }
    if (str5 != 0) {
      if (*(int *)(str5 + -0xc) != -1) {
        lookupConfiguration = (int *)(str5 + -0xc);
        if (lookupConfiguration == &g_nullStringRep) {
          position = 1;
        }
        else if (lookupConfiguration == &g_nullStringRep) {
          position = 1;
        }
        else {
          *lookupConfiguration = *lookupConfiguration + -1;
          position = *lookupConfiguration + 1;
        }
        if (position != 0) goto LAB_0046b8d1;
      }
      operator_delete();
      str5 = 0;
    }
LAB_0046b8d1:
    ehContext = 0x8c;
    uFlags = GetMenuState(*(HMENU *)(hMenu + 4),(&local_ec)[uVar5 * 3],0);
    ModifyMenuA(*(HMENU *)(hMenu + 4),(&local_ec)[uVar5 * 3],uFlags,(&local_ec)[uVar5 * 3],
                (LPCSTR)newItem);
    ehDtorCount = ehDtorCount + -1;
    if (newItem != (int *)0x0) {
      if (newItem[-3] != -1) {
        lookupConfiguration = newItem + -3;
        if (lookupConfiguration == &g_nullStringRep) {
          position = 1;
        }
        else if (lookupConfiguration == &g_nullStringRep) {
          position = 1;
        }
        else {
          *lookupConfiguration = *lookupConfiguration + -1;
          position = *lookupConfiguration + 1;
        }
        if (position != 0) goto LAB_0046b9ed;
      }
      operator_delete();
      newItem = (int *)0x0;
    }
LAB_0046b9ed:
    ehContext = 0x5c;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      lookupConfiguration = (int *)(str7 + -0xc);
      if (lookupConfiguration == &g_nullStringRep) {
        position = 1;
      }
      else if (lookupConfiguration == &g_nullStringRep) {
        position = 1;
      }
      else {
        *lookupConfiguration = *lookupConfiguration + -1;
        position = *lookupConfiguration + 1;
      }
      if (position != 0) goto LAB_0046baac;
    }
    operator_delete();
  }
LAB_0046baac:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bac4  DefinitionViewWindows::SetupWindow   (429 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from DefinitionViewWindows's OWL::TWindow subobject vtable at 0x004ff13c (through the this-adjusting thunk at 0x004739d1); slot name identified from OWL::TWindow's own implementation of that slot
//   also: DefinitionViewWindows::vf11 [rtti:vtable]
void __cdecl DefinitionViewWindows::SetupWindow(int *self)

{
  int iVar1;
  int x;
  undefined4 *sehChainHead;
  tagRECT rect;
  int y;
  int x2;
  int y2;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  LPARAM *local_c;
  int *definitionRichEdit;
  
  __InitExceptBlockLDTC(0x4fdc44);
  unused4 = 0xc4;
  unused5 = 0xa0;
  unused2 = 0x6c;
  unused3 = 4;
  rect.right = 0x130;
  rect.left = 0x6c;
  rect.top = 4;
  rect.bottom = 0xa4;
  MapDialogRect(*(HWND *)(*self + 0xc),&rect);
  definitionRichEdit = (int *)operator_new();
  if (definitionRichEdit != (int *)0x0) {
    ehContext = 0x14;
    DefinitionRichEdit::DefinitionRichEdit(definitionRichEdit,0,self,&rect.left);
    ehContext = 8;
  }
  self[0x85] = (int)definitionRichEdit;
  PropertiesViewWindows::SetupWindow(self);
  local_c = (LPARAM *)operator_new();
  if (local_c != (int *)0x0) {
    ehContext = 0x2c;
    unused = 0xffffff;
    FUN_004945ec(local_c);
    ehContext = 0x20;
  }
  self[0x2d] = (int)local_c;
  FUN_004a76a8(*(int *)((int)self + 0x166),0x1109,0,*local_c);
  x = PropertiesViewWindows::LoadDword((int)self,(uint *)"SplitterPosition",
                       *(undefined4 *)(*(int *)self[0x85] + 0x20));
  iVar1 = *(int *)((int)self + 0x166);
  y2 = *(int *)(iVar1 + 0x24);
  x2 = *(int *)(iVar1 + 0x20);
  FUN_004a7aa0(iVar1,(HWND)0x0,x2,y2,
               (*(int *)(iVar1 + 0x28) + x) - *(int *)(*(int *)self[0x85] + 0x20),
               *(int *)(iVar1 + 0x2c),0x21c);
  iVar1 = *(int *)self[0x85];
  y = *(int *)(iVar1 + 0x24);
  FUN_004a7aa0(iVar1,(HWND)0x0,x,y,*(int *)(iVar1 + 0x28),*(int *)(iVar1 + 0x2c),0x21c);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bc90  DefinitionViewWindows::Destroy   (27 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from DefinitionViewWindows's OWL::TWindow subobject vtable at 0x004ff13c (through the this-adjusting thunk at 0x00473a8e); slot name identified from OWL::TWindow's own implementation of that slot
//   also: DefinitionViewWindows::vf9 [rtti:vtable]
void __cdecl DefinitionViewWindows::Destroy(int *self)

{
  (**(code **)(*(int *)(*(int *)(*self + 0x14) + 8) + 0x18))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bcac  DefinitionViewWindows::SetupMoveableControls   (322 bytes)   [rtti:vtable virtual slot 47]
//   vtable slot 47 (introduced by PropertiesViewWindows); registers the controls that move or stretch when the window is resized
void __cdecl DefinitionViewWindows::SetupMoveableControls(int *self)

{
  int xFactor;
  tagRECT *pRect;
  LONG *pLVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  tagRECT rect;
  LONG control [4];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int *control2;
  int *control3;
  int *control4;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4fdcac);
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_004a7a6c(*self,&rect);
  pRect = &rect;
  pLVar3 = control;
  for (xFactor = 4; xFactor != 0; xFactor = xFactor + -1) {
    *pLVar3 = pRect->left;
    pRect = (tagRECT *)((int)pRect + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  control4 = (int *)operator_new();
  if (control4 != (int *)0x0) {
    ehContext = 0x14;
    PropertiesViewWindows::MoveableControl::MoveableControl(control4,(int)control,self[0x2e],3,0);
    ehContext = 8;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control4);
  control3 = (int *)operator_new();
  if (control3 != (int *)0x0) {
    ehContext = 0x2c;
    PropertiesViewWindows::MoveableControl::MoveableControl(control3,(int)control,*(int *)((int)self + 0x166),0,3);
    ehContext = 0x20;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control3);
  control2 = (int *)operator_new();
  if (control2 != (int *)0x0) {
    ehContext = 0x44;
    if (self[0x85] == 0) {
      xFactor = self[0x85];
    }
    else {
      xFactor = *(int *)self[0x85];
    }
    PropertiesViewWindows::MoveableControl::MoveableControl(control2,(int)control,xFactor,3,3);
    ehContext = 0x38;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bdf0  DefinitionViewWindows::OnSplitterButtonDown   (62 bytes)   [rtti:vtable virtual slot 48]
//   vtable slot 48; mouse down on the splitter between the tabs and the text: captures the mouse
void __cdecl DefinitionViewWindows::OnSplitterButtonDown(int *self,undefined4 param_2,int *rect)

{
  undefined4 childRectOnScreen;
  
  childRectOnScreen = GetChildRectOnScreen(self,rect);
  *(char *)((int)self + 0x219) = (char)childRectOnScreen;
  if ((char)childRectOnScreen != '\0') {
    SetCapture(*(HWND *)(*self + 0xc));
  }
  OWL::TWindow::EvLButtonDown(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046be30  DefinitionViewWindows::OnSplitterDrag   (451 bytes)   [rtti:vtable virtual slot 49]
//   vtable slot 49; dragging the splitter: resizes the two parts
void __cdecl DefinitionViewWindows::OnSplitterDrag(int *self,byte param_2,int *rect)

{
  int iVar1;
  int x;
  int cy;
  int y;
  int x2;
  undefined4 childRectOnScreen;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  childRectOnScreen = GetChildRectOnScreen(self,rect);
  if ((char)childRectOnScreen == '\0') {
    FUN_004a7bfc(*self,0,0x7f00);
  }
  else {
    FUN_004a7bfc(*self,0,0x7f84);
  }
  if (*(char *)((int)self + 0x219) != '\0') {
    if ((param_2 & 1) == 0) {
      *(undefined1 *)((int)self + 0x219) = 0;
      DefinitionViewWindows::SaveSplitterPosition(self);
      return;
    }
    iVar1 = *(int *)((int)self + 0x166);
    x = *(int *)(iVar1 + 0x20);
    iVar7 = x + *(int *)(iVar1 + 0x28);
    iVar8 = *(int *)self[0x85];
    cy = *(int *)(iVar8 + 0x2c);
    y = *(int *)(iVar8 + 0x24);
    x2 = *(int *)(iVar8 + 0x20);
    iVar8 = x2 + *(int *)(iVar8 + 0x28);
    uVar10 = x2 - iVar7;
    iVar9 = (int)uVar10 >> 1;
    if (iVar9 < 0) {
      iVar9 = iVar9 + (uint)((uVar10 & 1) != 0);
    }
    iVar9 = (*rect + iVar9) - x2;
    iVar7 = iVar7 + iVar9;
    x2 = x2 + iVar9;
    if (((iVar9 < 1) || ((int)(uVar10 * 8) <= iVar8 - x2)) &&
       ((-1 < iVar9 || ((int)(uVar10 * 8) <= iVar7 - x)))) {
      FUN_004a7aa0(*(int *)((int)self + 0x166),(HWND)0x0,x,*(int *)(iVar1 + 0x24),
                   iVar7 - x,*(int *)(iVar1 + 0x2c),0x214);
      FUN_004a7aa0(*(int *)self[0x85],(HWND)0x0,x2,y,iVar8 - x2,cy,0x214);
    }
  }
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bff4  DefinitionViewWindows::OnSplitterButtonUp   (47 bytes)   [rtti:vtable virtual slot 50]
//   vtable slot 50; end of a splitter drag: saves the splitter position
void __cdecl DefinitionViewWindows::OnSplitterButtonUp(int *self)

{
  if (*(char *)((int)self + 0x219) != '\0') {
    *(undefined1 *)((int)self + 0x219) = 0;
    ReleaseCapture();
    DefinitionViewWindows::SaveSplitterPosition(self);
  }
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c024  GetChildRectOnScreen   (371 bytes)   [analysis]
//   a child window's rectangle in screen coordinates; false when it has none
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl GetChildRectOnScreen(int *window,int *rect)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  tagRECT *pRect;
  LONG *pLVar7;
  tagRECT rect2;
  int local_40 [4];
  tagRECT rect3;
  int local_20 [5];
  tagPOINT pt;
  
  pt.x = *rect;
  pt.y = rect[1];
  ClientToScreen(*(HWND *)(*window + 0xc),&pt);
  rect3.left = 0;
  rect3.top = 0;
  rect3.right = 0;
  rect3.bottom = 0;
  FUN_004a7a30(*(int *)((int)window + 0x166),&rect3);
  pRect = &rect3;
  pLVar7 = local_20;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar7 = pRect->left;
    pRect = (tagRECT *)&pRect->top;
    pLVar7 = pLVar7 + 1;
  }
  rect2.left = 0;
  rect2.top = 0;
  rect2.right = 0;
  rect2.bottom = 0;
  FUN_004a7a30(*(int *)window[0x85],&rect2);
  pRect = &rect2;
  pLVar7 = local_40;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar7 = pRect->left;
    pRect = (tagRECT *)&pRect->top;
    pLVar7 = pLVar7 + 1;
  }
  iVar1 = local_40[3];
  if (local_40[3] < local_20[3]) {
    iVar1 = local_20[3];
  }
  iVar4 = local_40[2];
  if (local_40[2] < local_20[2]) {
    iVar4 = local_20[2];
  }
  iVar2 = local_40[1];
  if (local_20[1] < local_40[1]) {
    iVar2 = local_20[1];
  }
  iVar5 = local_40[0];
  if (local_20[0] < local_40[0]) {
    iVar5 = local_20[0];
  }
  if ((((pt.x < iVar5) || (iVar4 <= pt.x)) || (pt.y < iVar2)) || (iVar1 <= pt.y)
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (((pt.x < local_20[0]) || (local_20[2] <= pt.x)) ||
       ((pt.y < local_20[1] || (local_20[3] <= pt.y)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (((pt.x < local_40[0]) || (local_40[2] <= pt.x)) ||
         ((pt.y < local_40[1] || (local_40[3] <= pt.y)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        return 1;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c198  DefinitionViewWindows::SaveSplitterPosition   (120 bytes)   [analysis]
//   stores the splitter position ("SplitterPosition") from the current layout
void __cdecl DefinitionViewWindows::SaveSplitterPosition(int *self)

{
  int i;
  tagRECT *pRect;
  LONG *pLVar3;
  LONG local_2c [4];
  tagRECT rect;
  tagPOINT pt;
  
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_004a7a30(*(int *)self[0x85],&rect);
  pRect = &rect;
  pLVar3 = local_2c;
  for (i = 4; i != 0; i = i + -1) {
    *pLVar3 = pRect->left;
    pRect = (tagRECT *)&pRect->top;
    pLVar3 = pLVar3 + 1;
  }
  pt.x = local_2c[0];
  pt.y = local_2c[1];
  ScreenToClient(*(HWND *)(*self + 0xc),&pt);
  PropertiesViewWindows::SaveDword((int)self,(uint *)"SplitterPosition");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c210  DefinitionViewWindows::OnDoubleClick   (50 bytes)   [rtti:vtable virtual slot 23]
//   vtable slot 23 (introduced by PropertiesViewWindows); a rich edit was double-clicked (PVWRichEdit::EvLButtonDblClk)
undefined4 __cdecl DefinitionViewWindows::OnDoubleClick(int *self,undefined4 param_2,int lParam)

{
  SHORT SVar1;
  undefined4 uVar2;
  int position;
  
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    position = 0x3160;
  }
  else {
    position = 0x1d42;
  }
  uVar2 = DefinitionViewWindows::FollowLinkAt(self,position,lParam);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c244  DefinitionViewWindows::FindDictionary   (669 bytes)   [analysis]
//   index of the open dictionary whose path is `path` and the number of open dictionaries
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl DefinitionViewWindows::FindDictionary(int self,int path,int *index,int *count)

{
  int tsDictionaryList;
  int iVar2;
  undefined3 uVar5;
  uint *path2;
  uint uVar4;
  int *strRep;
  int index2;
  undefined4 *sehChainHead;
  char cVar8;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str3;
  undefined1 str2 [8];
  int str4;
  
  __InitExceptBlockLDTC(0x4fdd1c);
  tsDictionaryList = TEAAppWindows::GetDictionaryList(*(int *)(self + 0x38));
  index2 = 0;
  while( true ) {
    iVar2 = TSDictionaryList::GetCount(tsDictionaryList);
    uVar5 = (undefined3)((uint)count >> 8);
    if (iVar2 <= index2) break;
    path2 = (uint *)TSDictionaryList::GetPath(tsDictionaryList,index2);
    iVar2 = std::string::string_from_cstr((int)str2,path2);
    uVar4 = std::string::compare(path,0,*(uint *)(*(int *)(path + 8) + -4),*(byte **)(iVar2 + 8),
                         *(uint *)(*(int *)(iVar2 + 8) + -4));
    cVar8 = uVar4 == 0;
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep = (int *)(str4 + -0xc);
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
        if (iVar2 != 0) goto LAB_0046c34c;
      }
      operator_delete();
      str4 = 0;
    }
LAB_0046c34c:
    if (cVar8 != '\0') {
      *index = tsDictionaryList;
      *count = index2;
      *sehChainHead = sehPrevFrame;
      return CONCAT31(uVar5,1);
    }
    index2 = index2 + 1;
  }
  tsDictionaryList = TEAAppWindows::GetProfile(*(int *)(self + 0x38));
  tsDictionaryList = *(int *)(tsDictionaryList + 0x28);
  index2 = 0;
  do {
    iVar2 = TSDictionaryList::GetCount(tsDictionaryList);
    if (iVar2 <= index2) {
      *index = 0;
      *count = 0;
      *sehChainHead = sehPrevFrame;
      return 0;
    }
    path2 = (uint *)TSDictionaryList::GetPath(tsDictionaryList,index2);
    iVar2 = std::string::string_from_cstr((int)str,path2);
    uVar4 = std::string::compare(path,0,*(uint *)(*(int *)(path + 8) + -4),*(byte **)(iVar2 + 8),
                         *(uint *)(*(int *)(iVar2 + 8) + -4));
    cVar8 = uVar4 == 0;
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        strRep = (int *)(str3 + -0xc);
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
        if (iVar2 != 0) goto LAB_0046c48d;
      }
      operator_delete();
      str3 = 0;
    }
LAB_0046c48d:
    if (cVar8 != '\0') {
      *index = tsDictionaryList;
      *count = index2;
      *sehChainHead = sehPrevFrame;
      return CONCAT31(uVar5,1);
    }
    index2 = index2 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c4e4  DefinitionViewWindows::PreProcessMsg   (77 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from DefinitionViewWindows's OWL::TWindow subobject vtable at 0x004ff13c (through the this-adjusting thunk at 0x00473a3a); slot name identified from OWL::TWindow's own implementation of that slot
//   also: DefinitionViewWindows::vf7 [rtti:vtable]
bool __cdecl DefinitionViewWindows::PreProcessMsg(int *self,LPMSG lParam)

{
  WPARAM wParam2;
  bool bVar2;
  
  if ((lParam->message == 0x100) &&
     (((wParam2 = lParam->wParam, wParam2 == 0x73 || (wParam2 == 0x74)) || (wParam2 == 0x75)))) {
    TEAAppWindows::ActivateWindow(self[0xe],wParam2,*(int *)(*(int *)(*self + 0x14) + 0x14));
    return true;
  }
  bVar2 = PropertiesViewWindows::PreProcessMsg(self,lParam);
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c534  DefinitionViewWindows::GetLookupWord   (64 bytes)   [rtti:vtable virtual slot 44]
//   vtable slot 44 (introduced by PropertiesViewWindows); the word to look up from the window (selected entry, word under the caret)
int __cdecl DefinitionViewWindows::GetLookupWord(int self,int position)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fdd64);
  DefinitionViewWindows::GetWordAt(self,position,0,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c574  DefinitionViewWindows::Child13860_Notifym402   (320 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 13860, code -402)
undefined4 __cdecl DefinitionViewWindows::Child13860_Notifym402(int *self)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  char cVar2;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 dest;
  int local_60;
  uint lParam;
  int local_30;
  
  __InitExceptBlockLDTC(0x4fdda8);
  if ((char)self[0x86] == '\0') {
    ehContext = 0x14;
    FUN_004cb6ec(&lParam,(int)self + 0x166);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 8;
    FUN_004a76a8(*(int *)((int)self + 0x166),0x1105,0,0);
    ehContext = 0x20;
    FUN_004cb3b4(&dest,(int)self + 0x166,0xffff0000);
    ehDtorCount = ehDtorCount + 4;
    if (((local_60 == local_30) ||
        (uVar1 = FUN_004cb664(&lParam,&local_8c,'\x01'), (char)uVar1 == '\0')) ||
       (uVar1 = FUN_004cb6a8(&lParam,&local_90,'\x01'), (char)uVar1 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
    if (cVar2 != '\0') {
      self[0x2c] = local_8c;
      if (local_90 == 0) {
        DefinitionViewWindows::ShowDefinitionNumber(self);
      }
      else {
        DefinitionViewWindows::ShowDescription(self);
      }
    }
    ehDtorCount = ehDtorCount + -2;
    uVar1 = operator_delete_array();
    *sehChainHead = local_88;
    return uVar1;
  }
  *sehChainHead = local_88;
  return local_88;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c6b4  DefinitionViewWindows::Child13860_Notifym406   (170 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 13860, code -406)
void __cdecl DefinitionViewWindows::Child13860_Notifym406(int self)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  byte local_5c [4];
  undefined4 sehPrevFrame;
  undefined4 unused;
  uint lParam [12];
  
  bVar5 = 200;
  __InitExceptBlockLDTC(0x4fde0c);
  iVar3 = 9;
  do {
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  FUN_004cb348(lParam,self + 0x166,bVar5);
  unused = 0x46c70b;
  uVar2 = FUN_004cb50c(lParam,(uint *)local_5c,'\x01');
  if ((char)uVar2 != '\0') {
    uVar4 = (uint)((local_5c[0] & 0x20) != 0);
    unused = 0x46c728;
    bVar1 = FUN_004cb5ec(lParam,uVar4,'\x01');
    if (bVar1) {
      unused = 0x46c73b;
      FUN_004cb628(lParam,uVar4,'\x01');
    }
  }
  operator_delete_array();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c760  DefinitionViewWindows::ScrollTextToTop   (129 bytes)   [analysis]
//   moves the rich edit's selection and scroll position back to the start
void __cdecl DefinitionViewWindows::ScrollTextToTop(int self)

{
  undefined4 charFormat [15];
  uint colour;
  undefined4 result;
  
  (**(code **)(*(int *)(*(int *)(self + 0x214) + 0xc) + 0x24))();
  colour = *(uint *)(*(int *)(self + 0x60) + 0x2c);
  OWL::TRichEdit::SetBkgndColor(&result,*(int **)(self + 0x214),&colour);
  OWL::TCharFormat::TCharFormat(charFormat,*(int **)(self + 0x214),'\0',0xf800003f);
  PVWRichEdit::ApplyFont((undefined4 *)(*(int *)(self + 0x60) + 0x130),(int)charFormat);
  OWL::TRichEdit::SetCharFormat(*(int **)(self + 0x214),(LPARAM)charFormat,4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c7e4  DefinitionViewWindows::ShowDescription   (701 bytes)   [analysis]
//   shows "Description of <dictionary>" (the header description) for the selected dictionary tab
void __cdecl DefinitionViewWindows::ShowDescription(int *self)

{
  undefined4 dictionary;
  undefined4 *definitionViewFrame;
  int iVar3;
  int *strRep;
  uint *strRep2;
  undefined4 *sehChainHead;
  int index;
  int index2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  int str2;
  undefined1 str [8];
  uint *text;
  undefined1 local_14 [8];
  int str3;
  
  __InitExceptBlockLDTC(0x4fde84);
  dictionary = DefinitionViewWindows::FindDictionary((int)self,self[0x2c] * 0x80 + self[0x25],&index2,&index);
  if ((char)dictionary == '\0') goto LAB_0046ca90;
  ehContext = 0x14;
  TSDictionaryList::GetDescription(local_14,index2,index);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  FUN_004a76a8(*(int *)self[0x85],0xb,0,0);
  DefinitionViewWindows::ScrollTextToTop((int)self);
  PVWRichEdit::SetText((int *)self[0x85],(int)local_14);
  FUN_004a76a8(*(int *)self[0x85],0xb,1,0);
  (**(code **)(*(int *)(*(int *)self[0x85] + 8) + 0x68))();
  if (*(int *)(*self + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*self + 0x14) + 8);
  }
  definitionViewFrame = FUN_004dd744(*(int *)(*self + 0x14),iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0)
  ;
  ehContext = 0x20;
  std::string::string_from_cstr((int)str,(uint *)"Description of ");
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x2c;
  TSDictionaryList::GetFileTitle(result,index2,index);
  ehDtorCount = ehDtorCount + 1;
  std::string::append((int)str,(int)result);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_0046c997;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0046c997:
  ehContext = 8;
  DefinitionViewFrame::SetStatusText((int)definitionViewFrame,text);
  ehDtorCount = ehDtorCount + -1;
  if (text != (uint *)0x0) {
    if (text[-3] != 0xffffffff) {
      strRep2 = text + -3;
      if (strRep2 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep2 = *strRep2 - 1;
        iVar3 = *strRep2 + 1;
      }
      if (iVar3 != 0) goto LAB_0046ca1a;
    }
    operator_delete();
    text = (uint *)0x0;
  }
LAB_0046ca1a:
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_0046ca90;
    }
    operator_delete();
  }
LAB_0046ca90:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046caa4  DefinitionViewWindows::ShowDefinitionNumber   (517 bytes)   [analysis]
//   shows definition n of the list and the "Definition %d of %d" caption
void __cdecl DefinitionViewWindows::ShowDefinitionNumber(int *self)

{
  uint uVar1;
  undefined4 *definitionViewFrame;
  int iVar3;
  int iVar4;
  undefined4 charFormat [15];
  uint text [250];
  
  if (*(int *)(*self + 0x14) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*self + 0x14) + 8);
  }
  definitionViewFrame = FUN_004dd744(*(int *)(*self + 0x14),iVar4,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0)
  ;
  sprintf((undefined1 *)text,(byte *)"Definition %d of %d");
  DefinitionViewFrame::SetStatusText((int)definitionViewFrame,text);
  iVar4 = self[0x26] - self[0x25];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x7f;
  }
  uVar1 = self[0x2c];
  if (uVar1 < (uint)(iVar4 >> 7)) {
    iVar4 = self[0x25];
    FUN_004a76a8(*(int *)self[0x85],0xb,0,0);
    DefinitionViewWindows::ScrollTextToTop((int)self);
    PVWRichEdit::SetText((int *)self[0x85],uVar1 * 0x80 + iVar4 + 0x68);
    iVar4 = self[0x2c];
    iVar3 = iVar4 * 0x80 + self[0x25];
    iVar3 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 == 0) {
      iVar3 = self[0x25];
      (**(code **)(*(int *)(self[0x85] + 0xc) + 0x3c))();
      FUN_004a76a8(*(int *)self[0x85],0xc2,0,*(LPARAM *)(iVar4 * 0x80 + iVar3 + 0x60));
      (**(code **)(*(int *)(self[0x85] + 0xc) + 0x3c))();
      OWL::TCharFormat::TCharFormat(charFormat,(int *)self[0x85],'\x01',0xf800003f);
      OWL::TCharFormat::SetUnderline((int)charFormat,'\x01');
      OWL::TCharFormat::SetBold((int)charFormat,'\x01');
      OWL::TRichEdit::SetCharFormat((int *)self[0x85],(LPARAM)charFormat,1);
      (**(code **)(*(int *)(self[0x85] + 0xc) + 0x3c))();
    }
    FUN_004a76a8(*(int *)self[0x85],0xb,1,0);
    (**(code **)(*(int *)(*(int *)self[0x85] + 8) + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046ccac  DefinitionViewWindows::HighlightWord   (853 bytes)   [analysis]
//   marks every occurrence of the looked-up word in the rich text (collation-insensitive compare)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DefinitionViewWindows::HighlightWord(int self)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *i;
  undefined4 *sehChainHead;
  int local_58;
  int local_54;
  int local_4c;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  byte *local_1c;
  undefined1 pvwRichEdit [8];
  byte *strRep;
  
  __InitExceptBlockLDTC(0x4fdf20);
  FUN_004a76a8(**(int **)(self + 0x214),0xb,0,0);
  local_4c = -1;
  iVar3 = *(int *)(self + 0x6c) + (*(int *)(self + 0x88) + -1) * 0x10;
  local_54 = 0;
  for (i = *(byte **)(iVar3 + 8);
      i < (byte *)(*(int *)(iVar3 + 8) + *(int *)(*(int *)(iVar3 + 8) + -4));
      i = i + 1) {
    if ((&DAT_004f50d8)[*i] != '\0') {
      local_54 = local_54 + 1;
    }
  }
  PVWRichEdit::GetText((int)pvwRichEdit,*(int **)(self + 0x214));
  bVar1 = 0;
  local_58 = 0;
  for (i = strRep; i < strRep + *(int *)(strRep + -4); i = i + 1) {
    if (((&DAT_004f50d8)[*i] != '\0') && ((&DAT_004f50d8)[bVar1] == '\0')) {
      iVar4 = 1;
      pbVar5 = i;
      do {
        while( true ) {
          pbVar2 = pbVar5 + 1;
          if (strRep + *(int *)(strRep + -4) < pbVar2) goto LAB_0046cee6;
          if ((strRep + *(int *)(strRep + -4) <= pbVar2) || ((&DAT_004f50d8)[*pbVar2] == '\0'))
          break;
          iVar4 = iVar4 + 1;
          pbVar5 = pbVar2;
        }
        bVar1 = *pbVar5;
        pbVar5 = pbVar2;
      } while (((&DAT_004f50d8)[bVar1] == '\0') || (iVar4 < local_54));
      if (iVar4 == local_54) {
        FUN_004d1bdc((int)str,(uint)i,(int)pbVar2);
        iVar4 = CollationCompare(*(byte **)(iVar3 + 8),*(int *)(*(byte **)(iVar3 + 8) + -4),local_1c,
                             *(int *)(local_1c + -4));
        if ((iVar4 == 0) && (DefinitionViewWindows::ScrollTextToTop2(self), local_4c < 0)) {
          local_4c = local_58;
        }
        if (local_1c != (byte *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            pbVar5 = local_1c + -0xc;
            if (pbVar5 == (byte *)&g_nullStringRep) {
              iVar4 = 1;
            }
            else if (pbVar5 == (byte *)&g_nullStringRep) {
              iVar4 = 1;
            }
            else {
              *(int *)pbVar5 = *(int *)pbVar5 + -1;
              iVar4 = *(int *)pbVar5 + 1;
            }
            if (iVar4 != 0) goto LAB_0046cee6;
          }
          operator_delete();
          local_1c = (byte *)0x0;
        }
      }
    }
LAB_0046cee6:
    bVar1 = *i;
    if (bVar1 != 0xd) {
      local_58 = local_58 + 1;
    }
  }
  if (-1 < local_4c) {
    (**(code **)(*(int *)(*(int *)(self + 0x214) + 0xc) + 0x3c))();
    FUN_004a76a8(**(int **)(self + 0x214),0xb7,0,0);
  }
  FUN_004a76a8(**(int **)(self + 0x214),0xb,1,0);
  (**(code **)(*(int *)(**(int **)(self + 0x214) + 8) + 0x68))();
  if (strRep != (byte *)0x0) {
    if (*(int *)(strRep + -0xc) != -1) {
      strRep = strRep + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        iVar3 = *(int *)strRep + 1;
      }
      if (iVar3 != 0) goto LAB_0046cfea;
    }
    operator_delete();
  }
LAB_0046cfea:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d004  DefinitionViewWindows::FollowLinkAt   (707 bytes)   [analysis]
//   clicking or pressing Enter on a word in the definition text: looks that word up
/* WARNING: Removing unreachable block (ram,0x0046d048) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl DefinitionViewWindows::FollowLinkAt(int *self,int position,int lParam)

{
  int refs;
  uint uVar2;
  int *strRep;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 newWindow [8];
  int *str;
  undefined1 word_ [8];
  int str2;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4fdfc8);
  local_c = &g_emptyStringData;
  DefinitionViewWindows::GetWordAt((int)word_,(int)self,(int)local_14,lParam);
  iVar4 = self[0x2c] * 0x80 + self[0x25];
  str = (int *)0x0;
  refs = *(int *)(*(int *)(iVar4 + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(iVar4 + 8) + -4);
    str = std::string::__getRep(newWindow,uVar2,uVar2);
    str = str + 3;
    memcpy(str,*(undefined4 **)(iVar4 + 8),uVar2);
  }
  else {
    str = *(int **)(iVar4 + 8);
    strRep = str + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  uVar2 = TEAAppWindows::Lookup(self[0xe],*self,position,(int)word_,(int)newWindow,(int)local_14);
  if (str != (int *)0x0) {
    if (str[-3] != -1) {
      strRep = str + -3;
      if (strRep == &g_nullStringRep) {
        uVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        uVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        uVar2 = *strRep + 1;
      }
      if (uVar2 != 0) goto LAB_0046d1c7;
    }
    operator_delete();
    str = (int *)0x0;
    uVar2 = 0;
  }
LAB_0046d1c7:
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        uVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        uVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        uVar2 = *strRep + 1;
      }
      if (uVar2 != 0) goto LAB_0046d23d;
    }
    operator_delete();
    str2 = 0;
    uVar2 = 0;
  }
LAB_0046d23d:
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = (int *)(local_c + -0xc);
      if (strRep == &g_nullStringRep) {
        uVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        uVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        uVar2 = *strRep + 1;
      }
      if (uVar2 != 0) goto LAB_0046d2b6;
    }
    operator_delete();
    uVar2 = 0;
  }
LAB_0046d2b6:
  *sehChainHead = sehPrevFrame;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d2c8  DefinitionViewWindows::GetWordAt   (1444 bytes)   [analysis]
//   the word of the definition text at a character position
/* WARNING: Removing unreachable block (ram,0x0046d30c) */
/* WARNING: Removing unreachable block (ram,0x0046d368) */
/* WARNING: Removing unreachable block (ram,0x0046d43c) */
/* WARNING: Removing unreachable block (ram,0x0046d3ee) */
/* WARNING: Removing unreachable block (ram,0x0046d42f) */
/* WARNING: Removing unreachable block (ram,0x0046d4d3) */
/* WARNING: Removing unreachable block (ram,0x0046d4f7) */
/* WARNING: Removing unreachable block (ram,0x0046d502) */
/* WARNING: Removing unreachable block (ram,0x0046d542) */
/* WARNING: Removing unreachable block (ram,0x0046d51b) */
/* WARNING: Removing unreachable block (ram,0x0046d53b) */
/* WARNING: Removing unreachable block (ram,0x0046d528) */
/* WARNING: Removing unreachable block (ram,0x0046d547) */
/* WARNING: Removing unreachable block (ram,0x0046d54b) */
/* WARNING: Removing unreachable block (ram,0x0046d599) */
int __cdecl DefinitionViewWindows::GetWordAt(int self,int position,int word_,int lParam)

{
  int *rep;
  int prevRefs;
  uint uVar3;
  undefined4 *sehChainHead;
  undefined1 local_101 [65];
  uint local_c0;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_24 [8];
  undefined4 *local_1c;
  undefined1 word_2 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4fe0c4);
  local_c = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x2c;
  PVWRichEdit::GetWordAt((int)local_24,*(int **)(position + 0x214),(int)word_2,lParam);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  if ((uint)local_1c[-1] < 0x81) {
    if ((local_1c[-1] != 0) && (word_ != 0)) {
      std::string::operator_assign(word_,(int)word_2);
    }
  }
  else {
    local_c0 = local_1c[-1];
    local_101[0] = 0;
    uVar3 = g_stringNpos;
    if (local_c0 <= g_stringNpos) {
      uVar3 = local_c0;
    }
    std::string::replace((int)local_24,0,uVar3,(uint)local_101,0,0,0);
  }
  ehContext = 0x74;
  *(undefined4 *)(self + 8) = 0;
  if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
    uVar3 = local_1c[-1];
    rep = std::string::__getRep(self,uVar3,uVar3);
    *(int **)(self + 8) = rep + 3;
    memcpy(*(undefined4 **)(self + 8),local_1c,uVar3);
  }
  else {
    *(undefined4 **)(self + 8) = local_1c;
    rep = (int *)(*(int *)(self + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  ehContext = 0x8c;
  if (local_1c != (undefined4 *)0x0) {
    if (local_1c[-3] != -1) {
      rep = local_1c + -3;
      if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_0046d7be;
    }
    operator_delete();
    local_1c = (undefined4 *)0x0;
  }
LAB_0046d7be:
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      rep = (int *)(local_c + -0xc);
      if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_0046d851;
    }
    operator_delete();
  }
LAB_0046d851:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d86c  DefinitionViewWindows::ShowDefinitions   (1377 bytes)   [analysis]
//   fills the window with the definitions found for a word: groups them by dictionary, sorts them, renders the rich text and highlights the word
/* WARNING: Removing unreachable block (ram,0x0046db92) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff50 : 0x0046dba0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DefinitionViewWindows::ShowDefinitions(int *self,int list,int value,int word_,int matchSet,int dictIndex,int flags, int newWindow)

{
  uint len;
  bool bVar2;
  int first2;
  undefined3 regHigh;
  byte *strRep;
  int dest;
  int iVar6;
  int *i;
  undefined4 *sehChainHead;
  undefined1 wordBuf [1000];
  byte newStr [1024];
  undefined4 unused;
  undefined4 unused2;
  undefined1 *unused3;
  undefined4 unused4;
  byte *unused5;
  byte *unused6;
  undefined4 unused7;
  undefined4 unused8;
  int local_ac;
  byte local_a5;
  byte *local_a4;
  int local_a0;
  int local_9c;
  byte *local_98;
  byte *local_94;
  int local_90;
  undefined4 *dest2;
  undefined4 *src;
  uint unused9;
  int unused10;
  int *newRep;
  int *newData;
  int *strRep2;
  int unused11;
  undefined4 local_6c;
  undefined4 unused12;
  int local_64;
  int last;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 vec;
  int *first;
  int *last2;
  undefined4 unused13;
  undefined1 pvwRichEdit [8];
  byte *local_10;
  int local_8;
  
  __InitExceptBlockLDTC(0x4fe1c4);
  DefinitionViewWindows::SortDefinitions((int)(self + 0x24),list);
  iVar6 = self[0x1c];
  dest = self[0x1b] + self[0x22] * 0x10;
  first2 = std::copy_string_40e20c(iVar6,self[0x1c],dest);
  last = self[0x1c];
  iVar6 = iVar6 - dest;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xf;
  }
  self[0x1c] = self[0x1c] + (iVar6 >> 4) * -0x10;
  std::_Destroy_range_string(self + 0x1a,first2,last);
  if (self[0x1c] == self[0x20]) {
    std::vector_string::insert_aux((int)(self + 0x1a),self[0x1c],value);
  }
  else {
    local_64 = self[0x1c];
    local_8 = local_64;
    if (local_64 != 0) {
      ehContext = 0x14;
      unused12 = 0;
      *(undefined4 *)(local_64 + 8) = 0;
      iVar6 = *(int *)(*(int *)(value + 8) + -0xc);
      if (iVar6 == -1 || iVar6 + 1 < 0) {
        len = *(uint *)(*(int *)(value + 8) + -4);
        newRep = std::string::__getRep(local_64,len,len);
        newData = newRep + 3;
        *(int **)(local_8 + 8) = newData;
        unused10 = local_8;
        unused = *(undefined4 *)(local_8 + 8);
        src = *(undefined4 **)(value + 8);
        dest2 = *(undefined4 **)(local_8 + 8);
        unused9 = len;
        memcpy(dest2,src,len);
      }
      else {
        local_6c = *(undefined4 *)(value + 8);
        *(undefined4 *)(local_64 + 8) = local_6c;
        unused2 = *(undefined4 *)(local_64 + 8);
        strRep2 = (int *)(*(int *)(local_64 + 8) + -0xc);
        unused11 = local_64;
        if (strRep2 != &g_nullStringRep) {
          *strRep2 = *strRep2 + 1;
        }
      }
      ehContext = 8;
    }
    self[0x1c] = self[0x1c] + 0x10;
  }
  self[0x22] = self[0x22] + 1;
  DefinitionViewWindows::RenderDefinitions(self,word_,matchSet);
  if (dictIndex == 0) {
    DefinitionViewWindows::HighlightWord((int)self);
    goto LAB_0046dda8;
  }
  ehContext = 0x38;
  PVWRichEdit::GetText((int)pvwRichEdit,(int *)self[0x85]);
  ehDtorCount = ehDtorCount + 1;
  local_98 = newStr;
  ehContext = 0x2c;
  iVar6 = 0;
  local_9c = -1;
  local_94 = local_98;
  FUN_004a76a8(*(int *)self[0x85],0xb,0,0);
  local_a0 = 0;
  for (local_a4 = local_10; local_a4 <= local_10 + *(int *)(local_10 + -4); local_a4 = local_a4 + 1)
  {
    if (local_10 + *(int *)(local_10 + -4) == local_a4) {
      local_a5 = 0;
    }
    else {
      local_a5 = *local_a4;
    }
    ehContext = 0x2c;
    local_ac = *(int *)(*(int *)(*(int *)(flags + 0xc) + newWindow * 4) + 8 + (uint)local_a5 * 8);
    if (local_ac == 0xff) {
      if (0 < iVar6) {
        wordBuf[iVar6] = 0xff;
        *local_98 = 0;
        first = (int *)0x0;
        last2 = (int *)0x0;
        unused13 = 0;
        unused8 = 0x100;
        unused7 = 1;
        vec = 0x100;
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x5c;
        MatchEngineSet::CopyEngines(dictIndex,(int)&vec);
        for (i = first; i < last2; i = i + 1) {
          first2 = *i;
          ehContext = 0x5c;
          if (((first2 != 0) && (dest = MatchEngine::GetMinLength(first2), dest <= iVar6)) &&
             (dest = MatchEngine::GetMaxLength(first2), iVar6 <= dest)) {
            MatchEngine::SetWordLength(first2,iVar6);
            bVar2 = MatchEngine::MatchWord(first2,(int)wordBuf);
            if (CONCAT31(regHigh,bVar2) != 0) {
              DefinitionViewWindows::ScrollTextToTop2((int)self);
              if (local_9c < 0) {
                local_9c = local_90;
              }
              break;
            }
          }
        }
        iVar6 = 0;
        ehDtorCount = ehDtorCount + -1;
        std::_Destroy_range_ptr_410d88(&vec,(int)first,(int)last2);
        operator_delete();
        ehContext = 0x2c;
      }
    }
    else {
      if (iVar6 == 0) {
        local_90 = local_a0;
        local_98 = local_94;
      }
      *local_98 = local_a5;
      local_98 = local_98 + 1;
      if (iVar6 < 0x65) {
        wordBuf[iVar6] = (undefined1)local_ac;
        iVar6 = iVar6 + 1;
      }
    }
    if (local_a5 != 0xd) {
      local_a0 = local_a0 + 1;
    }
  }
  FUN_004a76a8(*(int *)self[0x85],0xb,1,0);
  (**(code **)(*(int *)(*(int *)self[0x85] + 8) + 0x68))();
  if (-1 < local_9c) {
    (**(code **)(*(int *)(self[0x85] + 0xc) + 0x3c))();
    FUN_004a76a8(*(int *)self[0x85],0xb7,0,0);
  }
  ehDtorCount = ehDtorCount + -1;
  if (local_10 != (byte *)0x0) {
    if (*(int *)(local_10 + -0xc) != -1) {
      strRep = local_10 + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        iVar6 = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        iVar6 = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        iVar6 = *(int *)strRep + 1;
      }
      if (iVar6 != 0) goto LAB_0046dd9c;
    }
    unused6 = local_10 + -0xc;
    unused5 = local_10 + -0xc;
    operator_delete();
    unused4 = 0;
    unused3 = pvwRichEdit;
    local_10 = (byte *)0x0;
  }
LAB_0046dd9c:
  ehContext = 0;
LAB_0046dda8:
  SetFocus(*(HWND *)(*(int *)self[0x85] + 0xc));
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046ddd0  DefinitionViewWindows::SortDefinitions   (558 bytes, 2 ranges)   [analysis]
//   orders the collected definitions (headword, then dictionary order)
int __cdecl DefinitionViewWindows::SortDefinitions(int self,int definitions)

{
  int iVar1;
  int first;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4fe274);
  if (definitions == self) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    first = *(int *)(definitions + 8) - *(int *)(definitions + 4);
    if (first < 0) {
      first = first + 0x7f;
    }
    iVar1 = *(int *)(self + 0x18) - *(int *)(self + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x7f;
    }
    if ((uint)(iVar1 >> 7) < (uint)(first >> 7)) {
      first = operator_new();
      if (first == 0) {
        badAlloc = &std::bad_alloc::vftable;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      iVar1 = std::__introsort_loop_string(*(int *)(definitions + 4),*(int *)(definitions + 8),first);
      *(int *)(self + 0x18) = iVar1;
      std::_Destroy_range_DefinitionRecord(self,*(int *)(self + 4),*(int *)(self + 8));
      operator_delete();
      *(int *)(self + 4) = first;
    }
    else {
      first = *(int *)(self + 8) - *(int *)(self + 4);
      if (first < 0) {
        first = first + 0x7f;
      }
      iVar1 = *(int *)(definitions + 8) - *(int *)(definitions + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7f;
      }
      if ((uint)(first >> 7) < (uint)(iVar1 >> 7)) {
        first = *(int *)(self + 8) - *(int *)(self + 4);
        if (first < 0) {
          first = first + 0x7f;
        }
        DefinitionViewWindows::CompareDefinitions(*(int *)(definitions + 4),(first >> 7) * 0x80 + *(int *)(definitions + 4),
                     *(int *)(self + 4));
        first = *(int *)(self + 8) - *(int *)(self + 4);
        if (first < 0) {
          first = first + 0x7f;
        }
        iVar1 = *(int *)(self + 8) - *(int *)(self + 4);
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0x7f;
        }
        std::__introsort_loop_string((iVar1 >> 7) * 0x80 + *(int *)(definitions + 4),*(int *)(definitions + 8),
                     (first >> 7) * 0x80 + *(int *)(self + 4));
      }
      else {
        first = DefinitionViewWindows::CompareDefinitions(*(int *)(definitions + 4),*(int *)(definitions + 8),*(int *)(self + 4));
        std::_Destroy_range_DefinitionRecord(self,first,*(int *)(self + 8));
      }
    }
    first = *(int *)(definitions + 8) - *(int *)(definitions + 4);
    if (first < 0) {
      first = first + 0x7f;
    }
    *(int *)(self + 8) = (first >> 7) * 0x80 + *(int *)(self + 4);
    *sehChainHead = sehPrevFrame;
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e020  std::__introsort_loop_string   (1615 bytes, 2 ranges)   [analysis]
//   quicksort part of std::sort over std::string objects (exact role inferred from structure)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046e17d) */
/* WARNING: Removing unreachable block (ram,0x0046e28a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff90 : 0x0046e185 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl std::__introsort_loop_string(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x4fe2f8);
  while (iVar3 = param_3, iVar2 = param_1, iVar2 != param_2) {
    param_1 = iVar2 + 0x80;
    param_3 = iVar3 + 0x80;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
        rep = std::string::__getRep(iVar3,uVar1,uVar1);
        *(int **)(iVar3 + 8) = rep + 3;
        memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
        rep = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0x40;
      iVar4 = operator_new();
      if (iVar4 == 0) {
        badAlloc2 = &std::bad_alloc::vftable;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc2,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x1c) = iVar4;
      iVar4 = std::uninitialized_copy_string(*(int *)(iVar2 + 0x1c),*(int *)(iVar2 + 0x20),*(int *)(iVar3 + 0x1c));
      *(int *)(iVar3 + 0x20) = iVar4;
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      *(undefined4 *)(iVar3 + 0x40) = 0;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x40;
      iVar4 = operator_new();
      if (iVar4 == 0) {
        badAlloc = &std::bad_alloc::vftable;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x3c) = iVar4;
      iVar4 = std::uninitialized_copy_string(*(int *)(iVar2 + 0x3c),*(int *)(iVar2 + 0x40),*(int *)(iVar3 + 0x3c));
      *(int *)(iVar3 + 0x40) = iVar4;
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(iVar3 + 0x60) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x60) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x60) + -4);
        rep = std::string::__getRep(iVar3 + 0x58,uVar1,uVar1);
        *(int **)(iVar3 + 0x60) = rep + 3;
        memcpy(*(undefined4 **)(iVar3 + 0x60),*(undefined4 **)(iVar2 + 0x60),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
        rep = (int *)(*(int *)(iVar3 + 0x60) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x70) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x70) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x70) + -4);
        rep = std::string::__getRep(iVar3 + 0x68,uVar1,uVar1);
        *(int **)(iVar3 + 0x70) = rep + 3;
        memcpy(*(undefined4 **)(iVar3 + 0x70),*(undefined4 **)(iVar2 + 0x70),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
        rep = (int *)(*(int *)(iVar3 + 0x70) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar2 + 0x78);
    }
  }
  *sehChainHead = sehPrevFrame;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e698  DefinitionViewWindows::CompareDefinitions   (131 bytes)   [analysis]
//   order of two definition records (by headword text, then by offset)
//   file placement: inferred (address adjacency)
int __cdecl DefinitionViewWindows::CompareDefinitions(int a,int b,int word_)

{
  for (; a != b; a = a + 0x80) {
    std::string::operator_assign(word_,a);
    std::vector_string::operator_assign(word_ + 0x18,a + 0x18);
    std::vector_string::operator_assign(word_ + 0x38,a + 0x38);
    std::string::operator_assign(word_ + 0x58,a + 0x58);
    std::string::operator_assign(word_ + 0x68,a + 0x68);
    *(undefined4 *)(word_ + 0x10) = *(undefined4 *)(a + 0x10);
    *(undefined4 *)(word_ + 0x78) = *(undefined4 *)(a + 0x78);
    word_ = word_ + 0x80;
  }
  return word_;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e71c  DefinitionViewWindows::EvHelp   (33 bytes)   [owl:response-table message-handler]
//   WM_HELP
void __stdcall DefinitionViewWindows::EvHelp(void)

{
  ShowHelpContents();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e740  DefinitionViewWindows::RenderDefinitions   (5040 bytes)   [analysis]
//   builds the RTF text of the definitions (headwords bold, qualifiers, links) and loads it into the rich edit (5 KB; read at the top level only)
/* WARNING: Removing unreachable block (ram,0x0046efc8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DefinitionViewWindows::RenderDefinitions(int *self,int word_,int dictIndex)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int path;
  uint uVar5;
  undefined4 *sehChainHead;
  undefined1 *len;
  char cVar7;
  uint *number;
  uint dest [12];
  undefined4 unused;
  uint dest2 [12];
  undefined4 unused2;
  undefined *unused3;
  undefined4 unused4;
  uint *local_454;
  uint *local_444;
  undefined4 unused5;
  uint *local_414;
  uint *local_404;
  uint *unused6;
  uint *unused7;
  uint *strRep;
  LPARAM unused8;
  LPARAM lParam;
  undefined4 *local_3dc;
  undefined4 *unused9;
  LPARAM unused10;
  undefined1 unused11;
  char local_3cd;
  LPARAM lParam2;
  LPARAM lParam3;
  undefined4 *local_3c4;
  LPARAM unused12;
  undefined1 unused13;
  undefined1 *unused14;
  undefined4 unused15;
  uint *unused16;
  uint *unused17;
  uint *strRep2;
  undefined1 *unused18;
  undefined4 unused19;
  int unused20;
  int unused21;
  int *strRep3;
  undefined1 *unused22;
  undefined4 unused23;
  int unused24;
  int unused25;
  int *strRep4;
  uint local_36c;
  int unused26;
  int unused27;
  undefined1 *unused28;
  undefined4 unused29;
  uint *unused30;
  uint *unused31;
  uint *strRep5;
  undefined4 *local_34c;
  undefined1 *unused32;
  undefined4 unused33;
  int unused34;
  int unused35;
  int *strRep6;
  int local_334;
  int index;
  undefined1 *unused36;
  undefined *unused37;
  undefined4 unused38;
  LPARAM unused39;
  undefined1 unused40;
  undefined1 *unused41;
  undefined4 unused42;
  int unused43;
  int unused44;
  int *strRep7;
  uint *unused45;
  undefined4 *src;
  uint unused46;
  undefined1 *unused47;
  int *newRep;
  uint *unused48;
  uint local_2ec;
  uint *strRep8;
  undefined1 *unused49;
  uint *unused50;
  undefined4 unused51;
  int local_2d8;
  uint unused52;
  int local_2d0;
  uint local_2cc;
  uint first;
  uint last;
  undefined1 *unused53;
  undefined4 unused54;
  int unused55;
  int unused56;
  int *strRep9;
  int local_2ac;
  uint unused57;
  uint number2;
  uint local_2a0;
  uint unused58;
  uint local_298;
  int unused59;
  undefined4 *definitionViewFrame;
  uint *unused60;
  undefined4 *src2;
  uint unused61;
  undefined1 *unused62;
  int *newRep2;
  uint *unused63;
  uint len2;
  uint *strRep10;
  undefined1 *unused64;
  uint *unused65;
  undefined4 unused66;
  int local_260;
  int local_25c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 dest3;
  LPARAM lParam4;
  int *local_20c;
  undefined4 dest4;
  int local_200;
  int *local_1dc;
  undefined4 dest5 [12];
  undefined4 dest6;
  int local_1a0;
  int *local_17c;
  undefined1 text [8];
  int str4;
  undefined1 str [8];
  int str5;
  undefined4 dest7 [12];
  undefined4 dest8 [12];
  undefined1 result [8];
  int str6;
  undefined1 str2 [8];
  uint *local_dc;
  undefined1 result2 [8];
  int str7;
  undefined4 dest9 [12];
  undefined1 str3 [8];
  uint *local_8c;
  undefined1 local_84 [8];
  int str8;
  undefined4 dest10;
  LPARAM lParam5;
  int *local_4c;
  byte dest11 [4];
  int lParam6;
  int *local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fe4c4);
  ehContext = 0x14;
  local_25c = self[0x22] + -1;
  local_260 = self[0x1b] + local_25c * 0x10;
  unused66 = 0;
  local_c = (uint *)0x0;
  iVar3 = *(int *)(*(int *)(local_260 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    len2 = *(uint *)(*(int *)(local_260 + 8) + -4);
    newRep2 = std::string::__getRep(local_14,len2,len2);
    unused62 = local_14;
    local_414 = (uint *)(newRep2 + 3);
    unused61 = len2;
    src2 = *(undefined4 **)(local_260 + 8);
    unused60 = local_414;
    unused63 = local_414;
    local_c = local_414;
    memcpy(local_414,src2,len2);
  }
  else {
    local_404 = *(uint **)(local_260 + 8);
    unused64 = local_14;
    strRep10 = local_404 + -3;
    unused65 = local_404;
    local_c = local_404;
    if (strRep10 != &g_nullStringRep) {
      *strRep10 = *strRep10 + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  if (*(int *)(*self + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*self + 0x14) + 8);
  }
  definitionViewFrame = FUN_004dd744(*(int *)(*self + 0x14),iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64
                           ,0);
  DefinitionViewFrame::SetTitle((int)definitionViewFrame,(int)local_14);
  if (dictIndex != 0) {
    unused59 = dictIndex;
    std::string::append((int)local_14,dictIndex);
  }
  local_298 = 0;
  while( true ) {
    iVar3 = self[0x26] - self[0x25];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    if ((uint)(iVar3 >> 7) <= local_298) break;
    unused58 = local_298;
    iVar3 = self[0x25] + local_298 * 0x80;
    local_2a0 = 0;
    uVar5 = 0;
    while( true ) {
      ehContext = 8;
      path = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
      if (path < 0) {
        path = path + 0xf;
      }
      if ((uint)(path >> 4) <= uVar5) break;
      ehContext = 0x38;
      std::operator_plus((int)local_84,uVar5 * 0x10 + *(int *)(iVar3 + 0x1c),
                   uVar5 * 0x10 + *(int *)(iVar3 + 0x3c));
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x2c;
      path = ParseLinkTarget((int)local_14,(int)local_84,(int *)&number2);
      if ((path == 0) || (local_2a0 < number2)) {
LAB_0046ea20:
        local_2a0 = number2;
        std::string::operator_assign(*(int *)(iVar3 + 0x1c),uVar5 * 0x10 + *(int *)(iVar3 + 0x1c));
        std::string::operator_assign(*(int *)(iVar3 + 0x3c),uVar5 * 0x10 + *(int *)(iVar3 + 0x3c));
      }
      else if (number2 == local_2a0) {
        local_2ac = uVar5 * 0x10 + *(int *)(iVar3 + 0x1c);
        unused57 = uVar5;
        uVar1 = std::string::compare((int)local_14,0,local_c[-1],*(byte **)(local_2ac + 8),
                             *(uint *)(*(int *)(local_2ac + 8) + -4));
        if (uVar1 == 0) goto LAB_0046ea20;
      }
      ehDtorCount = ehDtorCount + -1;
      if (str8 != 0) {
        if (*(int *)(str8 + -0xc) != -1) {
          strRep9 = (int *)(str8 + -0xc);
          if (strRep9 == &g_nullStringRep) {
            path = 1;
          }
          else if (strRep9 == &g_nullStringRep) {
            path = 1;
          }
          else {
            *strRep9 = *strRep9 + -1;
            path = *strRep9 + 1;
          }
          if (path != 0) goto LAB_0046eb05;
        }
        unused56 = str8 + -0xc;
        unused55 = str8 + -0xc;
        operator_delete();
        unused54 = 0;
        unused53 = local_84;
        str8 = 0;
        unused5 = 0;
      }
LAB_0046eb05:
      uVar5 = uVar5 + 1;
    }
    local_298 = local_298 + 1;
  }
  last = self[0x26];
  first = self[0x25];
  if (first != last) {
    std::sort_string(first,last,0,(undefined*)DefinitionLinkLess);
    std::stable_sort_string(first,last,(undefined*)DefinitionLinkLess);
  }
  FUN_004a76a8(*(int *)((int)self + 0x166),0xb,0,0);
  *(undefined1 *)(self + 0x86) = 1;
  FUN_004a76a8(*(int *)((int)self + 0x166),0x1101,0,-0x10000);
  *(undefined1 *)(self + 0x86) = 0;
  local_2cc = 0;
  ehContext = 0x50;
  FUN_004cb3b4((undefined4 *)dest11,(int)self + 0x166,0xffff0000);
  ehDtorCount = ehDtorCount + 2;
  self[0x2c] = 0;
  ehContext = 0x5c;
  FUN_004cb3b4(&dest10,(int)self + 0x166,0xffff0000);
  ehDtorCount = ehDtorCount + 2;
  local_2d0 = 0x7fffffff;
  uVar5 = 0;
  while( true ) {
    ehContext = 8;
    iVar3 = self[0x26] - self[0x25];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    if ((uint)(iVar3 >> 7) <= uVar5) break;
    path = self[0x25] + uVar5 * 0x80;
    ehContext = 0x74;
    local_2d8 = path + 0x58;
    unused51 = 0;
    local_8c = (uint *)0x0;
    iVar3 = *(int *)(*(int *)(path + 0x60) + -0xc);
    unused52 = uVar5;
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      local_2ec = *(uint *)(*(int *)(path + 0x60) + -4);
      newRep = std::string::__getRep(str3,local_2ec,local_2ec);
      unused47 = str3;
      local_454 = (uint *)(newRep + 3);
      unused46 = local_2ec;
      src = *(undefined4 **)(local_2d8 + 8);
      unused45 = local_454;
      unused48 = local_454;
      local_8c = local_454;
      memcpy(local_454,src,local_2ec);
    }
    else {
      local_444 = *(uint **)(path + 0x60);
      unused49 = str3;
      strRep8 = local_444 + -3;
      unused50 = local_444;
      local_8c = local_444;
      if (strRep8 != &g_nullStringRep) {
        *strRep8 = *strRep8 + 1;
      }
    }
    ehDtorCount = ehDtorCount + 1;
    iVar3 = *(int *)(path + 0x20) - *(int *)(path + 0x1c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 != 0) {
      ehContext = 0x8c;
      std::operator_plus((int)result2,*(int *)(path + 0x1c),*(int *)(path + 0x3c));
      ehDtorCount = ehDtorCount + 1;
      std::string::operator_assign((int)str3,(int)result2);
      ehDtorCount = ehDtorCount + -1;
      if (str7 != 0) {
        if (*(int *)(str7 + -0xc) != -1) {
          strRep7 = (int *)(str7 + -0xc);
          if (strRep7 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (strRep7 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *strRep7 = *strRep7 + -1;
            iVar3 = *strRep7 + 1;
          }
          if (iVar3 != 0) goto LAB_0046ef11;
        }
        unused44 = str7 + -0xc;
        unused43 = str7 + -0xc;
        operator_delete();
        unused42 = 0;
        unused41 = result2;
        str7 = 0;
        unused4 = 0;
      }
    }
LAB_0046ef11:
    ehContext = 0x68;
    if (*(int *)(path + 0x10) != local_2d0) {
      if (local_2d0 != 0x7fffffff) {
        unused39 = lParam5;
        iVar3 = FUN_004a76a8(*local_4c,0x1102,2,lParam5);
        unused40 = iVar3 != 0;
      }
      local_2d0 = *(int *)(path + 0x10);
      local_2cc = 0;
      unused38 = 0;
      unused36 = str2;
      unused37 = &g_emptyStringData;
      local_dc = (uint *)&g_emptyStringData;
      unused3 = &g_emptyStringData;
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0xbc;
      uVar2 = DefinitionViewWindows::FindDictionary((int)self,path,&index,&local_334);
      if ((char)uVar2 != '\0') {
        ehContext = 200;
        TSDictionaryList::GetFileTitle(result,index,local_334);
        ehDtorCount = ehDtorCount + 1;
        std::string::operator_assign((int)str2,(int)result);
        ehDtorCount = ehDtorCount + -1;
        if (str6 != 0) {
          if (*(int *)(str6 + -0xc) != -1) {
            strRep6 = (int *)(str6 + -0xc);
            if (strRep6 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else if (strRep6 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *strRep6 = *strRep6 + -1;
              iVar3 = *strRep6 + 1;
            }
            if (iVar3 != 0) goto LAB_0046f0fa;
          }
          unused35 = str6 + -0xc;
          unused34 = str6 + -0xc;
          operator_delete();
          unused33 = 0;
          unused32 = result;
          str6 = 0;
          unused2 = 0;
        }
LAB_0046f0fa:
        ehContext = 0xbc;
      }
      FUN_004cbac4(dest2,local_dc,(char *)0x0);
      FUN_004cbb70(dest2,0);
      FUN_004cbb84(dest2,0);
      FUN_004cbb5c(dest2,uVar5);
      ehContext = 0xe0;
      FUN_004cb3b4(dest8,(int)self + 0x166,0xffff0000);
      local_34c = dest8;
      ehDtorCount = ehDtorCount + 4;
      FUN_004cb490(dest7,(int)local_34c,dest2,0xffff0002);
      ehDtorCount = ehDtorCount + 2;
      FUN_004cb40c(&dest10,dest7);
      ehDtorCount = ehDtorCount + -2;
      operator_delete_array();
      ehContext = 0xbc;
      ehDtorCount = ehDtorCount + -2;
      operator_delete_array();
      ehDtorCount = ehDtorCount + -1;
      if (local_dc != (uint *)0x0) {
        if (local_dc[-3] != 0xffffffff) {
          strRep5 = local_dc + -3;
          if (strRep5 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (strRep5 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *strRep5 = *strRep5 - 1;
            iVar3 = *strRep5 + 1;
          }
          if (iVar3 != 0) goto LAB_0046f2b1;
        }
        unused31 = local_dc + -3;
        unused30 = local_dc + -3;
        operator_delete();
        unused29 = 0;
        unused28 = str2;
        local_dc = (uint *)0x0;
        unused = 0;
      }
    }
LAB_0046f2b1:
    ehContext = 0x68;
    FUN_004cbac4(dest,local_8c,(char *)0x0);
    ehContext = 0x68;
    FUN_004cbb70(dest,2);
    FUN_004cbb84(dest,3);
    FUN_004cbb5c(dest,uVar5);
    ehContext = 0x110;
    FUN_004cb490(dest9,(int)&dest10,dest,0xffff0002);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x68;
    if (*(int *)(path + 0x10) == *(int *)(self[0x25] + 0x10)) {
LAB_0046f3a1:
      number = &local_36c;
      ehContext = 0x11c;
      std::string::string_from_cstr((int)str,local_8c);
      len = str;
      ehDtorCount = ehDtorCount + 1;
      std::string::string_from_cstr((int)text,local_c);
      ehDtorCount = ehDtorCount + 1;
      iVar3 = ParseLinkTarget((int)text,(int)len,(int *)number);
      if ((iVar3 == 0) || (local_2cc < local_36c)) {
        cVar7 = '\x01';
      }
      else {
        cVar7 = '\0';
      }
      ehDtorCount = ehDtorCount + -1;
      if (str4 != 0) {
        if (*(int *)(str4 + -0xc) != -1) {
          strRep4 = (int *)(str4 + -0xc);
          if (strRep4 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (strRep4 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *strRep4 = *strRep4 + -1;
            iVar3 = *strRep4 + 1;
          }
          if (iVar3 != 0) goto LAB_0046f4e1;
        }
        unused25 = str4 + -0xc;
        unused24 = str4 + -0xc;
        operator_delete();
        unused23 = 0;
        unused22 = text;
        str4 = 0;
      }
LAB_0046f4e1:
      ehDtorCount = ehDtorCount + -1;
      if (str5 != 0) {
        if (*(int *)(str5 + -0xc) != -1) {
          strRep3 = (int *)(str5 + -0xc);
          if (strRep3 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (strRep3 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *strRep3 = *strRep3 + -1;
            iVar3 = *strRep3 + 1;
          }
          if (iVar3 != 0) goto LAB_0046f5a5;
        }
        unused21 = str5 + -0xc;
        unused20 = str5 + -0xc;
        operator_delete();
        unused19 = 0;
        unused18 = str;
        str5 = 0;
      }
LAB_0046f5a5:
      if (cVar7 != '\0') {
        local_2cc = local_36c;
        FUN_004cb40c((undefined4 *)dest11,dest9);
        self[0x2c] = uVar5;
      }
    }
    else if (word_ != 0) {
      unused26 = word_;
      unused27 = path;
      uVar1 = std::string::compare(word_,0,*(uint *)(*(int *)(word_ + 8) + -4),*(byte **)(path + 8),
                           *(uint *)(*(int *)(path + 8) + -4));
      if (uVar1 == 0) goto LAB_0046f3a1;
    }
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
    ehContext = 0x68;
    ehDtorCount = ehDtorCount + -1;
    if (local_8c != (uint *)0x0) {
      if (local_8c[-3] != 0xffffffff) {
        strRep2 = local_8c + -3;
        if (strRep2 == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (strRep2 == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *strRep2 = *strRep2 - 1;
          iVar3 = *strRep2 + 1;
        }
        if (iVar3 != 0) goto LAB_0046f6af;
      }
      unused17 = local_8c + -3;
      unused16 = local_8c + -3;
      operator_delete();
      unused15 = 0;
      unused14 = str3;
      local_8c = (uint *)0x0;
    }
LAB_0046f6af:
    uVar5 = uVar5 + 1;
  }
  unused12 = lParam5;
  iVar3 = FUN_004a76a8(*local_4c,0x1102,2,lParam5);
  unused13 = iVar3 != 0;
  ehContext = 8;
  iVar3 = FUN_004cbb48(dest11);
  if (iVar3 == -0x10000) {
    ehContext = 0x158;
    lParam3 = lParam6;
    if (lParam6 == -0x10000) {
      lParam3 = 0;
    }
    uVar2 = FUN_004a76a8(*local_1c,0x110a,4,lParam3);
    FUN_004cb3b4(&dest6,local_1c,uVar2);
    ehDtorCount = ehDtorCount + 4;
    local_3c4 = &dest6;
    lParam2 = local_1a0;
    if (local_1a0 == -0x10000) {
      lParam2 = 0;
    }
    uVar2 = FUN_004a76a8(*local_17c,0x110a,4,lParam2);
    FUN_004cb3b4(dest5,local_3c4[10],uVar2);
    ehDtorCount = ehDtorCount + 4;
    FUN_004cb40c((undefined4 *)dest11,dest5);
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
    ehContext = 8;
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
  }
  iVar3 = FUN_004cbb48(dest11);
  if ((iVar3 == 0) || (iVar3 = FUN_004cbb48(dest11), iVar3 == -0x10000)) {
    local_3cd = '\0';
  }
  else {
    local_3cd = '\x01';
  }
  if (local_3cd != '\0') {
    unused10 = lParam6;
    iVar3 = FUN_004a76a8(*local_1c,0x110b,9,lParam6);
    unused11 = iVar3 != 0;
    ehContext = 0x17c;
    FUN_004cb3b4(&dest4,(int)self + 0x166,0xffff0000);
    ehDtorCount = ehDtorCount + 4;
    local_3dc = &dest4;
    lParam = local_200;
    if (local_200 == -0x10000) {
      lParam = 0;
    }
    uVar2 = FUN_004a76a8(*local_1dc,0x110a,4,lParam);
    FUN_004cb3b4(&dest3,local_3dc[10],uVar2);
    unused9 = &dest3;
    ehDtorCount = ehDtorCount + 4;
    FUN_004a76a8(*local_20c,0x1114,0,lParam4);
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
    ehContext = 8;
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
  }
  FUN_004a76a8(*(int *)((int)self + 0x166),0xb,1,0);
  if (local_3cd != '\0') {
    unused8 = lParam6;
    FUN_004a76a8(*local_1c,0x1114,0,lParam6);
  }
  (**(code **)(*(int *)(*(int *)((int)self + 0x166) + 8) + 0x68))();
  ehDtorCount = ehDtorCount + -2;
  operator_delete_array();
  ehDtorCount = ehDtorCount + -2;
  operator_delete_array();
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep - 1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_0046fae1;
    }
    unused7 = local_c + -3;
    unused6 = local_c + -3;
    operator_delete();
  }
LAB_0046fae1:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046faf0  std::stable_sort_string   (92 bytes)   [analysis]
//   std::stable_sort over std::string objects (merge sort with a temporary buffer; roles inferred from structure)
//   file placement: inferred (address adjacency)
void __cdecl std::stable_sort_string(int first,int last,undefined *less)

{
  int iVar1;
  
  iVar1 = last - first;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
  if (iVar1 >> 7 < 0x11) {
    std::__stable_sort_adaptive_string(first,last,less);
  }
  else {
    std::__stable_sort_adaptive_string(first,first + 0x800,less);
    std::__inplace_stable_sort_string(first + 0x800,last,0,less);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046fb4c  std::__stable_sort_adaptive_string   (3582 bytes)   [analysis]
//   merge-sort step of std::stable_sort (inferred)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046fdf7) */
/* WARNING: Removing unreachable block (ram,0x0046fce5) */
/* WARNING: Removing unreachable block (ram,0x004702e1) */
/* WARNING: Removing unreachable block (ram,0x004703e5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffe6c : 0x004702ef */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::__stable_sort_adaptive_string(int param_1,int param_2,undefined *param_3)

{
  uint uVar1;
  char cVar2;
  int dest2;
  int *piVar4;
  int dest;
  int *rep;
  int dest3;
  int other;
  undefined4 *sehChainHead;
  undefined4 other2;
  undefined4 in_stack_fffffc0c;
  undefined4 in_stack_fffffc14;
  undefined4 uVar9;
  undefined4 in_stack_fffffc1c;
  undefined4 uVar10;
  undefined1 alloc [4];
  undefined4 unused;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  undefined1 local_8c [8];
  int *str;
  undefined4 local_7c;
  undefined4 local_74;
  int first;
  int last;
  int unused2;
  undefined4 local_54;
  int first2;
  int last2;
  int unused3;
  undefined1 local_34 [8];
  int *str2;
  undefined1 local_24 [8];
  int *str3;
  undefined4 local_14;
  undefined **badAlloc3;
  undefined **badAlloc4;
  
  __InitExceptBlockLDTC(0x4fe6f0);
  dest3 = param_1;
  if (param_1 != param_2) {
joined_r0x0046fb8c:
    do {
      other = dest3 + 0x80;
      if (other == param_2) break;
      str = (int *)0x0;
      dest2 = *(int *)(*(int *)(dest3 + 0x88) + -0xc);
      if (dest2 == -1 || dest2 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(dest3 + 0x88) + -4);
        str = std::string::__getRep(local_8c,uVar1,uVar1);
        str = str + 3;
        memcpy(str,*(undefined4 **)(dest3 + 0x88),uVar1);
      }
      else {
        str = *(int **)(dest3 + 0x88);
        piVar4 = str + -3;
        if (piVar4 != &g_nullStringRep) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_7c = *(undefined4 *)(dest3 + 0x90);
      first = 0;
      last = 0;
      unused2 = 0;
      local_74 = 0x40;
      dest2 = operator_new();
      if (dest2 == 0) {
        badAlloc4 = &std::bad_alloc::vftable;
        unused = 0x46fd79;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc4,0,&LAB_00404134,1,0,0,0);
      }
      first = dest2;
      last = std::uninitialized_copy_string(*(int *)(dest3 + 0x9c),*(int *)(dest3 + 0xa0),dest2);
      first2 = 0;
      last2 = 0;
      unused3 = 0;
      local_54 = 0x40;
      unused2 = last;
      dest2 = operator_new();
      if (dest2 == 0) {
        badAlloc3 = &std::bad_alloc::vftable;
        unused = 0x46fe8b;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc3,0,&LAB_00404134,1,0,0,0);
      }
      first2 = dest2;
      last2 = std::uninitialized_copy_string(*(int *)(dest3 + 0xbc),*(int *)(dest3 + 0xc0),dest2);
      str2 = (int *)0x0;
      dest2 = *(int *)(*(int *)(dest3 + 0xe0) + -0xc);
      unused3 = last2;
      if (dest2 == -1 || dest2 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(dest3 + 0xe0) + -4);
        str2 = std::string::__getRep(local_34,uVar1,uVar1);
        str2 = str2 + 3;
        memcpy(str2,*(undefined4 **)(dest3 + 0xe0),uVar1);
      }
      else {
        str2 = *(int **)(dest3 + 0xe0);
        piVar4 = str2 + -3;
        if (piVar4 != &g_nullStringRep) {
          *piVar4 = *piVar4 + 1;
        }
      }
      str3 = (int *)0x0;
      dest2 = *(int *)(*(int *)(dest3 + 0xf0) + -0xc);
      if (dest2 == -1 || dest2 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(dest3 + 0xf0) + -4);
        str3 = std::string::__getRep(local_24,uVar1,uVar1);
        str3 = str3 + 3;
        memcpy(str3,*(undefined4 **)(dest3 + 0xf0),uVar1);
      }
      else {
        str3 = *(int **)(dest3 + 0xf0);
        piVar4 = str3 + -3;
        if (piVar4 != &g_nullStringRep) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_14 = *(undefined4 *)(dest3 + 0xf8);
      cVar2 = (*(code *)param_3)();
      if (cVar2 == '\0') {
        if (str[-3] == -1 || str[-3] + 1 < 0) {
          uVar1 = str[-1];
          piVar4 = std::string::__getRep(&GHIDRA_STACK(0xfffffc08),uVar1,uVar1);
          piVar4 = piVar4 + 3;
          memcpy(piVar4,str,uVar1);
        }
        else {
          rep = str + -3;
          piVar4 = str;
          if (rep != &g_nullStringRep) {
            *rep = *rep + 1;
          }
        }
        uVar10 = 0x40;
        uVar9 = local_7c;
        dest3 = operator_new();
        if (dest3 == 0) {
          badAlloc2 = &std::bad_alloc::vftable;
          _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc2,0,&LAB_00404134,1,0,0,0);
        }
        dest2 = std::uninitialized_copy_string(first,last,dest3);
        dest = operator_new();
        if (dest == 0) {
          badAlloc = &std::bad_alloc::vftable;
          _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
        }
        std::uninitialized_copy_string(first2,last2,dest);
        if (str2[-3] == -1 || str2[-3] + 1 < 0) {
          uVar1 = str2[-1];
          rep = std::string::__getRep(alloc,uVar1,uVar1);
          memcpy(rep + 3,str2,uVar1);
        }
        else {
          rep = str2 + -3;
          if (rep != &g_nullStringRep) {
            *rep = *rep + 1;
          }
        }
        if (str3[-3] == -1 || str3[-3] + 1 < 0) {
          uVar1 = str3[-1];
          rep = std::string::__getRep(&GHIDRA_STACK(0xfffffc70),uVar1,uVar1);
          memcpy(rep + 3,str3,uVar1);
        }
        else {
          rep = str3 + -3;
          if (rep != &g_nullStringRep) {
            *rep = *rep + 1;
          }
        }
        std::__merge_adaptive_string(other,other2,in_stack_fffffc0c,(int)piVar4,in_stack_fffffc14,uVar9,
                     in_stack_fffffc1c,uVar10,dest3,dest2);
      }
      else {
        DefinitionRecord::operator_assign(param_1,other,dest3 + 0x100);
        std::string::operator_assign(param_1,(int)local_8c);
        std::vector_string::operator_assign(param_1 + 0x18,(int)&local_74);
        std::vector_string::operator_assign(param_1 + 0x38,(int)&local_54);
        std::string::operator_assign(param_1 + 0x58,(int)local_34);
        std::string::operator_assign(param_1 + 0x68,(int)local_24);
        *(undefined4 *)(param_1 + 0x10) = local_7c;
        *(undefined4 *)(param_1 + 0x78) = local_14;
      }
      if (str3 != (int *)0x0) {
        if (str3[-3] != -1) {
          piVar4 = str3 + -3;
          if (piVar4 == &g_nullStringRep) {
            dest3 = 1;
          }
          else if (piVar4 == &g_nullStringRep) {
            dest3 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            dest3 = *piVar4 + 1;
          }
          if (dest3 != 0) goto LAB_004707a4;
        }
        operator_delete();
        str3 = (int *)0x0;
      }
LAB_004707a4:
      if (str2 != (int *)0x0) {
        if (str2[-3] != -1) {
          piVar4 = str2 + -3;
          if (piVar4 == &g_nullStringRep) {
            dest3 = 1;
          }
          else if (piVar4 == &g_nullStringRep) {
            dest3 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            dest3 = *piVar4 + 1;
          }
          if (dest3 != 0) goto LAB_0047083a;
        }
        operator_delete();
        str2 = (int *)0x0;
      }
LAB_0047083a:
      std::_Destroy_range_string(&local_54,first2,last2);
      operator_delete();
      std::_Destroy_range_string(&local_74,first,last);
      operator_delete();
      dest3 = other;
      if (str != (int *)0x0) {
        if (str[-3] != -1) {
          piVar4 = str + -3;
          if (piVar4 == &g_nullStringRep) {
            other = 1;
          }
          else if (piVar4 == &g_nullStringRep) {
            other = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            other = *piVar4 + 1;
          }
          if (other != 0) goto joined_r0x0046fb8c;
        }
        operator_delete();
      }
    } while( true );
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047094c  std::__merge_adaptive_string   (670 bytes)   [analysis]
//   merges two sorted runs using the buffer (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__merge_adaptive_string(int str,undefined4 other,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,int first,int last)

{
  char cVar1;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  int first2;
  int last2;
  int str2;
  int str3;
  undefined4 in_stack_00000080;
  code *in_stack_00000088;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fe7e0);
  while( true ) {
    cVar1 = (*in_stack_00000088)();
    if (cVar1 == '\0') break;
    std::string::operator_assign(str,str + -0x80);
    std::vector_string::operator_assign(str + 0x18,str + -0x68);
    std::vector_string::operator_assign(str + 0x38,str + -0x48);
    std::string::operator_assign(str + 0x58,str + -0x28);
    std::string::operator_assign(str + 0x68,str + -0x18);
    *(undefined4 *)(str + 0x10) = *(undefined4 *)(str + -0x70);
    *(undefined4 *)(str + 0x78) = *(undefined4 *)(str + -8);
    str = str + -0x80;
  }
  std::string::operator_assign(str,(int)&other);
  std::vector_string::operator_assign(str + 0x18,(int)&param_8);
  std::vector_string::operator_assign(str + 0x38,(int)&GHIDRA_STACK(0x00000040));
  std::string::operator_assign(str + 0x58,(int)&GHIDRA_STACK(0x00000060));
  std::string::operator_assign(str + 0x68,(int)&GHIDRA_STACK(0x00000070));
  *(undefined4 *)(str + 0x10) = param_6;
  *(undefined4 *)(str + 0x78) = in_stack_00000080;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
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
      if (prevRefs != 0) goto LAB_00470ab7;
    }
    operator_delete();
    str3 = 0;
  }
LAB_00470ab7:
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
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
      if (prevRefs != 0) goto LAB_00470b2a;
    }
    operator_delete();
    str2 = 0;
  }
LAB_00470b2a:
  std::_Destroy_range_string(&GHIDRA_STACK(0x00000040),first2,last2);
  operator_delete();
  std::_Destroy_range_string(&param_8,first,last);
  operator_delete();
  if (param_4 != 0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      strRep = (int *)(param_4 + -0xc);
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
      if (prevRefs != 0) goto LAB_00470bd9;
    }
    operator_delete();
  }
LAB_00470bd9:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470bec  std::__inplace_stable_sort_string   (1339 bytes)   [analysis]
//   stable sort without a buffer (inferred)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00470d12) */
/* WARNING: Removing unreachable block (ram,0x00470de3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff9c : 0x00470d1a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::__inplace_stable_sort_string(int str,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int dest2;
  int last;
  int dest;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 other;
  undefined4 in_stack_fffffe14;
  undefined4 in_stack_fffffe1c;
  undefined4 uVar7;
  undefined4 in_stack_fffffe24;
  undefined4 uVar8;
  undefined1 alloc [8];
  int *local_190;
  undefined1 alloc2 [8];
  int *local_180;
  undefined4 unused;
  undefined4 unused2;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  unused2 = 0x470c02;
  __InitExceptBlockLDTC(0x4fe874);
  for (; str != param_2; str = str + 0x80) {
    unused2 = param_4;
    dest2 = *(int *)(*(int *)(str + 8) + -0xc);
    if (dest2 == -1 || dest2 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(str + 8) + -4);
      piVar2 = std::string::__getRep(&GHIDRA_STACK(0xfffffe10),uVar1,uVar1);
      piVar2 = piVar2 + 3;
      memcpy(piVar2,*(undefined4 **)(str + 8),uVar1);
    }
    else {
      piVar2 = *(int **)(str + 8);
      strRep = piVar2 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    uVar7 = *(undefined4 *)(str + 0x10);
    uVar8 = 0x40;
    dest2 = operator_new();
    if (dest2 == 0) {
      badAlloc2 = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc2,0,&LAB_00404134,1,0,0,0);
    }
    last = std::uninitialized_copy_string(*(int *)(str + 0x1c),*(int *)(str + 0x20),dest2);
    dest = operator_new();
    if (dest == 0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::uninitialized_copy_string(*(int *)(str + 0x3c),*(int *)(str + 0x40),dest);
    local_190 = (int *)0x0;
    dest = *(int *)(*(int *)(str + 0x60) + -0xc);
    if (dest == -1 || dest + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(str + 0x60) + -4);
      local_190 = std::string::__getRep(alloc,uVar1,uVar1);
      local_190 = local_190 + 3;
      memcpy(local_190,*(undefined4 **)(str + 0x60),uVar1);
    }
    else {
      local_190 = *(int **)(str + 0x60);
      strRep = local_190 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    local_180 = (int *)0x0;
    dest = *(int *)(*(int *)(str + 0x70) + -0xc);
    if (dest == -1 || dest + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(str + 0x70) + -4);
      local_180 = std::string::__getRep(alloc2,uVar1,uVar1);
      local_180 = local_180 + 3;
      memcpy(local_180,*(undefined4 **)(str + 0x70),uVar1);
    }
    else {
      local_180 = *(int **)(str + 0x70);
      strRep = local_180 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    unused = *(undefined4 *)(str + 0x78);
    std::__merge_adaptive_string(str,other,in_stack_fffffe14,(int)piVar2,in_stack_fffffe1c,uVar7,
                 in_stack_fffffe24,uVar8,dest2,last);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471128  std::sort_string   (1699 bytes)   [analysis]
//   std::sort over std::string objects (inferred)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004712d9) */
/* WARNING: Removing unreachable block (ram,0x004713bf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::sort_string(uint str,uint str2,undefined4 param_3,undefined *param_4)

{
  char cVar1;
  int iVar2;
  uint str3;
  int *strRep;
  int *piVar5;
  int dest;
  uint uVar7;
  undefined4 *sehChainHead;
  undefined4 in_stack_fffffde8;
  undefined4 in_stack_fffffdec;
  undefined1 alloc [8];
  int *piStack_1b8;
  undefined1 alloc2 [8];
  int *piStack_1a8;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x4fe914);
  while( true ) {
    dest = str2 - str;
    if (dest < 0) {
      dest = dest + 0x7f;
    }
    if (dest >> 7 < 0x11) break;
    dest = str2 - str;
    if (dest < 0) {
      dest = dest + 0x7f;
    }
    iVar2 = dest >> 8;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((dest >> 7 & 1U) != 0);
    }
    str3 = iVar2 * 0x80 + str;
    cVar1 = (*(code *)param_4)();
    if (cVar1 == '\0') {
      cVar1 = (*(code *)param_4)();
      uVar7 = str;
      if ((cVar1 == '\0') && (cVar1 = (*(code *)param_4)(), uVar7 = str3, cVar1 != '\0')) {
        uVar7 = str2 - 0x80;
      }
    }
    else {
      cVar1 = (*(code *)param_4)();
      uVar7 = str3;
      if ((cVar1 == '\0') && (cVar1 = (*(code *)param_4)(), uVar7 = str, cVar1 != '\0')) {
        uVar7 = str2 - 0x80;
      }
    }
    dest = *(int *)(*(int *)(uVar7 + 8) + -0xc);
    if (dest == -1 || dest + 1 < 0) {
      str3 = *(uint *)(*(int *)(uVar7 + 8) + -4);
      piVar5 = std::string::__getRep(&GHIDRA_STACK(0xfffffde8),str3,str3);
      piVar5 = piVar5 + 3;
      memcpy(piVar5,*(undefined4 **)(uVar7 + 8),str3);
    }
    else {
      piVar5 = *(int **)(uVar7 + 8);
      strRep = piVar5 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    dest = operator_new();
    if (dest == 0) {
      badAlloc2 = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc2,0,&LAB_00404134,1,0,0,0);
    }
    std::uninitialized_copy_string(*(int *)(uVar7 + 0x1c),*(int *)(uVar7 + 0x20),dest);
    dest = operator_new();
    if (dest == 0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::uninitialized_copy_string(*(int *)(uVar7 + 0x3c),*(int *)(uVar7 + 0x40),dest);
    piStack_1b8 = (int *)0x0;
    dest = *(int *)(*(int *)(uVar7 + 0x60) + -0xc);
    if (dest == -1 || dest + 1 < 0) {
      str3 = *(uint *)(*(int *)(uVar7 + 0x60) + -4);
      piStack_1b8 = std::string::__getRep(alloc,str3,str3);
      piStack_1b8 = piStack_1b8 + 3;
      memcpy(piStack_1b8,*(undefined4 **)(uVar7 + 0x60),str3);
    }
    else {
      piStack_1b8 = *(int **)(uVar7 + 0x60);
      strRep = piStack_1b8 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    piStack_1a8 = (int *)0x0;
    dest = *(int *)(*(int *)(uVar7 + 0x70) + -0xc);
    if (dest == -1 || dest + 1 < 0) {
      str3 = *(uint *)(*(int *)(uVar7 + 0x70) + -4);
      piStack_1a8 = std::string::__getRep(alloc2,str3,str3);
      piStack_1a8 = piStack_1a8 + 3;
      memcpy(piStack_1a8,*(undefined4 **)(uVar7 + 0x70),str3);
    }
    else {
      piStack_1a8 = *(int **)(uVar7 + 0x70);
      strRep = piStack_1a8 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    str3 = std::__introsort_loop_string_4717cc(str,str2,in_stack_fffffde8,in_stack_fffffdec,(int)piVar5);
    dest = str3 - str;
    if (dest < 0) {
      dest = dest + 0x7f;
    }
    iVar2 = str2 - str3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    if (dest >> 7 < iVar2 >> 7) {
      piStack_1a8 = (int *)0x47179d;
      std::sort_string(str,str3,0,param_4);
      str = str3;
    }
    else {
      piStack_1a8 = (int *)0x471764;
      std::sort_string(str3,str2,0,param_4);
      str2 = str3;
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004717cc  std::__introsort_loop_string_4717cc   (2862 bytes)   [analysis]
//   quicksort loop of std::sort (inferred)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00471beb) */
/* WARNING: Removing unreachable block (ram,0x00471cfd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffee8 : 0x00471bf9 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl std::__introsort_loop_string_4717cc(uint str,uint str2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int dest;
  int *strRep;
  undefined4 *sehChainHead;
  int first;
  int last;
  int first2;
  int last2;
  int str3;
  int str4;
  code *in_stack_0000008c;
  undefined4 sehPrevFrame;
  undefined1 local_8c [8];
  int *str5;
  undefined4 local_7c;
  undefined4 local_74;
  int first3;
  int last3;
  int unused;
  undefined4 local_54;
  int first4;
  int last4;
  int unused2;
  undefined1 local_34 [8];
  int *str6;
  undefined1 local_24 [8];
  int *str7;
  undefined4 local_14;
  undefined **badAlloc;
  undefined **badAlloc2;
  
  __InitExceptBlockLDTC(0x4fe9a8);
  while( true ) {
    while (cVar3 = (*in_stack_0000008c)(), cVar3 != '\0') {
      str = str + 0x80;
    }
    do {
      uVar2 = str2;
      str2 = uVar2 - 0x80;
      cVar3 = (*in_stack_0000008c)();
    } while (cVar3 != '\0');
    if (str2 <= str) break;
    str5 = (int *)0x0;
    dest = *(int *)(*(int *)(str + 8) + -0xc);
    if (dest == -1 || dest + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(str + 8) + -4);
      str5 = std::string::__getRep(local_8c,uVar1,uVar1);
      str5 = str5 + 3;
      memcpy(str5,*(undefined4 **)(str + 8),uVar1);
    }
    else {
      str5 = *(int **)(str + 8);
      strRep = str5 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    local_7c = *(undefined4 *)(str + 0x10);
    first3 = 0;
    last3 = 0;
    unused = 0;
    local_74 = 0x40;
    dest = operator_new();
    if (dest == 0) {
      badAlloc2 = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc2,0,&LAB_00404134,1,0,0,0);
    }
    first3 = dest;
    last3 = std::uninitialized_copy_string(*(int *)(str + 0x1c),*(int *)(str + 0x20),dest);
    first4 = 0;
    last4 = 0;
    unused2 = 0;
    local_54 = 0x40;
    unused = last3;
    dest = operator_new();
    if (dest == 0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    first4 = dest;
    last4 = std::uninitialized_copy_string(*(int *)(str + 0x3c),*(int *)(str + 0x40),dest);
    str6 = (int *)0x0;
    dest = *(int *)(*(int *)(str + 0x60) + -0xc);
    unused2 = last4;
    if (dest == -1 || dest + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(str + 0x60) + -4);
      str6 = std::string::__getRep(local_34,uVar1,uVar1);
      str6 = str6 + 3;
      memcpy(str6,*(undefined4 **)(str + 0x60),uVar1);
    }
    else {
      str6 = *(int **)(str + 0x60);
      strRep = str6 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    str7 = (int *)0x0;
    dest = *(int *)(*(int *)(str + 0x70) + -0xc);
    if (dest == -1 || dest + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(str + 0x70) + -4);
      str7 = std::string::__getRep(local_24,uVar1,uVar1);
      str7 = str7 + 3;
      memcpy(str7,*(undefined4 **)(str + 0x70),uVar1);
    }
    else {
      str7 = *(int **)(str + 0x70);
      strRep = str7 + -3;
      if (strRep != &g_nullStringRep) {
        *strRep = *strRep + 1;
      }
    }
    local_14 = *(undefined4 *)(str + 0x78);
    std::string::operator_assign(str,str2);
    std::vector_string::operator_assign(str + 0x18,uVar2 - 0x68);
    std::vector_string::operator_assign(str + 0x38,uVar2 - 0x48);
    std::string::operator_assign(str + 0x58,uVar2 - 0x28);
    std::string::operator_assign(str + 0x68,uVar2 - 0x18);
    *(undefined4 *)(str + 0x10) = *(undefined4 *)(uVar2 - 0x70);
    *(undefined4 *)(str + 0x78) = *(undefined4 *)(uVar2 - 8);
    std::string::operator_assign(str2,(int)local_8c);
    std::vector_string::operator_assign(uVar2 - 0x68,(int)&local_74);
    std::vector_string::operator_assign(uVar2 - 0x48,(int)&local_54);
    std::string::operator_assign(uVar2 - 0x28,(int)local_34);
    std::string::operator_assign(uVar2 - 0x18,(int)local_24);
    *(undefined4 *)(uVar2 - 0x70) = local_7c;
    *(undefined4 *)(uVar2 - 8) = local_14;
    if (str7 != (int *)0x0) {
      if (str7[-3] != -1) {
        strRep = str7 + -3;
        if (strRep == &g_nullStringRep) {
          dest = 1;
        }
        else if (strRep == &g_nullStringRep) {
          dest = 1;
        }
        else {
          *strRep = *strRep + -1;
          dest = *strRep + 1;
        }
        if (dest != 0) goto LAB_0047216d;
      }
      operator_delete();
      str7 = (int *)0x0;
    }
LAB_0047216d:
    if (str6 != (int *)0x0) {
      if (str6[-3] != -1) {
        strRep = str6 + -3;
        if (strRep == &g_nullStringRep) {
          dest = 1;
        }
        else if (strRep == &g_nullStringRep) {
          dest = 1;
        }
        else {
          *strRep = *strRep + -1;
          dest = *strRep + 1;
        }
        if (dest != 0) goto LAB_00472203;
      }
      operator_delete();
      str6 = (int *)0x0;
    }
LAB_00472203:
    std::_Destroy_range_string(&local_54,first4,last4);
    operator_delete();
    std::_Destroy_range_string(&local_74,first3,last3);
    operator_delete();
    if (str5 != (int *)0x0) {
      if (str5[-3] != -1) {
        strRep = str5 + -3;
        if (strRep == &g_nullStringRep) {
          dest = 1;
        }
        else if (strRep == &g_nullStringRep) {
          dest = 1;
        }
        else {
          *strRep = *strRep + -1;
          dest = *strRep + 1;
        }
        if (dest != 0) goto LAB_004722de;
      }
      operator_delete();
      str5 = (int *)0x0;
    }
LAB_004722de:
    str = str + 0x80;
  }
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
      if (strRep == &g_nullStringRep) {
        dest = 1;
      }
      else if (strRep == &g_nullStringRep) {
        dest = 1;
      }
      else {
        *strRep = *strRep + -1;
        dest = *strRep + 1;
      }
      if (dest != 0) goto LAB_004718fc;
    }
    operator_delete();
    str4 = 0;
  }
LAB_004718fc:
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        dest = 1;
      }
      else if (strRep == &g_nullStringRep) {
        dest = 1;
      }
      else {
        *strRep = *strRep + -1;
        dest = *strRep + 1;
      }
      if (dest != 0) goto LAB_0047199b;
    }
    operator_delete();
    str3 = 0;
  }
LAB_0047199b:
  std::_Destroy_range_string(&GHIDRA_STACK(0x00000044),first2,last2);
  operator_delete();
  std::_Destroy_range_string(&GHIDRA_STACK(0x00000024),first,last);
  operator_delete();
  if (param_5 != 0) {
    if (*(int *)(param_5 + -0xc) != -1) {
      strRep = (int *)(param_5 + -0xc);
      if (strRep == &g_nullStringRep) {
        dest = 1;
      }
      else if (strRep == &g_nullStringRep) {
        dest = 1;
      }
      else {
        *strRep = *strRep + -1;
        dest = *strRep + 1;
      }
      if (dest != 0) goto LAB_00471a91;
    }
    operator_delete();
  }
LAB_00471a91:
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004722fc  DefinitionViewWindows::ScrollTextToTop2   (114 bytes)   [analysis]
//   moves the rich edit's selection and scroll position back to the start
void __cdecl DefinitionViewWindows::ScrollTextToTop2(int self)

{
  char cVar1;
  undefined4 charFormat [15];
  
  cVar1 = (**(code **)(*(int *)(*(int *)(self + 0x214) + 0xc) + 0x3c))();
  if (cVar1 != '\0') {
    OWL::TCharFormat::TCharFormat(charFormat,*(int **)(self + 0x214),'\x01',0xf800003f);
    PVWRichEdit::ApplyFont((undefined4 *)(*(int *)(self + 0x60) + 0x170),(int)charFormat);
    OWL::TRichEdit::SetCharFormat(*(int **)(self + 0x214),(LPARAM)charFormat,1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472370  DefinitionViewWindows::GetDefinitionCount   (64 bytes)   [analysis]
//   number of definitions shown (for the current dictionary tab)
int __cdecl DefinitionViewWindows::GetDefinitionCount(int self)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(self + 0x88) + -6;
  iVar3 = *(int *)(self + 0x88) + 3;
  if (iVar1 < 0) {
    iVar3 = iVar3 - iVar1;
    iVar1 = 0;
  }
  iVar2 = *(int *)(self + 0x70) - *(int *)(self + 0x6c);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  iVar2 = (iVar2 >> 4) + -1;
  if ((iVar2 < iVar3) && (iVar1 = iVar1 - (iVar3 - iVar2), iVar1 < 0)) {
    iVar1 = 0;
  }
  return iVar1 + 1;
}

} // namespace tea
