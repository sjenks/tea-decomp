// TEA.exe — application module "TEADictionaryPropertiesWindows"
// 18 functions, 0x00401000..0x00402f68. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00401000  entry   (2 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall entry(void)

{
  undefined **startupTable;
  
  _DAT_004ea32b = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_004cd488();
  FUN_004cc824();
  FUN_004cd48c();
  FUN_004ddaec((undefined4 *)0x0);
  startupTable = &PTR_DAT_004ea2d0;
  _DAT_004ea32f = GetModuleHandleA((LPCSTR)0x0);
  FUN_004e6fb4((int)startupTable);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401012  __startup   (71 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00401012. C runtime start: records the TLS index, initialises the RTL and calls the program's main through the startup table
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall __startup(void)

{
  undefined **startupTable;
  
  _DAT_004ea32b = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_004cd488();
  FUN_004cc824();
  FUN_004cd48c();
  FUN_004ddaec((undefined4 *)0x0);
  startupTable = &PTR_DAT_004ea2d0;
  _DAT_004ea32f = GetModuleHandleA((LPCSTR)0x0);
  FUN_004e6fb4((int)startupTable);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401059  __GetExceptDLLinfo   (5 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl __GetExceptDLLinfo(undefined4 *info)

{
                    /* 0x1059  1  __GetExceptDLLinfo */
  _DAT_00517250 = __getTlsBlock();
  _DAT_00517250 = _DAT_00517250 + 0x1c;
  *info = 0x82727349;
  info[1] = &DAT_0051723c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401140  __getTlsBlock   (15 bytes)   [analysis]
//   this thread's TLS block (FS:[0x2c][tls index])
//   file placement: inferred (precedes first anchor)
undefined4 __stdcall __getTlsBlock(void)

{
  int *piVar1;
  undefined2 in_FS;
  
  piVar1 = (int *)segment(in_FS,0x2c);
  return *(undefined4 *)(*piVar1 + _tls_index * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00401150  TEADictionaryPropertiesWindows::TEADictionaryPropertiesWindows   (845 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TEADictionaryPropertiesWindows's vtable at its vptr offset (+0xc) in this
int * __cdecl TEADictionaryPropertiesWindows::TEADictionaryPropertiesWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ea368);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x296);
    self[0x296] = (int)(self + 0x293);
    self[0x297] = (int)(self + 0x294);
    self[1] = (int)(self + 0x293);
    self[2] = (int)(self + 0x294);
    self[0x292] = 0;
    self[0x295] = 0;
    self[0x293] = (int)&OWL::TEventHandler::vftable;
    self[0x294] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x296,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x9e8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x9e8;
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x4ea340,param_3,param_4,(uint *)0x12f2,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x9e8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x9e8;
  self[3] = (int)&TEADictionaryPropertiesWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004ea890;
  *(undefined ***)self[2] = &PTR_LAB_004ea89c;
  *(undefined ***)(*self + 8) = &TEADictionaryPropertiesWindows::vftable_TWindow;
  self[0x18] = param_5;
  self[0x19] = param_6;
  OWL::TGroupBox::TGroupBox(self + 0x1a,0,*self,0x3278,0);
  PVWEdit::PVWEdit(self + 0x45,0,self,0x8de,0);
  PVWEdit::PVWEdit(self + 0x74,0,self,0x343a,0);
  PVWEdit::PVWEdit(self + 0xa3,0,self,0x1130,0);
  OWL::TStatic::TStatic_4c7a28(self + 0xd2,0,*self,0x2fb2,0,0);
  OWL::TStatic::TStatic_4c7a28((int *)((int)self + 0x3f6),0,*self,0x3688,0,0);
  OWL::TStatic::TStatic_4c7a28(self + 0x129,0,*self,0x1a18,0,0);
  OWL::TStatic::TStatic_4c7a28((int *)((int)self + 0x552),0,*self,0x1a22,0,0);
  PVWEdit::PVWEdit(self + 0x180,0,self,0x113a,0);
  PVWEdit::PVWEdit(self + 0x1af,0,self,0x367e,0);
  PVWEdit::PVWEdit(self + 0x1de,0,self,0x1202,0);
  PVWEdit::PVWEdit(self + 0x20d,0,self,0x120c,0);
  OWL::TButton::TButton(self + 0x23c,0,*self,1,0);
  OWL::TButton::TButton(self + 0x267,0,*self,0x5fa,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004014d0  TEADictionaryPropertiesWindows::~TEADictionaryPropertiesWindows   (1027 bytes)   [rtti:dtor destructor]
//   written in code as TEADictionaryPropertiesWindows::_dtor
void __cdecl TEADictionaryPropertiesWindows::_dtor(int *self,uint dtorFlags)

{
  int *control;
  int *control2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ea434);
  if (self != (int *)0x0) {
    self[3] = (int)&TEADictionaryPropertiesWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004ea890;
    *(undefined ***)self[2] = &PTR_LAB_004ea89c;
    *(undefined ***)(*self + 8) = &TEADictionaryPropertiesWindows::vftable_TWindow;
    OWL::TButton::_dtor(self + 0x267,2);
    OWL::TButton::_dtor(self + 0x23c,2);
    PVWEdit::_dtor(self + 0x20d,2);
    PVWEdit::_dtor(self + 0x1de,2);
    PVWEdit::_dtor(self + 0x1af,2);
    PVWEdit::_dtor(self + 0x180,2);
    control = (int *)((int)self + 0x552);
    control2 = (int *)(*(int *)((int)self + 0x556) + -4);
    *control2 = *control2 + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    control2 = (int *)(*(int *)((int)self + 0x556) + -4);
    *control2 = *control2 + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    control2 = (int *)(*(int *)((int)self + 0x556) + -4);
    *control2 = *control2 + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x57a),0);
    control2 = (int *)(*(int *)((int)self + 0x556) + -4);
    *control2 = *control2 + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x572),0);
    control2 = self + 0x129;
    *(int *)(self[0x12a] + -4) = *(int *)(self[0x12a] + -4) + -4;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + -4;
    OWL::TControl::_dtor(control2,0);
    *(int *)(self[0x12a] + -4) = *(int *)(self[0x12a] + -4) + 4;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + 4;
    *(int *)(self[0x12a] + -4) = *(int *)(self[0x12a] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x133,0);
    *(int *)(self[0x12a] + -4) = *(int *)(self[0x12a] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x131,0);
    control = (int *)((int)self + 0x3f6);
    control2 = (int *)(*(int *)((int)self + 0x3fa) + -4);
    *control2 = *control2 + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    control2 = (int *)(*(int *)((int)self + 0x3fa) + -4);
    *control2 = *control2 + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    control2 = (int *)(*(int *)((int)self + 0x3fa) + -4);
    *control2 = *control2 + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x41e),0);
    control2 = (int *)(*(int *)((int)self + 0x3fa) + -4);
    *control2 = *control2 + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x416),0);
    control2 = self + 0xd2;
    *(int *)(self[0xd3] + -4) = *(int *)(self[0xd3] + -4) + -4;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + -4;
    OWL::TControl::_dtor(control2,0);
    *(int *)(self[0xd3] + -4) = *(int *)(self[0xd3] + -4) + 4;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + 4;
    *(int *)(self[0xd3] + -4) = *(int *)(self[0xd3] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0xdc,0);
    *(int *)(self[0xd3] + -4) = *(int *)(self[0xd3] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0xda,0);
    PVWEdit::_dtor(self + 0xa3,2);
    PVWEdit::_dtor(self + 0x74,2);
    PVWEdit::_dtor(self + 0x45,2);
    control2 = self + 0x1a;
    *(int *)(self[0x1b] + -4) = *(int *)(self[0x1b] + -4) + -1;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + -1;
    OWL::TControl::_dtor(control2,0);
    *(int *)(self[0x1b] + -4) = *(int *)(self[0x1b] + -4) + 1;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + 1;
    *(int *)(self[0x1b] + -4) = *(int *)(self[0x1b] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x8d),0);
    *(int *)(self[0x1b] + -4) = *(int *)(self[0x1b] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x85),0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x9e8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x9e8;
    PropertiesViewWindows::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x9e8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x9e8;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x296,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x294,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004018d4  TEADictionaryPropertiesWindows::SetupWindow   (951 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from TEADictionaryPropertiesWindows's OWL::TWindow subobject vtable at 0x004ea8a8 (through the this-adjusting thunk at 0x004026bd); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEADictionaryPropertiesWindows::vf11 [rtti:vtable]
void __cdecl TEADictionaryPropertiesWindows::SetupWindow(int *self)

{
  LPCSTR text;
  int iVar2;
  uint *lpString;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_44 [8];
  int str;
  undefined1 local_34 [8];
  int str2;
  undefined1 local_24 [8];
  int str3;
  undefined1 text2 [8];
  uint *strRep2;
  
  __InitExceptBlockLDTC(0x4ea494);
  PropertiesViewWindows::SetupWindow(self);
  text = (LPCSTR)TSDictionaryList::GetPath(self[0x18],self[0x19]);
  PVWEdit::SetText(self + 0x45,text);
  TSDictionaryList::GetFileDateText(local_24,self[0x18],self[0x19]);
  PVWEdit::SetIntValue(self + 0x74,(int)local_24);
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
      if (iVar2 != 0) goto LAB_004019b8;
    }
    operator_delete();
    str3 = 0;
  }
