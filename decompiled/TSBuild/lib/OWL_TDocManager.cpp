// TSBuild.exe — runtime / library code "OWL_TDocManager"
// 45 functions, 0x00441758..0x004441a8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00441758  OWL::TDocManager::Find   (33 bytes)   [owl:response-table response-table-find]
//   also: OWL::TDocManager::vf27 [rtti:vtable]
void __cdecl OWL::TDocManager::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  param_2[2] = (int)self;
  FUN_00422b68(*self,(int *)&OWL::TDocManager::__entries,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044177c  OWL::TDocManager::Cmd24331   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24331)
void __cdecl OWL::TDocManager::Cmd24331(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044178c  OWL::TDocManager::Cmd24332   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24332)
void __cdecl OWL::TDocManager::Cmd24332(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044179c  OWL::TDocManager::Cmd24333   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24333)
void __cdecl OWL::TDocManager::Cmd24333(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x3c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004417ac  OWL::TDocManager::Cmd24334   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24334)
void __cdecl OWL::TDocManager::Cmd24334(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x40))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004417bc  OWL::TDocManager::Cmd24335   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24335)
void __cdecl OWL::TDocManager::Cmd24335(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004417cc  OWL::TDocManager::Cmd24339   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24339)
void __cdecl OWL::TDocManager::Cmd24339(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x38))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004417dc  OWL::TDocManager::Cmd24341   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24341)
void __cdecl OWL::TDocManager::Cmd24341(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x48))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004417ec  OWL::TDocManager::~TDocManager   (359 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDocManager::_dtor
void __cdecl OWL::TDocManager::_dtor(undefined4 *self,uint dtorFlags)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *sehChainHead;
  int *piVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4803fc);
  if (self != (undefined4 *)0x0) {
    self[2] = &OWL::TDocManager::vftable;
    *(undefined ***)*self = &PTR_LAB_00480b64;
    *(undefined ***)self[1] = &PTR_LAB_00480b70;
    while (piVar3 = (int *)FUN_004453d4(self + 5,0), piVar3 != (int *)0x0) {
      piVar4 = piVar3;
      uVar2 = (**(code **)(*piVar3 + 0x2c))();
      if ((char)uVar2 != '\0') {
        (**(code **)(*piVar3 + 0x10))(uVar2,*piVar3,piVar4,piVar3);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)();
      }
      FUN_0042c95c((int *)(self[8] + 0x11));
    }
    while (self[7] != 0) {
      puVar1 = (undefined4 *)self[7];
      self[7] = puVar1[1];
      if ((*(byte *)((int)puVar1 + 0x1d) & 0x80) == 0) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)();
        }
      }
      else {
        puVar1[6] = 0;
      }
    }
    FUN_00445414(self + 5);
    if ((dtorFlags & 2) != 0) {
      OWL::TStreamableBase::_dtor(self + 0xd,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441a00  OWL::TDocManager::vf1   (100 bytes)   [rtti:vtable virtual slot 1]
int __cdecl OWL::TDocManager::vf1(int self,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(self + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (iVar1 = *(int *)(self + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (((*(byte *)(iVar1 + 0x17) & 2) == 0) &&
         ((((*(byte *)(iVar1 + 0x14) & 1) == 0 && ((*(byte *)(iVar1 + 0x16) & 0x10) == 0)) ||
          (param_4 == '\0')))) {
        if (param_2 != 0) {
          *(int *)(param_2 + iVar2 * 4) = iVar1;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441a64  OWL::TDocManager::vf2   (98 bytes)   [rtti:vtable virtual slot 2]
int __cdecl OWL::TDocManager::vf2(int self,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(self + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (piVar1 = *(int **)(self + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if ((((*(byte *)((int)piVar1 + 0x17) & 2) == 0) && ((*(byte *)(piVar1 + 5) & 1) == 0)) &&
         ((param_5 == '\0' || (iVar3 = (**(code **)(*piVar1 + 0xc))(), iVar3 != 0)))) {
        if (param_2 != 0) {
          *(int **)(param_2 + iVar2 * 4) = piVar1;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441ac8  OWL::TDocManager::vf3   (184 bytes)   [rtti:vtable virtual slot 3]
int __cdecl OWL::TDocManager::vf3(int self,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (*(int *)(self + 0x1c) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    for (piVar1 = *(int **)(self + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar2 = (**(code **)(*piVar1 + 0xc))();
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x14))();
        iVar4 = 0;
        if (0 < local_8) {
          do {
            iVar3 = (**(code **)(**(int **)(param_2 + iVar4 * 4) + 0x14))();
            if (iVar2 == iVar3) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_8);
        }
        if ((*(byte *)((int)piVar1 + 0x17) & 0x10) != 0) {
          iVar2 = 0;
          while (iVar2 = FUN_00444ee8(param_4,iVar2), iVar2 != 0) {
            iVar3 = (**(code **)(*piVar1 + 0x10))();
            if (iVar3 != 0) {
              iVar4 = -1;
            }
          }
        }
        if (iVar4 == local_8) {
          *(int **)(param_2 + local_8 * 4) = piVar1;
          local_8 = local_8 + 1;
        }
      }
    }
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441b80  OWL::TDocManager::vf4   (280 bytes)   [rtti:vtable virtual slot 4]
char * __cdecl OWL::TDocManager::vf4(undefined4 self,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *local_8;
  
  local_8 = (char *)0x0;
  if (param_4 == (uint *)0x0) {
    iVar5 = 0;
    if (0 < param_3) {
      do {
        iVar1 = *(int *)(param_2 + iVar5 * 4);
        puVar2 = (uint *)FUN_004448e8(iVar1);
        if ((puVar2 == (uint *)0x0) || ((char)*puVar2 == '\0')) {
          pcVar3 = (char *)0x0;
        }
        else {
          pcVar3 = strlen(puVar2);
        }
        puVar2 = (uint *)FUN_004448c8(iVar1);
        if ((puVar2 == (uint *)0x0) || ((char)*puVar2 == '\0')) {
          pcVar4 = (char *)0x0;
        }
        else {
          pcVar4 = strlen(puVar2);
        }
        local_8 = local_8 + (int)(pcVar3 + (int)pcVar4 * 2 + 5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
  }
  else {
    *(undefined1 *)param_4 = 0;
    iVar5 = 0;
    if (0 < param_3) {
      do {
        iVar1 = *(int *)(param_2 + iVar5 * 4);
        pcVar3 = (char *)FUN_004448e8(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_00467694((char *)param_4,pcVar3);
        }
        pcVar3 = (char *)FUN_004448c8(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_00467694((char *)param_4,&DAT_00480178);
          FUN_00467694((char *)param_4,pcVar3);
          FUN_00467694((char *)param_4,&DAT_0048017b);
          FUN_00467694((char *)param_4,pcVar3);
        }
        FUN_00467694((char *)param_4,&DAT_0048017c);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
    local_8 = strlen(param_4);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441c98  OWL::TDocManager::vf5   (402 bytes)   [rtti:vtable virtual slot 5]
undefined4 __cdecl OWL::TDocManager::vf5(int self,char *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  char local_134 [263];
  char local_2d;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 unused;
  
  __InitExceptBlockLDTC(0x48046c);
  local_2d = (param_3 & 0x80000000) != 0;
  iVar1 = (**(code **)(*(int *)(self + 8) + 4))();
  if (iVar1 == 0) {
    uVar2 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    unused = operator_new_array();
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x14;
    (**(code **)(*(int *)(self + 8) + 4))();
    local_134[0] = '\0';
    if (local_2d == '\0') {
      if (param_2 == (char *)0x0) {
        local_134[0] = '\0';
      }
      else {
        FUN_00467770(local_134,param_2);
      }
      iVar1 = (**(code **)(*(int *)(self + 8) + 0x60))();
    }
    else if (iVar1 == 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = (**(code **)(*(int *)(self + 8) + 0x5c))();
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      ehDtorCount = ehDtorCount + -1;
      operator_delete_array();
      *sehChainHead = sehPrevFrame;
    }
    else if ((local_134[0] == '\0') || (iVar1 = FUN_004431f8(self,local_134), iVar1 == 0)) {
      uVar2 = (**(code **)(*(int *)(self + 8) + 0x18))();
      ehDtorCount = ehDtorCount + -1;
      operator_delete_array();
      *sehChainHead = sehPrevFrame;
    }
    else {
      (**(code **)(*(int *)(self + 8) + 0x4c))();
      uVar2 = 0;
      ehDtorCount = ehDtorCount + -1;
      operator_delete_array();
      *sehChainHead = sehPrevFrame;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441e98  OWL::TDocManager::vf6   (252 bytes)   [rtti:vtable virtual slot 6; function defined from vtable-slot]
int * __cdecl OWL::TDocManager::vf6(int self,int *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **document [2];
  undefined4 unused;
  int unused2;
  undefined ***unused3;
  
  __InitExceptBlockLDTC(0x4804d0);
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)0x0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    cVar1 = (**(code **)(*(int *)(self + 8) + 0x68))();
    if (cVar1 == '\0') {
      piVar2 = (int *)0x0;
      *sehChainHead = sehPrevFrame;
    }
    else {
      if (param_4 == 0) {
        document[0] = &OWL::TDocument::vftable;
        unused = 0;
        unused2 = self;
        unused3 = document;
        piVar2 = (int *)(**(code **)(*param_2 + 4))();
        OWL::TDocument::_dtor((int *)document,2);
      }
      else {
        piVar2 = (int *)(**(code **)(*param_2 + 4))();
      }
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
        *sehChainHead = sehPrevFrame;
      }
      else {
        FUN_00444da8((int)piVar2,(int)param_2);
        piVar2 = FUN_00441ff4(self,piVar2,param_3,param_5);
        *sehChainHead = sehPrevFrame;
      }
    }
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004422bc  OWL::TDocManager::vf7   (208 bytes)   [rtti:vtable virtual slot 7]
undefined4 __cdecl OWL::TDocManager::vf7(int self,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4805e0);
  iVar1 = FUN_004419a0(self,param_2,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar4 = iVar1 << 2;
    iVar3 = operator_new_array();
    iVar1 = (**(code **)(*(int *)(self + 8) + 0xc))
                      (iVar3,*(int *)(self + 8),iVar4,self,iVar3,iVar1,param_2);
    if (1 < iVar1) {
      iVar1 = (**(code **)(*(int *)(self + 8) + 100))();
    }
    if (iVar1 < 1) {
      uVar2 = 0;
      operator_delete_array();
      *sehChainHead = sehPrevFrame;
    }
    else {
      uVar2 = FUN_0044238c(self,param_2,*(int **)(iVar3 + -4 + iVar1 * 4));
      operator_delete_array();
      *sehChainHead = sehPrevFrame;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004423b4  OWL::TDocManager::vf8   (306 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TDocManager::vf8(int self,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *sehChainHead;
  char local_130 [260];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int unused;
  
  __InitExceptBlockLDTC(0x480638);
  iVar2 = (**(code **)(*(int *)(self + 8) + 8))();
  if (iVar2 == 0) {
    uVar3 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar2 = operator_new_array();
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x14;
    unused = iVar2;
    (**(code **)(*(int *)(self + 8) + 8))();
    if (*(int *)((int)param_2 + 0x2e) == 0) {
      local_130[0] = '\0';
    }
    else {
      FUN_00467770(local_130,*(char **)((int)param_2 + 0x2e));
    }
    iVar4 = (**(code **)(*(int *)(self + 8) + 0x60))();
    if (iVar4 == 0) {
      uVar3 = 0;
      ehDtorCount = ehDtorCount + -1;
      operator_delete_array();
      *sehChainHead = sehPrevFrame;
    }
    else {
      cVar1 = (**(code **)(*param_2 + 0x20))();
      if (cVar1 == '\0') {
        uVar3 = 0;
        ehDtorCount = ehDtorCount + -1;
        operator_delete_array();
        *sehChainHead = sehPrevFrame;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + -4 + iVar4 * 4);
        ehDtorCount = ehDtorCount + -1;
        operator_delete_array();
        *sehChainHead = sehPrevFrame;
      }
    }
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004424e8  OWL::TDocManager::vf9   (173 bytes)   [rtti:vtable virtual slot 9]
undefined4 __cdecl OWL::TDocManager::vf9(int self,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
LAB_00442580:
  do {
    while( true ) {
      piVar3 = param_2;
      uVar2 = (**(code **)(*param_2 + 0x28))();
      if ((char)uVar2 == '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        iVar1 = (**(code **)(*(int *)(self + 8) + 0x4c))
                          (uVar2,*(int *)(self + 8),piVar3,self,param_2,0x7efc,3);
      }
      else {
        iVar1 = 6;
      }
      if (iVar1 == 2) {
        return 0;
      }
      if (iVar1 == 6) break;
      if (iVar1 == 7) {
        uVar2 = (**(code **)(*param_2 + 0x18))();
        if ((char)uVar2 != '\0') {
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
        return 0;
      }
    }
    if ((*(char *)((int)param_2 + 0xd) == '\0') && (*(int *)((int)param_2 + 0x2e) == 0)) {
      iVar1 = (**(code **)(*(int *)(self + 8) + 0x20))();
      if (iVar1 == 0) goto LAB_00442580;
      if (iVar1 != *(int *)((int)param_2 + 0x22)) {
        FUN_00444da8((int)param_2,iVar1);
      }
    }
    uVar2 = (**(code **)(*param_2 + 0x14))();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00442598  OWL::TDocManager::vf10   (246 bytes)   [rtti:vtable virtual slot 10]
int __cdecl OWL::TDocManager::vf10(int self,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  int iVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x48069c);
  iVar4 = *(int *)(self + 0x1c);
  do {
    if (iVar4 == 0) {
      *sehChainHead = sehPrevFrame;
      return 0;
    }
    puVar1 = (uint *)FUN_004448c8(iVar4);
    if ((puVar1 != (uint *)0x0) && ((*(byte *)(iVar4 + 0x17) & 2) == 0)) {
      puVar1 = (uint *)FUN_0042aea0(puVar1);
      while (puVar1 != (uint *)0x0) {
        puVar2 = (uint *)thunk_strchr((char *)puVar1,';');
        if (puVar2 != (uint *)0x0) {
          *(undefined1 *)puVar2 = 0;
          puVar2 = (uint *)((int)puVar2 + 1);
        }
        uVar3 = FUN_00442690(param_2,puVar1);
        if ((char)uVar3 != '\0') {
          operator_delete_array();
          *sehChainHead = sehPrevFrame;
          return iVar4;
        }
        if ((puVar2 == (uint *)0x0) || (puVar1 = puVar2, (char)*puVar2 == '\0')) {
          puVar1 = (uint *)0x0;
        }
      }
      operator_delete_array();
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004431a0  OWL::TDocManager::vf11   (87 bytes)   [rtti:vtable virtual slot 11]
int * __cdecl OWL::TDocManager::vf11(int self)

{
  HWND hWnd;
  BOOL ok;
  int *piVar2;
  int *piVar3;
  
  hWnd = (HWND)(**(code **)(*(int *)(*(int *)(*(int *)(self + 0x20) + 0x2b) + 0xc) + 0x24))();
  piVar3 = (int *)0x0;
  if ((hWnd != (HWND)0x0) && (ok = IsWindow(hWnd), piVar2 = piVar3, ok != 0)) {
    do {
      piVar2 = (int *)FUN_004453d4((undefined4 *)(self + 0x14),(int)piVar2);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar3 = (int *)(**(code **)(*piVar2 + 0x38))();
    } while (piVar3 == (int *)0x0);
  }
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443244  OWL::TDocManager::vf19   (137 bytes)   [rtti:vtable virtual slot 19]
void __cdecl OWL::TDocManager::vf19(int self,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  CHAR multiByteStr [256];
  undefined4 unused;
  uint unused2;
  
  iVar1 = FUN_0044f0b4(*(int *)(self + 0x20) + 4,param_3,multiByteStr,0x100);
  if (iVar1 == 0) {
    sprintf(multiByteStr,(byte *)"Error: Message [string ID %u] not found");
  }
  unused2 = 0;
  if (param_4 != 0) {
    unused2 = param_4 | 0x20;
  }
  unused = *(undefined4 *)(param_2 + 0x1e);
  (**(code **)(*(int *)(*(int *)(**(int **)(*(int *)(self + 0x20) + 0x2b) + 0x6c) + 0x1b) + 0x30)
  )();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004432d0  OWL::TDocManager::vf20   (65 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TDocManager::vf20(int self,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  
  if (*(int *)(*(int *)(self + 0x20) + 0x2b) == 0) {
    iVar1 = *(int *)(*(int *)(self + 0x20) + 0x2b);
  }
  else {
    iVar1 = **(int **)(*(int *)(self + 0x20) + 0x2b);
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    FUN_00438338(iVar1,0x7ffd,wParam,lParam);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443314  OWL::TDocManager::vf21   (65 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TDocManager::vf21(int self,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  
  if (*(int *)(*(int *)(self + 0x20) + 0x2b) == 0) {
    iVar1 = *(int *)(*(int *)(self + 0x20) + 0x2b);
  }
  else {
    iVar1 = **(int **)(*(int *)(self + 0x20) + 0x2b);
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    FUN_00438338(iVar1,0x7ffc,wParam,lParam);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443358  OWL::TDocManager::vf23   (408 bytes)   [rtti:vtable virtual slot 23]
int __cdecl OWL::TDocManager::vf23(int self,int *param_2,int param_3)

{
  LPCSTR newItem;
  int iVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int local_a8 [33];
  undefined4 menu [6];
  undefined4 streamableBase;
  
  __InitExceptBlockLDTC(0x480860);
  if (*(int *)(*(int *)(self + 0x20) + 0x2b) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(self + 0x20) + 0x2b);
  }
  else {
    uVar3 = **(undefined4 **)(*(int *)(self + 0x20) + 0x2b);
  }
  OWL::TPickListPopup::TPickListPopup(local_a8,0,uVar3,0x7ef5);
  while (param_3 != 0) {
    iVar2 = *param_2;
    param_2 = param_2 + 1;
    newItem = (LPCSTR)FUN_004448e8(iVar2);
    FUN_0042f460((int)local_a8,newItem);
    param_3 = param_3 + -1;
  }
  iVar2 = OWL::TPickListPopup::Execute((int)local_a8);
  iVar2 = iVar2 + 1;
  if (iVar2 == -1) {
    iVar2 = 0;
    OWL::TMenu::_dtor(menu,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + -0x11;
    OWL::TWindow::_dtor(local_a8,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + 0x11;
    OWL::TStreamableBase::_dtor(&streamableBase,0);
    *sehChainHead = sehPrevFrame;
  }
  else {
    OWL::TMenu::_dtor(menu,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + -0x11;
    OWL::TWindow::_dtor(local_a8,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + 0x11;
    OWL::TStreamableBase::_dtor(&streamableBase,0);
    *sehChainHead = sehPrevFrame;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004434f0  OWL::TDocManager::vf24   (1187 bytes)   [rtti:vtable virtual slot 24]
undefined4 __cdecl OWL::TDocManager::vf24(int self,uint param_2,uint param_3,uint *param_4,char *n,uint param_6, char param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *sehChainHead;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 sehPrevFrame;
  int local_264;
  int local_260;
  undefined4 streamableBase [2];
  undefined4 window [34];
  int local_150;
  int local_14c;
  undefined4 streamableBase2 [2];
  undefined4 window2 [34];
  uint data [2];
  uint *local_34;
  undefined4 local_28;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x4808dc);
  iVar3 = (**(code **)(*(int *)(self + 8) + 0x10))();
  iVar8 = iVar3 + 1;
  local_8 = (uint *)operator_new_array();
  (**(code **)(*(int *)(self + 8) + 0x10))
            (self,*(int *)(self + 8),iVar8,self,param_2,param_3,local_8,iVar3 + 1);
  if (param_7 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = param_8;
    if (param_8 == 0) {
      iVar8 = (**(code **)(*(int *)(self + 8) + 0x2c))();
    }
  }
  if (param_7 == '\0') {
    iVar8 = 0;
    iVar3 = 0;
    if (0 < (int)param_3) {
      do {
        iVar3 = iVar8;
        if ((*(byte *)(*(int *)(param_2 + iVar8 * 4) + 0x17) & 1) != 0) break;
        iVar8 = iVar8 + 1;
        iVar3 = 0;
      } while (iVar8 < (int)param_3);
    }
  }
  else {
    iVar10 = 0;
    iVar3 = 0;
    if (0 < (int)param_3) {
      do {
        iVar3 = iVar10;
        if (*(int *)(iVar8 + 0x22) == *(int *)(param_2 + iVar10 * 4)) break;
        iVar10 = iVar10 + 1;
        iVar3 = 0;
      } while (iVar10 < (int)param_3);
    }
  }
  uVar1 = *(uint *)(*(int *)(param_2 + iVar3 * 4) + 0x14);
  uVar2 = *(uint *)(self + 0x28);
  if (iVar3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = iVar3 + 1;
  }
  uVar11 = param_2;
  uVar12 = param_3;
  uVar4 = FUN_00444908(*(int *)(param_2 + iVar3 * 4));
  puVar5 = FUN_00444804(*(int *)(param_2 + iVar3 * 4));
  FUN_004412fc(data,((param_6 | uVar1) & 0xfffff | uVar2) & 0xfffffd1f,local_8,(uint)puVar5,
               uVar4,uVar9,uVar11,uVar12);
  if ((param_4 == (uint *)0x0) || (puVar6 = param_4, (char)*param_4 == '\0')) {
    if (param_8 == 0) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = *(uint **)(param_8 + 0x1e);
    }
  }
  if ((puVar6 != (uint *)0x0) && ((char)*puVar6 != '\0')) {
    strncpy(local_34,puVar6,n);
  }
  if (*(int *)(*(int *)(self + 0x20) + 0x2b) == 0) {
    uVar13 = *(undefined4 *)(*(int *)(self + 0x20) + 0x2b);
  }
  else {
    uVar13 = **(undefined4 **)(*(int *)(self + 0x20) + 0x2b);
  }
  if (param_7 == '\0') {
    piVar7 = OWL::TDvFileOpenDialog::TDvFileOpenDialog(&local_264,0,uVar13,(int)data,0);
    iVar8 = (**(code **)(piVar7[3] + 0x14))();
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + -4;
    *(int *)(local_264 + -4) = *(int *)(local_264 + -4) + -4;
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + -0x5c;
    *(int *)(local_264 + -4) = *(int *)(local_264 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(&local_264,0);
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + 0x5c;
    *(int *)(local_264 + -4) = *(int *)(local_264 + -4) + 0x5c;
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + 4;
    *(int *)(local_264 + -4) = *(int *)(local_264 + -4) + 4;
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + 0x96;
    OWL::TWindow::_dtor(window,0);
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + -0x96;
    OWL::TStreamableBase::_dtor(streamableBase,0);
  }
  else {
    piVar7 = OWL::TDvFileSaveDialog::TDvFileSaveDialog(&local_150,0,uVar13,(int)data,0);
    iVar8 = (**(code **)(piVar7[3] + 0x14))();
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -4;
    *(int *)(local_150 + -4) = *(int *)(local_150 + -4) + -4;
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x5c;
    *(int *)(local_150 + -4) = *(int *)(local_150 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(&local_150,0);
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x5c;
    *(int *)(local_150 + -4) = *(int *)(local_150 + -4) + 0x5c;
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 4;
    *(int *)(local_150 + -4) = *(int *)(local_150 + -4) + 4;
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x96;
    OWL::TWindow::_dtor(window2,0);
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x96;
    OWL::TStreamableBase::_dtor(streamableBase2,0);
  }
  if (iVar8 == 1) {
    iVar8 = 0;
    if (0 < (int)param_3) {
      do {
        if (iVar8 == iVar3 + -1) {
          FUN_004447e4(*(int *)(param_2 + iVar8 * 4),0x1000000);
        }
        else {
          FUN_004447f4(*(int *)(param_2 + iVar8 * 4),0x1000000);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)param_3);
    }
    if ((local_34 == (uint *)0x0) || ((char)*local_34 == '\0')) {
      *(undefined1 *)param_4 = 0;
    }
    else {
      strncpy(param_4,local_34,n);
    }
    OWL::TOpenSaveDialog::TData::_dtor((int)data,0);
    operator_delete_array();
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar13 = 0;
    OWL::TOpenSaveDialog::TData::_dtor((int)data,0);
    local_28 = uVar13;
    operator_delete_array();
    *sehChainHead = sehPrevFrame;
  }
  return local_28;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443b14  OWL::TDocManager::vf25   (277 bytes)   [rtti:vtable virtual slot 25; function defined from vtable-slot]
int __cdecl OWL::TDocManager::vf25(int self,undefined4 *param_2,int param_3)

{
  LPCSTR newItem;
  int iVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int pickListPopup [33];
  undefined4 menu [6];
  undefined4 streamableBase;
  
  __InitExceptBlockLDTC(0x480958);
  if (*(int *)(*(int *)(self + 0x20) + 0x2b) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(self + 0x20) + 0x2b);
  }
  else {
    uVar3 = **(undefined4 **)(*(int *)(self + 0x20) + 0x2b);
  }
  OWL::TPickListPopup::TPickListPopup(pickListPopup,0,uVar3,0x7ef6);
  while (param_3 != 0) {
    newItem = (LPCSTR)(**(code **)(*(int *)*param_2 + 0x14))();
    FUN_0042f460((int)pickListPopup,newItem);
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  }
  iVar2 = OWL::TPickListPopup::Execute((int)pickListPopup);
  iVar2 = iVar2 + 1;
  OWL::TMenu::_dtor(menu,0);
  *(int *)(pickListPopup[0] + -4) = *(int *)(pickListPopup[0] + -4) + -0x11;
  OWL::TWindow::_dtor(pickListPopup,0);
  *(int *)(pickListPopup[0] + -4) = *(int *)(pickListPopup[0] + -4) + 0x11;
  OWL::TStreamableBase::_dtor(&streamableBase,0);
  *sehChainHead = sehPrevFrame;
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443c2c  OWL::TDocManager::vf26   (179 bytes)   [rtti:vtable virtual slot 26]
undefined4 __cdecl OWL::TDocManager::vf26(int self)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  uVar2 = __InitExceptBlockLDTC(0x480988);
  if ((*(byte *)(self + 0x18) & 1) != 0) {
    piVar3 = (int *)FUN_004453d4((undefined4 *)(self + 0x14),0);
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x30))();
      if (cVar1 == '\0') {
        *sehChainHead = sehPrevFrame;
        return 0;
      }
      uVar2 = (**(code **)(*piVar3 + 0x10))();
      if ((char)uVar2 == '\0') {
        (**(code **)(*(int *)(self + 8) + 0x4c))();
        *sehChainHead = sehPrevFrame;
        return 0;
      }
      if (piVar3 != (int *)0x0) {
        uVar2 = (**(code **)*piVar3)();
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00443ce0  OWL::TDocManager::vf22   (266 bytes)   [rtti:vtable virtual slot 22]
void __cdecl OWL::TDocManager::vf22(int self,int param_2)

{
  HMENU uIDNewItem;
  undefined4 *sehChainHead;
  CHAR multiByteStr [40];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 menu;
  HMENU hMenu;
  
  __InitExceptBlockLDTC(0x4809c8);
  uIDNewItem = FUN_0044fec8(*(int *)(self + 0x20) + 4,(LPCSTR)0x7e91);
  if (uIDNewItem == (HMENU)0x0) {
    uIDNewItem = FUN_0044fec8(DAT_00484890,(LPCSTR)0x7e91);
  }
  if (uIDNewItem != (HMENU)0x0) {
    FUN_0044f0b4(*(int *)(self + 0x20) + 4,0x7ef4,multiByteStr,0x28);
    ehContext = 8;
    OWL::TMenu::TMenu_42bc04(&menu,uIDNewItem,0);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x14;
    if ((*(byte *)(self + 0x18) & 0x20) != 0) {
      DeleteMenu(hMenu,0x5f0f,0);
    }
    DeleteMenu(*(HMENU *)(param_2 + 4),0,0x400);
    InsertMenuA(*(HMENU *)(param_2 + 4),0,0x410,(UINT_PTR)uIDNewItem,multiByteStr);
    ehDtorCount = ehDtorCount + -1;
    OWL::TMenu::_dtor(&menu,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443dec  OWL::TDocManager::EvOwlcanclose   (52 bytes)   [owl:response-table message-handler]
//   WM_OWLCANCLOSE
undefined4 __cdecl OWL::TDocManager::EvOwlcanclose(int self)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_004453d4((undefined4 *)(self + 0x14),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x30))();
  } while (cVar1 != '\0');
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443e20  OWL::TDocManager::EvOwlpreprocmenu   (110 bytes)   [owl:response-table message-handler]
//   WM_OWLPREPROCMENU
void __cdecl OWL::TDocManager::EvOwlpreprocmenu(int self,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 menu [3];
  
  __InitExceptBlockLDTC(0x480a08);
  if ((*(byte *)(self + 0x18) & 4) != 0) {
    OWL::TMenu::TMenu_42bc04(menu,param_2,0);
    (**(code **)(*(int *)(self + 8) + 0x58))();
    OWL::TMenu::_dtor(menu,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443e90  OWL::TDocManager::EvMsg_7ef6   (42 bytes)   [owl:response-table message-handler]
//   message 0x7ef6
void __cdecl OWL::TDocManager::EvMsg_7ef6(int self)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    iVar1 = FUN_004453d4((undefined4 *)(self + 0x14),iVar1);
    if (iVar1 == 0) break;
    FUN_00444e18(iVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443ebc  OWL::TDocManager::CeCmd24331   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24331)
void __cdecl OWL::TDocManager::CeCmd24331(undefined4 self,undefined4 *commandEnabler)

{
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443edc  OWL::TDocManager::vf13   (25 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TDocManager::vf13(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443ef8  OWL::TDocManager::CeCmd24332   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24332)
void __cdecl OWL::TDocManager::CeCmd24332(undefined4 self,undefined4 *commandEnabler)

{
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443f18  OWL::TDocManager::vf12   (22 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TDocManager::vf12(int self)

{
  (**(code **)(*(int *)(self + 8) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443f30  OWL::TDocManager::CeCmd24339   (38 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24339)
void __cdecl OWL::TDocManager::CeCmd24339(int self,undefined4 *commandEnabler)

{
  (**(code **)(*(int *)(self + 8) + 0x2c))();
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443f58  OWL::TDocManager::vf14   (135 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TDocManager::vf14(int self)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  int *piVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x480a38);
  piVar2 = (int *)(**(code **)(*(int *)(self + 8) + 0x2c))();
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2;
    uVar3 = (**(code **)(*piVar2 + 0x30))();
    if ((char)uVar3 != '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x10))(uVar3,*piVar2,piVar4,piVar2);
      if (cVar1 == '\0') {
        (**(code **)(*(int *)(self + 8) + 0x4c))();
      }
      else if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)();
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443fe0  OWL::TDocManager::CeCmd24334   (36 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24334)
void __cdecl OWL::TDocManager::CeCmd24334(int self,undefined4 *commandEnabler)

{
  (**(code **)(*(int *)(self + 8) + 0x2c))();
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444004  OWL::TDocManager::vf16   (86 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TDocManager::vf16(int self)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(**(code **)(*(int *)(self + 8) + 0x2c))();
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*(int *)(self + 8) + 0x20))();
    if (iVar3 != 0) {
      if (iVar3 != *(int *)((int)piVar2 + 0x22)) {
        FUN_00444da8((int)piVar2,iVar3);
      }
      cVar1 = (**(code **)(*piVar2 + 0x14))();
      if (cVar1 != '\0') {
        (**(code **)(*(int *)(self + 8) + 0x50))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044405c  OWL::TDocManager::CeCmd24333   (64 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24333)
void __cdecl OWL::TDocManager::CeCmd24333(int self,undefined4 *commandEnabler)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)(self + 8) + 0x2c))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
  }
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044409c  OWL::TDocManager::vf15   (90 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TDocManager::vf15(int self)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*(int *)(self + 8) + 0x2c))();
  if (piVar2 != (int *)0x0) {
    if (*(int *)((int)piVar2 + 0x2e) == 0) {
      (**(code **)(*(int *)(self + 8) + 0x40))();
    }
    else {
      if (((*(byte *)(self + 0x18) & 0x10) == 0) &&
         (cVar1 = (**(code **)(*piVar2 + 0x28))(piVar2,*piVar2,self), cVar1 == '\0')) {
        (**(code **)(*(int *)(self + 8) + 0x4c))();
        return;
      }
      (**(code **)(*piVar2 + 0x14))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004440f8  OWL::TDocManager::CeCmd24335   (62 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24335)
void __cdecl OWL::TDocManager::CeCmd24335(int self,undefined4 *commandEnabler)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)(self + 8) + 0x2c))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
  }
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444138  OWL::TDocManager::vf17   (74 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TDocManager::vf17(int self)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = (int *)(**(code **)(*(int *)(self + 8) + 0x2c))();
  if ((piVar1 != (int *)0x0) && (*(int *)((int)piVar1 + 0x2e) != 0)) {
    piVar3 = piVar1;
    uVar2 = (**(code **)(*piVar1 + 0x28))();
    if ((char)uVar2 == '\0') {
      (**(code **)(*(int *)(self + 8) + 0x4c))
                (uVar2,*(int *)(self + 8),piVar3,self,piVar1,0x7efd,0);
    }
    else {
      (**(code **)(*piVar1 + 0x18))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444184  OWL::TDocManager::CeCmd24341   (36 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24341)
void __cdecl OWL::TDocManager::CeCmd24341(int self,undefined4 *commandEnabler)

{
  (**(code **)(*(int *)(self + 8) + 0x2c))();
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004441a8  OWL::TDocManager::vf18   (35 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TDocManager::vf18(int self)

{
  int iVar1;
  int self2;
  
  self2 = self;
  iVar1 = (**(code **)(*(int *)(self + 8) + 0x2c))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)(self + 8) + 0x1c))(iVar1,*(int *)(self + 8),self2,self,iVar1,0);
  }
  return;
}

} // namespace tea
