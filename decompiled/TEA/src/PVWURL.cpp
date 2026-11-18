// TEA.exe — application module "PVWURL"
// 14 functions, 0x0041d510..0x0041e888. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041d510  PVWURL::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWURL::Find [rtti:vtable]; PVWURL::vf8 [rtti:vtable]
undefined4 __cdecl PVWURL::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWURL::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TEdit::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d558  PVWURL::EvGetDlgCode   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_GETDLGCODE
void __stdcall PVWURL::EvGetDlgCode(int self)

{
                    /* WARNING: Could not recover jumptable at 0x0041d55f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 100))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d564  PVWURL::EvLButtonDown   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONDOWN
void __stdcall PVWURL::EvLButtonDown(int self)

{
                    /* WARNING: Could not recover jumptable at 0x0041d56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0x58))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d570  PVWURL::EvMouseMove   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MOUSEMOVE
void __stdcall PVWURL::EvMouseMove(int self)

{
                    /* WARNING: Could not recover jumptable at 0x0041d577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0x5c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d57c  PVWURL::EvLButtonUp   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONUP
void __stdcall PVWURL::EvLButtonUp(int self)

{
                    /* WARNING: Could not recover jumptable at 0x0041d583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d588  PVWURL::PVWURL   (526 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWURL's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWURL::PVWURL(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 )

{
  int refs;
  uint len;
  undefined4 uVar3;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ef1a4);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x14);
    self[0x14] = (int)(self + 0x11);
    self[0x15] = (int)(self + 0x12);
    self[1] = (int)(self + 0x11);
    self[2] = (int)(self + 0x12);
    self[0x10] = 0;
    self[0x13] = 0;
    self[0x11] = (int)&OWL::TEventHandler::vftable;
    self[0x12] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x14,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x24;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x24;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_3;
  }
  OWL::TEdit::TEdit_4b6184(self,1,uVar3,param_4,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x24;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x24;
  self[3] = (int)&PVWURL::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f0064;
  *(undefined ***)self[2] = &PTR_LAB_004f0070;
  *(undefined ***)(*self + 8) = &PVWURL::vftable_TWindow;
  self[7] = (int)param_3;
  self[10] = 0;
  refs = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(param_5 + 8) + -4);
    rep = std::string::__getRep(self + 8,len,len);
    self[10] = (int)(rep + 3);
    memcpy((undefined4 *)self[10],*(undefined4 **)(param_5 + 8),len);
  }
  else {
    self[10] = *(int *)(param_5 + 8);
    rep = (int *)(self[10] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  self[0xc] = param_6;
  self[0xd] = 0;
  self[0xe] = 0;
  self[0xf] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d7b0  PVWURL::~PVWURL   (382 bytes)   [rtti:dtor destructor]
//   written in code as PVWURL::_dtor
void __cdecl PVWURL::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ef1e0);
  if (self == (int *)0x0) goto LAB_0041d91e;
  self[3] = (int)&PVWURL::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f0064;
  *(undefined ***)self[2] = &PTR_LAB_004f0070;
  *(undefined ***)(*self + 8) = &PVWURL::vftable_TWindow;
  if (self[10] != 0) {
    if (*(int *)(self[10] + -0xc) != -1) {
      strRep = (int *)(self[10] + -0xc);
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
      if (prevRefs != 0) goto LAB_0041d889;
    }
    operator_delete();
    self[10] = 0;
  }
LAB_0041d889:
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x24;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x24;
  OWL::TEdit::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x24;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x24;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x14,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x12,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0041d91e:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d930  PVWURL::SetupWindow   (3415 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from PVWURL's OWL::TWindow subobject vtable at 0x004f007c (through the this-adjusting thunk at 0x004220e3); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWURL::vf20 [rtti:vtable]
/* WARNING: Removing unreachable block (ram,0x0041dfd0) */
/* WARNING: Removing unreachable block (ram,0x0041e0af) */
/* WARNING: Removing unreachable block (ram,0x0041e05b) */
/* WARNING: Removing unreachable block (ram,0x0041e0a2) */
/* WARNING: Removing unreachable block (ram,0x0041e146) */
/* WARNING: Removing unreachable block (ram,0x0041e15f) */
/* WARNING: Removing unreachable block (ram,0x0041e16a) */
/* WARNING: Removing unreachable block (ram,0x0041e18e) */
/* WARNING: Removing unreachable block (ram,0x0041e178) */
/* WARNING: Removing unreachable block (ram,0x0041e187) */
/* WARNING: Removing unreachable block (ram,0x0041e180) */
/* WARNING: Removing unreachable block (ram,0x0041e193) */
/* WARNING: Removing unreachable block (ram,0x0041e197) */
/* WARNING: Removing unreachable block (ram,0x0041e1e8) */
/* WARNING: Removing unreachable block (ram,0x0041dca3) */
/* WARNING: Removing unreachable block (ram,0x0041da70) */
/* WARNING: Removing unreachable block (ram,0x0041db4d) */
/* WARNING: Removing unreachable block (ram,0x0041daf9) */
/* WARNING: Removing unreachable block (ram,0x0041db40) */
/* WARNING: Removing unreachable block (ram,0x0041dbe4) */
/* WARNING: Removing unreachable block (ram,0x0041dbfd) */
/* WARNING: Removing unreachable block (ram,0x0041dc08) */
/* WARNING: Removing unreachable block (ram,0x0041dc2c) */
/* WARNING: Removing unreachable block (ram,0x0041dc16) */
/* WARNING: Removing unreachable block (ram,0x0041dc25) */
/* WARNING: Removing unreachable block (ram,0x0041dc1e) */
/* WARNING: Removing unreachable block (ram,0x0041dc31) */
/* WARNING: Removing unreachable block (ram,0x0041dc35) */
/* WARNING: Removing unreachable block (ram,0x0041dc83) */
/* WARNING: Removing unreachable block (ram,0x0041dd13) */
/* WARNING: Removing unreachable block (ram,0x0041ddf8) */
/* WARNING: Removing unreachable block (ram,0x0041dda4) */
/* WARNING: Removing unreachable block (ram,0x0041ddeb) */
/* WARNING: Removing unreachable block (ram,0x0041de8f) */
/* WARNING: Removing unreachable block (ram,0x0041deb3) */
/* WARNING: Removing unreachable block (ram,0x0041debe) */
/* WARNING: Removing unreachable block (ram,0x0041defe) */
/* WARNING: Removing unreachable block (ram,0x0041ded7) */
/* WARNING: Removing unreachable block (ram,0x0041def7) */
/* WARNING: Removing unreachable block (ram,0x0041dee4) */
/* WARNING: Removing unreachable block (ram,0x0041df03) */
/* WARNING: Removing unreachable block (ram,0x0041df07) */
/* WARNING: Removing unreachable block (ram,0x0041df55) */
/* WARNING: Removing unreachable block (ram,0x0041e208) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl PVWURL::SetupWindow(int *self)

{
  uint uVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [1112];
  int *newData;
  int *local_2a4;
  int *unused;
  int *unused2;
  int *strRep;
  int *unused3;
  uint local_284;
  undefined1 local_280 [36];
  uint local_25c;
  undefined1 *unused4;
  undefined4 unused5;
  int *unused6;
  int *unused7;
  int *strRep2;
  int *newData2;
  int *unused8;
  uint unused9;
  undefined1 *unused10;
  int *newRep;
  int *unused11;
  uint len;
  int *strRep3;
  undefined1 *unused12;
  int *unused13;
  undefined4 unused14;
  uint *msgText;
  uint local_20c;
  int *unused15;
  char *local_204;
  uint local_1b8;
  undefined1 local_1b4 [12];
  uint local_1a8;
  uint local_158;
  int *unused16;
  char *local_150;
  uint local_104;
  int *unused17;
  undefined4 *src;
  uint unused18;
  undefined1 *unused19;
  int *newRep2;
  int *unused20;
  uint local_e8;
  int *strRep4;
  undefined1 *unused21;
  int *unused22;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str3;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused23;
  undefined1 str2 [8];
  int *string_;
  
  __InitExceptBlockLDTC(0x4ef2d0);
  OWL::TEdit::SetupWindow(self);
  ehContext = 0x14;
  string_ = (int *)0x0;
  if (*(int *)(self[10] + -0xc) == -1 || *(int *)(self[10] + -0xc) + 1 < 0) {
    local_e8 = *(uint *)(self[10] + -4);
    newRep2 = std::string::__getRep(str2,local_e8,local_e8);
    unused19 = str2;
    newData = newRep2 + 3;
    unused18 = local_e8;
    src = (undefined4 *)self[10];
    unused17 = newData;
    unused20 = newData;
    string_ = newData;
    memcpy(newData,src,local_e8);
  }
  else {
    local_2a4 = (int *)self[10];
    unused21 = str2;
    strRep4 = local_2a4 + -3;
    unused22 = local_2a4;
    string_ = local_2a4;
    if (strRep4 != &g_nullStringRep) {
      *strRep4 = *strRep4 + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  unused16 = string_;
  local_150 = thunk_FUN_004dcd18((char *)string_,"mailto:");
  local_104 = g_stringNpos;
  if (local_150 != (char *)0x0) {
    local_104 = (int)local_150 - (int)string_;
  }
  if (local_104 != 0xffffffff) {
    local_158 = local_104 + 7;
    local_1a8 = string_[-1];
    local_1b4[0] = 0;
    local_1b8 = local_1a8;
    if (local_158 < local_1a8) {
      local_1b8 = local_158;
    }
    std::string::replace((int)str2,0,local_1b8,(uint)local_1b4,0,0,0);
  }
  unused15 = string_;
  local_204 = thunk_FUN_004dcd18((char *)string_,"\?Subject=");
  uVar1 = g_stringNpos;
  if (local_204 != (char *)0x0) {
    uVar1 = (int)local_204 - (int)string_;
  }
  local_104 = uVar1;
  if (uVar1 != 0xffffffff) {
    local_20c = g_stringNpos;
    if ((uint)string_[-1] < uVar1) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_004084c8;
      objectDtor = 0;
      ehContext = 0xec;
      msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c);
      std::string::string_from_cstr((int)str,msgText);
      ehDtorCount = ehDtorCount + 2;
      outOfRange[0] = &std::logic_error::vftable;
      unused14 = 0;
      unused23 = (int *)0x0;
      ehContext = 0xf8;
      if (str3[-3] == -1 || str3[-3] + 1 < 0) {
        len = str3[-1];
        newRep = std::string::__getRep(newStr,len,len);
        unused10 = newStr;
        newData2 = newRep + 3;
        unused9 = len;
        unused8 = str3;
        unused11 = newData2;
        unused23 = newData2;
        memcpy(newData2,str3,len);
      }
      else {
        unused12 = newStr;
        unused13 = str3;
        unused23 = str3;
        strRep3 = str3 + -3;
        if (strRep3 != &g_nullStringRep) {
          *strRep3 = *strRep3 + 1;
        }
      }
      ehContext = 0xec;
      outOfRange[0] = &std::out_of_range::vftable;
      ehDtorCount = ehDtorCount + 2;
      if (str3 != (int *)0x0) {
        if (str3[-3] != -1) {
          strRep2 = str3 + -3;
          if (strRep2 == &g_nullStringRep) {
            iVar2 = 1;
          }
          else if (strRep2 == &g_nullStringRep) {
            iVar2 = 1;
          }
          else {
            *strRep2 = *strRep2 + -1;
            iVar2 = *strRep2 + 1;
          }
          if (iVar2 != 0) goto LAB_0041e500;
        }
        unused7 = str3 + -3;
        unused6 = str3 + -3;
        operator_delete();
        unused5 = 0;
        unused4 = str;
        str3 = (int *)0x0;
      }
LAB_0041e500:
      ehContext = 0xe0;
      _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    local_25c = string_[-1] - uVar1;
    local_280[0] = 0;
    local_284 = local_25c;
    if (local_20c < local_25c) {
      local_284 = local_20c;
    }
    std::string::replace((int)str2,uVar1,local_284,(uint)local_280,0,0,0);
  }
  if (string_[-1] != 0) {
    unused3 = string_;
    SetWindowTextA(*(HWND *)(*self + 0xc),(LPCSTR)string_);
  }
  if (*(int *)(*self + 0x6c) == 0) {
    iVar2 = *(int *)(*self + 0x6c);
  }
  else {
    iVar2 = *(int *)(*self + 0x6c) + 4;
  }
  FUN_004a7bfc(*self,iVar2,0x1a4a);
  ehDtorCount = ehDtorCount + -1;
  if (string_ != (int *)0x0) {
    if (string_[-3] != -1) {
      strRep = string_ + -3;
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
      if (iVar2 != 0) goto LAB_0041e672;
    }
    unused2 = string_ + -3;
    unused = string_ + -3;
    operator_delete();
  }
LAB_0041e672:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e688  std::logic_error::logic_error_copy   (236 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004133f0. copy constructor of std::logic_error (copies the message string)
//   also: std::logic_error::logic_error [rtti:vtable-store]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::logic_error::logic_error_copy(undefined4 *self,int other)

{
  int refs;
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4efd80);
  *self = &std::exception::vftable;
  self[4] = 0;
  refs = *(int *)(*(int *)(other + 0x10) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(other + 0x10) + -4);
    rep = std::string::__getRep(self + 2,len,len);
    self[4] = rep + 3;
    memcpy((undefined4 *)self[4],*(undefined4 **)(other + 0x10),len);
  }
  else {
    self[4] = *(undefined4 *)(other + 0x10);
    rep = (int *)(self[4] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *self = &std::logic_error::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e774  PVWURL::vf22   (45 bytes)   [rtti:vtable virtual slot 22]
void __cdecl PVWURL::vf22(int *self,undefined4 param_2,int *param_3)

{
  self[0xd] = *param_3;
  self[0xe] = param_3[1];
  self[0xf] = 1;
  OWL::TWindow::EvLButtonDown(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e7a4  PVWURL::vf23   (69 bytes)   [rtti:vtable virtual slot 23]
void __cdecl PVWURL::vf23(int *self,undefined4 param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3 - self[0xd] >> 0x1f;
  if (2 < (int)((*param_3 - self[0xd] ^ uVar1) - uVar1)) {
    self[0xf] = 0;
  }
  uVar1 = param_3[1] - self[0xe] >> 0x1f;
  if (2 < (int)((param_3[1] - self[0xe] ^ uVar1) - uVar1)) {
    self[0xf] = 0;
  }
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e7ec  PVWURL::vf24   (62 bytes)   [rtti:vtable virtual slot 24]
void __cdecl PVWURL::vf24(int *self)

{
  if (self[0xf] == 1) {
    GetDlgCtrlID(*(HWND *)(*self + 0xc));
    (**(code **)(*(int *)(self[7] + 0xc) + 0x80))();
  }
  self[0xf] = 0;
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e82c  PVWURL::vf25   (89 bytes)   [rtti:vtable virtual slot 25]
uint __cdecl PVWURL::vf25(int *self,int param_2)

{
  uint uVar1;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 4) == 0x100)) &&
     ((*(int *)(param_2 + 8) == 0xd || (*(int *)(param_2 + 8) == 0x20)))) {
    GetDlgCtrlID(*(HWND *)(*self + 0xc));
    (**(code **)(*(int *)(self[7] + 0xc) + 0x80))();
    return 4;
  }
  uVar1 = OWL::TEdit::EvGetDlgCode(self);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e888  PVWURL::Link::Link   (45 bytes)   [analysis]
//   empty link record
//   file placement: inferred (address adjacency)
undefined4 * __cdecl PVWURL::Link::Link(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ef408);
  *self = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
