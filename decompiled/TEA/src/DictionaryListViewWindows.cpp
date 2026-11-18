// TEA.exe — application module "DictionaryListViewWindows"
// 16 functions, 0x004765a0..0x00477ca0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004765a0  DictionaryListViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: DictionaryListViewWindows::Find [rtti:vtable]; DictionaryListViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl DictionaryListViewWindows::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&DictionaryListViewWindows::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = PropertiesViewWindows::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004765e8  DictionaryListViewWindows::DictionaryListViewWindows   (3807 bytes)   [rtti:vtable-store constructor]
//   constructor: stores DictionaryListViewWindows's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x00476771) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl DictionaryListViewWindows::DictionaryListViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int firstId,int param_5,int module)

{
  int iVar1;
  int *piVar2;
  uint *strRep;
  uint uVar4;
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
  undefined1 exceptMsg2 [280];
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  int unused5;
  int unused6;
  int unused7;
  uint *unused8;
  uint *unused9;
  uint *strRep2;
  undefined1 *unused10;
  undefined4 unused11;
  int unused12;
  int unused13;
  int *strRep3;
  undefined1 *unused14;
  undefined4 unused15;
  int unused16;
  int unused17;
  uint local_300;
  undefined1 local_2f9 [245];
  uint local_204;
  undefined1 *unused18;
  undefined4 unused19;
  int *unused20;
  int *unused21;
  int *strRep4;
  int *newData2;
  int *unused22;
  uint unused23;
  undefined1 *unused24;
  int *newRep;
  int *unused25;
  uint len;
  int *strRep5;
  undefined1 *unused26;
  int *unused27;
  undefined4 unused28;
  uint *msgText;
  uint local_1b4;
  undefined1 *unused29;
  undefined4 unused30;
  int *unused31;
  int *unused32;
  int *strRep6;
  int *unused33;
  int *unused34;
  uint unused35;
  undefined1 *unused36;
  int *newRep2;
  int *unused37;
  uint len2;
  int *strRep7;
  undefined1 *unused38;
  int *unused39;
  undefined4 unused40;
  uint *msgText2;
  int local_164;
  uint local_160;
  uint *unused41;
  uint *unused42;
  undefined1 *unused43;
  undefined4 unused44;
  int unused45;
  int unused46;
  undefined1 *unused47;
  undefined4 unused48;
  int unused49;
  int unused50;
  undefined1 *unused51;
  undefined4 unused52;
  int unused53;
  int unused54;
  undefined4 *dest;
  undefined4 *src;
  uint unused55;
  int *unused56;
  int *newRep3;
  int *newData3;
  uint len3;
  int *strRep8;
  int *unused57;
  int local_f0;
  int local_ec;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  int str3;
  undefined1 local_b4 [8];
  int str4;
  undefined1 str [8];
  int *str5;
  undefined1 str2 [8];
  int *str6;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused58;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused59;
  undefined1 result4 [8];
  uint *defaultValue;
  undefined1 result2 [8];
  int str7;
  undefined1 local_34 [8];
  int str8;
  undefined1 paths [8];
  int str9;
  undefined1 result3 [8];
  uint *defaultValue2;
  
  __InitExceptBlockLDTC(0x500448);
  ehContext = 8;
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x1f6);
    self[0x1f6] = (int)(self + 499);
    self[0x1f7] = (int)(self + 500);
    self[1] = (int)(self + 499);
    self[2] = (int)(self + 500);
    self[0x1f2] = 0;
    self[0x1f5] = 0;
    self[499] = (int)&OWL::TEventHandler::vftable;
    self[500] = (int)&OWL::TStreamableBase::vftable;
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x1f6,1);
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x768;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x768;
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x5001cc,param_3,firstId,(uint *)0x1e8c,0,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x768;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x768;
  self[3] = (int)&DictionaryListViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00500744;
  *(undefined ***)self[2] = &PTR_LAB_00500750;
  *(undefined ***)(*self + 8) = &DictionaryListViewWindows::vftable_TWindow;
  self[0x18] = module;
  self[0x1c] = 0;
  self[0x1c] = (int)&g_emptyStringData;
  unused7 = self[0x1c];
  ehDtorCount = ehDtorCount + 4;
  local_ec = param_5;
  piVar2 = self + 0x1e;
  self[0x20] = 0;
  ehContext = 0x20;
  iVar1 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    len3 = *(uint *)(*(int *)(param_5 + 8) + -4);
    newRep3 = std::string::__getRep(piVar2,len3,len3);
    newData3 = newRep3 + 3;
    self[0x20] = (int)newData3;
    unused5 = self[0x20];
    unused55 = len3;
    src = *(undefined4 **)(local_ec + 8);
    dest = (undefined4 *)self[0x20];
    unused56 = piVar2;
    memcpy(dest,src,len3);
  }
  else {
    local_f0 = *(int *)(param_5 + 8);
    self[0x20] = local_f0;
    unused6 = self[0x20];
    strRep8 = (int *)(self[0x20] + -0xc);
    unused57 = piVar2;
    if (strRep8 != &g_nullStringRep) {
      *strRep8 = *strRep8 + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  PVWPathList::PVWPathList(self + 0x22,self,firstId,module,0);
  ehDtorCount = ehDtorCount + 0x27;
  PVWPushButton::PVWPushButton(self + 0x192,0,self,0x1eb4);
  ehDtorCount = ehDtorCount + 6;
  OWL::TButton::TButton(self + 0x1c4,0,*self,1,0);
  ehDtorCount = ehDtorCount + 4;
  self[0x1ef] = DAT_004eb4c4;
  self[0x1f0] = DAT_004eb4c8;
  if ((*(byte *)(self + 0x18) & 4) == 0) {
    ehContext = 200;
    GetMyDocumentsDirectory((int)result4);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0xbc;
    local_160 = defaultValue[-1];
    if (local_160 != 0) {
      local_164 = local_160 - 1;
      if (1 < (int)(defaultValue[-3] + 1)) {
        std::string::__unshare((int)result4);
      }
      if (defaultValue + -3 != &g_nullStringRep) {
        defaultValue[-3] = 0xffffffff;
      }
      if (*(char *)((int)defaultValue + local_164) == '\\') {
        uVar4 = local_160 - 1;
        if ((*(int *)&g_stringNpos) - 0xeU < uVar4) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_00408370;
          objectDtor = 0;
          ehContext = 0xe0;
          msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00516d20
                                          );
          std::string::string_from_cstr((int)str2,msgText2);
          ehDtorCount = ehDtorCount + 2;
          lengthError[0] = &std::logic_error::vftable;
          unused40 = 0;
          unused59 = (int *)0x0;
          ehContext = 0xec;
          if (str6[-3] == -1 || str6[-3] + 1 < 0) {
            len2 = str6[-1];
            newRep2 = std::string::__getRep(newStr2,len2,len2);
            unused36 = newStr2;
            newData = newRep2 + 3;
            unused35 = len2;
            unused34 = str6;
            unused33 = newData;
            unused37 = newData;
            unused59 = newData;
            memcpy(newData,str6,len2);
          }
          else {
            unused38 = newStr2;
            unused39 = str6;
            unused59 = str6;
            strRep7 = str6 + -3;
            if (strRep7 != &g_nullStringRep) {
              *strRep7 = *strRep7 + 1;
            }
          }
          ehContext = 0xe0;
          lengthError[0] = &std::length_error::vftable;
          ehDtorCount = ehDtorCount + 2;
          if (str6 != (int *)0x0) {
            if (str6[-3] != -1) {
              strRep6 = str6 + -3;
              if (strRep6 == &g_nullStringRep) {
                iVar1 = 1;
              }
              else if (strRep6 == &g_nullStringRep) {
                iVar1 = 1;
              }
              else {
                *strRep6 = *strRep6 + -1;
                iVar1 = *strRep6 + 1;
              }
              if (iVar1 != 0) goto LAB_00476ef9;
            }
            unused32 = str6 + -3;
            unused31 = str6 + -3;
            operator_delete();
            unused30 = 0;
            unused29 = str2;
            str6 = (int *)0x0;
            unused = 0;
          }
LAB_00476ef9:
          ehContext = 0xd4;
          _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        if (uVar4 < defaultValue[-1]) {
          local_1b4 = defaultValue[-1] - uVar4;
          if (defaultValue[-1] < uVar4) {
            throwLine = 0;
            throwFile = 0;
            throwFlags = 0;
            copyCtorMask = 1;
            copyCtor = &LAB_004084c8;
            objectDtor = 0;
            ehContext = 0x110;
            msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            std::string::string_from_cstr((int)str,msgText);
            ehDtorCount = ehDtorCount + 2;
            outOfRange[0] = &std::logic_error::vftable;
            unused28 = 0;
            unused58 = (int *)0x0;
            ehContext = 0x11c;
            if (str5[-3] == -1 || str5[-3] + 1 < 0) {
              len = str5[-1];
              newRep = std::string::__getRep(newStr,len,len);
              unused24 = newStr;
              newData2 = newRep + 3;
              unused23 = len;
              unused22 = str5;
              unused25 = newData2;
              unused58 = newData2;
              memcpy(newData2,str5,len);
            }
            else {
              unused26 = newStr;
              unused27 = str5;
              unused58 = str5;
              strRep5 = str5 + -3;
              if (strRep5 != &g_nullStringRep) {
                *strRep5 = *strRep5 + 1;
              }
            }
            ehContext = 0x110;
            outOfRange[0] = &std::out_of_range::vftable;
            ehDtorCount = ehDtorCount + 2;
            if (str5 != (int *)0x0) {
              if (str5[-3] != -1) {
                strRep4 = str5 + -3;
                if (strRep4 == &g_nullStringRep) {
                  iVar1 = 1;
                }
                else if (strRep4 == &g_nullStringRep) {
                  iVar1 = 1;
                }
                else {
                  *strRep4 = *strRep4 + -1;
                  iVar1 = *strRep4 + 1;
                }
                if (iVar1 != 0) goto LAB_0047719c;
              }
              unused21 = str5 + -3;
              unused20 = str5 + -3;
              operator_delete();
              unused19 = 0;
              unused18 = str;
              str5 = (int *)0x0;
            }
LAB_0047719c:
            ehContext = 0xd4;
            _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
          }
          local_204 = defaultValue[-1] - uVar4;
          local_2f9[0] = 0;
          local_300 = local_204;
          if (local_1b4 < local_204) {
            local_300 = local_1b4;
          }
          std::string::replace((int)result4,uVar4,local_300,(uint)local_2f9,0,0,0);
        }
        else {
          std::string::replace_fill((int)result4,defaultValue[-1],0,uVar4 - defaultValue[-1],0);
        }
        if (defaultValue + -3 != &g_nullStringRep) {
          defaultValue[-3] = 0;
        }
      }
    }
    ehContext = 0x140;
    PropertiesViewWindows::LoadString((int)local_b4,(int)self,(uint *)PTR_s_ClueDatabaseFolder_00501424,defaultValue);
    ehDtorCount = ehDtorCount + 1;
    ResolveRelativePaths((int)result,(int)local_b4);
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign((int)(self + 0x1a),(int)result);
    ehDtorCount = ehDtorCount + -1;
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        piVar2 = (int *)(str3 + -0xc);
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
        if (iVar1 != 0) goto LAB_00477337;
      }
      unused17 = str3 + -0xc;
      unused16 = str3 + -0xc;
      operator_delete();
      unused15 = 0;
      unused14 = result;
      str3 = 0;
    }