LAB_004019b8:
  iVar2 = GetWindowTextLengthA(*(HWND *)(*self + 0xc));
  lpString = (uint *)operator_new_array();
  GetWindowTextA(*(HWND *)(*self + 0xc),(LPSTR)lpString,iVar2 + 1);
  *(CHAR *)((int)lpString + iVar2) = '\0';
  TSDictionaryList::GetFileTitle(local_34,self[0x18],self[0x19]);
  FindWordInString((int)text2,(int)local_34,lpString);
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
      if (iVar2 != 0) goto LAB_00401a92;
    }
    operator_delete();
    str2 = 0;
  }
LAB_00401a92:
  FUN_004b0c44(self,strRep2);
  operator_delete_array();
  TSDictionaryList::GetDescription(local_44,self[0x18],self[0x19]);
  PVWEdit::SetIntValue(self + 0xa3,(int)local_44);
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
      if (iVar2 != 0) goto LAB_00401b5f;
    }
    operator_delete();
    str = 0;
  }
LAB_00401b5f:
  iVar2 = TSDictionaryList::EnsureCurrent(self[0x18],self[0x19]);
  if (iVar2 != 0) {
    TSDictionaryList::GetCounts(self[0x18],self[0x19]);
    PVWEdit::SetLong(self + 0x180);
    PVWEdit::SetLong(self + 0x1af);
    PVWEdit::SetLong(self + 0x1de);
    PVWEdit::SetLong(self + 0x20d);
  }
  if (strRep2 != (uint *)0x0) {
    if (strRep2[-3] != 0xffffffff) {
      strRep2 = strRep2 + -3;
      if (strRep2 == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep2 = *strRep2 - 1;
        iVar2 = *strRep2 + 1;
      }
      if (iVar2 != 0) goto LAB_00401c7a;
    }
    operator_delete();
  }
