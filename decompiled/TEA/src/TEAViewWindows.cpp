// TEA.exe — application module "TEAViewWindows"
// 110 functions, 0x00450af4..0x0045e8c4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00450af4  TEAViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: TEAViewWindows::Find [rtti:vtable]; TEAViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl TEAViewWindows::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&TEAViewWindows::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = PropertiesViewWindows::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b3c  TEAViewWindows::EvLButtonDown   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONDOWN
//   also: TabbyPropertiesViewWindows::Child8030_Notifym551 [owl:response-table]; DefinitionViewWindows::EvLButtonDown [owl:response-table]
void __stdcall TEAViewWindows::EvLButtonDown(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00450b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0xc0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b4c  TEAViewWindows::EvMouseMove   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MOUSEMOVE
//   also: DefinitionViewWindows::EvMouseMove [owl:response-table]
void __stdcall TEAViewWindows::EvMouseMove(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00450b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0xc4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b5c  TEAViewWindows::EvLButtonUp   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONUP
//   also: DefinitionViewWindows::EvLButtonUp [owl:response-table]
void __stdcall TEAViewWindows::EvLButtonUp(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00450b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 200))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b6c  TEAViewWindows::EvLButtonDblClk   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONDBLCLK
void __stdcall TEAViewWindows::EvLButtonDblClk(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00450b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0xcc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b7c  TEAViewWindows::EvRButtonDown   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_RBUTTONDOWN
void __stdcall TEAViewWindows::EvRButtonDown(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00450b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0xd0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b8c  TEAViewWindows::EvRButtonUp   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_RBUTTONUP
void __stdcall TEAViewWindows::EvRButtonUp(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00450b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0xd4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b9c  TEAViewWindows::EvDropFiles   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_DROPFILES
void __stdcall TEAViewWindows::EvDropFiles(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00450ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0xd8))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450bac  TEAViewWindows::EvSysColorChange   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_SYSCOLORCHANGE
void __stdcall TEAViewWindows::EvSysColorChange(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00450bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0xdc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450bbc  TEAViewWindows::TEAViewWindows   (1514 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TEAViewWindows's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x00450eb5) */
/* WARNING: Removing unreachable block (ram,0x00450eed) */
/* WARNING: Removing unreachable block (ram,0x00450fac) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x00450fb4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl TEAViewWindows::TEAViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int *pvwPushButton;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f7df4);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x336);
    self[0x336] = (int)(self + 0x333);
    self[0x337] = (int)(self + 0x334);
    self[1] = (int)(self + 0x333);
    self[2] = (int)(self + 0x334);
    self[0x332] = 0;
    self[0x335] = 0;
    self[0x333] = (int)&OWL::TEventHandler::vftable;
    self[0x334] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x336,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xc68;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0xc68;
  PropertiesViewWindows::PropertiesViewWindows(self,1,param_5,param_3,param_4,(uint *)0x109a,param_6,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xc68;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0xc68;
  self[3] = (int)&TEAViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004fa094;
  *(undefined ***)self[2] = &PTR_LAB_004fa0a0;
  *(undefined ***)(*self + 8) = &TEAViewWindows::vftable_TWindow;
  self[0x18] = param_6;
  self[0x19] = -1;
  self[0x1a] = -1;
  self[0x1b] = 0;
  self[0x1c] = 0;
  self[0x1d] = 0;
  FUN_004c279c((uint *)(self + 0x1e),0x80c,(uint *)"Text Document (TXT)|*.txt|TEA&Sympathy Dictionary (TSD)|*.tsd",0,
               0,0,0,0,0);
  self[0x28] = 0;
  self[0x29] = 0;
  OWL::TStatic::TStatic_4c7a28(self + 0x2a,0,*self,9000,0,0);
  PVWCombo::PVWCombo(self + 0x56,0,self,0x10ae,0);
  PVWPushButton::PVWPushButton(self + 0x84,0,self,0x10b8);
  PVWEdit::PVWEdit(self + 0xb6,0,self,0x111c,3);
  PVWUpDown::PVWUpDown(self + 0xe5,0,self,0x1108);
  PVWStatic::PVWStatic(self + 0x116,0,self,0x1a22,0);
  PVWEdit::PVWEdit(self + 0x143,0,self,0x1112,3);
  PVWUpDown::PVWUpDown(self + 0x172,0,self,0x10fe);
  self[0x1a3] = 0;
  self[0x1a4] = 0;
  self[0x1a8] = 0;
  self[0x1a8] = (int)&g_emptyStringData;
  self[0x1ad] = 0;
  self[0x1ae] = 0;
  self[0x1b2] = 0;
  self[0x1ac] = 0x100;
  self[0x1b4] = 0;
  TEAProgressBar::TEAProgressBar(self + 0x1b5,0,*self,0x1144);
  self[0x1ec] = 0;
  _vector_new_ldtc_(self + 0x1ef,0x44,3,1,(undefined*)PVWURL::Link::Link);
  FUN_0048faec((uint *)(self + 0x31c));
  self[0x31e] = 0;
  self[799] = 0;
  self[0x321] = 0;
  self[0x322] = 0;
  self[0x326] = 0;
  self[800] = 0x100;
  self[0x328] = 1;
  self[0x329] = 0;
  self[0x32a] = 0;
  self[0x32b] = 0;
  self[0x32c] = 0;
  self[0x32e] = 0;
  self[0x32f] = 0;
  self[0x330] = 0;
  self[0x331] = 0;
  if (self[0x18] == 0) {
    pvwPushButton = (int *)operator_new();
    if (pvwPushButton != (int *)0x0) {
      SearchModeButton::SearchModeButton(pvwPushButton,0,*self,0x3192);
    }
    self[0x1a3] = (int)pvwPushButton;
  }
  else {
    pvwPushButton = (int *)operator_new();
    if (pvwPushButton != (int *)0x0) {
      PVWStatic::PVWStatic(pvwPushButton,0,self,0x161c,0);
    }
    self[0x329] = (int)pvwPushButton;
    pvwPushButton = (int *)operator_new();
    if (pvwPushButton != (int *)0x0) {
      PVWPushButton::PVWPushButton(pvwPushButton,0,self,0x10cc);
    }
    self[0x32a] = (int)pvwPushButton;
    pvwPushButton = (int *)operator_new();
    if (pvwPushButton != (int *)0x0) {
      PVWPushButton::PVWPushButton(pvwPushButton,0,self,2);
    }
    self[0x32b] = (int)pvwPushButton;
    pvwPushButton = (int *)operator_new();
    if (pvwPushButton != (int *)0x0) {
      PVWPushButton::PVWPushButton(pvwPushButton,0,self,0x5fa);
    }
    self[0x32c] = (int)pvwPushButton;
  }
  TEAViewWindows::LoadPrintMargins((int)self);
  *(undefined1 *)(self + 0x222) = 0;
  FUN_004a6d7c(*self,0x1a04);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004511c8  TEAViewWindows::~TEAViewWindows   (1278 bytes)   [rtti:dtor destructor]
//   written in code as TEAViewWindows::_dtor
void __cdecl TEAViewWindows::_dtor(int *self,byte dtorFlags)

{
  int iVar1;
  uint uVar2;
  int *control;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f7fac);
  if (self == (int *)0x0) goto LAB_004516b5;
  self[3] = (int)&TEAViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004fa094;
  *(undefined ***)self[2] = &PTR_LAB_004fa0a0;
  *(undefined ***)(*self + 8) = &TEAViewWindows::vftable_TWindow;
  TEAViewWindows::DeletePanes((int)self);
  uVar2 = 0;
  while( true ) {
    iVar1 = self[0x322] - self[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar2) break;
    iVar1 = *(int *)(self[0x321] + uVar2 * 4);
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(iVar1 + 8))();
    }
    uVar2 = uVar2 + 1;
  }
  if ((uint *)self[799] != (uint *)0x0) {
    OWL::TBrush::_dtor((uint *)self[799],3);
  }
  if (self[0x32c] != 0) {
    (*(code *)**(undefined4 **)(self[0x32c] + 0xc))();
  }
  if (self[0x32b] != 0) {
    (*(code *)**(undefined4 **)(self[0x32b] + 0xc))();
  }
  if (self[0x32a] != 0) {
    (*(code *)**(undefined4 **)(self[0x32a] + 0xc))();
  }
  if (self[0x329] != 0) {
    (*(code *)**(undefined4 **)(self[0x329] + 0xc))();
  }
  if (self[0x1a3] != 0) {
    (*(code *)**(undefined4 **)(self[0x1a3] + 0xc))();
  }
  InputEngine::_dtor(self[0x1b],3);
  if (self[0x1c] != 0) {
    TSDictionaryDefinitionSearchIndexed::_dtor(self[0x1c],3);
  }
  TSDictionaryDefinitionSearchSequential::_dtor(self[0x1d],3);
  std::_Destroy_range_ptr_451754(self + 800,self[0x321],self[0x322]);
  operator_delete();
  OWL::TGdiObject::_dtor((uint *)(self + 0x31c),0);
  _vector_delete_ldtc_((int)(self + 0x1ef),0x44,3,1,(undefined*)PVWFontMaintainer::_dtor);
  TEAProgressBar::_dtor(self + 0x1b5,2);
  std::_Destroy_range_ptr_45176c(self + 0x1ac,self[0x1ad],self[0x1ae]);
  operator_delete();
  if (self[0x1a8] != 0) {
    if (*(int *)(self[0x1a8] + -0xc) != -1) {
      control = (int *)(self[0x1a8] + -0xc);
      if (control == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (control == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *control = *control + -1;
        iVar1 = *control + 1;
      }
      if (iVar1 != 0) goto LAB_00451501;
    }
    operator_delete();
    self[0x1a8] = 0;
  }
LAB_00451501:
  PVWUpDown::_dtor(self + 0x172,2);
  PVWEdit::_dtor(self + 0x143,2);
  PVWStatic::_dtor(self + 0x116,2);
  PVWUpDown::_dtor(self + 0xe5,2);
  PVWEdit::_dtor(self + 0xb6,2);
  PVWPushButton::_dtor(self + 0x84,2);
  PVWCombo::_dtor(self + 0x56,2);
  control = self + 0x2a;
  *(int *)(self[0x2b] + -4) = *(int *)(self[0x2b] + -4) + -4;
  *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
  OWL::TControl::_dtor(control,0);
  *(int *)(self[0x2b] + -4) = *(int *)(self[0x2b] + -4) + 4;
  *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
  *(int *)(self[0x2b] + -4) = *(int *)(self[0x2b] + -4) + 0x96;
  OWL::TWindow::_dtor(self + 0x34,0);
  *(int *)(self[0x2b] + -4) = *(int *)(self[0x2b] + -4) + -0x96;
  OWL::TStreamableBase::_dtor(self + 0x32,0);
  OWL::TOpenSaveDialog::TData::_dtor((int)(self + 0x1e),2);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xc68;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0xc68;
  PropertiesViewWindows::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xc68;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0xc68;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x336,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x334,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004516b5:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451754  std::_Destroy_range_ptr_451754   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_451754(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045176c  std::_Destroy_range_ptr_45176c   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_45176c(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451784  TEAViewWindows::CreatePanes   (2868 bytes)   [analysis]
//   (re)creates the result panes (one output group per pane: label + match list) laid out from the "Panes" profile value
/* WARNING: Removing unreachable block (ram,0x00451a54) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl TEAViewWindows::CreatePanes(int *self,int paneCount)

{
  RECT *pRect;
  undefined4 uVar2;
  RECT *pRect2;
  int *piVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  int iVar6;
  int tryLocalMachine;
  int x;
  int y;
  int local_1b4;
  int local_1b0;
  RECT rect;
  undefined4 unused;
  undefined *unused2;
  RECT rect2;
  undefined1 *unused3;
  undefined4 unused4;
  int unused5;
  int unused6;
  int *strRep;
  undefined1 *unused7;
  undefined4 unused8;
  char *unused9;
  char *unused10;
  int *strRep2;
  HRGN unused11;
  HRGN unused12;
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  int *strRep3;
  int unused17;
  int *local_124;
  int *unused18;
  int *value;
  int *list;
  int profile;
  int *label;
  int local_10c;
  int unused19;
  int unused20;
  int cx;
  int cy;
  int local_f8;
  LONG local_f4;
  LONG *local_f0;
  RECT *pRect3;
  LONG *local_e8;
  int local_e4;
  undefined1 *unused21;
  undefined4 unused22;
  int unused23;
  int unused24;
  int *strRep4;
  undefined1 *unused25;
  undefined *unused26;
  undefined4 unused27;
  char *len;
  uint pos;
  uint local_b8 [5];
  int *unused28;
  int unused29;
  int *local_9c;
  undefined4 *dest;
  int local_94;
  int local_90;
  int dictionaryList;
  undefined4 local_88;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_64 [8];
  int str;
  int outputGroup;
  int *matchListWindows;
  int *matchListLabelWindows;
  undefined1 local_48 [8];
  int str2;
  int outputGroup2;
  int persist [2];
  undefined1 out [8];
  char *text;
  undefined1 valueName [8];
  int str3;
  HRGN region [2];
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x4f8174);
  if (*(int *)(*self + 0xc) == 0) {
    *sehChainHead = local_88;
    return local_88;
  }
  dictionaryList = TEAAppWindows::GetDictionaryList(self[0xe]);
  local_90 = TSDictionaryList::GetCount(dictionaryList);
  if (paneCount == 0) {
LAB_004517f5:
    TEAViewWindows::DeletePanes((int)self);
    if (paneCount == 2) {
      self[0x1b4] = self[0x1b4] + -1;
    }
    else if (paneCount == 3) {
      self[0x1b4] = self[0x1b4] + 1;
    }
    else {
      self[0x1b4] = 0;
    }
  }
  else if (paneCount == 1) {
    if (self[0x1b4] < 0) {
      self[0x1b4] = 0;
    }
  }
  else {
    if (paneCount - 2U < 2) goto LAB_004517f5;
    if (paneCount - 2U == 2) {
      local_94 = self[0x1b4];
      outputGroup2 = *(int *)(local_94 * 4 + self[0x1ad]);
      if (outputGroup2 != 0) {
        ehContext = 0x14;
        TEAViewWindows::OutputGroup::_dtor(outputGroup2,3);
        ehContext = 8;
      }
      local_9c = self + 0x1ac;
      dest = (undefined4 *)(self[0x1b4] * 4 + self[0x1ad]);
      if ((undefined4 *)self[0x1ae] != dest + 1) {
        std::copy_ptr_45233c(dest + 1,(undefined4 *)self[0x1ae],dest);
      }
      local_9c[2] = local_9c[2] + -4;
      unused29 = local_9c[2];
      if (local_90 <= self[0x1b4]) {
        self[0x1b4] = self[0x1b4] + -1;
      }
    }
    else {
      unused28 = self + 0x1ac;
      local_90 = self[0x1ae] - self[0x1ad];
      if (local_90 < 0) {
        local_90 = local_90 + 3;
      }
      local_90 = local_90 >> 2;
    }
  }
  GetWindowRectInParent(&rect2.left,self);
  ehContext = 0x20;
  FUN_0049ce64((int *)region);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x38;
  std::string::string_from_cstr((int)valueName,(uint *)"Panes");
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x2c;
  sprintf((undefined1 *)local_b8,&DAT_004f76b2 /* "%c%d" */);
  pos = *(uint *)(str3 + -4);
  len = strlen(local_b8);
  std::string::replace((int)valueName,pos,0,(uint)local_b8,(uint)len,0,(uint)len);
  unused27 = 0;
  unused25 = out;
  unused26 = &g_emptyStringData;
  text = &g_emptyStringData;
  unused2 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x5c;
  tryLocalMachine = 0;
  iVar6 = 0;
  GetProfileKeyPath((int)local_48);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_48,iVar6,tryLocalMachine);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep4 = (int *)(str2 + -0xc);
      if (strRep4 == &g_nullStringRep) {
        iVar6 = 1;
      }
      else if (strRep4 == &g_nullStringRep) {
        iVar6 = 1;
      }
      else {
        *strRep4 = *strRep4 + -1;
        iVar6 = *strRep4 + 1;
      }
      if (iVar6 != 0) goto LAB_00451b42;
    }
    unused24 = str2 + -0xc;
    unused23 = str2 + -0xc;
    operator_delete();
    unused22 = 0;
    unused21 = local_48;
    str2 = 0;
    unused = 0;
  }
LAB_00451b42:
  ehContext = 0x2c;
  Persist::QueryString((int)persist,(int)valueName,(int)out);
  local_e4 = 0;
  iVar6 = 0;
  if (0 < local_90) {
    do {
      pRect = &rect2;
      pRect2 = &rect;
      for (tryLocalMachine = 4; tryLocalMachine != 0; tryLocalMachine = tryLocalMachine + -1) {
        pRect2->left = pRect->left;
        pRect = (RECT *)((int)pRect + ((uint)bVar5 * -2 + 1) * 4);
        pRect2 = (RECT *)((int)pRect2 + ((uint)bVar5 * -2 + 1) * 4);
      }
      ehContext = 0x2c;
      if (self[0x29] == 0) {
        pRect = (RECT *)&rect2.top;
      }
      else {
        pRect = &rect2;
      }
      if (self[0x29] == 0) {
        local_e8 = &rect2.bottom;
      }
      else {
        local_e8 = &rect2.right;
      }
      if (self[0x29] == 0) {
        pRect3 = (RECT *)&rect.top;
      }
      else {
        pRect3 = &rect;
      }
      if (self[0x29] == 0) {
        local_f0 = &rect.bottom;
      }
      else {
        local_f0 = &rect.right;
      }
      if (paneCount == 6) {
        pRect3->left = **(LONG **)(iVar6 * 4 + self[0x1ad]);
        if (iVar6 + 1 < local_90) {
          tryLocalMachine = **(int **)((iVar6 + 1) * 4 + self[0x1ad]) - self[0x1ed];
        }
        else {
          tryLocalMachine = *local_e8;
        }
        *local_f0 = tryLocalMachine;
      }
      else {
        pRect3->left = pRect->left + local_e4;
        tryLocalMachine = ParsePaneLayout(self,text,(*local_e8 - pRect->left) + self[0x1ed],local_90,
                             iVar6);
        local_e4 = local_e4 + tryLocalMachine;
        *local_f0 = (tryLocalMachine + pRect3->left) - self[0x1ed];
      }
      local_f4 = pRect3->left;
      FUN_0049cf60((undefined4*)region,&rect);
      pRect = &rect;
      piVar4 = &x;
      for (tryLocalMachine = 4; tryLocalMachine != 0; tryLocalMachine = tryLocalMachine + -1) {
        *piVar4 = pRect->left;
        pRect = (RECT *)((int)pRect + ((uint)bVar5 * -2 + 1) * 4);
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      local_1b0 = y + self[0x31e];
      rect.top = rect.top + self[0x31e];
      if (((paneCount == 6) || (paneCount == 5)) || (paneCount == 4)) {
LAB_00451d28:
        MatchListWindows::SetBounds(*(int **)(*(int *)(iVar6 * 4 + self[0x1ad]) + 8),&rect.left,'\0');
        local_f8 = **(int **)(*(int *)(iVar6 * 4 + self[0x1ad]) + 4);
        cy = local_1b0 - y;
        cx = local_1b4 - x;
        unused20 = y;
        unused19 = x;
        FUN_004a7aa0(local_f8,(HWND)0x0,x,y,cx,cy,0x21c);
      }
      else {
        if (paneCount == 1) {
          tryLocalMachine = self[0x1ae] - self[0x1ad];
          if (tryLocalMachine < 0) {
            tryLocalMachine = tryLocalMachine + 3;
          }
          if (iVar6 < tryLocalMachine >> 2) goto LAB_00451d28;
        }
        local_10c = TEAViewWindows::FirstFreePaneId((int)self);
        matchListLabelWindows = (int *)operator_new();
        if (matchListLabelWindows != (int *)0x0) {
          ehContext = 0x80;
          MatchListLabelWindows::MatchListLabelWindows(matchListLabelWindows,0,self,local_10c + 0x19be,&x);
        }
        ehContext = 0x2c;
        label = matchListLabelWindows;
        (**(code **)(*(int *)(*matchListLabelWindows + 8) + 0x10))();
        profile = TEAAppWindows::GetProfile(self[0xe]);
        matchListWindows = (int *)operator_new();
        if (matchListWindows != (int *)0x0) {
          ehContext = 0x98;
          MatchListWindows::MatchListWindows(matchListWindows,0,self,local_10c + 0x10a4,&rect.left);
        }
        ehContext = 0x2c;
        list = matchListWindows;
        MatchListWindows::SetFonts((int)matchListWindows,self + 0x200,self + 0x211,*(undefined4 *)(profile + 0x70)
                     ,*(undefined4 *)(profile + 0xb0));
        (**(code **)(*(int *)(*list + 8) + 0x10))();
        outputGroup = operator_new();
        if (outputGroup != 0) {
          ehContext = 0xb0;
          TEAViewWindows::OutputGroup::OutputGroup(outputGroup,label,list);
          ehContext = 0xa4;
        }
        value = &outputGroup;
        if (self[0x1ae] == self[0x1b2]) {
          std::vector_ptr::insert_aux_452360((int)(self + 0x1ac),(undefined4 *)self[0x1ae],value);
        }
        else {
          local_124 = (int *)self[0x1ae];
          *local_124 = outputGroup;
          self[0x1ae] = self[0x1ae] + 4;
          unused18 = local_124;
        }
      }
      ehContext = 0xbc;
      TSDictionaryList::GetFileTitle(local_64,dictionaryList,iVar6);
      ehDtorCount = ehDtorCount + 1;
      unused17 = iVar6;
      MatchListLabelWindows::SetLabel(*(int **)(*(int *)(iVar6 * 4 + self[0x1ad]) + 4),iVar6,(int)local_64);
      ehDtorCount = ehDtorCount + -1;
      if (str != 0) {
        if (*(int *)(str + -0xc) != -1) {
          strRep3 = (int *)(str + -0xc);
          if (strRep3 == &g_nullStringRep) {
            tryLocalMachine = 1;
          }
          else if (strRep3 == &g_nullStringRep) {
            tryLocalMachine = 1;
          }
          else {
            *strRep3 = *strRep3 + -1;
            tryLocalMachine = *strRep3 + 1;
          }
          if (tryLocalMachine != 0) goto LAB_00452074;
        }
        unused16 = str + -0xc;
        unused15 = str + -0xc;
        operator_delete();
        unused14 = 0;
        str = 0;
        unused13 = local_64;
      }
LAB_00452074:
      ehContext = 0x2c;
      **(LONG **)(iVar6 * 4 + self[0x1ad]) = local_f4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_90);
  }
  if ((paneCount == 6) || (paneCount == 5)) {
    unused12 = region[0];
    RedrawWindow(*(HWND *)(*self + 0xc),(RECT *)0x0,region[0],0x101);
    FUN_0049cfc0((undefined4*)region,&rect2);
    unused11 = region[0];
    RedrawWindow(*(HWND *)(*self + 0xc),(RECT *)0x0,region[0],0x105);
  }
  else {
    (**(code **)(*(int *)(*self + 8) + 0x68))();
    TEAViewWindows::RestartSearch(self);
  }
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  ehDtorCount = ehDtorCount + -1;
  if (text != (char *)0x0) {
    if (*(int *)(text + -0xc) != -1) {
      strRep2 = (int *)(text + -0xc);
      if (strRep2 == &g_nullStringRep) {
        iVar6 = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        iVar6 = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        iVar6 = *strRep2 + 1;
      }
      if (iVar6 != 0) goto LAB_004521e4;
    }
    unused10 = text + -0xc;
    unused9 = text + -0xc;
    operator_delete();
    unused8 = 0;
    unused7 = out;
    text = (char *)0x0;
  }
LAB_004521e4:
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar6 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar6 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar6 = *strRep + 1;
      }
      if (iVar6 != 0) goto LAB_00452293;
    }
    unused6 = str3 + -0xc;
    unused5 = str3 + -0xc;
    operator_delete();
    unused4 = 0;
    unused3 = valueName;
    str3 = 0;
  }