LAB_00477337:
    ehContext = 0xbc;
    ehDtorCount = ehDtorCount + -1;
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep3 = (int *)(str4 + -0xc);
        if (strRep3 == &g_nullStringRep) {
          iVar1 = 1;
        }
        else if (strRep3 == &g_nullStringRep) {
          iVar1 = 1;
        }
        else {
          *strRep3 = *strRep3 + -1;
          iVar1 = *strRep3 + 1;
        }
        if (iVar1 != 0) goto LAB_00477401;
      }
      unused13 = str4 + -0xc;
      unused12 = str4 + -0xc;
      operator_delete();
      unused11 = 0;
      unused10 = local_b4;
      str4 = 0;
    }
LAB_00477401:
    ehDtorCount = ehDtorCount + -1;
    if (defaultValue != (uint *)0x0) {
      if (defaultValue[-3] != 0xffffffff) {
        strRep2 = defaultValue + -3;
        if (strRep2 == &g_nullStringRep) {
          iVar1 = 1;
        }
        else if (strRep2 == &g_nullStringRep) {
          iVar1 = 1;
        }
        else {
          *strRep2 = *strRep2 - 1;
          iVar1 = *strRep2 + 1;
        }
        if (iVar1 != 0) goto LAB_004774b6;
      }
      unused9 = defaultValue + -3;
      unused8 = defaultValue + -3;
      operator_delete();
    }
    goto LAB_004774b6;
  }
  ehContext = 0x74;
  std::string::string_from_cstr((int)paths,(uint *)"Dictionaries");
  ehDtorCount = ehDtorCount + 1;
  ResolveRelativePaths((int)result3,(int)paths);
  if (str9 != 0) {
    if (*(int *)(str9 + -0xc) != -1) {
      piVar2 = (int *)(str9 + -0xc);
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
      if (iVar1 != 0) goto LAB_004769eb;
    }
    unused54 = str9 + -0xc;
    unused53 = str9 + -0xc;
    operator_delete();
    unused52 = 0;
    unused51 = paths;
    str9 = 0;
    unused4 = 0;
  }