LAB_00401c7a:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401d10  FindWordInString   (881 bytes)   [analysis]
//   position of a word in a string (whole-word search), or npos
//   file placement: inferred (address adjacency)
int __cdecl FindWordInString(int text,int start,uint *word_)

{
  uint len;
  int iVar2;
  int *rep;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int *str3;
  undefined1 str2 [8];
  int str4;
  
  __InitExceptBlockLDTC(0x4ea534);
  iVar2 = std::string::string_from_cstr((int)str2,word_);
  str3 = (int *)0x0;
  iVar4 = *(int *)(*(int *)(start + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    len = *(uint *)(*(int *)(start + 8) + -4);
    str3 = std::string::__getRep(str,len,len);
    str3 = str3 + 3;
    memcpy(str3,*(undefined4 **)(start + 8),len);
  }
  else {
    str3 = *(int **)(start + 8);
    rep = str3 + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  iVar2 = std::string::append((int)str,iVar2);
  *(undefined4 *)(text + 8) = 0;
  iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    len = *(uint *)(*(int *)(iVar2 + 8) + -4);
    rep = std::string::__getRep(text,len,len);
    *(int **)(text + 8) = rep + 3;
    memcpy(*(undefined4 **)(text + 8),*(undefined4 **)(iVar2 + 8),len);
  }
  else {
    *(undefined4 *)(text + 8) = *(undefined4 *)(iVar2 + 8);
    rep = (int *)(*(int *)(text + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      rep = (int *)(str4 + -0xc);
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
      if (iVar4 != 0) goto LAB_00401fb7;
    }
    operator_delete();
    str4 = 0;
  }
LAB_00401fb7:
  if (str3 != (int *)0x0) {
    if (str3[-3] != -1) {
      rep = str3 + -3;
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
      if (iVar4 != 0) goto LAB_00402066;
    }
    operator_delete();
  }
LAB_00402066:
  *sehChainHead = sehPrevFrame;
  return text;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040209c  TEADictionaryPropertiesWindows::SetupMoveableControls   (1056 bytes)   [rtti:vtable virtual slot 47]
//   vtable slot 47 (introduced by PropertiesViewWindows); registers the controls that move or stretch when the window is resized
void __cdecl TEADictionaryPropertiesWindows::SetupMoveableControls(int *self)

{
  int i;
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
  int *control5;
  int *control6;
  int *control7;
  int *control8;
  int *control9;
  int *control10;
  int *control11;
  int *control12;
  int *control13;
  int *control14;
  int *control15;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4ea664);
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_004a7a6c(*self,&rect);
  pRect = &rect;
  pLVar3 = control;
  for (i = 4; i != 0; i = i + -1) {
    *pLVar3 = pRect->left;
    pRect = (tagRECT *)((int)pRect + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  control15 = (int *)operator_new();
  if (control15 != (int *)0x0) {
    ehContext = 0x14;
    PropertiesViewWindows::MoveableControl::MoveableControl(control15,(int)control,self[0x1a],3,3);
    ehContext = 8;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control15);
  control14 = (int *)operator_new();
  if (control14 != (int *)0x0) {
    ehContext = 0x2c;
    PropertiesViewWindows::MoveableControl::MoveableControl(control14,(int)control,self[0x45],3,0);
    ehContext = 0x20;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control14);
  control13 = (int *)operator_new();
  if (control13 != (int *)0x0) {
    ehContext = 0x44;
    PropertiesViewWindows::MoveableControl::MoveableControl(control13,(int)control,self[0x74],3,0);
    ehContext = 0x38;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control13);
  control12 = (int *)operator_new();
  if (control12 != (int *)0x0) {
    ehContext = 0x5c;
    PropertiesViewWindows::MoveableControl::MoveableControl(control12,(int)control,self[0xa3],3,3);
    ehContext = 0x50;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control12);
  control11 = (int *)operator_new();
  if (control11 != (int *)0x0) {
    ehContext = 0x74;
    PropertiesViewWindows::MoveableControl::MoveableControl(control11,(int)control,self[0xd2],0,2);
    ehContext = 0x68;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control11);
  control10 = (int *)operator_new();
  if (control10 != (int *)0x0) {
    ehContext = 0x8c;
    PropertiesViewWindows::MoveableControl::MoveableControl(control10,(int)control,*(int *)((int)self + 0x3f6),0,2);
    ehContext = 0x80;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control10);
  control9 = (int *)operator_new();
  if (control9 != (int *)0x0) {
    ehContext = 0xa4;
    PropertiesViewWindows::MoveableControl::MoveableControl(control9,(int)control,self[0x129],0,2);
    ehContext = 0x98;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control9);
  control8 = (int *)operator_new();
  if (control8 != (int *)0x0) {
    ehContext = 0xbc;
    PropertiesViewWindows::MoveableControl::MoveableControl(control8,(int)control,*(int *)((int)self + 0x552),0,2);
    ehContext = 0xb0;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control8);
  control7 = (int *)operator_new();
  if (control7 != (int *)0x0) {
    ehContext = 0xd4;
    PropertiesViewWindows::MoveableControl::MoveableControl(control7,(int)control,self[0x180],0,2);
    ehContext = 200;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control7);
  control6 = (int *)operator_new();
  if (control6 != (int *)0x0) {
    ehContext = 0xec;
    PropertiesViewWindows::MoveableControl::MoveableControl(control6,(int)control,self[0x1af],0,2);
    ehContext = 0xe0;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control6);
  control5 = (int *)operator_new();
  if (control5 != (int *)0x0) {
    ehContext = 0x104;
    PropertiesViewWindows::MoveableControl::MoveableControl(control5,(int)control,self[0x1de],0,2);
    ehContext = 0xf8;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control5);
  control4 = (int *)operator_new();
  if (control4 != (int *)0x0) {
    ehContext = 0x11c;
    PropertiesViewWindows::MoveableControl::MoveableControl(control4,(int)control,self[0x20d],0,2);
    ehContext = 0x110;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control4);
  control3 = (int *)operator_new();
  if (control3 != (int *)0x0) {
    ehContext = 0x134;
    PropertiesViewWindows::MoveableControl::MoveableControl(control3,(int)control,self[0x23c],2,2);
    ehContext = 0x128;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control3);
  control2 = (int *)operator_new();
  if (control2 != (int *)0x0) {
    ehContext = 0x14c;
    PropertiesViewWindows::MoveableControl::MoveableControl(control2,(int)control,self[0x267],2,2);
    ehContext = 0x140;
  }
  PropertiesViewWindows::AddMoveableControl((int)self,control2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402640  OWL::TWindow::GetTooltip   (11 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   vtable slot 1; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TWindow::GetTooltip(int self)

{
  return *(undefined4 *)(self + 100);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040264c  OWL::TWindow::EnableWindow   (33 bytes)   [rtti:vtable virtual slot 24]
//   vtable slot 24; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TWindow::EnableWindow(int self,byte enable)

{
  BOOL ok;
  
  ok = EnableWindow(*(HWND *)(self + 0xc),(uint)enable);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402670  OWL::TWindow::Invalidate   (25 bytes)   [rtti:vtable virtual slot 26]
//   vtable slot 26; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::Invalidate(int self,byte erase)

{
  InvalidateRect(*(HWND *)(self + 0xc),(RECT *)0x0,(uint)erase);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040268c  OWL::TWindow::InvalidateRect   (27 bytes)   [rtti:vtable virtual slot 27]
//   vtable slot 27; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::InvalidateRect(int self,RECT *pRect,byte erase)

{
  InvalidateRect(*(HWND *)(self + 0xc),pRect,(uint)erase);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402880  std::string::~basic_string   (143 bytes)   [rtti:dtor destructor]
//   written in code as std::string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::string::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  
  if (self == 0) {
    return;
  }
  if (*(int *)(self + 8) != 0) {
    if (*(int *)(*(int *)(self + 8) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 8) + -0xc);
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
      if (prevRefs != 0) goto LAB_004028fb;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_004028fb:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402c58  OWL::TStatic::~TStatic   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TStatic::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TStatic::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ea950);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 10,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 8,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402d74  OWL::TGroupBox::~TGroupBox   (158 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TGroupBox::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TGroupBox::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ea958);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -1;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -1;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 1;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 1;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x25),0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x1d),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402f30  std::vector<PropertiesViewWindows::MoveableControl *>::~vector   (54 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::vector_PropertiesViewWindows_MoveableControl_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_PropertiesViewWindows_MoveableControl_ptr::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402f68  std::_Destroy_range_ptr   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004050b4 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

} // namespace tea
