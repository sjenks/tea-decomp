// TEA.exe — application module "PVWPathListBox"
// 9 functions, 0x0041ee74..0x0041fea4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041ee74  PVWPathListBox::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: PVWPathListBox::Find [rtti:vtable]; PVWPathListBox::vf8 [rtti:vtable]
undefined4 __cdecl PVWPathListBox::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWPathListBox::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TControl::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eebc  PVWPathListBox::EvMouseMove   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MOUSEMOVE
void __stdcall PVWPathListBox::EvMouseMove(int self)

{
                    /* WARNING: Could not recover jumptable at 0x0041eec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0x7c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eec8  PVWPathListBox::PVWPathListBox   (312 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWPathListBox's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWPathListBox::PVWPathListBox(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ef574);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 10);
    self[10] = (int)(self + 7);
    self[0xb] = (int)(self + 8);
    self[1] = (int)(self + 7);
    self[2] = (int)(self + 8);
    self[6] = 0;
    self[9] = 0;
    self[7] = (int)&OWL::TEventHandler::vftable;
    self[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 10,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TListBox::TListBox(self,1,uVar1,param_4,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&PVWPathListBox::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004efe68;
  *(undefined ***)self[2] = &PTR_LAB_004efe74;
  *(undefined ***)(*self + 8) = &PVWPathListBox::vftable_TWindow;
  self[5] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f020  PVWPathListBox::~PVWPathListBox   (266 bytes)   [rtti:dtor destructor]
//   written in code as PVWPathListBox::_dtor
void __cdecl PVWPathListBox::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ef598);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWPathListBox::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004efe68;
    *(undefined ***)self[2] = &PTR_LAB_004efe74;
    *(undefined ***)(*self + 8) = &PVWPathListBox::vftable_TWindow;
    TSDictionaryList::ReleaseDictionaries(self[5]);
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
// 0x0041f12c  PVWPathListBox::vf31   (154 bytes)   [rtti:vtable virtual slot 31]
void __cdecl PVWPathListBox::vf31(int *self)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(*self + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*self + 0x14) + 8);
  }
  puVar1 = FUN_004dd744(*(int *)(*self + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_00402910,0)
  ;
  (**(code **)(puVar1[3] + 0xac))();
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f1c8  PVWPathListBox::Fill   (1791 bytes)   [analysis]
//   fills the list box with the dictionaries of a path list (valid ones only, sorted by title when asked)
/* WARNING: Removing unreachable block (ram,0x0041f256) */
/* WARNING: Removing unreachable block (ram,0x0041f5c7) */
/* WARNING: Removing unreachable block (ram,0x0041f29c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff60 : 0x0041f2aa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl PVWPathListBox::Fill(int self,int paths,char sorted)

{
  uint uVar1;
  undefined1 isLoaded;
  undefined4 *puVar3;
  undefined3 regHigh;
  uint *puVar4;
  int iVar5;
  uint first2;
  int index;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  int str2;
  uint local_58;
  undefined1 value [8];
  undefined4 *local_4c;
  undefined1 str [8];
  uint *paths2;
  undefined4 vec;
  uint first;
  uint local_2c;
  uint local_1c;
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4ef644);
  puVar3 = TSDictionaryList::Open(*(uint **)(paths + 8));
  TSDictionaryList::ReleaseDictionaries(*(int *)(self + 0x14));
  *(undefined4 **)(self + 0x14) = puVar3;
  local_c = &g_emptyStringData;
  first = 0;
  local_2c = 0;
  local_1c = 0;
  vec = 0x40;
  for (index = 0; iVar5 = TSDictionaryList::GetCount(*(int *)(self + 0x14)), uVar1 = local_2c, first2 = first
      , index < iVar5; index = index + 1) {
    isLoaded = TSDictionaryList::IsLoaded(*(int *)(self + 0x14),index);
    if (CONCAT31(regHigh,isLoaded) != 0) {
      puVar4 = (uint *)TSDictionaryList::GetPath(*(int *)(self + 0x14),index);
      std::string::string_from_cstr((int)value,puVar4);
      if (local_2c == local_1c) {
        std::vector_string::insert_aux((int)&vec,local_2c,(int)value);
      }
      else {
        local_58 = local_2c;
        if (local_2c != 0) {
          *(undefined4 *)(local_2c + 8) = 0;
          if (local_4c[-3] == -1 || local_4c[-3] + 1 < 0) {
            first2 = local_4c[-1];
            rep = std::string::__getRep(local_2c,first2,first2);
            *(int **)(local_58 + 8) = rep + 3;
            memcpy(*(undefined4 **)(local_58 + 8),local_4c,first2);
          }
          else {
            *(undefined4 **)(local_2c + 8) = local_4c;
            rep = (int *)(*(int *)(local_2c + 8) + -0xc);
            if (rep != &g_nullStringRep) {
              *rep = *rep + 1;
            }
          }
        }
        local_2c = local_2c + 0x10;
      }
      if (local_4c != (undefined4 *)0x0) {
        if (local_4c[-3] != -1) {
          rep = local_4c + -3;
          if (rep == &g_nullStringRep) {
            iVar5 = 1;
          }
          else if (rep == &g_nullStringRep) {
            iVar5 = 1;
          }
          else {
            *rep = *rep + -1;
            iVar5 = *rep + 1;
          }
          if (iVar5 != 0) goto LAB_0041f4f9;
        }
        operator_delete();
        local_4c = (undefined4 *)0x0;
      }
    }
LAB_0041f4f9:
  }
  if ((sorted != '\0') && (first != local_2c)) {
    std::unique_collation(first,local_2c);
    std::sort_collation(first2,uVar1);
  }
  paths2 = (uint *)&g_emptyStringData;
  for (first2 = first; first2 < local_2c; first2 = first2 + 0x10) {
    if (first2 != first) {
      std::string::replace_fill((int)str,paths2[-1],0,1,0x3b);
    }
    std::string::append((int)str,first2);
  }
  first2 = std::string::compare((int)str,0,paths2[-1],*(byte **)(paths + 8),
                       *(uint *)(*(int *)(paths + 8) + -4));
  if (first2 != 0) {
    puVar3 = TSDictionaryList::Open(paths2);
    TSDictionaryList::ReleaseDictionaries(*(int *)(self + 0x14));
    *(undefined4 **)(self + 0x14) = puVar3;
  }
  if (paths2 != (uint *)0x0) {
    if (paths2[-3] != 0xffffffff) {
      puVar4 = paths2 + -3;
      if (puVar4 == &g_nullStringRep) {
        index = 1;
      }
      else if (puVar4 == &g_nullStringRep) {
        index = 1;
      }
      else {
        *puVar4 = *puVar4 - 1;
        index = *puVar4 + 1;
      }
      if (index != 0) goto LAB_0041f6fd;
    }
    operator_delete();
    paths2 = (uint *)0x0;
  }
LAB_0041f6fd:
  std::_Destroy_range_string(&vec,first,local_2c);
  operator_delete();
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      rep = (int *)(local_c + -0xc);
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
      if (index != 0) goto LAB_0041f7c3;
    }
    operator_delete();
    local_c = (undefined *)0x0;
  }
LAB_0041f7c3:
  (**(code **)(*(int *)(self + 0xc) + 0x58))();
  index = 0;
  do {
    iVar5 = TSDictionaryList::GetCount(*(int *)(self + 0x14));
    if (iVar5 <= index) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    TSDictionaryList::GetFileTitle(result,*(int *)(self + 0x14),index);
    (**(code **)(*(int *)(self + 0xc) + 100))();
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        rep = (int *)(str2 + -0xc);
        if (rep == &g_nullStringRep) {
          iVar5 = 1;
        }
        else if (rep == &g_nullStringRep) {
          iVar5 = 1;
        }
        else {
          *rep = *rep + -1;
          iVar5 = *rep + 1;
        }
        if (iVar5 != 0) goto LAB_0041f89a;
      }
      operator_delete();
      str2 = 0;
    }
LAB_0041f89a:
    index = index + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f8c8  PVWPathListBox::GetPathAt   (794 bytes)   [analysis]
//   the dictionary path of an entry
/* WARNING: Removing unreachable block (ram,0x0041f93c) */
int __cdecl PVWPathListBox::GetPathAt(int result,int self,int index)

{
  uint len2;
  uint *puVar2;
  char *len;
  int iVar4;
  undefined4 *puVar5;
  int *rep;
  int index2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  uint *paths;
  undefined1 str2 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ef774);
  puVar2 = (uint *)TSDictionaryList::GetPath(*(int *)(self + 0x14),index);
  std::string::string_from_cstr((int)str2,puVar2);
  paths = (uint *)&g_emptyStringData;
  for (index2 = 0; iVar4 = TSDictionaryList::GetCount(*(int *)(self + 0x14)), index2 < iVar4; index2 = index2 + 1)
  {
    if (index2 != index) {
      if (paths[-1] != 0) {
        std::string::replace_fill((int)str,paths[-1],0,1,0x3b);
      }
      puVar2 = (uint *)TSDictionaryList::GetPath(*(int *)(self + 0x14),index2);
      len2 = paths[-1];
      len = strlen(puVar2);
      std::string::replace((int)str,len2,0,(uint)puVar2,(uint)len,0,(uint)len);
    }
  }
  puVar5 = TSDictionaryList::Open(paths);
  TSDictionaryList::ReleaseDictionaries(*(int *)(self + 0x14));
  *(undefined4 **)(self + 0x14) = puVar5;
  (**(code **)(*(int *)(self + 0xc) + 0x68))();
  *(undefined4 *)(result + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len2 = local_c[-1];
    rep = std::string::__getRep(result,len2,len2);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),local_c,len2);
  }
  else {
    *(undefined4 **)(result + 8) = local_c;
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (paths != (uint *)0x0) {
    if (paths[-3] != 0xffffffff) {
      puVar2 = paths + -3;
      if (puVar2 == &g_nullStringRep) {
        index2 = 1;
      }
      else if (puVar2 == &g_nullStringRep) {
        index2 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        index2 = *puVar2 + 1;
      }
      if (index2 != 0) goto LAB_0041fb34;
    }
    operator_delete();
    paths = (uint *)0x0;
  }
LAB_0041fb34:
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      rep = local_c + -3;
      if (rep == &g_nullStringRep) {
        index2 = 1;
      }
      else if (rep == &g_nullStringRep) {
        index2 = 1;
      }
      else {
        *rep = *rep + -1;
        index2 = *rep + 1;
      }
      if (index2 != 0) goto LAB_0041fbc7;
    }
    operator_delete();
  }
