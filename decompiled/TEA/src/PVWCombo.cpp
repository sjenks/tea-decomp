// TEA.exe — application module "PVWCombo"
// 11 functions, 0x0041c210..0x0041ca1c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c210  PVWCombo::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWCombo::Find [rtti:vtable]; PVWCombo::vf8 [rtti:vtable]
undefined4 __cdecl PVWCombo::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWCombo::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TControl::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c258  PVWCombo::PVWCombo   (323 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWCombo's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWCombo::PVWCombo(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eee10);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xc);
    self[0xc] = (int)(self + 9);
    self[0xd] = (int)(self + 10);
    self[1] = (int)(self + 9);
    self[2] = (int)(self + 10);
    self[8] = 0;
    self[0xb] = 0;
    self[9] = (int)&OWL::TEventHandler::vftable;
    self[10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xc,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TComboBox::TComboBox(self,1,uVar1,param_4,param_5,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
  self[3] = (int)&PVWCombo::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f01a8;
  *(undefined ***)self[2] = &PTR_LAB_004f01b4;
  *(undefined ***)(*self + 8) = &PVWCombo::vftable_TWindow;
  self[6] = (int)param_3;
  self[7] = 1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c3b4  PVWCombo::~PVWCombo   (251 bytes)   [rtti:dtor destructor]
//   written in code as PVWCombo::_dtor
void __cdecl PVWCombo::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eee34);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWCombo::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f01a8;
    *(undefined ***)self[2] = &PTR_LAB_004f01b4;
    *(undefined ***)(*self + 8) = &PVWCombo::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
    OWL::TComboBox::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xc,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 10,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c4b0  PVWCombo::ClearItems   (69 bytes)   [analysis]
//   empties the combo box's item list
void __cdecl PVWCombo::ClearItems(int self)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*(int *)(self + 0xc) + 0x24))();
  while (0 < iVar1) {
    uVar2 = (**(code **)(*(int *)(self + 0xc) + 0x48))();
    uVar3 = operator_delete_array();
    (**(code **)(*(int *)(self + 0xc) + 0x68))
              (uVar3,*(int *)(self + 0xc),uVar2,self,iVar1 + -1);
    iVar1 = iVar1 + -1;
  }
  *(undefined4 *)(self + 0x1c) = 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c4f8  PVWCombo::FillDictionaries   (583 bytes)   [analysis]
//   fills the combo with the dictionaries of a path list (file titles), selecting `selected`
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl PVWCombo::FillDictionaries(int self,uint *paths,int selected)

{
  int iVar1;
  char *s1;
  int cmp;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *strRep;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int *sehChainHead;
  byte bVar12;
  int local_48;
  undefined1 paths2 [8];
  int str;
  undefined1 pvwCombo [8];
  int str2;
  uint *puVar11;
  
  bVar12 = 0;
  __InitExceptBlockLDTC(0x4eee74);
  iVar1 = (**(code **)(*(int *)(self + 0xc) + 0x24))();
  do {
    iVar8 = iVar1 + -1;
    if (iVar1 < 1) goto LAB_0041c55b;
    s1 = (char *)(**(code **)(*(int *)(self + 0xc) + 0x48))();
    cmp = strcmp(s1,(char *)paths);
    iVar1 = iVar8;
  } while (cmp != 0);
  if (selected == 0) {
    *sehChainHead = local_48;
    return local_48;
  }
LAB_0041c55b:
  if (iVar8 < 1) {
    if (iVar8 < 0) {
      strlen(paths);
      puVar4 = (undefined4 *)operator_new_array();
      uVar5 = 0xffffffff;
      puVar11 = paths;
      do {
        puVar10 = puVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        puVar10 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
        uVar6 = *puVar11;
        puVar11 = puVar10;
      } while ((char)uVar6 != '\0');
      uVar5 = ~uVar5;
      puVar9 = (undefined4 *)((int)puVar10 - uVar5);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *puVar9;
        puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar12 * -2 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar12 * -2 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar12 * -2 + 1);
      }
    }
  }
  else {
    iVar8 = (**(code **)(*(int *)(self + 0xc) + 0x68))();
  }
  std::string::string_from_cstr((int)paths2,paths);
  PVWCombo::AddPathItems((int)pvwCombo,(int)paths2);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
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
      if (iVar1 != 0) goto LAB_0041c662;
    }
    operator_delete();
    str = 0;
  }
LAB_0041c662:
  if (selected == 0) {
    (**(code **)(*(int *)(self + 0xc) + 0x60))();
    iVar1 = (**(code **)(*(int *)(self + 0xc) + 0x4c))();
  }
  else {
    if (iVar8 != 0) {
      (**(code **)(*(int *)(self + 0xc) + 100))();
      (**(code **)(*(int *)(self + 0xc) + 0x4c))();
    }
    iVar1 = (**(code **)(*(int *)(self + 0xc) + 0x70))();
    *(undefined4 *)(self + 0x1c) = 0;
  }
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
      if (iVar1 != 0) goto LAB_0041c72e;
    }
    operator_delete();
    iVar1 = 0;
  }
