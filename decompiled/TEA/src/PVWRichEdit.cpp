// TEA.exe — application module "PVWRichEdit"
// 34 functions, 0x00419bb8..0x00469f48. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00419bb8  PVWRichEdit::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWRichEdit::Find [rtti:vtable]; PVWRichEdit::vf8 [rtti:vtable]
undefined4 __cdecl PVWRichEdit::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWRichEdit::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TRichEdit::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419c00  PVWRichEdit::PVWRichEdit   (410 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWRichEdit's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWRichEdit::PVWRichEdit(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int *param_5, int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee76c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x20);
    self[0x20] = (int)(self + 0x1d);
    self[0x21] = (int)(self + 0x1e);
    self[1] = (int)(self + 0x1d);
    self[2] = (int)(self + 0x1e);
    self[0x1c] = 0;
    self[0x1f] = 0;
    self[0x1d] = (int)&OWL::TEventHandler::vftable;
    self[0x1e] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x20,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  OWL::TRichEdit::TRichEdit(self,1,uVar2,param_4,(uint *)("Beta Test Expiry" + 0x10),*param_5,
               param_5[1],param_5[2] - *param_5,param_5[3] - param_5[1],(uint *)0x0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
  self[3] = (int)&PVWRichEdit::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f06f8;
  *(undefined ***)self[2] = &PTR_LAB_004f0704;
  *(undefined ***)(*self + 8) = &PVWRichEdit::vftable_TWindow;
  self[0x1a] = (int)param_3;
  self[0x1b] = 0;
  self[0xc] = 0;
  uVar1 = 0x50a31044;
  self[0xd] = 0;
  if (param_6 != 0) {
    uVar1 = 0x50a31844;
  }
  FUN_004a7988(*self,0x100180,uVar1,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419db8  PVWRichEdit::~PVWRichEdit   (294 bytes)   [rtti:dtor destructor]
//   written in code as PVWRichEdit::_dtor
void __cdecl PVWRichEdit::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee790);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWRichEdit::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f06f8;
    *(undefined ***)self[2] = &PTR_LAB_004f0704;
    *(undefined ***)(*self + 8) = &PVWRichEdit::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TEditFile::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x20,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x1e,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419ee0  PVWRichEdit::EvLButtonDblClk   (41 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDBLCLK
void __cdecl PVWRichEdit::EvLButtonDblClk(int *self)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(self[0x1a] + 0xc) + 0x5c))();
  if (cVar1 == '\0') {
    FUN_004a5774(*self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f0c  PVWRichEdit::NotifyAtChild_512   (36 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 512)
void __cdecl PVWRichEdit::NotifyAtChild_512(int *self)

{
  GetDlgCtrlID(*(HWND *)(*self + 0xc));
  (**(code **)(*(int *)(self[0x1a] + 0xc) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f30  PVWRichEdit::NotifyAtChild_768   (106 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 768)
void __cdecl PVWRichEdit::NotifyAtChild_768(int *self)

{
  int iVar1;
  
  if (self[0x1b] == 0) {
    iVar1 = FUN_004a76a8(*self,0xb8,0,0);
    if (iVar1 != 0) {
      self[0x1b] = 1;
      GetDlgCtrlID(*(HWND *)(*self + 0xc));
      (**(code **)(*(int *)(self[0x1a] + 0xc) + 0x58))();
      self[0x1b] = 0;
    }
  }
  FUN_004a76a8(*self,0xb9,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f9c  PVWRichEdit::GetWordAt   (2694 bytes)   [analysis]
//   the word around a character position of the rich text (selection scanned without moving the caret)
/* WARNING: Removing unreachable block (ram,0x0041a1eb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl PVWRichEdit::GetWordAt(int self,int *position,int word_,int lParam)

{
  uint len;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint uVar9;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  undefined1 exceptMsg2 [248];
  undefined4 unused2;
  undefined *unused3;
  undefined4 charFormat;
  uint local_1f4;
  byte local_1f0;
  undefined4 *unused4;
  undefined4 *unused5;
  undefined4 *dest;
  undefined4 *unused6;
  uint unused7;
  int unused8;
  int *newRep;
  int *newData2;
  int unused9;
  undefined4 *unused10;
  undefined4 unused11;
  uint local_188;
  undefined1 local_184 [36];
  uint local_160;
  undefined1 *unused12;
  undefined4 unused13;
  int *unused14;
  int *unused15;
  int *newData3;
  int *unused16;
  uint unused17;
  undefined1 *unused18;
  int *newRep2;
  int *unused19;
  uint len2;
  int *strRep2;
  undefined1 *unused20;
  int *unused21;
  undefined4 unused22;
  uint *msgText;
  uint local_114;
  undefined1 *unused23;
  undefined4 unused24;
  int *unused25;
  int *unused26;
  int *unused27;
  int *unused28;
  uint unused29;
  undefined1 *unused30;
  int *newRep3;
  int *unused31;
  int *strRep3;
  undefined1 *unused32;
  int *unused33;
  undefined4 unused34;
  uint *msgText2;
  undefined1 *unused35;
  undefined4 unused36;
  int unused37;
  int unused38;
  uint n;
  byte local_b8 [12];
  int range;
  int local_a8;
  int local_a4;
  int range2;
  int local_9c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str4;
  undefined1 str2 [8];
  int *str5;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused39;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused40;
  undefined1 result [8];
  int str6;
  undefined1 str3 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ee848);
  range2 = 0;
  local_9c = -1;
  iVar2 = GetWindowTextLengthA(*(HWND *)(*position + 0xc));
  if (lParam == 0) {
    OWL::TRichEdit::GetSelection_4691fc(position,(LPARAM)&range2);
  }
  else {
    range2 = FUN_004a76a8(*position,0xd7,0,lParam);
    local_9c = range2;
    if (iVar2 <= range2) {
      local_9c = 0;
    }
  }
  local_a4 = 0;
  if (range2 == local_9c) {
    HideCaret(*(HWND *)(*position + 0xc));
    FUN_004a76a8(*position,0xb,0,0);
    charFormat = 0x3c;
    local_1f4 = 0;
    range = range2;
    local_a8 = local_9c;
    while (local_a8 = local_a8 + 1, local_a8 <= iVar2) {
      OWL::TRichEdit::SetSelection_46924c(position,(LPARAM)&range);
      OWL::TRichEdit::GetCharFormat(position,(LPARAM)&charFormat,'\x01');
      if (((local_1f4 & 4) == 0) || ((local_1f0 & 4) == 0)) break;
    }
    local_a8 = local_a8 + -1;
    while (range = range + -1, -1 < range) {
      OWL::TRichEdit::SetSelection_46924c(position,(LPARAM)&range);
      OWL::TRichEdit::GetCharFormat(position,(LPARAM)&charFormat,'\x01');
      if (((local_1f4 & 4) == 0) || ((local_1f0 & 4) == 0)) break;
    }
    range = range + 1;
    OWL::TRichEdit::SetSelection_46924c(position,(LPARAM)&range2);
    range2 = range;
    local_9c = local_a8;
    memset((undefined4 *)local_b8,0,10);
    for (; local_9c + 1 <= iVar2; local_9c = local_9c + 1) {
      (**(code **)(position[3] + 0x30))();
      iVar3 = CollationCode(local_b8[0]);
      if (iVar3 == 0) break;
      if (((char)local_b8[0] < '0') || ('9' < (char)local_b8[0])) {
        local_a4 = 0;
      }
      else {
        local_a4 = local_a4 + 1;
      }
    }
    do {
      if (range2 < 1) goto LAB_0041a1a1;
      (**(code **)(position[3] + 0x30))();
      iVar2 = CollationCode(local_b8[0]);
      if (iVar2 == 0) goto LAB_0041a1a1;
      range2 = range2 + -1;
    } while( true );
  }
LAB_0041a1bd:
  local_c = (undefined4 *)&g_emptyStringData;
  unused3 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  if (range2 < local_9c) {
    n = (local_9c - range2) * 2 + 1;
    puVar4 = (uint *)operator_new_array();
    memset(puVar4,0,n);
    (**(code **)(position[3] + 0x30))();
    std::string::assign_cstr((int)str3,puVar4);
    operator_delete_array();
  }
  uVar5 = local_c[-1] - local_a4;
  ehContext = 0x2c;
  std::string::substr((int)result,(int)str3,uVar5,g_stringNpos);
  ehDtorCount = ehDtorCount + 1;
  std::string::operator_assign(word_,(int)result);
  ehDtorCount = ehDtorCount + -1;
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      strRep = (int *)(str6 + -0xc);
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
      if (iVar2 != 0) goto LAB_0041a32b;
    }
    unused38 = str6 + -0xc;
    unused37 = str6 + -0xc;
    operator_delete();
    unused36 = 0;
    unused35 = result;
    str6 = 0;
    unused2 = 0;
  }
LAB_0041a32b:
  ehContext = 0x20;
  if (g_stringNpos - 0xe < uVar5) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar9 = 1;
    copyCtor = &LAB_00408370;
    objectDtor = 0;
    ehContext = 0x50;
    msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00516d20);
    std::string::string_from_cstr((int)str2,msgText2);
    ehDtorCount = ehDtorCount + 2;
    lengthError[0] = &std::logic_error::vftable;
    unused34 = 0;
    unused40 = (int *)0x0;
    ehContext = 0x5c;
    if (str5[-3] == -1 || str5[-3] + 1 < 0) {
      len = str5[-1];
      newRep3 = std::string::__getRep(newStr2,len,len);
      unused30 = newStr2;
      newData = newRep3 + 3;
      unused28 = str5;
      unused27 = newData;
      unused29 = len;
      unused31 = newData;
      unused40 = newData;
      memcpy(newData,str5,len);
    }
    else {
      unused32 = newStr2;
      unused33 = str5;
      unused40 = str5;
      strRep3 = str5 + -3;
      if (strRep3 != &g_nullStringRep) {
        *strRep3 = *strRep3 + 1;
      }
    }
    ehContext = 0x50;
    lengthError[0] = &std::length_error::vftable;
    ehDtorCount = ehDtorCount + 2;
    if (str5 != (int *)0x0) {
      if (str5[-3] != -1) {
        strRep = str5 + -3;
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
        if (iVar2 != 0) goto LAB_0041a560;
      }
      unused26 = str5 + -3;
      unused25 = str5 + -3;
      operator_delete();
      unused24 = 0;
      unused23 = str2;
      str5 = (int *)0x0;
      unused = 0;
    }
LAB_0041a560:
    ehContext = 0x44;
    _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,uVar9,throwFlags,throwFile,throwLine);
  }
  uVar9 = local_c[-1];
  if (uVar5 < uVar9) {
    local_114 = uVar9 - uVar5;
    if (uVar9 < uVar5) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      uVar9 = 1;
      copyCtor = &LAB_004084c8;
      objectDtor = 0;
      ehContext = 0x80;
      msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c);
      std::string::string_from_cstr((int)str,msgText);
      ehDtorCount = ehDtorCount + 2;
      outOfRange[0] = &std::logic_error::vftable;
      unused22 = 0;
      unused39 = (int *)0x0;
      ehContext = 0x8c;
      if (str4[-3] == -1 || str4[-3] + 1 < 0) {
        len2 = str4[-1];
        newRep2 = std::string::__getRep(newStr,len2,len2);
        unused18 = newStr;
        newData3 = newRep2 + 3;
        unused17 = len2;
        unused16 = str4;
        unused19 = newData3;
        unused39 = newData3;
        memcpy(newData3,str4,len2);
      }
      else {
        unused20 = newStr;
        unused21 = str4;
        unused39 = str4;
        strRep2 = str4 + -3;
        if (strRep2 != &g_nullStringRep) {
          *strRep2 = *strRep2 + 1;
        }
      }
      ehContext = 0x80;
      outOfRange[0] = &std::out_of_range::vftable;
      ehDtorCount = ehDtorCount + 2;
      if (str4 != (int *)0x0) {
        if (str4[-3] != -1) {
          strRep = str4 + -3;
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
          if (iVar2 != 0) goto LAB_0041a7cf;
        }
        unused15 = str4 + -3;
        unused14 = str4 + -3;
        operator_delete();
        unused13 = 0;
        unused12 = str;
        str4 = (int *)0x0;
      }
LAB_0041a7cf:
      ehContext = 0x44;
      _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,uVar9,throwFlags,throwFile,throwLine);
    }
    local_160 = local_c[-1] - uVar5;
    local_184[0] = 0;
    local_188 = local_160;
    if (local_114 < local_160) {
      local_188 = local_114;
    }
    std::string::replace((int)str3,uVar5,local_188,(uint)local_184,0,0,0);
  }
  else {
    std::string::replace_fill((int)str3,uVar9,0,uVar5 - uVar9,0);
  }
  if (local_c + -3 != &g_nullStringRep) {
    local_c[-3] = 0;
  }
  ehContext = 0xb0;
  unused11 = 0;
  *(undefined4 *)(self + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar5 = local_c[-1];
    newRep = std::string::__getRep(self,uVar5,uVar5);
    newData2 = newRep + 3;
    *(int **)(self + 8) = newData2;
    unused8 = self;
    unused6 = local_c;
    dest = *(undefined4 **)(self + 8);
    unused7 = uVar5;
    memcpy(dest,local_c,uVar5);
  }
  else {
    unused10 = local_c;
    *(undefined4 **)(self + 8) = local_c;
    unused9 = self;
    strRep = (int *)(*(int *)(self + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 200;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep = local_c + -3;
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
      if (iVar2 != 0) goto LAB_0041aa01;
    }
    unused5 = local_c + -3;
    unused4 = local_c + -3;
    operator_delete();
  }
LAB_0041aa01:
  *sehChainHead = sehPrevFrame;
  return self;
LAB_0041a1a1:
  FUN_004a76a8(*position,0xb,1,0);
  ShowCaret(*(HWND *)(*position + 0xc));
  goto LAB_0041a1bd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa24  PVWRichEdit::SetupWindow   (88 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from PVWRichEdit's OWL::TWindow subobject vtable at 0x004f0710 (through the this-adjusting thunk at 0x004226ff); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWRichEdit::vf20 [rtti:vtable]
void __cdecl PVWRichEdit::SetupWindow(int *self)

{
  uint eventMask;
  int iVar2;
  
  OWL::TRichEdit::vf20(self);
  eventMask = OWL::TRichEdit::GetEventMask(self);
  if ((eventMask & 0x4080001) != 0x4080001) {
    OWL::TRichEdit::SetEventMask(self,eventMask | 0x4080001);
  }
  iVar2 = OWL::TRichEdit::UseRichEdit2('\0');
  if (1 < iVar2) {
    FUN_004a76a8(*self,0x45b,1,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa7c  PVWRichEdit::CanClose   (7 bytes)   [rtti:vtable virtual slot 15]
//   override of OWL::TWindow vtable slot 15, from PVWRichEdit's OWL::TWindow subobject vtable at 0x004f0710 (through the this-adjusting thunk at 0x00422738); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWRichEdit::vf21 [rtti:vtable]
undefined1 __stdcall PVWRichEdit::CanClose(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa84  PVWRichEdit::SetDocTitle   (7 bytes)   [rtti:vtable virtual slot 14]
//   override of OWL::TWindow vtable slot 14, from PVWRichEdit's OWL::TWindow subobject vtable at 0x004f0710 (through the this-adjusting thunk at 0x0042274b); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWRichEdit::vf32 [rtti:vtable]
undefined1 __stdcall PVWRichEdit::SetDocTitle(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa8c  PVWRichEdit::SetPlainText   (63 bytes)   [analysis]
//   sets the window text and scrolls to the top
void __cdecl PVWRichEdit::SetPlainText(int *self,LPCSTR text)

{
  if (self[0x1b] == 0) {
    self[0x1b] = 1;
    SetWindowTextA(*(HWND *)(*self + 0xc),text);
    self[0x1b] = 0;
    FUN_004a76a8(*self,0xb9,0,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aacc  PVWRichEdit::GetText   (450 bytes)   [analysis]
//   the whole window text as a std::string
int __cdecl PVWRichEdit::GetText(int self,int *out)

{
  uint len;
  int iVar2;
  uint *lpString;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ee968);
  iVar2 = GetWindowTextLengthA(*(HWND *)(*out + 0xc));
  lpString = (uint *)operator_new_array();
  GetWindowTextA(*(HWND *)(*out + 0xc),(LPSTR)lpString,iVar2 + 1);
  std::string::string_from_cstr((int)str,lpString);
  operator_delete_array();
  *(undefined4 *)(self + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    rep = std::string::__getRep(self,len,len);
    *(int **)(self + 8) = rep + 3;
    memcpy(*(undefined4 **)(self + 8),local_c,len);
  }
  else {
    *(undefined4 **)(self + 8) = local_c;
    rep = (int *)(*(int *)(self + 8) + -0xc);
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
      if (iVar2 != 0) goto LAB_0041ac73;
    }
    operator_delete();
  }
LAB_0041ac73:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ac90  PVWRichEdit::SetText   (110 bytes)   [analysis]
//   sets RTF when the text is RTF, plain text otherwise
void __cdecl PVWRichEdit::SetText(int *self,int text)

{
  char *len;
  uint uVar2;
  uint local_c;
  undefined2 unused;
  
  local_c = DAT_004ed250;
  unused = DAT_004ed254;
  if (5 < *(uint *)(*(int *)(text + 8) + -4)) {
    len = strlen(&local_c);
    uVar2 = std::string::compare(text,0,5,(byte *)&local_c,(uint)len);
    if (uVar2 == 0) {
      PVWRichEdit::SetRtf(self,text);
      return;
    }
  }
  PVWRichEdit::SetPlainText(self,*(LPCSTR *)(text + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ad00  PVWRichEdit::SetRtf   (68 bytes)   [analysis]
//   loads RTF (SetRichText) and scrolls to the top
void __cdecl PVWRichEdit::SetRtf(int *self,int text)

{
  if (self[0x1b] == 0) {
    self[0x1b] = 1;
    SetRichText(*(HWND *)(*self + 0xc),text,0);
    self[0x1b] = 0;
    FUN_004a76a8(*self,0xb9,0,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ad44  PVWRichEdit::vf30   (129 bytes)   [rtti:vtable virtual slot 30]
void __cdecl PVWRichEdit::vf30(int *self,LONG *param_2)

{
  tagPOINT pt;
  int range;
  int local_8;
  
  SetFocus(*(HWND *)(*self + 0xc));
  range = 0;
  local_8 = -1;
  OWL::TRichEdit::GetSelection_4691fc(self,(LPARAM)&range);
  if (range == local_8) {
    pt.x = *param_2;
    pt.y = param_2[1];
    ScreenToClient(*(HWND *)(*self + 0xc),&pt);
    range = FUN_004a76a8(*self,0xd7,0,(LPARAM)&pt);
    local_8 = range;
    OWL::TRichEdit::SetSelection_46924c(self,(LPARAM)&range);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041adc8  PVWRichEdit::vf31   (5 bytes)   [rtti:vtable virtual slot 31]
void __stdcall PVWRichEdit::vf31(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041add0  PVWRichEdit::vf9   (106 bytes)   [rtti:vtable virtual slot 9]
void __cdecl PVWRichEdit::vf9(int *self)

{
  undefined4 charFormat;
  undefined4 unused;
  
  if (self[0x1b] == 0) {
    self[0x1b] = 1;
    SetWindowTextA(*(HWND *)(*self + 0xc),"Beta Test Expiry" + 0x10);
    charFormat = 0x3c;
    unused = 0;
    OWL::TCharFormat::SetDefaults((int)&charFormat);
    OWL::TRichEdit::SetCharFormat(self,(LPARAM)&charFormat,4);
    self[0x1b] = 0;
    FUN_004a76a8(*self,0xb9,0,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ae3c  PVWRichEdit::ApplyFont   (172 bytes)   [analysis]
//   sets a character format from a LOGFONT scaled to the screen DPI and a colour
void __cdecl PVWRichEdit::ApplyFont(undefined4 *colour,int charFormat)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int windowDC;
  int local_27;
  
  __InitExceptBlockLDTC(0x4ee9d8);
  FUN_004a8760(&windowDC);
  (**(code **)(local_27 + 0xc))();
  OWL::TCharFormat::GetFontInfo(charFormat,colour + 1);
  uVar1 = __ftol();
  *(undefined4 *)(charFormat + 0xc) = uVar1;
  OWL::TCharFormat::SetCharSet(charFormat,*(undefined1 *)((int)colour + 0x1b));
  OWL::TCharFormat::SetTextColor(charFormat,colour);
  OWL::TWindowDC::_dtor(&windowDC,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004695dc  PVWRichEdit::GetClassName   (37 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from PVWRichEdit's OWL::TWindow subobject vtable at 0x004f0710 (through the this-adjusting thunk at 0x00422712); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TRichEdit::vf11 [rtti:vtable]
char * __stdcall PVWRichEdit::GetClassName(void)

{
  int iVar1;
  char *pcVar2;
  char load;
  
  load = '\0';
  OWL::TRichEdit::GetModuleName();
  iVar1 = OWL::TRichEdit::UseRichEdit2(load);
  if (iVar1 < 2) {
    pcVar2 = "RICHEDIT";
  }
  else {
    pcVar2 = "RichEdit20A";
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469604  OWL::TRichEdit::GetModuleName   (8 bytes)   [analysis]
//   the rich-edit class library name
//   file placement: inferred (address adjacency)
undefined4 __stdcall OWL::TRichEdit::GetModuleName(void)

{
  undefined4 *dllLoader;
  
  dllLoader = (undefined4 *)OWL::TRichEdit::GetDllLoader();
  return *dllLoader;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046960c  OWL::TRichEdit::vf20   (206 bytes)   [rtti:vtable virtual slot 20]
//   file placement: inferred (address adjacency)
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
  
  __InitExceptBlockLDTC(0x4fcf18);
  OWL::TEditFile::SetupWindow(self);
  FUN_004c0e0c((int)local_14,*(int *)(*self + 0x70),0x7f2b);
  FUN_004c28b8(str,extraout_EDX,extraout_ECX,(int)(self + 0xe),(uint *)str);
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
      if (prevRefs != 0) goto LAB_004696c9;
    }
    operator_delete();
  }
LAB_004696c9:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004696dc  OWL::TRichEdit::StreamInCallback   (69 bytes)   [analysis]
//   EDITSTREAM callback reading from a buffer
//   file placement: inferred (address adjacency)
undefined4 __stdcall OWL::TRichEdit::StreamInCallback(int *cookie,undefined1 *buffer,int size,undefined4 *read)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*cookie + 0x30) & 2) == 0) {
    FUN_004d4534(cookie,buffer,size);
    uVar1 = FUN_004d44ec((int)cookie);
    *read = uVar1;
  }
  else {
    *read = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469724  OWL::TRichEdit::StreamOutCallback   (144 bytes)   [analysis]
//   EDITSTREAM callback appending to a buffer
//   file placement: inferred (address adjacency)
undefined4 __stdcall OWL::TRichEdit::StreamOutCallback(int *cookie,int buffer,int size,int *written)

{
  int local_1c [3];
  int local_10 [3];
  
  FUN_004d6cac(local_10,cookie);
  FUN_004d4f98(cookie,buffer,size);
  FUN_004d6cac(local_1c,cookie);
  *written = local_1c[0] - local_10[0];
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004697b4  PVWRichEdit::Transfer   (7 bytes)   [rtti:vtable virtual slot 22]
//   override of OWL::TWindow vtable slot 22, from PVWRichEdit's OWL::TWindow subobject vtable at 0x004f0710 (through the this-adjusting thunk at 0x00422725); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TRichEdit::vf10 [rtti:vtable]
undefined4 __stdcall PVWRichEdit::Transfer(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004697bc  OWL::TRichEdit::ReadFromStream   (58 bytes)   [analysis]
//   streams text in through the buffer callback
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TRichEdit::ReadFromStream(int *self,undefined4 unused,WPARAM format)

{
  undefined4 editStream;
  int local_c;
  code *unused2;
  
  editStream = unused;
  local_c = 0;
  unused2 = OWL::TRichEdit::StreamInCallback;
  OWL::TRichEdit::StreamIn(self,format,(LPARAM)&editStream);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004697f8  OWL::TRichEdit::WriteToStream   (58 bytes)   [analysis]
//   streams text out through the buffer callback
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TRichEdit::WriteToStream(int *self,undefined4 unused,WPARAM format)

{
  undefined4 editStream;
  int local_c;
  code *unused2;
  
  editStream = unused;
  local_c = 0;
  unused2 = OWL::TRichEdit::StreamOutCallback;
  OWL::TRichEdit::StreamOut(self,format,(LPARAM)&editStream);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469834  OWL::TRichEdit::ReadFromFile   (287 bytes)   [rtti:vtable virtual slot 25]
//   vtable slot 25; loads a file into the control (stream in, EM_SETMODIFY)
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::ReadFromFile(int *self,LPCSTR fileName)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int unused [34];
  
  __InitExceptBlockLDTC(0x4fcf58);
  if ((fileName == (LPCSTR)0x0) && (fileName = (LPCSTR)self[0x18], fileName == (LPCSTR)0x0)) {
    uVar2 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    std::basic_ifstream_char::basic_ifstream(unused,0,fileName,6,0x1b6);
    if ((*(byte *)(unused[0] + 0x30) & 5) == 0) {
      (**(code **)(self[3] + 0x24))();
      bVar1 = OWL::TRichEdit::ReadFromStream(self,unused,self[0x19]);
      if (bVar1) {
        uVar2 = FUN_004a76a8(*self,0xb9,0,0);
        uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
        std::basic_ifstream_char::_dtor(unused,2);
        *sehChainHead = sehPrevFrame;
        return uVar2;
      }
    }
    uVar2 = 0;
    std::basic_ifstream_char::_dtor(unused,2);
    *sehChainHead = sehPrevFrame;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469954  OWL::TRichEdit::WriteToFile   (279 bytes)   [rtti:vtable virtual slot 29]
//   vtable slot 29; saves the control to a file (stream out, EM_SETMODIFY)
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::WriteToFile(int *self,LPCSTR fileName)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int unused [33];
  
  __InitExceptBlockLDTC(0x4fcf98);
  if ((fileName == (LPCSTR)0x0) && (fileName = (LPCSTR)self[0x18], fileName == (LPCSTR)0x0)) {
    uVar2 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    std::basic_ofstream_char::basic_ofstream(unused,0,fileName,10,0x1b6);
    if (((*(byte *)(unused[0] + 0x30) & 5) == 0) &&
       (bVar1 = OWL::TRichEdit::WriteToStream(self,unused,self[0x19]), bVar1)) {
      uVar2 = FUN_004a76a8(*self,0xb9,0,0);
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
      std::basic_ofstream_char::_dtor(unused,2);
      *sehChainHead = sehPrevFrame;
    }
    else {
      uVar2 = 0;
      std::basic_ofstream_char::_dtor(unused,2);
      *sehChainHead = sehPrevFrame;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469a6c  OWL::TRichEditModule::TRichEditModule   (97 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TRichEditModule's vtable at its vptr offset (+0x0) in this
//   file placement: inferred (address adjacency)
undefined4 * __cdecl OWL::TRichEditModule::TRichEditModule(undefined4 *self)

{
  int iVar1;
  char *libFileName;
  undefined4 *sehChainHead;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fcfc8);
  cVar5 = '\x01';
  cVar4 = '\x01';
  cVar3 = '\x01';
  iVar1 = OWL::TRichEdit::UseRichEdit2('\0');
  if (iVar1 < 2) {
    libFileName = "RICHED32.DLL";
  }
  else {
    libFileName = "RICHED20.DLL";
  }
  OWL::TModule::TModule(self,(uint *)libFileName,cVar3,cVar4,cVar5);
  *self = &OWL::TRichEditModule::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469b1c  OWL::TRichEdit::UseRichEdit2   (48 bytes)   [analysis]
//   whether the RichEdit 2.0 control is available
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::UseRichEdit2(char load)

{
  if (DAT_004fcbec == '\0') {
    if (load == '\0') {
      DAT_004fcbe8 = GetRichEditVersion();
    }
    else {
      DAT_004fcbe8 = 1;
    }
    DAT_004fcbec = DAT_004fcbec + '\x01';
  }
  return DAT_004fcbe8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469b4c  OWL::TErrorMode::~TErrorMode   (35 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TErrorMode::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TErrorMode::_dtor(UINT *self,byte dtorFlags)

{
  if (self != (UINT *)0x0) {
    SetErrorMode(*self);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469bd0  OWL::TRichEditModule::~TRichEditModule   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TRichEditModule::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEditModule::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fd354);
  if (self != (undefined4 *)0x0) {
    OWL::TModule::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469e1c  ParseLinkTarget   (299 bytes)   [analysis]
//   parses a link of the definition text into word and number
//   file placement: inferred (address adjacency)
int __cdecl ParseLinkTarget(int text,int len,int *number)

{
  int iVar1;
  int iVar2;
  byte ch;
  byte *pbVar4;
  byte *pbVar5;
  byte ch2;
  
  pbVar4 = *(byte **)(text + 8);
  pbVar5 = *(byte **)(len + 8);
  *number = 0;
  do {
    while ((ch2 = *pbVar4, ch2 != 0 && (iVar1 = CollationCode(ch2), iVar1 == 0))) {
      pbVar4 = pbVar4 + 1;
    }
    while ((ch = *pbVar5, ch != 0 && (iVar1 = CollationCode(ch), iVar1 == 0))) {
      pbVar5 = pbVar5 + 1;
    }
    if (ch2 == 0) {
      if (ch == 0) {
        return 0;
      }
      return -1;
    }
    if (ch == 0) {
      return 1;
    }
    if ((((char)ch2 < '1') || ('9' < (char)ch2)) &&
       (((char)ch < '1' || ('9' < (char)ch)))) {
      if ((&DAT_004f50d8)[ch2] != '\0') {
        ch2 = (&DAT_004f50d8)[ch2];
      }
      if ((&DAT_004f50d8)[ch] != '\0') {
        ch = (&DAT_004f50d8)[ch];
      }
      if (ch != ch2) {
        return (int)(char)ch2 - (int)(char)ch;
      }
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    }
    else {
      iVar1 = atoi((char *)pbVar4);
      iVar2 = atoi((char *)pbVar5);
      if (iVar1 - iVar2 != 0) {
        return iVar1 - iVar2;
      }
      do {
        pbVar4 = pbVar4 + 1;
        if ((char)*pbVar4 < '0') break;
      } while ((char)*pbVar4 < ':');
      do {
        pbVar5 = pbVar5 + 1;
        if ((char)*pbVar5 < '0') break;
      } while ((char)*pbVar5 < ':');
    }
    *number = *number + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00469f48  DefinitionLinkLess   (198 bytes)   [analysis]
//   order of two definition links
//   file placement: inferred (address adjacency)
bool __cdecl DefinitionLinkLess(int a,int b)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int number;
  undefined4 unused;
  int len;
  int text;
  
  if (*(int *)(a + 0x10) == *(int *)(b + 0x10)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(a + 0x20) - *(int *)(a + 0x1c);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      if (iVar1 >> 4 == 0) {
        text = a + 0x58;
      }
      else if (iVar2 == 0) {
        text = *(int *)(a + 0x1c);
      }
      else {
        text = *(int *)(a + 0x3c);
      }
      iVar1 = *(int *)(b + 0x20) - *(int *)(b + 0x1c);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      if (iVar1 >> 4 == 0) {
        len = b + 0x58;
      }
      else if (iVar2 == 0) {
        len = *(int *)(b + 0x1c);
      }
      else {
        len = *(int *)(b + 0x3c);
      }
      iVar1 = ParseLinkTarget(text,len,&number);
      if (iVar1 != 0) {
        return iVar1 < 0;
      }
      iVar2 = iVar2 + 1;
      unused = 0;
    } while (iVar2 < 2);
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(a + 0x10) - *(int *)(b + 0x10) < 0;
  }
  return bVar3;
}

} // namespace tea