LAB_004769eb:
  ehContext = 0x8c;
  PropertiesViewWindows::LoadString((int)local_34,(int)self,(uint *)PTR_s_DictionaryFolder_00501420,defaultValue2);
  ehDtorCount = ehDtorCount + 1;
  ResolveRelativePaths((int)result2,(int)local_34);
  ehDtorCount = ehDtorCount + 1;
  std::string::operator_assign((int)(self + 0x1a),(int)result2);
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      piVar2 = (int *)(str7 + -0xc);
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
      if (iVar1 != 0) goto LAB_00476acc;
    }
    unused50 = str7 + -0xc;
    unused49 = str7 + -0xc;
    operator_delete();
    unused48 = 0;
    unused47 = result2;
    str7 = 0;
    unused3 = 0;
  }
LAB_00476acc:
  ehContext = 0x68;
  ehDtorCount = ehDtorCount + -1;
  if (str8 != 0) {
    if (*(int *)(str8 + -0xc) != -1) {
      piVar2 = (int *)(str8 + -0xc);
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
      if (iVar1 != 0) goto LAB_00476b65;
    }
    unused46 = str8 + -0xc;
    unused45 = str8 + -0xc;
    operator_delete();
    unused44 = 0;
    unused43 = local_34;
    str8 = 0;
    unused2 = 0;
  }
