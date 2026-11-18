// TSBuild.exe — application module "DMDialog"
// 63 functions, 0x00401000..0x0041740c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
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
  
  _DAT_004742d7 = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00457bd8();
  FUN_00456f74();
  FUN_00457bdc();
  FUN_00468830((undefined4 *)0x0);
  startupTable = &PTR_DAT_0047427c;
  _DAT_004742db = GetModuleHandleA((LPCSTR)0x0);
  FUN_004710cc((int)startupTable);
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
  
  _DAT_004742d7 = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00457bd8();
  FUN_00456f74();
  FUN_00457bdc();
  FUN_00468830((undefined4 *)0x0);
  startupTable = &PTR_DAT_0047427c;
  _DAT_004742db = GetModuleHandleA((LPCSTR)0x0);
  FUN_004710cc((int)startupTable);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401059  __GetExceptDLLinfo   (5 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl __GetExceptDLLinfo(undefined4 *info)

{
                    /* 0x1059  1  __GetExceptDLLinfo */
  _DAT_00488f84 = __getTlsBlock();
  _DAT_00488f84 = _DAT_00488f84 + 0x1c;
  *info = 0x82727349;
  info[1] = &DAT_00488f70;
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
// 0x00401150  InitStaticStrings   (85 bytes)   [analysis]
//   static initialiser of two global strings
//   file placement: inferred (precedes first anchor)
/* WARNING: Removing unreachable block (ram,0x0040118f) */
void __stdcall InitStaticStrings(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474314);
  (*(undefined * *)&DAT_0048b444) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004011a8  DestroyStaticStrings   (163 bytes)   [analysis]
//   static destructor of two global strings
//   file placement: inferred (precedes first anchor)
void __stdcall DestroyStaticStrings(void)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474334);
  if (DAT_0048b444 != 0) {
    if (*(int *)(DAT_0048b444 + -0xc) != -1) {
      strRep = (int *)(DAT_0048b444 + -0xc);
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
      if (prevRefs != 0) goto LAB_0040123b;
    }
    operator_delete();
    DAT_0048b444 = 0;
  }
LAB_0040123b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040124c  DMDialog::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: DMDialog::vf14 [rtti:vtable]
undefined4 __cdecl DMDialog::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_00422b68(self[1],(int *)&DMDialog::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TDialog::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401294  DMDialog::DMDialog   (1042 bytes)   [rtti:vtable-store constructor]
//   constructor: stores DMDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl DMDialog::DMDialog(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4747f4);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x366);
    self[0x366] = (int)(self + 0x363);
    self[0x367] = (int)(self + 0x364);
    self[1] = (int)(self + 0x363);
    self[2] = (int)(self + 0x364);
    self[0x362] = 0;
    self[0x365] = 0;
    self[0x363] = (int)&OWL::TEventHandler::vftable;
    self[0x364] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_435d18(self + 0x366,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xd70;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0xd70;
  OWL::TDialog::TDialog(self,1,param_3,param_4,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xd70;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0xd70;
  DictionaryMaintainer::DictionaryMaintainer(self + 6);
  self[3] = (int)&DMDialog::vftable;
  self[6] = (int)&PTR_LAB_00474eac;
  *(undefined ***)self[1] = &PTR_LAB_00474ec8;
  *(undefined ***)self[2] = &PTR_LAB_00474ed4;
  *(undefined ***)(*self + 8) = &PTR_LAB_00474ee0;
  self[7] = 0;
  self[8] = 0;
  OWL::TEdit::TEdit(self + 9,0,*self,0x6f,1000,0);
  OWL::TEdit::TEdit((int *)((int)self + 0xd6),0,*self,0x66,0,0);
  OWL::TEdit::TEdit(self + 0x62,0,*self,0x69,0,0);
  OWL::TEdit::TEdit((int *)((int)self + 0x23a),0,*self,0x71,1000,0);
  OWL::TCheckBox::TCheckBox(self + 0xbb,0,*self,0x79,0,0);
  TSDictionaryBuilderProgressBar::TSDictionaryBuilderProgressBar(self + 0xe7,0,*self,0x102);
  OWL::TStatic::TStatic(self + 0x114,0,*self,0x67,0,0);
  OWL::TButton::TButton((int *)((int)self + 0x4fe),0,*self,0x70,0);
  OWL::TButton::TButton((int *)((int)self + 0x5aa),0,*self,0x68,0);
  OWL::TButton::TButton((int *)((int)self + 0x656),0,*self,0x78,0);
  OWL::TButton::TButton((int *)((int)self + 0x702),0,*self,0x65,0);
  OWL::TButton::TButton((int *)((int)self + 0x7ae),0,*self,0x6a,0);
  OWL::TButton::TButton((int *)((int)self + 0x85a),0,*self,1,0);
  OWL::TScrollBar::TScrollBar((int *)((int)self + 0x906),0,*self,0x6c,0);
  OWL::TScrollBar::TScrollBar(self + 0x26e,0,*self,0x6e,0);
  OWL::TScrollBar::TScrollBar((int *)((int)self + 0xa6a),0,*self,0x77,0);
  OWL::TEdit::TEdit(self + 0x2c7,0,*self,0x6b,0,0);
  OWL::TEdit::TEdit((int *)((int)self + 0xbce),0,*self,0x6d,0,0);
  OWL::TEdit::TEdit(self + 800,0,*self,0x76,0,0);
  self[0x34d] = 0;
  TSBuildProfile::TSBuildProfile((int)(self + 0x34e));
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004016c0  DMDialog::vf15   (262 bytes)   [rtti:vtable virtual slot 15]
bool __cdecl DMDialog::vf15(int self)

{
  int iVar1;
  undefined4 intText;
  bool bVar3;
  uint string_ [7162];
  undefined4 uStackY_101c;
  
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  bVar3 = *(int *)(self + 0x1c) != 2;
  if (bVar3) {
    GetWindowTextA(*(HWND *)(*(int *)(self + 0x24) + 0xc),(LPSTR)string_,0x8000);
    std::string::assign_cstr(self + 0xd58,string_);
    GetWindowTextA(*(HWND *)(*(int *)(self + 0xd6) + 0xc),(LPSTR)string_,0x8000);
    std::string::assign_cstr(self + 0xd68,string_);
    intText = DMDialog::GetIntText(self,(int *)(self + 0xb1c));
    *(undefined4 *)(self + 0xd78) = intText;
    intText = DMDialog::GetIntText(self,(int *)(self + 0xbce));
    *(undefined4 *)(self + 0xd7c) = intText;
    intText = DMDialog::GetIntText(self,(int *)(self + 0xc80));
    *(undefined4 *)(self + 0xd80) = intText;
    uStackY_101c = 0x4017a0;
    iVar1 = FUN_00438338(*(int *)(self + 0x2ec),0xf0,0,0);
    *(uint *)(self + 0xd84) = (uint)(iVar1 == 1);
    TSBuildProfile::Save(self + 0xd38);
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004017c8  DMDialog::vf9   (36 bytes)   [rtti:vtable virtual slot 9]
void __cdecl DMDialog::vf9(int *self,INT_PTR result)

{
  if (self[7] == 2) {
    self[7] = 3;
    return;
  }
  OWL::TDialog::Destroy(self,result);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004017ec  DMDialog::vf11   (2076 bytes)   [rtti:vtable virtual slot 11]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DMDialog::vf11(int *self)

{
  int iVar1;
  int *strRep;
  uint uVar3;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  undefined1 exceptMsg2 [248];
  undefined4 unused2;
  undefined4 unused3;
  int lineLen;
  uint local_150;
  undefined1 s;
  uint local_148;
  undefined1 *unused4;
  undefined4 unused5;
  int *unused6;
  int *unused7;
  int *newData2;
  int *unused8;
  uint unused9;
  undefined1 *unused10;
  int *newRep;
  int *unused11;
  uint len;
  int *strRep2;
  undefined1 *unused12;
  int *unused13;
  undefined4 unused14;
  uint *msgText;
  uint local_fc;
  undefined1 *unused15;
  undefined4 unused16;
  int *unused17;
  int *unused18;
  int *unused19;
  int *unused20;
  uint unused21;
  undefined1 *unused22;
  int *newRep2;
  int *unused23;
  uint len2;
  int *strRep3;
  undefined1 *unused24;
  int *unused25;
  undefined4 unused26;
  uint *msgText2;
  undefined1 *unused27;
  undefined4 unused28;
  int unused29;
  undefined1 *unused30;
  undefined4 unused31;
  int unused32;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str3;
  undefined1 str2 [8];
  int *str4;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused33;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused34;
  undefined1 result [8];
  int str5;
  undefined1 local_14 [8];
  int str6;
  
  __InitExceptBlockLDTC(0x474960);
  OWL::TDialog::SetupWindow(self);
  ehContext = 8;
  GetProgramDirectory((int)local_14);
  ehDtorCount = ehDtorCount + 1;
  TSBuildProfile::Load((int)(self + 0x34e),(int)local_14);
  ehDtorCount = ehDtorCount + -1;
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      strRep = (int *)(str6 + -0xc);
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
      if (iVar1 != 0) goto LAB_004018b8;
    }
    unused32 = str6 + -0xc;
    operator_delete();
    unused31 = 0;
    unused30 = local_14;
    str6 = 0;
    unused3 = 0;
  }
LAB_004018b8:
  ehContext = 0x20;
  GetMyDocumentsDirectory((int)result);
  ehDtorCount = ehDtorCount + 1;
  std::string::operator_assign(0x48b43c,(int)result);
  ehDtorCount = ehDtorCount + -1;
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      strRep = (int *)(str5 + -0xc);
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
      if (iVar1 != 0) goto LAB_00401962;
    }
    unused29 = str5 + -0xc;
    operator_delete();
    unused28 = 0;
    unused27 = result;
    str5 = 0;
    unused2 = 0;
  }
LAB_00401962:
  if (*(int *)(DAT_0048b444 + -4) == 0) goto LAB_00401eec;
  uVar3 = *(int *)(DAT_0048b444 + -4) - 1;
  if (g_stringNpos - 0xeU < uVar3) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00402064;
    objectDtor = 0;
    ehContext = 0x44;
    msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00488a54);
    std::string::string_from_cstr((int)str2,msgText2);
    ehDtorCount = ehDtorCount + 2;
    lengthError[0] = &std::logic_error::vftable;
    unused26 = 0;
    unused34 = (int *)0x0;
    ehContext = 0x50;
    if (str4[-3] == -1 || str4[-3] + 1 < 0) {
      len2 = str4[-1];
      newRep2 = std::string::__getRep(newStr2,len2,len2);
      unused22 = newStr2;
      newData = newRep2 + 3;
      unused21 = len2;
      unused20 = str4;
      unused19 = newData;
      unused23 = newData;
      unused34 = newData;
      memcpy(newData,str4,len2);
    }
    else {
      unused24 = newStr2;
      unused25 = str4;
      unused34 = str4;
      strRep3 = str4 + -3;
      if (strRep3 != &g_nullStringRep) {
        *strRep3 = *strRep3 + 1;
      }
    }
    ehContext = 0x44;
    lengthError[0] = &std::length_error::vftable;
    ehDtorCount = ehDtorCount + 2;
    if (str4 != (int *)0x0) {
      if (str4[-3] != -1) {
        strRep = str4 + -3;
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
        if (iVar1 != 0) goto LAB_00401bbd;
      }
      unused18 = str4 + -3;
      unused17 = str4 + -3;
      operator_delete();
      unused16 = 0;
      unused15 = str2;
      str4 = (int *)0x0;
      unused = 0;
    }
LAB_00401bbd:
    ehContext = 0x38;
    _ThrowExceptionLDTC((uint *)&DAT_00402008,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  if (uVar3 < *(uint *)(DAT_0048b444 + -4)) {
    local_fc = *(int *)(DAT_0048b444 + -4) - uVar3;
    if (*(uint *)(DAT_0048b444 + -4) < uVar3) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_004021bc;
      objectDtor = 0;
      ehContext = 0x74;
      msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00488a60);
      std::string::string_from_cstr((int)str,msgText);
      ehDtorCount = ehDtorCount + 2;
      outOfRange[0] = &std::logic_error::vftable;
      unused14 = 0;
      unused33 = (int *)0x0;
      ehContext = 0x80;
      if (str3[-3] == -1 || str3[-3] + 1 < 0) {
        len = str3[-1];
        newRep = std::string::__getRep(newStr,len,len);
        unused10 = newStr;
        newData2 = newRep + 3;
        unused9 = len;
        unused8 = str3;
        unused11 = newData2;
        unused33 = newData2;
        memcpy(newData2,str3,len);
      }
      else {
        unused12 = newStr;
        unused13 = str3;
        unused33 = str3;
        strRep2 = str3 + -3;
        if (strRep2 != &g_nullStringRep) {
          *strRep2 = *strRep2 + 1;
        }
      }
      ehContext = 0x74;
      outOfRange[0] = &std::out_of_range::vftable;
      ehDtorCount = ehDtorCount + 2;
      if (str3 != (int *)0x0) {
        if (str3[-3] != -1) {
          strRep = str3 + -3;
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
          if (iVar1 != 0) goto LAB_00401e3d;
        }
        unused7 = str3 + -3;
        unused6 = str3 + -3;
        operator_delete();
        unused5 = 0;
        unused4 = str;
        str3 = (int *)0x0;
      }
LAB_00401e3d:
      ehContext = 0x38;
      _ThrowExceptionLDTC((uint *)&DAT_00402160,(undefined4*)outOfRange,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    local_148 = *(int *)(DAT_0048b444 + -4) - uVar3;
    s = 0;
    local_150 = local_148;
    if (local_fc < local_148) {
      local_150 = local_fc;
    }
    std::string::replace(0x48b43c,uVar3,local_150,(uint)&s,0,0,0);
  }
  else {
    std::string::replace_fill(0x48b43c,*(uint *)(DAT_0048b444 + -4),0,uVar3 - *(int *)(DAT_0048b444 + -4),0);
  }
  if ((undefined4 *)(DAT_0048b444 + -0xc) != &g_nullStringRep) {
    *(undefined4 *)(DAT_0048b444 + -0xc) = 0;
  }
LAB_00401eec:
  DMDialog::SetIntText(self,self + 0x2c7);
  DMDialog::SetIntText(self,(int *)((int)self + 0xbce));
  DMDialog::SetIntText(self,self + 800);
  FUN_0043d358(self + 0xbb,(uint)(self[0x361] != 0));
  iVar1 = thunk_access((LPCSTR)self[0x35c],0);
  if (iVar1 == 0) {
    DMDialog::SetWordListFile((int)self,(uint *)self[0x35c]);
  }
  iVar1 = ReadDescriptionLine((LPCSTR)self[0x358],&DAT_0048b33c,0x100,&lineLen);
  self[8] = iVar1;
  if (iVar1 == 0) {
    iVar1 = ReadDescriptionLine((LPCSTR)self[0x354],&DAT_0048b33c,0x100,&lineLen);
    self[8] = iVar1;
    if (iVar1 != 0) {
      SetWindowTextA(*(HWND *)(self[9] + 0xc),(LPCSTR)self[0x354]);
    }
  }
  else {
    SetWindowTextA(*(HWND *)(self[9] + 0xc),(LPCSTR)self[0x358]);
  }
  DMDialog::UpdateControls((int)self);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040233c  DMDialog::EvClose   (15 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_CLOSE
void __cdecl DMDialog::EvClose(int *self)

{
  EvClose_440344(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040234c  DMDialog::PumpMessages   (97 bytes)   [analysis]
//   processes pending window messages during a build; true when the user asked to stop
bool __cdecl DMDialog::PumpMessages(int *self,int unused)

{
  BOOL ok;
  MSG msg;
  
  while( true ) {
    ok = PeekMessageA(&msg,(HWND)0x0,0,0,1);
    if (ok == 0) break;
    ok = IsDialogMessageA(*(HWND *)(*self + 0xc),&msg);
    if (ok == 0) {
      TranslateMessage(&msg);
      DispatchMessageA(&msg);
    }
  }
  DMDialog::SetAbort(self + 0xe7,unused);
  return self[7] == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004023b0  DMDialog::vf16   (141 bytes)   [rtti:vtable virtual slot 16]
undefined4 __cdecl DMDialog::vf16(int *self,undefined4 *param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined3 regHigh;
  int unused;
  
  if ((param_2 != (undefined4 *)0x0) &&
     (puVar2 = FUN_00469618(param_2,param_3,(int *)self[0x34d]), puVar2 == (undefined4 *)0x0)) {
    return 1;
  }
  uVar3 = param_4 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  if (uVar3 == 0) {
    if (param_5 < 1) {
      if ((int)param_4 < 0) {
        param_4 = param_4 + 0x1f;
      }
      unused = (int)(CONCAT44((int)param_4 >> 0x1f,(int)param_4 >> 5) % 100);
    }
    else {
      unused = (int)(param_4 * 100) / param_5;
    }
    bVar1 = DMDialog::PumpMessages(self,unused);
    if (CONCAT31(regHigh,bVar1) == 0) {
      return 0;
    }
  }
  return 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402440  DMDialog::vf17   (21 bytes)   [rtti:vtable virtual slot 17]
void __cdecl DMDialog::vf17(int self)

{
  FUN_0046a364(*(int **)(self + 0xd34));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402458  DMDialog::vf18   (79 bytes)   [rtti:vtable virtual slot 18]
void __cdecl DMDialog::vf18(int self,byte *format)

{
  int iVar1;
  CHAR aCStackY_10004 [61420];
  undefined4 uStackY_1018;
  
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uStackY_1018 = 0x402489;
  sprintf(aCStackY_10004,format);
  SetWindowTextA(*(HWND *)(*(int *)(self + 0x450) + 0xc),aCStackY_10004);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004024a8  DMDialog::vf19   (26 bytes)   [rtti:vtable virtual slot 19]
void __cdecl DMDialog::vf19(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x48))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004024c4  DMDialog::Cmd101   (673 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(101)
int __cdecl DMDialog::Cmd101(int *self)

{
  int iVar1;
  int shortest;
  int longest;
  int iVar4;
  int *piVar5;
  undefined1 auStackY_107fc [1024];
  uint auStackY_103fc [250];
  CHAR aCStackY_10014 [32768];
  CHAR fileName [26600];
  undefined4 uStackY_182c;
  int progressTotal;
  
  iVar1 = 0x10;
  do {
    shortest = iVar1;
    iVar1 = shortest + -1;
  } while (shortest + -1 != 0);
  if (self[7] == 1) {
    GetWindowTextA(*(HWND *)(*(int *)((int)self + 0xd6) + 0xc),fileName,0x8000);
    GetWindowTextA(*(HWND *)(self[0x62] + 0xc),aCStackY_10014,0x8000);
    GetWindowTextA(*(HWND *)(*(int *)((int)self + 0x23a) + 0xc),(LPSTR)auStackY_103fc,1000);
    iVar1 = FUN_00438338(self[0xbb],0xf0,0,0);
    shortest = DMDialog::GetIntText(self,self + 0x2c7);
    if (100 < shortest) {
      shortest = 100;
    }
    if (shortest < 1) {
      shortest = 1;
    }
    longest = DMDialog::GetIntText(self,(int *)((int)self + 0xbce));
    if (100 < longest) {
      longest = 100;
    }
    if (longest < 1) {
      longest = 1;
    }
    progressTotal = DMDialog::GetIntText(self,self + 800);
    if (100 < progressTotal) {
      progressTotal = 100;
    }
    if (progressTotal < 0) {
      progressTotal = 0;
    }
    iVar4 = thunk_access(aCStackY_10014,0);
    if (iVar4 == 0) {
      sprintf(auStackY_107fc,PTR_s_A_file_named_s_already_exists_A_004742f0);
      iVar4 = (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
      if (iVar4 != 6) {
        return iVar4;
      }
    }
    DMDialog::ReadOptions((int)self);
    self[7] = 2;
    FUN_00438410(*(int *)((int)self + 0x702),(uint *)"&Abandon");
    piVar5 = fopen(fileName,&DAT_00474513);
    self[0x34d] = (int)piVar5;
    if (self[0x34d] == 0) {
      (**(code **)(self[3] + 0x4c))();
    }
    if (self[0x34d] != 0) {
      uStackY_182c = 0x4026de;
      WriteTsdDictionary(self + 6,0x48b33c,aCStackY_10014,auStackY_103fc,shortest,longest,progressTotal,
                   (uint)(iVar1 == 1));
    }
    (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
    if ((int *)self[0x34d] != (int *)0x0) {
      FUN_00469508((int *)self[0x34d]);
      self[0x34d] = 0;
    }
    DMDialog::ReadOptions((int)self);
    DMDialog::UpdateControls((int)self);
    shortest = FUN_00438410(*(int *)((int)self + 0x702),(uint *)"&Start");
  }
  else if (self[7] == 2) {
    self[7] = 3;
  }
  return shortest;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402768  DMDialog::Cmd106   (344 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(106)
void __cdecl DMDialog::Cmd106(int *self)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 path [8];
  int str;
  undefined1 result [8];
  int str2;
  
  __InitExceptBlockLDTC(0x474a30);
  std::string::string_from_cstr((int)path,(uint *)"tsbuild.chm");
  ResolveRelativePath((int)result,(int)path);
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
      if (prevRefs != 0) goto LAB_00402823;
    }
    operator_delete();
    str = 0;
  }
LAB_00402823:
  ShowHtmlHelp(*(HWND *)(*self + 0xc));
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
      if (prevRefs != 0) goto LAB_004028af;
    }
    operator_delete();
  }
LAB_004028af:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004028c0  DMDialog::Cmd114   (121 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(114)
void __cdecl DMDialog::Cmd114(undefined4 *self)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int dialog [44];
  
  __InitExceptBlockLDTC(0x474a78);
  piVar1 = OWL::TDialog::TDialog(dialog,0,*self,(uint *)0xc8,0);
  (**(code **)(piVar1[3] + 0x14))();
  OWL::TDialog::_dtor(dialog,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004029ac  DMDialog::GetControlText   (60 bytes)   [analysis]
//   the text of an edit control as a std::string
void __cdecl DMDialog::GetControlText(undefined4 self,int *edit,int out)

{
  int textLen;
  
  textLen = GetWindowTextLengthA(*(HWND *)(*edit + 0xc));
  if (textLen < 1) {
    *(undefined4 *)(out + 0x18) = (*(undefined4 *)&DAT_0048b444);
  }
  else {
    GetWindowTextA(*(HWND *)(*edit + 0xc),*(LPSTR *)(out + 8),0x104);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004029e8  DMDialog::UpdateControls   (86 bytes)   [analysis]
//   enables the Build button only when the word list and output names are filled in
void __cdecl DMDialog::UpdateControls(int self)

{
  int textLen;
  
  textLen = GetWindowTextLengthA(*(HWND *)(*(int *)(self + 0xd6) + 0xc));
  if ((*(int *)(self + 0x20) != 0) && (0 < textLen)) {
    (**(code **)(*(int *)(*(int *)(self + 0x702) + 8) + 0x60))();
    *(undefined4 *)(self + 0x1c) = 1;
    return;
  }
  (**(code **)(*(int *)(*(int *)(self + 0x702) + 8) + 0x60))();
  *(undefined4 *)(self + 0x1c) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402a40  DMDialog::Cmd112   (828 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(112)
void __cdecl DMDialog::Cmd112(int *self)

{
  int *piVar1;
  int iVar2;
  undefined4 *sehChainHead;
  char cVar3;
  undefined *puVar4;
  int lineLen;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int str2;
  int basicOstringstream [28];
  int local_13c;
  int local_138;
  undefined4 streamableBase [2];
  undefined4 window [34];
  uint out [2];
  LPCSTR fileName;
  
  __InitExceptBlockLDTC(0x474af8);
  ehContext = 8;
  FUN_00450b7c(out,0x180c,(uint *)"Alphabet mapping files (*.tsm)|*.tsm|All Files (*.*)|*.*",0,0,0x474571,0,0,
               0);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  DMDialog::GetControlText(self,self + 9,(int)out);
  ehContext = 0x20;
  piVar1 = OWL::TFileOpenDialog::TFileOpenDialog(&local_13c,0,*self,(int)out,0,0x474575,0);
  ehDtorCount = ehDtorCount + 6;
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar3 = iVar2 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  ehDtorCount = ehDtorCount + -6;
  OWL::TCommonDialog::_dtor(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  ehDtorCount = ehDtorCount + -2;
  OWL::TWindow::_dtor(window,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  ehDtorCount = ehDtorCount + -1;
  OWL::TStreamableBase::_dtor(streamableBase,0);
  if (cVar3 == '\0') goto LAB_00402d5b;
  iVar2 = ReadDescriptionLine(fileName,&DAT_0048b33c,0x100,&lineLen);
  self[8] = iVar2;
  if (iVar2 == 0) {
    if (lineLen < 1) {
      (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
    }
    else {
      ehContext = 0x2c;
      std::basic_ostringstream_char::basic_ostringstream(basicOstringstream,0,8);
      ehDtorCount = ehDtorCount + 8;
      ehContext = 0x38;
      puVar4 = &LAB_00402f00;
      piVar1 = FUN_0045fc44(basicOstringstream,(uint *)PTR_s_Alphabet_mapping_file_error_at_l_00474300);
      piVar1 = FUN_0045f818(piVar1);
      FUN_0045f9d8(piVar1,puVar4);
      ehContext = 0x44;
      FUN_0045fefc((int)str,(int)basicOstringstream);
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x38;
      (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
      ehDtorCount = ehDtorCount + -1;
      if (str2 != 0) {
        if (*(int *)(str2 + -0xc) != -1) {
          piVar1 = (int *)(str2 + -0xc);
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
          if (iVar2 != 0) goto LAB_00402d03;
        }
        operator_delete();
        str2 = 0;
      }
LAB_00402d03:
      ehDtorCount = ehDtorCount + -8;
      std::basic_ostringstream_char::_dtor(basicOstringstream,2);
      ehContext = 0x14;
    }
    SetWindowTextA(*(HWND *)(self[9] + 0xc),"&Start" + 6);
  }
  else {
    SetWindowTextA(*(HWND *)(self[9] + 0xc),fileName);
  }
  DMDialog::UpdateControls((int)self);
LAB_00402d5b:
  ehDtorCount = ehDtorCount + -1;
  OWL::TOpenSaveDialog::TData::_dtor((int)out,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402f18  DMDialog::Cmd104   (660 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(104)
void __cdecl DMDialog::Cmd104(int *self)

{
  uint pos;
  int *piVar2;
  int iVar3;
  undefined4 isAnsiTextFile;
  char *len;
  undefined4 *sehChainHead;
  char cVar6;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  int local_13c;
  int local_138;
  undefined4 streamableBase [2];
  undefined4 window [34];
  uint out [2];
  uint *fileName;
  
  __InitExceptBlockLDTC(0x474ba4);
  FUN_00450b7c(out,0x180c,(uint *)"Word list files (*.txt)|*.txt|All Files (*.*)|*.*",0,0,0x4745c7,0,0,
               0);
  DMDialog::GetControlText(self,(int *)((int)self + 0xd6),(int)out);
  piVar2 = OWL::TFileOpenDialog::TFileOpenDialog(&local_13c,0,*self,(int)out,0,0x4745cb,0);
  iVar3 = (**(code **)(piVar2[3] + 0x14))();
  cVar6 = iVar3 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  OWL::TWindow::_dtor(window,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(streamableBase,0);
  if (cVar6 != '\0') {
    isAnsiTextFile = IsAnsiTextFile((LPCSTR)fileName);
    if ((char)isAnsiTextFile == '\0') {
      std::string::string_from_cstr((int)str,fileName);
      pos = *(uint *)(str2 + -4);
      len = strlen((uint *)" doesn't seem to be an ANSI text file");
      std::string::replace((int)str,pos,0,0x4745e4,(uint)len,0,(uint)len);
      (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
      if (str2 != 0) {
        if (*(int *)(str2 + -0xc) != -1) {
          piVar2 = (int *)(str2 + -0xc);
          if (piVar2 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (piVar2 == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2 + 1;
          }
          if (iVar3 != 0) goto LAB_0040318c;
        }
        operator_delete();
        str2 = 0;
      }
    }
    else {
      DMDialog::SetWordListFile((int)self,fileName);
    }
  }
LAB_0040318c:
  OWL::TOpenSaveDialog::TData::_dtor((int)out,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004031ac  DMDialog::Cmd120   (361 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(120)
void __cdecl DMDialog::Cmd120(undefined4 *self)

{
  int *piVar1;
  int iVar2;
  undefined4 *sehChainHead;
  char cVar3;
  undefined4 sehPrevFrame;
  int local_13c;
  int local_138;
  undefined4 streamableBase [2];
  undefined4 window [34];
  uint out [2];
  LPCSTR string_;
  
  __InitExceptBlockLDTC(0x474c24);
  FUN_00450b7c(out,0x80c,(uint *)"TEA&Sympathy Dictionary files (*.tsd)|*.tsd|All Files (*.*)|*.*",0,0,0x474359,0,0,0
              );
  DMDialog::GetControlText(self,self + 0x62,(int)out);
  piVar1 = OWL::TFileSaveDialog::TFileSaveDialog(&local_13c,0,*self,(int)out,0,0x474657,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar3 = iVar2 == 1;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_13c,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
  *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
  OWL::TWindow::_dtor(window,0);
  *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(streamableBase,0);
  if (cVar3 != '\0') {
    SetWindowTextA(*(HWND *)(self[0x62] + 0xc),string_);
  }
  OWL::TOpenSaveDialog::TData::_dtor((int)out,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040339c  DMDialog::ReadOptions   (185 bytes)   [analysis]
//   reads the sort/frequency radio buttons and check boxes into the profile
void __cdecl DMDialog::ReadOptions(int self)

{
  (**(code **)(*(int *)(*(int *)(self + 0x4fe) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x5aa) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x656) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x188) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x23a) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x85a) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x906) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x9b8) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0xb1c) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0xbce) + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403458  DMDialog::Cmd108   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(108)
void __cdecl DMDialog::Cmd108(int self)

{
  DMDialog::ClampLengthEdit(self,(int *)(self + 0xb1c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403478  DMDialog::Child108_Notify1   (30 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 108, code 1)
void __cdecl DMDialog::Child108_Notify1(int self)

{
  DMDialog::ClampLengthEdit(self,(int *)(self + 0xb1c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403498  DMDialog::Cmd110   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(110)
void __cdecl DMDialog::Cmd110(int self)

{
  DMDialog::ClampLengthEdit(self,(int *)(self + 0xbce));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004034b8  DMDialog::Child110_Notify1   (30 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 110, code 1)
void __cdecl DMDialog::Child110_Notify1(int self)

{
  DMDialog::ClampLengthEdit(self,(int *)(self + 0xbce));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004034d8  DMDialog::Cmd119   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(119)
void __cdecl DMDialog::Cmd119(int self)

{
  DMDialog::ClampLengthEdit(self,(int *)(self + 0xc80));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004034f8  DMDialog::Child119_Notify1   (30 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 119, code 1)
void __cdecl DMDialog::Child119_Notify1(int self)

{
  DMDialog::ClampLengthEdit(self,(int *)(self + 0xc80));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403518  DMDialog::ClampLengthEdit   (58 bytes)   [analysis]
//   re-reads a length edit and writes back the clamped value
void __cdecl DMDialog::ClampLengthEdit(undefined4 self,int *edit)

{
  DMDialog::GetIntText(self,edit);
  DMDialog::SetIntText(self,edit);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403554  DMDialog::SetIntText   (49 bytes)   [analysis]
//   writes a number into an edit control
void __cdecl DMDialog::SetIntText(undefined4 self,int *edit)

{
  CHAR string_ [32];
  
  sprintf(string_,&DAT_00474671);
  SetWindowTextA(*(HWND *)(*edit + 0xc),string_);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403588  DMDialog::GetIntText   (45 bytes)   [analysis]
//   reads a number from an edit control (atoi)
int __cdecl DMDialog::GetIntText(undefined4 self,int *edit)

{
  int iVar1;
  CHAR string_ [32];
  
  iVar1 = GetWindowTextA(*(HWND *)(*edit + 0xc),string_,0x1f);
  string_[iVar1] = '\0';
  iVar1 = atoi(string_);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004035b8  DMDialog::SetWordListFile   (445 bytes)   [analysis]
//   sets the word list name and proposes the output name with a .tsd extension
void __cdecl DMDialog::SetWordListFile(int self,uint *fileName)

{
  char *pcVar1;
  uint *puVar2;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  uint uVar5;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str3;
  undefined1 str2 [8];
  LPCSTR string_;
  
  __InitExceptBlockLDTC(0x474c7c);
  SetWindowTextA(*(HWND *)(*(int *)(self + 0xd6) + 0xc),(LPCSTR)fileName);
  pcVar1 = strlen(fileName);
  puVar2 = thunk_strrchr(fileName,'.');
  if (puVar2 != (uint *)0x0) {
    pcVar1 = (char *)((int)puVar2 - (int)fileName);
  }
  uVar5 = 0;
  std::string::string_from_cstr((int)str,fileName);
  FUN_0045c818((int)str2,(int)str,uVar5,(uint)pcVar1);
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
      if (prevRefs != 0) goto LAB_004036ab;
    }
    operator_delete();
    str3 = 0;
  }
LAB_004036ab:
  uVar5 = *(uint *)(string_ + -4);
  pcVar1 = strlen((uint *)&DAT_00474358 /* ".tsd" */);
  std::string::replace((int)str2,uVar5,0,0x474358,(uint)pcVar1,0,(uint)pcVar1);
  SetWindowTextA(*(HWND *)(*(int *)(self + 0x188) + 0xc),string_);
  DMDialog::UpdateControls(self);
  if (string_ != (LPCSTR)0x0) {
    if (*(int *)(string_ + -0xc) != -1) {
      strRep = (int *)(string_ + -0xc);
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
      if (prevRefs != 0) goto LAB_00403764;
    }
    operator_delete();
  }
LAB_00403764:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404164  DMDialog::~DMDialog   (1010 bytes)   [rtti:dtor destructor]
//   written in code as DMDialog::_dtor
void __cdecl DMDialog::_dtor(int *self,byte dtorFlags)

{
  int *control;
  int *control2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474f88);
  if (self != (int *)0x0) {
    TSBuildProfile::_dtor((int)(self + 0x34e),2);
    OWL::TEdit::_dtor(self + 800,2);
    OWL::TEdit::_dtor((int *)((int)self + 0xbce),2);
    OWL::TEdit::_dtor(self + 0x2c7,2);
    control2 = (int *)((int)self + 0xa6a);
    control = (int *)(*(int *)((int)self + 0xa6e) + -4);
    *control = *control + -8;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + -8;
    OWL::TControl::_dtor(control2,0);
    control = (int *)(*(int *)((int)self + 0xa6e) + -4);
    *control = *control + 8;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + 8;
    control = (int *)(*(int *)((int)self + 0xa6e) + -4);
    *control = *control + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0xa96),0);
    control = (int *)(*(int *)((int)self + 0xa6e) + -4);
    *control = *control + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0xa8e),0);
    control = self + 0x26e;
    *(int *)(self[0x26f] + -4) = *(int *)(self[0x26f] + -4) + -8;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -8;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x26f] + -4) = *(int *)(self[0x26f] + -4) + 8;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 8;
    *(int *)(self[0x26f] + -4) = *(int *)(self[0x26f] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x279,0);
    *(int *)(self[0x26f] + -4) = *(int *)(self[0x26f] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x277,0);
    control2 = (int *)((int)self + 0x906);
    control = (int *)(*(int *)((int)self + 0x90a) + -4);
    *control = *control + -8;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + -8;
    OWL::TControl::_dtor(control2,0);
    control = (int *)(*(int *)((int)self + 0x90a) + -4);
    *control = *control + 8;
    *(int *)(*control2 + -4) = *(int *)(*control2 + -4) + 8;
    control = (int *)(*(int *)((int)self + 0x90a) + -4);
    *control = *control + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x932),0);
    control = (int *)(*(int *)((int)self + 0x90a) + -4);
    *control = *control + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x92a),0);
    OWL::TButton::_dtor((int *)((int)self + 0x85a),2);
    OWL::TButton::_dtor((int *)((int)self + 0x7ae),2);
    OWL::TButton::_dtor((int *)((int)self + 0x702),2);
    OWL::TButton::_dtor((int *)((int)self + 0x656),2);
    OWL::TButton::_dtor((int *)((int)self + 0x5aa),2);
    OWL::TButton::_dtor((int *)((int)self + 0x4fe),2);
    control = self + 0x114;
    *(int *)(self[0x115] + -4) = *(int *)(self[0x115] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x115] + -4) = *(int *)(self[0x115] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x115] + -4) = *(int *)(self[0x115] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x11e,0);
    *(int *)(self[0x115] + -4) = *(int *)(self[0x115] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x11c,0);
    TSDictionaryBuilderProgressBar::_dtor(self + 0xe7,2);
    OWL::TCheckBox::_dtor(self + 0xbb,2);
    OWL::TEdit::_dtor((int *)((int)self + 0x23a),2);
    OWL::TEdit::_dtor(self + 0x62,2);
    OWL::TEdit::_dtor((int *)((int)self + 0xd6),2);
    OWL::TEdit::_dtor(self + 9,2);
    DictionaryMaintainer::_dtor(self + 6,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xd70;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0xd70;
    OWL::TDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xd70;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0xd70;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x366,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x364,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404558  OWL::TWindow::GetTooltip   (11 bytes)   [rtti:vtable virtual slot 1]
//   vtable slot 1; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TWindow::GetTooltip(int self)

{
  return *(undefined4 *)(self + 100);
}

// ----------------------------------------------------------------------------------------------------
// 0x00404564  OWL::TWindow::EnableWindow   (33 bytes)   [rtti:vtable virtual slot 24]
//   vtable slot 24; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TWindow::EnableWindow(int self,byte enable)

{
  BOOL ok;
  
  ok = EnableWindow(*(HWND *)(self + 0xc),(uint)enable);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404588  OWL::TWindow::Invalidate   (25 bytes)   [rtti:vtable virtual slot 26]
//   vtable slot 26; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::Invalidate(int self,byte erase)

{
  InvalidateRect(*(HWND *)(self + 0xc),(RECT *)0x0,(uint)erase);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004045a4  OWL::TWindow::InvalidateRect   (27 bytes)   [rtti:vtable virtual slot 27]
//   vtable slot 27; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::InvalidateRect(int self,RECT *pRect,byte erase)

{
  InvalidateRect(*(HWND *)(self + 0xc),pRect,(uint)erase);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040473c  std::string::~basic_string   (143 bytes)   [rtti:dtor destructor]
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
      if (prevRefs != 0) goto LAB_004047b7;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_004047b7:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404c4c  OWL::TOpenSaveDialog::~TOpenSaveDialog   (168 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TOpenSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TOpenSaveDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474f90);
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
// 0x00404e4c  OWL::TScrollBar::~TScrollBar   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TScrollBar::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScrollBar::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474f98);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
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
// 0x00404f60  OWL::TStatic::~TStatic   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TStatic::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TStatic::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474fa0);
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
// 0x00405004  std::locale::~locale   (110 bytes)   [rtti:dtor destructor]
//   written in code as std::locale::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::locale::_dtor(int *self,byte dtorFlags)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474fb8);
  if (self != (int *)0x0) {
    puVar1 = (undefined4 *)*self;
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405118  BitWriter::FlushWord   (40 bytes)   [analysis]
//   writes the pending 16-bit word of the bit stream to the file (sets g_writeFailed on error)
//   file placement: inferred (address adjacency)
void __cdecl BitWriter::FlushWord(int *file)

{
  uint uVar1;
  
  uVar1 = FUN_00469c98(&GHIDRA_STACK(0x00000008),2,1,file);
  if (uVar1 != 1) {
    (*(undefined4 *)&g_writeFailed) = 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405140  BitWriter::BitWriter   (24 bytes)   [analysis]
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
// 0x00405158  BitWriter::WriteBits   (140 bytes)   [analysis]
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
// 0x004051e4  BitWriter::WriteBytes   (65 bytes)   [analysis]
//   writes bytes through the Huffman code table
//   file placement: inferred (address adjacency)
void __cdecl BitWriter::WriteBytes(undefined4 *self,byte *bytes,int count)

{
  byte *pbVar1;
  
  pbVar1 = bytes + count;
  for (; bytes < pbVar1; bytes = bytes + 1) {
    BitWriter::WriteBits(self,(uint)(byte)(&g_huffmanCodeLengths)[*bytes],(&g_huffmanCodes)[*bytes]);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405228  BitWriter::AlignToWord   (32 bytes)   [analysis]
//   pads the stream to a 32-bit boundary
//   file placement: inferred (address adjacency)
void __cdecl BitWriter::AlignToWord(undefined4 *self)

{
  BitWriter::WriteBits(self,(uint)g_huffmanCodeLengths,g_huffmanCodes);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405248  BitWriter::Flush   (30 bytes)   [analysis]
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
// 0x00405268  ScaleFrequency   (137 bytes)   [analysis]
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
    FUN_0046e008(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    uVar2 = __ftol();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405308  ReverseHuffmanCodes   (94 bytes)   [analysis]
//   reverses the bits of every byte code so the stream can be written low bit first
//   file placement: inferred (address adjacency)
void __stdcall ReverseHuffmanCodes(void)

{
  int i;
  uint uVar2;
  uint *puVar3;
  int local_18;
  byte *local_14;
  
  puVar3 = &g_huffmanCodes;
  local_18 = 0;
  local_14 = &g_huffmanCodeLengths;
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
// 0x00405368  HuffmanNodeLess   (47 bytes)   [analysis]
//   order of two Huffman nodes by weight (for the heap)
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
// 0x00405398  AddBitToSubtree   (58 bytes)   [analysis]
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
// 0x004053d4  StoreCodesAndFree   (64 bytes)   [analysis]
//   walks a Huffman (sub)tree storing each leaf byte code and code length in the tables, freeing the nodes
//   file placement: inferred (address adjacency)
void __cdecl StoreCodesAndFree(int *node)

{
  int byteValue;
  
  if ((int *)*node == (int *)0x0) {
    byteValue = node[2];
    (&g_huffmanCodes)[byteValue] = node[5];
    (&g_huffmanCodeLengths)[byteValue] = (char)node[4];
  }
  else {
    StoreCodesAndFree((int *)*node);
    StoreCodesAndFree((int *)node[1]);
  }
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405414  BuildHuffmanCodes   (340 bytes)   [analysis]
//   builds the Huffman tree from the byte frequencies (lightest two nodes merged repeatedly), then assigns each byte its code and length
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
  local_414[0] = &DAT_0048b950;
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
    _DAT_0048b44c = iVar6;
    for (i = 0; i < iVar6 + -1; i = i + 1) {
      uVar4 = iVar6 - i;
      FUN_0047035c((undefined1 *)(local_414 + 1),uVar4,4,HuffmanNodeLess);
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
    pbVar2 = &g_huffmanCodeLengths;
    do {
      if (0x20 < *pbVar2) break;
      iVar6 = iVar6 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar6 < 0x100);
    if (iVar6 < 0x100) {
      iVar6 = 0;
      local_418 = 0;
      piVar1 = &g_huffmanCodes;
      puVar3 = &g_huffmanCodeLengths;
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
// 0x00405568  ParseDefinitionLine   (1400 bytes)   [analysis]
//   splits one definition line of the input into headwords, qualifiers and text (RTF braces "\{}" escaped)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00405624) */
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
  __InitExceptBlockLDTC(0x475080);
  local_40 = DAT_00474fdc;
  unused14 = DAT_00474fe0;
  unused15 = DAT_00474fe2;
  uVar2 = FUN_0046786c((byte *)line2,(byte *)&local_40,6);
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
LAB_004056bf:
          pos = local_c[-1];
          s = puVar5;
          len = strlen(puVar5);
          std::string::replace((int)str,pos,0,(uint)s,(uint)len,0,(uint)len);
        }
        else if (cVar1 == '\'') {
          iVar7 = 1;
        }
        else if (cVar1 != '*') {
          if (cVar1 != '-') goto LAB_0040571b;
          goto LAB_004056fd;
        }
      }
      else if (cVar1 == '_') {
LAB_004056fd:
        std::string::replace_fill((int)str,local_c[-1],0,1,0x2d);
      }
      else {
        if ((cVar1 == '{') || (cVar1 == '}')) goto LAB_004056bf;
LAB_0040571b:
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
          while (iVar4 = FUN_0046b510((int)(char)*puVar5), iVar4 != 0) {
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
            local_b8 = thunk_FUN_00467ac4(local_b4,&local_114);
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
        uVar2 = strcspn((char *)line2,&DAT_0047520e /* "\{}" */);
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
      if (iVar7 != 0) goto LAB_00405ac5;
    }
    unused3 = local_c + -3;
    unused2 = local_c + -3;
    operator_delete();
  }
LAB_00405ac5:
  *sehChainHead = sehPrevFrame;
  return out;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405ae0  ParseMappingLine   (649 bytes)   [analysis]
//   parses one line of the letter mapping file (byte, letter class, display byte)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00405b24) */
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
  
  __InitExceptBlockLDTC(0x475138);
  local_c = (undefined4 *)&g_emptyStringData;
  iVar2 = FUN_00467a94(line,&DAT_00475204);
  if (line[iVar2] != '\0') {
    pcVar4 = line + iVar2;
    pcVar3 = thunk_FUN_00467a3c(pcVar4,&DAT_00475204);
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
          if (iVar2 != 0) goto LAB_00405c05;
        }
        operator_delete();
        str3 = 0;
      }
    }
  }
LAB_00405c05:
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
      if (iVar2 != 0) goto LAB_00405d4e;
    }
    operator_delete();
  }
LAB_00405d4e:
  *sehChainHead = sehPrevFrame;
  return mapping;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405d6c  WriteDefinitionRecord   (476 bytes)   [analysis]
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
  
  __InitExceptBlockLDTC(0x4751cc);
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
  uVar2 = FUN_00469c98(buffer,1,uVar3,writer);
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
      if (iVar4 != 0) goto LAB_00405f36;
    }
    operator_delete();
  }
LAB_00405f36:
  *sehChainHead = sehPrevFrame;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405f48  DefinitionRecordLess   (29 bytes)   [analysis]
//   order of two definition entries by their stored offset
//   file placement: inferred (address adjacency)
bool __cdecl DefinitionRecordLess(int a,int b)

{
  return *(int *)(*(int *)(a + 8) + 0x20) < *(int *)(*(int *)(b + 8) + 0x20);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041740c  DMDialog::SetAbort   (33 bytes)   [analysis]
//   records that the user asked to stop
void __cdecl DMDialog::SetAbort(int *self,int abort)

{
  if (abort != self[6]) {
    self[6] = abort;
    (**(code **)(*(int *)(*self + 8) + 0x68))();
  }
  return;
}

} // namespace tea
