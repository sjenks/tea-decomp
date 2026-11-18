// TSMerge.exe — application module "DMDialog"
// 47 functions, 0x00401490..0x004096a0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00401490  DMDialog::SetAbort   (33 bytes)   [analysis]
//   records that the user asked to stop
void __cdecl DMDialog::SetAbort(int *self,int abort)

{
  if (abort != self[6]) {
    self[6] = abort;
    (**(code **)(*(int *)(*self + 8) + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401678  DMDialog::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: DMDialog::vf14 [rtti:vtable]
undefined4 __cdecl DMDialog::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_004179f4(self[1],(int *)&DMDialog::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TDialog::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004016c0  DMDialog::DMDialog   (1067 bytes)   [rtti:vtable-store constructor]
//   constructor: stores DMDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl DMDialog::DMDialog(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4619f8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x392);
    self[0x392] = (int)(self + 0x38f);
    self[0x393] = (int)(self + 0x390);
    self[1] = (int)(self + 0x38f);
    self[2] = (int)(self + 0x390);
    self[0x38e] = 0;
    self[0x391] = 0;
    self[0x38f] = (int)&OWL::TEventHandler::vftable;
    self[0x390] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84(self + 0x392,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe20;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0xe20;
  OWL::TDialog::TDialog(self,1,param_3,param_4,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe20;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0xe20;
  self[6] = (int)&MergeClient::vftable;
  self[3] = (int)&DMDialog::vftable;
  self[6] = (int)&PTR_LAB_00462074;
  *(undefined ***)self[1] = &PTR_LAB_00462084;
  *(undefined ***)self[2] = &PTR_LAB_00462090;
  *(undefined ***)(*self + 8) = &PTR_LAB_0046209c;
  self[7] = 0;
  OWL::TRadioButton::TRadioButton(self + 8,0,*self,0x6c,0,0);
  OWL::TRadioButton::TRadioButton(self + 0x34,0,*self,0x72,0,0);
  OWL::TRadioButton::TRadioButton(self + 0x60,0,*self,0x73,0,0);
  OWL::TRadioButton::TRadioButton(self + 0x8c,0,*self,0x6d,0,0);
  OWL::TRadioButton::TRadioButton(self + 0xb8,0,*self,0x6e,0,0);
  OWL::TRadioButton::TRadioButton(self + 0xe4,0,*self,0x74,0,0);
  OWL::TRadioButton::TRadioButton(self + 0x110,0,*self,0x75,0,0);
  OWL::TRadioButton::TRadioButton(self + 0x13c,0,*self,0x76,0,0);
  OWL::TRadioButton::TRadioButton(self + 0x168,0,*self,0x77,0,0);
  OWL::TRadioButton::TRadioButton(self + 0x194,0,*self,0x79,0,0);
  OWL::TEdit::TEdit(self + 0x1c0,0,*self,0x6f,0x400,0);
  OWL::TEdit::TEdit((int *)((int)self + 0x7b2),0,*self,0x66,0x400,0);
  OWL::TEdit::TEdit(self + 0x219,0,*self,0x69,0x400,0);
  DMProgressBar::DMProgressBar(self + 0x246,0,*self,0x102);
  OWL::TStatic::TStatic(self + 0x273,0,*self,0x67,0,0);
  OWL::TButton::TButton((int *)((int)self + 0xa7a),0,*self,0x70,0);
  OWL::TButton::TButton((int *)((int)self + 0xb26),0,*self,0x68,0);
  OWL::TButton::TButton((int *)((int)self + 0xbd2),0,*self,0x78,0);
  OWL::TButton::TButton((int *)((int)self + 0xc7e),0,*self,0x65,0);
  OWL::TButton::TButton((int *)((int)self + 0xd2a),0,*self,1,0);
  TSMergeProfile::TSMergeProfile((int)(self + 0x37c));
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401b04  DMDialog::vf15   (217 bytes)   [rtti:vtable virtual slot 15]
bool __cdecl DMDialog::vf15(int self)

{
  bool bVar1;
  uint string_ [257];
  
  bVar1 = *(int *)(self + 0x1c) != 2;
  if (bVar1) {
    GetWindowTextA(*(HWND *)(*(int *)(self + 0x700) + 0xc),(LPSTR)string_,0x401);
    std::string::assign_cstr(self + 0xe08,string_);
    GetWindowTextA(*(HWND *)(*(int *)(self + 0x7b2) + 0xc),(LPSTR)string_,0x401);
    std::string::assign_cstr(self + 0xe18,string_);
    GetWindowTextA(*(HWND *)(*(int *)(self + 0x864) + 0xc),(LPSTR)string_,0x401);
    std::string::assign_cstr(self + 0xe28,string_);
    *(undefined4 *)(self + 0xe00) = *(undefined4 *)(self + 0xdd8);
    *(undefined4 *)(self + 0xe04) = *(undefined4 *)(self + 0xddc);
    TSMergeProfile::Save(self + 0xdf0);
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401be0  DMDialog::vf16   (200 bytes)   [rtti:vtable virtual slot 16]
uint __cdecl DMDialog::vf16(int *self,int unused)

{
  bool bVar1;
  uint uVar2;
  DWORD tickCount;
  undefined3 regHigh;
  int iVar4;
  
  self[0x378] = self[0x378] + 1;
  if (self[0x378] < self[0x379]) {
    uVar2 = CONCAT31((int3)((uint)self[0x378] >> 8),1);
  }
  else {
    self[0x378] = 0;
    tickCount = GetTickCount();
    if (tickCount - self[0x37a] < 0x4c) {
      iVar4 = self[0x379];
      if (iVar4 < 0x3fffffff) {
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        self[0x379] = self[0x379] + (iVar4 >> 2);
      }
    }
    else if ((0x7c < tickCount - self[0x37a]) && (iVar4 = self[0x379], 8 < iVar4)) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      self[0x379] = self[0x379] - (iVar4 >> 3);
    }
    self[0x37a] = tickCount;
    if (unused < 0) {
      iVar4 = self[0x37b];
      self[0x37b] = self[0x37b] + 1;
      unused = iVar4 % 0x65;
    }
    else {
      self[0x37b] = 0;
    }
    bVar1 = DMDialog::PumpMessages(self,unused);
    uVar2 = (uint)(CONCAT31(regHigh,bVar1) != 0);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401ca8  DMDialog::vf17   (154 bytes, 2 ranges)   [rtti:vtable virtual slot 17]
void __cdecl DMDialog::vf17(int self,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    DMDialog::SetStatus(self,(byte *)"Loading primary word list");
    break;
  case 1:
    DMDialog::SetStatus(self,(byte *)"Sorting primary word list");
    break;
  case 2:
    DMDialog::SetStatus(self,(byte *)"Loading secondary word list");
    break;
  case 3:
    DMDialog::SetStatus(self,(byte *)"Sorting secondary word list");
    break;
  case 4:
    DMDialog::SetStatus(self,(byte *)"Saving merged word list");
  }
  *(undefined4 *)(self + 0xde4) = 8;
  (**(code **)(*(int *)(self + 0xc) + 0x40))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401d58  DMDialog::vf11   (4393 bytes)   [rtti:vtable virtual slot 11]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DMDialog::vf11(int *self)

{
  DWORD tickCount;
  int iVar2;
  char *pcVar3;
  int *strRep;
  uint uVar5;
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
  int *newData2;
  int *local_568;
  undefined4 unused2;
  int *newData3;
  undefined1 exceptMsg3 [248];
  undefined4 unused3;
  int *newData4;
  undefined1 exceptMsg4 [248];
  undefined4 unused4;
  int *unused5;
  int *unused6;
  int *strRep2;
  LPCSTR string_;
  int *strRep3;
  uint local_2f4;
  undefined1 local_2ed [41];
  uint local_2c4;
  undefined1 *unused7;
  undefined4 unused8;
  int *unused9;
  int *unused10;
  int *strRep4;
  int *newData5;
  int *unused11;
  uint unused12;
  undefined1 *unused13;
  int *newRep;
  int *unused14;
  uint len;
  int *strRep5;
  undefined1 *unused15;
  int *unused16;
  undefined4 unused17;
  uint *msgText;
  uint local_274;
  undefined1 *unused18;
  undefined4 unused19;
  int *unused20;
  int *unused21;
  int *strRep6;
  int *unused22;
  int *unused23;
  uint unused24;
  undefined1 *unused25;
  int *newRep2;
  int *unused26;
  uint len2;
  int *strRep7;
  undefined1 *unused27;
  int *unused28;
  undefined4 unused29;
  uint *msgText2;
  int *unused30;
  undefined4 *src;
  uint unused31;
  undefined1 *unused32;
  int *newRep3;
  int *unused33;
  undefined1 *unused34;
  int *unused35;
  uint local_204;
  undefined1 local_1fd [105];
  uint local_194;
  undefined1 *unused36;
  undefined4 unused37;
  int *unused38;
  int *unused39;
  int *strRep8;
  int *unused40;
  int *unused41;
  uint unused42;
  undefined1 *unused43;
  int *newRep4;
  int *unused44;
  uint len3;
  int *strRep9;
  undefined1 *unused45;
  int *unused46;
  undefined4 unused47;
  uint *msgText3;
  uint local_144;
  undefined1 *unused48;
  undefined4 unused49;
  int *unused50;
  int *unused51;
  int *strRep10;
  int *unused52;
  int *unused53;
  uint unused54;
  undefined1 *unused55;
  int *newRep5;
  int *unused56;
  uint len4;
  int *strRep11;
  undefined1 *unused57;
  int *unused58;
  undefined4 unused59;
  uint *msgText4;
  undefined1 *unused60;
  undefined4 unused61;
  int unused62;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str6;
  undefined1 str2 [8];
  int *str7;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused63;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused64;
  undefined1 str3 [8];
  int *str8;
  undefined1 str4 [8];
  int *str9;
  undefined **outOfRange2 [2];
  undefined1 newStr3 [8];
  int *unused65;
  undefined **lengthError2 [2];
  undefined1 newStr4 [8];
  int *unused66;
  undefined1 result [8];
  int str10;
  undefined1 str5 [8];
  int *fileName;
  
  __InitExceptBlockLDTC(0x461bd4);
  OWL::TDialog::SetupWindow(self);
  self[0x378] = 0;
  self[0x379] = 8;
  tickCount = GetTickCount();
  self[0x37a] = tickCount;
  self[0x37b] = 0;
  TSMergeProfile::Load((int)(self + 0x37c));
  ehContext = 8;
  GetMyDocumentsDirectory((int)result);
  ehDtorCount = ehDtorCount + 1;
  std::string::operator_assign(0x47689c,(int)result);
  ehDtorCount = ehDtorCount + -1;
  if (str10 != 0) {
    if (*(int *)(str10 + -0xc) != -1) {
      strRep = (int *)(str10 + -0xc);
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
      if (iVar2 != 0) goto LAB_00401e5a;
    }
    unused62 = str10 + -0xc;
    operator_delete();
    unused61 = 0;
    unused60 = result;
    str10 = 0;
    unused4 = 0;
  }
LAB_00401e5a:
  if (*(int *)(DAT_004768a4 + -4) != 0) {
    uVar5 = *(int *)(DAT_004768a4 + -4) - 1;
    if ((*(uint *)&g_stringNpos) - 0xe < uVar5) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_00402ee0;
      objectDtor = 0;
      ehContext = 0x2c;
      msgText4 = (uint *)__rwstd::except_msg_string::format(exceptMsg4,PTR_s_invalid_string_size_parameter_in_00474068);
      std::string::string_from_cstr((int)str4,msgText4);
      ehDtorCount = ehDtorCount + 2;
      lengthError2[0] = &std::logic_error::vftable;
      unused59 = 0;
      unused66 = (int *)0x0;
      ehContext = 0x38;
      if (str9[-3] == -1 || str9[-3] + 1 < 0) {
        len4 = str9[-1];
        newRep5 = std::string::__getRep(newStr4,len4,len4);
        unused55 = newStr4;
        newData4 = newRep5 + 3;
        unused54 = len4;
        unused53 = str9;
        unused52 = newData4;
        unused56 = newData4;
        unused66 = newData4;
        memcpy(newData4,str9,len4);
      }
      else {
        unused57 = newStr4;
        unused58 = str9;
        unused66 = str9;
        strRep11 = str9 + -3;
        if (strRep11 != &g_nullStringRep) {
          *strRep11 = *strRep11 + 1;
        }
      }
      ehContext = 0x2c;
      lengthError2[0] = &std::length_error::vftable;
      ehDtorCount = ehDtorCount + 2;
      if (str9 != (int *)0x0) {
        if (str9[-3] != -1) {
          strRep10 = str9 + -3;
          if (strRep10 == &g_nullStringRep) {
            iVar2 = 1;
          }
          else if (strRep10 == &g_nullStringRep) {
            iVar2 = 1;
          }
          else {
            *strRep10 = *strRep10 + -1;
            iVar2 = *strRep10 + 1;
          }
          if (iVar2 != 0) goto LAB_004020e8;
        }
        unused51 = str9 + -3;
        unused50 = str9 + -3;
        operator_delete();
        unused49 = 0;
        unused48 = str4;
        str9 = (int *)0x0;
        unused3 = 0;
      }
LAB_004020e8:
      ehContext = 0x20;
      _ThrowExceptionLDTC((uint *)&DAT_00402e84,(undefined4*)lengthError2,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    if (uVar5 < *(uint *)(DAT_004768a4 + -4)) {
      local_144 = *(int *)(DAT_004768a4 + -4) - uVar5;
      if (*(uint *)(DAT_004768a4 + -4) < uVar5) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_00403038;
        objectDtor = 0;
        ehContext = 0x5c;
        msgText3 = (uint *)__rwstd::except_msg_string::format(exceptMsg3,PTR_s_string_index_out_of_range_in_fun_00474074);
        std::string::string_from_cstr((int)str3,msgText3);
        ehDtorCount = ehDtorCount + 2;
        outOfRange2[0] = &std::logic_error::vftable;
        unused47 = 0;
        unused65 = (int *)0x0;
        ehContext = 0x68;
        if (str8[-3] == -1 || str8[-3] + 1 < 0) {
          len3 = str8[-1];
          newRep4 = std::string::__getRep(newStr3,len3,len3);
          unused43 = newStr3;
          newData3 = newRep4 + 3;
          unused42 = len3;
          unused41 = str8;
          unused40 = newData3;
          unused44 = newData3;
          unused65 = newData3;
          memcpy(newData3,str8,len3);
        }
        else {
          unused45 = newStr3;
          unused46 = str8;
          unused65 = str8;
          strRep9 = str8 + -3;
          if (strRep9 != &g_nullStringRep) {
            *strRep9 = *strRep9 + 1;
          }
        }
        ehContext = 0x5c;
        outOfRange2[0] = &std::out_of_range::vftable;
        ehDtorCount = ehDtorCount + 2;
        if (str8 != (int *)0x0) {
          if (str8[-3] != -1) {
            strRep8 = str8 + -3;
            if (strRep8 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep8 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep8 = *strRep8 + -1;
              iVar2 = *strRep8 + 1;
            }
            if (iVar2 != 0) goto LAB_00402396;
          }
          unused39 = str8 + -3;
          unused38 = str8 + -3;
          operator_delete();
          unused37 = 0;
          unused36 = str3;
          str8 = (int *)0x0;
          unused2 = 0;
        }
LAB_00402396:
        ehContext = 0x20;
        _ThrowExceptionLDTC((uint *)&DAT_00402fdc,(undefined4*)outOfRange2,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      local_194 = *(int *)(DAT_004768a4 + -4) - uVar5;
      local_1fd[0] = 0;
      local_204 = local_194;
      if (local_144 < local_194) {
        local_204 = local_144;
      }
      std::string::replace(0x47689c,uVar5,local_204,(uint)local_1fd,0,0,0);
    }
    else {
      std::string::replace_fill(0x47689c,*(uint *)(DAT_004768a4 + -4),0,uVar5 - *(int *)(DAT_004768a4 + -4),0);
    }
    if ((undefined4 *)(DAT_004768a4 + -0xc) != &g_nullStringRep) {
      *(undefined4 *)(DAT_004768a4 + -0xc) = 0;
    }
  }
  iVar2 = thunk_access((LPCSTR)self[900],0);
  if (iVar2 == 0) {
    SetWindowTextA(*(HWND *)(self[0x1c0] + 0xc),(LPCSTR)self[900]);
  }
  iVar2 = thunk_access((LPCSTR)self[0x388],0);
  if (iVar2 == 0) {
    SetWindowTextA(*(HWND *)(*(int *)((int)self + 0x7b2) + 0xc),(LPCSTR)self[0x388]);
  }
  ehContext = 0x98;
  fileName = (int *)0x0;
  if (*(int *)(self[0x38c] + -0xc) == -1 || *(int *)(self[0x38c] + -0xc) + 1 < 0) {
    uVar5 = *(uint *)(self[0x38c] + -4);
    newRep3 = std::string::__getRep(str5,uVar5,uVar5);
    unused32 = str5;
    newData2 = newRep3 + 3;
    src = (undefined4 *)self[0x38c];
    unused30 = newData2;
    unused31 = uVar5;
    unused33 = newData2;
    fileName = newData2;
    memcpy(newData2,src,uVar5);
  }
  else {
    local_568 = (int *)self[0x38c];
    unused34 = str5;
    strRep = local_568 + -3;
    unused35 = local_568;
    fileName = local_568;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x8c;
  uVar5 = (*(uint *)&g_stringNpos);
  if ((uint)fileName[-1] < (*(uint *)&g_stringNpos)) {
    uVar5 = fileName[-1];
  }
  pcVar3 = memrchr((char *)fileName,'\\',uVar5);
  uVar5 = (*(uint *)&g_stringNpos);
  if (pcVar3 != (char *)0x0) {
    uVar5 = (int)pcVar3 - (int)fileName;
  }
  if (uVar5 != (*(uint *)&g_stringNpos)) {
    if ((*(uint *)&g_stringNpos) - 0xe < uVar5) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_00402ee0;
      objectDtor = 0;
      ehContext = 0xbc;
      msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00474068);
      std::string::string_from_cstr((int)str2,msgText2);
      ehDtorCount = ehDtorCount + 2;
      lengthError[0] = &std::logic_error::vftable;
      unused29 = 0;
      unused64 = (int *)0x0;
      ehContext = 200;
      if (str7[-3] == -1 || str7[-3] + 1 < 0) {
        len2 = str7[-1];
        newRep2 = std::string::__getRep(newStr2,len2,len2);
        unused25 = newStr2;
        newData = newRep2 + 3;
        unused24 = len2;
        unused23 = str7;
        unused22 = newData;
        unused26 = newData;
        unused64 = newData;
        memcpy(newData,str7,len2);
      }
      else {
        unused27 = newStr2;
        unused28 = str7;
        unused64 = str7;
        strRep7 = str7 + -3;
        if (strRep7 != &g_nullStringRep) {
          *strRep7 = *strRep7 + 1;
        }
      }
      ehContext = 0xbc;
      lengthError[0] = &std::length_error::vftable;
      ehDtorCount = ehDtorCount + 2;
      if (str7 != (int *)0x0) {
        if (str7[-3] != -1) {
          strRep6 = str7 + -3;
          if (strRep6 == &g_nullStringRep) {
            iVar2 = 1;
          }
          else if (strRep6 == &g_nullStringRep) {
            iVar2 = 1;
          }
          else {
            *strRep6 = *strRep6 + -1;
            iVar2 = *strRep6 + 1;
          }
          if (iVar2 != 0) goto LAB_0040286d;
        }
        unused21 = str7 + -3;
        unused20 = str7 + -3;
        operator_delete();
        unused19 = 0;
        unused18 = str2;
        str7 = (int *)0x0;
        unused = 0;
      }
LAB_0040286d:
      ehContext = 0xb0;
      _ThrowExceptionLDTC((uint *)&DAT_00402e84,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    if (uVar5 < (uint)fileName[-1]) {
      local_274 = fileName[-1] - uVar5;
      if ((uint)fileName[-1] < uVar5) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_00403038;
        objectDtor = 0;
        ehContext = 0xec;
        msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00474074);
        std::string::string_from_cstr((int)str,msgText);
        ehDtorCount = ehDtorCount + 2;
        outOfRange[0] = &std::logic_error::vftable;
        unused17 = 0;
        unused63 = (int *)0x0;
        ehContext = 0xf8;
        if (str6[-3] == -1 || str6[-3] + 1 < 0) {
          len = str6[-1];
          newRep = std::string::__getRep(newStr,len,len);
          unused13 = newStr;
          newData5 = newRep + 3;
          unused12 = len;
          unused11 = str6;
          unused14 = newData5;
          unused63 = newData5;
          memcpy(newData5,str6,len);
        }
        else {
          unused15 = newStr;
          unused16 = str6;
          unused63 = str6;
          strRep5 = str6 + -3;
          if (strRep5 != &g_nullStringRep) {
            *strRep5 = *strRep5 + 1;
          }
        }
        ehContext = 0xec;
        outOfRange[0] = &std::out_of_range::vftable;
        ehDtorCount = ehDtorCount + 2;
        if (str6 != (int *)0x0) {
          if (str6[-3] != -1) {
            strRep4 = str6 + -3;
            if (strRep4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep4 = *strRep4 + -1;
              iVar2 = *strRep4 + 1;
            }
            if (iVar2 != 0) goto LAB_00402b57;
          }
          unused10 = str6 + -3;
          unused9 = str6 + -3;
          operator_delete();
          unused8 = 0;
          unused7 = str;
          str6 = (int *)0x0;
        }
LAB_00402b57:
        ehContext = 0xb0;
        _ThrowExceptionLDTC((uint *)&DAT_00402fdc,(undefined4*)outOfRange,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      local_2c4 = fileName[-1] - uVar5;
      local_2ed[0] = 0;
      local_2f4 = local_2c4;
      if (local_274 < local_2c4) {
        local_2f4 = local_274;
      }
      std::string::replace((int)str5,uVar5,local_2f4,(uint)local_2ed,0,0,0);
    }
    else {
      std::string::replace_fill((int)str5,fileName[-1],0,uVar5 - fileName[-1],0);
    }
    strRep3 = fileName + -3;
    if (strRep3 != &g_nullStringRep) {
      *strRep3 = 0;
    }
  }
  iVar2 = thunk_access((LPCSTR)fileName,0);
  if (iVar2 == 0) {
    string_ = (LPCSTR)self[0x38c];
    SetWindowTextA(*(HWND *)(self[0x219] + 0xc),string_);
  }
  self[0x376] = self[0x380];
  FUN_004321c4(self + 8,(uint)(self[0x376] == 0));
  FUN_004321c4(self + 0x34,(uint)(self[0x376] == 2));
  FUN_004321c4(self + 0x60,(uint)(self[0x376] == 1));
  FUN_004321c4(self + 0x8c,(uint)(self[0x376] == 3));
  FUN_004321c4(self + 0xb8,(uint)(self[0x376] == 4));
  self[0x377] = self[0x381];
  FUN_004321c4(self + 0xe4,(uint)(self[0x377] == 0));
  FUN_004321c4(self + 0x110,(uint)(self[0x377] == 1));
  FUN_004321c4(self + 0x13c,(uint)(self[0x377] == 2));
  FUN_004321c4(self + 0x168,(uint)(self[0x377] == 3));
  FUN_004321c4(self + 0x194,(uint)(self[0x377] == 4));
  DMDialog::UpdateControls((int)self);
  ehDtorCount = ehDtorCount + -1;
  if (fileName != (int *)0x0) {
    if (fileName[-3] != -1) {
      strRep2 = fileName + -3;
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
      if (iVar2 != 0) goto LAB_00402e65;
    }
    unused6 = fileName + -3;
    unused5 = fileName + -3;
    operator_delete();
  }
LAB_00402e65:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403134  memrchr   (41 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00408894. last occurrence of a character in [p, p + n], or 0
//   file placement: inferred (address adjacency)
char * __cdecl memrchr(char *p,char ch,int n)

{
  char *q;
  
  q = p + n;
  while( true ) {
    if (q < p) {
      return (char *)0x0;
    }
    if (ch == *q) break;
    q = q + -1;
  }
  return q;
}

// ----------------------------------------------------------------------------------------------------
// 0x004031e4  DMDialog::EvClose   (15 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_CLOSE
void __cdecl DMDialog::EvClose(int *self)

{
  EvClose_4351b0(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004031f4  DMDialog::PumpMessages   (97 bytes)   [analysis]
//   processes pending window messages during a merge; true when the user asked to stop
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
  DMDialog::SetAbort(self + 0x246,unused);
  return self[7] == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403258  DMDialog::SetStatus   (63 bytes)   [analysis]
//   printf-style text in the status line
void __cdecl DMDialog::SetStatus(int self,byte *format)

{
  CHAR string_ [1024];
  
  sprintf(string_,format);
  SetWindowTextA(*(HWND *)(*(int *)(self + 0x9cc) + 0xc),string_);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403298  DMDialog::Cmd101   (653 bytes, 2 ranges)   [owl:response-table message-handler]
//   EV_COMMAND(101)
void DMDialog::Cmd101(undefined4 self,undefined4 param_2,undefined4 param_3,int *dmDialog)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 buf [12];
  undefined4 unused;
  CHAR outputFile;
  char local_c0f [1027];
  CHAR secondaryFile;
  char local_80b [1027];
  CHAR primaryFile;
  char local_407 [1027];
  
  if (dmDialog[7] == 1) {
    unused = self;
    GetWindowTextA(*(HWND *)(dmDialog[0x1c0] + 0xc),&primaryFile,0x401);
    GetWindowTextA(*(HWND *)(*(int *)((int)dmDialog + 0x7b2) + 0xc),&secondaryFile,0x401);
    GetWindowTextA(*(HWND *)(dmDialog[0x219] + 0xc),&outputFile,0x401);
    pcVar2 = &primaryFile;
    pcVar4 = &outputFile;
    do {
      bVar5 = *pcVar2 == *pcVar4;
      if (!bVar5) break;
      if (*pcVar2 == '\0') goto LAB_00403359;
      pcVar1 = pcVar2 + 1;
      bVar5 = *pcVar1 == pcVar4[1];
      if (!bVar5) break;
      pcVar2 = pcVar2 + 2;
      pcVar4 = pcVar4 + 2;
      bVar5 = *pcVar1 == '\0';
    } while (!bVar5);
    if (!bVar5) {
      pcVar2 = &secondaryFile;
      pcVar4 = &outputFile;
      do {
        if (*pcVar2 != *pcVar4) goto LAB_0040337d;
        bVar5 = true;
        if (*pcVar2 == '\0') break;
        pcVar1 = pcVar2 + 1;
        if (*pcVar1 != pcVar4[1]) goto LAB_0040337d;
        pcVar2 = pcVar2 + 2;
        pcVar4 = pcVar4 + 2;
        bVar5 = *pcVar1 == '\0';
      } while (!bVar5);
      if (!bVar5) {
LAB_0040337d:
        iVar3 = thunk_access(&outputFile,0);
        if (iVar3 == 0) {
          sprintf(buf,(byte *)"A file named\n\n  %s\n\nalready exists.\n\nAre you sure you want to overwrite this_\?\n");
          iVar3 = (**(code **)(*(int *)(*(int *)(*dmDialog + 0x6c) + 0x1b) + 0x30))();
          if (iVar3 != 6) {
            return;
          }
        }
        DMDialog::ReadOptions((int)dmDialog);
        dmDialog[7] = 2;
        FUN_0042d27c(*(int *)((int)dmDialog + 0xc7e),(uint *)"S&top");
        iVar3 = MergeWordLists(dmDialog + 6,&primaryFile,&secondaryFile,dmDialog[0x376],dmDialog[0x377],
                             &outputFile);
        switch(iVar3) {
        case 0:
          DMDialog::SetStatus((int)dmDialog,(byte *)"Merging completed successfully");
          break;
        case 1:
          DMDialog::SetStatus((int)dmDialog,(byte *)"Merging abandoned");
          break;
        case 2:
          DMDialog::SetStatus((int)dmDialog,(byte *)"Primary list couldn't be loaded");
          break;
        case 3:
          DMDialog::SetStatus((int)dmDialog,(byte *)"Secondary list couldn't be loaded");
          break;
        case 4:
          DMDialog::SetStatus((int)dmDialog,(byte *)"Insufficient disk space to save output list");
          break;
        case 5:
          DMDialog::SetStatus((int)dmDialog,(byte *)"Insufficient resources to do merge");
        }
        (**(code **)(*(int *)(*(int *)(*dmDialog + 0x6c) + 0x1b) + 0x30))();
        DMDialog::ReadOptions((int)dmDialog);
        DMDialog::UpdateControls((int)dmDialog);
        FUN_0042d27c(*(int *)((int)dmDialog + 0xc7e),(uint *)&DAT_00461324 /* "S&tart" */);
        return;
      }
    }
LAB_00403359:
    (**(code **)(*(int *)(*(int *)(*dmDialog + 0x6c) + 0x1b) + 0x30))();
  }
  else if (dmDialog[7] == 2) {
    dmDialog[7] = 3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403540  DMDialog::Cmd106   (344 bytes)   [owl:response-table message-handler]
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
  
  __InitExceptBlockLDTC(0x461d28);
  std::string::string_from_cstr((int)path,(uint *)"tsmerge.chm");
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
      if (prevRefs != 0) goto LAB_004035fb;
    }
    operator_delete();
    str = 0;
  }
LAB_004035fb:
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
      if (prevRefs != 0) goto LAB_00403687;
    }
    operator_delete();
  }
LAB_00403687:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403698  DMDialog::Cmd122   (121 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(122)
void __cdecl DMDialog::Cmd122(undefined4 *self)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int dialog [44];
  
  __InitExceptBlockLDTC(0x461d70);
  piVar1 = OWL::TDialog::TDialog(dialog,0,*self,(uint *)0xc8,0);
  (**(code **)(piVar1[3] + 0x14))();
  OWL::TDialog::_dtor(dialog,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403784  DMDialog::CmShared_403784   (412 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   one handler for 10 table entries: id 108; id 114; id 115; id 110; id 109; id 116; id 117; id 118; id 119; id 121
//   also: DMDialog::CmShared_403784 [owl:response-table]; DMDialog::CmShared_403784 [owl:response-table]; DMDialog::CmShared_403784 [owl:response-table]; DMDialog::CmShared_403784 [owl:response-table]
void __cdecl DMDialog::CmShared_403784(int self)

{
  int iVar1;
  
  iVar1 = FUN_0042d1a4(*(int *)(self + 0x20),0xf0,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0042d1a4(*(int *)(self + 0xd0),0xf0,0,0);
    if (iVar1 == 0) {
      iVar1 = FUN_0042d1a4(*(int *)(self + 0x180),0xf0,0,0);
      if (iVar1 == 0) {
        iVar1 = FUN_0042d1a4(*(int *)(self + 0x230),0xf0,0,0);
        if (iVar1 == 0) {
          iVar1 = FUN_0042d1a4(*(int *)(self + 0x2e0),0xf0,0,0);
          if (iVar1 != 0) {
            *(undefined4 *)(self + 0xdd8) = 4;
          }
        }
        else {
          *(undefined4 *)(self + 0xdd8) = 3;
        }
      }
      else {
        *(undefined4 *)(self + 0xdd8) = 1;
      }
    }
    else {
      *(undefined4 *)(self + 0xdd8) = 2;
    }
  }
  else {
    *(undefined4 *)(self + 0xdd8) = 0;
  }
  iVar1 = FUN_0042d1a4(*(int *)(self + 0x390),0xf0,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0042d1a4(*(int *)(self + 0x440),0xf0,0,0);
    if (iVar1 == 0) {
      iVar1 = FUN_0042d1a4(*(int *)(self + 0x4f0),0xf0,0,0);
      if (iVar1 == 0) {
        iVar1 = FUN_0042d1a4(*(int *)(self + 0x5a0),0xf0,0,0);
        if (iVar1 == 0) {
          iVar1 = FUN_0042d1a4(*(int *)(self + 0x650),0xf0,0,0);
          if (iVar1 != 0) {
            *(undefined4 *)(self + 0xddc) = 4;
          }
        }
        else {
          *(undefined4 *)(self + 0xddc) = 3;
        }
      }
      else {
        *(undefined4 *)(self + 0xddc) = 2;
      }
    }
    else {
      *(undefined4 *)(self + 0xddc) = 1;
    }
  }
  else {
    *(undefined4 *)(self + 0xddc) = 0;
  }
  DMDialog::UpdateControls(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403920  DMDialog::UpdateControls   (245 bytes)   [analysis]
//   enables the Merge button only when the input and output names are filled in
void __cdecl DMDialog::UpdateControls(int self)

{
  int iVar1;
  
  *(undefined4 *)(self + 0x1c) = 0;
  iVar1 = FUN_0042d1a4(*(int *)(self + 0x20),0xf0,0,0);
  if (iVar1 == 1) {
    SetWindowTextA(*(HWND *)(*(int *)(self + 0x7b2) + 0xc),&DAT_0046132a);
    (**(code **)(*(int *)(*(int *)(self + 0xb26) + 8) + 0x60))();
    iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(self + 0x700) + 0xc));
    if ((0 < iVar1) &&
       (iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(self + 0x864) + 0xc)), 0 < iVar1)) {
      *(undefined4 *)(self + 0x1c) = 1;
    }
  }
  else {
    (**(code **)(*(int *)(*(int *)(self + 0xb26) + 8) + 0x60))();
    iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(self + 0x700) + 0xc));
    if (((0 < iVar1) &&
        (iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(self + 0x7b2) + 0xc)), 0 < iVar1)) &&
       (iVar1 = GetWindowTextLengthA(*(HWND *)(*(int *)(self + 0x864) + 0xc)), 0 < iVar1)) {
      *(undefined4 *)(self + 0x1c) = 1;
    }
  }
  (**(code **)(*(int *)(*(int *)(self + 0xc7e) + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403a18  DMDialog::BrowseFile   (733 bytes)   [analysis]
//   file dialog for one of the word list names; rejects files that are not ANSI text
void __cdecl DMDialog::BrowseFile(int *self,int *edit,int forOutput)

{
  uint pos;
  int iVar2;
  int *piVar3;
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
  uint data [2];
  uint *fileName;
  undefined4 unused;
  
  __InitExceptBlockLDTC(0x461dd4);
  FUN_004459e8(data,0x180c,(uint *)"Word list file (*.txt)|*.txt|All Files (*.*)|*.*",0,0,0x46170c,0,0,
               0);
  iVar2 = GetWindowTextLengthA(*(HWND *)(*edit + 0xc));
  if (iVar2 < 1) {
    unused = (*(undefined4 *)&DAT_004768a4);
  }
  else {
    GetWindowTextA(*(HWND *)(*edit + 0xc),(LPSTR)fileName,0x104);
  }
  piVar3 = OWL::TFileOpenDialog::TFileOpenDialog(&local_13c,0,*self,(int)data,0,forOutput,0);
  iVar2 = (**(code **)(piVar3[3] + 0x14))();
  cVar6 = iVar2 == 1;
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
      std::string::replace((int)str,pos,0,0x461710,(uint)len,0,(uint)len);
      (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
      if (str2 != 0) {
        if (*(int *)(str2 + -0xc) != -1) {
          piVar3 = (int *)(str2 + -0xc);
          if (piVar3 == &g_nullStringRep) {
            iVar2 = 1;
          }
          else if (piVar3 == &g_nullStringRep) {
            iVar2 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar2 = *piVar3 + 1;
          }
          if (iVar2 != 0) goto LAB_00403ccd;
        }
        operator_delete();
        str2 = 0;
      }
    }
    else {
      SetWindowTextA(*(HWND *)(*edit + 0xc),(LPCSTR)fileName);
      DMDialog::UpdateControls((int)self);
    }
  }
LAB_00403ccd:
  OWL::TOpenSaveDialog::TData::_dtor((int)data,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403dd4  DMDialog::Cmd112   (29 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_COMMAND(112)
void __cdecl DMDialog::Cmd112(int *self)

{
  DMDialog::BrowseFile(self,self + 0x1c0,0x461743);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403df4  DMDialog::Cmd104   (29 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(104)
void __cdecl DMDialog::Cmd104(int *self)

{
  DMDialog::BrowseFile(self,(int *)((int)self + 0x7b2),0x46175b);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403e14  DMDialog::Cmd120   (401 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(120)
void __cdecl DMDialog::Cmd120(undefined4 *self)

{
  int iVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  char cVar3;
  undefined4 sehPrevFrame;
  int local_13c;
  int local_138;
  undefined4 streamableBase [2];
  undefined4 window [34];
  uint data [2];
  LPSTR string_;
  undefined4 unused;
  
  __InitExceptBlockLDTC(0x461e54);
  FUN_004459e8(data,0x80c,(uint *)"Word list file (*.txt)|*.txt|All Files (*.*)|*.*",0,0,0x46170c,0,0,0
              );
  iVar1 = GetWindowTextLengthA(*(HWND *)(self[0x219] + 0xc));
  if (iVar1 < 1) {
    unused = (*(undefined4 *)&DAT_004768a4);
  }
  else {
    GetWindowTextA(*(HWND *)(self[0x219] + 0xc),string_,0x104);
  }
  piVar2 = OWL::TFileSaveDialog::TFileSaveDialog(&local_13c,0,*self,(int)data,0,0x461775,0);
  iVar1 = (**(code **)(piVar2[3] + 0x14))();
  cVar3 = iVar1 == 1;
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
    SetWindowTextA(*(HWND *)(self[0x219] + 0xc),string_);
    DMDialog::UpdateControls((int)self);
  }
  OWL::TOpenSaveDialog::TData::_dtor((int)data,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040402c  DMDialog::ReadOptions   (250 bytes)   [analysis]
//   reads the operation and conversion radio buttons into the profile
void __cdecl DMDialog::ReadOptions(int self)

{
  (**(code **)(*(int *)(*(int *)(self + 0xa7a) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0xb26) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0xbd2) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0xd2a) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x20) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0xd0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x180) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x230) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x2e0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x390) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x440) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x4f0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x5a0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x650) + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404aa8  DMDialog::~DMDialog   (1464 bytes)   [rtti:dtor destructor]
//   written in code as DMDialog::_dtor
void __cdecl DMDialog::_dtor(int *self,byte dtorFlags)

{
  int *control;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462238);
  if (self != (int *)0x0) {
    TSMergeProfile::_dtor((int)(self + 0x37c),2);
    OWL::TButton::_dtor((int *)((int)self + 0xd2a),2);
    OWL::TButton::_dtor((int *)((int)self + 0xc7e),2);
    OWL::TButton::_dtor((int *)((int)self + 0xbd2),2);
    OWL::TButton::_dtor((int *)((int)self + 0xb26),2);
    OWL::TButton::_dtor((int *)((int)self + 0xa7a),2);
    control = self + 0x273;
    *(int *)(self[0x274] + -4) = *(int *)(self[0x274] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x274] + -4) = *(int *)(self[0x274] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x274] + -4) = *(int *)(self[0x274] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x27d,0);
    *(int *)(self[0x274] + -4) = *(int *)(self[0x274] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x27b,0);
    DMProgressBar::_dtor(self + 0x246,2);
    OWL::TEdit::_dtor(self + 0x219,2);
    OWL::TEdit::_dtor((int *)((int)self + 0x7b2),2);
    OWL::TEdit::_dtor(self + 0x1c0,2);
    OWL::TCheckBox::_dtor(self + 0x194,0);
    *(int *)(self[0x195] + -4) = *(int *)(self[0x195] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x67a),0);
    *(int *)(self[0x195] + -4) = *(int *)(self[0x195] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x672),0);
    OWL::TCheckBox::_dtor(self + 0x168,0);
    *(int *)(self[0x169] + -4) = *(int *)(self[0x169] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x5ca),0);
    *(int *)(self[0x169] + -4) = *(int *)(self[0x169] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x5c2),0);
    OWL::TCheckBox::_dtor(self + 0x13c,0);
    *(int *)(self[0x13d] + -4) = *(int *)(self[0x13d] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x51a),0);
    *(int *)(self[0x13d] + -4) = *(int *)(self[0x13d] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x512),0);
    OWL::TCheckBox::_dtor(self + 0x110,0);
    *(int *)(self[0x111] + -4) = *(int *)(self[0x111] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x46a),0);
    *(int *)(self[0x111] + -4) = *(int *)(self[0x111] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x462),0);
    OWL::TCheckBox::_dtor(self + 0xe4,0);
    *(int *)(self[0xe5] + -4) = *(int *)(self[0xe5] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x3ba),0);
    *(int *)(self[0xe5] + -4) = *(int *)(self[0xe5] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x3b2),0);
    OWL::TCheckBox::_dtor(self + 0xb8,0);
    *(int *)(self[0xb9] + -4) = *(int *)(self[0xb9] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x30a),0);
    *(int *)(self[0xb9] + -4) = *(int *)(self[0xb9] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x302),0);
    OWL::TCheckBox::_dtor(self + 0x8c,0);
    *(int *)(self[0x8d] + -4) = *(int *)(self[0x8d] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x25a),0);
    *(int *)(self[0x8d] + -4) = *(int *)(self[0x8d] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x252),0);
    OWL::TCheckBox::_dtor(self + 0x60,0);
    *(int *)(self[0x61] + -4) = *(int *)(self[0x61] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x1aa),0);
    *(int *)(self[0x61] + -4) = *(int *)(self[0x61] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x1a2),0);
    OWL::TCheckBox::_dtor(self + 0x34,0);
    *(int *)(self[0x35] + -4) = *(int *)(self[0x35] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0xfa),0);
    *(int *)(self[0x35] + -4) = *(int *)(self[0x35] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0xf2),0);
    OWL::TCheckBox::_dtor(self + 8,0);
    *(int *)(self[9] + -4) = *(int *)(self[9] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x4a),0);
    *(int *)(self[9] + -4) = *(int *)(self[9] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x42),0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe20;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0xe20;
    OWL::TDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe20;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0xe20;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x392,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x390,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405060  OWL::TWindow::GetTooltip   (11 bytes)   [rtti:vtable virtual slot 1]