LAB_0041c72e:
  *sehChainHead = local_48;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c740  PVWCombo::GetSelectionIndex   (24 bytes)   [analysis]
//   index of the selected item
undefined4 __cdecl PVWCombo::GetSelectionIndex(int self)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(self + 0xc) + 0x48))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c758  PVWCombo::GetSelectedValue   (37 bytes)   [analysis]
//   value attached to the selected item
undefined4 __cdecl PVWCombo::GetSelectedValue(int self)

{
  int iVar1;
  undefined4 selectionIndex;
  
  iVar1 = (**(code **)(*(int *)(self + 0xc) + 0x6c))();
  if (iVar1 < 0) {
    return 0;
  }
  selectionIndex = PVWCombo::GetSelectionIndex(self);
  return selectionIndex;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c780  PVWCombo::AddToHistory   (493 bytes)   [analysis]
//   puts a text at the top of the combo's history (removing duplicates, keeping the limit)
/* WARNING: Removing unreachable block (ram,0x0041c7c4) */
int __cdecl PVWCombo::AddToHistory(int self,int text,int limit)

{
  uint len;
  int prevRefs;
  uint *s;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4eeeec);
  local_c = (undefined4 *)&g_emptyStringData;
  if ((-1 < limit) && (prevRefs = (**(code **)(*(int *)(text + 0xc) + 0x24))(), limit < prevRefs))
  {
    (**(code **)(*(int *)(text + 0xc) + 0x40))();
    s = (uint *)operator_new_array();
    (**(code **)(*(int *)(text + 0xc) + 0x44))();
    std::string::assign_cstr((int)str,s);
    operator_delete_array();
  }
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
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_0041c952;
    }
    operator_delete();
  }