LAB_00452293:
  ehDtorCount = ehDtorCount + -1;
  uVar2 = OWL::TRegion::_dtor((undefined4*)region,2);
  *sehChainHead = local_88;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045233c  std::copy_ptr_45233c   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00406584 (36 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers (vector erase)
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_45233c(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452360  std::vector_ptr::insert_aux_452360   (437 bytes, 2 ranges)   [analysis]
//   std::vector<T *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux_452360(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4f8290);
  storage = *(undefined4 **)(vec + 8);
  if (storage == *(undefined4 **)(vec + 0x18)) {
    newCapacity = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (newCapacity < 0) {
      newCapacity = newCapacity + 3;
    }
    if (newCapacity >> 2 == 0) {
      newCapacity = 0x100;
    }
    else {
      newCapacity = (newCapacity >> 2) * 2;
    }
    storage = (undefined4 *)operator_new();
    if (storage == (undefined4 *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::copy_ptr_45255c(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr_45255c(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr_45176c(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr_452538(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452538  std::copy_backward_ptr_452538   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_452538(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045255c  std::copy_ptr_45255c   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_45255c(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f82d0);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004525dc  std::_Destroy_range_ptr_4525dc   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_4525dc(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004525f4  TEAViewWindows::ShowDictionaryProperties   (166 bytes)   [analysis]
//   runs the dictionary properties dialog for the current dictionary list
void __cdecl TEAViewWindows::ShowDictionaryProperties(int self)

{
  int dictionaryList;
  int iVar2;
  int *piVar3;
  undefined4 *sehChainHead;
  int iVar4;
  undefined4 sehPrevFrame;
  int teaDictionaryPropertiesWindows [696];
  
  __InitExceptBlockLDTC(0x4f82f4);
  iVar4 = *(int *)(self + 0x6d0);
  dictionaryList = TEAAppWindows::GetDictionaryList(*(int *)(self + 0x38));
  piVar3 = (int *)(*(int *)(*(int *)(self + 0x6d0) * 4 + *(int *)(self + 0x6b4)) + 8);
  if (*piVar3 == 0) {
    iVar2 = *piVar3;
  }
  else {
    iVar2 = *(int *)*piVar3;
  }
  piVar3 = TEADictionaryPropertiesWindows::TEADictionaryPropertiesWindows(teaDictionaryPropertiesWindows,0,iVar2,*(int *)(self + 0x38),dictionaryList,iVar4);
  (**(code **)(piVar3[3] + 0x14))();
  TEADictionaryPropertiesWindows::_dtor(teaDictionaryPropertiesWindows,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045269c  TEAViewWindows::RestartSearch   (24 bytes)   [analysis]
//   checks the dictionaries are still valid, then starts the search again
void __cdecl TEAViewWindows::RestartSearch(int *self)

{
  TEAViewWindows::CheckDictionaries(self);
  TEAViewWindows::StartSearch((int)self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004526b4  TEAViewWindows::CmOpenDictionary   (1047 bytes)   [analysis]
//   File Open dialog for .tsd files (seeded from the file history); adds the choice to the history and restarts the search
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::CmOpenDictionary(int *self)

{
  uint pos;
  undefined *fileHistory;
  int *piVar3;
  int iVar4;
  char *len;
  uint *puVar6;
  uint *strRep;
  undefined4 *sehChainHead;
  char cVar8;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  uint *local_154;
  int local_14c;
  int local_148;
  undefined4 streamableBase [2];
  undefined4 window [34];
  undefined1 result [8];
  uint *local_34;
  uint data [2];
  uint *local_24;
  
  __InitExceptBlockLDTC(0x4f8374);
  FUN_004c279c(data,0x81a04,(uint *)"Dictionary File (*.tsd)|*.tsd|All Files|*.*",0,0x4f75e6,
               0x4f76e3,0x1000,0,0);
  fileHistory = GetFileHistory(self[0xe],0);
  FileHistory::Get((int)result,(int)fileHistory,0);
  strncpy(local_24,local_34,(char *)0x104);
  piVar3 = OWL::TFileOpenDialog::TFileOpenDialog(&local_14c,0,*self,(int)data,0,0x4f76e5,0);
  iVar4 = (**(code **)(piVar3[3] + 0x14))();
  cVar8 = iVar4 == 1;
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x5c;
  *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_14c,0);
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x5c;
  *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x5c;
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x96;
  OWL::TWindow::_dtor(window,0);
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(streamableBase,0);
  if (cVar8 != '\0') {
    len = strlen(local_24);
    if (len[(int)local_24 + 1] == '\0') {
      iVar4 = TEAAppWindows::OpenDictionaries(self[0xe],local_24);
      if (iVar4 != 0) {
        FileHistory::Add((int)fileHistory,local_24);
      }
    }
    else {
      puVar6 = (uint *)((char *)((int)local_24 + (int)len) + 1);
      do {
        std::string::string_from_cstr((int)str,local_24);
        std::string::replace_fill((int)str,local_154[-1],0,1,0x5c);
        pos = local_154[-1];
        len = strlen(puVar6);
        std::string::replace((int)str,pos,0,(uint)puVar6,(uint)len,0,(uint)len);
        iVar4 = TEAAppWindows::OpenDictionaries(self[0xe],local_154);
        if (iVar4 != 0) {
          FileHistory::Add((int)fileHistory,local_154);
        }
        len = strlen(puVar6);
        puVar6 = (uint *)((int)puVar6 + (int)(len + 1));
        if (local_154 != (uint *)0x0) {
          if (local_154[-3] != 0xffffffff) {
            strRep = local_154 + -3;
            if (strRep == &g_nullStringRep) {
              iVar4 = 1;
            }
            else if (strRep == &g_nullStringRep) {
              iVar4 = 1;
            }
            else {
              *strRep = *strRep - 1;
              iVar4 = *strRep + 1;
            }
            if (iVar4 != 0) goto LAB_00452a05;
          }
          operator_delete();
          local_154 = (uint *)0x0;
        }
LAB_00452a05:
      } while ((char)*puVar6 != '\0');
    }
  }
  TEAViewWindows::RestartSearch(self);
  if (local_34 != (uint *)0x0) {
    if (local_34[-3] != 0xffffffff) {
      puVar6 = local_34 + -3;
      if (puVar6 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (puVar6 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *puVar6 = *puVar6 - 1;
        iVar4 = *puVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_00452a9a;
    }
    operator_delete();
    local_34 = (uint *)0x0;
  }
LAB_00452a9a:
  OWL::TOpenSaveDialog::TData::_dtor((int)data,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452b50  TEAViewWindows::SetCurrentPane   (122 bytes)   [analysis]
//   makes pane `pane` current (moving the focus to its list when the current list has it)
void __cdecl TEAViewWindows::SetCurrentPane(int *self,int pane)

{
  int *currentList;
  HWND hWnd;
  
  if (pane != self[0x1b4]) {
    currentList = *(int **)(*(int *)(self[0x1b4] * 4 + self[0x1ad]) + 8);
    hWnd = GetFocus();
    if (hWnd == *(HWND *)(*currentList + 0xc)) {
      SetFocus(*(HWND *)(**(int **)(*(int *)(pane * 4 + self[0x1ad]) + 8) + 0xc));
    }
    else {
      self[0x1b4] = pane;
      (**(code **)(*(int *)(*self + 8) + 0x68))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452bcc  TEAViewWindows::GetCurrentPane   (14 bytes)   [analysis]
//   index of the current pane
undefined4 __cdecl TEAViewWindows::GetCurrentPane(int self)

{
  return *(undefined4 *)(self + 0x6d0);
}

// ----------------------------------------------------------------------------------------------------
// 0x00452bdc  TEAViewWindows::GetLengthRange   (278 bytes)   [analysis]
//   word-length range to scan for pane `pane`: intersection of the query's range with the shortest/longest settings; step is -1 when listing longest first
int __cdecl TEAViewWindows::GetLengthRange(int self,int pane,int *first,int *last,int *step)

{
  int longest;
  int shortest;
  int matchEngineSet;
  int local_c;
  
  *first = 0x65;
  *last = 0;
  longest = TEAAppWindows::GetProfile(*(int *)(self + 0x38));
  *step = 1;
  if (*(int *)(self + 0x690) == 0) {
    shortest = *(int *)(pane * 4 + *(int *)(self + 0x6b4));
    matchEngineSet = shortest + 0x28;
    MatchEngineSet::SetLengthLimits(matchEngineSet,1,100);
    if ((*(int *)(longest + 0x1b8) != 0) &&
       (longest = *(int *)(longest + 0x1bc), *step = longest, longest == 0)) {
      longest = MatchEngineSet::GetLengthKindSum(matchEngineSet);
      *step = longest;
    }
    MatchEngineSet::GetLengthRange(matchEngineSet,first,last);
    local_c = 0;
    if (*last < *first) {
      if (**(char **)(shortest + 0x50) == '\x03') {
        local_c = 1;
      }
      else {
        local_c = 2;
      }
    }
    longest = PVWEdit::GetInt((int *)(self + 0x50c));
    shortest = PVWEdit::GetInt((int *)(self + 0x2d8));
    MatchEngineSet::SetLengthLimits(matchEngineSet,shortest,longest);
    MatchEngineSet::GetLengthRange(matchEngineSet,first,last);
    if ((*last < *first) && (local_c == 0)) {
      local_c = 3;
    }
  }
  else {
    local_c = 1;
  }
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452cf4  TEAViewWindows::PrepareToClose   (40 bytes)   [analysis]
//   stops a running search before the window closes; true when it may close
bool __cdecl TEAViewWindows::PrepareToClose(int self)

{
  int iVar1;
  
  iVar1 = *(int *)(self + 100);
  if (iVar1 != 4) {
    TEAViewWindows::SetSearching(self,4);
  }
  return iVar1 != 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452d1c  TEAViewWindows::GetFocusedListEntryCount   (94 bytes)   [analysis]
//   number of entries in the list that has the focus (or the current pane's list)
int __cdecl TEAViewWindows::GetFocusedListEntryCount(int self)

{
  int *matchListWindows;
  HWND hWnd;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(self + 0x6d0);
  if (-1 < iVar3) {
    iVar4 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    if (iVar3 < iVar4 >> 2) {
      matchListWindows = *(int **)(*(int *)(iVar3 * 4 + *(int *)(self + 0x6b4)) + 8);
      hWnd = GetFocus();
      if (hWnd == *(HWND *)(*matchListWindows + 0xc)) {
        iVar3 = MatchListWindows::GetEntryCount((int)matchListWindows);
        return iVar3;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452d7c  TEAViewWindows::GetCurrentListLineCount   (74 bytes)   [analysis]
//   number of lines in the current pane's list
undefined4 __cdecl TEAViewWindows::GetCurrentListLineCount(int self)

{
  int iVar1;
  undefined4 lineCount;
  int iVar3;
  
  iVar1 = *(int *)(self + 0x6d0);
  if (-1 < iVar1) {
    iVar3 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar1 < iVar3 >> 2) {
      lineCount = MatchListWindows::GetLineCount(*(int *)(*(int *)(iVar1 * 4 + *(int *)(self + 0x6b4)) + 8));
      return lineCount;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452dc8  TEAViewWindows::CmOptions   (303 bytes)   [analysis]
//   opens the Options dialog (TEAPropertiesViewWindows), or brings it to the front
void __cdecl TEAViewWindows::CmOptions(undefined4 *self)

{
  int iVar1;
  int *pos;
  uint uVar3;
  undefined4 *sehChainHead;
  int value;
  uint unused;
  int *local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int *teaPropertiesViewWindows;
  
  __InitExceptBlockLDTC(0x4f83ec);
  local_30 = (int *)0x0;
  uVar3 = 0;
  while( true ) {
    iVar1 = self[0x322] - self[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    pos = (int *)(self[0x321] + uVar3 * 4);
    if (*pos == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*pos + 8);
    }
    unused = uVar3;
    local_30 = FUN_004dd744(*pos,iVar1,(int *)&DAT_0040299c,(int *)&DAT_00406af0,0);
    if (local_30 != (int *)0x0) break;
    uVar3 = uVar3 + 1;
  }
  if (local_30 == (int *)0x0) {
    iVar1 = TEAAppWindows::GetProfile(self[0xe]);
    teaPropertiesViewWindows = (int *)operator_new();
    if (teaPropertiesViewWindows != (int *)0x0) {
      ehContext = 0x14;
      TEAPropertiesViewWindows::TEAPropertiesViewWindows(teaPropertiesViewWindows,0,self,self[0xe],iVar1);
      ehContext = 8;
    }
    local_30 = teaPropertiesViewWindows;
    (**(code **)(teaPropertiesViewWindows[3] + 0xc))();
    if (local_30 == (int *)0x0) {
      value = 0;
    }
    else {
      value = *local_30;
    }
    pos = (int *)self[0x322];
    if (pos == (int *)self[0x326]) {
      std::vector_ptr::insert_aux_452ef8((int)(self + 800),pos,&value);
    }
    else {
      *pos = value;
      self[0x322] = self[0x322] + 4;
    }
  }
  (**(code **)(local_30[3] + 0x3c))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452ef8  std::vector_ptr::insert_aux_452ef8   (437 bytes, 2 ranges)   [analysis]
//   std::vector<T *> insert at a position, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_ptr::insert_aux_452ef8(int vec,undefined4 *pos,undefined4 *value)

{
  int newCapacity;
  undefined4 *storage;
  int index;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4f843c);
  storage = *(undefined4 **)(vec + 8);
  if (storage == *(undefined4 **)(vec + 0x18)) {
    newCapacity = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (newCapacity < 0) {
      newCapacity = newCapacity + 3;
    }
    if (newCapacity >> 2 == 0) {
      newCapacity = 0x100;
    }
    else {
      newCapacity = (newCapacity >> 2) * 2;
    }
    storage = (undefined4 *)operator_new();
    if (storage == (undefined4 *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::copy_ptr_4530f4(*(undefined4 **)(vec + 4),pos,storage);
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    storage[index >> 2] = *value;
    index = (int)pos - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::copy_ptr_4530f4(pos,*(undefined4 **)(vec + 8),storage + (index >> 2) + 1);
    index = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (index < 0) {
      index = index + 3;
    }
    std::_Destroy_range_ptr_451754(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = storage + newCapacity;
    *(undefined4 **)(vec + 8) = storage + (index >> 2) + 1;
    *(undefined4 **)(vec + 4) = storage;
  }
  else {
    *storage = storage[-1];
    std::copy_backward_ptr_4530d0(pos,*(undefined4 **)(vec + 8) + -1,*(undefined4 **)(vec + 8));
    *pos = *value;
    *(int *)(vec + 8) = *(int *)(vec + 8) + 4;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004530d0  std::copy_backward_ptr_4530d0   (36 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063a8 (36 bytes; the code occurs several times, e.g. one template instance per type). copy_backward over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_ptr_4530d0(undefined4 *first,undefined4 *last,undefined4 *destEnd)

{
  while (last != first) {
    last = last + -1;
    destEnd = destEnd + -1;
    *destEnd = *last;
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004530f4  std::copy_ptr_4530f4   (89 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004063cc (89 bytes; the code occurs several times, e.g. one template instance per type). copy over a range of pointers
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_ptr_4530f4(undefined4 *first,undefined4 *last,undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f847c);
  for (; last != first; first = first + 1) {
    *dest = *first;
    dest = dest + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453174  std::_Destroy_range_ptr_453174   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040644c (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr_453174(int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045318c  TEAViewWindows::CmPrintPreview   (782 bytes)   [analysis]
//   print preview of the results ("TEAPrintPreview" frame)
undefined4 __cdecl TEAViewWindows::CmPrintPreview(int *self)

{
  int client;
  int index;
  int dictionaryList;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *sehChainHead;
  undefined4 *flags;
  int *rect;
  undefined4 local_160;
  undefined *unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined1 *unused4;
  uint *unused5;
  undefined4 local_148;
  undefined2 ehContext;
  int ehDtorCount;
  int *layoutWindow;
  int *printPreviewWindowTEA;
  undefined4 module;
  uint *caption;
  undefined1 result [8];
  uint *local_1c;
  undefined4 teaPrintoutFeeder [4];
  
  __InitExceptBlockLDTC(0x4f8508);
  client = TEAAppWindows::GetPrinter(self[0xe]);
  if (client == 0) {
    *sehChainHead = local_148;
    return local_148;
  }
  puVar5 = *(uint **)(client + 8);
  ehContext = 8;
  TEAPrintoutFeeder::TEAPrintoutFeeder(teaPrintoutFeeder,*(undefined4 *)(*(int *)(self[0x1b4] * 4 + self[0x1ad]) + 8));
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  index = TEAPrintoutFeeder::vf2((int)teaPrintoutFeeder);
  if (index < 2) {
    local_160 = 0x2670;
    *puVar5 = *puVar5 & 0xfffffffe;
  }
  else {
    local_160 = 0x267a;
    *puVar5 = *puVar5 | 1;
  }
  unused = &DAT_004f75c4;
  unused2 = 0;
  unused3 = 0;
  if (self[0x18] != 0) {
    self[0x32d] = 4;
    TEAAppWindows::Nothing_464ba4();
  }
  ehContext = 0x20;
  index = self[0x1b4];
  dictionaryList = TEAAppWindows::GetDictionaryList(self[0xe]);
  TSDictionaryList::GetFileTitle(result,dictionaryList,index);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  index = TEAAppWindows::GetProfile(self[0xe]);
  ehContext = 0x2c;
  TEAPrintout::TEAPrintout(&module,local_1c,puVar5,teaPrintoutFeeder,(undefined4 *)(index + 0xf0),self[0x32d],
               self + 0x32e);
  ehDtorCount = ehDtorCount + 5;
  ehContext = 0x14;
  printPreviewWindowTEA = (int *)operator_new();
  if (printPreviewWindowTEA != (int *)0x0) {
    ehContext = 0x44;
    layoutWindow = (int *)operator_new();
    if (layoutWindow != (int *)0x0) {
      ehContext = 0x50;
      OWL::TLayoutWindow::TLayoutWindow(layoutWindow,0,0,(uint *)0x0,0);
      ehContext = 0x44;
    }
    flags = &local_160;
    rect = layoutWindow;
    index = TEAPrintoutFeeder::vf2((int)teaPrintoutFeeder);
    PrintPreviewWindowTEA::PrintPreviewWindowTEA(printPreviewWindowTEA,0,(uint *)"TEAPrintPreview",*self,self[0xe],client,
                 (int)&module,0 < index,caption,flags,rect);
  }
  ehContext = 0x14;
  (**(code **)(*(int *)(printPreviewWindowTEA[1] + 8) + 0x1c))();
  ehDtorCount = ehDtorCount + -5;
  TEAPrintout::_dtor(&module,2);
  ehDtorCount = ehDtorCount + -1;
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &g_nullStringRep) {
        client = 1;
      }
      else if (puVar5 == &g_nullStringRep) {
        client = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        client = *puVar5 + 1;
      }
      if (client != 0) goto LAB_00453471;
    }
    unused5 = local_1c + -3;
    operator_delete();
    unused4 = result;
    local_1c = (uint *)0x0;
  }
LAB_00453471:
  ehDtorCount = ehDtorCount + -2;
  uVar4 = TEAPrintoutFeeder::_dtor(teaPrintoutFeeder,2);
  *sehChainHead = local_148;
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004534b8  TEAViewWindows::CmPrint   (521 bytes)   [analysis]
//   prints the results with the margins from the settings
undefined4 __cdecl TEAViewWindows::CmPrint(int self)

{
  int *printer;
  int index;
  int dictionaryList;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *sehChainHead;
  undefined4 local_140;
  undefined4 teaPrintout [62];
  undefined1 result [8];
  uint *local_1c;
  undefined4 teaPrintoutFeeder [4];
  
  __InitExceptBlockLDTC(0x4f85c8);
  printer = (int *)TEAAppWindows::GetPrinter(*(int *)(self + 0x38));
  if (printer == (int *)0x0) {
    *sehChainHead = local_140;
    return local_140;
  }
  puVar5 = (uint *)printer[2];
  TEAPrintoutFeeder::TEAPrintoutFeeder(teaPrintoutFeeder,*(undefined4 *)
                         (*(int *)(*(int *)(self + 0x6d0) * 4 + *(int *)(self + 0x6b4)) + 8));
  index = TEAPrintoutFeeder::vf2((int)teaPrintoutFeeder);
  if (index < 2) {
    *puVar5 = *puVar5 & 0xfffffffe;
  }
  else {
    *puVar5 = *puVar5 | 1;
  }
  if (*(int *)(self + 0x60) != 0) {
    *(undefined4 *)(self + 0xcb4) = 4;
    TEAAppWindows::Nothing_464ba4();
  }
  index = *(int *)(self + 0x6d0);
  dictionaryList = TEAAppWindows::GetDictionaryList(*(int *)(self + 0x38));
  TSDictionaryList::GetFileTitle(result,dictionaryList,index);
  index = TEAAppWindows::GetProfile(*(int *)(self + 0x38));
  TEAPrintout::TEAPrintout(teaPrintout,local_1c,puVar5,teaPrintoutFeeder,(undefined4 *)(index + 0xf0),
               *(undefined4 *)(self + 0xcb4),(undefined4 *)(self + 0xcb8));
  (**(code **)(*printer + 0xc))();
  TEAPrintout::_dtor(teaPrintout,2);
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &g_nullStringRep) {
        index = 1;
      }
      else if (puVar5 == &g_nullStringRep) {
        index = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        index = *puVar5 + 1;
      }
      if (index != 0) goto LAB_00453698;
    }
    operator_delete();
    local_1c = (uint *)0x0;
  }
LAB_00453698:
  uVar4 = TEAPrintoutFeeder::_dtor(teaPrintoutFeeder,2);
  *sehChainHead = local_140;
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004536c4  TEAViewWindows::CmPageSetup   (95 bytes)   [analysis]
//   page setup (margins)
void __cdecl TEAViewWindows::CmPageSetup(int self)

{
  int iVar1;
  int *printer;
  int i;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  printer = (int *)TEAAppWindows::GetPrinter(*(int *)(self + 0x38));
  if (printer != (int *)0x0) {
    iVar1 = printer[2];
    puVar4 = (undefined4 *)(self + 0xcb8);
    puVar5 = (undefined4 *)(iVar1 + 0x38);
    for (i = 4; i != 0; i = i + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | *(uint *)(self + 0xcb4) | 2;
    (**(code **)(*printer + 8))();
    puVar4 = (undefined4 *)(iVar1 + 0x38);
    puVar5 = (undefined4 *)(self + 0xcb8);
    for (i = 4; i != 0; i = i + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453724  TEAViewWindows::CmSaveResults   (2678 bytes)   [analysis]
//   File Save dialog, then writes the selected (or all) results to a .txt file
/* WARNING: Removing unreachable block (ram,0x00453792) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::CmSaveResults(int *self)

{
  uint *puVar1;
  char *pcVar2;
  int *piVar3;
  int index;
  HCURSOR hCursor;
  int dictionaryList;
  int iVar6;
  undefined4 *sehChainHead;
  undefined1 *puVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  int last;
  int first;
  int local_a8c;
  uint *entryText;
  int lineCount;
  HCURSOR hCursor2;
  int local_a7c;
  int outputGroup;
  undefined1 *unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  undefined1 *unused5;
  undefined4 unused6;
  int unused7;
  int unused8;
  undefined1 *unused9;
  undefined4 unused10;
  int unused11;
  int unused12;
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  undefined1 *unused17;
  undefined4 unused18;
  int unused19;
  int unused20;
  undefined1 *unused21;
  undefined4 unused22;
  int unused23;
  int unused24;
  int unused25;
  undefined1 *unused26;
  undefined4 unused27;
  int unused28;
  int unused29;
  uint pos;
  undefined1 *unused30;
  undefined *unused31;
  undefined4 unused32;
  int local_9f0;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int tsDictionarySaveTEADialog [3];
  int local_9bc;
  int basicOfstream [33];
  undefined1 local_154 [8];
  int str;
  undefined1 result [8];
  int str2;
  int local_134;
  int local_130;
  undefined4 streamableBase [2];
  undefined4 window [34];
  undefined1 result2 [8];
  int str3;
  undefined1 lhs [8];
  LPCSTR fileName;
  
  __InitExceptBlockLDTC(0x4f86c8);
  unused32 = 0;
  unused30 = lhs;
  unused31 = &g_emptyStringData;
  fileName = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
LAB_004537a1:
  do {
    ehContext = 0x20;
    puVar1 = thunk_strrchr((uint *)self[0x20],'\\');
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)self[0x20];
    }
    pcVar2 = thunk_strchr((char *)puVar1,'.');
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    ehContext = 0x38;
    GetMyDocumentsDirectory((int)result2);
    ehDtorCount = ehDtorCount + 1;
    if (*(char *)self[0x20] == '\0') {
      self[0x24] = str3;
    }
    ehContext = 0x44;
    piVar3 = OWL::TFileSaveDialog::TFileSaveDialog(&local_134,0,*self,(int)(self + 0x1e),0,0x4f76ff,0);
    ehDtorCount = ehDtorCount + 6;
    local_9f0 = (**(code **)(piVar3[3] + 0x14))();
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + -0x5c;
    *(int *)(local_134 + -4) = *(int *)(local_134 + -4) + -0x5c;
    ehDtorCount = ehDtorCount + -6;
    OWL::TCommonDialog::_dtor(&local_134,0);
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + 0x5c;
    *(int *)(local_134 + -4) = *(int *)(local_134 + -4) + 0x5c;
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + 0x96;
    ehDtorCount = ehDtorCount + -2;
    OWL::TWindow::_dtor(window,0);
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + -0x96;
    ehDtorCount = ehDtorCount + -1;
    OWL::TStreamableBase::_dtor(streamableBase,0);
    self[0x24] = 0;
    if (local_9f0 != 1) {
      ehDtorCount = ehDtorCount + -1;
      if (str3 == 0) goto LAB_00453e67;
      if (*(int *)(str3 + -0xc) != -1) {
        piVar3 = (int *)(str3 + -0xc);
        if (piVar3 == &g_nullStringRep) {
          index = 1;
        }
        else if (piVar3 == &g_nullStringRep) {
          index = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          index = *piVar3 + 1;
        }
        if (index != 0) goto LAB_00453e67;
      }
      unused8 = str3 + -0xc;
      unused7 = str3 + -0xc;
      operator_delete();
      unused6 = 0;
      unused5 = result2;
      str3 = 0;
      goto LAB_00453e67;
    }
    std::string::assign_cstr((int)lhs,(uint *)self[0x20]);
    puVar1 = thunk_strrchr((uint *)self[0x20],'\\');
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)self[0x20];
    }
    pcVar2 = thunk_strchr((char *)puVar1,'.');
    if (pcVar2 == (char *)0x0) {
      puVar1 = (uint *)PTR_DAT_004f33b8;
      if (self[0x23] == 1) {
        puVar1 = (uint *)&DAT_004f770c /* ".txt" */;
      }
      pos = *(uint *)(fileName + -4);
      pcVar2 = strlen(puVar1);
      std::string::replace((int)lhs,pos,0,(uint)puVar1,(uint)pcVar2,0,(uint)pcVar2);
    }
    index = thunk_access(fileName,0);
    if (index != 0) {
      ehDtorCount = ehDtorCount + -1;
      if (str3 != 0) {
        if (*(int *)(str3 + -0xc) != -1) {
          piVar3 = (int *)(str3 + -0xc);
          if (piVar3 == &g_nullStringRep) {
            index = 1;
          }
          else if (piVar3 == &g_nullStringRep) {
            index = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            index = *piVar3 + 1;
          }
          if (index != 0) goto LAB_00453dbe;
        }
        unused16 = str3 + -0xc;
        unused15 = str3 + -0xc;
        operator_delete();
        unused14 = 0;
        unused13 = result2;
        str3 = 0;
      }
LAB_00453dbe:
      ehContext = 0x2c;
      goto LAB_00453e67;
    }
    ehContext = 0x5c;
    TEAAppWindows::LoadResourceString((int)local_154,self[0xe],0x29f4);
    ehDtorCount = ehDtorCount + 1;
    std::operator_plus((int)result,(int)lhs,(int)local_154);
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        piVar3 = (int *)(str + -0xc);
        if (piVar3 == &g_nullStringRep) {
          index = 1;
        }
        else if (piVar3 == &g_nullStringRep) {
          index = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          index = *piVar3 + 1;
        }
        if (index != 0) goto LAB_00453af5;
      }
      unused29 = str + -0xc;
      unused28 = str + -0xc;
      operator_delete();
      unused27 = 0;
      unused26 = local_154;
      str = 0;
    }
LAB_00453af5:
    ehContext = 0x50;
    unused25 = str2;
    index = (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
    if (index == 6) break;
    ehDtorCount = ehDtorCount + -1;
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        piVar3 = (int *)(str2 + -0xc);
        if (piVar3 == &g_nullStringRep) {
          index = 1;
        }
        else if (piVar3 == &g_nullStringRep) {
          index = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          index = *piVar3 + 1;
        }
        if (index != 0) goto LAB_00453d20;
      }
      unused20 = str2 + -0xc;
      unused19 = str2 + -0xc;
      operator_delete();
      unused18 = 0;
      unused17 = result;
      str2 = 0;
    }
LAB_00453d20:
    ehContext = 0x2c;
    ehDtorCount = ehDtorCount + -1;
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        piVar3 = (int *)(str3 + -0xc);
        if (piVar3 == &g_nullStringRep) {
          index = 1;
        }
        else if (piVar3 == &g_nullStringRep) {
          index = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          index = *piVar3 + 1;
        }
        if (index != 0) goto LAB_004537a1;
      }
      unused4 = str3 + -0xc;
      unused3 = str3 + -0xc;
      operator_delete();
      unused2 = 0;
      unused = result2;
      str3 = 0;
    }
  } while( true );
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      piVar3 = (int *)(str2 + -0xc);
      if (piVar3 == &g_nullStringRep) {
        index = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        index = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        index = *piVar3 + 1;
      }
      if (index != 0) goto LAB_00453bdc;
    }
    unused24 = str2 + -0xc;
    unused23 = str2 + -0xc;
    operator_delete();
    unused22 = 0;
    unused21 = result;
    str2 = 0;
  }
LAB_00453bdc:
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      piVar3 = (int *)(str3 + -0xc);
      if (piVar3 == &g_nullStringRep) {
        index = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        index = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        index = *piVar3 + 1;
      }
      if (index != 0) goto LAB_00453e67;
    }
    unused12 = str3 + -0xc;
    unused11 = str3 + -0xc;
    operator_delete();
    unused10 = 0;
    unused9 = result2;
    str3 = 0;
  }
LAB_00453e67:
  if (local_9f0 == 1) {
    local_a7c = self[0x1b4];
    outputGroup = *(int *)(local_a7c * 4 + self[0x1ad]);
    ehContext = 0x20;
    if (self[0x23] == 1) {
      hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
      hCursor2 = SetCursor(hCursor);
      ehContext = 0xbc;
      std::basic_ofstream_char::basic_ofstream(basicOfstream,0,fileName,8,0x1b6);
      ehDtorCount = ehDtorCount + 8;
      ehContext = 200;
      lineCount = MatchListWindows::GetLineCount(*(int *)(outputGroup + 8));
      index = 0;
      while ((index < lineCount && (*(int *)(basicOfstream[0] + 0x30) == 0))) {
        entryText = (uint *)MatchListWindows::GetEntryText(*(int *)(outputGroup + 8),index);
        ehContext = 200;
        puVar9 = &LAB_0045422c;
        piVar3 = FUN_004d5374(basicOfstream,entryText);
        FUN_004d4e64(piVar3,puVar9);
        index = index + 1;
      }
      if (*(int *)(basicOfstream[0] + 0x30) == 0) {
        FUN_004d7e64(basicOfstream);
      }
      SetCursor(hCursor2);
      if (*(int *)(basicOfstream[0] + 0x30) != 0) {
        local_a8c = *self;
        (**(code **)(*(int *)(*(int *)(local_a8c + 0x6c) + 0x1b) + 0x30))();
      }
      ehDtorCount = ehDtorCount + -8;
      std::basic_ofstream_char::_dtor(basicOfstream,2);
      ehContext = 0x20;
    }
    else if (self[0x23] == 2) {
      if (self[0x19] == 3) {
        TEAViewWindows::SetSearching((int)self,1);
      }
      first = 0;
      last = 0;
      TEAViewWindows::OutputGroup::GetLengthRange(outputGroup,&first,&last);
      ehContext = 0xd4;
      puVar7 = lhs;
      iVar6 = outputGroup + 0x10;
      index = self[0x1b4];
      iVar8 = first;
      iVar10 = last;
      dictionaryList = TEAAppWindows::GetDictionaryList(self[0xe]);
      TSDictionarySaveTEADialog::TSDictionarySaveTEADialog(tsDictionarySaveTEADialog,0,*self,self[0xe],*(int *)(outputGroup + 8),dictionaryList,index,(int)puVar7
                   ,iVar6,iVar8,iVar10);
      ehDtorCount = ehDtorCount + 0x39;
      ehContext = 0xe0;
      (**(code **)(local_9bc + 0x14))();
      TEAViewWindows::SetSearching((int)self,self[0x19]);
      ehDtorCount = ehDtorCount + -0x39;
      TSDictionarySaveTEADialog::_dtor(tsDictionarySaveTEADialog,2);
      ehContext = 0x20;
    }
  }
  ehDtorCount = ehDtorCount + -1;
  if (fileName != (LPCSTR)0x0) {
    if (*(int *)(fileName + -0xc) != -1) {
      piVar3 = (int *)(fileName + -0xc);
      if (piVar3 == &g_nullStringRep) {
        index = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        index = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        index = *piVar3 + 1;
      }
      if (index != 0) goto LAB_00454185;
    }
    operator_delete();
  }
LAB_00454185:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045424c  TEAViewWindows::CmCopy   (410 bytes)   [analysis]
//   copies the selected results to the clipboard (CR LF after each when several)
/* WARNING: Type propagation algorithm not settling */
void __cdecl TEAViewWindows::CmCopy(int *self)

{
  int list;
  HCURSOR hCursor;
  BOOL ok;
  uint *entryText;
  int index;
  char *pcVar5;
  char *pcVar6;
  undefined4 *sehChainHead;
  int selectionIterator [8];
  HGLOBAL hGlobal;
  HCURSOR hCursor2;
  int entryCount;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  char clipboard;
  
  __InitExceptBlockLDTC(0x4f87e0);
  list = *(int *)(*(int *)(self[0x1ad] + self[0x1b4] * 4) + 8);
  entryCount = MatchListWindows::GetEntryCount(list);
  if (entryCount < 1) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
    hCursor2 = SetCursor(hCursor);
    ShowCursor(1);
    ehContext = 8;
    FUN_0048ba8c(&clipboard,*(HWND *)(*self + 0xc),'\x01');
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x14;
    ok = EmptyClipboard();
    if (ok != 0) {
      pcVar6 = (char *)0x0;
      MatchListWindows::SelectionIterator::SelectionIterator(selectionIterator,list);
      while( true ) {
        index = MatchListWindows::SelectionIterator::Next(selectionIterator);
        if (index < 0) break;
        entryText = (uint *)MatchListWindows::GetEntryText(list,index);
        pcVar5 = strlen(entryText);
        pcVar6 = pcVar6 + (int)pcVar5;
      }
      if (1 < entryCount) {
        pcVar6 = pcVar6 + entryCount * 2;
      }
      hGlobal = GlobalAlloc(0x42,(SIZE_T)(pcVar6 + 1));
      if (hGlobal != (HGLOBAL)0x0) {
        pcVar6 = GlobalLock(hGlobal);
        ehContext = 0x14;
        MatchListWindows::SelectionIterator::Seek(selectionIterator,0);
        while( true ) {
          index = MatchListWindows::SelectionIterator::Next(selectionIterator);
          if (index < 0) break;
          pcVar5 = (char *)MatchListWindows::GetEntryText(list,index);
          ehContext = 0x14;
          for (; *pcVar5 != '\0'; pcVar5 = pcVar5 + 1) {
            *pcVar6 = *pcVar5;
            pcVar6 = pcVar6 + 1;
          }
          if (1 < entryCount) {
            *pcVar6 = '\r';
            pcVar6[1] = '\n';
            pcVar6 = pcVar6 + 2;
          }
        }
        GlobalUnlock(hGlobal);
        SetClipboardData(1,hGlobal);
      }
    }
    FUN_0048bc08(&clipboard);
    ShowCursor(0);
    SetCursor(hCursor2);
    ehDtorCount = ehDtorCount + -1;
    OWL::TClipboard::_dtor(&clipboard,2);
    *sehChainHead = sehPrevFrame;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454434  TEAViewWindows::CmSelectAll   (35 bytes)   [analysis]
//   selects every entry of the current list
void __cdecl TEAViewWindows::CmSelectAll(int self)

{
  MatchListWindows::SelectAll(*(int **)(*(int *)(*(int *)(self + 0x6d0) * 4 + *(int *)(self + 0x6b4)) + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454458  TEAViewWindows::GetPopupOwner   (31 bytes)   [analysis]
//   window that owns popup menus: the frame when docked (+0x60 == 0), else this window
undefined4 __cdecl TEAViewWindows::GetPopupOwner(int *self)

{
  undefined4 hWnd;
  
  if (self[0x18] == 0) {
    hWnd = *(undefined4 *)(*(int *)(*self + 0x14) + 0xc);
  }
  else {
    hWnd = *(undefined4 *)(*self + 0xc);
  }
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454478  TEAViewWindows::CeShared_454478   (171 bytes)   [owl:response-table message-handler]
//   one handler for 13 table entries: &File > &Open...	Ctrl+O; &File > Save Results from * &As...	Ctrl+S; id 7630; id 12470; &Edit > &Lookup...	Ctrl+Enter; &Edit > Lookup in &New Window...	Shift+Ctrl+Enter; &Edit > &Copy	Ctrl+C; &Edit > &Select All	Ctrl+A; &File > &Print Results from *...	Ctrl+P; &File > Print Pre&view Results from *...; &File > P&roperties from *; &Word Search	Ctrl+W; …
//   also: TEAViewWindows::CeShared_454478 [owl:response-table]; TEAViewWindows::CeShared_454478 [owl:response-table]; TEAViewWindows::CeShared_454478 [owl:response-table]; TEAViewWindows::CeShared_454478 [owl:response-table]
void __cdecl TEAViewWindows::CeShared_454478(int self,int *commandEnabler)

{
  int iVar1;
  
  TEAViewWindows::IsCommandEnabled(self,commandEnabler[1]);
  (**(code **)*commandEnabler)();
  iVar1 = commandEnabler[1];
  if (iVar1 < 0x31d9) {
    if (iVar1 != 0x31d8) {
      if ((iVar1 != 0x2e54) && (iVar1 != 0x2e5e)) {
        return;
      }
      (**(code **)(*commandEnabler + 8))();
      return;
    }
  }
  else if (iVar1 != 0x31e2) {
    if (iVar1 != 0x3a16) {
      return;
    }
    (**(code **)(*commandEnabler + 8))();
    return;
  }
  (**(code **)(*commandEnabler + 8))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454524  TEAViewWindows::IsCommandEnabled   (932 bytes, 2 ranges)   [analysis]
//   whether a menu/toolbar command applies now (depends on which control has the focus and on the lists' contents)
bool __cdecl TEAViewWindows::IsCommandEnabled(int self,int cmdId)

{
  HWND hWnd;
  BOOL ok;
  int iVar3;
  uint local_c;
  uint local_8;
  
  if (0x1db0 < cmdId) {
    if (cmdId < 0x2e5f) {
      if (cmdId != 0x2e5e) {
        if (cmdId == 0x1dba) {
          hWnd = GetFocus();
          ok = IsChild(*(HWND *)(*(int *)(self + 0x158) + 0xc),hWnd);
          return ok != 0;
        }
        if (cmdId == 0x1dc4) {
LAB_00454750:
          hWnd = GetFocus();
          ok = IsChild(*(HWND *)(*(int *)(self + 0x158) + 0xc),hWnd);
          if (ok == 0) {
            return false;
          }
          iVar3 = FUN_004acea4((int *)(self + 0x158),&local_8,&local_c);
          if (iVar3 == -1) {
            return false;
          }
          return (int)local_8 < (int)local_c;
        }
        if (cmdId == 0x1dce) {
          return false;
        }
        if (cmdId != 0x2e54) goto LAB_00454881;
      }
      if (*(int *)(self + 100) != 2) {
        iVar3 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if (1 < (uint)(iVar3 >> 2)) {
          return true;
        }
      }
      return false;
    }
    if (cmdId == 0x30b6) {
      return false;
    }
    if ((cmdId == 0x31d8) || (cmdId == 0x31e2)) {
      return *(int *)(self + 100) != 2;
    }
    if (cmdId == 0x3a16) {
      return true;
    }
LAB_00454881:
    hWnd = GetFocus();
    ok = IsChild(*(HWND *)(*(int *)(self + 0x158) + 0xc),hWnd);
    if (ok == 0) {
      iVar3 = TEAViewWindows::GetFocusedListEntryCount(self);
      return iVar3 == 1;
    }
    return *(int *)(*(int *)(self + 0x6a0) + -4) != 0;
  }
  if (cmdId == 0x1db0) {
    if (*(int *)(self + 100) != 2) {
      iVar3 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      if (*(int *)(self + 0x6d0) < (iVar3 >> 2) + -1) {
        return true;
      }
    }
    return false;
  }
  if (cmdId < 0x1d75) {
    if (cmdId != 0x1d74) {
      if (cmdId < 0x1d57) {
        if (cmdId == 0x1d56) {
LAB_004547fb:
          iVar3 = TEAViewWindows::GetCurrentListLineCount(self);
          if ((0 < iVar3) &&
             ((iVar3 = TEAAppWindows::GetPrinter(*(int *)(self + 0x38)), iVar3 != 0 || (cmdId == 0x1d56))))
          {
            return true;
          }
          return false;
        }
        if (cmdId == 0x1d38) {
          if ((*(int *)(self + 100) != 2) && (iVar3 = TEAViewWindows::GetCurrentListLineCount(self), 0 < iVar3)) {
            return true;
          }
          return false;
        }
        if (cmdId == 0x1d4c) {
          hWnd = GetFocus();
          ok = IsChild(*(HWND *)(*(int *)(self + 0x158) + 0xc),hWnd);
          if (ok == 0) {
            iVar3 = TEAViewWindows::GetFocusedListEntryCount(self);
            return 0 < iVar3;
          }
          goto LAB_00454750;
        }
      }
      else if ((cmdId == 0x1d60) || (cmdId == 0x1d6a)) goto LAB_004547fb;
      goto LAB_00454881;
    }
  }
  else {
    if (cmdId == 0x1d7e) {
      if (*(int *)(self + 100) != 2) {
        iVar3 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if ((uint)(iVar3 >> 2) < 10) {
          return true;
        }
      }
      return false;
    }
    if (cmdId == 0x1d88) {
      return *(int *)(self + 100) != 2;
    }
    if (cmdId != 0x1d9c) {
      if (cmdId == 0x1da6) {
        if ((*(int *)(self + 100) != 2) && (0 < *(int *)(self + 0x6d0))) {
          return true;
        }
        return false;
      }
      goto LAB_00454881;
    }
  }
  if (*(int *)(self + 100) != 2) {
    iVar3 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 != 0) {
      return true;
    }
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x004548d0  TEAViewWindows::CmShared_4548d0   (592 bytes)   [owl:response-table message-handler]
//   one handler for 13 table entries: &File > P&roperties from *; &File > &Open...	Ctrl+O; &File > Save Results from * &As...	Ctrl+S; id 7630; id 12470; &Edit > &Lookup...	Ctrl+Enter; &Edit > Lookup in &New Window...	Shift+Ctrl+Enter; &Edit > &Copy	Ctrl+C; &Edit > &Select All	Ctrl+A; &File > &Print Results from *...	Ctrl+P; &File > Print Pre&view Results from *...; &Word Search	Ctrl+W; …
//   also: TEAViewWindows::CmShared_4548d0 [owl:response-table]; TEAViewWindows::CmShared_4548d0 [owl:response-table]; TEAViewWindows::CmShared_4548d0 [owl:response-table]; TEAViewWindows::CmShared_4548d0 [owl:response-table]
void __cdecl TEAViewWindows::CmShared_4548d0(int *self,int param_2)

{
  bool isCommandEnabled;
  HWND hWnd;
  BOOL ok;
  
  isCommandEnabled = TEAViewWindows::IsCommandEnabled((int)self,param_2);
  if (!isCommandEnabled) {
    return;
  }
  if (param_2 < 0x1dbb) {
    if (param_2 == 0x1dba) {
      FUN_004a76a8(self[0x56],0x302,0,0);
      return;
    }
    if (param_2 < 0x1d61) {
      if (param_2 == 0x1d60) {
        TEAViewWindows::CmPrint((int)self);
        return;
      }
      if (param_2 == 0x1d38) {
        TEAViewWindows::CmSaveResults(self);
        return;
      }
      if (param_2 == 0x1d4c) {
        hWnd = GetFocus();
        ok = IsChild(*(HWND *)(self[0x56] + 0xc),hWnd);
        if (ok == 0) {
          TEAViewWindows::CmCopy(self);
          return;
        }
        FUN_004a76a8(self[0x56],0x301,0,0);
        return;
      }
      if (param_2 == 0x1d56) {
        hWnd = GetFocus();
        ok = IsChild(*(HWND *)(self[0x56] + 0xc),hWnd);
        if (ok == 0) {
          TEAViewWindows::CmSelectAll((int)self);
          return;
        }
        FUN_004a76a8(self[0x56],0x142,0,-0x10000);
        return;
      }
    }
    else {
      if (param_2 == 0x1d6a) {
        TEAViewWindows::CmPrintPreview(self);
        return;
      }
      if (param_2 == 0x1d74) {
        TEAViewWindows::ShowDictionaryProperties((int)self);
        return;
      }
      if (param_2 == 0x1d7e) {
        TEAViewWindows::CmOpenDictionary(self);
        return;
      }
    }
  }
  else if (param_2 < 0x2e5f) {
    if (param_2 == 0x2e5e) {
      self[0x29] = 1;
      TEAViewWindows::CreatePanes(self,5);
      return;
    }
    if (param_2 == 0x1dc4) {
      FUN_004a76a8(self[0x56],0x300,0,0);
      return;
    }
    if (param_2 == 0x1dce) {
LAB_00454a3d:
      TEAViewWindows::Nothing();
      return;
    }
    if (param_2 == 0x2e54) {
      self[0x29] = 0;
      TEAViewWindows::CreatePanes(self,5);
      return;
    }
  }
  else {
    if (param_2 == 0x30b6) goto LAB_00454a3d;
    if ((param_2 == 0x31d8) || (param_2 == 0x31e2)) {
      self[0x1a4] = (uint)(param_2 == 0x31e2);
      TEAViewWindows::RestartSearch(self);
      return;
    }
  }
  TEAViewWindows::ShowDefinitions(self,*self,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454b20  TEAViewWindows::SetupTooltips   (32 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15 (introduced by PropertiesViewWindows); creates the tooltip control for the window's controls (overrides add their own start-up work)
void __cdecl TEAViewWindows::SetupTooltips(int *self)

{
  PropertiesViewWindows::SetupTooltips(self);
  SetFocus(*(HWND *)(self[0x56] + 0xc));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454b40  TEAViewWindows::OnButton   (6143 bytes, 3 ranges)   [rtti:vtable virtual slot 19]
//   vtable slot 19 (introduced by PropertiesViewWindows); a push button, check box or radio button was clicked (PVW*::BNClicked call it with the control id)
/* WARNING: Removing unreachable block (ram,0x00455078) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::OnButton(int *self,undefined4 param_2,int param_3)

{
  bool bVar1;
  int outputGroup;
  uint uVar3;
  char *pcVar4;
  undefined3 regHigh;
  undefined4 annotationWidth;
  BOOL ok;
  int iVar7;
  HWND hWnd;
  int *strRep;
  uint *word_;
  undefined4 *sehChainHead;
  char cVar11;
  uint local_43c [27];
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  undefined4 unused6;
  undefined4 unused7;
  undefined4 unused8;
  undefined4 unused9;
  undefined4 unused10;
  undefined *unused11;
  undefined4 unused12;
  uint *local_2d8;
  int unused13;
  int unused14;
  int *strRep2;
  undefined1 *unused15;
  undefined4 unused16;
  int unused17;
  int unused18;
  int *strRep3;
  int *i;
  int local_2a0;
  undefined1 *unused19;
  undefined4 unused20;
  undefined *unused21;
  undefined *unused22;
  int *strRep4;
  int unused23;
  int unused24;
  undefined1 *unused25;
  undefined4 unused26;
  undefined *unused27;
  undefined *unused28;
  int last;
  int local_264;
  int local_260;
  undefined1 *unused29;
  undefined4 unused30;
  int unused31;
  int unused32;
  int *strRep5;
  int unused33;
  int unused34;
  undefined1 *unused35;
  undefined4 unused36;
  int unused37;
  int unused38;
  int *strRep6;
  undefined1 *unused39;
  undefined4 unused40;
  int unused41;
  int unused42;
  int *strRep7;
  int unused43;
  int unused44;
  int *strRep8;
  undefined1 *unused45;
  undefined4 unused46;
  undefined *unused47;
  undefined *unused48;
  int *strRep9;
  undefined1 *unused49;
  undefined4 unused50;
  int unused51;
  int unused52;
  int *strRep10;
  int unused53;
  int unused54;
  undefined1 *unused55;
  undefined4 unused56;
  int unused57;
  int unused58;
  int *strRep11;
  undefined1 *unused59;
  undefined4 unused60;
  int unused61;
  int unused62;
  int *strRep12;
  int last2;
  int local_1a8;
  int first [3];
  int unused63;
  int unused64;
  undefined1 *unused65;
  undefined4 unused66;
  undefined *unused67;
  undefined *unused68;
  uint local_180;
  char *local_17c;
  int local_178;
  int local_174;
  int local_170;
  byte local_169;
  char *local_168;
  char *local_164;
  char *wordLen;
  int local_15c;
  int local_158;
  uint *annotation;
  undefined1 *unused69;
  undefined *unused70;
  undefined4 unused71;
  int state;
  int *matchListWindows;
  int local_13c;
  int dictList;
  int *unused72;
  uint unused73;
  uint unused74;
  uint unused75;
  uint unused76;
  int *unused77;
  uint local_11c;
  int *unused78;
  int local_114;
  int wordWidth;
  undefined1 *unused79;
  undefined4 unused80;
  byte *unused81;
  byte *unused82;
  byte *strRep13;
  int *str;
  undefined1 *unused83;
  int local_f0;
  int profile;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 text [8];
  int str3;
  undefined1 str2 [8];
  int str4;
  undefined1 vec [4];
  int first2;
  int last3;
  undefined1 vec2 [4];
  int first3;
  int last4;
  undefined1 newStr [8];
  int str5;
  undefined1 newStr2 [8];
  int str6;
  undefined4 group;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined1 pvwCombo [8];
  byte *local_1c;
  undefined1 local_14 [8];
  int str7;
  
  __InitExceptBlockLDTC(0x4f8880);
  outputGroup = self[0xe];
  profile = TEAAppWindows::GetProfile(outputGroup);
  if (param_3 != 0x10b8) {
    if (param_3 == 0x10cc) {
      TEAViewWindows::CmOptions(self);
    }
    else if (param_3 == 0x5fa) {
      (**(code **)(self[3] + 0xb4))();
    }
    else {
      (**(code **)(self[3] + 0x24))(profile,self[3],outputGroup,self,2);
    }
    goto LAB_00456335;
  }
  if (self[0x19] == 2) {
    TEAViewWindows::SetSearching((int)self,3);
    goto LAB_00456335;
  }
  outputGroup = TEAViewWindows::CheckDictionaries(self);
  if (outputGroup == 0) goto LAB_00456335;
  ehContext = 0x14;
  TEAAppWindows::LoadResourceString((int)local_14,self[0xe],0x16a8);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  (*(undefined4 *)&DAT_004f3434) = 0;
  local_f0 = self[0x19];
  TEAViewWindows::SetSearching((int)self,2);
  if (local_f0 == 1) {
    ehContext = 0x20;
    PVWCombo::AddToHistory((int)pvwCombo,(int)(self + 0x56),0);
    unused83 = pvwCombo;
    ehDtorCount = ehDtorCount + 1;
    str = self + 0x1a6;
    uVar3 = std::string::compare((int)str,0,*(uint *)(self[0x1a8] + -4),local_1c,
                         *(uint *)(local_1c + -4));
    cVar11 = uVar3 != 0;
    ehDtorCount = ehDtorCount + -1;
    if (local_1c != (byte *)0x0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        strRep13 = local_1c + -0xc;
        if (strRep13 == (byte *)&g_nullStringRep) {
          outputGroup = 1;
        }
        else if (strRep13 == (byte *)&g_nullStringRep) {
          outputGroup = 1;
        }
        else {
          *(int *)strRep13 = *(int *)strRep13 + -1;
          outputGroup = *(int *)strRep13 + 1;
        }
        if (outputGroup != 0) goto LAB_00454d24;
      }
      unused82 = local_1c + -0xc;
      unused81 = local_1c + -0xc;
      operator_delete();
      unused80 = 0;
      unused79 = pvwCombo;
      local_1c = (byte *)0x0;
      unused12 = 0;
    }
LAB_00454d24:
    if (cVar11 != '\0') {
      (**(code **)(self[0x59] + 100))();
    }
    TEAAppWindows::Nothing_466b10();
    TEAViewWindows::BeginNextLength((int)self);
    wordWidth = 0;
    ehContext = 8;
    if (*(int *)(profile + 0x1b0) != 0) {
      local_114 = 1;
      unused78 = self + 0x1ac;
      outputGroup = self[0x1ae] - self[0x1ad];
      if (outputGroup < 0) {
        outputGroup = outputGroup + 3;
      }
      if (outputGroup >> 2 != 0) {
        local_114 = MatchEngineSet::GetLengthKindSum(*(int *)self[0x1ad] + 0x28);
      }
      if (*(int *)(profile + 0x1b8) == 0) {
        wordWidth = 1;
      }
      else if ((*(int *)(profile + 0x1bc) == 1) ||
              ((*(int *)(profile + 0x1bc) == 0 && (local_114 == 1)))) {
        wordWidth = 3;
      }
      else {
        wordWidth = 5;
      }
      if (*(int *)(profile + 0x1b4) == 0) {
        wordWidth = wordWidth + 1;
      }
    }
    local_11c = 0;
    while( true ) {
      unused77 = self + 0x1ac;
      outputGroup = self[0x1ae] - self[0x1ad];
      if (outputGroup < 0) {
        outputGroup = outputGroup + 3;
      }
      if ((uint)(outputGroup >> 2) <= local_11c) break;
      if ((*(int *)(profile + 0x24) != 2) || (local_11c == self[0x1b4])) {
        unused76 = local_11c;
        std::string::operator_assign(*(int *)(local_11c * 4 + self[0x1ad]) + 0x10,(int)(self + 0x1a6));
        unused75 = local_11c;
        MatchListLabelWindows::SetCount(*(int **)(*(int *)(local_11c * 4 + self[0x1ad]) + 4),0);
        unused74 = local_11c;
        MatchListWindows::Clear(*(int **)(*(int *)(local_11c * 4 + self[0x1ad]) + 8));
        if ((*(int *)(profile + 0x24) == 0) && (*(int *)(profile + 0x1b0) == 0)) {
          unused72 = self + 0x1ac;
          outputGroup = self[0x1ae] - self[0x1ad];
          if (outputGroup < 0) {
            outputGroup = outputGroup + 3;
          }
          if ((uint)(outputGroup >> 2) <= local_11c + 1) goto LAB_00454f32;
          annotationWidth = 1;
        }
        else {
LAB_00454f32:
          annotationWidth = 0;
        }
        unused73 = local_11c;
        MatchListWindows::SetColumnWidths(*(int *)(*(int *)(local_11c * 4 + self[0x1ad]) + 8),wordWidth,annotationWidth);
      }
      local_11c = local_11c + 1;
    }
  }
  SetFocus(*(HWND *)(self[0x84] + 0xc));
  (**(code **)(self[3] + 0xa4))();
  TEAAppWindows::Nothing_466e78();
  FUN_00498d7c((int *)(*(int *)(*self + 0x6c) + 0x11));
LAB_00456077:
  if (self[0x1a] != -1) {
    dictList = TEAAppWindows::GetDictionaryList(self[0xe]);
    local_13c = self[0x1a];
    outputGroup = *(int *)(local_13c * 4 + self[0x1ad]);
    matchListWindows = *(int **)(outputGroup + 8);
    state = 0;
    unused71 = 0;
    unused69 = local_34;
    unused70 = &g_emptyStringData;
    local_2c = &g_emptyStringData;
    unused11 = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x50;
    annotation = (uint *)0x0;
    if (self[0x1b] != 0) {
      local_158 = 0;
      uVar3 = 0;
      do {
        if (*(int *)(profile + 0x1cc + uVar3 * 4) == 0) {
          local_158 = 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
      TEAProgressBar::StartDictionary(self + 0x1b5,dictList,self[0x1a],*(int *)(outputGroup + 0xc),
                   *(int *)(self[0x1b] + 0x1c));
LAB_004550ee:
      TEAProgressBar::SetPosition(self + 0x1b5,*(int *)(self[0x1b] + 0x1c));
      local_15c = 400;
      ehContext = 0x50;
      do {
        while( true ) {
          pcVar4 = InputEngine::NextMatch(self[0x1b],outputGroup + 0x28);
          if (pcVar4 == (char *)0x0) goto LAB_00455425;
          if (*pcVar4 == -1) {
            TEAViewWindows::OutputGroup::NextLength(outputGroup);
            goto LAB_00455177;
          }
          word_ = (uint *)(self[0x1b] + 0x408);
          wordLen = strlen(word_);
          if (local_158 != 0) break;
LAB_00455342:
          if (*(int *)(profile + 0x24) != 0) {
LAB_004553b5:
            if (*(int *)(profile + 0x1c0) != 0) {
              annotation = (uint *)InputEngine::GetAnnotation(self[0x1b]);
            }
            if (*(int *)(profile + 0x1c4) != 0) {
              MatchEngineSet::GetBalanceText(outputGroup + 0x28,(int)local_14,(int)local_34);
            }
            MatchListWindows::UpdateScrollState(matchListWindows,'\0');
            MatchListWindows::AddEntry(matchListWindows,word_,annotation,(int)local_34,0);
            goto LAB_00455425;
          }
          local_180 = 0;
          ehContext = 0x50;
          while( true ) {
            if ((uint)self[0x1a] <= local_180) goto LAB_004553b5;
            bVar1 = MatchListWindows::Contains(*(int *)(*(int *)(local_180 * 4 + self[0x1ad]) + 8),word_,
                                 wordLen);
            if (bVar1) break;
            local_180 = local_180 + 1;
          }
          iVar7 = local_15c + -1;
          bVar1 = local_15c < 1;
          local_15c = iVar7;
          if (bVar1) goto LAB_00455425;
        }
        pcVar4 = (char *)0x0;
        local_164 = wordLen;
        if (*(char **)(outputGroup + 0xc) != wordLen) {
          pcVar4 = (char *)0xffffffff;
          local_168 = (char *)0x0;
          for (local_2d8 = word_; (byte)*local_2d8 != 0; local_2d8 = (uint *)((int)local_2d8 + 1))
          {
            local_169 = (byte)*local_2d8;
            local_170 = self[0x1a];
            local_174 = *(int *)(*(int *)(*(int *)(dictList + 0xc) + local_170 * 4) + 8 +
                                (uint)local_169 * 8);
            if ((local_174 != 0xff) && (local_164 = local_168 + 1, pcVar4 == (char *)0xffffffff)) {
              pcVar4 = local_168;
            }
            local_168 = local_168 + 1;
          }
        }
        local_178 = 0;
        ehContext = 0x50;
        if (pcVar4 + *(int *)(outputGroup + 0xc) == local_164) {
          local_17c = pcVar4;
          if (pcVar4 < local_164) {
            do {
              ok = IsCharUpperA(*(CHAR *)((int)word_ + (int)local_17c));
              if (ok != 0) {
                local_178 = 1;
              }
              local_17c = local_17c + 1;
            } while (local_17c < local_164);
          }
        }
        else {
          pcVar4 = thunk_strchr((char *)word_,' ');
          if (pcVar4 == (char *)0x0) {
            local_178 = 2;
          }
          else {
            local_178 = 3;
          }
        }
        if (*(int *)(profile + 0x1cc + local_178 * 4) != 0) goto LAB_00455342;
        iVar7 = local_15c + -1;
        bVar1 = 0 < local_15c;
        local_15c = iVar7;
      } while (bVar1);
      goto LAB_00455425;
    }
    if (self[0x1c] == 0) {
      TSDictionaryDefinitionSearchSequential::GetRange((int *)self[0x1d],&local_260,&local_264);
      TEAProgressBar::SetRange(self + 0x1b5,local_264,local_260);
      do {
        word_ = (uint *)TSDictionaryDefinitionSearchSequential::Next((int *)self[0x1d],200);
        ehContext = 0x50;
        TSDictionaryDefinitionSearchSequential::GetRange((int *)self[0x1d],&local_260,&last);
        TEAProgressBar::SetPosition(self + 0x1b5,local_260);
        if (word_ != (uint *)0x0) {
          if ((char)*word_ == '\0') goto LAB_00455fa5;
          MatchListWindows::UpdateScrollState(matchListWindows,'\0');
          std::string::assign_cstr((int)local_34,(uint *)(self[0x1d] + 0x90));
          MatchListWindows::AddEntry(matchListWindows,word_,(uint *)0x0,(int)local_34,
                       *(undefined4 *)(self[0x1d] + 0x110));
        }
        outputGroup = TEAViewWindows::OnSearchStep(self,&state);
        if (outputGroup != 0) {
          ehDtorCount = ehDtorCount + -1;
          if (local_2c != (undefined *)0x0) {
            if (*(int *)(local_2c + -0xc) != -1) {
              strRep = (int *)(local_2c + -0xc);
              if (strRep == &g_nullStringRep) {
                outputGroup = 1;
              }
              else if (strRep == &g_nullStringRep) {
                outputGroup = 1;
              }
              else {
                *strRep = *strRep + -1;
                outputGroup = *strRep + 1;
              }
              if (outputGroup != 0) goto LAB_00455ef9;
            }
            unused28 = local_2c + -0xc;
            unused27 = local_2c + -0xc;
            operator_delete();
            unused26 = 0;
            unused25 = local_34;
            local_2c = (undefined *)0x0;
            unused2 = 0;
          }
LAB_00455ef9:
          ehDtorCount = ehDtorCount + -1;
          if (str7 != 0) {
            if (*(int *)(str7 + -0xc) != -1) {
              strRep = (int *)(str7 + -0xc);
              if (strRep == &g_nullStringRep) {
                outputGroup = 1;
              }
              else if (strRep == &g_nullStringRep) {
                outputGroup = 1;
              }
              else {
                *strRep = *strRep + -1;
                outputGroup = *strRep + 1;
              }
              if (outputGroup != 0) goto LAB_00455f8f;
            }
            unused24 = str7 + -0xc;
            unused23 = str7 + -0xc;
            operator_delete();
          }
LAB_00455f8f:
          *sehChainHead = sehPrevFrame;
          return;
        }
      } while( true );
    }
    TSDictionaryDefinitionSearchIndexed::GetRange(self[0x1c],first,&local_1a8);
    TEAProgressBar::SetRange(self + 0x1b5,local_1a8,first[0]);
    ehContext = 0x74;
    DefinitionRecord::DefinitionRecord((int)str2);
    ehDtorCount = ehDtorCount + 6;
    ehContext = 0x80;
    while (outputGroup = TSDictionaryDefinitionSearchIndexed::Next((int *)self[0x1c],(int)str2), outputGroup != 0) {
      TSDictionaryDefinitionSearchIndexed::GetRange(self[0x1c],first,&last2);
      TEAProgressBar::SetPosition(self + 0x1b5,first[0]);
      MatchListWindows::UpdateScrollState(matchListWindows,'\0');
      MatchListWindows::AddEntry(matchListWindows,*(uint **)(first2 + 8),(uint *)0x0,first3,group);
      outputGroup = TEAViewWindows::OnSearchStep(self,&state);
      if (outputGroup != 0) {
        ehDtorCount = ehDtorCount + -2;
        if (str6 != 0) {
          if (*(int *)(str6 + -0xc) != -1) {
            strRep12 = (int *)(str6 + -0xc);
            if (strRep12 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else if (strRep12 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else {
              *strRep12 = *strRep12 + -1;
              outputGroup = *strRep12 + 1;
            }
            if (outputGroup != 0) goto LAB_00455743;
          }
          unused62 = str6 + -0xc;
          unused61 = str6 + -0xc;
          operator_delete();
          unused60 = 0;
          unused59 = newStr2;
          str6 = 0;
          unused9 = 0;
        }
LAB_00455743:
        ehContext = 0x80;
        ehDtorCount = ehDtorCount + -1;
        if (str5 != 0) {
          if (*(int *)(str5 + -0xc) != -1) {
            strRep11 = (int *)(str5 + -0xc);
            if (strRep11 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else if (strRep11 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else {
              *strRep11 = *strRep11 + -1;
              outputGroup = *strRep11 + 1;
            }
            if (outputGroup != 0) goto LAB_004557fe;
          }
          unused58 = str5 + -0xc;
          unused57 = str5 + -0xc;
          operator_delete();
          unused56 = 0;
          unused55 = newStr;
          str5 = 0;
          unused8 = 0;
        }
LAB_004557fe:
        ehDtorCount = ehDtorCount + -1;
        std::_Destroy_range_string(vec2,first3,last4);
        unused54 = first3;
        operator_delete();
        ehDtorCount = ehDtorCount + -1;
        std::_Destroy_range_string(vec,first2,last3);
        unused53 = first2;
        operator_delete();
        ehDtorCount = ehDtorCount + -1;
        if (str4 != 0) {
          if (*(int *)(str4 + -0xc) != -1) {
            strRep10 = (int *)(str4 + -0xc);
            if (strRep10 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else if (strRep10 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else {
              *strRep10 = *strRep10 + -1;
              outputGroup = *strRep10 + 1;
            }
            if (outputGroup != 0) goto LAB_00455931;
          }
          unused52 = str4 + -0xc;
          unused51 = str4 + -0xc;
          operator_delete();
          unused50 = 0;
          unused49 = str2;
          str4 = 0;
          unused7 = 0;
        }
LAB_00455931:
        ehDtorCount = ehDtorCount + -1;
        if (local_2c != (undefined *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            strRep9 = (int *)(local_2c + -0xc);
            if (strRep9 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else if (strRep9 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else {
              *strRep9 = *strRep9 + -1;
              outputGroup = *strRep9 + 1;
            }
            if (outputGroup != 0) goto LAB_004559e3;
          }
          unused48 = local_2c + -0xc;
          unused47 = local_2c + -0xc;
          operator_delete();
          unused46 = 0;
          unused45 = local_34;
          local_2c = (undefined *)0x0;
          unused6 = 0;
        }
LAB_004559e3:
        ehDtorCount = ehDtorCount + -1;
        if (str7 != 0) {
          if (*(int *)(str7 + -0xc) != -1) {
            strRep8 = (int *)(str7 + -0xc);
            if (strRep8 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else if (strRep8 == &g_nullStringRep) {
              outputGroup = 1;
            }
            else {
              *strRep8 = *strRep8 + -1;
              outputGroup = *strRep8 + 1;
            }
            if (outputGroup != 0) goto LAB_00455a95;
          }
          unused44 = str7 + -0xc;
          unused43 = str7 + -0xc;
          operator_delete();
        }
LAB_00455a95:
        *sehChainHead = sehPrevFrame;
        return;
      }
    }
    ehDtorCount = ehDtorCount + -2;
    if (str6 != 0) {
      if (*(int *)(str6 + -0xc) != -1) {
        strRep7 = (int *)(str6 + -0xc);
        if (strRep7 == &g_nullStringRep) {
          outputGroup = 1;
        }
        else if (strRep7 == &g_nullStringRep) {
          outputGroup = 1;
        }
        else {
          *strRep7 = *strRep7 + -1;
          outputGroup = *strRep7 + 1;
        }
        if (outputGroup != 0) goto LAB_00455b79;
      }
      unused42 = str6 + -0xc;
      unused41 = str6 + -0xc;
      operator_delete();
      unused40 = 0;
      unused39 = newStr2;
      str6 = 0;
      unused5 = 0;
    }
LAB_00455b79:
    ehContext = 0x80;
    ehDtorCount = ehDtorCount + -1;
    if (str5 != 0) {
      if (*(int *)(str5 + -0xc) != -1) {
        strRep6 = (int *)(str5 + -0xc);
        if (strRep6 == &g_nullStringRep) {
          outputGroup = 1;
        }
        else if (strRep6 == &g_nullStringRep) {
          outputGroup = 1;
        }
        else {
          *strRep6 = *strRep6 + -1;
          outputGroup = *strRep6 + 1;
        }
        if (outputGroup != 0) goto LAB_00455c34;
      }
      unused38 = str5 + -0xc;
      unused37 = str5 + -0xc;
      operator_delete();
      unused36 = 0;
      unused35 = newStr;
      str5 = 0;
      unused4 = 0;
    }
LAB_00455c34:
    ehDtorCount = ehDtorCount + -1;
    std::_Destroy_range_string(vec2,first3,last4);
    unused34 = first3;
    operator_delete();
    ehDtorCount = ehDtorCount + -1;
    std::_Destroy_range_string(vec,first2,last3);
    unused33 = first2;
    operator_delete();
    ehDtorCount = ehDtorCount + -1;
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep5 = (int *)(str4 + -0xc);
        if (strRep5 == &g_nullStringRep) {
          outputGroup = 1;
        }
        else if (strRep5 == &g_nullStringRep) {
          outputGroup = 1;
        }
        else {
          *strRep5 = *strRep5 + -1;
          outputGroup = *strRep5 + 1;
        }
        if (outputGroup != 0) goto LAB_00455d67;
      }
      unused32 = str4 + -0xc;
      unused31 = str4 + -0xc;
      operator_delete();
      unused30 = 0;
      unused29 = str2;
      str4 = 0;
      unused3 = 0;
    }
LAB_00455d67:
    ehContext = 0x50;
    goto LAB_00455fa5;
  }
  TEAViewWindows::SetSearching((int)self,1);
  hWnd = GetFocus();
  if (hWnd == *(HWND *)(self[0x84] + 0xc)) {
    SetFocus(*(HWND *)(self[0x56] + 0xc));
  }
  (**(code **)(self[3] + 0xa4))();
  local_2a0 = 0;
  ehContext = 8;
  for (i = (int *)self[0x1ad]; i < (int *)self[0x1ae];
      i = i + 1) {
    outputGroup = MatchListWindows::GetLineCount(*(int *)(*i + 8));
    local_2a0 = local_2a0 + outputGroup;
  }
  sprintf((undefined1 *)local_43c,(byte *)"%d result%s found");
  ehContext = 0x140;
  std::string::string_from_cstr((int)text,local_43c);
  ehDtorCount = ehDtorCount + 1;
  TEAAppWindows::SetStatusText(self[0xe],(int)text);
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep3 = (int *)(str3 + -0xc);
      if (strRep3 == &g_nullStringRep) {
        outputGroup = 1;
      }
      else if (strRep3 == &g_nullStringRep) {
        outputGroup = 1;
      }
      else {
        *strRep3 = *strRep3 + -1;
        outputGroup = *strRep3 + 1;
      }
      if (outputGroup != 0) goto LAB_0045623b;
    }
    unused18 = str3 + -0xc;
    unused17 = str3 + -0xc;
    operator_delete();
    unused16 = 0;
    unused15 = text;
    str3 = 0;
  }
LAB_0045623b:
  ehContext = 8;
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      strRep2 = (int *)(str7 + -0xc);
      if (strRep2 == &g_nullStringRep) {
        outputGroup = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        outputGroup = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        outputGroup = *strRep2 + 1;
      }
      if (outputGroup != 0) goto LAB_00456335;
    }
    unused14 = str7 + -0xc;
    unused13 = str7 + -0xc;
    operator_delete();
  }
LAB_00456335:
  *sehChainHead = sehPrevFrame;
  return;
LAB_00455177:
  annotationWidth = TEAViewWindows::OutputGroup::HasLength(outputGroup);
  if ((char)annotationWidth == '\0') goto LAB_00455182;
  bVar1 = InputEngine::StartLength(self[0x1b],*(int *)(outputGroup + 0xc));
  if (CONCAT31(regHigh,bVar1) != 0) {
    MatchEngineSet::SetWordLength(outputGroup + 0x28,*(int *)(outputGroup + 0xc));
    ehContext = 0x50;
    goto LAB_00455182;
  }
  TEAViewWindows::OutputGroup::NextLength(outputGroup);
  goto LAB_00455177;
LAB_00455588:
  TEAProgressBar::SetPosition(self + 0x1b5,*(int *)(self[0x1b] + 0x1c));
LAB_00455fa5:
  TEAViewWindows::RefreshCurrentList((int)self);
  TEAViewWindows::BeginNextLength((int)self);
  ehDtorCount = ehDtorCount + -1;
  if (local_2c != (undefined *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      strRep4 = (int *)(local_2c + -0xc);
      if (strRep4 == &g_nullStringRep) {
        outputGroup = 1;
      }
      else if (strRep4 == &g_nullStringRep) {
        outputGroup = 1;
      }
      else {
        *strRep4 = *strRep4 + -1;
        outputGroup = *strRep4 + 1;
      }
      if (outputGroup != 0) goto LAB_00456065;
    }
    unused22 = local_2c + -0xc;
    unused21 = local_2c + -0xc;
    operator_delete();
    unused20 = 0;
    unused19 = local_34;
    local_2c = (undefined *)0x0;
    unused = 0;
  }
LAB_00456065:
  ehContext = 8;
  goto LAB_00456077;
LAB_00455182:
  annotationWidth = TEAViewWindows::OutputGroup::HasLength(outputGroup);
  if ((char)annotationWidth == '\0') goto LAB_00455588;
  TEAProgressBar::StartDictionary(self + 0x1b5,dictList,self[0x1a],*(int *)(outputGroup + 0xc),
               *(int *)(self[0x1b] + 0x1c));
LAB_00455425:
  iVar7 = TEAViewWindows::OnSearchStep(self,&state);
  if (iVar7 == 0) goto LAB_004550ee;
  ehDtorCount = ehDtorCount + -1;
  if (local_2c != (undefined *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      strRep = (int *)(local_2c + -0xc);
      if (strRep == &g_nullStringRep) {
        outputGroup = 1;
      }
      else if (strRep == &g_nullStringRep) {
        outputGroup = 1;
      }
      else {
        *strRep = *strRep + -1;
        outputGroup = *strRep + 1;
      }
      if (outputGroup != 0) goto LAB_004554d3;
    }
    unused68 = local_2c + -0xc;
    unused67 = local_2c + -0xc;
    operator_delete();
    unused66 = 0;
    unused65 = local_34;
    local_2c = (undefined *)0x0;
    unused10 = 0;
  }
LAB_004554d3:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      strRep = (int *)(str7 + -0xc);
      if (strRep == &g_nullStringRep) {
        outputGroup = 1;
      }
      else if (strRep == &g_nullStringRep) {
        outputGroup = 1;
      }
      else {
        *strRep = *strRep + -1;
        outputGroup = *strRep + 1;
      }
      if (outputGroup != 0) goto LAB_00455572;
    }
    unused64 = str7 + -0xc;
    unused63 = str7 + -0xc;
    operator_delete();
  }
LAB_00455572:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045634c  TEAViewWindows::ShowControlTip   (240 bytes)   [rtti:vtable virtual slot 43]
//   vtable slot 43 (introduced by PropertiesViewWindows); relays a mouse message to the tooltip, or shows the tip text for a control
void __cdecl TEAViewWindows::ShowControlTip(int self,int *param_2,undefined4 *lParam)

{
  uint id;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  int rect;
  int unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_14 [8];
  int str;
  
  __InitExceptBlockLDTC(0x4f8a04);
  ehContext = 0x14;
  id = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
  TEAAppWindows::LoadResourceString((int)local_14,*(int *)(self + 0x38),id);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  rect = (int)(short)lParam[3];
  unused = (int)(short)((uint)lParam[3] >> 0x10);
  TEAViewWindows::ShowTooltip(self,(int)local_14,*lParam,lParam[2],(undefined2 *)&rect,(int)lParam);
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
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
      if (prevRefs != 0) goto LAB_0045642b;
    }
    operator_delete();
  }
LAB_0045642b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045643c  TEAViewWindows::GetLookupWord   (68 bytes)   [rtti:vtable virtual slot 44]
//   vtable slot 44 (introduced by PropertiesViewWindows); the word to look up from the window (selected entry, word under the caret)
int __cdecl TEAViewWindows::GetLookupWord(int self,int list)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f8a40);
  TEAViewWindows::GetSelectedWord(self,list,0,0,0,(undefined4 *)0x0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456480  TEAViewWindows::BeginNextLength   (675 bytes, 2 ranges)   [analysis]
//   moves the search on to the next word length or dictionary: creates the InputEngine (and definition searches for full text) and sets the word length
void __cdecl TEAViewWindows::BeginNextLength(int self)

{
  bool bVar1;
  int dictList;
  undefined3 regHigh;
  undefined4 uVar3;
  undefined3 regHigh2;
  int outputGroup;
  undefined4 *sehChainHead;
  int last;
  int first;
  uint local_40;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int *local_18;
  int tsDictionaryDefinitionSearchIndexed;
  int *local_10;
  undefined4 *inputEngine;
  int tsDictionaryDefinitionSearchIndexed2;
  
  __InitExceptBlockLDTC(0x4f8aa4);
  dictList = TEAAppWindows::GetProfile(*(int *)(self + 0x38));
  local_40 = (uint)(*(int *)(dictList + 0x24) == 2);
  dictList = TEAAppWindows::GetDictionaryList(*(int *)(self + 0x38));
  do {
    InputEngine::_dtor(*(int *)(self + 0x6c),3);
    *(undefined4 *)(self + 0x6c) = 0;
    tsDictionaryDefinitionSearchIndexed2 = *(int *)(self + 0x70);
    if (tsDictionaryDefinitionSearchIndexed2 != 0) {
      ehContext = 0x14;
      TSDictionaryDefinitionSearchIndexed::_dtor(tsDictionaryDefinitionSearchIndexed2,3);
      ehContext = 8;
    }
    *(undefined4 *)(self + 0x70) = 0;
    TSDictionaryDefinitionSearchSequential::_dtor(*(int *)(self + 0x74),3);
    *(undefined4 *)(self + 0x74) = 0;
    if (*(int *)(self + 0x68) == -1) {
      if (local_40 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(self + 0x6d0);
      }
      *(undefined4 *)(self + 0x68) = uVar3;
    }
    else {
      if (local_40 != 0) {
LAB_0045654b:
        *(undefined4 *)(self + 0x68) = 0xffffffff;
        *sehChainHead = sehPrevFrame;
        return;
      }
      outputGroup = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
      if (outputGroup < 0) {
        outputGroup = outputGroup + 3;
      }
      *(int *)(self + 0x68) = *(int *)(self + 0x68) + 1;
      if ((uint)(outputGroup >> 2) <= *(uint *)(self + 0x68)) goto LAB_0045654b;
    }
    outputGroup = *(int *)(*(int *)(self + 0x68) * 4 + *(int *)(self + 0x6b4));
    if (*(int *)(self + 0x690) == 0) {
      inputEngine = (undefined4 *)operator_new();
      if (inputEngine != (undefined4 *)0x0) {
        ehContext = 0x2c;
        InputEngine::InputEngine(inputEngine,dictList,*(int *)(self + 0x68));
        ehContext = 0x20;
      }
      *(undefined4 **)(self + 0x6c) = inputEngine;
      TEAViewWindows::OutputGroup::StartLengths(outputGroup,self,*(int *)(self + 0x68));
      while (uVar3 = TEAViewWindows::OutputGroup::HasLength(outputGroup), (char)uVar3 != '\0') {
        bVar1 = InputEngine::StartLength(*(int *)(self + 0x6c),*(int *)(outputGroup + 0xc));
        if (CONCAT31(regHigh,bVar1) != 0) {
          MatchEngineSet::SetWordLength(outputGroup + 0x28,*(int *)(outputGroup + 0xc));
          *sehChainHead = sehPrevFrame;
          return;
        }
        TEAViewWindows::OutputGroup::NextLength(outputGroup);
      }
    }
    else {
      bVar1 = TSDictionaryList::HasDefinitions(dictList,*(int *)(self + 0x68));
      if (CONCAT31(regHigh2,bVar1) != 0) {
        local_10 = (int *)operator_new();
        if (local_10 != (int *)0x0) {
          ehContext = 0x44;
          TSDictionaryDefinitionSearchIndexed::TSDictionaryDefinitionSearchIndexed(local_10,dictList,*(int *)(self + 0x68),outputGroup + 0x28,
                       (undefined4 *)(outputGroup + 0x20));
          ehContext = 0x38;
        }
        *(int **)(self + 0x70) = local_10;
        if (*(int *)(*(int *)(self + 0x70) + 4) == 0) {
          tsDictionaryDefinitionSearchIndexed = *(int *)(self + 0x70);
          if (tsDictionaryDefinitionSearchIndexed != 0) {
            ehContext = 0x5c;
            TSDictionaryDefinitionSearchIndexed::_dtor(tsDictionaryDefinitionSearchIndexed,3);
            ehContext = 0x50;
          }
          *(undefined4 *)(self + 0x70) = 0;
          local_18 = (int *)operator_new();
          if (local_18 != (int *)0x0) {
            ehContext = 0x74;
            TSDictionaryDefinitionSearchSequential::TSDictionaryDefinitionSearchSequential(local_18,dictList,*(int *)(self + 0x68),outputGroup + 0x28,
                         (undefined4 *)(outputGroup + 0x20));
            ehContext = 0x68;
          }
          *(int **)(self + 0x74) = local_18;
          TSDictionaryDefinitionSearchSequential::GetRange(*(int **)(self + 0x74),&first,&last);
        }
        else {
          TSDictionaryDefinitionSearchIndexed::GetRange(*(int *)(self + 0x70),&first,&last);
        }
        if (0 < last) {
          *sehChainHead = sehPrevFrame;
          return;
        }
      }
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00456728  TEAViewWindows::OnSearchStep   (225 bytes)   [analysis]
//   after a slice of searching: updates the lists and the progress, stops at the end
undefined4 __cdecl TEAViewWindows::OnSearchStep(int *self,int *state)

{
  DWORD tickCount;
  int lineCount;
  int matchListWindows;
  int *piVar4;
  undefined4 uVar5;
  HWND hWnd;
  
  tickCount = GetTickCount();
  if ((tickCount < DAT_004f75d4) || (DAT_004f75d4 + 100 < tickCount)) {
    matchListWindows = *(int *)(*(int *)(self[0x1a] * 4 + self[0x1ad]) + 8);
    DAT_004f75d4 = tickCount;
    lineCount = MatchListWindows::GetLineCount(matchListWindows);
    if (*state < lineCount) {
      matchListWindows = MatchListWindows::GetLineCount(matchListWindows);
      *state = matchListWindows;
      TEAViewWindows::RefreshCurrentList((int)self);
    }
  }
  piVar4 = (int *)(*(int *)(*self + 0x6c) + 0x11);
  uVar5 = FUN_00498d7c(piVar4);
  if (self[0x19] == 4) {
    (**(code **)(self[3] + 0x20))(uVar5,self[3],piVar4,self,1);
    uVar5 = 1;
  }
  else {
    if (DAT_004f3434 != 0) {
      TEAViewWindows::SetSearching((int)self,3);
      DAT_004f3434 = 0;
    }
    if (self[0x19] == 3) {
      TEAViewWindows::RefreshCurrentList((int)self);
      hWnd = GetFocus();
      if (hWnd == *(HWND *)(self[0x84] + 0xc)) {
        SetFocus(*(HWND *)(self[0x56] + 0xc));
      }
      (**(code **)(self[3] + 0xa4))();
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045680c  TEAViewWindows::OnComboChange   (228 bytes)   [rtti:vtable virtual slot 29]
//   vtable slot 29 (introduced by PropertiesViewWindows); a combo box selection changed
void __cdecl TEAViewWindows::OnComboChange(int *self)

{
  int limit;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 pvwCombo [8];
  int str;
  
  __InitExceptBlockLDTC(0x4f8b34);
  limit = (**(code **)(self[0x59] + 0x6c))();
  if (limit < 0) goto LAB_004568df;
  PVWCombo::AddToHistory((int)pvwCombo,(int)(self + 0x56),limit);
  std::string::operator_assign((int)(self + 0x1a6),(int)pvwCombo);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        limit = 1;
      }
      else if (strRep == &g_nullStringRep) {
        limit = 1;
      }
      else {
        *strRep = *strRep + -1;
        limit = *strRep + 1;
      }
      if (limit != 0) goto LAB_004568d8;
    }
    operator_delete();
    str = 0;
  }
LAB_004568d8:
  TEAViewWindows::RestartSearch(self);
LAB_004568df:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004568f0  TEAViewWindows::Child4270_Notify5   (95 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 4270, code 5)
void __cdecl TEAViewWindows::Child4270_Notify5(int *self)

{
  int textLen;
  uint *lpString;
  
  textLen = GetWindowTextLengthA(*(HWND *)(self[0x56] + 0xc));
  lpString = (uint *)operator_new_array();
  GetWindowTextA(*(HWND *)(self[0x56] + 0xc),(LPSTR)lpString,textLen + 1);
  std::string::assign_cstr((int)(self + 0x1a6),lpString);
  operator_delete_array();
  TEAViewWindows::RestartSearch(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456950  TEAViewWindows::StartSearch   (2307 bytes)   [analysis]
//   reads the query, expands @/#, compiles it for every dictionary and starts the incremental search
/* WARNING: Removing unreachable block (ram,0x00456b99) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::StartSearch(int self)

{
  int iVar1;
  int longest;
  int shortest;
  int index;
  int *strRep;
  uint id;
  undefined4 *sehChainHead;
  uint *word_;
  int step;
  int last;
  int first;
  undefined1 *unused;
  undefined4 unused2;
  undefined *unused3;
  undefined *unused4;
  undefined1 *unused5;
  undefined4 unused6;
  int unused7;
  int unused8;
  undefined1 *unused9;
  undefined4 unused10;
  int unused11;
  int unused12;
  int *strRep2;
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  int *strRep3;
  int searching;
  char local_c9;
  int expansions;
  undefined1 *unused17;
  undefined4 unused18;
  int unused19;
  int unused20;
  int *strRep4;
  int count;
  int dictList;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_84 [8];
  int str;
  undefined1 local_74 [8];
  int str2;
  undefined1 result [8];
  int str3;
  undefined1 text [8];
  int str4;
  undefined1 local_44 [8];
  int str5;
  undefined1 text2 [8];
  undefined *local_2c;
  undefined1 local_24 [8];
  int str6;
  undefined1 local_14 [8];
  int str7;
  
  __InitExceptBlockLDTC(0x4f8bf0);
  dictList = TEAAppWindows::GetDictionaryList(*(int *)(self + 0x38));
  count = TSDictionaryList::GetCount(dictList);
  if (count < 1) {
    ehContext = 8;
    TEAAppWindows::LoadResourceString((int)local_24,*(int *)(self + 0x38),0x1a0e);
    ehDtorCount = ehDtorCount + 1;
    TEAAppWindows::SetStatusText(*(int *)(self + 0x38),(int)local_24);
    ehDtorCount = ehDtorCount + -1;
    if (str6 != 0) {
      if (*(int *)(str6 + -0xc) != -1) {
        strRep4 = (int *)(str6 + -0xc);
        if (strRep4 == &g_nullStringRep) {
          index = 1;
        }
        else if (strRep4 == &g_nullStringRep) {
          index = 1;
        }
        else {
          *strRep4 = *strRep4 + -1;
          index = *strRep4 + 1;
        }
        if (index != 0) goto LAB_00456a7f;
      }
      unused20 = str6 + -0xc;
      unused19 = str6 + -0xc;
      operator_delete();
      unused18 = 0;
      unused17 = local_24;
      str6 = 0;
    }
LAB_00456a7f:
    TEAViewWindows::SetSearching(self,0);
    *sehChainHead = sehPrevFrame;
    return;
  }
  expansions = TEAAppWindows::GetProfile(*(int *)(self + 0x38));
  ehContext = 0x2c;
  ExpandQueryMacros((int)local_14,expansions,self + 0x698);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  local_c9 = '\0';
  searching = 1;
  for (index = 0; (searching == 1 && (index < count)); index = index + 1) {
    iVar1 = TSDictionaryList::EnsureCurrent(dictList,index);
    if (iVar1 == 0) {
      searching = 0;
    }
    else {
      iVar1 = *(int *)(expansions + 0x20);
      longest = PVWEdit::GetInt((int *)(self + 0x50c));
      shortest = PVWEdit::GetInt((int *)(self + 0x2d8));
      iVar1 = MatchEngineSet::Compile(*(int *)(index * 4 + *(int *)(self + 0x6b4)) + 0x28,dictList,index,
                           (int)local_14,shortest,longest,iVar1);
      ehContext = 0x20;
      if (iVar1 == 0) {
        iVar1 = TEAViewWindows::GetLengthRange(self,index,&first,&last,&step);
        if (iVar1 == 0) {
          iVar1 = first;
          if (first <= last) {
            do {
              longest = TSDictionaryList::GetWordCount(dictList,index,iVar1);
              if (0 < longest) {
                local_c9 = '\x01';
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 <= last);
          }
        }
        else if (iVar1 != 1) {
          if (iVar1 == 2) {
            id = 0x32d2;
          }
          else {
            id = 13000;
          }
          ehContext = 0xa4;
          TEAAppWindows::LoadResourceString((int)local_74,*(int *)(self + 0x38),id);
          ehDtorCount = ehDtorCount + 1;
          TEAAppWindows::SetStatusText(*(int *)(self + 0x38),(int)local_74);
          ehDtorCount = ehDtorCount + -1;
          if (str2 != 0) {
            if (*(int *)(str2 + -0xc) != -1) {
              strRep = (int *)(str2 + -0xc);
              if (strRep == &g_nullStringRep) {
                iVar1 = 1;
              }
              else if (strRep == &g_nullStringRep) {
                iVar1 = 1;
              }
              else {
                *strRep = *strRep + -1;
                iVar1 = *strRep + 1;
              }
              if (iVar1 != 0) goto LAB_00457042;
            }
            operator_delete();
            str2 = 0;
          }
LAB_00457042:
          ehContext = 0x20;
          searching = 0;
        }
      }
      else {
        local_2c = &g_emptyStringData;
        ehDtorCount = ehDtorCount + 1;
        if (iVar1 != 1) {
          ehContext = 0x5c;
          word_ = (uint *)&DAT_004f775a;
          TSDictionaryList::GetFileTitle(local_44,dictList,index);
          ehDtorCount = ehDtorCount + 1;
          FindWordInString((int)text,(int)local_44,word_);
          ehDtorCount = ehDtorCount + 1;
          std::string::operator_assign((int)text2,(int)text);
          ehDtorCount = ehDtorCount + -1;
          if (str4 != 0) {
            if (*(int *)(str4 + -0xc) != -1) {
              strRep3 = (int *)(str4 + -0xc);
              if (strRep3 == &g_nullStringRep) {
                longest = 1;
              }
              else if (strRep3 == &g_nullStringRep) {
                longest = 1;
              }
              else {
                *strRep3 = *strRep3 + -1;
                longest = *strRep3 + 1;
              }
              if (longest != 0) goto LAB_00456cb7;
            }
            unused16 = str4 + -0xc;
            unused15 = str4 + -0xc;
            operator_delete();
            unused14 = 0;
            unused13 = text;
            str4 = 0;
          }
LAB_00456cb7:
          ehContext = 0x50;
          ehDtorCount = ehDtorCount + -1;
          if (str5 != 0) {
            if (*(int *)(str5 + -0xc) != -1) {
              strRep2 = (int *)(str5 + -0xc);
              if (strRep2 == &g_nullStringRep) {
                longest = 1;
              }
              else if (strRep2 == &g_nullStringRep) {
                longest = 1;
              }
              else {
                *strRep2 = *strRep2 + -1;
                longest = *strRep2 + 1;
              }
              if (longest != 0) goto LAB_00456d72;
            }
            unused12 = str5 + -0xc;
            unused11 = str5 + -0xc;
            operator_delete();
            unused10 = 0;
            unused9 = local_44;
            str5 = 0;
          }
        }
LAB_00456d72:
        ehContext = 0x80;
        TEAAppWindows::LoadResourceString((int)result,*(int *)(self + 0x38),iVar1 + 0x3318);
        ehDtorCount = ehDtorCount + 1;
        std::string::append((int)text2,(int)result);
        ehDtorCount = ehDtorCount + -1;
        if (str3 != 0) {
          if (*(int *)(str3 + -0xc) != -1) {
            strRep = (int *)(str3 + -0xc);
            if (strRep == &g_nullStringRep) {
              iVar1 = 1;
            }
            else if (strRep == &g_nullStringRep) {
              iVar1 = 1;
            }
            else {
              *strRep = *strRep + -1;
              iVar1 = *strRep + 1;
            }
            if (iVar1 != 0) goto LAB_00456e3e;
          }
          unused8 = str3 + -0xc;
          unused7 = str3 + -0xc;
          operator_delete();
          unused6 = 0;
          unused5 = result;
          str3 = 0;
        }
LAB_00456e3e:
        ehContext = 0x50;
        TEAAppWindows::SetStatusText(*(int *)(self + 0x38),(int)text2);
        searching = 0;
        ehDtorCount = ehDtorCount + -1;
        if (local_2c != (undefined *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            strRep = (int *)(local_2c + -0xc);
            if (strRep == &g_nullStringRep) {
              iVar1 = 1;
            }
            else if (strRep == &g_nullStringRep) {
              iVar1 = 1;
            }
            else {
              *strRep = *strRep + -1;
              iVar1 = *strRep + 1;
            }
            if (iVar1 != 0) goto LAB_00456ef5;
          }
          unused4 = local_2c + -0xc;
          unused3 = local_2c + -0xc;
          operator_delete();
          unused2 = 0;
          unused = text2;
          local_2c = (undefined *)0x0;
        }
LAB_00456ef5:
        ehContext = 0x20;
      }
    }
  }
  if (((searching == 1) && (*(int *)(self + 0x690) == 0)) && (local_c9 == '\0')) {
    ehContext = 0xbc;
    TEAAppWindows::LoadResourceString((int)local_84,*(int *)(self + 0x38),0x36ce);
    ehDtorCount = ehDtorCount + 1;
    TEAAppWindows::SetStatusText(*(int *)(self + 0x38),(int)local_84);
    ehDtorCount = ehDtorCount + -1;
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        strRep = (int *)(str + -0xc);
        if (strRep == &g_nullStringRep) {
          index = 1;
        }
        else if (strRep == &g_nullStringRep) {
          index = 1;
        }
        else {
          *strRep = *strRep + -1;
          index = *strRep + 1;
        }
        if (index != 0) goto LAB_00457180;
      }
      operator_delete();
      str = 0;
    }
LAB_00457180:
    ehContext = 0x20;
    searching = 0;
  }
  TEAViewWindows::SetSearching(self,searching);
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      strRep = (int *)(str7 + -0xc);
      if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep = *strRep + -1;
        index = *strRep + 1;
      }
      if (index != 0) goto LAB_00457237;
    }
    operator_delete();
  }
LAB_00457237:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457254  TEAViewWindows::OnEditKillFocus   (230 bytes)   [rtti:vtable virtual slot 21]
//   vtable slot 21 (introduced by PropertiesViewWindows); an edit or rich edit lost the focus (EN_KILLFOCUS from PVWEdit/PVWRichEdit)
void __cdecl TEAViewWindows::OnEditKillFocus(int *self,undefined4 param_2,int param_3)

{
  int iVar1;
  int int_;
  
  if (param_3 == 0x1112) {
    iVar1 = PVWEdit::GetInt(self + 0x143);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (100 < iVar1) {
      iVar1 = 100;
    }
    int_ = PVWEdit::GetInt(self + 0x143);
    if (iVar1 != int_) {
      PVWEdit::SetInt(self + 0x143);
    }
    int_ = PVWEdit::GetInt(self + 0xb6);
    if (iVar1 < int_) {
      PVWEdit::SetInt(self + 0xb6);
    }
  }
  else if (param_3 == 0x111c) {
    iVar1 = PVWEdit::GetInt(self + 0xb6);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (100 < iVar1) {
      iVar1 = 100;
    }
    int_ = PVWEdit::GetInt(self + 0xb6);
    if (iVar1 != int_) {
      PVWEdit::SetInt(self + 0xb6);
    }
    int_ = PVWEdit::GetInt(self + 0x143);
    if (int_ < iVar1) {
      PVWEdit::SetInt(self + 0x143);
    }
  }
  if (self[0x19] != 2) {
    TEAViewWindows::RestartSearch(self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045733c  TEAViewWindows::OnEditChange   (15 bytes)   [rtti:vtable virtual slot 22]
//   vtable slot 22 (introduced by PropertiesViewWindows); an edit or rich edit's text changed (EN_CHANGE from PVWEdit/PVWRichEdit)
void __cdecl TEAViewWindows::OnEditChange(int *self)

{
  TEAViewWindows::RestartSearch(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045734c  TEAViewWindows::Nothing   (5 bytes)   [analysis]
//   empty
void __stdcall TEAViewWindows::Nothing(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457354  TEAViewWindows::ShowDefinitions   (3267 bytes, 2 ranges)   [analysis]
//   looks up the definitions of the selected word in every dictionary and shows them in a definition window
/* WARNING: Removing unreachable block (ram,0x00457399) */
/* WARNING: Removing unreachable block (ram,0x004573c5) */
void __cdecl TEAViewWindows::ShowDefinitions(int *self,int list,int useCaret,int newWindow)

{
  int iVar1;
  int *definitionViewFrame;
  undefined4 *sehChainHead;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int flags;
  undefined *unused;
  undefined *unused2;
  int *strRep;
  undefined1 *unused3;
  undefined4 unused4;
  undefined *unused5;
  undefined *unused6;
  int *strRep2;
  undefined1 *unused7;
  undefined4 unused8;
  int unused9;
  int unused10;
  int group;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 value [8];
  int str;
  undefined1 vec [4];
  int first;
  int last;
  undefined1 vec2 [4];
  int first2;
  int last2;
  int str2;
  int str3;
  undefined4 local_74;
  int first3;
  int last3;
  undefined4 unused11;
  int tsDictionaryDefinitionRetriever [8];
  undefined1 local_34 [8];
  int str4;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined1 word_ [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4f8d74);
  local_c = &g_emptyStringData;
  local_1c = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x44;
  TEAViewWindows::GetSelectedWord((int)local_34,(int)self,useCaret,(int)word_,(int)local_24,&group);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  if (*(int *)(str4 + -4) != 0) {
    if (((newWindow == 0x1d42) || (newWindow == 0x3160)) && (group != 0)) {
      iVar1 = TEAViewWindows::CheckDictionaries(self);
      if (iVar1 != 0) {
        flags = TEAAppWindows::GetDictionaryList(self[0xe]);
        local_160 = self[0x1b4];
        local_15c = *(int *)(local_160 * 4 + self[0x1ad]);
        ehContext = 0x74;
        TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever(tsDictionaryDefinitionRetriever,flags,self[0x1b4],&local_168);
        ehDtorCount = ehDtorCount + 2;
        ehContext = 0x80;
        if ((*(int *)(local_15c + 0x20) == local_168) && (*(int *)(local_15c + 0x24) == local_164))
        {
          first3 = 0;
          last3 = 0;
          unused11 = 0;
          ehContext = 200;
          DefinitionRecord::DefinitionRecord((int)value);
          ehDtorCount = ehDtorCount + 6;
          std::vector_DefinitionSearch::vector(&local_74,1,(int)value);
          ehDtorCount = ehDtorCount + -2;
          if (str3 != 0) {
            if (*(int *)(str3 + -0xc) != -1) {
              definitionViewFrame = (int *)(str3 + -0xc);
              if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else {
                *definitionViewFrame = *definitionViewFrame + -1;
                iVar1 = *definitionViewFrame + 1;
              }
              if (iVar1 != 0) goto LAB_004579d1;
            }
            operator_delete();
            str3 = 0;
          }
LAB_004579d1:
          ehDtorCount = ehDtorCount + -1;
          if (str2 != 0) {
            if (*(int *)(str2 + -0xc) != -1) {
              definitionViewFrame = (int *)(str2 + -0xc);
              if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else {
                *definitionViewFrame = *definitionViewFrame + -1;
                iVar1 = *definitionViewFrame + 1;
              }
              if (iVar1 != 0) goto LAB_00457a8b;
            }
            operator_delete();
            str2 = 0;
          }
LAB_00457a8b:
          ehDtorCount = ehDtorCount + -1;
          std::_Destroy_range_string(vec2,first2,last2);
          operator_delete();
          ehDtorCount = ehDtorCount + -1;
          std::_Destroy_range_string(vec,first,last);
          operator_delete();
          ehDtorCount = ehDtorCount + -1;
          if (str != 0) {
            if (*(int *)(str + -0xc) != -1) {
              definitionViewFrame = (int *)(str + -0xc);
              if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else {
                *definitionViewFrame = *definitionViewFrame + -1;
                iVar1 = *definitionViewFrame + 1;
              }
              if (iVar1 != 0) goto LAB_00457bb7;
            }
            operator_delete();
            str = 0;
          }
LAB_00457bb7:
          ehDtorCount = ehDtorCount + 1;
          ehContext = 0x80;
          TSDictionaryDefinitionRetriever::ReadDefinition((int)tsDictionaryDefinitionRetriever,group,first3);
          definitionViewFrame = (int *)TEAAppWindows::GetDefinitionWindow(self[0xe],(uint)(newWindow == 0x3160));
          DefinitionViewFrame::ShowDefinitions(definitionViewFrame,(int)&local_74,(int)local_34,(int)word_,(int)local_24,
                       local_15c + 0x28,flags,self[0x1b4]);
          ehDtorCount = ehDtorCount + -1;
          std::_Destroy_range_DefinitionRecord(&local_74,first3,last3);
          operator_delete();
          ehDtorCount = ehDtorCount + -2;
          TSDictionaryDefinitionRetriever::_dtor((int)tsDictionaryDefinitionRetriever,2);
          ehDtorCount = ehDtorCount + -1;
          if (str4 != 0) {
            if (*(int *)(str4 + -0xc) != -1) {
              definitionViewFrame = (int *)(str4 + -0xc);
              if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else {
                *definitionViewFrame = *definitionViewFrame + -1;
                iVar1 = *definitionViewFrame + 1;
              }
              if (iVar1 != 0) goto LAB_00457cfa;
            }
            operator_delete();
            str4 = 0;
          }
LAB_00457cfa:
          ehDtorCount = ehDtorCount + -1;
          if (local_1c != (undefined *)0x0) {
            if (*(int *)(local_1c + -0xc) != -1) {
              definitionViewFrame = (int *)(local_1c + -0xc);
              if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else {
                *definitionViewFrame = *definitionViewFrame + -1;
                iVar1 = *definitionViewFrame + 1;
              }
              if (iVar1 != 0) goto LAB_00457d9f;
            }
            operator_delete();
            local_1c = (undefined *)0x0;
          }
LAB_00457d9f:
          ehDtorCount = ehDtorCount + -1;
          if (local_c != (undefined *)0x0) {
            if (*(int *)(local_c + -0xc) != -1) {
              definitionViewFrame = (int *)(local_c + -0xc);
              if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else if (definitionViewFrame == &g_nullStringRep) {
                iVar1 = 1;
              }
              else {
                *definitionViewFrame = *definitionViewFrame + -1;
                iVar1 = *definitionViewFrame + 1;
              }
              if (iVar1 != 0) goto LAB_00457e44;
            }
            operator_delete();
          }
LAB_00457e44:
          *sehChainHead = sehPrevFrame;
          return;
        }
        (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
        ehDtorCount = ehDtorCount + -2;
        TSDictionaryDefinitionRetriever::_dtor((int)tsDictionaryDefinitionRetriever,2);
        ehDtorCount = ehDtorCount + -1;
        if (str4 != 0) {
          if (*(int *)(str4 + -0xc) != -1) {
            definitionViewFrame = (int *)(str4 + -0xc);
            if (definitionViewFrame == &g_nullStringRep) {
              iVar1 = 1;
            }
            else if (definitionViewFrame == &g_nullStringRep) {
              iVar1 = 1;
            }
            else {
              *definitionViewFrame = *definitionViewFrame + -1;
              iVar1 = *definitionViewFrame + 1;
            }
            if (iVar1 != 0) goto LAB_0045778e;
          }
          operator_delete();
          str4 = 0;
        }
LAB_0045778e:
        ehDtorCount = ehDtorCount + -1;
        if (local_1c != (undefined *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            definitionViewFrame = (int *)(local_1c + -0xc);
            if (definitionViewFrame == &g_nullStringRep) {
              iVar1 = 1;
            }
            else if (definitionViewFrame == &g_nullStringRep) {
              iVar1 = 1;
            }
            else {
              *definitionViewFrame = *definitionViewFrame + -1;
              iVar1 = *definitionViewFrame + 1;
            }
            if (iVar1 != 0) goto LAB_00457833;
          }
          operator_delete();
          local_1c = (undefined *)0x0;
        }
LAB_00457833:
        ehDtorCount = ehDtorCount + -1;
        if (local_c != (undefined *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            definitionViewFrame = (int *)(local_c + -0xc);
            if (definitionViewFrame == &g_nullStringRep) {
              iVar1 = 1;
            }
            else if (definitionViewFrame == &g_nullStringRep) {
              iVar1 = 1;
            }
            else {
              *definitionViewFrame = *definitionViewFrame + -1;
              iVar1 = *definitionViewFrame + 1;
            }
            if (iVar1 != 0) goto LAB_004578d8;
          }
          operator_delete();
        }
LAB_004578d8:
        *sehChainHead = sehPrevFrame;
        return;
      }
      ehDtorCount = ehDtorCount + -1;
      if (str4 != 0) {
        if (*(int *)(str4 + -0xc) != -1) {
          definitionViewFrame = (int *)(str4 + -0xc);
          if (definitionViewFrame == &g_nullStringRep) {
            iVar1 = 1;
          }
          else if (definitionViewFrame == &g_nullStringRep) {
            iVar1 = 1;
          }
          else {
            *definitionViewFrame = *definitionViewFrame + -1;
            iVar1 = *definitionViewFrame + 1;
          }
          if (iVar1 != 0) goto LAB_004574c5;
        }
        unused10 = str4 + -0xc;
        unused9 = str4 + -0xc;
        operator_delete();
        unused8 = 0;
        unused7 = local_34;
        str4 = 0;
      }
LAB_004574c5:
      ehDtorCount = ehDtorCount + -1;
      if (local_1c != (undefined *)0x0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          strRep2 = (int *)(local_1c + -0xc);
          if (strRep2 == &g_nullStringRep) {
            iVar1 = 1;
          }
          else if (strRep2 == &g_nullStringRep) {
            iVar1 = 1;
          }
          else {
            *strRep2 = *strRep2 + -1;
            iVar1 = *strRep2 + 1;
          }
          if (iVar1 != 0) goto LAB_0045756a;
        }
        unused6 = local_1c + -0xc;
        unused5 = local_1c + -0xc;
        operator_delete();
        unused4 = 0;
        unused3 = local_24;
        local_1c = (undefined *)0x0;
      }
LAB_0045756a:
      ehDtorCount = ehDtorCount + -1;
      if (local_c != (undefined *)0x0) {
        if (*(int *)(local_c + -0xc) != -1) {
          strRep = (int *)(local_c + -0xc);
          if (strRep == &g_nullStringRep) {
            iVar1 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            iVar1 = 1;
          }
          else {
            *strRep = *strRep + -1;
            iVar1 = *strRep + 1;
          }
          if (iVar1 != 0) goto LAB_0045760f;
        }
        unused2 = local_c + -0xc;
        unused = local_c + -0xc;
        operator_delete();
      }
LAB_0045760f:
      *sehChainHead = sehPrevFrame;
      return;
    }
    TEAAppWindows::Lookup(self[0xe],list,newWindow,(int)local_34,0,0);
  }
  ehDtorCount = ehDtorCount + -1;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      definitionViewFrame = (int *)(str4 + -0xc);
      if (definitionViewFrame == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (definitionViewFrame == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *definitionViewFrame = *definitionViewFrame + -1;
        iVar1 = *definitionViewFrame + 1;
      }
      if (iVar1 != 0) goto LAB_00457efa;
    }
    operator_delete();
    str4 = 0;
  }
LAB_00457efa:
  ehContext = 0x20;
  ehDtorCount = ehDtorCount + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      definitionViewFrame = (int *)(local_1c + -0xc);
      if (definitionViewFrame == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (definitionViewFrame == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *definitionViewFrame = *definitionViewFrame + -1;
        iVar1 = *definitionViewFrame + 1;
      }
      if (iVar1 != 0) goto LAB_00457f87;
    }
    operator_delete();
    local_1c = (undefined *)0x0;
  }
LAB_00457f87:
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      definitionViewFrame = (int *)(local_c + -0xc);
      if (definitionViewFrame == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (definitionViewFrame == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *definitionViewFrame = *definitionViewFrame + -1;
        iVar1 = *definitionViewFrame + 1;
      }
      if (iVar1 != 0) goto LAB_0045800e;
    }
    operator_delete();
  }
LAB_0045800e:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458090  std::vector_DefinitionSearch::vector   (234 bytes, 2 ranges)   [analysis]
//   vector of n 128-byte definition-search records
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004580b9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x004580c1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::vector_DefinitionSearch::vector(undefined4 *self,int n,int value)

{
  int first;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4f8f08);
  *self = 8;
  first = operator_new();
  if (first == 0) {
    badAlloc = &std::bad_alloc::vftable;
    _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
  }
  self[1] = first;
  std::uninitialized_copy_DefinitionRecord(first,n,value);
  self[2] = self[1] + n * 0x80;
  self[6] = self[2];
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004581a0  TEAViewWindows::CheckDictionaries   (368 bytes)   [analysis]
//   reloads changed dictionaries; reports ("...is no longer a valid TEA&Sympathy Dictionary File") and stops when one is invalid
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl TEAViewWindows::CheckDictionaries(int *self)

{
  uint pos;
  int dictionaryList;
  int iVar3;
  int iVar4;
  uint *path;
  char *len;
  int index;
  int *strRep;
  undefined4 *sehChainHead;
  int local_3c;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f8f48);
  local_3c = 1;
  dictionaryList = TEAAppWindows::GetDictionaryList(self[0xe]);
  iVar3 = TSDictionaryList::GetCount(dictionaryList);
LAB_004582df:
  do {
    do {
      index = iVar3 + -1;
      if (iVar3 < 1) {
        if (local_3c == 0) {
          TEAViewWindows::StartSearch((int)self);
        }
        *sehChainHead = sehPrevFrame;
        return local_3c;
      }
      iVar4 = TSDictionaryList::EnsureCurrent(dictionaryList,index);
      iVar3 = index;
    } while (iVar4 != 0);
    path = (uint *)TSDictionaryList::GetPath(dictionaryList,index);
    std::string::string_from_cstr((int)str,path);
    pos = *(uint *)(local_c + -4);
    len = strlen((uint *)"\nis no longer a valid TEA&Sympathy Dictionary File");
    std::string::replace((int)str,pos,0,0x4f77b9,(uint)len,0,(uint)len);
    (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
    local_3c = 0;
  } while (local_c == 0);
  if (*(int *)(local_c + -0xc) != -1) goto code_r0x00458276;
  goto LAB_004582a3;
code_r0x00458276:
  strRep = (int *)(local_c + -0xc);
  if (strRep == &g_nullStringRep) {
    index = 1;
  }
  else if (strRep == &g_nullStringRep) {
    index = 1;
  }
  else {
    *strRep = *strRep + -1;
    index = *strRep + 1;
  }
  if (index == 0) {
LAB_004582a3:
    operator_delete();
    local_c = 0;
  }
  goto LAB_004582df;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458310  TEAViewWindows::GetSelectedWord   (2431 bytes)   [analysis]
//   the word (and its dictionary) selected in the focused list, for lookups
/* WARNING: Removing unreachable block (ram,0x0045838c) */
/* WARNING: Removing unreachable block (ram,0x0045835a) */
/* WARNING: Removing unreachable block (ram,0x004583be) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl TEAViewWindows::GetSelectedWord(int self,int list,int useCaret,int word_,int dictPath,undefined4 *group)

{
  uint uVar1;
  undefined1 entry;
  HWND hWnd;
  BOOL ok;
  int index;
  int dictionaryList;
  undefined3 regHigh;
  uint *path;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  undefined4 unused2;
  undefined *unused3;
  undefined *unused4;
  undefined *unused5;
  undefined4 *unused6;
  undefined4 *unused7;
  int *strRep2;
  undefined1 *unused8;
  undefined4 unused9;
  undefined *unused10;
  undefined *unused11;
  undefined1 *unused12;
  undefined4 unused13;
  undefined *unused14;
  undefined *unused15;
  undefined4 *dest;
  undefined4 *unused16;
  uint unused17;
  int unused18;
  int *newRep;
  int *newData;
  uint len;
  int *strRep3;
  int unused19;
  undefined4 *unused20;
  undefined4 unused21;
  uint local_134;
  undefined1 s;
  uint local_12c;
  undefined1 *unused22;
  undefined4 unused23;
  int *unused24;
  int *unused25;
  int *strRep4;
  int *newData2;
  int *unused26;
  uint unused27;
  undefined1 *unused28;
  int *newRep2;
  int *unused29;
  uint len2;
  int *strRep5;
  undefined1 *unused30;
  int *unused31;
  undefined4 unused32;
  uint *msgText;
  uint local_dc;
  undefined1 *unused33;
  undefined4 unused34;
  int unused35;
  int unused36;
  int *strRep6;
  uint local_c4;
  undefined1 *unused37;
  undefined4 unused38;
  int unused39;
  int unused40;
  int *strRep7;
  uint local_ac;
  uint local_a8;
  undefined4 group2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str4;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused41;
  undefined1 result [8];
  int str5;
  undefined1 result2 [8];
  int str6;
  undefined1 str2 [8];
  undefined *local_2c;
  undefined1 str3 [8];
  undefined *local_1c;
  undefined1 text [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4f9038);
  group2 = 0;
  local_c = (undefined4 *)&g_emptyStringData;
  unused5 = &g_emptyStringData;
  local_1c = &g_emptyStringData;
  unused4 = &g_emptyStringData;
  local_2c = &g_emptyStringData;
  unused3 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x20;
  hWnd = GetFocus();
  ok = IsChild(*(HWND *)(*(int *)(list + 0x158) + 0xc),hWnd);
  if (ok == 0) {
    index = *(int *)(*(int *)(*(int *)(list + 0x6d0) * 4 + *(int *)(list + 0x6b4)) + 8);
    if ((useCaret != 0) || (dictionaryList = MatchListWindows::GetEntryCount(index), dictionaryList == 1)) {
      entry = MatchListWindows::GetEntry(index,useCaret,(int)text,&group2);
      local_c4 = CONCAT31(regHigh,entry);
      ehContext = 0x74;
      std::string::substr((int)result,(int)text,local_c4,g_stringNpos);
      ehDtorCount = ehDtorCount + 1;
      std::string::operator_assign((int)str2,(int)result);
      ehDtorCount = ehDtorCount + -1;
      if (str5 != 0) {
        if (*(int *)(str5 + -0xc) != -1) {
          strRep6 = (int *)(str5 + -0xc);
          if (strRep6 == &g_nullStringRep) {
            index = 1;
          }
          else if (strRep6 == &g_nullStringRep) {
            index = 1;
          }
          else {
            *strRep6 = *strRep6 + -1;
            index = *strRep6 + 1;
          }
          if (index != 0) goto LAB_00458653;
        }
        unused36 = str5 + -0xc;
        unused35 = str5 + -0xc;
        operator_delete();
        unused34 = 0;
        unused33 = result;
        str5 = 0;
        unused = 0;
      }
LAB_00458653:
      uVar1 = local_c4;
      ehContext = 0x20;
      local_dc = g_stringNpos;
      if ((uint)local_c[-1] < local_c4) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_004084c8;
        objectDtor = 0;
        ehContext = 0x98;
        msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c);
        std::string::string_from_cstr((int)str,msgText);
        ehDtorCount = ehDtorCount + 2;
        outOfRange[0] = &std::logic_error::vftable;
        unused32 = 0;
        unused41 = (int *)0x0;
        ehContext = 0xa4;
        if (str4[-3] == -1 || str4[-3] + 1 < 0) {
          len2 = str4[-1];
          newRep2 = std::string::__getRep(newStr,len2,len2);
          unused28 = newStr;
          newData2 = newRep2 + 3;
          unused27 = len2;
          unused26 = str4;
          unused29 = newData2;
          unused41 = newData2;
          memcpy(newData2,str4,len2);
        }
        else {
          unused30 = newStr;
          unused31 = str4;
          unused41 = str4;
          strRep5 = str4 + -3;
          if (strRep5 != &g_nullStringRep) {
            *strRep5 = *strRep5 + 1;
          }
        }
        ehContext = 0x98;
        outOfRange[0] = &std::out_of_range::vftable;
        ehDtorCount = ehDtorCount + 2;
        if (str4 != (int *)0x0) {
          if (str4[-3] != -1) {
            strRep4 = str4 + -3;
            if (strRep4 == &g_nullStringRep) {
              index = 1;
            }
            else if (strRep4 == &g_nullStringRep) {
              index = 1;
            }
            else {
              *strRep4 = *strRep4 + -1;
              index = *strRep4 + 1;
            }
            if (index != 0) goto LAB_004588bb;
          }
          unused25 = str4 + -3;
          unused24 = str4 + -3;
          operator_delete();
          unused23 = 0;
          unused22 = str;
          str4 = (int *)0x0;
        }
LAB_004588bb:
        ehContext = 0x8c;
        _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      local_12c = local_c[-1] - uVar1;
      s = 0;
      local_134 = local_12c;
      if (local_dc < local_12c) {
        local_134 = local_dc;
      }
      std::string::replace((int)text,uVar1,local_134,(uint)&s,0,0,0);
      index = *(int *)(list + 0x6d0);
      dictionaryList = TEAAppWindows::GetDictionaryList(*(int *)(list + 0x38));
      path = (uint *)TSDictionaryList::GetPath(dictionaryList,index);
      std::string::assign_cstr((int)str3,path);
    }
  }
  else {
    std::string::operator_assign((int)text,list + 0x698);
    index = FUN_004acea4((int *)(list + 0x158),&local_a8,&local_ac);
    if ((index != -1) && ((int)local_a8 < (int)local_ac)) {
      ehContext = 0x5c;
      std::string::substr((int)result2,(int)text,local_a8,local_ac - local_a8);
      ehDtorCount = ehDtorCount + 1;
      std::string::operator_assign((int)text,(int)result2);
      ehDtorCount = ehDtorCount + -1;
      if (str6 != 0) {
        if (*(int *)(str6 + -0xc) != -1) {
          strRep7 = (int *)(str6 + -0xc);
          if (strRep7 == &g_nullStringRep) {
            index = 1;
          }
          else if (strRep7 == &g_nullStringRep) {
            index = 1;
          }
          else {
            *strRep7 = *strRep7 + -1;
            index = *strRep7 + 1;
          }
          if (index != 0) goto LAB_00458521;
        }
        unused40 = str6 + -0xc;
        unused39 = str6 + -0xc;
        operator_delete();
        unused38 = 0;
        unused37 = result2;
        str6 = 0;
        unused2 = 0;
      }
LAB_00458521:
      ehContext = 0x20;
    }
  }
  if (word_ != 0) {
    std::string::operator_assign(word_,(int)str3);
  }
  if (dictPath != 0) {
    std::string::operator_assign(dictPath,(int)str2);
  }
  if (group != (undefined4 *)0x0) {
    *group = group2;
  }
  ehContext = 200;
  unused21 = 0;
  *(undefined4 *)(self + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    newRep = std::string::__getRep(self,len,len);
    newData = newRep + 3;
    *(int **)(self + 8) = newData;
    unused18 = self;
    unused17 = len;
    unused16 = local_c;
    dest = *(undefined4 **)(self + 8);
    memcpy(dest,local_c,len);
  }
  else {
    unused20 = local_c;
    *(undefined4 **)(self + 8) = local_c;
    unused19 = self;
    strRep3 = (int *)(*(int *)(self + 8) + -0xc);
    if (strRep3 != &g_nullStringRep) {
      *strRep3 = *strRep3 + 1;
    }
  }
  ehContext = 0xe0;
  if (local_2c != (undefined *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      strRep = (int *)(local_2c + -0xc);
      if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep = *strRep + -1;
        index = *strRep + 1;
      }
      if (index != 0) goto LAB_00458b42;
    }
    unused15 = local_2c + -0xc;
    unused14 = local_2c + -0xc;
    operator_delete();
    unused13 = 0;
    unused12 = str2;
    local_2c = (undefined *)0x0;
  }
LAB_00458b42:
  ehDtorCount = ehDtorCount + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      strRep = (int *)(local_1c + -0xc);
      if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep = *strRep + -1;
        index = *strRep + 1;
      }
      if (index != 0) goto LAB_00458bc9;
    }
    unused11 = local_1c + -0xc;
    unused10 = local_1c + -0xc;
    operator_delete();
    unused9 = 0;
    unused8 = str3;
    local_1c = (undefined *)0x0;
  }
LAB_00458bc9:
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep2 = local_c + -3;
      if (strRep2 == &g_nullStringRep) {
        index = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        index = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        index = *strRep2 + 1;
      }
      if (index != 0) goto LAB_00458c6e;
    }
    unused7 = local_c + -3;
    unused6 = local_c + -3;
    operator_delete();
  }
LAB_00458c6e:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458c90  TEAViewWindows::OnUpDown   (63 bytes)   [rtti:vtable virtual slot 24]
//   vtable slot 24 (introduced by PropertiesViewWindows); an up-down control changed (control id); the main view treats it like leaving the buddy edit
void __cdecl TEAViewWindows::OnUpDown(int self,int param_2)

{
  if (param_2 == 0x1108) {
    (**(code **)(*(int *)(self + 0xc) + 0x54))();
    return;
  }
  (**(code **)(*(int *)(self + 0xc) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458cd0  TEAViewWindows::SetupMoveableControls   (1151 bytes)   [rtti:vtable virtual slot 47]
//   vtable slot 47 (introduced by PropertiesViewWindows); registers the controls that move or stretch when the window is resized
void __cdecl TEAViewWindows::SetupMoveableControls(int *self)

{
  int xFactor;
  tagRECT *pRect;
  LONG *pLVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  tagRECT rect;
  LONG control [3];
  int local_5c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int *control2;
  int *control3;
  int *control4;
  int *control5;
  int *control6;
  int *control7;
  int *control8;
  int *control9;
  int *control10;
  int *control11;
  int *control12;
  int *control13;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4f9208);
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
  control13 = (int *)operator_new();
  if (control13 != (int *)0x0) {
    ehContext = 0x14;
    if (self[0x18] == 0) {
      xFactor = 0;
    }
    else {
      xFactor = 3;
    }
    PropertiesViewWindows::MoveableControl::MoveableControl(control13,(int)control,self[0x2a],3,xFactor);
    ehContext = 8;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control13);
  control12 = (int *)operator_new();
  if (control12 != (int *)0x0) {
    ehContext = 0x2c;
    PropertiesViewWindows::MoveableControl::MoveableControl(control12,(int)control,self[0x56],3,0);
    ehContext = 0x20;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control12);
  control11 = (int *)operator_new();
  if (control11 != (int *)0x0) {
    ehContext = 0x44;
    PropertiesViewWindows::MoveableControl::MoveableControl(control11,(int)control,self[0x84],2,0);
    ehContext = 0x38;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control11);
  control10 = (int *)operator_new();
  if (control10 != (int *)0x0) {
    ehContext = 0x5c;
    PropertiesViewWindows::MoveableControl::MoveableControl(control10,(int)control,self[0x1b5],3,0);
    ehContext = 0x50;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control10);
  control9 = (int *)operator_new();
  if (control9 != (int *)0x0) {
    ehContext = 0x74;
    PropertiesViewWindows::MoveableControl::MoveableControl(control9,(int)control,self[0x116],2,0);
    ehContext = 0x68;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control9);
  control8 = (int *)operator_new();
  if (control8 != (int *)0x0) {
    ehContext = 0x8c;
    PropertiesViewWindows::MoveableControl::MoveableControl(control8,(int)control,self[0x143],2,0);
    ehContext = 0x80;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control8);
  control7 = (int *)operator_new();
  if (control7 != (int *)0x0) {
    ehContext = 0xa4;
    PropertiesViewWindows::MoveableControl::MoveableControl(control7,(int)control,self[0x172],2,0);
    ehContext = 0x98;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control7);
  if (self[0x1a3] != 0) {
    control6 = (int *)operator_new();
    if (control6 != (int *)0x0) {
      ehContext = 0xbc;
      if (self[0x1a3] == 0) {
        xFactor = self[0x1a3];
      }
      else {
        xFactor = *(int *)self[0x1a3];
      }
      PropertiesViewWindows::MoveableControl::MoveableControl(control6,(int)control,xFactor,2,0);
      ehContext = 0xb0;
    }
    PropertiesViewWindows::AddMoveableControl((int)self,control6);
  }
  self[0x1ed] =
       *(int *)(self[0x1b5] + 0x24) -
       (*(int *)(self[0x143] + 0x24) + *(int *)(self[0x143] + 0x2c));
  if (self[0x18] == 0) {
    self[0x1ee] = 0;
  }
  else {
    control5 = (int *)operator_new();
    if (control5 != (int *)0x0) {
      ehContext = 0xd4;
      if (self[0x329] == 0) {
        xFactor = self[0x329];
      }
      else {
        xFactor = *(int *)self[0x329];
      }
      PropertiesViewWindows::MoveableControl::MoveableControl(control5,(int)control,xFactor,3,0);
      ehContext = 200;
    }
    PropertiesViewWindows::AddMoveableControl((int)self,control5);
    control4 = (int *)operator_new();
    if (control4 != (int *)0x0) {
      ehContext = 0xec;
      if (self[0x32a] == 0) {
        xFactor = self[0x32a];
      }
      else {
        xFactor = *(int *)self[0x32a];
      }
      PropertiesViewWindows::MoveableControl::MoveableControl(control4,(int)control,xFactor,0,2);
      ehContext = 0xe0;
    }
    PropertiesViewWindows::AddMoveableControl((int)self,control4);
    control3 = (int *)operator_new();
    if (control3 != (int *)0x0) {
      ehContext = 0x104;
      if (self[0x32b] == 0) {
        xFactor = self[0x32b];
      }
      else {
        xFactor = *(int *)self[0x32b];
      }
      PropertiesViewWindows::MoveableControl::MoveableControl(control3,(int)control,xFactor,2,2);
      ehContext = 0xf8;
    }
    PropertiesViewWindows::AddMoveableControl((int)self,control3);
    control2 = (int *)operator_new();
    if (control2 != (int *)0x0) {
      ehContext = 0x11c;
      if (self[0x32c] == 0) {
        xFactor = self[0x32c];
      }
      else {
        xFactor = *(int *)self[0x32c];
      }
      PropertiesViewWindows::MoveableControl::MoveableControl(control2,(int)control,xFactor,2,2);
      ehContext = 0x110;
    }
    PropertiesViewWindows::AddMoveableControl((int)self,control2);
    self[0x1ee] =
         (local_5c - (*(int *)(self[0x2a] + 0x24) + *(int *)(self[0x2a] + 0x2c))) +
         self[0x1ed];
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459150  GetWindowRectInParent   (171 bytes)   [analysis]
//   a child window's rectangle in its parent's client coordinates
//   file placement: inferred (address adjacency)
LONG * __cdecl GetWindowRectInParent(LONG *rect,int *window)

{
  int iVar1;
  tagRECT *pRect;
  LONG *pLVar3;
  tagRECT rect2;
  
  rect2.left = 0;
  rect2.top = 0;
  rect2.right = 0;
  rect2.bottom = 0;
  FUN_004a7a6c(*window,&rect2);
  if (window[0x18] == 0) {
    iVar1 = window[0x2a];
    rect2.left = rect2.left + *(int *)(iVar1 + 0x20);
    rect2.top = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x2c) + window[0x1ed];
    rect2.right = rect2.right - *(int *)(iVar1 + 0x20);
    rect2.bottom = rect2.bottom - (window[0x1ed] + window[0x1ee]);
  }
  else {
    iVar1 = window[0x1b5];
    rect2.left = rect2.left + *(int *)(iVar1 + 0x20);
    rect2.top = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x2c) + window[0x1ed];
    rect2.right = rect2.right - *(int *)(iVar1 + 0x20);
    rect2.bottom = rect2.bottom - (window[0x1ed] + window[0x1ee]);
  }
  pRect = &rect2;
  pLVar3 = rect;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = pRect->left;
    pRect = (tagRECT *)&pRect->top;
    pLVar3 = pLVar3 + 1;
  }
  return rect;
}

// ----------------------------------------------------------------------------------------------------
// 0x004591fc  ParsePaneLayout   (223 bytes)   [analysis]
//   reads one pane's position from the "Panes" value (floating-point fractions of the window)
//   file placement: inferred (address adjacency)
int __cdecl ParsePaneLayout(undefined4 self,char *text,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  if (((text != (char *)0x0) && (*text != '\0')) &&
     (iVar2 = FUN_004e03c0(text,&DAT_004f75f3), iVar2 == 1)) {
    local_c = 0;
    while (*text != '\0') {
      cVar1 = *text;
      text = text + 1;
      if (cVar1 == ',') {
        local_c = local_c + 1;
      }
      if ((param_5 == local_c + -1) && (iVar2 = FUN_004e03c0(text,&DAT_004f75f3), iVar2 == 1)) {
        iVar2 = __ftol();
        return iVar2;
      }
    }
  }
  iVar2 = __ftol();
  iVar3 = __ftol();
  return iVar2 - iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004592e0  TEAViewWindows::SetupWindow   (2403 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from TEAViewWindows's OWL::TWindow subobject vtable at 0x004fa0ac (through the this-adjusting thunk at 0x0045ec3d); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAViewWindows::vf11 [rtti:vtable]
/* WARNING: Removing unreachable block (ram,0x004598f2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::SetupWindow(int *self)

{
  undefined4 uVar1;
  HDC hdc;
  int *out;
  undefined4 *sehChainHead;
  int create;
  char cVar4;
  int tryLocalMachine;
  undefined1 *out2;
  tagTEXTMETRICA *lptm;
  tagTEXTMETRICA textMetrics;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined *unused4;
  uint local_21c [15];
  undefined4 unused5;
  undefined4 unused6;
  undefined4 unused7;
  undefined4 unused8;
  undefined4 unused9;
  undefined1 *unused10;
  undefined4 unused11;
  undefined *unused12;
  undefined *unused13;
  undefined1 *unused14;
  undefined4 unused15;
  undefined *unused16;
  undefined *unused17;
  undefined1 *unused18;
  undefined4 unused19;
  int unused20;
  int unused21;
  int local_160;
  undefined4 unused22;
  undefined4 unused23;
  undefined1 *unused24;
  undefined4 unused25;
  int unused26;
  int unused27;
  int *strRep;
  int local_138 [3];
  undefined1 *unused28;
  undefined4 unused29;
  int unused30;
  int unused31;
  int *strRep2;
  int local_110;
  undefined1 *unused32;
  undefined4 unused33;
  int unused34;
  int unused35;
  undefined1 *unused36;
  undefined4 unused37;
  int unused38;
  int unused39;
  undefined1 *unused40;
  undefined4 unused41;
  int unused42;
  int unused43;
  int *strRep3;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 valueName [8];
  int str;
  undefined1 newStr [8];
  undefined *local_8c;
  undefined1 valueName2 [8];
  int str2;
  undefined1 valueName3 [8];
  int str3;
  undefined1 valueName4 [8];
  int str4;
  undefined1 valueName5 [8];
  int str5;
  undefined1 local_44 [8];
  int str6;
  int windowDC;
  int local_2f;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4f93e8);
  PropertiesViewWindows::SetupWindow(self);
  TEAViewWindows::LayoutQueryControls((int)self);
  TEAViewWindows::ApplyListFonts((int)self);
  ehContext = 0x14;
  tryLocalMachine = 0;
  create = 0;
  GetProfileKeyPath((int)local_44);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_44,create,tryLocalMachine);
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      strRep3 = (int *)(str6 + -0xc);
      if (strRep3 == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep3 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep3 = *strRep3 + -1;
        create = *strRep3 + 1;
      }
      if (create != 0) goto LAB_004593f4;
    }
    unused43 = str6 + -0xc;
    unused42 = str6 + -0xc;
    operator_delete();
    unused41 = 0;
    unused40 = local_44;
    str6 = 0;
    unused9 = 0;
  }
LAB_004593f4:
  out = self + 0x28;
  ehContext = 0x2c;
  std::string::string_from_cstr((int)valueName5,(uint *)"WindowTopMost");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName5,out);
  ehDtorCount = ehDtorCount + -1;
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      out = (int *)(str5 + -0xc);
      if (out == &g_nullStringRep) {
        create = 1;
      }
      else if (out == &g_nullStringRep) {
        create = 1;
      }
      else {
        *out = *out + -1;
        create = *out + 1;
      }
      if (create != 0) goto LAB_004594d1;
    }
    unused39 = str5 + -0xc;
    unused38 = str5 + -0xc;
    operator_delete();
    unused37 = 0;
    unused36 = valueName5;
    str5 = 0;
    unused8 = 0;
  }
LAB_004594d1:
  out = self + 0x29;
  ehContext = 0x44;
  std::string::string_from_cstr((int)valueName4,(uint *)"PaneOrientation");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName4,out);
  ehDtorCount = ehDtorCount + -1;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      out = (int *)(str4 + -0xc);
      if (out == &g_nullStringRep) {
        create = 1;
      }
      else if (out == &g_nullStringRep) {
        create = 1;
      }
      else {
        *out = *out + -1;
        create = *out + 1;
      }
      if (create != 0) goto LAB_004595a9;
    }
    unused35 = str4 + -0xc;
    unused34 = str4 + -0xc;
    operator_delete();
    unused33 = 0;
    unused32 = valueName4;
    str4 = 0;
    unused7 = 0;
  }
LAB_004595a9:
  out = &local_110;
  local_110 = 1;
  ehContext = 0x5c;
  std::string::string_from_cstr((int)valueName3,(uint *)"RangeShortest");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName3,out);
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep2 = (int *)(str3 + -0xc);
      if (strRep2 == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        create = *strRep2 + 1;
      }
      if (create != 0) goto LAB_004596a5;
    }
    unused31 = str3 + -0xc;
    unused30 = str3 + -0xc;
    operator_delete();
    unused29 = 0;
    unused28 = valueName3;
    str3 = 0;
    unused6 = 0;
  }
LAB_004596a5:
  ehContext = 8;
  if (local_110 < 1) {
    local_110 = 1;
  }
  else if (100 < local_110) {
    local_110 = 100;
  }
  PVWEdit::SetInt(self + 0xb6);
  local_138[2] = 100;
  local_138[1] = 1;
  FUN_004a76a8(self[0xe5],0x465,0,0x10064);
  out = local_138;
  local_138[0] = 100;
  ehContext = 0x74;
  std::string::string_from_cstr((int)valueName2,(uint *)"RangeLongest");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName2,out);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00459819;
    }
    unused27 = str2 + -0xc;
    unused26 = str2 + -0xc;
    operator_delete();
    unused25 = 0;
    unused24 = valueName2;
    str2 = 0;
    unused5 = 0;
  }
LAB_00459819:
  ehContext = 8;
  if (local_138[0] < 1) {
    local_138[0] = 1;
  }
  else if (100 < local_138[0]) {
    local_138[0] = 100;
  }
  PVWEdit::SetInt(self + 0x143);
  unused23 = 100;
  unused22 = 1;
  FUN_004a76a8(self[0x172],0x465,0,0x10064);
  local_160 = 0;
  do {
    sprintf((undefined1 *)local_21c,&DAT_004f7826 /* "%s%d" */);
    local_8c = &g_emptyStringData;
    unused4 = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    out2 = newStr;
    ehContext = 0xb0;
    std::string::string_from_cstr((int)valueName,local_21c);
    ehDtorCount = ehDtorCount + 1;
    uVar1 = Persist::QueryString((int)persist,(int)valueName,(int)out2);
    if (((char)uVar1 == '\0') || (*(int *)(local_8c + -4) == 0)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    ehDtorCount = ehDtorCount + -1;
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        out = (int *)(str + -0xc);
        if (out == &g_nullStringRep) {
          create = 1;
        }
        else if (out == &g_nullStringRep) {
          create = 1;
        }
        else {
          *out = *out + -1;
          create = *out + 1;
        }
        if (create != 0) goto LAB_00459a06;
      }
      unused21 = str + -0xc;
      unused20 = str + -0xc;
      operator_delete();
      unused19 = 0;
      unused18 = valueName;
      str = 0;
      unused3 = 0;
    }
LAB_00459a06:
    if (cVar4 == '\0') {
      ehDtorCount = ehDtorCount + -1;
      if (local_8c == (undefined *)0x0) break;
      if (*(int *)(local_8c + -0xc) != -1) {
        out = (int *)(local_8c + -0xc);
        if (out == &g_nullStringRep) {
          create = 1;
        }
        else if (out == &g_nullStringRep) {
          create = 1;
        }
        else {
          *out = *out + -1;
          create = *out + 1;
        }
        if (create != 0) break;
      }
      unused17 = local_8c + -0xc;
      unused16 = local_8c + -0xc;
      operator_delete();
      unused15 = 0;
      unused14 = newStr;
      local_8c = (undefined *)0x0;
      unused2 = 0;
      break;
    }
    (**(code **)(self[0x59] + 0x60))();
    ehDtorCount = ehDtorCount + -1;
    if (local_8c != (undefined *)0x0) {
      if (*(int *)(local_8c + -0xc) != -1) {
        out = (int *)(local_8c + -0xc);
        if (out == &g_nullStringRep) {
          create = 1;
        }
        else if (out == &g_nullStringRep) {
          create = 1;
        }
        else {
          *out = *out + -1;
          create = *out + 1;
        }
        if (create != 0) goto LAB_00459b7e;
      }
      unused13 = local_8c + -0xc;
      unused12 = local_8c + -0xc;
      operator_delete();
      unused11 = 0;
      unused10 = newStr;
      local_8c = (undefined *)0x0;
      unused = 0;
    }
LAB_00459b7e:
    ehContext = 8;
    local_160 = local_160 + 1;
  } while (local_160 < 100);
  ehContext = 0xe0;
  FUN_004a8760(&windowDC);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 8;
  (**(code **)(local_2f + 0x14))();
  lptm = &textMetrics;
  hdc = (HDC)(**(code **)(local_2f + 0x5c))();
  GetTextMetricsA(hdc,lptm);
  self[0x31e] = textMetrics.tmHeight + 4;
  ehDtorCount = ehDtorCount + -3;
  OWL::TWindowDC::_dtor(&windowDC,0);
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459c44  TEAViewWindows::OnSplitterButtonDown   (86 bytes)   [rtti:vtable virtual slot 48]
//   vtable slot 48; mouse down on a pane splitter: focuses that pane and captures the mouse
void __cdecl TEAViewWindows::OnSplitterButtonDown(int *self,undefined4 param_2,int *param_3)

{
  int *pane;
  int iVar2;
  
  pane = ClientRectToScreen(self,param_3);
  if (pane != (int *)0x0) {
    TEAViewWindows::FocusPaneList((int)self,(int)pane);
  }
  iVar2 = TEAViewWindows::PaneAt((int)self,param_3);
  self[0x1ec] = iVar2;
  if (iVar2 != 0) {
    SetCapture(*(HWND *)(*self + 0xc));
  }
  OWL::TWindow::EvLButtonDown(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459c9c  TEAViewWindows::OnSplitterDrag   (1411 bytes)   [rtti:vtable virtual slot 49]
//   vtable slot 49; dragging a pane splitter: resizes the panes (and shows the dictionary tip)
/* WARNING: Removing unreachable block (ram,0x00459e90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl TEAViewWindows::OnSplitterDrag(int *self,uint y2,int *param_3)

{
  int tsDictionaryList;
  int iVar2;
  int iVar3;
  int *strRep;
  uint id;
  tagRECT *pRect;
  LONG *pLVar7;
  int *sehChainHead;
  byte bVar8;
  uint index;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  tagRECT rect;
  undefined *unused;
  LONG rect2 [2];
  int local_c0;
  int local_bc;
  undefined *unused2;
  undefined1 *unused3;
  undefined4 unused4;
  int unused5;
  int unused6;
  int *strRep2;
  int local_9c;
  undefined1 *unused7;
  undefined4 unused8;
  int unused9;
  int unused10;
  char local_85;
  int local_84;
  tagPOINT pt;
  int local_78;
  int local_74;
  int *unused11;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  int str;
  undefined1 result2 [8];
  int str2;
  undefined1 text [8];
  undefined *local_c;
  
  bVar8 = 0;
  __InitExceptBlockLDTC(0x4f9514);
  tsDictionaryList = TEAViewWindows::PaneAt((int)self,param_3);
  if (tsDictionaryList < 1) {
    FUN_004a7bfc(*self,0,0x7f00);
  }
  else {
    if (self[0x29] == 0) {
      tsDictionaryList = 0x7f85;
    }
    else {
      tsDictionaryList = 0x7f84;
    }
    FUN_004a7bfc(*self,0,tsDictionaryList);
  }
  if (0 < self[0x1ec]) {
    if ((y2 & 1) == 0) {
      self[0x1ec] = 0;
      TEAViewWindows::SavePanes(self);
      *sehChainHead = local_58;
      return local_58;
    }
    GetWindowRectInParent(rect2,self);
    if (self[0x29] != 0) {
      local_bc = local_c0;
    }
    local_5c = local_bc + self[0x1ed];
    tsDictionaryList = self[0x1ed] >> 1;
    if (tsDictionaryList < 0) {
      tsDictionaryList = tsDictionaryList + (uint)((self[0x1ed] & 1U) != 0);
    }
    if (self[0x29] == 0) {
      iVar3 = param_3[1];
    }
    else {
      iVar3 = *param_3;
    }
    tsDictionaryList = tsDictionaryList + iVar3;
    iVar3 = **(int **)(self[0x1ec] * 4 + self[0x1ad]);
    iVar2 = tsDictionaryList - iVar3;
    if (tsDictionaryList != iVar3) {
      local_60 = self[0x1ed] * 10;
      local_68 = self[0x1ec] + -1;
      local_64 = **(int **)(local_68 * 4 + self[0x1ad]);
      unused11 = self + 0x1ac;
      iVar3 = self[0x1ae] - self[0x1ad];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      local_6c = local_5c;
      if (self[0x1ec] + 1 < iVar3 >> 2) {
        local_74 = self[0x1ec] + 1;
        local_6c = **(int **)(local_74 * 4 + self[0x1ad]);
      }
      if (((iVar2 < 1) || (local_60 <= local_6c - tsDictionaryList)) &&
         ((-1 < iVar2 || (local_60 <= tsDictionaryList - local_64)))) {
        local_78 = self[0x1ec];
        **(int **)(local_78 * 4 + self[0x1ad]) = tsDictionaryList;
        TEAViewWindows::CreatePanes(self,6);
      }
    }
  }
  local_c = &g_emptyStringData;
  unused = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  pt.x = *param_3;
  pt.y = param_3[1];
  ClientToScreen(*(HWND *)(*self + 0xc),&pt);
  id = 0;
  while( true ) {
    tsDictionaryList = self[0x1ae] - self[0x1ad];
    if (tsDictionaryList < 0) {
      tsDictionaryList = tsDictionaryList + 3;
    }
    if ((uint)(tsDictionaryList >> 2) <= id) break;
    local_84 = **(int **)(*(int *)(id * 4 + self[0x1ad]) + 4);
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a30(local_84,&rect);
    pRect = &rect;
    pLVar7 = &local_f8;
    for (tsDictionaryList = 4; tsDictionaryList != 0; tsDictionaryList = tsDictionaryList + -1) {
      *pLVar7 = pRect->left;
      pRect = (tagRECT *)((int)pRect + ((uint)bVar8 * -2 + 1) * 4);
      pLVar7 = pLVar7 + (uint)bVar8 * -2 + 1;
    }
    if ((((pt.x < local_f8) || (local_f0 <= pt.x)) || (pt.y < local_f4)) ||
       (local_ec <= pt.y)) {
      local_85 = '\0';
    }
    else {
      local_85 = '\x01';
    }
    if (local_85 != '\0') {
      ehContext = 0x2c;
      index = id;
      tsDictionaryList = TEAAppWindows::GetDictionaryList(self[0xe]);
      TSDictionaryList::GetDescription(result2,tsDictionaryList,index);
      ehDtorCount = ehDtorCount + 1;
      std::string::operator_assign((int)text,(int)result2);
      ehDtorCount = ehDtorCount + -1;
      if (str2 != 0) {
        if (*(int *)(str2 + -0xc) != -1) {
          strRep = (int *)(str2 + -0xc);
          if (strRep == &g_nullStringRep) {
            tsDictionaryList = 1;
          }
          else if (strRep == &g_nullStringRep) {
            tsDictionaryList = 1;
          }
          else {
            *strRep = *strRep + -1;
            tsDictionaryList = *strRep + 1;
          }
          if (tsDictionaryList != 0) goto LAB_0045a027;
        }
        unused10 = str2 + -0xc;
        unused9 = str2 + -0xc;
        operator_delete();
        unused8 = 0;
        unused7 = result2;
        str2 = 0;
      }
LAB_0045a027:
      ehContext = 0x20;
    }
    id = id + 1;
  }
  if ((*(int *)(local_c + -4) == 0) &&
     (local_9c = FUN_004a7590(*self,(undefined*)MyScroller::ScrollToChild), local_9c != 0)) {
    ehContext = 0x44;
    id = GetDlgCtrlID(*(HWND *)(local_9c + 0xc));
    TEAAppWindows::LoadResourceString((int)result,self[0xe],id);
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign((int)text,(int)result);
    ehDtorCount = ehDtorCount + -1;
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        strRep2 = (int *)(str + -0xc);
        if (strRep2 == &g_nullStringRep) {
          tsDictionaryList = 1;
        }
        else if (strRep2 == &g_nullStringRep) {
          tsDictionaryList = 1;
        }
        else {
          *strRep2 = *strRep2 + -1;
          tsDictionaryList = *strRep2 + 1;
        }
        if (tsDictionaryList != 0) goto LAB_0045a163;
      }
      unused6 = str + -0xc;
      unused5 = str + -0xc;
      operator_delete();
      unused4 = 0;
      unused3 = result;
      str = 0;
    }
LAB_0045a163:
    ehContext = 0x20;
  }
  TEAViewWindows::ShowTooltip((int)self,(int)text,*(undefined4 *)(*self + 0xc),y2,
               (undefined2 *)param_3,0);
  tsDictionaryList = FUN_004a5774(*self);
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = (int *)(local_c + -0xc);
      if (strRep == &g_nullStringRep) {
        tsDictionaryList = 1;
      }
      else if (strRep == &g_nullStringRep) {
        tsDictionaryList = 1;
      }
      else {
        *strRep = *strRep + -1;
        tsDictionaryList = *strRep + 1;
      }
      if (tsDictionaryList != 0) goto LAB_0045a208;
    }
    unused2 = local_c + -0xc;
    operator_delete();
    tsDictionaryList = 0;
  }
LAB_0045a208:
  *sehChainHead = local_58;
  return tsDictionaryList;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a220  TEAViewWindows::OnSplitterButtonUp   (48 bytes)   [rtti:vtable virtual slot 50]
//   vtable slot 50; end of a splitter drag: saves the pane layout
void __cdecl TEAViewWindows::OnSplitterButtonUp(int *self)

{
  if (0 < self[0x1ec]) {
    self[0x1ec] = 0;
    ReleaseCapture();
    TEAViewWindows::SavePanes(self);
  }
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a250  TEAViewWindows::OnPaneLabelDoubleClick   (34 bytes)   [rtti:vtable virtual slot 51]
//   vtable slot 51; double-click on a pane label: dictionary properties
void __cdecl TEAViewWindows::OnPaneLabelDoubleClick(int *self,undefined4 param_2,int *window)

{
  int *piVar1;
  
  piVar1 = ClientRectToScreen(self,window);
  if (piVar1 != (int *)0x0) {
    TEAViewWindows::ShowDictionaryProperties((int)self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a274  TEAViewWindows::OnPaneLabelClick   (46 bytes)   [rtti:vtable virtual slot 52]
//   vtable slot 52; click on a pane label: focuses its list
void __cdecl TEAViewWindows::OnPaneLabelClick(int *self,undefined4 param_2,int *window)

{
  int *pane;
  
  pane = ClientRectToScreen(self,window);
  if (pane != (int *)0x0) {
    TEAViewWindows::FocusPaneList((int)self,(int)pane);
  }
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a2a4  TEAViewWindows::OnPaneLabelContextMenu   (340 bytes)   [rtti:vtable virtual slot 53]
//   vtable slot 53; right-click on a pane label: the pane's context menu
void __cdecl TEAViewWindows::OnPaneLabelContextMenu(int *self,undefined4 param_2,LPPOINT point)

{
  int *piVar1;
  HWND hWnd;
  int iVar2;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 sehPrevFrame;
  undefined4 menu [3];
  undefined4 local_10;
  HMENU hMenu;
  
  __InitExceptBlockLDTC(0x4f95a8);
  piVar1 = ClientRectToScreen(self,&point->x);
  if (piVar1 != (int *)0x0) {
    DAT_0051ac88 = 0x19f0;
    (*(undefined4 *)&g_contextMenuId) = 0x19f0;
    iVar3 = 1;
    piVar1 = OWL::TMenu::TMenu_497b98(menu,*(HINSTANCE *)(*(int *)(*self + 0x6c) + 0xc),(LPCSTR)0x19f0);
    OWL::TPopupMenu::TPopupMenu_497fac(&local_10,piVar1,iVar3);
    OWL::TMenu::_dtor(menu,2);
    ClientToScreen(*(HWND *)(*self + 0xc),point);
    iVar3 = GetSystemMetrics(0);
    if (point->x < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = point->x;
    }
    if (iVar2 < iVar3) {
      if (point->x < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = point->x;
      }
    }
    else {
      iVar3 = GetSystemMetrics(0);
    }
    point->x = iVar3;
    iVar3 = GetSystemMetrics(1);
    if (point->y < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = point->y;
    }
    if (iVar2 < iVar3) {
      if (point->y < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = point->y;
      }
    }
    else {
      iVar3 = GetSystemMetrics(1);
    }
    point->y = iVar3;
    hWnd = (HWND)TEAViewWindows::GetPopupOwner(self);
    TrackPopupMenu(hMenu,2,point->x,point->y,0,hWnd,(RECT *)0x0);
    OWL::TMenu::_dtor(&local_10,0);
  }
  FUN_004a5774(*self);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a3f8  TEAViewWindows::EvSize   (49 bytes)   [rtti:vtable virtual slot 40]
//   vtable slot 40 (introduced by PropertiesViewWindows); the window was resized (repositions the moveable controls)
void __cdecl TEAViewWindows::EvSize(int *self,int param_2)

{
  if ((param_2 == 0) || (param_2 == 2)) {
    TEAViewWindows::CreatePanes(self,5);
  }
  PropertiesViewWindows::EvSize(self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a42c  TEAViewWindows::OnDropFiles   (153 bytes)   [rtti:vtable virtual slot 54]
//   vtable slot 54; dictionaries dropped on the window: opens them
void __cdecl TEAViewWindows::OnDropFiles(int *self)

{
  int iVar1;
  uint *puVar2;
  undefined *fileHistory;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  while( true ) {
    uVar4 = FUN_004a87e0();
    if (uVar4 <= uVar5) break;
    iVar1 = FUN_004a87f8();
    puVar2 = (uint *)operator_new_array();
    FUN_004a87c4();
    *(undefined1 *)((int)puVar2 + iVar1) = 0;
    TEAAppWindows::OpenDictionaries(self[0xe],puVar2);
    fileHistory = GetFileHistory(self[0xe],self[0x18]);
    FileHistory::Add((int)fileHistory,puVar2);
    TEAViewWindows::RestartSearch(self);
    operator_delete_array();
    uVar5 = uVar5 + 1;
  }
  FUN_004a8814();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a4c8  TEAViewWindows::OnSysColorChange   (191 bytes)   [rtti:vtable virtual slot 55]
//   vtable slot 55; system colours changed: recreates the brushes
void __cdecl TEAViewWindows::OnSysColorChange(int self)

{
  undefined4 *teaQuickReferenceViewWindows;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f95d8);
  if (*(uint **)(self + 0xc7c) != (uint *)0x0) {
    OWL::TBrush::_dtor(*(uint **)(self + 0xc7c),3);
  }
  *(undefined4 *)(self + 0xc7c) = 0;
  uVar4 = 0;
  while( true ) {
    iVar2 = *(int *)(self + 0xc88) - *(int *)(self + 0xc84);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar4) break;
    piVar3 = (int *)(*(int *)(self + 0xc84) + uVar4 * 4);
    if (*piVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*piVar3 + 8);
    }
    teaQuickReferenceViewWindows = FUN_004dd744(*piVar3,iVar2,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (teaQuickReferenceViewWindows != (undefined4 *)0x0) {
      TEAQuickReferenceViewWindows::DeleteBrush((int)teaQuickReferenceViewWindows);
    }
    uVar4 = uVar4 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a61c  TEAViewWindows::EvCtlColor   (468 bytes)   [rtti:vtable virtual slot 39; function defined from vtable-slot]
//   vtable slot 39 (introduced by PropertiesViewWindows); colours for a child control (WM_CTLCOLOR*: static, edit, button)
undefined4 __cdecl TEAViewWindows::EvCtlColor(int *self,HDC hdc,HWND hWnd,int param_4)

{
  HWND hWnd2;
  DWORD color3;
  int iVar3;
  int iVar4;
  undefined4 *sehChainHead;
  COLORREF color;
  COLORREF unused;
  int unused2;
  int *local_40;
  COLORREF color2;
  undefined4 local_38;
  int profile;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  uint *local_c;
  uint *brush;
  
  __InitExceptBlockLDTC(0x4f9618);
  profile = TEAAppWindows::GetProfile(self[0xe]);
  local_38 = PropertiesViewWindows::EvCtlColor(self,hdc,hWnd,param_4);
  if (param_4 == 1) {
    if ((*(HWND *)(self[0xb6] + 0xc) != hWnd) && (*(HWND *)(self[0x143] + 0xc) != hWnd))
    {
      SetTextColor(hdc,*(COLORREF *)(profile + 0x30));
    }
  }
  else if (param_4 == 6) {
    iVar4 = 0;
    while( true ) {
      iVar3 = self[0x1ae] - self[0x1ad];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      if (iVar3 >> 2 <= iVar4) break;
      if ((*(HWND *)(**(int **)(*(int *)(iVar4 * 4 + self[0x1ad]) + 4) + 0xc) == hWnd) &&
         (SelectObject(hdc,(HGDIOBJ)self[0x31c]), iVar4 == self[0x1b4])) {
        local_40 = *(int **)(*(int *)(iVar4 * 4 + self[0x1ad]) + 8);
        unused2 = iVar4;
        hWnd2 = GetFocus();
        if (hWnd2 == *(HWND *)(*local_40 + 0xc)) {
          color3 = GetSysColor(9);
          SetTextColor(hdc,color3);
          color2 = GetSysColor(2);
        }
        else {
          color3 = GetSysColor(0x13);
          SetTextColor(hdc,color3);
          color2 = GetSysColor(3);
        }
        SetBkColor(hdc,color2);
        brush = (uint *)self[799];
        if (brush != (uint *)0x0) {
          ehContext = 0x14;
          OWL::TBrush::_dtor(brush,3);
          ehContext = 8;
        }
        local_c = (uint *)operator_new();
        if (local_c != (uint *)0x0) {
          ehContext = 0x2c;
          unused = color2;
          color = color2;
          FUN_004ab84c(local_c,&color,'\x01');
          ehContext = 0x20;
        }
        self[799] = (int)local_c;
        local_38 = *(undefined4 *)self[799];
      }
      iVar4 = iVar4 + 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return local_38;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a7f0  TEAViewWindows::LoadPrintMargins   (1533 bytes)   [analysis]
//   reads PrintingMarginUnits and the four margins (defaults from the locale's measurement system)
void __cdecl TEAViewWindows::LoadPrintMargins(int self)

{
  uint uVar1;
  int *out;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  char cVar4;
  int create;
  int tryLocalMachine;
  undefined4 *out2;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  CHAR lcData [2];
  undefined1 *unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  int local_a0;
  undefined1 *unused5;
  undefined4 unused6;
  int unused7;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 valueName [8];
  int str;
  undefined1 valueName2 [8];
  int str2;
  undefined1 valueName3 [8];
  int str3;
  undefined1 valueName4 [8];
  int str4;
  undefined1 valueName5 [8];
  int str5;
  undefined1 local_1c [8];
  int str6;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4f96cc);
  ehContext = 0x14;
  tryLocalMachine = 0;
  create = 0;
  GetProfileKeyPath((int)local_1c);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_1c,create,tryLocalMachine);
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      out = (int *)(str6 + -0xc);
      if (out == &g_nullStringRep) {
        create = 1;
      }
      else if (out == &g_nullStringRep) {
        create = 1;
      }
      else {
        *out = *out + -1;
        create = *out + 1;
      }
      if (create != 0) goto LAB_0045a8bc;
    }
    unused7 = str6 + -0xc;
    operator_delete();
    unused6 = 0;
    unused5 = local_1c;
    str6 = 0;
  }
LAB_0045a8bc:
  out = &local_a0;
  local_a0 = 0;
  ehContext = 0x2c;
  std::string::string_from_cstr((int)valueName5,(uint *)"PrintingMarginUnits");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName5,out);
  ehDtorCount = ehDtorCount + -1;
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      out = (int *)(str5 + -0xc);
      if (out == &g_nullStringRep) {
        create = 1;
      }
      else if (out == &g_nullStringRep) {
        create = 1;
      }
      else {
        *out = *out + -1;
        create = *out + 1;
      }
      if (create != 0) goto LAB_0045a995;
    }
    unused4 = str5 + -0xc;
    unused3 = str5 + -0xc;
    operator_delete();
    unused2 = 0;
    unused = valueName5;
    str5 = 0;
  }
LAB_0045a995:
  ehContext = 8;
  if ((local_a0 == 4) || (local_a0 == 8)) {
    *(int *)(self + 0xcb4) = local_a0;
  }
  else {
    lcData[0] = '\0';
    GetLocaleInfoA(0x400,0xd,lcData,2);
    if (lcData[0] == '1') {
      *(undefined4 *)(self + 0xcb4) = 4;
    }
    else {
      *(undefined4 *)(self + 0xcb4) = 8;
    }
  }
  if (*(int *)(self + 0xcb4) == 4) {
    uVar3 = 1000;
  }
  else {
    uVar3 = 0x9ec;
  }
  out2 = &local_c0;
  ehContext = 0x44;
  std::string::string_from_cstr((int)valueName4,(uint *)"PrintingLeftMargin");
  ehDtorCount = ehDtorCount + 1;
  uVar1 = Persist::QueryDword((int)persist,(int)valueName4,out2);
  cVar4 = (uVar1 & 0xff) == 0;
  ehDtorCount = ehDtorCount + -1;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      out = (int *)(str4 + -0xc);
      if (out == &g_nullStringRep) {
        create = 1;
      }
      else if (out == &g_nullStringRep) {
        create = 1;
      }
      else {
        *out = *out + -1;
        create = *out + 1;
      }
      if (create != 0) goto LAB_0045aae5;
    }
    operator_delete();
    str4 = 0;
  }
LAB_0045aae5:
  if (cVar4 != '\0') {
    local_c0 = uVar3;
  }
  out2 = &local_c4;
  ehContext = 0x5c;
  std::string::string_from_cstr((int)valueName3,(uint *)"PrintingRightMargin");
  ehDtorCount = ehDtorCount + 1;
  uVar1 = Persist::QueryDword((int)persist,(int)valueName3,out2);
  cVar4 = (uVar1 & 0xff) == 0;
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      out = (int *)(str3 + -0xc);
      if (out == &g_nullStringRep) {
        create = 1;
      }
      else if (out == &g_nullStringRep) {
        create = 1;
      }
      else {
        *out = *out + -1;
        create = *out + 1;
      }
      if (create != 0) goto LAB_0045abc8;
    }
    operator_delete();
    str3 = 0;
  }
LAB_0045abc8:
  if (cVar4 != '\0') {
    local_c4 = uVar3;
  }
  out2 = &local_c8;
  ehContext = 0x74;
  std::string::string_from_cstr((int)valueName2,(uint *)"PrintingTopMargin");
  ehDtorCount = ehDtorCount + 1;
  uVar1 = Persist::QueryDword((int)persist,(int)valueName2,out2);
  cVar4 = (uVar1 & 0xff) == 0;
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      out = (int *)(str2 + -0xc);
      if (out == &g_nullStringRep) {
        create = 1;
      }
      else if (out == &g_nullStringRep) {
        create = 1;
      }
      else {
        *out = *out + -1;
        create = *out + 1;
      }
      if (create != 0) goto LAB_0045acab;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0045acab:
  if (cVar4 != '\0') {
    local_c8 = uVar3;
  }
  out2 = &local_cc;
  ehContext = 0x8c;
  std::string::string_from_cstr((int)valueName,(uint *)"PrintingBottomMargin");
  ehDtorCount = ehDtorCount + 1;
  uVar1 = Persist::QueryDword((int)persist,(int)valueName,out2);
  cVar4 = (uVar1 & 0xff) == 0;
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      out = (int *)(str + -0xc);
      if (out == &g_nullStringRep) {
        create = 1;
      }
      else if (out == &g_nullStringRep) {
        create = 1;
      }
      else {
        *out = *out + -1;
        create = *out + 1;
      }
      if (create != 0) goto LAB_0045ad8e;
    }
    operator_delete();
    str = 0;
  }
LAB_0045ad8e:
  if (cVar4 != '\0') {
    local_cc = uVar3;
  }
  *(undefined4 *)(self + 0xcb8) = local_c0;
  *(undefined4 *)(self + 0xcc0) = local_c4;
  *(undefined4 *)(self + 0xcbc) = local_c8;
  *(undefined4 *)(self + 0xcc4) = local_cc;
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045adf0  TEAViewWindows::SaveSettings   (2562 bytes)   [analysis]
//   writes the window settings (QuickReference, StartupTips, WindowTopMost, PaneOrientation, printing margins) and the file history
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::SaveSettings(int self)

{
  undefined4 *puVar1;
  undefined *fileHistory;
  int *piVar3;
  uint uVar4;
  undefined4 *sehChainHead;
  int create;
  int tryLocalMachine;
  undefined4 sehPrevFrame;
  undefined1 valueName [8];
  int str;
  undefined1 valueName2 [8];
  int str2;
  undefined1 valueName3 [8];
  int str3;
  undefined1 valueName4 [8];
  int str4;
  undefined1 valueName5 [8];
  int str5;
  undefined1 valueName6 [8];
  int str6;
  undefined1 valueName7 [8];
  int str7;
  undefined1 valueName8 [8];
  int str8;
  undefined1 valueName9 [8];
  int str9;
  undefined1 local_1c [8];
  int str10;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4f982c);
  tryLocalMachine = 0;
  create = 1;
  GetProfileKeyPath((int)local_1c);
  Persist::Persist(persist,(int)local_1c,create,tryLocalMachine);
  if (str10 != 0) {
    if (*(int *)(str10 + -0xc) != -1) {
      piVar3 = (int *)(str10 + -0xc);
      if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        create = *piVar3 + 1;
      }
      if (create != 0) goto LAB_0045aed8;
    }
    operator_delete();
    str10 = 0;
  }
LAB_0045aed8:
  uVar4 = 0;
  while( true ) {
    create = *(int *)(self + 0xc88) - *(int *)(self + 0xc84);
    if (create < 0) {
      create = create + 3;
    }
    if ((uint)(create >> 2) <= uVar4) break;
    piVar3 = (int *)(uVar4 * 4 + *(int *)(self + 0xc84));
    if (*piVar3 == 0) {
      create = 0;
    }
    else {
      create = *(int *)(*piVar3 + 8);
    }
    puVar1 = FUN_004dd744(*piVar3,create,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (puVar1 != (undefined4 *)0x0) {
      TEAQuickReferenceViewWindows::IsShown((int)puVar1);
      std::string::string_from_cstr((int)valueName9,(uint *)"QuickReference");
      Persist::SetDword((int)persist,(int)valueName9);
      if (str9 != 0) {
        if (*(int *)(str9 + -0xc) != -1) {
          piVar3 = (int *)(str9 + -0xc);
          if (piVar3 == &g_nullStringRep) {
            create = 1;
          }
          else if (piVar3 == &g_nullStringRep) {
            create = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            create = *piVar3 + 1;
          }
          if (create != 0) goto LAB_0045b019;
        }
        operator_delete();
        str9 = 0;
      }
    }
LAB_0045b019:
    piVar3 = (int *)(uVar4 * 4 + *(int *)(self + 0xc84));
    if (*piVar3 == 0) {
      create = 0;
    }
    else {
      create = *(int *)(*piVar3 + 8);
    }
    puVar1 = FUN_004dd744(*piVar3,create,(int *)&DAT_0040299c,(int *)&DAT_0045b7f4,0);
    if (puVar1 != (undefined4 *)0x0) {
      TEAStartupTipsViewWindows::IsShowAtStartup((int)puVar1);
      std::string::string_from_cstr((int)valueName8,(uint *)"StartupTips");
      Persist::SetDword((int)persist,(int)valueName8);
      if (str8 != 0) {
        if (*(int *)(str8 + -0xc) != -1) {
          piVar3 = (int *)(str8 + -0xc);
          if (piVar3 == &g_nullStringRep) {
            create = 1;
          }
          else if (piVar3 == &g_nullStringRep) {
            create = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            create = *piVar3 + 1;
          }
          if (create != 0) goto LAB_0045b14a;
        }
        operator_delete();
        str8 = 0;
      }
    }
LAB_0045b14a:
    uVar4 = uVar4 + 1;
  }
  std::string::string_from_cstr((int)valueName7,(uint *)"WindowTopMost");
  Persist::SetDword((int)persist,(int)valueName7);
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      piVar3 = (int *)(str7 + -0xc);
      if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        create = *piVar3 + 1;
      }
      if (create != 0) goto LAB_0045b23d;
    }
    operator_delete();
    str7 = 0;
  }
LAB_0045b23d:
  std::string::string_from_cstr((int)valueName6,(uint *)"PaneOrientation");
  Persist::SetDword((int)persist,(int)valueName6);
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      piVar3 = (int *)(str6 + -0xc);
      if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        create = *piVar3 + 1;
      }
      if (create != 0) goto LAB_0045b31a;
    }
    operator_delete();
    str6 = 0;
  }
LAB_0045b31a:
  fileHistory = GetFileHistory(*(int *)(self + 0x38),*(int *)(self + 0x60));
  FileHistory::Save((int)fileHistory);
  std::string::string_from_cstr((int)valueName5,(uint *)"PrintingMarginUnits");
  Persist::SetDword((int)persist,(int)valueName5);
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      piVar3 = (int *)(str5 + -0xc);
      if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        create = *piVar3 + 1;
      }
      if (create != 0) goto LAB_0045b40e;
    }
    operator_delete();
    str5 = 0;
  }
LAB_0045b40e:
  std::string::string_from_cstr((int)valueName4,(uint *)"PrintingLeftMargin");
  Persist::SetDword((int)persist,(int)valueName4);
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      piVar3 = (int *)(str4 + -0xc);
      if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        create = *piVar3 + 1;
      }
      if (create != 0) goto LAB_0045b4eb;
    }
    operator_delete();
    str4 = 0;
  }
LAB_0045b4eb:
  std::string::string_from_cstr((int)valueName3,(uint *)"PrintingRightMargin");
  Persist::SetDword((int)persist,(int)valueName3);
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      piVar3 = (int *)(str3 + -0xc);
      if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        create = *piVar3 + 1;
      }
      if (create != 0) goto LAB_0045b5d1;
    }
    operator_delete();
    str3 = 0;
  }
LAB_0045b5d1:
  std::string::string_from_cstr((int)valueName2,(uint *)"PrintingTopMargin");
  Persist::SetDword((int)persist,(int)valueName2);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      piVar3 = (int *)(str2 + -0xc);
      if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        create = *piVar3 + 1;
      }
      if (create != 0) goto LAB_0045b6c9;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0045b6c9:
  std::string::string_from_cstr((int)valueName,(uint *)"PrintingBottomMargin");
  Persist::SetDword((int)persist,(int)valueName);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      piVar3 = (int *)(str + -0xc);
      if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        create = *piVar3 + 1;
      }
      if (create != 0) goto LAB_0045b7c1;
    }
    operator_delete();
    str = 0;
  }
LAB_0045b7c1:
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b89c  TEAViewWindows::SavePanes   (926 bytes)   [analysis]
//   writes the "Panes" value: the layout of every pane
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::SavePanes(int *self)

{
  uint pos;
  char *len;
  int *strRep;
  uint uVar4;
  undefined4 *sehChainHead;
  int create;
  int tryLocalMachine;
  uint local_c4 [5];
  LONG rect [2];
  int local_a8;
  int local_a4;
  undefined4 unused;
  undefined1 *unused2;
  int unused3;
  undefined1 *unused4;
  int unused5;
  int unused6;
  undefined1 *unused7;
  undefined4 unused8;
  int unused9;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_3c [8];
  int str;
  undefined1 value [8];
  int str2;
  undefined1 valueName [8];
  int str3;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4f9994);
  ehContext = 0x14;
  tryLocalMachine = 0;
  create = 1;
  GetProfileKeyPath((int)local_3c);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_3c,create,tryLocalMachine);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_0045b959;
    }
    unused9 = str + -0xc;
    operator_delete();
    unused8 = 0;
    unused7 = local_3c;
    str = 0;
    unused = 0;
  }
LAB_0045b959:
  ehContext = 8;
  GetWindowRectInParent(rect,self);
  if (self[0x29] != 0) {
    local_a4 = local_a8;
  }
  unused6 = local_a4 + self[0x1ed];
  ehContext = 0x2c;
  std::string::string_from_cstr((int)valueName,(uint *)"Panes");
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  sprintf((undefined1 *)local_c4,&DAT_004f76b2 /* "%c%d" */);
  uVar4 = *(uint *)(str3 + -4);
  len = strlen(local_c4);
  std::string::replace((int)valueName,uVar4,0,(uint)local_c4,(uint)len,0,(uint)len);
  sprintf((undefined1 *)local_c4,&DAT_004f75f3);
  ehContext = 0x38;
  std::string::string_from_cstr((int)value,local_c4);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  uVar4 = 0;
  while( true ) {
    create = self[0x1ae] - self[0x1ad];
    if (create < 0) {
      create = create + 3;
    }
    if ((uint)(create >> 2) <= uVar4) break;
    sprintf((undefined1 *)local_c4,&DAT_004f782b /* ",%d" */);
    pos = *(uint *)(str2 + -4);
    len = strlen(local_c4);
    std::string::replace((int)value,pos,0,(uint)local_c4,(uint)len,0,(uint)len);
    uVar4 = uVar4 + 1;
  }
  Persist::SetString((int)persist,(int)valueName,(int)value);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_0045bb99;
    }
    unused5 = str2 + -0xc;
    operator_delete();
    unused4 = value;
    str2 = 0;
  }
LAB_0045bb99:
  ehContext = 8;
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_0045bc18;
    }
    unused3 = str3 + -0xc;
    operator_delete();
    unused2 = valueName;
    str3 = 0;
  }
LAB_0045bc18:
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bc3c  TEAViewWindows::SaveQueryHistory   (2058 bytes)   [analysis]
//   writes RangeShortest/RangeLongest and the recent queries (%s%d)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::SaveQueryHistory(int *self)

{
  int iVar1;
  int *out;
  uint *strRep;
  undefined4 *sehChainHead;
  int iVar4;
  int tryLocalMachine;
  undefined1 *value;
  uint local_1f8 [15];
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  undefined1 *unused6;
  undefined4 unused7;
  uint *unused8;
  uint *unused9;
  undefined1 *unused10;
  undefined4 unused11;
  int unused12;
  int unused13;
  undefined1 *unused14;
  undefined4 unused15;
  int unused16;
  int unused17;
  undefined1 *unused18;
  undefined4 unused19;
  int unused20;
  int unused21;
  int *strRep2;
  undefined1 *unused22;
  undefined4 unused23;
  int unused24;
  int unused25;
  int *strRep3;
  int local_fc;
  undefined1 *unused26;
  undefined4 unused27;
  int unused28;
  int unused29;
  undefined1 *unused30;
  undefined4 unused31;
  int unused32;
  int unused33;
  int local_c8;
  int local_c4;
  undefined1 *unused34;
  undefined4 unused35;
  int unused36;
  int unused37;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 valueName [8];
  int str2;
  undefined1 str [8];
  int str3;
  undefined1 pvwCombo [8];
  uint *local_64;
  undefined1 valueName2 [8];
  int str4;
  undefined1 valueName3 [8];
  int str5;
  undefined1 valueName4 [8];
  int str6;
  undefined1 valueName5 [8];
  int str7;
  undefined1 local_1c [8];
  int str8;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4f9a98);
  ehContext = 0x14;
  tryLocalMachine = 0;
  iVar4 = 1;
  GetProfileKeyPath((int)local_1c);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_1c,iVar4,tryLocalMachine);
  if (str8 != 0) {
    if (*(int *)(str8 + -0xc) != -1) {
      out = (int *)(str8 + -0xc);
      if (out == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (out == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *out = *out + -1;
        iVar4 = *out + 1;
      }
      if (iVar4 != 0) goto LAB_0045bd24;
    }
    unused37 = str8 + -0xc;
    unused36 = str8 + -0xc;
    operator_delete();
    unused35 = 0;
    unused34 = local_1c;
    str8 = 0;
    unused5 = 0;
  }
LAB_0045bd24:
  local_c4 = 1;
  local_c8 = 100;
  out = &local_c4;
  ehContext = 0x2c;
  std::string::string_from_cstr((int)valueName5,(uint *)"RangeShortest");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName5,out);
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      out = (int *)(str7 + -0xc);
      if (out == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (out == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *out = *out + -1;
        iVar4 = *out + 1;
      }
      if (iVar4 != 0) goto LAB_0045be15;
    }
    unused33 = str7 + -0xc;
    unused32 = str7 + -0xc;
    operator_delete();
    unused31 = 0;
    unused30 = valueName5;
    str7 = 0;
    unused4 = 0;
  }
LAB_0045be15:
  out = &local_c8;
  ehContext = 0x44;
  std::string::string_from_cstr((int)valueName4,(uint *)"RangeLongest");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName4,out);
  ehDtorCount = ehDtorCount + -1;
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      out = (int *)(str6 + -0xc);
      if (out == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (out == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *out = *out + -1;
        iVar4 = *out + 1;
      }
      if (iVar4 != 0) goto LAB_0045bef2;
    }
    unused29 = str6 + -0xc;
    unused28 = str6 + -0xc;
    operator_delete();
    unused27 = 0;
    unused26 = valueName4;
    str6 = 0;
    unused3 = 0;
  }
LAB_0045bef2:
  ehContext = 8;
  iVar4 = PVWEdit::GetInt(self + 0xb6);
  tryLocalMachine = PVWEdit::GetInt(self + 0x143);
  if ((iVar4 == local_c4) && (tryLocalMachine == local_c8)) goto LAB_0045c174;
  local_fc = *self;
  iVar1 = (**(code **)(*(int *)(*(int *)(local_fc + 0x6c) + 0x1b) + 0x30))();
  if (iVar1 != 6) goto LAB_0045c174;
  if ((0 < iVar4) && (iVar4 < 0x65)) {
    ehContext = 0x5c;
    std::string::string_from_cstr((int)valueName3,(uint *)"RangeShortest");
    ehDtorCount = ehDtorCount + 1;
    Persist::SetDword((int)persist,(int)valueName3);
    ehDtorCount = ehDtorCount + -1;
    if (str5 != 0) {
      if (*(int *)(str5 + -0xc) != -1) {
        strRep3 = (int *)(str5 + -0xc);
        if (strRep3 == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (strRep3 == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *strRep3 = *strRep3 + -1;
          iVar4 = *strRep3 + 1;
        }
        if (iVar4 != 0) goto LAB_0045c066;
      }
      unused25 = str5 + -0xc;
      unused24 = str5 + -0xc;
      operator_delete();
      unused23 = 0;
      unused22 = valueName3;
      str5 = 0;
      unused2 = 0;
    }
LAB_0045c066:
    ehContext = 8;
  }
  if ((tryLocalMachine < 1) || (100 < tryLocalMachine)) goto LAB_0045c174;
  ehContext = 0x74;
  std::string::string_from_cstr((int)valueName2,(uint *)"RangeLongest");
  ehDtorCount = ehDtorCount + 1;
  Persist::SetDword((int)persist,(int)valueName2);
  ehDtorCount = ehDtorCount + -1;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep2 = (int *)(str4 + -0xc);
      if (strRep2 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        iVar4 = *strRep2 + 1;
      }
      if (iVar4 != 0) goto LAB_0045c16b;
    }
    unused21 = str4 + -0xc;
    unused20 = str4 + -0xc;
    operator_delete();
    unused19 = 0;
    unused18 = valueName2;
    str4 = 0;
    unused = 0;
  }
LAB_0045c16b:
  ehContext = 8;
LAB_0045c174:
  iVar4 = 0;
  do {
    tryLocalMachine = (**(code **)(self[0x59] + 0x24))();
    if ((tryLocalMachine <= iVar4) || (99 < iVar4)) {
      ehDtorCount = ehDtorCount + -1;
      Persist::_dtor((int)persist,2);
      *sehChainHead = sehPrevFrame;
      return;
    }
    ehContext = 0x98;
    PVWCombo::AddToHistory((int)pvwCombo,(int)(self + 0x56),iVar4);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x8c;
    if (local_64[-1] != 0) {
      sprintf((undefined1 *)local_1f8,&DAT_004f7826 /* "%s%d" */);
      ehContext = 0xa4;
      std::string::string_from_cstr((int)str,local_64);
      ehDtorCount = ehDtorCount + 1;
      value = str;
      std::string::string_from_cstr((int)valueName,local_1f8);
      ehDtorCount = ehDtorCount + 1;
      Persist::SetString((int)persist,(int)valueName,(int)value);
      ehDtorCount = ehDtorCount + -1;
      if (str2 != 0) {
        if (*(int *)(str2 + -0xc) != -1) {
          out = (int *)(str2 + -0xc);
          if (out == &g_nullStringRep) {
            tryLocalMachine = 1;
          }
          else if (out == &g_nullStringRep) {
            tryLocalMachine = 1;
          }
          else {
            *out = *out + -1;
            tryLocalMachine = *out + 1;
          }
          if (tryLocalMachine != 0) goto LAB_0045c2c1;
        }
        unused17 = str2 + -0xc;
        unused16 = str2 + -0xc;
        operator_delete();
        unused15 = 0;
        unused14 = valueName;
        str2 = 0;
      }
LAB_0045c2c1:
      ehContext = 0x8c;
      ehDtorCount = ehDtorCount + -1;
      if (str3 != 0) {
        if (*(int *)(str3 + -0xc) != -1) {
          out = (int *)(str3 + -0xc);
          if (out == &g_nullStringRep) {
            tryLocalMachine = 1;
          }
          else if (out == &g_nullStringRep) {
            tryLocalMachine = 1;
          }
          else {
            *out = *out + -1;
            tryLocalMachine = *out + 1;
          }
          if (tryLocalMachine != 0) goto LAB_0045c360;
        }
        unused13 = str3 + -0xc;
        unused12 = str3 + -0xc;
        operator_delete();
        unused11 = 0;
        unused10 = str;
        str3 = 0;
      }
    }
LAB_0045c360:
    ehDtorCount = ehDtorCount + -1;
    if (local_64 != (uint *)0x0) {
      if (local_64[-3] != 0xffffffff) {
        strRep = local_64 + -3;
        if (strRep == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else if (strRep == &g_nullStringRep) {
          tryLocalMachine = 1;
        }
        else {
          *strRep = *strRep - 1;
          tryLocalMachine = *strRep + 1;
        }
        if (tryLocalMachine != 0) goto LAB_0045c3f6;
      }
      unused9 = local_64 + -3;
      unused8 = local_64 + -3;
      operator_delete();
      unused7 = 0;
      unused6 = pvwCombo;
      local_64 = (uint *)0x0;
    }
LAB_0045c3f6:
    ehContext = 8;
    iVar4 = iVar4 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c448  TEAViewWindows::OnListFocus   (213 bytes)   [analysis]
//   a match list gained or lost the focus: makes its pane current and updates the commands
void __cdecl TEAViewWindows::OnListFocus(int self,int list,int gained)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 <= iVar2) break;
    if (list == *(int *)(*(int *)(iVar2 * 4 + *(int *)(self + 0x6b4)) + 8)) {
      if ((gained == 1) && (iVar2 != *(int *)(self + 0x6d0))) {
        (**(code **)(*(int *)(**(int **)(*(int *)(*(int *)(self + 0x6d0) * 4 +
                                                 *(int *)(self + 0x6b4)) + 4) + 8) + 0x68))();
        *(int *)(self + 0x6d0) = iVar2;
        (**(code **)(*(int *)(**(int **)(*(int *)(iVar2 * 4 + *(int *)(self + 0x6b4)) + 4) + 8) +
                    0x68))();
        if (*(int *)(self + 100) != 2) {
          TEAViewWindows::SetSearching(self,*(int *)(self + 100));
        }
      }
      else {
        (**(code **)(*(int *)(**(int **)(*(int *)(iVar2 * 4 + *(int *)(self + 0x6b4)) + 4) + 8) +
                    0x68))();
      }
      return;
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c520  TEAViewWindows::OnListDoubleClick   (92 bytes)   [analysis]
//   double-click on a result: shows its definitions (Ctrl: in a new window)
void __cdecl TEAViewWindows::OnListDoubleClick(int *self)

{
  SHORT SVar1;
  int newWindow;
  
  if (self[0x18] == 0) {
    newWindow = TEAViewWindows::GetCurrentListLineCount((int)self);
    if (0 < newWindow) {
      newWindow = TEAAppWindows::GetProfile(self[0xe]);
      if (*(int *)(newWindow + 0x1c8) == 0) {
        SVar1 = GetKeyState(0x10);
        if (SVar1 < 0) {
          newWindow = 0x3160;
        }
        else {
          newWindow = 0x1d42;
        }
      }
      else {
        newWindow = 0x31a6;
      }
      TEAViewWindows::ShowDefinitions(self,*self,1,newWindow);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c57c  TEAViewWindows::FocusPaneList   (96 bytes)   [analysis]
//   moves the focus to the list of pane `pane`
void __cdecl TEAViewWindows::FocusPaneList(int self,int pane)

{
  uint uVar1;
  HWND hWnd;
  int iVar3;
  
  uVar1 = 0;
  while( true ) {
    iVar3 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar1) break;
    iVar3 = *(int *)(*(int *)(self + 0x6b4) + uVar1 * 4);
    if (*(int *)(iVar3 + 4) == pane) {
      hWnd = GetFocus();
      if (hWnd == *(HWND *)(**(int **)(iVar3 + 8) + 0xc)) {
        return;
      }
      SetFocus(*(HWND *)(**(int **)(iVar3 + 8) + 0xc));
      return;
    }
    uVar1 = uVar1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c5dc  TEAViewWindows::Cmd12690   (19 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(12690)
void __cdecl TEAViewWindows::Cmd12690(int *self)

{
  TEAViewWindows::TrackContextMenu(self,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c5f0  TEAViewWindows::TrackContextMenu   (228 bytes)   [analysis]
//   shows the results context menu
void __cdecl TEAViewWindows::TrackContextMenu(int *self,UINT flags)

{
  int *piVar1;
  HWND hWnd;
  undefined4 *sehChainHead;
  int iVar2;
  tagPOINT pt;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 menu [3];
  undefined4 local_10;
  HMENU hMenu;
  
  __InitExceptBlockLDTC(0x4f9b98);
  ehContext = 0x14;
  iVar2 = 1;
  DAT_0051ac88 = 0x31ce;
  (*(undefined4 *)&g_contextMenuId) = 0x31ce;
  piVar1 = OWL::TMenu::TMenu_497b98(menu,*(HINSTANCE *)(*(int *)(*self + 0x6c) + 0xc),(LPCSTR)0x31ce);
  ehDtorCount = ehDtorCount + 1;
  OWL::TPopupMenu::TPopupMenu_497fac(&local_10,piVar1,iVar2);
  ehDtorCount = ehDtorCount + 1;
  OWL::TMenu::_dtor(menu,2);
  ehContext = 8;
  pt.x = 0;
  pt.y = 0;
  ClientToScreen(*(HWND *)(self[0x84] + 0xc),&pt);
  hWnd = (HWND)TEAViewWindows::GetPopupOwner(self);
  TrackPopupMenu(hMenu,flags,pt.x,pt.y,0,hWnd,(RECT *)0x0);
  ehDtorCount = ehDtorCount + -2;
  OWL::TMenu::_dtor(&local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c6d4  TEAViewWindows::SetSearching   (1253 bytes, 2 ranges)   [analysis]
//   starts or stops searching: updates the Stop/Resume and Word Search / Full Text Search captions, deletes the engines when stopping, saves the settings
void __cdecl TEAViewWindows::SetSearching(int self,int searching)

{
  char *pcVar1;
  int dictList;
  undefined4 *puVar3;
  int dictIndex;
  int *piVar5;
  uint id;
  undefined4 *sehChainHead;
  int pane;
  int view;
  undefined4 sehPrevFrame;
  undefined1 local_28 [8];
  int str;
  undefined1 local_18 [8];
  int str2;
  int tsDictionaryDefinitionSearchIndexed;
  
  __InitExceptBlockLDTC(0x4f9be8);
  if (searching < 4) {
    if (searching == 2) {
      pcVar1 = "&Stop";
    }
    else if (searching == 3) {
      pcVar1 = "Re&sume";
    }
    else if (*(int *)(self + 0x690) == 0) {
      pcVar1 = "Word &Search";
    }
    else {
      pcVar1 = "Full Text &Search";
    }
    FUN_004a7780(*(int *)(self + 0x210),(uint *)pcVar1);
  }
  if ((searching != *(int *)(self + 100)) && (*(int *)(self + 100) = searching, searching < 4)) {
    (**(code **)(*(int *)(*(int *)(self + 0x210) + 8) + 0x60))();
    (**(code **)(*(int *)(*(int *)(self + 0x158) + 8) + 0x60))();
    (**(code **)(*(int *)(*(int *)(self + 0x2d8) + 8) + 0x60))();
    (**(code **)(*(int *)(*(int *)(self + 0x50c) + 8) + 0x60))();
    if (*(int **)(self + 0xca8) == (int *)0x0) {
      FUN_004a8278();
      (**(code **)(*(int *)(**(int **)(self + 0x68c) + 8) + 0x60))();
    }
    else {
      (**(code **)(*(int *)(**(int **)(self + 0xca8) + 8) + 0x60))();
    }
    id = 0;
    while( true ) {
      dictIndex = *(int *)(self + 0xc88) - *(int *)(self + 0xc84);
      if (dictIndex < 0) {
        dictIndex = dictIndex + 3;
      }
      if ((uint)(dictIndex >> 2) <= id) break;
      piVar5 = (int *)(id * 4 + *(int *)(self + 0xc84));
      if (*piVar5 == 0) {
        dictIndex = 0;
      }
      else {
        dictIndex = *(int *)(*piVar5 + 8);
      }
      piVar5 = FUN_004dd744(*piVar5,dictIndex,(int *)&DAT_0040299c,(int *)&DAT_00406af0,0);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*(int *)(*piVar5 + 8) + 0x60))();
      }
      id = id + 1;
    }
  }
  switch(*(undefined4 *)(self + 100)) {
  case 0:
    TEAProgressBar::StartDictionary((int *)(self + 0x6d4),0,0,0,0);
    break;
  case 1:
    InputEngine::_dtor(*(int *)(self + 0x6c),3);
    tsDictionaryDefinitionSearchIndexed = *(int *)(self + 0x70);
    if (tsDictionaryDefinitionSearchIndexed != 0) {
      TSDictionaryDefinitionSearchIndexed::_dtor(tsDictionaryDefinitionSearchIndexed,3);
    }
    TSDictionaryDefinitionSearchSequential::_dtor(*(int *)(self + 0x74),3);
    *(undefined4 *)(self + 0x6c) = 0;
    *(undefined4 *)(self + 0x70) = 0;
    *(undefined4 *)(self + 0x74) = 0;
    *(undefined4 *)(self + 0x68) = 0xffffffff;
  case 3:
    view = 0;
    pane = 0;
    dictIndex = *(int *)(self + 0x6d0);
    dictList = TEAAppWindows::GetDictionaryList(*(int *)(self + 0x38));
    TEAProgressBar::StartDictionary((int *)(self + 0x6d4),dictList,dictIndex,pane,view);
    if (*(int *)(self + 100) == 1) {
      id = 0x3318;
    }
    else {
      id = 0x136a;
    }
    dictIndex = *(int *)(self + 0x38);
    TEAAppWindows::LoadResourceString((int)local_18,dictIndex,id);
    TEAAppWindows::SetStatusText(dictIndex,(int)local_18);
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        piVar5 = (int *)(str2 + -0xc);
        if (piVar5 == &g_nullStringRep) {
          dictIndex = 1;
        }
        else if (piVar5 == &g_nullStringRep) {
          dictIndex = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          dictIndex = *piVar5 + 1;
        }
        if (dictIndex != 0) break;
      }
      operator_delete();
    }
    break;
  case 2:
    dictIndex = *(int *)(self + 0x38);
    TEAAppWindows::LoadResourceString((int)local_28,dictIndex,0x1360);
    TEAAppWindows::SetStatusText(dictIndex,(int)local_28);
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        piVar5 = (int *)(str + -0xc);
        if (piVar5 == &g_nullStringRep) {
          dictIndex = 1;
        }
        else if (piVar5 == &g_nullStringRep) {
          dictIndex = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          dictIndex = *piVar5 + 1;
        }
        if (dictIndex != 0) break;
      }
      operator_delete();
    }
    break;
  case 4:
    id = 0;
    while( true ) {
      dictIndex = *(int *)(self + 0xc88) - *(int *)(self + 0xc84);
      if (dictIndex < 0) {
        dictIndex = dictIndex + 3;
      }
      if ((uint)(dictIndex >> 2) <= id) break;
      if (*(int *)(id * 4 + *(int *)(self + 0xc84)) != 0) {
        piVar5 = (int *)(id * 4 + *(int *)(self + 0xc84));
        if (*piVar5 == 0) {
          dictIndex = 0;
        }
        else {
          dictIndex = *(int *)(*piVar5 + 8);
        }
        puVar3 = FUN_004dd744(*piVar5,dictIndex,(int *)&DAT_0040299c,(int *)&DAT_00402910,0);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)(puVar3[3] + 0x90))();
        }
        (**(code **)(*(int *)(*(int *)(id * 4 + *(int *)(self + 0xc84)) + 8) + 0x24))();
      }
      id = id + 1;
    }
    TEAViewWindows::SaveSettings(self);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cbd0  TEAViewWindows::ShowQuickReference   (298 bytes)   [analysis]
//   opens the Quick Reference window (or brings it to the front)
int * __cdecl TEAViewWindows::ShowQuickReference(undefined4 *result,int self)

{
  int iVar1;
  int *pos;
  uint uVar3;
  undefined4 *sehChainHead;
  int value;
  uint unused;
  int *local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int *teaQuickReferenceViewWindows;
  
  __InitExceptBlockLDTC(0x4f9c48);
  local_30 = (int *)0x0;
  uVar3 = 0;
  while( true ) {
    iVar1 = result[0x322] - result[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    pos = (int *)(result[0x321] + uVar3 * 4);
    if (*pos == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*pos + 8);
    }
    unused = uVar3;
    local_30 = FUN_004dd744(*pos,iVar1,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (local_30 != (int *)0x0) break;
    uVar3 = uVar3 + 1;
  }
  if (local_30 == (int *)0x0) {
    teaQuickReferenceViewWindows = (int *)operator_new();
    if (teaQuickReferenceViewWindows != (int *)0x0) {
      ehContext = 0x14;
      TEAQuickReferenceViewWindows::TEAQuickReferenceViewWindows(teaQuickReferenceViewWindows,0,result,result[0xe],self);
      ehContext = 8;
    }
    local_30 = teaQuickReferenceViewWindows;
    (**(code **)(teaQuickReferenceViewWindows[3] + 0xc))();
    if (local_30 == (int *)0x0) {
      value = 0;
    }
    else {
      value = *local_30;
    }
    pos = (int *)result[0x322];
    if (pos == (int *)result[0x326]) {
      std::vector_ptr::insert_aux_452ef8((int)(result + 800),pos,&value);
    }
    else {
      *pos = value;
      result[0x322] = result[0x322] + 4;
    }
  }
  (**(code **)(local_30[3] + 0x3c))();
  *sehChainHead = sehPrevFrame;
  return local_30;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cd28  TEAViewWindows::ShowStartupTips   (290 bytes)   [analysis]
//   opens the Startup Tips window
void __cdecl TEAViewWindows::ShowStartupTips(undefined4 *self)

{
  int iVar1;
  int *pos;
  uint uVar3;
  undefined4 *sehChainHead;
  int value;
  uint unused;
  int *local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int *teaStartupTipsViewWindows;
  
  __InitExceptBlockLDTC(0x4f9c78);
  local_30 = (int *)0x0;
  uVar3 = 0;
  while( true ) {
    iVar1 = self[0x322] - self[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    pos = (int *)(self[0x321] + uVar3 * 4);
    if (*pos == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*pos + 8);
    }
    unused = uVar3;
    local_30 = FUN_004dd744(*pos,iVar1,(int *)&DAT_0040299c,(int *)&DAT_0045b7f4,0);
    if (local_30 != (int *)0x0) break;
    uVar3 = uVar3 + 1;
  }
  if (local_30 == (int *)0x0) {
    teaStartupTipsViewWindows = (int *)operator_new();
    if (teaStartupTipsViewWindows != (int *)0x0) {
      ehContext = 0x14;
      TEAStartupTipsViewWindows::TEAStartupTipsViewWindows(teaStartupTipsViewWindows,0,self,self[0xe]);
      ehContext = 8;
    }
    local_30 = teaStartupTipsViewWindows;
    (**(code **)(teaStartupTipsViewWindows[3] + 0xc))();
    if (local_30 == (int *)0x0) {
      value = 0;
    }
    else {
      value = *local_30;
    }
    pos = (int *)self[0x322];
    if (pos == (int *)self[0x326]) {
      std::vector_ptr::insert_aux_452ef8((int)(self + 800),pos,&value);
    }
    else {
      *pos = value;
      self[0x322] = self[0x322] + 4;
    }
  }
  (**(code **)(local_30[3] + 0x3c))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ce74  TEAViewWindows::RestoreAuxiliaryWindows   (1982 bytes)   [analysis]
//   reopens Quick Reference, Definition1 and Startup Tips where they were (Position values)
/* WARNING: Removing unreachable block (ram,0x0045d0d9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::RestoreAuxiliaryWindows(int *self)

{
  uint pos;
  undefined4 uVar2;
  char *len;
  int *out;
  tagRECT *pRect;
  LONG *pLVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  int value;
  char cVar9;
  int tryLocalMachine;
  uint buf [64];
  tagRECT rect;
  LONG newStr [6];
  undefined *unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined1 *unused4;
  undefined4 unused5;
  int unused6;
  int unused7;
  undefined1 *unused8;
  undefined4 unused9;
  int unused10;
  int unused11;
  undefined1 *unused12;
  undefined4 unused13;
  undefined *unused14;
  undefined *unused15;
  undefined1 *unused16;
  undefined4 unused17;
  int unused18;
  int unused19;
  int *strRep;
  undefined4 *strRep2;
  undefined1 *unused20;
  undefined4 unused21;
  int unused22;
  int unused23;
  int *strRep3;
  int *unused24;
  undefined1 *unused25;
  undefined4 unused26;
  int unused27;
  int unused28;
  int local_b4;
  undefined1 *unused29;
  undefined4 unused30;
  int unused31;
  int unused32;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 valueName [8];
  int str3;
  undefined1 str [8];
  int str4;
  undefined1 str2 [8];
  int str5;
  undefined1 out2 [8];
  undefined *local_44;
  undefined1 valueName2 [8];
  int str6;
  undefined1 valueName3 [8];
  int str7;
  undefined1 local_1c [8];
  int str8;
  int persist [2];
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x4f9d40);
  ehContext = 0x14;
  tryLocalMachine = 0;
  value = 1;
  GetProfileKeyPath((int)local_1c);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_1c,value,tryLocalMachine);
  if (str8 != 0) {
    if (*(int *)(str8 + -0xc) != -1) {
      out = (int *)(str8 + -0xc);
      if (out == &g_nullStringRep) {
        value = 1;
      }
      else if (out == &g_nullStringRep) {
        value = 1;
      }
      else {
        *out = *out + -1;
        value = *out + 1;
      }
      if (value != 0) goto LAB_0045cf56;
    }
    unused32 = str8 + -0xc;
    unused31 = str8 + -0xc;
    operator_delete();
    unused30 = 0;
    unused29 = local_1c;
    str8 = 0;
    unused3 = 0;
  }
LAB_0045cf56:
  out = &local_b4;
  ehContext = 0x2c;
  std::string::string_from_cstr((int)valueName3,(uint *)"QuickReference");
  ehDtorCount = ehDtorCount + 1;
  uVar2 = Persist::QueryDword((int)persist,(int)valueName3,out);
  if (((char)uVar2 == '\0') || (local_b4 != 0)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      out = (int *)(str7 + -0xc);
      if (out == &g_nullStringRep) {
        value = 1;
      }
      else if (out == &g_nullStringRep) {
        value = 1;
      }
      else {
        *out = *out + -1;
        value = *out + 1;
      }
      if (value != 0) goto LAB_0045d03e;
    }
    unused28 = str7 + -0xc;
    unused27 = str7 + -0xc;
    operator_delete();
    unused26 = 0;
    unused25 = valueName3;
    str7 = 0;
    unused2 = 0;
  }
LAB_0045d03e:
  if (cVar9 != '\0') {
    unused24 = TEAViewWindows::ShowQuickReference(self,1);
    ehContext = 0x44;
    std::string::string_from_cstr((int)valueName2,(uint *)"Definition1");
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x50;
    pos = *(uint *)(str6 + -4);
    len = strlen((uint *)"Position");
    std::string::replace((int)valueName2,pos,0,0x4f7360,(uint)len,0,(uint)len);
    local_44 = &g_emptyStringData;
    unused = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x50;
    Persist::QueryString((int)persist,(int)valueName2,(int)out2);
    if (*(int *)(local_44 + -4) == 0) {
      rect.left = 0;
      rect.top = 0;
      rect.right = 0;
      rect.bottom = 0;
      FUN_004a7a30(*(int *)(*self + 0x14),&rect);
      pRect = &rect;
      pLVar6 = newStr;
      for (value = 4; value != 0; value = value + -1) {
        *pLVar6 = pRect->left;
        pRect = (tagRECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
        pLVar6 = pLVar6 + (uint)bVar7 * -2 + 1;
      }
      GetSystemMetrics(0);
      FormatWindowPlacement((undefined1 *)buf);
      ehContext = 0x74;
      value = std::string::string_from_cstr((int)str2,buf);
      ehDtorCount = ehDtorCount + 1;
      Persist::SetString((int)persist,(int)valueName2,value);
      ehDtorCount = ehDtorCount + -1;
      if (str5 != 0) {
        if (*(int *)(str5 + -0xc) != -1) {
          strRep3 = (int *)(str5 + -0xc);
          if (strRep3 == &g_nullStringRep) {
            value = 1;
          }
          else if (strRep3 == &g_nullStringRep) {
            value = 1;
          }
          else {
            *strRep3 = *strRep3 + -1;
            value = *strRep3 + 1;
          }
          if (value != 0) goto LAB_0045d279;
        }
        unused23 = str5 + -0xc;
        unused22 = str5 + -0xc;
        operator_delete();
        unused21 = 0;
        unused20 = str2;
        str5 = 0;
      }
LAB_0045d279:
      ehContext = 0x50;
      if (1 < *(int *)(str6 + -0xc) + 1) {
        std::string::__unshare((int)valueName2);
      }
      strRep2 = (undefined4 *)(str6 + -0xc);
      if (strRep2 != &g_nullStringRep) {
        *strRep2 = 0xffffffff;
      }
      *(undefined1 *)(str6 + 10) = 0x32;
      GetSystemMetrics(0);
      FormatWindowPlacement((undefined1 *)buf);
      ehContext = 0x8c;
      value = std::string::string_from_cstr((int)str,buf);
      ehDtorCount = ehDtorCount + 1;
      Persist::SetString((int)persist,(int)valueName2,value);
      ehDtorCount = ehDtorCount + -1;
      if (str4 != 0) {
        if (*(int *)(str4 + -0xc) != -1) {
          strRep = (int *)(str4 + -0xc);
          if (strRep == &g_nullStringRep) {
            value = 1;
          }
          else if (strRep == &g_nullStringRep) {
            value = 1;
          }
          else {
            *strRep = *strRep + -1;
            value = *strRep + 1;
          }
          if (value != 0) goto LAB_0045d3e0;
        }
        unused19 = str4 + -0xc;
        unused18 = str4 + -0xc;
        operator_delete();
        unused17 = 0;
        str4 = 0;
        unused16 = str;
      }
LAB_0045d3e0:
      ehContext = 0x50;
    }
    ehDtorCount = ehDtorCount + -1;
    if (local_44 != (undefined *)0x0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        out = (int *)(local_44 + -0xc);
        if (out == &g_nullStringRep) {
          value = 1;
        }
        else if (out == &g_nullStringRep) {
          value = 1;
        }
        else {
          *out = *out + -1;
          value = *out + 1;
        }
        if (value != 0) goto LAB_0045d479;
      }
      unused15 = local_44 + -0xc;
      unused14 = local_44 + -0xc;
      operator_delete();
      unused13 = 0;
      local_44 = (undefined *)0x0;
      unused12 = out2;
    }
LAB_0045d479:
    ehDtorCount = ehDtorCount + -1;
    if (str6 != 0) {
      if (*(int *)(str6 + -0xc) != -1) {
        out = (int *)(str6 + -0xc);
        if (out == &g_nullStringRep) {
          value = 1;
        }
        else if (out == &g_nullStringRep) {
          value = 1;
        }
        else {
          *out = *out + -1;
          value = *out + 1;
        }
        if (value != 0) goto LAB_0045d512;
      }
      unused11 = str6 + -0xc;
      unused10 = str6 + -0xc;
      operator_delete();
      unused9 = 0;
      unused8 = valueName2;
      str6 = 0;
    }
  }
LAB_0045d512:
  out = &local_b4;
  ehContext = 0xbc;
  std::string::string_from_cstr((int)valueName,(uint *)"StartupTips");
  ehDtorCount = ehDtorCount + 1;
  uVar2 = Persist::QueryDword((int)persist,(int)valueName,out);
  if (((char)uVar2 == '\0') || (local_b4 != 0)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      out = (int *)(str3 + -0xc);
      if (out == &g_nullStringRep) {
        value = 1;
      }
      else if (out == &g_nullStringRep) {
        value = 1;
      }
      else {
        *out = *out + -1;
        value = *out + 1;
      }
      if (value != 0) goto LAB_0045d5f4;
    }
    unused7 = str3 + -0xc;
    unused6 = str3 + -0xc;
    operator_delete();
    unused5 = 0;
    unused4 = valueName;
    str3 = 0;
  }
LAB_0045d5f4:
  if (cVar9 == '\0') {
    SetFocus(*(HWND *)(self[0x56] + 0xc));
  }
  else {
    TEAViewWindows::ShowStartupTips(self);
  }
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d634  TEAViewWindows::Destroy   (61 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from TEAViewWindows's OWL::TWindow subobject vtable at 0x004fa0ac (through the this-adjusting thunk at 0x0045ecfa); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAViewWindows::vf9 [rtti:vtable]
void __cdecl TEAViewWindows::Destroy(int *self,int result)

{
  if (self[0x19] == 2) {
    TEAViewWindows::SetSearching((int)self,3);
  }
  if ((self[0x18] != 0) || (result != 2)) {
    PropertiesViewWindows::Destroy(self,result);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d674  TEAViewWindows::PreProcessMsg   (501 bytes, 2 ranges)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from TEAViewWindows's OWL::TWindow subobject vtable at 0x004fa0ac (through the this-adjusting thunk at 0x0045eca6); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAViewWindows::vf7 [rtti:vtable]
bool __cdecl TEAViewWindows::PreProcessMsg(int *self,LPMSG lParam)

{
  WPARAM wParam2;
  bool bVar2;
  SHORT SVar3;
  HWND hWnd;
  int i;
  tagRECT *pRect;
  LONG *pLVar7;
  int local_60 [4];
  tagRECT rect;
  int local_40 [4];
  tagRECT rect2 [2];
  tagPOINT pt;
  
  if (lParam->message == 0x100) {
    if (((lParam->wParam == 0xd) && (SVar3 = GetKeyState(0x11), -1 < SVar3)) &&
       (bVar2 = TEAViewWindows::IsCommandEnabled((int)self,0x1dce), bVar2)) {
      TEAViewWindows::Nothing();
      return true;
    }
    wParam2 = lParam->wParam;
    if ((wParam2 == 0x73) || (wParam2 == 0x74)) {
      TEAViewWindows::ActivateWindow(self,wParam2,0);
      return true;
    }
    if ((self[0x18] == 0) && (lParam->wParam == 0x70)) {
      (**(code **)(self[3] + 0xb4))();
      return true;
    }
  }
  else if (lParam->message == 0x205) {
    pt.x = 0;
    pt.y = 0;
    GetCursorPos(&pt);
    rect2[0].left = 0;
    rect2[0].top = 0;
    rect2[0].right = 0;
    rect2[0].bottom = 0;
    FUN_004a7a30(*(int *)self[0x1a3],rect2);
    pRect = rect2;
    pLVar7 = local_40;
    for (i = 4; i != 0; i = i + -1) {
      *pLVar7 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar7 = pLVar7 + 1;
    }
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a30(self[0x84],&rect);
    pRect = &rect;
    pLVar7 = local_60;
    for (i = 4; i != 0; i = i + -1) {
      *pLVar7 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar7 = pLVar7 + 1;
    }
    if (local_40[3] < local_60[3]) {
      local_40[3] = local_60[3];
    }
    if (local_40[2] < local_60[2]) {
      local_40[2] = local_60[2];
    }
    if (local_60[1] < local_40[1]) {
      local_40[1] = local_60[1];
    }
    if (local_60[0] < local_40[0]) {
      local_40[0] = local_60[0];
    }
    if (((pt.x < local_40[0]) || (local_40[2] <= pt.x)) ||
       ((pt.y < local_40[1] || (local_40[3] <= pt.y)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      TEAViewWindows::TrackContextMenu(self,2);
      return true;
    }
  }
  else if (((lParam->message == 0x101) && (lParam->wParam == 0x5d)) &&
          (hWnd = GetFocus(), hWnd == *(HWND *)(self[0x84] + 0xc))) {
    TEAViewWindows::TrackContextMenu(self,2);
    return true;
  }
  bVar2 = PropertiesViewWindows::PreProcessMsg(self,lParam);
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d86c  TEAViewWindows::LayoutQueryControls   (202 bytes)   [analysis]
//   positions the query edit, the search-mode button and the panes after a size or option change
void __cdecl TEAViewWindows::LayoutQueryControls(int self)

{
  int iVar1;
  tagRECT *pRect;
  LONG *pLVar3;
  tagRECT rect;
  LONG local_14;
  int local_10;
  int local_8;
  
  iVar1 = TEAAppWindows::GetProfile(*(int *)(self + 0x38));
  CreateFontFromLogFont2((int *)(self + 0x7bc),(undefined4 *)(iVar1 + 0x30));
  MeasureControlText((int *)(self + 0x7bc),(int *)(self + 0x158));
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_004a7a30(*(int *)(self + 0x158),&rect);
  pRect = &rect;
  pLVar3 = &local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = pRect->left;
    pRect = (tagRECT *)&pRect->top;
    pLVar3 = pLVar3 + 1;
  }
  FUN_004a7aa0(*(int *)(self + 0x210),(HWND)0x0,0,0,*(int *)(*(int *)(self + 0x210) + 0x28),
               local_8 - local_10,0x216);
  if (*(int *)(self + 0x68c) != 0) {
    FUN_004a7aa0(**(int **)(self + 0x68c),(HWND)0x0,0,0,
                 *(int *)(**(int **)(self + 0x68c) + 0x28),local_8 - local_10,0x216);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d938  TEAViewWindows::ApplyListFonts   (174 bytes)   [analysis]
//   gives every pane's list the output fonts and colours from the profile
void __cdecl TEAViewWindows::ApplyListFonts(int self)

{
  int profile;
  int matchListWindows;
  uint uVar3;
  
  profile = TEAAppWindows::GetProfile(*(int *)(self + 0x38));
  CreateFontFromLogFont2((undefined4 *)(self + 0x800),(undefined4 *)(profile + 0x70));
  CreateFontFromLogFont2((undefined4 *)(self + 0x844),(undefined4 *)(profile + 0xb0));
  uVar3 = 0;
  while( true ) {
    matchListWindows = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
    if (matchListWindows < 0) {
      matchListWindows = matchListWindows + 3;
    }
    if ((uint)(matchListWindows >> 2) <= uVar3) break;
    matchListWindows = *(int *)(*(int *)(uVar3 * 4 + *(int *)(self + 0x6b4)) + 8);
    MatchListWindows::SetFonts(matchListWindows,(undefined4 *)(self + 0x800),(undefined4 *)(self + 0x844),
                 *(undefined4 *)(profile + 0x70),*(undefined4 *)(profile + 0xb0));
    (**(code **)(*(int *)(matchListWindows + 0xc) + 0x24))();
    uVar3 = uVar3 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d9e8  TEAViewWindows::ApplyDefinitionSettings   (122 bytes)   [analysis]
//   passes the definition fonts/colours to open definition windows
void __cdecl TEAViewWindows::ApplyDefinitionSettings(int self)

{
  int iVar1;
  int *definitionViewFrame;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(self + 0xc88) - *(int *)(self + 0xc84);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    definitionViewFrame = (int *)(*(int *)(self + 0xc84) + uVar3 * 4);
    if (*definitionViewFrame == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*definitionViewFrame + 8);
    }
    definitionViewFrame = FUN_004dd744(*definitionViewFrame,iVar1,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0);
    if (definitionViewFrame != (int *)0x0) {
      DefinitionViewFrame::RefreshDefinition(definitionViewFrame);
    }
    uVar3 = uVar3 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045daf8  TEAViewWindows::DeletePanes   (157 bytes)   [analysis]
//   deletes every output group
void __cdecl TEAViewWindows::DeletePanes(int self)

{
  undefined4 *puVar1;
  undefined4 *dest;
  int last;
  undefined4 *first;
  int *piVar5;
  int iVar6;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f9e24);
  for (piVar5 = *(int **)(self + 0x6b4); piVar5 < *(int **)(self + 0x6b8); piVar5 = piVar5 + 1
      ) {
    if (*piVar5 != 0) {
      TEAViewWindows::OutputGroup::_dtor(*piVar5,3);
    }
  }
  puVar1 = *(undefined4 **)(self + 0x6b8);
  dest = *(undefined4 **)(self + 0x6b4);
  first = std::copy_ptr_45233c(puVar1,puVar1,dest);
  last = *(int *)(self + 0x6b8);
  iVar6 = (int)puVar1 - (int)dest;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 3;
  }
  *(int *)(self + 0x6b8) = *(int *)(self + 0x6b8) + (iVar6 >> 2) * -4;
  std::_Destroy_range_ptr_45176c(self + 0x6b0,(int)first,last);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045db98  TEAViewWindows::RefreshCurrentList   (61 bytes)   [analysis]
//   updates the scroll range of the current pane's list after entries were added
void __cdecl TEAViewWindows::RefreshCurrentList(int self)

{
  int iVar1;
  int count;
  
  iVar1 = *(int *)(*(int *)(self + 0x68) * 4 + *(int *)(self + 0x6b4));
  count = MatchListWindows::GetLineCount(*(int *)(iVar1 + 8));
  MatchListLabelWindows::SetCount(*(int **)(iVar1 + 4),count);
  MatchListWindows::UpdateScrollState(*(int **)(iVar1 + 8),'\x01');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dbd8  TEAViewWindows::BroadcastToOthers   (111 bytes)   [analysis]
//   calls slot 24 (EnableWindow) on every other auxiliary window and on the frame except `except`
void __cdecl TEAViewWindows::BroadcastToOthers(int *self,int except)

{
  int iVar1;
  uint i;
  
  i = 0;
  while( true ) {
    iVar1 = self[0x322] - self[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= i) break;
    if (except != *(int *)(i * 4 + self[0x321])) {
      (**(code **)(*(int *)(*(int *)(i * 4 + self[0x321]) + 8) + 0x60))();
    }
    i = i + 1;
  }
  if (except != *self) {
    (**(code **)(*(int *)(*(int *)(*self + 0x14) + 8) + 0x60))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dc48  TEAViewWindows::PaneAt   (111 bytes)   [analysis]
//   index of the pane whose splitter is at a point (x or y depending on the orientation), or 0
int __cdecl TEAViewWindows::PaneAt(int self,int *point)

{
  int pane;
  int coord;
  int iVar3;
  
  if (*(int *)(self + 0xa4) == 0) {
    coord = point[1];
  }
  else {
    coord = *point;
  }
  pane = 1;
  while( true ) {
    iVar3 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 <= pane) break;
    if ((**(int **)(pane * 4 + *(int *)(self + 0x6b4)) - *(int *)(self + 0x7b4) <= coord) &&
       (coord <= **(int **)(pane * 4 + *(int *)(self + 0x6b4)))) {
      return pane;
    }
    pane = pane + 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dcb8  ClientRectToScreen   (209 bytes)   [analysis]
//   a window's client rectangle in screen coordinates
//   file placement: inferred (address adjacency)
int * __cdecl ClientRectToScreen(int *rect,int *window)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  tagRECT *pRect;
  int *piVar6;
  int local_30 [4];
  tagRECT rect2;
  undefined1 unused;
  tagPOINT pt;
  
  pt.x = *window;
  pt.y = window[1];
  ClientToScreen(*(HWND *)(*rect + 0xc),&pt);
  uVar4 = 0;
  while( true ) {
    iVar3 = rect[0x1ae] - rect[0x1ad];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar4) break;
    piVar1 = *(int **)(*(int *)(rect[0x1ad] + uVar4 * 4) + 4);
    rect2.left = 0;
    rect2.top = 0;
    rect2.right = 0;
    rect2.bottom = 0;
    FUN_004a7a30(*piVar1,&rect2);
    pRect = &rect2;
    piVar6 = local_30;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      piVar6 = piVar6 + 1;
    }
    if ((((pt.x < local_30[0]) || (local_30[2] <= pt.x)) || (pt.y < local_30[1])) ||
       (local_30[3] <= pt.y)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return piVar1;
    }
    uVar4 = uVar4 + 1;
    unused = 0;
  }
  return (int *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dd8c  TEAViewWindows::FirstFreePaneId   (123 bytes)   [analysis]
//   the lowest pane control id not in use
int __cdecl TEAViewWindows::FirstFreePaneId(int self)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int used [9];
  
  iVar3 = 0;
  piVar1 = used;
  do {
    *piVar1 = 0;
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 9);
  uVar2 = 0;
  while( true ) {
    iVar3 = *(int *)(self + 0x6b8) - *(int *)(self + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar2) break;
    used[*(int *)(*(int *)(*(int *)(*(int *)(self + 0x6b4) + uVar2 * 4) + 8) + 0xec) +
             -0x10a4] = 1;
    uVar2 = uVar2 + 1;
  }
  iVar3 = 0;
  piVar1 = used;
  do {
    if (*piVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 9);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045de08  TEAViewWindows::ActivateWindow   (435 bytes)   [analysis]
//   cycles to the next (or previous) visible top-level TEA window
void __cdecl TEAViewWindows::ActivateWindow(int *self,int window,int backwards)

{
  uint uVar1;
  BOOL ok;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  HWND hWnd;
  
  if (window == 0x73) {
    MyScroller::ActivateOwner(*self);
    SetFocus(*(HWND *)(self[0x56] + 0xc));
  }
  else if ((window == 0x74) && (backwards != 0)) {
    MyScroller::ActivateOwner(backwards);
  }
  else {
    hWnd = GetTopWindow((HWND)0x0);
    local_c = 0xffffffff;
    local_10 = 0xffffffff;
    local_14 = 0xffffffff;
    local_18 = 0;
    while ((local_18 < 1000 && (hWnd != (HWND)0x0))) {
      uVar4 = 0;
      while( true ) {
        iVar3 = self[0x322] - self[0x321];
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if ((uint)(iVar3 >> 2) <= uVar4) break;
        iVar3 = *(int *)(self[0x321] + uVar4 * 4);
        if (*(int *)(iVar3 + 0xc) == 0) {
          bVar5 = (*(byte *)(iVar3 + 0x1b) & 0x10) != 0;
        }
        else {
          ok = IsWindowVisible(*(HWND *)(iVar3 + 0xc));
          bVar5 = ok != 0;
        }
        uVar1 = local_c;
        if ((((bVar5) && (*(HWND *)(*(int *)(self[0x321] + uVar4 * 4) + 0xc) == hWnd)) &&
            (local_14 = uVar4, uVar1 = uVar4, local_c != 0xffffffff)) &&
           (uVar1 = local_c, local_10 == 0xffffffff)) {
          local_10 = uVar4;
        }
        local_c = uVar1;
        uVar4 = uVar4 + 1;
      }
      hWnd = GetWindow(hWnd,2);
      local_18 = local_18 + 1;
    }
    if (((window == 0x75) && (local_c != 0xffffffff)) && (local_c != local_14)) {
      FUN_004a7aa0(*(int *)(self[0x321] + local_c * 4),
                   *(HWND *)(*(int *)(self[0x321] + local_14 * 4) + 0xc),0,0,0,0,0x53);
      local_c = local_10;
    }
    if (local_c != 0xffffffff) {
      BringWindowToTop(*(HWND *)(*(int *)(self[0x321] + local_c * 4) + 0xc));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dfbc  TEAViewWindows::SetQuery   (163 bytes)   [analysis]
//   puts text into the query box and searches
void __cdecl TEAViewWindows::SetQuery(int *self,uint *text)

{
  char *len;
  BOOL ok;
  
  if (self[0x19] != 2) {
    SetWindowTextA(*(HWND *)(self[0x56] + 0xc),(LPCSTR)text);
    len = strlen(text);
    FUN_004a76a8(self[0x56],0x142,0,(int)len << 0x10);
    std::string::assign_cstr((int)(self + 0x1a6),text);
    TEAViewWindows::RestartSearch(self);
    ok = IsWindowEnabled(*(HWND *)(self[0x84] + 0xc));
    if (ok != 0) {
      (**(code **)(self[3] + 0x4c))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e060  TEAViewWindows::ShowTooltip   (505 bytes)   [analysis]
//   shows a tooltip with `text` at a point over a control (TTM_* messages to the tooltip window)
void __cdecl TEAViewWindows::ShowTooltip(int self,int text,undefined4 x,undefined4 y,undefined2 *rect, int lParam)

{
  BOOL ok;
  uint uVar2;
  int iVar3;
  undefined4 *lParam2;
  undefined4 *sehChainHead;
  undefined4 lParam3;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  char *len;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 local_64 [12];
  undefined4 lParam4 [12];
  
  __InitExceptBlockLDTC(0x4f9e74);
  ok = IsWindow(*(HWND *)(**(int **)(self + 0x58) + 0xc));
  if (ok != 0) {
    len = strlen((uint *)(self + 0x888));
    uVar2 = std::string::compare(text,0,*(uint *)(*(int *)(text + 8) + -4),(byte *)(self + 0x888),
                         (uint)len);
    if (uVar2 != 0) {
      strncpy((undefined4 *)(self + 0x888),*(uint **)(text + 8),(char *)0x3e7);
      *(undefined1 *)(self + 0xc6f) = 0;
      iVar3 = FUN_004a76a8(**(int **)(self + 0x58),0x40d,0,0);
      if (iVar3 != 0) {
        ehContext = 8;
        FUN_0049f374(lParam4,'\0');
        ehDtorCount = ehDtorCount + 2;
        ehContext = 0x14;
        FUN_004a76a8(**(int **)(self + 0x58),0x40e,0,(LPARAM)lParam4);
        FUN_004a76a8(**(int **)(self + 0x58),0x405,0,(LPARAM)lParam4);
        ehDtorCount = ehDtorCount + -2;
        operator_delete_array();
      }
      ehContext = 0x2c;
      lParam2 = FUN_0049f498(local_64,x,x,(uint *)(self + 0x888));
      ehDtorCount = ehDtorCount + 2;
      FUN_004a76a8(**(int **)(self + 0x58),0x404,0,(LPARAM)lParam2);
      ehDtorCount = ehDtorCount + -2;
      operator_delete_array();
    }
    if (lParam == 0) {
      lParam3 = x;
      unused = 0x200;
      unused2 = y;
      unused3 = CONCAT22(rect[2],*rect);
      FUN_004a76a8(**(int **)(self + 0x58),0x407,0,(LPARAM)&lParam3);
    }
    else {
      FUN_004a76a8(**(int **)(self + 0x58),0x407,0,lParam);
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e25c  TEAViewWindows::GetDefinitionWindow   (602 bytes)   [analysis]
//   reuses the topmost visible definition window or creates a new one
int * __cdecl TEAViewWindows::GetDefinitionWindow(undefined4 *result,int self)

{
  int *pos;
  BOOL ok;
  int number;
  int *piVar4;
  undefined4 *sehChainHead;
  bool bVar5;
  int value;
  uint unused;
  uint local_44;
  uint unused2;
  uint local_3c;
  int local_38;
  HWND hWnd;
  int module;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int *definitionViewFrame;
  
  __InitExceptBlockLDTC(0x4f9ec8);
  piVar4 = (int *)0x0;
  module = 1;
  if (self == 0) {
    hWnd = GetTopWindow((HWND)0x0);
    local_38 = 0;
    while (((local_38 < 1000 && (hWnd != (HWND)0x0)) && (piVar4 == (int *)0x0))) {
      local_3c = 0;
      while( true ) {
        number = result[0x322] - result[0x321];
        if (number < 0) {
          number = number + 3;
        }
        if (((uint)(number >> 2) <= local_3c) || (piVar4 != (int *)0x0)) break;
        unused2 = local_3c;
        piVar4 = (int *)(result[0x321] + local_3c * 4);
        if (*piVar4 == 0) {
          number = 0;
        }
        else {
          number = *(int *)(*piVar4 + 8);
        }
        piVar4 = FUN_004dd744(*piVar4,number,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0);
        if (piVar4 != (int *)0x0) {
          number = piVar4[1];
          if (*(int *)(number + 0xc) == 0) {
            bVar5 = (*(byte *)(number + 0x1b) & 0x10) != 0;
          }
          else {
            ok = IsWindowVisible(*(HWND *)(number + 0xc));
            bVar5 = ok != 0;
          }
          if ((!bVar5) || (*(HWND *)(piVar4[1] + 0xc) != hWnd)) {
            piVar4 = (int *)0x0;
          }
        }
        local_3c = local_3c + 1;
      }
      hWnd = GetWindow(hWnd,2);
      local_38 = local_38 + 1;
    }
  }
  if (piVar4 == (int *)0x0) {
    local_44 = 0;
    while( true ) {
      number = result[0x322] - result[0x321];
      if (number < 0) {
        number = number + 3;
      }
      if ((uint)(number >> 2) <= local_44) break;
      unused = local_44;
      piVar4 = (int *)(result[0x321] + local_44 * 4);
      if (*piVar4 == 0) {
        number = 0;
      }
      else {
        number = *(int *)(*piVar4 + 8);
      }
      piVar4 = FUN_004dd744(*piVar4,number,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0);
      if (piVar4 != (int *)0x0) {
        number = piVar4[1];
        if (*(int *)(number + 0xc) == 0) {
          bVar5 = (*(byte *)(number + 0x1b) & 0x10) != 0;
        }
        else {
          ok = IsWindowVisible(*(HWND *)(number + 0xc));
          bVar5 = ok != 0;
        }
        if (!bVar5) break;
        piVar4 = (int *)0x0;
        module = module + 1;
      }
      local_44 = local_44 + 1;
    }
  }
  if (piVar4 == (int *)0x0) {
    number = TEAAppWindows::GetProfile(result[0xe]);
    definitionViewFrame = (int *)operator_new();
    if (definitionViewFrame != (int *)0x0) {
      ehContext = 0x14;
      DefinitionViewFrame::DefinitionViewFrame(definitionViewFrame,0,*result,result[0xe],module,number);
      ehContext = 8;
    }
    piVar4 = definitionViewFrame;
    (**(code **)(*(int *)(definitionViewFrame[1] + 8) + 0x10))();
    if (piVar4 == (int *)0x0) {
      value = 0;
    }
    else {
      value = piVar4[1];
    }
    pos = (int *)result[0x322];
    if (pos == (int *)result[0x326]) {
      std::vector_ptr::insert_aux_452ef8((int)(result + 800),pos,&value);
    }
    else {
      *pos = value;
      result[0x322] = result[0x322] + 4;
    }
  }
  *sehChainHead = sehPrevFrame;
  return piVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e4dc  TEAViewWindows::MoveCaretAndShowDefinition   (190 bytes)   [analysis]
//   arrow keys in a definition window: moves the list caret and shows that word's definitions
undefined4 __cdecl TEAViewWindows::MoveCaretAndShowDefinition(int *self,int list,int key,int extend)

{
  int iVar1;
  int key2;
  int iVar3;
  
  if (key < 1) {
    key2 = 0x26;
  }
  else {
    key2 = 0x28;
  }
  iVar3 = self[0x1b4];
  while( true ) {
    if (iVar3 < 0) {
      return 0;
    }
    iVar1 = self[0x1ae] - self[0x1ad];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 <= iVar3) break;
    key2 = MatchListWindows::MoveCaret(*(int **)(*(int *)(iVar3 * 4 + self[0x1ad]) + 8),key2,extend);
    if (key2 != 0) {
      if (extend == 0) {
        if (iVar3 != self[0x1b4]) {
          self[0x1b4] = iVar3;
          (**(code **)(*(int *)(*self + 8) + 0x68))();
        }
        TEAViewWindows::ShowDefinitions(self,list,0,0x1d42);
      }
      return 1;
    }
    if (key < 1) {
      key2 = 0x23;
    }
    else {
      key2 = 0x24;
    }
    iVar3 = iVar3 + key;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e59c  TEAViewWindows::OutputGroup::OutputGroup   (163 bytes)   [analysis]
//   constructor: the pane's label and list, empty length range
/* WARNING: Removing unreachable block (ram,0x0045e5f6) */
int __cdecl TEAViewWindows::OutputGroup::OutputGroup(int self,undefined4 label,undefined4 list)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f9ef8);
  *(undefined4 *)(self + 4) = label;
  *(undefined4 *)(self + 8) = list;
  *(undefined4 *)(self + 0xc) = 0x7fffffff;
  *(undefined4 *)(self + 0x18) = 0;
  *(undefined **)(self + 0x18) = &g_emptyStringData;
  MatchListLabelWindows::Info::Info((undefined4 *)(self + 0x28));
  *(undefined4 *)(self + 0x60) = 0x7fffffff;
  *(undefined4 *)(self + 100) = 0x7fffffff;
  *(undefined4 *)(self + 0x68) = 0x7fffffff;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e640  TEAViewWindows::OutputGroup::~OutputGroup   (308 bytes)   [rtti:dtor destructor]
//   written in code as TEAViewWindows::OutputGroup::_dtor
void __cdecl TEAViewWindows::OutputGroup::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f9f48);
  if (self == 0) goto LAB_0045e763;
  if (*(int *)(self + 8) != 0) {
    (*(code *)**(undefined4 **)(*(int *)(self + 8) + 0xc))();
  }
  if (*(int *)(self + 4) != 0) {
    (*(code *)**(undefined4 **)(*(int *)(self + 4) + 0xc))();
  }
  MatchEngineSet::_dtor(self + 0x28,2);
  if (*(int *)(self + 0x18) != 0) {
    if (*(int *)(*(int *)(self + 0x18) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x18) + -0xc);
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
      if (prevRefs != 0) goto LAB_0045e74d;
    }
    operator_delete();
    *(undefined4 *)(self + 0x18) = 0;
  }
LAB_0045e74d:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0045e763:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e7c8  TEAViewWindows::OutputGroup::StartLengths   (55 bytes)   [analysis]
//   takes the length range and step for its query and starts at the first length
void __cdecl TEAViewWindows::OutputGroup::StartLengths(int self,int view,int pane)

{
  undefined4 length;
  
  TEAViewWindows::GetLengthRange(view,pane,(int *)(self + 0x60),(int *)(self + 100),
               (int *)(self + 0x68));
  if (*(int *)(self + 0x68) < 1) {
    length = *(undefined4 *)(self + 100);
  }
  else {
    length = *(undefined4 *)(self + 0x60);
  }
  *(undefined4 *)(self + 0xc) = length;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e800  TEAViewWindows::OutputGroup::NextLength   (14 bytes)   [analysis]
//   steps to the next length
void __cdecl TEAViewWindows::OutputGroup::NextLength(int self)

{
  *(int *)(self + 0xc) = *(int *)(self + 0xc) + *(int *)(self + 0x68);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e810  TEAViewWindows::OutputGroup::HasLength   (32 bytes)   [analysis]
//   whether the current length is still inside the range
undefined4 __cdecl TEAViewWindows::OutputGroup::HasLength(int self)

{
  undefined4 inRange;
  
  if ((*(int *)(self + 0xc) < *(int *)(self + 0x60)) ||
     (*(int *)(self + 100) < *(int *)(self + 0xc))) {
    inRange = 0;
  }
  else {
    inRange = 1;
  }
  return inRange;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e830  TEAViewWindows::OutputGroup::GetLengthRange   (24 bytes)   [analysis]
//   shortest and longest length of its range
void __cdecl TEAViewWindows::OutputGroup::GetLengthRange(int self,undefined4 *first,undefined4 *last)

{
  *first = *(undefined4 *)(self + 0x60);
  *last = *(undefined4 *)(self + 100);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e8c4  OWL::TFileOpenDialog::~TFileOpenDialog   (175 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFileOpenDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFileOpenDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f9f98);
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

} // namespace tea