LAB_00476b65:
  ehDtorCount = ehDtorCount + -1;
  if (defaultValue2 != (uint *)0x0) {
    if (defaultValue2[-3] != 0xffffffff) {
      strRep = defaultValue2 + -3;
      if (strRep == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *strRep = *strRep - 1;
        iVar1 = *strRep + 1;
      }
      if (iVar1 != 0) goto LAB_004774b6;
    }
    unused42 = defaultValue2 + -3;
    unused41 = defaultValue2 + -3;
    operator_delete();
  }
LAB_004774b6:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004774f0  DictionaryListViewWindows::~DictionaryListViewWindows   (593 bytes)   [rtti:dtor destructor]
//   written in code as DictionaryListViewWindows::_dtor
void __cdecl DictionaryListViewWindows::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5005c8);
  if (self == (int *)0x0) goto LAB_00477731;
  self[3] = (int)&DictionaryListViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00500744;
  *(undefined ***)self[2] = &PTR_LAB_00500750;
  *(undefined ***)(*self + 8) = &DictionaryListViewWindows::vftable_TWindow;
  OWL::TButton::_dtor(self + 0x1c4,2);
  PVWPushButton::_dtor(self + 0x192,2);
  PVWPathList::_dtor(self + 0x22,2);
  if (self[0x20] != 0) {
    if (*(int *)(self[0x20] + -0xc) != -1) {
      strRep = (int *)(self[0x20] + -0xc);
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
      if (prevRefs != 0) goto LAB_00477610;
    }
    operator_delete();
    self[0x20] = 0;
  }
