// TSMerge.exe — runtime / library code "OWL_TDocManager"
// 45 functions, 0x004365c4..0x00439014. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004365c4  OWL::TDocManager::Find   (33 bytes)   [owl:response-table response-table-find]
//   also: OWL::TDocManager::vf27 [rtti:vtable]
void __cdecl OWL::TDocManager::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  param_2[2] = (int)param_1;
  FUN_004179f4(*param_1,(int *)&OWL::TDocManager::__entries,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004365e8  OWL::TDocManager::Cmd24331   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24331)
void __cdecl OWL::TDocManager::Cmd24331(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004365f8  OWL::TDocManager::Cmd24332   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24332)
void __cdecl OWL::TDocManager::Cmd24332(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436608  OWL::TDocManager::Cmd24333   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24333)
void __cdecl OWL::TDocManager::Cmd24333(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x3c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436618  OWL::TDocManager::Cmd24334   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24334)
void __cdecl OWL::TDocManager::Cmd24334(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x40))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436628  OWL::TDocManager::Cmd24335   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24335)
void __cdecl OWL::TDocManager::Cmd24335(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436638  OWL::TDocManager::Cmd24339   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24339)
void __cdecl OWL::TDocManager::Cmd24339(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x38))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436648  OWL::TDocManager::Cmd24341   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24341)
void __cdecl OWL::TDocManager::Cmd24341(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x48))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436658  OWL::TDocManager::~TDocManager   (359 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDocManager::_dtor
void __cdecl OWL::TDocManager::_dtor(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 local_38;
  
  __InitExceptBlockLDTC(0x46c620);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = &OWL::TDocManager::vftable;
    *(undefined ***)*param_1 = &PTR_LAB_0046cd88;
    *(undefined ***)param_1[1] = &PTR_LAB_0046cd94;
    while (piVar3 = (int *)FUN_0043a240(param_1 + 5,0), piVar3 != (int *)0x0) {
      piVar4 = piVar3;
      uVar2 = (**(code **)(*piVar3 + 0x2c))();
      if ((char)uVar2 != '\0') {
        (**(code **)(*piVar3 + 0x10))(uVar2,*piVar3,piVar4,piVar3);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)();
      }
      FUN_004217e8((int *)(param_1[8] + 0x11));
    }
    while (param_1[7] != 0) {
      puVar1 = (undefined4 *)param_1[7];
      param_1[7] = puVar1[1];
      if ((*(byte *)((int)puVar1 + 0x1d) & 0x80) == 0) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)();
        }
      }
      else {
        puVar1[6] = 0;
      }
    }
    FUN_0043a280(param_1 + 5);
    if ((param_2 & 2) != 0) {
      OWL::TStreamableBase::_dtor(param_1 + 0xd,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043686c  OWL::TDocManager::vf1   (100 bytes)   [rtti:vtable virtual slot 1]
int __cdecl OWL::TDocManager::vf1(int param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
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
// 0x004368d0  OWL::TDocManager::vf2   (98 bytes)   [rtti:vtable virtual slot 2]
int __cdecl OWL::TDocManager::vf2(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
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
// 0x00436934  OWL::TDocManager::vf3   (184 bytes)   [rtti:vtable virtual slot 3]
int __cdecl OWL::TDocManager::vf3(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
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
          while (iVar2 = FUN_00439d54(param_4,iVar2), iVar2 != 0) {
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
// 0x004369ec  OWL::TDocManager::vf4   (280 bytes)   [rtti:vtable virtual slot 4]
char * __cdecl OWL::TDocManager::vf4(undefined4 param_1,int param_2,int param_3,uint *param_4)

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
        puVar2 = (uint *)FUN_00439754(iVar1);
        if ((puVar2 == (uint *)0x0) || ((char)*puVar2 == '\0')) {
          pcVar3 = (char *)0x0;
        }
        else {
          pcVar3 = strlen(puVar2);
        }
        puVar2 = (uint *)FUN_00439734(iVar1);
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
        pcVar3 = (char *)FUN_00439754(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_00455ae4((char *)param_4,pcVar3);
        }
        pcVar3 = (char *)FUN_00439734(iVar1);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          FUN_00455ae4((char *)param_4,&DAT_0046c39c);
          FUN_00455ae4((char *)param_4,pcVar3);
          FUN_00455ae4((char *)param_4,&DAT_0046c39f);
          FUN_00455ae4((char *)param_4,pcVar3);
        }
        FUN_00455ae4((char *)param_4,&DAT_0046c3a0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
    local_8 = strlen(param_4);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436b04  OWL::TDocManager::vf5   (402 bytes)   [rtti:vtable virtual slot 5]
undefined4 __cdecl OWL::TDocManager::vf5(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  char local_134 [263];
  char local_2d;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x46c690);
  local_2d = (param_3 & 0x80000000) != 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 4))();
  if (iVar1 == 0) {
    uVar2 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    local_8 = operator_new_array();
    local_10 = local_10 + 1;
    local_1c = 0x14;
    (**(code **)(*(int *)(param_1 + 8) + 4))();
    local_134[0] = '\0';
    if (local_2d == '\0') {
      if (param_2 == (char *)0x0) {
        local_134[0] = '\0';
      }
      else {
        FUN_00455bc0(local_134,param_2);
      }
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x60))();
    }
    else if (iVar1 == 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x5c))();
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      local_10 = local_10 + -1;
      operator_delete_array();
      *in_FS_OFFSET = local_2c;
    }
    else if ((local_134[0] == '\0') || (iVar1 = FUN_00438064(param_1,local_134), iVar1 == 0)) {
      uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x18))();
      local_10 = local_10 + -1;
      operator_delete_array();
      *in_FS_OFFSET = local_2c;
    }
    else {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      uVar2 = 0;
      local_10 = local_10 + -1;
      operator_delete_array();
      *in_FS_OFFSET = local_2c;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00436d04  OWL::TDocManager::vf6   (252 bytes)   [rtti:vtable virtual slot 6; function defined from vtable-slot]
int * __cdecl OWL::TDocManager::vf6(int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  undefined **local_38 [2];
  undefined4 local_30;
  int local_2a;
  undefined ***local_26;
  
  __InitExceptBlockLDTC(0x46c6f4);
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)0x0;
    *in_FS_OFFSET = local_5c;
  }
  else {
    cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x68))();
    if (cVar1 == '\0') {
      piVar2 = (int *)0x0;
      *in_FS_OFFSET = local_5c;
    }
    else {
      if (param_4 == 0) {
        local_38[0] = &OWL::TDocument::vftable;
        local_30 = 0;
        local_2a = param_1;
        local_26 = local_38;
        piVar2 = (int *)(**(code **)(*param_2 + 4))();
        OWL::TDocument::_dtor((int *)local_38,2);
      }
      else {
        piVar2 = (int *)(**(code **)(*param_2 + 4))();
      }
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
        *in_FS_OFFSET = local_5c;
      }
      else {
        FUN_00439c14((int)piVar2,(int)param_2);
        piVar2 = FUN_00436e60(param_1,piVar2,param_3,param_5);
        *in_FS_OFFSET = local_5c;
      }
    }
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437128  OWL::TDocManager::vf7   (208 bytes)   [rtti:vtable virtual slot 7]
undefined4 __cdecl OWL::TDocManager::vf7(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x46c804);
  iVar1 = FUN_0043680c(param_1,param_2,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar4 = iVar1 << 2;
    iVar3 = operator_new_array();
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))
                      (iVar3,*(int *)(param_1 + 8),iVar4,param_1,iVar3,iVar1,param_2);
    if (1 < iVar1) {
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 100))();
    }
    if (iVar1 < 1) {
      uVar2 = 0;
      operator_delete_array();
      *in_FS_OFFSET = local_2c;
    }
    else {
      uVar2 = FUN_004371f8(param_1,param_2,*(int **)(iVar3 + -4 + iVar1 * 4));
      operator_delete_array();
      *in_FS_OFFSET = local_2c;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437220  OWL::TDocManager::vf8   (306 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TDocManager::vf8(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char local_130 [260];
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  __InitExceptBlockLDTC(0x46c85c);
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 8))();
  if (iVar2 == 0) {
    uVar3 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar2 = operator_new_array();
    local_10 = local_10 + 1;
    local_1c = 0x14;
    local_8 = iVar2;
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    if (*(int *)((int)param_2 + 0x2e) == 0) {
      local_130[0] = '\0';
    }
    else {
      FUN_00455bc0(local_130,*(char **)((int)param_2 + 0x2e));
    }
    iVar4 = (**(code **)(*(int *)(param_1 + 8) + 0x60))();
    if (iVar4 == 0) {
      uVar3 = 0;
      local_10 = local_10 + -1;
      operator_delete_array();
      *in_FS_OFFSET = local_2c;
    }
    else {
      cVar1 = (**(code **)(*param_2 + 0x20))();
      if (cVar1 == '\0') {
        uVar3 = 0;
        local_10 = local_10 + -1;
        operator_delete_array();
        *in_FS_OFFSET = local_2c;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + -4 + iVar4 * 4);
        local_10 = local_10 + -1;
        operator_delete_array();
        *in_FS_OFFSET = local_2c;
      }
    }
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00437354  OWL::TDocManager::vf9   (173 bytes)   [rtti:vtable virtual slot 9]
undefined4 __cdecl OWL::TDocManager::vf9(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
LAB_004373ec:
  do {
    while( true ) {
      piVar3 = param_2;
      uVar2 = (**(code **)(*param_2 + 0x28))();
      if ((char)uVar2 == '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x4c))
                          (uVar2,*(int *)(param_1 + 8),piVar3,param_1,param_2,0x7efc,3);
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
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x20))();
      if (iVar1 == 0) goto LAB_004373ec;
      if (iVar1 != *(int *)((int)param_2 + 0x22)) {
        FUN_00439c14((int)param_2,iVar1);
      }
    }
    uVar2 = (**(code **)(*param_2 + 0x14))();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00437404  OWL::TDocManager::vf10   (246 bytes)   [rtti:vtable virtual slot 10]
int __cdecl OWL::TDocManager::vf10(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x46c8c0);
  iVar4 = *(int *)(param_1 + 0x1c);
  do {
    if (iVar4 == 0) {
      *in_FS_OFFSET = local_2c;
      return 0;
    }
    puVar1 = (uint *)FUN_00439734(iVar4);
    if ((puVar1 != (uint *)0x0) && ((*(byte *)(iVar4 + 0x17) & 2) == 0)) {
      puVar1 = (uint *)FUN_0041fd2c(puVar1);
      while (puVar1 != (uint *)0x0) {
        puVar2 = (uint *)thunk_FUN_00455b20((char *)puVar1,';');
        if (puVar2 != (uint *)0x0) {
          *(undefined1 *)puVar2 = 0;
          puVar2 = (uint *)((int)puVar2 + 1);
        }
        uVar3 = FUN_004374fc(param_2,puVar1);
        if ((char)uVar3 != '\0') {
          operator_delete_array();
          *in_FS_OFFSET = local_2c;
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
// 0x0043800c  OWL::TDocManager::vf11   (87 bytes)   [rtti:vtable virtual slot 11]
int * __cdecl OWL::TDocManager::vf11(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  int *piVar2;
  int *piVar3;
  
  hWnd = (HWND)(**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x2b) + 0xc) + 0x24))();
  piVar3 = (int *)0x0;
  if ((hWnd != (HWND)0x0) && (BVar1 = IsWindow(hWnd), piVar2 = piVar3, BVar1 != 0)) {
    do {
      piVar2 = (int *)FUN_0043a240((undefined4 *)(param_1 + 0x14),(int)piVar2);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar3 = (int *)(**(code **)(*piVar2 + 0x38))();
    } while (piVar3 == (int *)0x0);
  }
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004380b0  OWL::TDocManager::vf19   (137 bytes)   [rtti:vtable virtual slot 19]
void __cdecl OWL::TDocManager::vf19(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  CHAR local_10c [256];
  undefined4 local_c;
  uint local_8;
  
  iVar1 = FUN_00443f20(*(int *)(param_1 + 0x20) + 4,param_3,local_10c,0x100);
  if (iVar1 == 0) {
    FUN_00457ef4(local_10c,(byte *)"Error: Message [string ID %u] not found");
  }
  local_8 = 0;
  if (param_4 != 0) {
    local_8 = param_4 | 0x20;
  }
  local_c = *(undefined4 *)(param_2 + 0x1e);
  (**(code **)(*(int *)(*(int *)(**(int **)(*(int *)(param_1 + 0x20) + 0x2b) + 0x6c) + 0x1b) + 0x30)
  )();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043813c  OWL::TDocManager::vf20   (65 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TDocManager::vf20(int param_1,WPARAM param_2,LPARAM param_3)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2b) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  else {
    iVar1 = **(int **)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    FUN_0042d1a4(iVar1,0x7ffd,param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438180  OWL::TDocManager::vf21   (65 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TDocManager::vf21(int param_1,WPARAM param_2,LPARAM param_3)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2b) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  else {
    iVar1 = **(int **)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    FUN_0042d1a4(iVar1,0x7ffc,param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004381c4  OWL::TDocManager::vf23   (408 bytes)   [rtti:vtable virtual slot 23]
int __cdecl OWL::TDocManager::vf23(int param_1,int *param_2,int param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_cc;
  int local_a8 [33];
  undefined4 local_22 [6];
  undefined4 local_9;
  
  __InitExceptBlockLDTC(0x46ca84);
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2b) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  else {
    uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  FUN_00424178(local_a8,0,uVar3,0x7ef5);
  while (param_3 != 0) {
    iVar2 = *param_2;
    param_2 = param_2 + 1;
    pCVar1 = (LPCSTR)FUN_00439754(iVar2);
    FUN_004242cc((int)local_a8,pCVar1);
    param_3 = param_3 + -1;
  }
  iVar2 = OWL::TPickListPopup::vf7((int)local_a8);
  iVar2 = iVar2 + 1;
  if (iVar2 == -1) {
    iVar2 = 0;
    OWL::TMenu::_dtor(local_22,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + -0x11;
    OWL::TWindow::_dtor(local_a8,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + 0x11;
    OWL::TStreamableBase::_dtor(&local_9,0);
    *in_FS_OFFSET = local_cc;
  }
  else {
    OWL::TMenu::_dtor(local_22,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + -0x11;
    OWL::TWindow::_dtor(local_a8,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + 0x11;
    OWL::TStreamableBase::_dtor(&local_9,0);
    *in_FS_OFFSET = local_cc;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043835c  OWL::TDocManager::vf24   (1187 bytes)   [rtti:vtable virtual slot 24]
undefined4 __cdecl OWL::TDocManager::vf24(int param_1,uint param_2,uint param_3,uint *param_4,char *param_5,uint param_6, char param_7,int param_8)

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
  undefined4 *in_FS_OFFSET;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 local_288;
  int local_264;
  int local_260;
  undefined4 local_1e0 [2];
  undefined4 local_1d8 [34];
  int local_150;
  int local_14c;
  undefined4 local_cc [2];
  undefined4 local_c4 [34];
  uint local_3c [2];
  uint *local_34;
  undefined4 local_28;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x46cb00);
  iVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x10))();
  iVar8 = iVar3 + 1;
  local_8 = (uint *)operator_new_array();
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1,*(int *)(param_1 + 8),iVar8,param_1,param_2,param_3,local_8,iVar3 + 1);
  if (param_7 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = param_8;
    if (param_8 == 0) {
      iVar8 = (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
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
  uVar2 = *(uint *)(param_1 + 0x28);
  if (iVar3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = iVar3 + 1;
  }
  uVar11 = param_2;
  uVar12 = param_3;
  uVar4 = FUN_00439774(*(int *)(param_2 + iVar3 * 4));
  puVar5 = FUN_00439670(*(int *)(param_2 + iVar3 * 4));
  FUN_00436168(local_3c,((param_6 | uVar1) & 0xfffff | uVar2) & 0xfffffd1f,local_8,(uint)puVar5,
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
    FUN_00455ddc(local_34,puVar6,param_5);
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2b) == 0) {
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  else {
    uVar13 = **(undefined4 **)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  if (param_7 == '\0') {
    piVar7 = FUN_00436214(&local_264,0,uVar13,(int)local_3c,0);
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
    OWL::TWindow::_dtor(local_1d8,0);
    *(int *)(local_260 + -4) = *(int *)(local_260 + -4) + -0x96;
    OWL::TStreamableBase::_dtor(local_1e0,0);
  }
  else {
    piVar7 = FUN_004363ec(&local_150,0,uVar13,(int)local_3c,0);
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
    OWL::TWindow::_dtor(local_c4,0);
    *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x96;
    OWL::TStreamableBase::_dtor(local_cc,0);
  }
  if (iVar8 == 1) {
    iVar8 = 0;
    if (0 < (int)param_3) {
      do {
        if (iVar8 == iVar3 + -1) {
          FUN_00439650(*(int *)(param_2 + iVar8 * 4),0x1000000);
        }
        else {
          FUN_00439660(*(int *)(param_2 + iVar8 * 4),0x1000000);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)param_3);
    }
    if ((local_34 == (uint *)0x0) || ((char)*local_34 == '\0')) {
      *(undefined1 *)param_4 = 0;
    }
    else {
      FUN_00455ddc(param_4,local_34,param_5);
    }
    OWL::TOpenSaveDialog::TData::_dtor((int)local_3c,0);
    operator_delete_array();
    *in_FS_OFFSET = local_288;
  }
  else {
    uVar13 = 0;
    OWL::TOpenSaveDialog::TData::_dtor((int)local_3c,0);
    local_28 = uVar13;
    operator_delete_array();
    *in_FS_OFFSET = local_288;
  }
  return local_28;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438980  OWL::TDocManager::vf25   (277 bytes)   [rtti:vtable virtual slot 25; function defined from vtable-slot]
int __cdecl OWL::TDocManager::vf25(int param_1,undefined4 *param_2,int param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_cc;
  int local_a8 [33];
  undefined4 local_22 [6];
  undefined4 local_9;
  
  __InitExceptBlockLDTC(0x46cb7c);
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2b) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  else {
    uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  FUN_00424178(local_a8,0,uVar3,0x7ef6);
  while (param_3 != 0) {
    pCVar1 = (LPCSTR)(**(code **)(*(int *)*param_2 + 0x14))();
    FUN_004242cc((int)local_a8,pCVar1);
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  }
  iVar2 = OWL::TPickListPopup::vf7((int)local_a8);
  iVar2 = iVar2 + 1;
  OWL::TMenu::_dtor(local_22,0);
  *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + -0x11;
  OWL::TWindow::_dtor(local_a8,0);
  *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + 0x11;
  OWL::TStreamableBase::_dtor(&local_9,0);
  *in_FS_OFFSET = local_cc;
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438a98  OWL::TDocManager::vf26   (179 bytes)   [rtti:vtable virtual slot 26]
undefined4 __cdecl OWL::TDocManager::vf26(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  uVar2 = __InitExceptBlockLDTC(0x46cbac);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    piVar3 = (int *)FUN_0043a240((undefined4 *)(param_1 + 0x14),0);
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x30))();
      if (cVar1 == '\0') {
        *in_FS_OFFSET = local_30;
        return 0;
      }
      uVar2 = (**(code **)(*piVar3 + 0x10))();
      if ((char)uVar2 == '\0') {
        (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
        *in_FS_OFFSET = local_30;
        return 0;
      }
      if (piVar3 != (int *)0x0) {
        uVar2 = (**(code **)*piVar3)();
      }
    }
  }
  *in_FS_OFFSET = local_30;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00438b4c  OWL::TDocManager::vf22   (266 bytes)   [rtti:vtable virtual slot 22]
void __cdecl OWL::TDocManager::vf22(int param_1,int param_2)

{
  HMENU uIDNewItem;
  undefined4 *in_FS_OFFSET;
  CHAR local_5c [40];
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 local_10;
  HMENU local_c;
  
  __InitExceptBlockLDTC(0x46cbec);
  uIDNewItem = FUN_00444d34(*(int *)(param_1 + 0x20) + 4,(LPCSTR)0x7e91);
  if (uIDNewItem == (HMENU)0x0) {
    uIDNewItem = FUN_00444d34(DAT_00470a60,(LPCSTR)0x7e91);
  }
  if (uIDNewItem != (HMENU)0x0) {
    FUN_00443f20(*(int *)(param_1 + 0x20) + 4,0x7ef4,local_5c,0x28);
    local_24 = 8;
    FUN_00420a90(&local_10,uIDNewItem,0);
    local_18 = local_18 + 1;
    local_24 = 0x14;
    if ((*(byte *)(param_1 + 0x18) & 0x20) != 0) {
      DeleteMenu(local_c,0x5f0f,0);
    }
    DeleteMenu(*(HMENU *)(param_2 + 4),0,0x400);
    InsertMenuA(*(HMENU *)(param_2 + 4),0,0x410,(UINT_PTR)uIDNewItem,local_5c);
    local_18 = local_18 + -1;
    OWL::TMenu::_dtor(&local_10,2);
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438c58  OWL::TDocManager::EvOwlcanclose   (52 bytes)   [owl:response-table message-handler]
//   WM_OWLCANCLOSE
undefined4 __cdecl OWL::TDocManager::EvOwlcanclose(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_0043a240((undefined4 *)(param_1 + 0x14),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x30))();
  } while (cVar1 != '\0');
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438c8c  OWL::TDocManager::EvOwlpreprocmenu   (110 bytes)   [owl:response-table message-handler]
//   WM_OWLPREPROCMENU
void __cdecl OWL::TDocManager::EvOwlpreprocmenu(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x46cc2c);
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    FUN_00420a90(local_10,param_2,0);
    (**(code **)(*(int *)(param_1 + 8) + 0x58))();
    OWL::TMenu::_dtor(local_10,2);
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438cfc  OWL::TDocManager::EvMsg_7ef6   (42 bytes)   [owl:response-table message-handler]
//   message 0x7ef6
void __cdecl OWL::TDocManager::EvMsg_7ef6(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    iVar1 = FUN_0043a240((undefined4 *)(param_1 + 0x14),iVar1);
    if (iVar1 == 0) break;
    FUN_00439c84(iVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438d28  OWL::TDocManager::CeCmd24331   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24331)
void __cdecl OWL::TDocManager::CeCmd24331(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438d48  OWL::TDocManager::vf13   (25 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TDocManager::vf13(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438d64  OWL::TDocManager::CeCmd24332   (30 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24332)
void __cdecl OWL::TDocManager::CeCmd24332(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438d84  OWL::TDocManager::vf12   (22 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TDocManager::vf12(int param_1)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438d9c  OWL::TDocManager::CeCmd24339   (38 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24339)
void __cdecl OWL::TDocManager::CeCmd24339(int param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438dc4  OWL::TDocManager::vf14   (135 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TDocManager::vf14(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46cc5c);
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2;
    uVar3 = (**(code **)(*piVar2 + 0x30))();
    if ((char)uVar3 != '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x10))(uVar3,*piVar2,piVar4,piVar2);
      if (cVar1 == '\0') {
        (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      }
      else if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)();
      }
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438e4c  OWL::TDocManager::CeCmd24334   (36 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24334)
void __cdecl OWL::TDocManager::CeCmd24334(int param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438e70  OWL::TDocManager::vf16   (86 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TDocManager::vf16(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x20))();
    if (iVar3 != 0) {
      if (iVar3 != *(int *)((int)piVar2 + 0x22)) {
        FUN_00439c14((int)piVar2,iVar3);
      }
      cVar1 = (**(code **)(*piVar2 + 0x14))();
      if (cVar1 != '\0') {
        (**(code **)(*(int *)(param_1 + 8) + 0x50))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438ec8  OWL::TDocManager::CeCmd24333   (64 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24333)
void __cdecl OWL::TDocManager::CeCmd24333(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
  }
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438f08  OWL::TDocManager::vf15   (90 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TDocManager::vf15(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar2 != (int *)0x0) {
    if (*(int *)((int)piVar2 + 0x2e) == 0) {
      (**(code **)(*(int *)(param_1 + 8) + 0x40))();
    }
    else {
      if (((*(byte *)(param_1 + 0x18) & 0x10) == 0) &&
         (cVar1 = (**(code **)(*piVar2 + 0x28))(piVar2,*piVar2,param_1), cVar1 == '\0')) {
        (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
        return;
      }
      (**(code **)(*piVar2 + 0x14))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438f64  OWL::TDocManager::CeCmd24335   (62 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24335)
void __cdecl OWL::TDocManager::CeCmd24335(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
  }
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438fa4  OWL::TDocManager::vf17   (74 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TDocManager::vf17(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if ((piVar1 != (int *)0x0) && (*(int *)((int)piVar1 + 0x2e) != 0)) {
    piVar3 = piVar1;
    uVar2 = (**(code **)(*piVar1 + 0x28))();
    if ((char)uVar2 == '\0') {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))
                (uVar2,*(int *)(param_1 + 8),piVar3,param_1,piVar1,0x7efd,0);
    }
    else {
      (**(code **)(*piVar1 + 0x18))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438ff0  OWL::TDocManager::CeCmd24341   (36 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24341)
void __cdecl OWL::TDocManager::CeCmd24341(int param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439014  OWL::TDocManager::vf18   (35 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TDocManager::vf18(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1,*(int *)(param_1 + 8),iVar2,param_1,iVar1,0);
  }
  return;
}

} // namespace tea
