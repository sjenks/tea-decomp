// TEA.exe — application module "PVWPathListBox"
// 10 functions, 0x0041ee74..0x0041fedc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041ee74  PVWPathListBox::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: PVWPathListBox::vf8 [rtti:vtable]
undefined4 __cdecl PVWPathListBox::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWPathListBox::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::vf8(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eebc  PVWPathListBox::EvMouseMove   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MOUSEMOVE
void __stdcall PVWPathListBox::EvMouseMove(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041eec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0x7c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eec8  FUN_0041eec8   (312 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0041eec8(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ef574);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&OWL::TEventHandler::vftable;
    param_1[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004bf9d8(param_1,1,uVar1,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PVWPathListBox::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004efe68;
  *(undefined ***)param_1[2] = &PTR_LAB_004efe74;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004efe80;
  param_1[5] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f020  PVWPathListBox::~PVWPathListBox   (266 bytes)   [rtti:dtor destructor]
//   written in code as PVWPathListBox::_dtor
void __cdecl PVWPathListBox::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ef598);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PVWPathListBox::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004efe68;
    *(undefined ***)param_1[2] = &PTR_LAB_004efe74;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004efe80;
    TSDictionaryList::ReleaseDictionaries(param_1[5]);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 8,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f12c  PVWPathListBox::vf31   (154 bytes)   [rtti:vtable virtual slot 31]
void __cdecl PVWPathListBox::vf31(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  puVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_00402910,0)
  ;
  (**(code **)(puVar1[3] + 0xac))();
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f1c8  FUN_0041f1c8   (1791 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0041f256) */
/* WARNING: Removing unreachable block (ram,0x0041f5c7) */
/* WARNING: Removing unreachable block (ram,0x0041f29c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff60 : 0x0041f2aa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0041f1c8(int param_1,int param_2,char param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined3 extraout_var;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_68 [8];
  int local_60;
  uint local_58;
  undefined1 local_54 [8];
  undefined4 *local_4c;
  undefined1 local_44 [8];
  uint *local_3c;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_1c;
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4ef644);
  puVar3 = FUN_00407734(*(uint **)(param_2 + 8));
  TSDictionaryList::ReleaseDictionaries(*(int *)(param_1 + 0x14));
  *(undefined4 **)(param_1 + 0x14) = puVar3;
  local_c = &DAT_00513d64;
  local_30 = 0;
  local_2c = 0;
  local_1c = 0;
  local_34 = 0x40;
  for (iVar7 = 0; iVar5 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x14)), uVar1 = local_2c, uVar6 = local_30
      , iVar7 < iVar5; iVar7 = iVar7 + 1) {
    uVar2 = FUN_00408b6c(*(int *)(param_1 + 0x14),iVar7);
    if (CONCAT31(extraout_var,uVar2) != 0) {
      puVar4 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x14),iVar7);
      std::string::string_from_cstr((int)local_54,puVar4);
      if (local_2c == local_1c) {
        FUN_0040e240((int)&local_34,local_2c,(int)local_54);
      }
      else {
        local_58 = local_2c;
        if (local_2c != 0) {
          *(undefined4 *)(local_2c + 8) = 0;
          if (local_4c[-3] == -1 || local_4c[-3] + 1 < 0) {
            uVar6 = local_4c[-1];
            piVar8 = std::string::__getRep(local_2c,uVar6,uVar6);
            *(int **)(local_58 + 8) = piVar8 + 3;
            memcpy(*(undefined4 **)(local_58 + 8),local_4c,uVar6);
          }
          else {
            *(undefined4 **)(local_2c + 8) = local_4c;
            piVar8 = (int *)(*(int *)(local_2c + 8) + -0xc);
            if (piVar8 != &DAT_00513d58) {
              *piVar8 = *piVar8 + 1;
            }
          }
        }
        local_2c = local_2c + 0x10;
      }
      if (local_4c != (undefined4 *)0x0) {
        if (local_4c[-3] != -1) {
          piVar8 = local_4c + -3;
          if (piVar8 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar8 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar8 = *piVar8 + -1;
            iVar5 = *piVar8 + 1;
          }
          if (iVar5 != 0) goto LAB_0041f4f9;
        }
        operator_delete();
        local_4c = (undefined4 *)0x0;
      }
    }
LAB_0041f4f9:
  }
  if ((param_3 != '\0') && (local_30 != local_2c)) {
    FUN_00414bd8(local_30,local_2c);
    FUN_004146a0(uVar6,uVar1);
  }
  local_3c = (uint *)&DAT_00513d64;
  for (uVar6 = local_30; uVar6 < local_2c; uVar6 = uVar6 + 0x10) {
    if (uVar6 != local_30) {
      std::string::replace_fill((int)local_44,local_3c[-1],0,1,0x3b);
    }
    std::string::append((int)local_44,uVar6);
  }
  uVar6 = FUN_004d40d0((int)local_44,0,local_3c[-1],*(byte **)(param_2 + 8),
                       *(uint *)(*(int *)(param_2 + 8) + -4));
  if (uVar6 != 0) {
    puVar3 = FUN_00407734(local_3c);
    TSDictionaryList::ReleaseDictionaries(*(int *)(param_1 + 0x14));
    *(undefined4 **)(param_1 + 0x14) = puVar3;
  }
  if (local_3c != (uint *)0x0) {
    if (local_3c[-3] != 0xffffffff) {
      puVar4 = local_3c + -3;
      if (puVar4 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (puVar4 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *puVar4 = *puVar4 - 1;
        iVar7 = *puVar4 + 1;
      }
      if (iVar7 != 0) goto LAB_0041f6fd;
    }
    operator_delete();
    local_3c = (uint *)0x0;
  }
LAB_0041f6fd:
  FUN_0040b4f0(&local_34,local_30,local_2c);
  operator_delete();
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar8 = (int *)(local_c + -0xc);
      if (piVar8 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (piVar8 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *piVar8 = *piVar8 + -1;
        iVar7 = *piVar8 + 1;
      }
      if (iVar7 != 0) goto LAB_0041f7c3;
    }
    operator_delete();
    local_c = (undefined *)0x0;
  }
LAB_0041f7c3:
  (**(code **)(*(int *)(param_1 + 0xc) + 0x58))();
  iVar7 = 0;
  do {
    iVar5 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x14));
    if (iVar5 <= iVar7) {
      *in_FS_OFFSET = local_8c;
      return;
    }
    FUN_00408cbc(local_68,*(int *)(param_1 + 0x14),iVar7);
    (**(code **)(*(int *)(param_1 + 0xc) + 100))();
    if (local_60 != 0) {
      if (*(int *)(local_60 + -0xc) != -1) {
        piVar8 = (int *)(local_60 + -0xc);
        if (piVar8 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (piVar8 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *piVar8 = *piVar8 + -1;
          iVar5 = *piVar8 + 1;
        }
        if (iVar5 != 0) goto LAB_0041f89a;
      }
      operator_delete();
      local_60 = 0;
    }
LAB_0041f89a:
    iVar7 = iVar7 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f8c8  FUN_0041f8c8   (794 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0041f93c) */
int __cdecl FUN_0041f8c8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  uint *local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ef774);
  puVar2 = (uint *)FUN_00408c98(*(int *)(param_2 + 0x14),param_3);
  std::string::string_from_cstr((int)local_14,puVar2);
  local_1c = (uint *)&DAT_00513d64;
  for (iVar7 = 0; iVar4 = TSDictionaryList::GetCount(*(int *)(param_2 + 0x14)), iVar7 < iVar4; iVar7 = iVar7 + 1)
  {
    if (iVar7 != param_3) {
      if (local_1c[-1] != 0) {
        std::string::replace_fill((int)local_24,local_1c[-1],0,1,0x3b);
      }
      puVar2 = (uint *)FUN_00408c98(*(int *)(param_2 + 0x14),iVar7);
      uVar1 = local_1c[-1];
      pcVar3 = strlen(puVar2);
      FUN_004cfad4((int)local_24,uVar1,0,(uint)puVar2,(uint)pcVar3,0,(uint)pcVar3);
    }
  }
  puVar5 = FUN_00407734(local_1c);
  TSDictionaryList::ReleaseDictionaries(*(int *)(param_2 + 0x14));
  *(undefined4 **)(param_2 + 0x14) = puVar5;
  (**(code **)(*(int *)(param_2 + 0xc) + 0x68))();
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar6 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar6 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar6 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar6 != &DAT_00513d58) {
      *piVar6 = *piVar6 + 1;
    }
  }
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar2 = local_1c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar7 = *puVar2 + 1;
      }
      if (iVar7 != 0) goto LAB_0041fb34;
    }
    operator_delete();
    local_1c = (uint *)0x0;
  }