//   vtable slot 1; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TWindow::GetTooltip(int self)

{
  return *(undefined4 *)(self + 100);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040506c  OWL::TWindow::EnableWindow   (33 bytes)   [rtti:vtable virtual slot 24]
//   vtable slot 24; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TWindow::EnableWindow(int self,byte enable)

{
  BOOL ok;
  
  ok = EnableWindow(*(HWND *)(self + 0xc),(uint)enable);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405090  OWL::TWindow::Invalidate   (25 bytes)   [rtti:vtable virtual slot 26]
//   vtable slot 26; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::Invalidate(int self,byte erase)

{
  InvalidateRect(*(HWND *)(self + 0xc),(RECT *)0x0,(uint)erase);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004050ac  OWL::TWindow::InvalidateRect   (27 bytes)   [rtti:vtable virtual slot 27]
//   vtable slot 27; slot name identified from OWL::TWindow's own implementation of that slot
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::InvalidateRect(int self,RECT *pRect,byte erase)

{
  InvalidateRect(*(HWND *)(self + 0xc),pRect,(uint)erase);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004052c4  std::string::~basic_string   (143 bytes)   [rtti:dtor destructor]
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
      if (prevRefs != 0) goto LAB_0040533f;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0040533f:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004055b0  OWL::TOpenSaveDialog::~TOpenSaveDialog   (168 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TOpenSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TOpenSaveDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462240);
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
// 0x00405768  OWL::TStatic::~TStatic   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TStatic::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TStatic::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462248);
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
// 0x0040587c  OWL::TRadioButton::~TRadioButton   (137 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TRadioButton::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRadioButton::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462250);
  if (self != (int *)0x0) {
    OWL::TCheckBox::_dtor(self,0);
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x2a),0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x22),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405984  PollCancel   (215 bytes)   [analysis]
//   lets the dialog process messages every so often during long operations; throws Abandon_exception when the user stopped the merge
//   file placement: inferred (address adjacency)
int __cdecl PollCancel(int counter,int unused)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(counter + 8);
  pbVar2 = *(byte **)(unused + 8);
  while( true ) {
    while ((pbVar1 != (byte *)(*(int *)(counter + 8) + *(int *)(*(int *)(counter + 8) + -4)) &&
           ((&DAT_004631a0)[*pbVar1] == '\0'))) {
      pbVar1 = pbVar1 + 1;
    }
    while ((pbVar2 != (byte *)(*(int *)(unused + 8) + *(int *)(*(int *)(unused + 8) + -4)) &&
           ((&DAT_004631a0)[*pbVar2] == '\0'))) {
      pbVar2 = pbVar2 + 1;
    }
    if ((pbVar1 == (byte *)(*(int *)(counter + 8) + *(int *)(*(int *)(counter + 8) + -4))) ||
       (pbVar2 == (byte *)(*(int *)(unused + 8) + *(int *)(*(int *)(unused + 8) + -4)))) break;
    if ((&DAT_004631a0)[*pbVar1] != (&DAT_004631a0)[*pbVar2]) {
      return (int)(char)(&DAT_004631a0)[*pbVar2] - (int)(char)(&DAT_004631a0)[*pbVar1];
    }
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar2 + 1;
  }
  if ((pbVar1 == (byte *)(*(int *)(counter + 8) + *(int *)(*(int *)(counter + 8) + -4))) &&
     (pbVar2 == (byte *)(*(int *)(unused + 8) + *(int *)(*(int *)(unused + 8) + -4)))) {
    return 0;
  }
  if (pbVar1 == (byte *)(*(int *)(counter + 8) + *(int *)(*(int *)(counter + 8) + -4))) {
    return 1;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405a5c  LoadWordList   (1050 bytes)   [analysis]
//   reads a text file into a vector of words (one per line), polling for cancellation
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl LoadWordList(undefined4 *result,LPCSTR fileName,int words,char *status)

{
  int refs;
  char cVar2;
  int value;
  int *strRep;
  undefined4 *sehChainHead;
  int iVar5;
  uint local_4f8 [251];
  undefined1 *unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  undefined4 *dest;
  undefined4 *src;
  uint unused5;
  int unused6;
  int *newRep;
  int *newData;
  uint len;
  int *strRep2;
  int unused7;
  undefined4 local_d8;
  undefined4 unused8;
  int local_d0;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int local_a0;
  undefined1 str [8];
  int str2;
  int basicIfstream [34];
  
  __InitExceptBlockLDTC(0x462298);
  *status = '\x01';
  ehContext = 8;
  std::basic_ifstream_char::basic_ifstream(basicIfstream,0,fileName,4,0x1b6);
  ehDtorCount = ehDtorCount + 8;
  ehContext = 0x14;
  if ((*(byte *)(basicIfstream[0] + 0x30) & 5) == 0) {
    iVar5 = 0;
    while (strRep = FUN_004514ac(basicIfstream,(undefined1 *)local_4f8,0x3e9,'\n'),
          (*(byte *)(*strRep + 0x30) & 5) == 0) {
      ehContext = 0x20;
      value = std::string::string_from_cstr((int)str,local_4f8);
      ehDtorCount = ehDtorCount + 1;
      if (*(int *)(words + 8) == *(int *)(words + 0x18)) {
        std::vector_string::insert_aux(words,*(int *)(words + 8),value);
      }
      else {
        local_d0 = *(int *)(words + 8);
        local_a0 = local_d0;
        if (local_d0 != 0) {
          ehContext = 0x2c;
          unused8 = 0;
          *(undefined4 *)(local_d0 + 8) = 0;
          refs = *(int *)(*(int *)(value + 8) + -0xc);
          if (refs == -1 || refs + 1 < 0) {
            len = *(uint *)(*(int *)(value + 8) + -4);
            newRep = std::string::__getRep(local_d0,len,len);
            newData = newRep + 3;
            *(int **)(local_a0 + 8) = newData;
            unused6 = local_a0;
            unused5 = len;
            src = *(undefined4 **)(value + 8);
            dest = *(undefined4 **)(local_a0 + 8);
            memcpy(dest,src,len);
          }
          else {
            local_d8 = *(undefined4 *)(value + 8);
            *(undefined4 *)(local_d0 + 8) = local_d8;
            strRep2 = (int *)(*(int *)(local_d0 + 8) + -0xc);
            unused7 = local_d0;
            if (strRep2 != &g_nullStringRep) {
              *strRep2 = *strRep2 + 1;
            }
          }
          ehContext = 0x20;
        }
        *(int *)(words + 8) = *(int *)(words + 8) + 0x10;
      }
      ehDtorCount = ehDtorCount + -1;
      if (str2 != 0) {
        if (*(int *)(str2 + -0xc) != -1) {
          strRep = (int *)(str2 + -0xc);
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
          if (value != 0) goto LAB_00405d50;
        }
        unused4 = str2 + -0xc;
        unused3 = str2 + -0xc;
        operator_delete();
        unused2 = 0;
        unused = str;
        str2 = 0;
      }
LAB_00405d50:
      ehContext = 0x14;
      if (((*status != '\0') && (0 < iVar5)) &&
         (value = PollCancel((iVar5 + -1) * 0x10 + *(int *)(words + 4),
                               iVar5 * 0x10 + *(int *)(words + 4)), value < 0)) {
        *status = '\0';
      }
      cVar2 = (**(code **)*result)();
      if (cVar2 == '\0') {
        iVar5 = -3;
        ehDtorCount = ehDtorCount + -8;
        std::basic_ifstream_char::_dtor(basicIfstream,2);
        *sehChainHead = sehPrevFrame;
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    }
    if ((*(byte *)(basicIfstream[0] + 0x30) & 2) == 0) {
      iVar5 = -2;
      ehDtorCount = ehDtorCount + -8;
      std::basic_ifstream_char::_dtor(basicIfstream,2);
      *sehChainHead = sehPrevFrame;
    }
    else {
      ehDtorCount = ehDtorCount + -8;
      std::basic_ifstream_char::_dtor(basicIfstream,2);
      *sehChainHead = sehPrevFrame;
    }
  }
  else {
    iVar5 = -1;
    std::basic_ifstream_char::_dtor(basicIfstream,2);
    *sehChainHead = sehPrevFrame;
  }
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405e78  WriteConvertedWord   (206 bytes)   [analysis]
//   writes one word to the output stream after ApplyConversion
//   file placement: inferred (address adjacency)
undefined4 __cdecl WriteConvertedWord(int out,int word_,undefined4 conversion)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  undefined *puVar4;
  undefined4 sehPrevFrame;
  undefined1 out2 [8];
  int str;
  
  __InitExceptBlockLDTC(0x4622f8);
  puVar4 = &LAB_00408844;
  iVar1 = ApplyConversion((int)out2,out,word_);
  piVar2 = std::operator_shl_string(iVar1,out2,conversion,(int *)conversion,(int)out2);
  uVar3 = FUN_004516b8(piVar2,puVar4);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      piVar2 = (int *)(str + -0xc);
      if (piVar2 == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (piVar2 == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00405f34;
    }
    operator_delete();
  }
LAB_00405f34:
  *sehChainHead = sehPrevFrame;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405f48  WriteWordList   (1225 bytes)   [analysis]
//   writes the merged words to the output file with the chosen conversion
//   file placement: inferred (address adjacency)
undefined4 __cdecl WriteWordList(undefined4 *result,int first,int last,int conversion,int progressTotal,LPCSTR fileName)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int counter;
  int iVar5;
  undefined4 *sehChainHead;
  undefined4 uVar6;
  int unused;
  int unused2;
  int local_c0;
  int local_bc;
  undefined4 sehPrevFrame;
  int conversion2 [33];
  
  __InitExceptBlockLDTC(0x462338);
  std::basic_ofstream_char::basic_ofstream(conversion2,0,fileName,8,0x1b6);
  if ((*(byte *)(conversion2[0] + 0x30) & 5) == 0) {
    counter = *(int *)(first + 4);
    iVar5 = *(int *)(last + 4);
    do {
      if ((counter == *(int *)(first + 8)) && (iVar5 == *(int *)(last + 8))) {
        FUN_00452de4(conversion2);
        if ((*(byte *)(conversion2[0] + 0x30) & 5) != 0) {
          uVar6 = 4;
          std::basic_ofstream_char::_dtor(conversion2,2);
          *sehChainHead = sehPrevFrame;
          return uVar6;
        }
        uVar6 = 0;
        std::basic_ofstream_char::_dtor(conversion2,2);
        *sehChainHead = sehPrevFrame;
        return uVar6;
      }
      if (*(int *)(first + 8) == counter) {
        iVar2 = -1;
      }
      else if (iVar5 == *(int *)(last + 8)) {
        iVar2 = 1;
      }
      else {
        iVar2 = PollCancel(counter,iVar5);
      }
      if (iVar2 == 0) {
        local_bc = counter;
        if ((conversion == 1) || (conversion == 2)) {
          piVar3 = (int *)WriteConvertedWord(counter,progressTotal,conversion2);
          if (piVar3 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *piVar3;
          }
          if ((*(byte *)(iVar2 + 0x30) & 5) != 0) {
            uVar6 = 4;
            std::basic_ofstream_char::_dtor(conversion2,2);
            *sehChainHead = sehPrevFrame;
            return uVar6;
          }
        }
        do {
          unused2 = local_bc + 0x10;
          local_c0 = iVar5;
          if (*(int *)(first + 8) == unused2) break;
          iVar2 = PollCancel(counter,unused2);
          local_bc = unused2;
        } while (iVar2 == 0);
        do {
          unused = local_c0 + 0x10;
          if (*(int *)(last + 8) == unused) break;
          counter = PollCancel(iVar5,unused);
          local_c0 = unused;
        } while (counter == 0);
      }
      else {
        unused2 = counter;
        unused = iVar5;
        if (iVar2 < 1) {
          if ((conversion == 2) || (conversion == 4)) {
            piVar3 = (int *)WriteConvertedWord(iVar5,progressTotal,conversion2);
            if (piVar3 == (int *)0x0) {
              counter = 0;
            }
            else {
              counter = *piVar3;
            }
            if ((*(byte *)(counter + 0x30) & 5) != 0) {
              uVar6 = 4;
              std::basic_ofstream_char::_dtor(conversion2,2);
              *sehChainHead = sehPrevFrame;
              return uVar6;
            }
          }
          do {
            unused = unused + 0x10;
            if (*(int *)(last + 8) == unused) break;
            counter = PollCancel(iVar5,unused);
          } while (counter == 0);
        }
        else {
          if ((conversion == 2) || (conversion == 3)) {
            piVar3 = (int *)WriteConvertedWord(counter,progressTotal,conversion2);
            if (piVar3 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *piVar3;
            }
            if ((*(byte *)(iVar5 + 0x30) & 5) != 0) {
              uVar6 = 4;
              std::basic_ofstream_char::_dtor(conversion2,2);
              *sehChainHead = sehPrevFrame;
              return uVar6;
            }
          }
          do {
            unused2 = unused2 + 0x10;
            if (*(int *)(first + 8) == unused2) break;
            iVar5 = PollCancel(counter,unused2);
          } while (iVar5 == 0);
        }
      }
      __ftol();
      cVar1 = (**(code **)*result)();
      counter = unused2;
      iVar5 = unused;
    } while (cVar1 != '\0');
    uVar6 = 1;
    std::basic_ofstream_char::_dtor(conversion2,2);
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar6 = 4;
    std::basic_ofstream_char::_dtor(conversion2,2);
    *sehChainHead = sehPrevFrame;
  }
  return uVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x004064c4  std::vector_string::insert_aux   (893 bytes, 2 ranges)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004048f4. std::vector<std::string> insert at a position, growing the storage (doubling, at least 64) when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_string::insert_aux(int vec,int pos,int value)

{
  uint len;
  int refs;
  int newCapacity;
  int storage;
  int slot;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  int end;
  
  __InitExceptBlockLDTC(0x4623bc);
  newCapacity = *(int *)(vec + 8);
  if (newCapacity == *(int *)(vec + 0x18)) {
    newCapacity = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (newCapacity < 0) {
      newCapacity = newCapacity + 0xf;
    }
    if (newCapacity >> 4 == 0) {
      newCapacity = 0x40;
    }
    else {
      newCapacity = (newCapacity >> 4) * 2;
    }
    storage = operator_new();
    if (storage == 0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_00406864,(undefined4*)&badAlloc,0,&LAB_004068bc,1,0,0,0);
    }
    std::uninitialized_copy_string(*(int *)(vec + 4),pos,storage);
    slot = pos - *(int *)(vec + 4);
    if (slot < 0) {
      slot = slot + 0xf;
    }
    slot = (slot >> 4) * 0x10 + storage;
    if (slot != 0) {
      *(undefined4 *)(slot + 8) = 0;
      refs = *(int *)(*(int *)(value + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(value + 8) + -4);
        rep = std::string::__getRep(slot,len,len);
        *(int **)(slot + 8) = rep + 3;
        memcpy(*(undefined4 **)(slot + 8),*(undefined4 **)(value + 8),len);
      }
      else {
        *(undefined4 *)(slot + 8) = *(undefined4 *)(value + 8);
        rep = (int *)(*(int *)(slot + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
    slot = pos - *(int *)(vec + 4);
    if (slot < 0) {
      slot = slot + 0xf;
    }
    std::uninitialized_copy_string(pos,*(int *)(vec + 8),(slot >> 4) * 0x10 + storage + 0x10);
    slot = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (slot < 0) {
      slot = slot + 0xf;
    }
    std::_Destroy_range_string(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(int *)(vec + 0x18) = newCapacity * 0x10 + storage;
    *(int *)(vec + 8) = (slot >> 4) * 0x10 + storage + 0x10;
    *(int *)(vec + 4) = storage;
  }
  else {
    end = newCapacity;
    if (newCapacity != 0) {
      *(undefined4 *)(newCapacity + 8) = 0;
      storage = *(int *)(*(int *)(newCapacity + -8) + -0xc);
      if (storage == -1 || storage + 1 < 0) {
        len = *(uint *)(*(int *)(newCapacity + -8) + -4);
        rep = std::string::__getRep(newCapacity,len,len);
        *(int **)(end + 8) = rep + 3;
        memcpy(*(undefined4 **)(end + 8),*(undefined4 **)(newCapacity + -8),len);
      }
      else {
        *(undefined4 *)(newCapacity + 8) = *(undefined4 *)(newCapacity + -8);
        rep = (int *)(*(int *)(newCapacity + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
    std::copy_backward_string(pos,*(int *)(vec + 8) + -0x10,*(int *)(vec + 8));
    std::string::operator_assign(pos,value);
    *(int *)(vec + 8) = *(int *)(vec + 8) + 0x10;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004068fc  std::copy_backward_string   (46 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00404d2c. copy_backward over std::string objects (16 bytes each)
//   file placement: inferred (address adjacency)
int __cdecl std::copy_backward_string(int first,int last,int destEnd)

{
  while (last != first) {
    last = last + -0x10;
    destEnd = destEnd + -0x10;
    std::string::operator_assign(destEnd,last);
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040692c  std::uninitialized_copy_string   (293 bytes, 2 ranges)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00404d5c. copy-constructs std::string objects from [first, last) into raw storage
//   file placement: inferred (address adjacency)
int __cdecl std::uninitialized_copy_string(int first,int last,int dest)

{
  int refs;
  uint len;
  int src;
  int dst;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462454);
  while (dst = dest, src = first, src != last) {
    dest = dst + 0x10;
    first = src + 0x10;
    if (dst != 0) {
      *(undefined4 *)(dst + 8) = 0;
      refs = *(int *)(*(int *)(src + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(src + 8) + -4);
        rep = std::string::__getRep(dst,len,len);
        *(int **)(dst + 8) = rep + 3;
        memcpy(*(undefined4 **)(dst + 8),*(undefined4 **)(src + 8),len);
      }
      else {
        *(undefined4 *)(dst + 8) = *(undefined4 *)(src + 8);
        rep = (int *)(*(int *)(dst + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return dst;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406a78  std::_Destroy_range_16   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00404ea8 (22 bytes; the code occurs several times, e.g. one template instance per type). destroys a range of 16-byte objects with trivial destructors (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_16(int first,int last)

{
  for (; last != first; first = first + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406a90  std::_Destroy_range_string   (182 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040483c. destroys the std::string objects in [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_string(undefined4 vec,int first,int last)

{
  int str;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46248c);
joined_r0x00406aa9:
  do {
    str = first;
    if (str == last) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    first = str + 0x10;
  } while ((str == 0) || (*(int *)(str + 8) == 0));
  if (*(int *)(*(int *)(str + 8) + -0xc) != -1) goto code_r0x00406acc;
  goto LAB_00406af9;
code_r0x00406acc:
  strRep = (int *)(*(int *)(str + 8) + -0xc);
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
  if (prevRefs == 0) {
LAB_00406af9:
    operator_delete();
    *(undefined4 *)(str + 8) = 0;
  }
  goto joined_r0x00406aa9;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406b48  std::operator_shl_string   (5595 bytes, 2 ranges)   [analysis]
//   writes a std::string to an output stream (inlined stream sentry and padding)
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * std::operator_shl_string(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5 )

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  uint uVar8;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  undefined1 exceptMsg2 [248];
  undefined4 unused2;
  undefined1 exceptMsg3 [452];
  undefined4 unused3;
  undefined4 unused4;
  undefined1 exceptMsg4 [248];
  undefined4 unused5;
  undefined1 exceptMsg5 [248];
  undefined4 unused6;
  undefined1 exceptMsg6 [248];
  undefined4 unused7;
  undefined1 exceptMsg7 [248];
  undefined4 unused8;
  undefined1 exceptMsg8 [248];
  undefined4 unused9;
  undefined1 exceptMsg9 [248];
  undefined4 unused10;
  undefined1 exceptMsg10 [248];
  undefined4 unused11;
  undefined1 exceptMsg11 [248];
  undefined4 unused12;
  undefined1 exceptMsg12 [252];
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  int *strRep;
  uint *msgText;
  undefined1 *unused17;
  undefined4 unused18;
  int unused19;
  int unused20;
  int *strRep2;
  uint *msgText2;
  undefined1 *unused21;
  undefined4 unused22;
  int unused23;
  int unused24;
  int *strRep3;
  uint *msgText3;
  uint local_46c;
  uint local_468;
  int local_464;
  uint unused25;
  undefined1 *unused26;
  undefined4 unused27;
  int unused28;
  int unused29;
  int *strRep4;
  uint *msgText4;
  undefined1 *unused30;
  undefined4 unused31;
  int unused32;
  int unused33;
  int *strRep5;
  uint *msgText5;
  undefined1 *unused34;
  undefined4 unused35;
  int unused36;
  int unused37;
  uint *msgText6;
  uint unused38;
  undefined1 *unused39;
  undefined4 unused40;
  int unused41;
  int unused42;
  int *strRep6;
  uint *msgText7;
  undefined1 *unused43;
  undefined4 unused44;
  int unused45;
  int unused46;
  int *strRep7;
  uint *msgText8;
  undefined1 *unused47;
  undefined4 unused48;
  int unused49;
  int unused50;
  uint *msgText9;
  uint unused51;
  byte local_329;
  uint local_328;
  undefined4 unused52;
  int unused53;
  byte local_319;
  uint local_318;
  byte local_311;
  uint local_310;
  int local_30c;
  undefined1 *unused54;
  undefined4 unused55;
  int unused56;
  int unused57;
  int *strRep8;
  uint *msgText10;
  undefined1 *unused58;
  undefined4 unused59;
  int unused60;
  int unused61;
  int *strRep9;
  uint *msgText11;
  undefined1 *unused62;
  undefined4 unused63;
  int unused64;
  int unused65;
  int *strRep10;
  uint *msgText12;
  uint unused66;
  uint local_2a4;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int str13;
  undefined1 str2 [8];
  int str14;
  undefined1 str3 [8];
  int str15;
  undefined4 failure2 [6];
  undefined4 failure3 [6];
  undefined4 failure4 [36];
  undefined1 str4 [8];
  int str16;
  undefined1 str5 [8];
  int str17;
  undefined1 str6 [8];
  int str18;
  undefined1 str7 [8];
  int str19;
  undefined1 str8 [8];
  int str20;
  undefined1 str9 [8];
  int str21;
  undefined4 failure5 [6];
  undefined4 failure6 [6];
  undefined4 failure7 [6];
  undefined4 failure8 [6];
  undefined4 failure9 [6];
  undefined4 failure10 [6];
  undefined1 str10 [8];
  int str22;
  undefined1 str11 [8];
  int str23;
  undefined1 str12 [8];
  int str24;
  undefined4 failure11 [6];
  undefined4 failure12 [6];
  undefined4 failure13 [6];
  int *local_24;
  char local_20;
  
  unused3 = param_1;
  __InitExceptBlockLDTC(0x462764);
  local_2a4 = 0;
  ehContext = 0x14;
  local_24 = param_4;
  if (*(int *)(*param_4 + 0x28) != 0) {
    FUN_0044f200(*(int **)(*param_4 + 0x28));
  }
  if (DAT_00473200 != '\0') {
    if (param_4 == (int *)&DAT_004774f8) {
      FUN_004577dc((int *)&DAT_004746a0);
    }
    if (param_4 == &DAT_00477538) {
      FUN_004577dc((int *)&DAT_004746b8);
    }
  }
  if ((*(int *)(*param_4 + 0x24) != 0) && ((*(byte *)(*(int *)(*param_4 + 0x24) + 4) & 1) != 0)) {
    (**(code **)(**(int **)(*param_4 + 0x24) + 0xc))();
  }
  local_20 = *(int *)(*param_4 + 0x30) == 0;
  if (!(bool)local_20) {
    iVar3 = *param_4;
    uVar8 = *(uint *)(iVar3 + 0x30);
    unused66 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_004086e0;
        objectDtor = 0;
        ehContext = 0x20;
        msgText12 = (uint *)__rwstd::except_msg_string::format(exceptMsg12,PTR_s_iostream_object_has_failbit_set_00473194);
        iVar2 = std::string::string_from_cstr((int)str12,msgText12);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure13,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str24 != 0) {
          if (*(int *)(str24 + -0xc) != -1) {
            strRep10 = (int *)(str24 + -0xc);
            if (strRep10 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep10 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep10 = *strRep10 + -1;
              iVar2 = *strRep10 + 1;
            }
            if (iVar2 != 0) goto LAB_00406d85;
          }
          unused65 = str24 + -0xc;
          unused64 = str24 + -0xc;
          operator_delete();
          unused63 = 0;
          unused62 = str12;
          str24 = 0;
          unused12 = 0;
        }
LAB_00406d85:
        ehContext = 0x14;
        _ThrowExceptionLDTC((uint *)&DAT_00408678,failure13,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_004086e0;
        objectDtor = 0;
        ehContext = 0x38;
        msgText11 = (uint *)__rwstd::except_msg_string::format(exceptMsg11,PTR_s_iostream_object_has_badbit_set_00473198);
        iVar2 = std::string::string_from_cstr((int)str11,msgText11);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure12,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str23 != 0) {
          if (*(int *)(str23 + -0xc) != -1) {
            strRep9 = (int *)(str23 + -0xc);
            if (strRep9 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep9 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep9 = *strRep9 + -1;
              iVar2 = *strRep9 + 1;
            }
            if (iVar2 != 0) goto LAB_00406ed8;
          }
          unused61 = str23 + -0xc;
          unused60 = str23 + -0xc;
          operator_delete();
          unused59 = 0;
          unused58 = str11;
          str23 = 0;
          unused11 = 0;
        }
LAB_00406ed8:
        ehContext = 0x14;
        _ThrowExceptionLDTC((uint *)&DAT_00408678,failure12,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        uVar8 = 1;
        copyCtor = &LAB_004086e0;
        objectDtor = 0;
        ehContext = 0x50;
        msgText10 = (uint *)__rwstd::except_msg_string::format(exceptMsg10,PTR_s_iostream_object_has_eofbit_set_0047319c);
        iVar3 = std::string::string_from_cstr((int)str10,msgText10);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure11,iVar3);
        ehDtorCount = ehDtorCount + 2;
        if (str22 != 0) {
          if (*(int *)(str22 + -0xc) != -1) {
            strRep8 = (int *)(str22 + -0xc);
            if (strRep8 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else if (strRep8 == &g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *strRep8 = *strRep8 + -1;
              iVar3 = *strRep8 + 1;
            }
            if (iVar3 != 0) goto LAB_0040703d;
          }
          unused57 = str22 + -0xc;
          unused56 = str22 + -0xc;
          operator_delete();
          unused55 = 0;
          unused54 = str10;
          str22 = 0;
          unused10 = 0;
        }
LAB_0040703d:
        ehContext = 0x14;
        _ThrowExceptionLDTC((uint *)&DAT_00408678,failure11,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
      }
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x68;
  if (local_20 != '\0') {
    local_30c = *(int *)(*(int *)(param_5 + 8) + -4);
    iVar3 = *(int *)(*param_4 + 0xc) - local_30c;
    if (((*(byte *)(*param_4 + 4) & 0xb0) == 0) || ((*(byte *)(*param_4 + 4) & 0x80) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_00407117;
        local_311 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_311;
          local_310 = (uint)local_311;
        }
        else {
          local_310 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_310 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_00407117:
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x10) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_004071a9;
        local_319 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_319;
          local_318 = (uint)local_319;
        }
        else {
          local_318 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_318 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_004071a9:
    if (((*(int *)(*param_4 + 0x30) == 0) && (local_30c != 0)) && (*(int *)(*param_4 + 0x24) != 0))
    {
      unused53 = local_30c;
      unused52 = *(undefined4 *)(param_5 + 8);
      iVar2 = (**(code **)(**(int **)(*param_4 + 0x24) + 0x2c))();
      if (iVar2 != local_30c) {
        local_2a4 = 1;
      }
    }
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x20) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_004072ab;
        local_329 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_329;
          local_328 = (uint)local_329;
        }
        else {
          local_328 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_328 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_004072ab:
    *(undefined4 *)(*param_4 + 0xc) = 0;
  }
  ehDtorCount = ehDtorCount + -1;
  if (((*(byte *)(*local_24 + 5) & 0x20) != 0) &&
     (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    unused51 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_004086e0;
        objectDtor = 0;
        ehContext = 0x80;
        msgText9 = (uint *)__rwstd::except_msg_string::format(exceptMsg9,PTR_s_iostream_object_has_failbit_set_00473194);
        iVar2 = std::string::string_from_cstr((int)str9,msgText9);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure10,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str21 != 0) {
          if (*(int *)(str21 + -0xc) != -1) {
            piVar4 = (int *)(str21 + -0xc);
            if (piVar4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (piVar4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_00407446;
          }
          unused50 = str21 + -0xc;
          unused49 = str21 + -0xc;
          operator_delete();
          unused48 = 0;
          unused47 = str9;
          str21 = 0;
          unused9 = 0;
        }
LAB_00407446:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_00408678,failure10,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_004086e0;
        objectDtor = 0;
        ehContext = 0x98;
        msgText8 = (uint *)__rwstd::except_msg_string::format(exceptMsg8,PTR_s_iostream_object_has_badbit_set_00473198);
        iVar2 = std::string::string_from_cstr((int)str8,msgText8);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure9,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str20 != 0) {
          if (*(int *)(str20 + -0xc) != -1) {
            strRep7 = (int *)(str20 + -0xc);
            if (strRep7 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep7 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep7 = *strRep7 + -1;
              iVar2 = *strRep7 + 1;
            }
            if (iVar2 != 0) goto LAB_004075b1;
          }
          unused46 = str20 + -0xc;
          unused45 = str20 + -0xc;
          operator_delete();
          unused44 = 0;
          unused43 = str8;
          str20 = 0;
          unused8 = 0;
        }
LAB_004075b1:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_00408678,failure9,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        uVar8 = 1;
        copyCtor = &LAB_004086e0;
        objectDtor = 0;
        ehContext = 0xb0;
        msgText7 = (uint *)__rwstd::except_msg_string::format(exceptMsg7,PTR_s_iostream_object_has_eofbit_set_0047319c);
        iVar3 = std::string::string_from_cstr((int)str7,msgText7);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure8,iVar3);
        ehDtorCount = ehDtorCount + 2;
        if (str19 != 0) {
          if (*(int *)(str19 + -0xc) != -1) {
            strRep6 = (int *)(str19 + -0xc);
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
            if (iVar3 != 0) goto LAB_0040771c;
          }
          unused42 = str19 + -0xc;
          unused41 = str19 + -0xc;
          operator_delete();
          unused40 = 0;
          unused39 = str7;
          str19 = 0;
          unused7 = 0;
        }
LAB_0040771c:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_00408678,failure8,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
      }
    }
  }
  if ((DAT_00473200 != '\0') &&
     (((local_24 == (int *)&DAT_004774f8 || (local_24 == &DAT_00477538)) &&
      (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)))) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    unused38 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_004086e0;
        objectDtor = 0;
        ehContext = 200;
        msgText6 = (uint *)__rwstd::except_msg_string::format(exceptMsg6,PTR_s_iostream_object_has_failbit_set_00473194);
        iVar2 = std::string::string_from_cstr((int)str6,msgText6);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure7,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str18 != 0) {
          if (*(int *)(str18 + -0xc) != -1) {
            piVar4 = (int *)(str18 + -0xc);
            if (piVar4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (piVar4 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_004078e7;
          }
          unused37 = str18 + -0xc;
          unused36 = str18 + -0xc;
          operator_delete();
          unused35 = 0;
          unused34 = str6;
          str18 = 0;
          unused6 = 0;
        }
LAB_004078e7:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_00408678,failure7,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_004086e0;
        objectDtor = 0;
        ehContext = 0xe0;
        msgText5 = (uint *)__rwstd::except_msg_string::format(exceptMsg5,PTR_s_iostream_object_has_badbit_set_00473198);
        iVar2 = std::string::string_from_cstr((int)str5,msgText5);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure6,iVar2);
        ehDtorCount = ehDtorCount + 2;
        if (str17 != 0) {
          if (*(int *)(str17 + -0xc) != -1) {
            strRep5 = (int *)(str17 + -0xc);
            if (strRep5 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else if (strRep5 == &g_nullStringRep) {
              iVar2 = 1;
            }
            else {
              *strRep5 = *strRep5 + -1;
              iVar2 = *strRep5 + 1;
            }
            if (iVar2 != 0) goto LAB_00407a52;
          }
          unused33 = str17 + -0xc;
          unused32 = str17 + -0xc;
          operator_delete();
          unused31 = 0;
          unused30 = str5;
          str17 = 0;
          unused5 = 0;
        }
LAB_00407a52:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_00408678,failure6,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        uVar8 = 1;
        copyCtor = &LAB_004086e0;
        objectDtor = 0;
        ehContext = 0xf8;
        msgText4 = (uint *)__rwstd::except_msg_string::format(exceptMsg4,PTR_s_iostream_object_has_eofbit_set_0047319c);
        iVar3 = std::string::string_from_cstr((int)str4,msgText4);
        ehDtorCount = ehDtorCount + 1;
        std::ios_base::failure::failure(failure5,iVar3);
        ehDtorCount = ehDtorCount + 2;
        if (str16 != 0) {
          if (*(int *)(str16 + -0xc) != -1) {
            strRep4 = (int *)(str16 + -0xc);
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
            if (iVar3 != 0) goto LAB_00407bbd;
          }
          unused29 = str16 + -0xc;
          unused28 = str16 + -0xc;
          operator_delete();
          unused27 = 0;
          unused26 = str4;
          str16 = 0;
          unused4 = 0;
        }
LAB_00407bbd:
        ehContext = 0x74;
        _ThrowExceptionLDTC((uint *)&DAT_00408678,failure5,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
      }
    }
  }
  if (local_2a4 == 0) goto LAB_00408660;
  unused25 = local_2a4;
  local_464 = *param_4;
  local_468 = *(uint *)(local_464 + 0x30) | local_2a4;
  local_46c = local_468;
  if (*(int *)(local_464 + 0x24) == 0) {
    local_46c = local_468 | 1;
    *(uint *)(local_464 + 0x30) = *(uint *)(local_464 + 0x30) | 1;
  }
  *(uint *)(local_464 + 0x30) = local_46c;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34)) == 0) goto LAB_00408660;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 4) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar8 = 1;
    copyCtor = &LAB_004086e0;
    objectDtor = 0;
    ehContext = 0x17c;
    msgText3 = (uint *)__rwstd::except_msg_string::format(exceptMsg3,PTR_s_iostream_object_has_failbit_set_00473194);
    iVar3 = std::string::string_from_cstr((int)str3,msgText3);
    ehDtorCount = ehDtorCount + 1;
    std::ios_base::failure::failure(failure4,iVar3);
    ehDtorCount = ehDtorCount + 2;
    if (str15 != 0) {
      if (*(int *)(str15 + -0xc) != -1) {
        strRep3 = (int *)(str15 + -0xc);
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
        if (iVar3 != 0) goto LAB_0040833d;
      }
      unused24 = str15 + -0xc;
      unused23 = str15 + -0xc;
      operator_delete();
      unused22 = 0;
      unused21 = str3;
      str15 = 0;
      unused2 = 0;
    }
LAB_0040833d:
    ehContext = 0x170;
    _ThrowExceptionLDTC((uint *)&DAT_00408678,failure4,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 1) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar8 = 1;
    copyCtor = &LAB_004086e0;
    objectDtor = 0;
    ehContext = 0x194;
    msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_iostream_object_has_badbit_set_00473198);
    iVar3 = std::string::string_from_cstr((int)str2,msgText2);
    ehDtorCount = ehDtorCount + 1;
    std::ios_base::failure::failure(failure3,iVar3);
    ehDtorCount = ehDtorCount + 2;
    if (str14 != 0) {
      if (*(int *)(str14 + -0xc) != -1) {
        strRep2 = (int *)(str14 + -0xc);
        if (strRep2 == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (strRep2 == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *strRep2 = *strRep2 + -1;
          iVar3 = *strRep2 + 1;
        }
        if (iVar3 != 0) goto LAB_004084c0;
      }
      unused20 = str14 + -0xc;
      unused19 = str14 + -0xc;
      operator_delete();
      unused18 = 0;
      unused17 = str2;
      str14 = 0;
      unused = 0;
    }
LAB_004084c0:
    ehContext = 0x170;
    _ThrowExceptionLDTC((uint *)&DAT_00408678,failure3,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 2) == 0) goto LAB_00408660;
  *(uint *)(local_464 + 0x30) = local_46c;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar8 = 1;
  copyCtor = &LAB_004086e0;
  objectDtor = 0;
  ehContext = 0x1ac;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_iostream_object_has_eofbit_set_0047319c);
  iVar3 = std::string::string_from_cstr((int)str,msgText);
  ehDtorCount = ehDtorCount + 1;
  std::ios_base::failure::failure(failure2,iVar3);
  ehDtorCount = ehDtorCount + 2;
  if (str13 != 0) {
    if (*(int *)(str13 + -0xc) != -1) {
      strRep = (int *)(str13 + -0xc);
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
      if (iVar3 != 0) goto LAB_00408643;
    }
    unused16 = str13 + -0xc;
    unused15 = str13 + -0xc;
    operator_delete();
    unused14 = 0;
    unused13 = str;
    str13 = 0;
  }
LAB_00408643:
  ehContext = 0x170;
  _ThrowExceptionLDTC((uint *)&DAT_00408678,failure2,objectDtor,copyCtor,uVar8,throwFlags,throwFile,throwLine);
LAB_00408660:
  *sehChainHead = sehPrevFrame;
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004088f4  MergeWordLists   (2063 bytes, 4 ranges)   [analysis]
//   the merge: loads both lists, sorts and de-duplicates them, combines them under the operation (union, intersection, difference...) and writes the output
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00408949) */
/* WARNING: Removing unreachable block (ram,0x00408ca8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff44 : 0x00408cb6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl MergeWordLists(int *self,LPCSTR primaryFile,LPCSTR secondaryFile,int operation,int conversion,LPCSTR outputFile)

{
  int last4;
  int first1;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *sehChainHead;
  int *first2;
  undefined4 last2;
  undefined4 result [4];
  undefined4 result2 [4];
  int unused;
  int unused2;
  int unused3;
  int unused4;
  int unused5;
  int unused6;
  int unused7;
  int unused8;
  int local_f8;
  int local_f4;
  int last5;
  int *less;
  int *less2;
  int first4;
  int local_e0;
  int operation2;
  int unused9;
  int unused10;
  int local_d0;
  int *less3;
  int *unused11;
  char status [9];
  int unused12;
  int unused13;
  int local_b0;
  int local_ac;
  int last6;
  int *less4;
  int *less5;
  int first5;
  int local_98;
  int operation3;
  int unused14;
  int unused15;
  int local_88;
  int *less6;
  int *unused16;
  char status2 [9];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 vec;
  int first;
  int last;
  undefined4 unused17;
  undefined4 vec2;
  int first3;
  int last3;
  undefined4 unused18;
  
  __InitExceptBlockLDTC(0x4629c8);
  ehContext = 8;
  (**(code **)(*self + 4))();
  first3 = 0;
  last3 = 0;
  unused18 = 0;
  status2[5] = '@';
  status2[6] = '\0';
  status2[7] = '\0';
  status2[8] = '\0';
  status2[1] = '\x01';
  status2[2] = '\0';
  status2[3] = '\0';
  status2[4] = '\0';
  vec2 = 0x40;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x2c;
  first2 = self;
  first1 = LoadWordList(self,primaryFile,(int)&vec2,status2);
  if (first1 < 0) {
    if (first1 == -3) {
      first1 = 1;
    }
    else {
      first1 = 2;
    }
    ehDtorCount = ehDtorCount + -1;
    std::_Destroy_range_string(&vec2,first3,last3);
    unused = first3;
    operator_delete();
    *sehChainHead = sehPrevFrame;
    return first1;
  }
  if (status2[0] == '\0') {
    last2 = 0x4089db;
    (**(code **)(*self + 4))();
    last4 = last3;
    first1 = first3;
    ehContext = 0x44;
    unused16 = self;
    if (last3 != first3) {
      local_88 = last3 - first3;
      less6 = self;
      if (local_88 < 0) {
        local_88 = local_88 + 0xf;
      }
      local_88 = local_88 >> 4;
      operation3 = operator_new();
      unused14 = local_88;
      first5 = operation3;
      local_98 = local_88;
      less5 = less6;
      unused15 = operation3;
      if (operation3 == 0) {
        iVar3 = last4 - first1;
        less4 = less6;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xf;
        }
        if (iVar3 >> 4 < 0xf) {
          std::__introsort_loop_wordlist(first1,last4,less6);
        }
        else {
          iVar3 = last4 - first1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          iVar4 = iVar3 >> 5;
          if (iVar4 < 0) {
            iVar4 = iVar4 + (uint)((iVar3 >> 4 & 1U) != 0);
          }
          last6 = iVar4 * 0x10 + first1;
          std::stable_sort_wordlist(first1,last6,less6);
          std::stable_sort_wordlist(last6,last4,less4);
          iVar3 = last4 - last6;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          iVar4 = last6 - first1;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0xf;
          }
          std::__merge_without_buffer_string(first1,last6,last4,iVar4 >> 4,iVar3 >> 4,less4);
        }
      }
      else {
        iVar3 = last4 - first1;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xf;
        }
        local_b0 = iVar3 >> 4;
        if (local_88 < iVar3 >> 4) {
          piVar5 = &local_98;
        }
        else {
          piVar5 = &local_b0;
        }
        local_ac = *piVar5;
        unused13 = operation3;
        CombineSortedLists(result2,first1,local_ac * 0x10 + first1,first2,last2,operation3);
        std::inplace_merge_string(first1,last4,first5,local_98,0,less5);
        std::_Destroy_range_16(first5,local_ac * 0x10 + first5);
        unused12 = first5;
        operator_delete();
      }
    }
    ehContext = 0x2c;
  }
  if (operation == 0) {
    (**(code **)(*self + 4))();
    first1 = WriteWordList(self,(int)&vec2,(int)&vec2,1,conversion,outputFile);
    if (first1 != 0) {
      ehDtorCount = ehDtorCount + -1;
      std::_Destroy_range_string(&vec2,first3,last3);
      unused6 = first3;
      operator_delete();
      *sehChainHead = sehPrevFrame;
      return first1;
    }
  }
  else {
    (**(code **)(*self + 4))();
    first = 0;
    last = 0;
    unused17 = 0;
    status[5] = '@';
    status[6] = '\0';
    status[7] = '\0';
    status[8] = '\0';
    status[1] = '\x01';
    status[2] = '\0';
    status[3] = '\0';
    status[4] = '\0';
    vec = 0x40;
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x74;
    first2 = self;
    first1 = LoadWordList(self,secondaryFile,(int)&vec,status);
    if (first1 < 0) {
      if (first1 == -3) {
        first1 = 1;
      }
      else {
        first1 = 3;
      }
      ehDtorCount = ehDtorCount + -1;
      std::_Destroy_range_string(&vec,first,last);
      unused3 = first;
      operator_delete();
      ehDtorCount = ehDtorCount + -1;
      std::_Destroy_range_string(&vec2,first3,last3);
      unused2 = first3;
      operator_delete();
      *sehChainHead = sehPrevFrame;
      return first1;
    }
    if (status[0] == '\0') {
      last2 = 0x408d73;
      (**(code **)(*self + 4))();
      last4 = last;
      first1 = first;
      ehContext = 0x98;
      unused11 = self;
      if (last != first) {
        local_d0 = last - first;
        less3 = self;
        if (local_d0 < 0) {
          local_d0 = local_d0 + 0xf;
        }
        local_d0 = local_d0 >> 4;
        operation2 = operator_new();
        unused9 = local_d0;
        first4 = operation2;
        local_e0 = local_d0;
        less2 = less3;
        unused10 = operation2;
        if (operation2 == 0) {
          iVar3 = last4 - first1;
          less = less3;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          if (iVar3 >> 4 < 0xf) {
            std::__introsort_loop_wordlist(first1,last4,less3);
          }
          else {
            iVar3 = last4 - first1;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 0xf;
            }
            iVar4 = iVar3 >> 5;
            if (iVar4 < 0) {
              iVar4 = iVar4 + (uint)((iVar3 >> 4 & 1U) != 0);
            }
            last5 = iVar4 * 0x10 + first1;
            std::stable_sort_wordlist(first1,last5,less3);
            std::stable_sort_wordlist(last5,last4,less);
            iVar3 = last4 - last5;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 0xf;
            }
            iVar4 = last5 - first1;
            if (iVar4 < 0) {
              iVar4 = iVar4 + 0xf;
            }
            std::__merge_without_buffer_string(first1,last5,last4,iVar4 >> 4,iVar3 >> 4,less);
          }
        }
        else {
          iVar3 = last4 - first1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xf;
          }
          local_f8 = iVar3 >> 4;
          if (local_d0 < iVar3 >> 4) {
            piVar5 = &local_e0;
          }
          else {
            piVar5 = &local_f8;
          }
          local_f4 = *piVar5;
          unused8 = operation2;
          CombineSortedLists(result,first1,local_f4 * 0x10 + first1,first2,last2,operation2);
          std::inplace_merge_string(first1,last4,first4,local_e0,0,less2);
          std::_Destroy_range_16(first4,local_f4 * 0x10 + first4);
          unused7 = first4;
          operator_delete();
        }
      }
      ehContext = 0x74;
    }
    (**(code **)(*self + 4))();
    first1 = WriteWordList(self,(int)&vec2,(int)&vec,operation,conversion,outputFile);
    if (first1 != 0) {
      ehDtorCount = ehDtorCount + -1;
      std::_Destroy_range_string(&vec,first,last);
      unused5 = first;
      operator_delete();
      ehContext = 0x74;
      ehDtorCount = ehDtorCount + -1;
      std::_Destroy_range_string(&vec2,first3,last3);
      unused4 = first3;
      operator_delete();
      *sehChainHead = sehPrevFrame;
      return first1;
    }
    ehDtorCount = ehDtorCount + -1;
    std::_Destroy_range_string(&vec,first,last);
    operator_delete();
    ehContext = 0x2c;
  }
  ehDtorCount = ehDtorCount + -1;
  std::_Destroy_range_string(&vec2,first3,last3);
  operator_delete();
  *sehChainHead = sehPrevFrame;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004092d4  CombineSortedLists   (334 bytes)   [analysis]
//   applies the merge operation to two sorted word lists
//   file placement: inferred (address adjacency)
undefined4 * __cdecl CombineSortedLists(undefined4 *result,int first1,int last1,undefined4 first2,undefined4 last2, int operation)

{
  int refs;
  uint len;
  int iVar3;
  int iVar4;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x462ad0);
  while (iVar4 = operation, iVar3 = first1, iVar3 != last1) {
    first1 = iVar3 + 0x10;
    operation = iVar4 + 0x10;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      refs = *(int *)(*(int *)(iVar3 + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(iVar3 + 8) + -4);
        rep = std::string::__getRep(iVar4,len,len);
        *(int **)(iVar4 + 8) = rep + 3;
        memcpy(*(undefined4 **)(iVar4 + 8),*(undefined4 **)(iVar3 + 8),len);
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
        rep = (int *)(*(int *)(iVar4 + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
  }
  *result = first2;
  result[1] = last2;
  result[2] = iVar4;
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409424  std::inplace_merge_string   (225 bytes)   [analysis]
//   merges two adjacent sorted ranges of words (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::inplace_merge_string(int b,int a,int b2,int param_4,undefined4 param_5,undefined4 *less)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = a - b;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  uVar2 = (iVar1 >> 4) + 1;
  iVar1 = (int)uVar2 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar2 & 1) != 0);
  }
  iVar4 = iVar1 * 0x10 + b;
  if (param_4 < iVar1) {
    std::inplace_merge_string(b,iVar4,b2,param_4,0,less);
    std::inplace_merge_string(iVar4,a,b2,param_4,0,less);
  }
  else {
    std::__merge_sort_string(b,iVar4,b2,0,0,less);
    std::__merge_sort_string(iVar4,a,b2,0,0,less);
  }
  iVar1 = a - iVar4;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  iVar3 = iVar4 - b;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  std::__merge_adaptive_string(b,iVar4,a,iVar3 >> 4,iVar1 >> 4,b2,param_4,0,less);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409508  std::__merge_sort_string   (149 bytes)   [analysis]
//   merge sort of a range of words (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__merge_sort_string(int b,int a,int b2,undefined4 param_4,undefined4 param_5, undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = a - b;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  iVar1 = iVar1 >> 4;
  iVar2 = 7;
  std::__insertion_sort_string(b,a,7,param_6);
  if (7 < iVar1) {
    do {
      std::__merge_sort_loop_string(b,a,b2,iVar2,param_6);
      std::__merge_sort_loop_string(b2,iVar1 * 0x10 + b2,b,iVar2 * 2,param_6);
      iVar2 = iVar2 * 4;
    } while (iVar2 < iVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004095a0  std::__insertion_sort_string   (90 bytes)   [analysis]
//   insertion sort of a small range of words (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__insertion_sort_string(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  while( true ) {
    iVar1 = param_2 - param_1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if (iVar1 >> 4 < param_3) break;
    std::__introsort_loop_wordlist(param_1,param_3 * 0x10 + param_1,param_4);
    param_1 = param_1 + param_3 * 0x10;
  }
  std::__introsort_loop_wordlist(param_1,param_2,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004095fc  std::__merge_sort_loop_string   (161 bytes)   [analysis]
//   one pass of merge sort (inferred)
//   file placement: inferred (address adjacency)
void __cdecl std::__merge_sort_loop_string(int param_1,int a,int b,int param_4,undefined4 *param_5)

{
  int iVar1;
  int a2;
  int a3;
  int *piVar4;
  int local_8;
  
  iVar1 = param_4;
  a3 = param_4 * 2;
  while( true ) {
    a2 = a - param_1;
    if (a2 < 0) {
      a2 = a2 + 0xf;
    }
    if (a2 >> 4 < a3) break;
    a2 = param_4 * 0x10 + param_1;
    b = std::merge_string(param_1,a2,a2,iVar1 * 0x20 + param_1,b,param_5);
    param_1 = param_1 + iVar1 * 0x20;
  }
  a3 = a - param_1;
  if (a3 < 0) {
    a3 = a3 + 0xf;
  }
  local_8 = a3 >> 4;
  if (a3 >> 4 < param_4) {
    piVar4 = &local_8;
  }
  else {
    piVar4 = &param_4;
  }
  param_4 = *piVar4;
  a3 = param_4 * 0x10 + param_1;
  std::merge_string(param_1,a3,a3,a,b,param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004096a0  std::merge_string   (241 bytes)   [analysis]
//   merges two sorted ranges of words into a destination (inferred)
//   file placement: inferred (address adjacency)
int __cdecl std::merge_string(int param_1,int a,int param_3,int a2,int b2,undefined4 *param_6)

{
  char cVar1;
  int b;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 abandonException;
  
  __InitExceptBlockLDTC(0x462b0c);
  while ((param_1 != a && (param_3 != a2))) {
    cVar1 = (**(code **)*param_6)();
    if (cVar1 == '\0') {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_00409830;
      objectDtor = 0;
      Abandon_exception::Abandon_exception(&abandonException);
      _ThrowExceptionLDTC((uint *)&DAT_004097d4,&abandonException,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    b = PollCancel(param_3,param_1);
    if (b < 1) {
      std::string::operator_assign(b2,param_1);
      param_1 = param_1 + 0x10;
      b2 = b2 + 0x10;
    }
    else {
      std::string::operator_assign(b2,param_3);
      param_3 = param_3 + 0x10;
      b2 = b2 + 0x10;
    }
  }
  b = WordLess(param_1,a,b2);
  b = WordLess(param_3,a2,b);
  *sehChainHead = sehPrevFrame;
  return b;
}

} // namespace tea
