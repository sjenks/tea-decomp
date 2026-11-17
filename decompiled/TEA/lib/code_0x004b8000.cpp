// TEA.exe — runtime / library code "code_0x004b8000"
// 48 functions, 0x004b8a40..0x004bbd80. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b8a40  CeCmd24333_4b8a40   (49 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24333)
void __cdecl CeCmd24333_4b8a40(int *param_1,undefined4 *param_2)

{
  FUN_004a76a8(*param_1,0xb8,0,0);
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b908c  FUN_004b908c   (86 bytes)   [unnamed]
void __stdcall FUN_004b908c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50e99c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004b93dc;
  puVar1 = FUN_004dd5cc(1,0,0x422c2c);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b8ac,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b90e2  FUN_004b90e2   (48 bytes)   [unnamed]
void __stdcall FUN_004b90e2(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50e9b0);
  OWL::TStreamableClass::_dtor(0x51b8ac,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b9114  FUN_004b9114   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004b9114(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50e9bc);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TEditFile::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00422c2c,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b917c  FUN_004b917c   (316 bytes)   [unnamed]
int * __cdecl FUN_004b917c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50e9d4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1d);
    param_1[0x1d] = (int)(param_1 + 0x1a);
    param_1[0x1e] = (int)(param_1 + 0x1b);
    param_1[1] = (int)(param_1 + 0x1a);
    param_1[2] = (int)(param_1 + 0x1b);
    param_1[0x19] = 0;
    param_1[0x1c] = 0;
    param_1[0x1a] = (int)&OWL::TEventHandler::vftable;
    param_1[0x1b] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1d,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_004ba254(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&OWL::TEditFile::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fd188;
  *(undefined ***)param_1[2] = &PTR_LAB_004fd194;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd1a0;
  FUN_004c279c((uint *)(param_1 + 0xe),0,(uint *)0x0,0,0,0,0,0,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b92f8  FUN_004b92f8   (87 bytes)   [unnamed]
void __cdecl FUN_004b92f8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_00499da0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_004ba1ec(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b9388  FUN_004b9388   (81 bytes)   [unnamed]
void __cdecl FUN_004b9388(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  FUN_004ba1ec(local_14,piVar1);
  local_8 = 1;
  FUN_0049a294(param_2,&local_8,4);
  OWL::TEditSearch::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b93dc  FUN_004b93dc   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004b93dc(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x50ea08);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004b917c(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_004b9114(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b9560  FUN_004b9560   (355 bytes)   [unnamed]
int * __cdecl FUN_004b9560(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 )

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50eb38);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&OWL::TEventHandler::vftable;
    param_1[0x10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
  FUN_004b5ff0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,'\x01',param_10);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
  param_1[3] = (int)&OWL::TEditSearch::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fd05c;
  *(undefined ***)param_1[2] = &PTR_LAB_004fd068;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd074;
  FUN_004bccc4(param_1 + 7,1,0x51);
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x100;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b988c  FUN_004b988c   (735 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_004b988c(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x50ebd0);
  do {
    puVar2 = FUN_0048751c();
    if (((*(int *)(puVar2 + 0x10) == 1) || (puVar2 = FUN_0048751c(), *(int *)(puVar2 + 0x10) == 0))
       && (*(int *)(*param_1 + 0x6c) != 0)) {
      FUN_00498d7c((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
    }
    iVar3 = (**(code **)(param_1[3] + 0x40))();
    if (iVar3 < 0) {
      if ((*(byte *)(param_1 + 7) & 0x18) == 0) {
        if ((*(byte *)(param_1 + 7) & 0x20) != 0) break;
      }
      else {
        FUN_004c0e0c((int)local_24,*(int *)(*param_1 + 0x70),0x7f1c);
        local_c = (byte *)0x0;
        if (*(int *)(local_1c + -0xc) == -1 || *(int *)(local_1c + -0xc) + 1 < 0) {
          uVar1 = *(uint *)(local_1c + -4);
          piVar4 = std::string::__getRep(local_14,uVar1,uVar1);
          local_c = (byte *)(piVar4 + 3);
          memcpy((undefined4 *)local_c,(undefined4 *)local_1c,uVar1);
        }
        else {
          local_c = local_1c;
          pbVar6 = local_1c + -0xc;
          if (pbVar6 != (byte *)&DAT_00513d58) {
            *(int *)pbVar6 = *(int *)pbVar6 + 1;
          }
        }
        if (local_1c != (byte *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            pbVar6 = local_1c + -0xc;
            if (pbVar6 == (byte *)&DAT_00513d58) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_004b9a7b;
          }
          operator_delete();
          local_1c = (byte *)0x0;
        }
LAB_004b9a7b:
        strlen((uint *)param_1[10]);
        puVar5 = (undefined1 *)operator_new_array();
        FUN_004e0344(puVar5,local_c);
        (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
        operator_delete_array();
        if (local_c != (byte *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            pbVar6 = local_c + -0xc;
            if (pbVar6 == (byte *)&DAT_00513d58) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_004b9b50;
          }
          operator_delete();
          local_c = (byte *)0x0;
        }
      }
    }
    else if ((*(byte *)(param_1 + 7) & 0x30) != 0) {
      FUN_004a76a8(*param_1,0xc2,0,param_1[0xb]);
    }
LAB_004b9b50:
  } while ((*(byte *)(param_1 + 7) & 0x20) != 0);
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba164  FUN_004ba164   (86 bytes)   [unnamed]
void __stdcall FUN_004ba164(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ecec);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004ba4b8;
  puVar1 = FUN_004dd5cc(1,0,0x422e44);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b8bc,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba1ba  FUN_004ba1ba   (48 bytes)   [unnamed]
void __stdcall FUN_004ba1ba(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ed00);
  OWL::TStreamableClass::_dtor(0x51b8bc,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba1ec  FUN_004ba1ec   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ba1ec(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ed08);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TEditSearch::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00422e44,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba254  FUN_004ba254   (304 bytes)   [unnamed]
int * __cdecl FUN_004ba254(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ed20);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&OWL::TEventHandler::vftable;
    param_1[0x10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
  FUN_004b73c0(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
  param_1[3] = (int)&OWL::TEditSearch::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fd05c;
  *(undefined ***)param_1[2] = &PTR_LAB_004fd068;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd074;
  FUN_004bccc4(param_1 + 7,0,0x51);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba3cc  FUN_004ba3cc   (87 bytes)   [unnamed]
void __cdecl FUN_004ba3cc(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_00499da0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_004b7358(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba464  FUN_004ba464   (81 bytes)   [unnamed]
void __cdecl FUN_004ba464(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  FUN_004b7358(local_14,piVar1);
  local_8 = 1;
  FUN_0049a294(param_2,&local_8,4);
  OWL::TEdit::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba4b8  FUN_004ba4b8   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ba4b8(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x50ed54);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004ba254(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_004ba1ec(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba680  FUN_004ba680   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ba680(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50edac);
  FUN_0048ed90(param_1,0x7fee,DAT_00512a1c);
  *param_1 = &OWL::TXBadFormat::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba6ec  FUN_004ba6ec   (78 bytes)   [unnamed]
void __stdcall FUN_004ba6ec(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x50edd0);
  piVar1 = FUN_004ba680(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba8d0  FUN_004ba8d0   (83 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ba8d0(undefined4 *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ee64);
  FUN_0048e99c(param_1,param_2);
  param_1[2] = param_2[2];
  *param_1 = &OWL::TXOwl::vftable;
  *param_1 = &OWL::TXBadFormat::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba924  FUN_004ba924   (92 bytes)   [unnamed]
void __cdecl FUN_004ba924(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    *param_1 = *param_1 | 0x80000000;
  }
  if ((param_4 & 2) != 0) {
    *param_1 = *param_1 | 0x40000000;
  }
  if ((param_4 & 0x40) != 0) {
    *param_2 = *param_2;
  }
  if ((param_4 & 0x20) != 0) {
    *param_2 = *param_2 | 1;
  }
  if ((param_4 & 0x10) != 0) {
    *param_2 = *param_2 | 2;
  }
  if ((param_4 & 0x100) != 0) {
    *param_3 = *param_3 | 1;
  }
  if ((param_4 & 0x200) != 0) {
    *param_3 = *param_3 | 2;
  }
  if ((param_4 & 0x400) != 0) {
    *param_3 = *param_3 | 3;
  }
  if ((param_4 & 0x800) != 0) {
    *param_3 = *param_3 | 5;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba980  FUN_004ba980   (217 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004ba9d6) */
undefined4 * __cdecl FUN_004ba980(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  undefined4 *in_FS_OFFSET;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x50ee7c);
  local_18 = 8;
  *param_1 = &OWL::TFileHandle::vftable;
  *param_1 = &OWL::TDiskFileHandle::vftable;
  param_1[5] = 0;
  param_1[5] = &DAT_00513d64;
  local_c = local_c + 2;
  param_1[2] = param_3;
  FUN_004cf41c((int)(param_1 + 3),param_2);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  FUN_004ba924(&local_2c,&local_30,&local_34,param_1[2]);
  pvVar1 = CreateFileA((LPCSTR)param_1[5],local_2c,local_30,(LPSECURITY_ATTRIBUTES)0x0,local_34,
                       0x10000000,(HANDLE)0x0);
  param_1[1] = pvVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bad10  FUN_004bad10   (105 bytes)   [unnamed]
undefined4 * __cdecl FUN_004bad10(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50efc0);
  *param_1 = &OWL::TFileHandle::vftable;
  *param_1 = &OWL::TDiskFileHandle::vftable;
  param_1[1] = param_2;
  param_1[2] = param_4;
  std::string::string_from_cstr((int)(param_1 + 3),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb0cc  FUN_004bb0cc   (62 bytes)   [unnamed]
uint __cdecl FUN_004bb0cc(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x20) != 0) {
    uVar1 = 0x20;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x100) != 0) {
    uVar1 = uVar1 | 0x40;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb45c  FUN_004bb45c   (66 bytes)   [unnamed]
int __cdecl FUN_004bb45c(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = param_5;
  while (iVar2 != 0) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1 >> 8 | uVar1 << 8;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  }
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb49e  FUN_004bb49e   (107 bytes)   [unnamed]
int __cdecl FUN_004bb49e(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_10;
  uint *local_c;
  
  iVar2 = param_5 * param_4;
  local_c = param_1;
  local_10 = param_2;
  while (param_5 != 0) {
    uVar1 = *local_c;
    local_c = local_c + 1;
    *local_10 = CONCAT22((ushort)(uVar1 >> 8) & 0xff | (ushort)(uVar1 << 8),
                         (ushort)(byte)(uVar1 >> 0x18) | (ushort)((uVar1 >> 0x10) << 8));
    local_10 = local_10 + 1;
    param_5 = param_5 + -1;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb509  FUN_004bb509   (107 bytes)   [unnamed]
int __cdecl FUN_004bb509(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_10;
  uint *local_c;
  
  iVar2 = param_5 * param_4;
  local_c = param_1;
  local_10 = param_2;
  while (param_5 != 0) {
    uVar1 = *local_c;
    local_c = local_c + 1;
    *local_10 = CONCAT22((ushort)(uVar1 >> 8) & 0xff | (ushort)(uVar1 << 8),
                         (ushort)(byte)(uVar1 >> 0x18) | (ushort)((uVar1 >> 0x10) << 8));
    local_10 = local_10 + 1;
    param_5 = param_5 + -1;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb574  FUN_004bb574   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_004bb574(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb57b  FUN_004bb57b   (180 bytes)   [unnamed]
int __cdecl FUN_004bb57b(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  
  iVar2 = param_5 * param_4;
  while (param_5 != 0) {
    uVar3 = (ushort)param_1[1];
    uVar4 = (ushort)(param_1[1] >> 0x10);
    *param_2 = CONCAT22(uVar3 >> 8 | uVar3 << 8,uVar4 >> 8 | uVar4 << 8);
    uVar1 = *param_1;
    uVar3 = (ushort)(uVar1 >> 0x10);
    param_2[1] = CONCAT22((ushort)uVar1 >> 8 | (ushort)((uVar1 & 0xffff) << 8),
                          uVar3 >> 8 | uVar3 << 8);
    param_2 = param_2 + 2;
    param_1 = param_1 + 2;
    param_5 = param_5 + -1;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb62f  FUN_004bb62f   (66 bytes)   [unnamed]
int __cdecl FUN_004bb62f(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = param_5;
  while (iVar2 != 0) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1 >> 8 | uVar1 << 8;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  }
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb671  FUN_004bb671   (107 bytes)   [unnamed]
int __cdecl FUN_004bb671(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_10;
  uint *local_c;
  
  iVar2 = param_5 * param_4;
  local_c = param_1;
  local_10 = param_2;
  while (param_5 != 0) {
    uVar1 = *local_c;
    local_c = local_c + 1;
    *local_10 = CONCAT22((ushort)(uVar1 >> 8) & 0xff | (ushort)(uVar1 << 8),
                         (ushort)(byte)(uVar1 >> 0x18) | (ushort)((uVar1 >> 0x10) << 8));
    local_10 = local_10 + 1;
    param_5 = param_5 + -1;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb6dc  FUN_004bb6dc   (107 bytes)   [unnamed]
int __cdecl FUN_004bb6dc(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_10;
  uint *local_c;
  
  iVar2 = param_5 * param_4;
  local_c = param_1;
  local_10 = param_2;
  while (param_5 != 0) {
    uVar1 = *local_c;
    local_c = local_c + 1;
    *local_10 = CONCAT22((ushort)(uVar1 >> 8) & 0xff | (ushort)(uVar1 << 8),
                         (ushort)(byte)(uVar1 >> 0x18) | (ushort)((uVar1 >> 0x10) << 8));
    local_10 = local_10 + 1;
    param_5 = param_5 + -1;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb747  FUN_004bb747   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_004bb747(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb74e  FUN_004bb74e   (180 bytes)   [unnamed]
int __cdecl FUN_004bb74e(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  
  iVar2 = param_5 * param_4;
  while (param_5 != 0) {
    uVar3 = (ushort)param_1[1];
    uVar4 = (ushort)(param_1[1] >> 0x10);
    *param_2 = CONCAT22(uVar3 >> 8 | uVar3 << 8,uVar4 >> 8 | uVar4 << 8);
    uVar1 = *param_1;
    uVar3 = (ushort)(uVar1 >> 0x10);
    param_2[1] = CONCAT22((ushort)uVar1 >> 8 | (ushort)((uVar1 & 0xffff) << 8),
                          uVar3 >> 8 | uVar3 << 8);
    param_2 = param_2 + 2;
    param_1 = param_1 + 2;
    param_5 = param_5 + -1;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb804  FUN_004bb804   (38 bytes)   [unnamed]
int __cdecl FUN_004bb804(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  memcpy(param_2,param_1,param_5 * param_4);
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb82c  FUN_004bb82c   (38 bytes)   [unnamed]
int __cdecl FUN_004bb82c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  memcpy(param_2,param_1,param_5 * param_4);
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb854  FUN_004bb854   (32 bytes)   [unnamed]
int __cdecl FUN_004bb854(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *(int *)(param_1 + 8) != 0; param_1 = param_1 + 0xc) {
    iVar1 = iVar1 + *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb874  FUN_004bb874   (309 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004bb8c9) */
/* WARNING: Removing unreachable block (ram,0x004bb8fe) */
int __cdecl FUN_004bb874(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_3;
  while( true ) {
    if (piVar5[2] == 0) {
      uVar1 = FUN_004bb854((int)param_3);
      if (param_4 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x30))();
      }
      else {
        if ((*(int *)((int)param_1 + 9) != 0) && (*(uint *)((int)param_1 + 0xd) < uVar1)) {
          operator_delete_array();
          *(undefined4 *)((int)param_1 + 9) = 0;
        }
        if (*(int *)((int)param_1 + 9) == 0) {
          *(uint *)((int)param_1 + 0xd) = uVar1 * 5;
          uVar3 = operator_new_array();
          *(undefined4 *)((int)param_1 + 9) = uVar3;
        }
        iVar2 = (**(code **)(*param_1 + 0x30))();
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = 0;
          for (; param_3[2] != 0; param_3 = param_3 + 3) {
            iVar4 = (**(code **)(&DAT_0050f0c8 + *param_3 * 4))();
            if (iVar4 == -1) {
              return 0;
            }
            iVar2 = iVar2 + iVar4;
          }
        }
      }
      return iVar2;
    }
    if ((*piVar5 < 1) || (0x12 < *piVar5)) break;
    if (piVar5[1] < 1) {
      return 0;
    }
    piVar5 = piVar5 + 3;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb9ac  FUN_004bb9ac   (323 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004bba02) */
/* WARNING: Removing unreachable block (ram,0x004bba3e) */
undefined1 __cdecl FUN_004bb9ac(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_3;
  while( true ) {
    if (piVar5[2] == 0) {
      piVar5 = param_3;
      uVar2 = FUN_004bb854((int)param_3);
      if (param_4 == 0) {
        uVar1 = (**(code **)(*param_1 + 0x34))(*param_1,0,piVar5,param_1,param_2,uVar2);
      }
      else {
        if ((*(int *)((int)param_1 + 9) != 0) && (*(uint *)((int)param_1 + 0xd) < uVar2)) {
          operator_delete_array();
          *(undefined4 *)((int)param_1 + 9) = 0;
        }
        if (*(int *)((int)param_1 + 9) == 0) {
          *(uint *)((int)param_1 + 0xd) = uVar2 * 5;
          uVar3 = operator_new_array();
          *(undefined4 *)((int)param_1 + 9) = uVar3;
        }
        for (; param_3[2] != 0; param_3 = param_3 + 3) {
          iVar4 = (**(code **)(&DAT_0050f0c8 + *param_3 * 4))();
          if (iVar4 == -1) {
            return 0;
          }
        }
        uVar1 = (**(code **)(*param_1 + 0x34))();
      }
      return uVar1;
    }
    if ((*piVar5 < 1) || (0x12 < *piVar5)) break;
    if (piVar5[1] < 1) {
      return 0;
    }
    piVar5 = piVar5 + 3;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbaf0  FUN_004bbaf0   (33 bytes)   [unnamed]
void __cdecl FUN_004bbaf0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_004bb874(param_1,param_2,(int *)(&PTR_DAT_0050f218)[param_3],param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbb14  FUN_004bbb14   (33 bytes)   [unnamed]
void __cdecl FUN_004bbb14(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_004bb9ac(param_1,param_2,(int *)(&PTR_DAT_0050f218)[param_3],param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbca0  FUN_004bbca0   (16 bytes)   [unnamed]
char * __cdecl FUN_004bbca0(char *param_1)

{
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbcb0  FUN_004bbcb0   (30 bytes)   [unnamed]
char * __cdecl FUN_004bbcb0(char *param_1,char *param_2,int param_3)

{
  for (; (param_2 != param_1 && (param_3 != *param_1)); param_1 = param_1 + 1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbcce  FUN_004bbcce   (56 bytes)   [unnamed]
char * __cdecl FUN_004bbcce(char *param_1,char *param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_004bbcb0((char *)param_3,pcVar1 + (int)param_3,(int)*param_1);
    if (pcVar1 + (int)param_3 != pcVar2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbd06  FUN_004bbd06   (30 bytes)   [unnamed]
char * __cdecl FUN_004bbd06(char *param_1,char *param_2,int param_3)

{
  for (; (param_2 != param_1 && (param_3 != *param_1)); param_1 = param_1 + -1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbd24  FUN_004bbd24   (56 bytes)   [unnamed]
char * __cdecl FUN_004bbd24(char *param_1,char *param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_004bbcb0((char *)param_3,pcVar1 + (int)param_3,(int)*param_1);
    if (pcVar1 + (int)param_3 != pcVar2) break;
    param_1 = param_1 + -1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbd5c  FUN_004bbd5c   (35 bytes)   [unnamed]
char * __cdecl FUN_004bbd5c(char *param_1,char *param_2,char *param_3)

{
  for (; ((param_2 != param_1 && (*param_3 != '\0')) && (*param_1 == *param_3));
      param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbd80  FUN_004bbd80   (3008 bytes)   [unnamed]
undefined4 __cdecl FUN_004bbd80(int param_1,uint *param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  uint uVar7;
  uint *local_ec;
  undefined4 in_stack_ffffff18;
  undefined1 local_c4 [8];
  int local_bc;
  undefined1 local_b4 [8];
  int local_ac;
  undefined1 local_a4 [8];
  int local_9c;
  undefined1 local_94 [8];
  int local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x50f2f0);
  puVar1 = (uint *)FUN_004bbca0((char *)param_2);
  if ((char)*param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_004cf41c(param_1,(uint *)&DAT_0050f246);
    FUN_004cf41c(param_1 + 0x10,(uint *)&DAT_0050f246);
    FUN_004cf41c(param_1 + 0x40,(uint *)&DAT_0050f246);
    FUN_004cf41c(param_1 + 0x20,(uint *)&DAT_0050f246);
    FUN_004bca70(param_1);
    *in_FS_OFFSET = in_stack_ffffff18;
    return in_stack_ffffff18;
  }
  puVar2 = (uint *)FUN_004bbd5c((char *)param_2,(char *)puVar1,&DAT_0050f238);
  if (puVar2 < (uint *)((int)param_2 + 2U)) {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_004cf41c(param_1,(uint *)&DAT_0050f246);
    puVar2 = (uint *)FUN_004bbcb0((char *)param_2,(char *)puVar1,(int)DAT_0050f23b);
    if (puVar2 == puVar1) {
      FUN_004cf41c(param_1 + 0x10,(uint *)&DAT_0050f246);
    }
    else {
      uVar5 = (int)puVar2 - (int)param_2;
      uVar7 = 0;
      std::string::string_from_cstr((int)local_54,param_2);
      iVar4 = FUN_004d1e40((int)local_64,(int)local_54,uVar7,uVar5);
      FUN_004cf384(param_1 + 0x10,iVar4);
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          piVar6 = (int *)(local_5c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004bc28e;
        }
        operator_delete();
        local_5c = 0;
      }
LAB_004bc28e:
      if (local_4c != 0) {
        if (*(int *)(local_4c + -0xc) != -1) {
          piVar6 = (int *)(local_4c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004bc323;
        }
        operator_delete();
        local_4c = 0;
      }
LAB_004bc323:
      param_2 = (uint *)((int)puVar2 + 1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x164) = 1;
    pcVar3 = FUN_004bbcce((char *)puVar2,(char *)puVar1,(uint *)&DAT_0050f23e);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)local_14,puVar2);
    iVar4 = FUN_004d1e40((int)local_24,(int)local_14,uVar7,uVar5);
    FUN_004cf384(param_1,iVar4);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bbf37;
      }
      operator_delete();
      local_1c = 0;
    }
LAB_004bbf37:
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar6 = (int *)(local_c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bbfcc;
      }
      operator_delete();
      local_c = 0;
    }
LAB_004bbfcc:
    puVar2 = (uint *)(pcVar3 + 1);
    pcVar3 = FUN_004bbcce((char *)puVar2,(char *)puVar1,(uint *)&DAT_0050f23e);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)local_34,puVar2);
    iVar4 = FUN_004d1e40((int)local_44,(int)local_34,uVar7,uVar5);
    FUN_004cf384(param_1 + 0x10,iVar4);
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar6 = (int *)(local_3c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bc0ce;
      }
      operator_delete();
      local_3c = 0;
    }
LAB_004bc0ce:
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bc163;
      }
      operator_delete();
      local_2c = 0;
    }
LAB_004bc163:
    param_2 = (uint *)(pcVar3 + 1);
  }
  if (param_3 == '\0') {
    local_ec = (uint *)FUN_004bbd06((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                    (int)DAT_0050f243);
    puVar2 = (uint *)FUN_004bbd24((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                  (uint *)&DAT_0050f23e);
    if (puVar2 < local_ec) {
      uVar5 = (int)puVar1 - (int)local_ec;
      uVar7 = 0;
      std::string::string_from_cstr((int)local_74,local_ec);
      iVar4 = FUN_004d1e40((int)local_84,(int)local_74,uVar7,uVar5);
      FUN_004cf384(param_1 + 0x40,iVar4);
      if (local_7c != 0) {
        if (*(int *)(local_7c + -0xc) != -1) {
          piVar6 = (int *)(local_7c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004bc495;
        }
        operator_delete();
        local_7c = 0;
      }
LAB_004bc495:
      if (local_6c != 0) {
        if (*(int *)(local_6c + -0xc) != -1) {
          piVar6 = (int *)(local_6c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004bc55f;
        }
        operator_delete();
        local_6c = 0;
      }
    }
    else {
      FUN_004cf41c(param_1 + 0x40,(uint *)&DAT_0050f246);
      local_ec = puVar1;
    }
LAB_004bc55f:
    uVar5 = (int)local_ec - ((int)puVar2 + 1);
    uVar7 = 0;
    std::string::string_from_cstr((int)local_94,(uint *)((int)puVar2 + 1));
    iVar4 = FUN_004d1e40((int)local_a4,(int)local_94,uVar7,uVar5);
    FUN_004cf384(param_1 + 0x30,iVar4);
    if (local_9c != 0) {
      if (*(int *)(local_9c + -0xc) != -1) {
        piVar6 = (int *)(local_9c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bc678;
      }
      operator_delete();
      local_9c = 0;
    }
LAB_004bc678:
    local_ec = puVar2;
    if (local_8c != 0) {
      if (*(int *)(local_8c + -0xc) != -1) {
        piVar6 = (int *)(local_8c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004bc752;
      }
      operator_delete();
      local_8c = 0;
    }
  }
  else {
    FUN_004cf41c(param_1 + 0x30,(uint *)&DAT_0050f246);
    FUN_004cf41c(param_1 + 0x40,(uint *)&DAT_0050f246);
    local_ec = puVar1;
  }
LAB_004bc752:
  if (local_ec <= param_2) {
    FUN_004cf41c(param_1 + 0x20,(uint *)&DAT_0050f246);
    goto LAB_004bc926;
  }
  uVar5 = (int)local_ec - (int)param_2;
  uVar7 = 0;
  std::string::string_from_cstr((int)local_b4,param_2);
  iVar4 = FUN_004d1e40((int)local_c4,(int)local_b4,uVar7,uVar5);
  FUN_004cf384(param_1 + 0x20,iVar4);
  if (local_bc != 0) {
    if (*(int *)(local_bc + -0xc) != -1) {
      piVar6 = (int *)(local_bc + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004bc869;
    }
    operator_delete();
    local_bc = 0;
  }
LAB_004bc869:
  if (local_ac != 0) {
    if (*(int *)(local_ac + -0xc) != -1) {
      piVar6 = (int *)(local_ac + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004bc926;
    }
    operator_delete();
    local_ac = 0;
  }
LAB_004bc926:
  FUN_004bca70(param_1);
  *in_FS_OFFSET = in_stack_ffffff18;
  return in_stack_ffffff18;
}

} // namespace tea