LAB_0041fb34:
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar6 = local_c + -3;
      if (piVar6 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar7 = *piVar6 + 1;
      }
      if (iVar7 != 0) goto LAB_0041fbc7;
    }
    operator_delete();
  }
LAB_0041fbc7:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fbe4  FUN_0041fbe4   (703 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0041fc28) */
void __cdecl FUN_0041fbe4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4ef824);
  local_c = (uint *)&DAT_00513d64;
  for (iVar6 = 0; iVar4 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x14)), iVar6 < iVar4; iVar6 = iVar6 + 1)
  {
    if (local_c[-1] != 0) {
      std::string::replace_fill((int)local_14,local_c[-1],0,1,0x3b);
    }
    puVar2 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x14),iVar6);
    if (param_3 == iVar6) {
LAB_0041fca5:
      std::string::append((int)local_14,param_2);
      std::string::replace_fill((int)local_14,local_c[-1],0,1,0x3b);
      param_3 = iVar6;
    }
    else if (param_3 < 0) {
      pcVar3 = strlen(puVar2);
      iVar4 = FUN_0043c624(*(byte **)(param_2 + 8),*(int *)(*(int *)(param_2 + 8) + -4),
                           (byte *)puVar2,(int)pcVar3);
      if (iVar4 < 0) goto LAB_0041fca5;
    }
    puVar2 = (uint *)FUN_00408c98(*(int *)(param_1 + 0x14),iVar6);
    uVar1 = local_c[-1];
    pcVar3 = strlen(puVar2);
    FUN_004cfad4((int)local_14,uVar1,0,(uint)puVar2,(uint)pcVar3,0,(uint)pcVar3);
  }
  iVar6 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x14));
  if ((param_3 == iVar6) || (param_3 < 0)) {
    if (local_c[-1] != 0) {
      std::string::replace_fill((int)local_14,local_c[-1],0,1,0x3b);
    }
    std::string::append((int)local_14,param_2);
    param_3 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x14));
  }
  puVar5 = FUN_00407734(local_c);
  TSDictionaryList::ReleaseDictionaries(*(int *)(param_1 + 0x14));
  *(undefined4 **)(param_1 + 0x14) = puVar5;
  FUN_00408cbc(local_24,(int)puVar5,param_3);
  (**(code **)(*(int *)(param_1 + 0xc) + 100))();
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar7 = (int *)(local_1c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar6 = *piVar7 + 1;
      }
      if (iVar6 != 0) goto LAB_0041fe22;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_0041fe22:
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar2 = local_c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar6 = *puVar2 + 1;
      }
      if (iVar6 != 0) goto LAB_0041fe92;
    }
    operator_delete();
  }