LAB_00477610:
  if (self[0x1c] != 0) {
    if (*(int *)(self[0x1c] + -0xc) != -1) {
      strRep = (int *)(self[0x1c] + -0xc);
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
      if (prevRefs != 0) goto LAB_0047768a;
    }
    operator_delete();
    self[0x1c] = 0;
  }
LAB_0047768a:
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x768;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x768;
  PropertiesViewWindows::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x768;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x768;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x1f6,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 500,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00477731:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477744  DictionaryListViewWindows::OnButton   (97 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19 (introduced by PropertiesViewWindows); a push button, check box or radio button was clicked (PVW*::BNClicked call it with the control id)
void __cdecl DictionaryListViewWindows::OnButton(int *self)

{
  bool bVar1;
  undefined3 regHigh;
  int iVar2;
  
  bVar1 = BrowseForFolder(*(HWND *)(*self + 0xc),"Select the folder where your files are stored",
                       (int)(self + 0x1a));
  if (CONCAT31(regHigh,bVar1) != 0) {
    if (self[0x18] == 8) {
      iVar2 = 3;
    }
    else {
      iVar2 = 2;
    }
    PVWPathList::FillAvailable((int)(self + 0x22),(int)(self + 0x1a));
    PropertiesViewWindows::SaveString((int)self,*(uint **)(iVar2 * 4 + 0x501418),(uint *)self[0x1c]);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004777a8  DictionaryListViewWindows::OnEditChange   (52 bytes)   [rtti:vtable virtual slot 22]
//   vtable slot 22 (introduced by PropertiesViewWindows); an edit or rich edit's text changed (EN_CHANGE from PVWEdit/PVWRichEdit)
void __cdecl DictionaryListViewWindows::OnEditChange(int self)

{
  undefined4 result;
  undefined4 local_8;
  
  PVWPathList::GetPaths(&result,self + 0x88);
  (*(undefined4 *)&DAT_004eb4c4) = result;
  (*(undefined4 *)&DAT_004eb4c8) = local_8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004777dc  DictionaryListViewWindows::OnPathListChanged   (59 bytes)   [rtti:vtable virtual slot 37]
//   vtable slot 37 (introduced by PropertiesViewWindows); the dictionary path list changed (PVWPathList::Refresh)
void __cdecl DictionaryListViewWindows::OnPathListChanged(int self,undefined4 param_2,int other)

{
  std::string::operator_assign(self + 0x78,other);
  (**(code **)(*(int *)(*(int *)(self + 0x710) + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477818  DictionaryListViewWindows::ShowControlTip   (52 bytes)   [rtti:vtable virtual slot 43]
//   vtable slot 43 (introduced by PropertiesViewWindows); relays a mouse message to the tooltip, or shows the tip text for a control
void __cdecl DictionaryListViewWindows::ShowControlTip(int self,int *control,int index)

{
  PVWPathList::GetControlTip(self + 0x88,control,index,*(int **)(self + 0x58));
  PropertiesViewWindows::ShowControlTip(self,control,index);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047784c  DictionaryListViewWindows::GetSelectedPaths   (227 bytes)   [analysis]
//   the chosen dictionaries as a path list
int __cdecl DictionaryListViewWindows::GetSelectedPaths(int result,int self)

{
  int refs;
  uint uVar2;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x500604);
  *(undefined4 *)(result + 8) = 0;
  refs = *(int *)(*(int *)(self + 0x80) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(self + 0x80) + -4);
    rep = std::string::__getRep(result,uVar2,uVar2);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(self + 0x80),uVar2);
  }
  else {
    *(undefined4 *)(result + 8) = *(undefined4 *)(self + 0x80);
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477930  DictionaryListViewWindows::SetupWindow   (358 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from DictionaryListViewWindows's OWL::TWindow subobject vtable at 0x0050075c (through the this-adjusting thunk at 0x00477b6d); slot name identified from OWL::TWindow's own implementation of that slot
//   also: DictionaryListViewWindows::vf11 [rtti:vtable]
void __cdecl DictionaryListViewWindows::SetupWindow(int *self)

{
  int *pvwPathList;
  int prevRefs;
  uint *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint *local_c;
  
  __InitExceptBlockLDTC(0x500644);
  PropertiesViewWindows::SetupWindow(self);
  pvwPathList = self + 0x22;
  (**(code **)(self[3] + 0xb8))();
  (**(code **)(self[3] + 0xb8))();
  PVWPathList::FillSelected((int)pvwPathList,(int)(self + 0x1e));
  PVWPathList::FillAvailable((int)pvwPathList,(int)(self + 0x1a));
  PVWPathList::UpdateButtons((int)pvwPathList,0x1e96);
  PVWPathList::UpdateButtons((int)pvwPathList,0x1ea0);
  (**(code **)(*(int *)(self[0x1c4] + 8) + 0x60))();
  (**(code **)(self[3] + 0xa8))();
  FUN_004b0c44(self,local_c);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep - 1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00477a85;
    }
    operator_delete();
  }
LAB_00477a85:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477a98  DictionaryListViewWindows::Destroy   (50 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from DictionaryListViewWindows's OWL::TWindow subobject vtable at 0x0050075c (through the this-adjusting thunk at 0x00477c2a); slot name identified from OWL::TWindow's own implementation of that slot
//   also: DictionaryListViewWindows::vf9 [rtti:vtable]
void __cdecl DictionaryListViewWindows::Destroy(int *self,int result)

{
  if (result != 1) {
    DAT_004eb4c4 = self[0x1ef];
    DAT_004eb4c8 = self[0x1f0];
  }
  PropertiesViewWindows::Destroy(self,result);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477acc  DictionaryListViewWindows::CmShared_477acc   (26 bytes)   [owl:response-table message-handler]
//   one handler for 5 table entries: id 7870; id 7880; id 7890; id 7900; id 7910
//   also: DictionaryListViewWindows::CmShared_477acc [owl:response-table]; DictionaryListViewWindows::CmShared_477acc [owl:response-table]; DictionaryListViewWindows::CmShared_477acc [owl:response-table]; DictionaryListViewWindows::CmShared_477acc [owl:response-table]
void __cdecl DictionaryListViewWindows::CmShared_477acc(int self,int index)

{
  PVWPathList::EditDictionary(self + 0x88,index);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477ae8  DictionaryListViewWindows::Child7830_Notify1   (27 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 7830, code 1)
void __cdecl DictionaryListViewWindows::Child7830_Notify1(int self)

{
  PVWPathList::UpdateButtons(self + 0x88,0x1e96);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477b04  DictionaryListViewWindows::Child7830_Notify2   (27 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 7830, code 2)
void __cdecl DictionaryListViewWindows::Child7830_Notify2(int self)

{
  PVWPathList::OnDoubleClick(self + 0x88,0x1e96);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477b20  DictionaryListViewWindows::Child7840_Notify1   (27 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 7840, code 1)
void __cdecl DictionaryListViewWindows::Child7840_Notify1(int self)

{
  PVWPathList::UpdateButtons(self + 0x88,0x1ea0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477b3c  DictionaryListViewWindows::Child7840_Notify2   (27 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 7840, code 2)
void __cdecl DictionaryListViewWindows::Child7840_Notify2(int self)

{
  PVWPathList::OnDoubleClick(self + 0x88,0x1ea0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477ca0  MatchListLabelWindows::Info::Info   (162 bytes)   [analysis]
//   default label info for a pane
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00477d21) */
/* WARNING: Removing unreachable block (ram,0x00477ce7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00477cf2 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl MatchListLabelWindows::Info::Info(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x500884);
  self[1] = 0;
  self[2] = 0;
  self[6] = 0;
  *self = 0x100;
  self[10] = 0;
  self[10] = &g_emptyStringData;
  self[0xc] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