LAB_0041c952:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c970  PVWCombo::PreProcessMsg   (114 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from PVWCombo's OWL::TWindow subobject vtable at 0x004f01c0 (through the this-adjusting thunk at 0x0042248b); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWCombo::vf35 [rtti:vtable]
bool __cdecl PVWCombo::PreProcessMsg(int *self,LPMSG lParam)

{
  char cVar1;
  bool bVar2;
  SHORT SVar3;
  
  if (((lParam->message == 0x100) && (SVar3 = GetKeyState(0x11), SVar3 < 0)) &&
     (lParam->wParam == 0xd)) {
    GetDlgCtrlID(*(HWND *)(*self + 0xc));
    cVar1 = (**(code **)(*(int *)(self[6] + 0xc) + 0x78))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  if (lParam->message == 0x200) {
    (**(code **)(*(int *)(self[6] + 0xc) + 0xac))();
  }
  bVar2 = OWL::TWindow::PreProcessMsg(*self,lParam);
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c9e4  PVWCombo::NotifyAtChild_9   (53 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 9)
void __cdecl PVWCombo::NotifyAtChild_9(int *self)

{
  (**(code **)(self[3] + 0x6c))();
  GetDlgCtrlID(*(HWND *)(*self + 0xc));
  (**(code **)(*(int *)(self[6] + 0xc) + 0x74))();
  self[7] = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ca1c  PVWCombo::AddPathItems   (2802 bytes)   [analysis]
//   adds one item per path of a ';'-separated list (shown by file title)
/* WARNING: Removing unreachable block (ram,0x0041ca8a) */
/* WARNING: Removing unreachable block (ram,0x0041cada) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl PVWCombo::AddPathItems(int self,int paths)

{
  char *pcVar1;
  int prevRefs;
  uint uVar3;
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
  int *newData;
  int *unused2;
  undefined1 exceptMsg2 [264];
  undefined *unused3;
  undefined1 *unused4;
  undefined4 unused5;
  char *unused6;
  char *unused7;
  undefined4 *unused8;
  undefined4 *unused9;
  int *strRep2;
  undefined1 *unused10;
  undefined4 unused11;
  char *unused12;
  char *unused13;
  undefined4 *dest;
  undefined4 *unused14;
  uint unused15;
  int unused16;
  int *newRep;
  int *newData2;
  uint len;
  int *strRep3;
  int unused17;
  undefined4 *unused18;
  undefined4 unused19;
  undefined1 *unused20;
  undefined4 unused21;
  int unused22;
  int unused23;
  int *strRep4;
  uint local_174;
  undefined1 local_170 [4];
  uint local_16c;
  undefined1 *unused24;
  undefined4 unused25;
  int *unused26;
  int *unused27;
  int *strRep5;
  int *newData3;
  int *unused28;
  uint unused29;
  undefined1 *unused30;
  int *newRep2;
  int *unused31;
  uint len2;
  int *strRep6;
  undefined1 *unused32;
  int *unused33;
  undefined4 unused34;
  uint *msgText;
  uint local_11c;
  undefined1 *unused35;
  undefined4 unused36;
  int *unused37;
  int *unused38;
  int *strRep7;
  int *unused39;
  int *unused40;
  uint unused41;
  undefined1 *unused42;
  int *newRep3;
  int *unused43;
  uint len3;
  int *strRep8;
  undefined1 *unused44;
  int *unused45;
  undefined4 unused46;
  uint *msgText2;
  uint local_cc;
  char *unused47;
  int local_c4;
  char *local_c0;
  undefined1 unused48;
  uint local_b8;
  undefined1 *unused49;
  undefined *unused50;
  undefined4 unused51;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  int str4;
  undefined1 str [8];
  int *str5;
  undefined1 str2 [8];
  int *str6;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused52;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused53;
  undefined1 local_24 [8];
  char *str7;
  undefined1 str3 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ef00c);
  unused51 = 0;
  unused49 = str3;
  unused50 = &g_emptyStringData;
  local_c = (undefined4 *)&g_emptyStringData;
  unused3 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  local_b8 = 0;
LAB_0041caa1:
  do {
    ehContext = 0x38;
    std::string::substr((int)local_24,paths,local_b8,g_stringNpos);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x2c;
    unused48 = 0x3b;
    local_c4 = *(int *)(str7 + -4);
    unused47 = str7;
    local_c0 = thunk_memchr(str7,';',local_c4);
    uVar3 = g_stringNpos;
    if (local_c0 != (char *)0x0) {
      uVar3 = (int)local_c0 - (int)str7;
    }
    if (uVar3 != 0xffffffff) {
      local_cc = uVar3;
      if (g_stringNpos - 0xe < uVar3) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_00408370;
        objectDtor = 0;
        ehContext = 0x50;
        msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00516d20);
        std::string::string_from_cstr((int)str2,msgText2);
        ehDtorCount = ehDtorCount + 2;
        lengthError[0] = &std::logic_error::vftable;
        unused46 = 0;
        unused53 = (int *)0x0;
        ehContext = 0x5c;
        if (str6[-3] == -1 || str6[-3] + 1 < 0) {
          len3 = str6[-1];
          newRep3 = std::string::__getRep(newStr2,len3,len3);
          unused42 = newStr2;
          newData = newRep3 + 3;
          unused41 = len3;
          unused40 = str6;
          unused39 = newData;
          unused43 = newData;
          unused53 = newData;
          memcpy(newData,str6,len3);
        }
        else {
          unused44 = newStr2;
          unused45 = str6;
          unused53 = str6;
          unused2 = str6;
          strRep8 = str6 + -3;
          if (strRep8 != &g_nullStringRep) {
            *strRep8 = *strRep8 + 1;
          }
        }
        ehContext = 0x50;
        lengthError[0] = &std::length_error::vftable;
        ehDtorCount = ehDtorCount + 2;
        if (str6 != (int *)0x0) {
          if (str6[-3] != -1) {
            strRep7 = str6 + -3;
            if (strRep7 == &g_nullStringRep) {
              prevRefs = 1;
            }
            else if (strRep7 == &g_nullStringRep) {
              prevRefs = 1;
            }
            else {
              *strRep7 = *strRep7 + -1;
              prevRefs = *strRep7 + 1;
            }
            if (prevRefs != 0) goto LAB_0041cda3;
          }
          unused38 = str6 + -3;
          unused37 = str6 + -3;
          operator_delete();
          unused36 = 0;
          unused35 = str2;
          str6 = (int *)0x0;
          unused = 0;
        }
LAB_0041cda3:
        ehContext = 0x44;
        _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      if (local_cc < *(uint *)(str7 + -4)) {
        local_11c = *(int *)(str7 + -4) - local_cc;
        if (*(uint *)(str7 + -4) < local_cc) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          copyCtorMask = 1;
          copyCtor = &LAB_004084c8;
          objectDtor = 0;
          ehContext = 0x80;
          msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00516d2c
                                          );
          std::string::string_from_cstr((int)str,msgText);
          ehDtorCount = ehDtorCount + 2;
          outOfRange[0] = &std::logic_error::vftable;
          unused34 = 0;
          unused52 = (int *)0x0;
          ehContext = 0x8c;
          if (str5[-3] == -1 || str5[-3] + 1 < 0) {
            len2 = str5[-1];
            newRep2 = std::string::__getRep(newStr,len2,len2);
            unused30 = newStr;
            newData3 = newRep2 + 3;
            unused29 = len2;
            unused28 = str5;
            unused31 = newData3;
            unused52 = newData3;
            memcpy(newData3,str5,len2);
          }
          else {
            unused32 = newStr;
            unused33 = str5;
            unused52 = str5;
            strRep6 = str5 + -3;
            if (strRep6 != &g_nullStringRep) {
              *strRep6 = *strRep6 + 1;
            }
          }
          ehContext = 0x80;
          outOfRange[0] = &std::out_of_range::vftable;
          ehDtorCount = ehDtorCount + 2;
          if (str5 != (int *)0x0) {
            if (str5[-3] != -1) {
              strRep5 = str5 + -3;
              if (strRep5 == &g_nullStringRep) {
                prevRefs = 1;
              }
              else if (strRep5 == &g_nullStringRep) {
                prevRefs = 1;
              }
              else {
                *strRep5 = *strRep5 + -1;
                prevRefs = *strRep5 + 1;
              }
              if (prevRefs != 0) goto LAB_0041d038;
            }
            unused27 = str5 + -3;
            unused26 = str5 + -3;
            operator_delete();
            unused25 = 0;
            unused24 = str;
            str5 = (int *)0x0;
          }
LAB_0041d038:
          ehContext = 0x44;
          _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
        }
        local_16c = *(int *)(str7 + -4) - local_cc;
        local_170[0] = 0;
        local_174 = local_16c;
        if (local_11c < local_16c) {
          local_174 = local_11c;
        }
        std::string::replace((int)local_24,local_cc,local_174,(uint)local_170,0,0,0);
      }
      else {
        std::string::replace_fill((int)local_24,*(uint *)(str7 + -4),0,local_cc - *(int *)(str7 + -4),0);
      }
      pcVar1 = str7 + -0xc;
      if (pcVar1 != (char *)&g_nullStringRep) {
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
      }
    }
    ehContext = 0xb0;
    GetFileTitleString((int)result,(int)local_24);
    ehDtorCount = ehDtorCount + 1;
    std::string::append((int)str3,(int)result);
    ehDtorCount = ehDtorCount + -1;
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep4 = (int *)(str4 + -0xc);
        if (strRep4 == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (strRep4 == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *strRep4 = *strRep4 + -1;
          prevRefs = *strRep4 + 1;
        }
        if (prevRefs != 0) goto LAB_0041d1b7;
      }
      unused23 = str4 + -0xc;
      unused22 = str4 + -0xc;
      operator_delete();
      unused21 = 0;
      unused20 = result;
      str4 = 0;
    }
LAB_0041d1b7:
    ehContext = 0x2c;
    if (uVar3 == 0xffffffff) break;
    std::string::replace_fill((int)str3,local_c[-1],0,1,0x3b);
    local_b8 = local_b8 + uVar3 + 1;
    ehDtorCount = ehDtorCount + -1;
    if (str7 != (char *)0x0) {
      if (*(int *)(str7 + -0xc) != -1) {
        strRep = (int *)(str7 + -0xc);
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
        if (prevRefs != 0) goto LAB_0041caa1;
      }
      unused7 = str7 + -0xc;
      unused6 = str7 + -0xc;
      operator_delete();
      unused5 = 0;
      str7 = (char *)0x0;
      unused4 = local_24;
    }
  } while( true );
  ehContext = 200;
  unused19 = 0;
  *(undefined4 *)(self + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    newRep = std::string::__getRep(self,len,len);
    newData2 = newRep + 3;
    *(int **)(self + 8) = newData2;
    unused16 = self;
    unused15 = len;
    unused14 = local_c;
    dest = *(undefined4 **)(self + 8);
    memcpy(dest,local_c,len);
  }
  else {
    unused18 = local_c;
    *(undefined4 **)(self + 8) = local_c;
    unused17 = self;
    strRep3 = (int *)(*(int *)(self + 8) + -0xc);
    if (strRep3 != &g_nullStringRep) {
      *strRep3 = *strRep3 + 1;
    }
  }
  ehContext = 0xe0;
  if (str7 != (char *)0x0) {
    if (*(int *)(str7 + -0xc) != -1) {
      strRep = (int *)(str7 + -0xc);
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
      if (prevRefs != 0) goto LAB_0041d37f;
    }
    unused13 = str7 + -0xc;
    unused12 = str7 + -0xc;
    operator_delete();
    unused11 = 0;
    str7 = (char *)0x0;
    unused10 = local_24;
  }
LAB_0041d37f:
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep2 = local_c + -3;
      if (strRep2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        prevRefs = *strRep2 + 1;
      }
      if (prevRefs != 0) goto LAB_0041d42e;
    }
    unused9 = local_c + -3;
    unused8 = local_c + -3;
    operator_delete();
  }
LAB_0041d42e:
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