LAB_0041fe92:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fea4  FUN_0041fea4   (54 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0041fea4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar2 = TSDictionaryList::GetCount(*(int *)(param_1 + 0x14));
    if (iVar2 <= iVar3) {
      return 0;
    }
    uVar1 = FUN_00408dd8();
    if ((char)uVar1 != '\0') break;
    iVar3 = iVar3 + 1;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fedc  FUN_0041fedc   (868 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0041ffb4) */
/* WARNING: Removing unreachable block (ram,0x004200cc) */
int * __cdecl FUN_0041fedc(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  __InitExceptBlockLDTC(0x4ef8c4);
  FUN_0041eec8(param_1,0,param_2,param_5 + 0x1e96);
  FUN_0041eec8(param_1 + 0x2c,0,param_2,param_5 + 0x1ea0);
  param_1[0x58] = (int)param_2;
  param_1[0x59] = param_3;
  FUN_0041af38(param_1 + 0x5a,0,param_2,param_5 + 0x1eaa,0);
  param_1[0x89] = param_4;
  param_1[0x8a] = param_5;
  param_1[0x8e] = 0;
  param_1[0x8e] = (int)&DAT_00513d64;
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0x90,0,uVar1,param_5 + 0x1ebe,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0xbb,0,uVar1,param_5 + 0x1ec8,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0xe6,0,uVar1,param_5 + 0x1ed2,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0x111,0,uVar1,param_5 + 0x1edc,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  FUN_004abc64(param_1 + 0x13c,0,uVar1,param_5 + 0x1ee6,0);
  param_1[0x16a] = 0;
  param_1[0x16a] = (int)&DAT_00513d64;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  if (param_5 == 0) {
    piVar2 = (int *)operator_new();
    if (piVar2 != (int *)0x0) {
      FUN_0041af38(piVar2,0,param_2,0x38ff,0);
    }
    param_1[0x16c] = (int)piVar2;
    piVar2 = (int *)operator_new();
    if (piVar2 != (int *)0x0) {
      if (param_2 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *param_2;
      }
      FUN_004a1f48(piVar2,0,uVar1,0x3909,0,0);
    }
    param_1[0x16d] = (int)piVar2;
    piVar2 = (int *)operator_new();
    if (piVar2 != (int *)0x0) {
      FUN_0041af38(piVar2,0,param_2,0x38fe,0);
    }
    param_1[0x16e] = (int)piVar2;
    piVar2 = (int *)operator_new();
    if (piVar2 != (int *)0x0) {
      if (param_2 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *param_2;
      }
      FUN_004a1f48(piVar2,0,uVar1,0x3908,0,0);
    }
    param_1[0x16f] = (int)piVar2;
  }
  *in_FS_OFFSET = local_38;
  return param_1;
}

} // namespace tea