LAB_0041fbc7:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fbe4  PVWPathListBox::UpdateEntry   (703 bytes)   [analysis]
//   refreshes an entry's text after its dictionary changed
/* WARNING: Removing unreachable block (ram,0x0041fc28) */
void __cdecl PVWPathListBox::UpdateEntry(int self,int list,int index)

{
  uint pos;
  uint *puVar2;
  char *len;
  int iVar4;
  undefined4 *tsDictionaryList;
  int index2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  int str2;
  undefined1 str [8];
  uint *paths;
  
  __InitExceptBlockLDTC(0x4ef824);
  paths = (uint *)&g_emptyStringData;
  for (index2 = 0; iVar4 = TSDictionaryList::GetCount(*(int *)(self + 0x14)), index2 < iVar4; index2 = index2 + 1)
  {
    if (paths[-1] != 0) {
      std::string::replace_fill((int)str,paths[-1],0,1,0x3b);
    }
    puVar2 = (uint *)TSDictionaryList::GetPath(*(int *)(self + 0x14),index2);
    if (index == index2) {
LAB_0041fca5:
      std::string::append((int)str,list);
      std::string::replace_fill((int)str,paths[-1],0,1,0x3b);
      index = index2;
    }
    else if (index < 0) {
      len = strlen(puVar2);
      iVar4 = CollationCompare(*(byte **)(list + 8),*(int *)(*(int *)(list + 8) + -4),
                           (byte *)puVar2,(int)len);
      if (iVar4 < 0) goto LAB_0041fca5;
    }
    puVar2 = (uint *)TSDictionaryList::GetPath(*(int *)(self + 0x14),index2);
    pos = paths[-1];
    len = strlen(puVar2);
    std::string::replace((int)str,pos,0,(uint)puVar2,(uint)len,0,(uint)len);
  }
  index2 = TSDictionaryList::GetCount(*(int *)(self + 0x14));
  if ((index == index2) || (index < 0)) {
    if (paths[-1] != 0) {
      std::string::replace_fill((int)str,paths[-1],0,1,0x3b);
    }
    std::string::append((int)str,list);
    index = TSDictionaryList::GetCount(*(int *)(self + 0x14));
  }
  tsDictionaryList = TSDictionaryList::Open(paths);
  TSDictionaryList::ReleaseDictionaries(*(int *)(self + 0x14));
  *(undefined4 **)(self + 0x14) = tsDictionaryList;
  TSDictionaryList::GetFileTitle(result,(int)tsDictionaryList,index);
  (**(code **)(*(int *)(self + 0xc) + 100))();
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        index2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        index2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        index2 = *strRep + 1;
      }
      if (index2 != 0) goto LAB_0041fe22;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0041fe22:
  if (paths != (uint *)0x0) {
    if (paths[-3] != 0xffffffff) {
      puVar2 = paths + -3;
      if (puVar2 == &g_nullStringRep) {
        index2 = 1;
      }
      else if (puVar2 == &g_nullStringRep) {
        index2 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        index2 = *puVar2 + 1;
      }
      if (index2 != 0) goto LAB_0041fe92;
    }
    operator_delete();
  }
LAB_0041fe92:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fea4  PVWPathListBox::IsFull   (54 bytes)   [analysis]
//   whether the list has reached the maximum number of dictionaries
undefined4 __cdecl PVWPathListBox::IsFull(int self)

{
  undefined4 uVar1;
  int count;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    count = TSDictionaryList::GetCount(*(int *)(self + 0x14));
    if (count <= iVar3) {
      return 0;
    }
    uVar1 = ReturnZero();
    if ((char)uVar1 != '\0') break;
    iVar3 = iVar3 + 1;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

} // namespace tea
