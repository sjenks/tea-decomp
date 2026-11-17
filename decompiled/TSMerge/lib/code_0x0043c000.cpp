// TSMerge.exe — runtime / library code "code_0x0043c000"
// 47 functions, 0x0043cc38..0x0043fe14. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043cc38  CeCmd24333_43cc38   (49 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24333)
void __cdecl CeCmd24333_43cc38(int *param_1,undefined4 *param_2)

{
  FUN_0042d1a4(*param_1,0xb8,0,0);
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d284  FUN_0043d284   (86 bytes)   [unnamed]
void __stdcall FUN_0043d284(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46dc38);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043d5d4;
  puVar1 = FUN_0045666c(1,0,0x40feb8);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_004772a0,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d2da  FUN_0043d2da   (48 bytes)   [unnamed]
void __stdcall FUN_0043d2da(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46dc4c);
  OWL::TStreamableClass::_dtor(0x4772a0,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d30c  FUN_0043d30c   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043d30c(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46dc58);
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
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_0040feb8,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d374  FUN_0043d374   (316 bytes)   [unnamed]
int * __cdecl FUN_0043d374(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46dc70);
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
    FUN_0042ab84(param_1 + 0x1d,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_0043e2e8(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&OWL::TEditFile::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046465c;
  *(undefined ***)param_1[2] = &PTR_LAB_00464668;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00464674;
  FUN_004459e8((uint *)(param_1 + 0xe),0,(uint *)0x0,0,0,0,0,0,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d4f0  FUN_0043d4f0   (87 bytes)   [unnamed]
void __cdecl FUN_0043d4f0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042280c(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_0043e280(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d580  FUN_0043d580   (81 bytes)   [unnamed]
void __cdecl FUN_0043d580(int param_1,int *param_2)

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
  FUN_0043e280(local_14,piVar1);
  local_8 = 1;
  FUN_00422d00(param_2,&local_8,4);
  OWL::TEditSearch::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d5d4  FUN_0043d5d4   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043d5d4(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46dca4);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0043d374(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_0043d30c(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d920  FUN_0043d920   (735 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0043d920(int *param_1)

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
  
  __InitExceptBlockLDTC(0x46de3c);
  do {
    puVar2 = FUN_00410934();
    if (((*(int *)(puVar2 + 0x10) == 1) || (puVar2 = FUN_00410934(), *(int *)(puVar2 + 0x10) == 0))
       && (*(int *)(*param_1 + 0x6c) != 0)) {
      FUN_004217e8((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
    }
    iVar3 = (**(code **)(param_1[3] + 0x40))();
    if (iVar3 < 0) {
      if ((*(byte *)(param_1 + 7) & 0x18) == 0) {
        if ((*(byte *)(param_1 + 7) & 0x20) != 0) break;
      }
      else {
        FUN_00444058((int)local_24,*(int *)(*param_1 + 0x70),0x7f1c);
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
          if (pbVar6 != (byte *)&DAT_00471d5c) {
            *(int *)pbVar6 = *(int *)pbVar6 + 1;
          }
        }
        if (local_1c != (byte *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            pbVar6 = local_1c + -0xc;
            if (pbVar6 == (byte *)&DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_0043db0f;
          }
          operator_delete();
          local_1c = (byte *)0x0;
        }
LAB_0043db0f:
        strlen((uint *)param_1[10]);
        puVar5 = (undefined1 *)operator_new_array();
        FUN_00457ef4(puVar5,local_c);
        (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
        operator_delete_array();
        if (local_c != (byte *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            pbVar6 = local_c + -0xc;
            if (pbVar6 == (byte *)&DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_0043dbe4;
          }
          operator_delete();
          local_c = (byte *)0x0;
        }
      }
    }
    else if ((*(byte *)(param_1 + 7) & 0x30) != 0) {
      FUN_0042d1a4(*param_1,0xc2,0,param_1[0xb]);
    }
LAB_0043dbe4:
  } while ((*(byte *)(param_1 + 7) & 0x20) != 0);
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e1f8  FUN_0043e1f8   (86 bytes)   [unnamed]
void __stdcall FUN_0043e1f8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46df58);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043e54c;
  puVar1 = FUN_0045666c(1,0,0x410114);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_004772b0,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e24e  FUN_0043e24e   (48 bytes)   [unnamed]
void __stdcall FUN_0043e24e(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46df6c);
  OWL::TStreamableClass::_dtor(0x4772b0,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e280  FUN_0043e280   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043e280(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46df74);
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
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_00410114,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e2e8  FUN_0043e2e8   (304 bytes)   [unnamed]
int * __cdecl FUN_0043e2e8(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46df8c);
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
    FUN_0042ab84(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
  FUN_0043b728(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
  param_1[3] = (int)&OWL::TEditSearch::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00464530;
  *(undefined ***)param_1[2] = &PTR_LAB_0046453c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00464548;
  FUN_00440d58(param_1 + 7,0,0x51);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e460  FUN_0043e460   (87 bytes)   [unnamed]
void __cdecl FUN_0043e460(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042280c(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_0043b6c0(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e4f8  FUN_0043e4f8   (81 bytes)   [unnamed]
void __cdecl FUN_0043e4f8(int param_1,int *param_2)

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
  FUN_0043b6c0(local_14,piVar1);
  local_8 = 1;
  FUN_00422d00(param_2,&local_8,4);
  OWL::TEdit::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e54c  FUN_0043e54c   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043e54c(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46dfc0);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0043e2e8(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_0043e280(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e714  FUN_0043e714   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043e714(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e018);
  FUN_00417f7c(param_1,0x7fee,DAT_00470a60);
  *param_1 = &OWL::TXBadFormat::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e780  FUN_0043e780   (78 bytes)   [unnamed]
void __stdcall FUN_0043e780(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x46e03c);
  piVar1 = FUN_0043e714(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e964  FUN_0043e964   (83 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043e964(undefined4 *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e0d0);
  FUN_00417b88(param_1,param_2);
  param_1[2] = param_2[2];
  *param_1 = &OWL::TXOwl::vftable;
  *param_1 = &OWL::TXBadFormat::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e9b8  FUN_0043e9b8   (92 bytes)   [unnamed]
void __cdecl FUN_0043e9b8(uint *param_1,uint *param_2,uint *param_3,uint param_4)

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
// 0x0043ea14  FUN_0043ea14   (217 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0043ea6a) */
undefined4 * __cdecl FUN_0043ea14(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  undefined4 *in_FS_OFFSET;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x46e0e8);
  local_18 = 8;
  *param_1 = &OWL::TFileHandle::vftable;
  *param_1 = &OWL::TDiskFileHandle::vftable;
  param_1[5] = 0;
  param_1[5] = &DAT_00471d68;
  local_c = local_c + 2;
  param_1[2] = param_3;
  FUN_0044cf10((int)(param_1 + 3),param_2);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  FUN_0043e9b8(&local_2c,&local_30,&local_34,param_1[2]);
  pvVar1 = CreateFileA((LPCSTR)param_1[5],local_2c,local_30,(LPSECURITY_ATTRIBUTES)0x0,local_34,
                       0x10000000,(HANDLE)0x0);
  param_1[1] = pvVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043eda4  FUN_0043eda4   (105 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043eda4(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e22c);
  *param_1 = &OWL::TFileHandle::vftable;
  *param_1 = &OWL::TDiskFileHandle::vftable;
  param_1[1] = param_2;
  param_1[2] = param_4;
  std::string::string_from_cstr((int)(param_1 + 3),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f160  FUN_0043f160   (62 bytes)   [unnamed]
uint __cdecl FUN_0043f160(uint param_1)

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
// 0x0043f4f0  FUN_0043f4f0   (66 bytes)   [unnamed]
int __cdecl FUN_0043f4f0(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0043f532  FUN_0043f532   (107 bytes)   [unnamed]
int __cdecl FUN_0043f532(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0043f59d  FUN_0043f59d   (107 bytes)   [unnamed]
int __cdecl FUN_0043f59d(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0043f608  FUN_0043f608   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_0043f608(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f60f  FUN_0043f60f   (180 bytes)   [unnamed]
int __cdecl FUN_0043f60f(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0043f6c3  FUN_0043f6c3   (66 bytes)   [unnamed]
int __cdecl FUN_0043f6c3(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0043f705  FUN_0043f705   (107 bytes)   [unnamed]
int __cdecl FUN_0043f705(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0043f770  FUN_0043f770   (107 bytes)   [unnamed]
int __cdecl FUN_0043f770(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0043f7db  FUN_0043f7db   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_0043f7db(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f7e2  FUN_0043f7e2   (180 bytes)   [unnamed]
int __cdecl FUN_0043f7e2(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0043f898  FUN_0043f898   (38 bytes)   [unnamed]
int __cdecl FUN_0043f898(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  memcpy(param_2,param_1,param_5 * param_4);
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f8c0  FUN_0043f8c0   (38 bytes)   [unnamed]
int __cdecl FUN_0043f8c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  memcpy(param_2,param_1,param_5 * param_4);
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f8e8  FUN_0043f8e8   (32 bytes)   [unnamed]
int __cdecl FUN_0043f8e8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *(int *)(param_1 + 8) != 0; param_1 = param_1 + 0xc) {
    iVar1 = iVar1 + *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f908  FUN_0043f908   (309 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0043f95d) */
/* WARNING: Removing unreachable block (ram,0x0043f992) */
int __cdecl FUN_0043f908(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_3;
  while( true ) {
    if (piVar5[2] == 0) {
      uVar1 = FUN_0043f8e8((int)param_3);
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
            iVar4 = (**(code **)(&DAT_0046e334 + *param_3 * 4))();
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
// 0x0043fa40  FUN_0043fa40   (323 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0043fa96) */
/* WARNING: Removing unreachable block (ram,0x0043fad2) */
undefined1 __cdecl FUN_0043fa40(int *param_1,undefined4 param_2,int *param_3,int param_4)

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
      uVar2 = FUN_0043f8e8((int)param_3);
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
          iVar4 = (**(code **)(&DAT_0046e334 + *param_3 * 4))();
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
// 0x0043fb84  FUN_0043fb84   (33 bytes)   [unnamed]
void __cdecl FUN_0043fb84(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_0043f908(param_1,param_2,(int *)(&PTR_DAT_0046e484)[param_3],param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fba8  FUN_0043fba8   (33 bytes)   [unnamed]
void __cdecl FUN_0043fba8(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_0043fa40(param_1,param_2,(int *)(&PTR_DAT_0046e484)[param_3],param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fd34  FUN_0043fd34   (16 bytes)   [unnamed]
char * __cdecl FUN_0043fd34(char *param_1)

{
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fd44  FUN_0043fd44   (30 bytes)   [unnamed]
char * __cdecl FUN_0043fd44(char *param_1,char *param_2,int param_3)

{
  for (; (param_2 != param_1 && (param_3 != *param_1)); param_1 = param_1 + 1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fd62  FUN_0043fd62   (56 bytes)   [unnamed]
char * __cdecl FUN_0043fd62(char *param_1,char *param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_0043fd44((char *)param_3,pcVar1 + (int)param_3,(int)*param_1);
    if (pcVar1 + (int)param_3 != pcVar2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fd9a  FUN_0043fd9a   (30 bytes)   [unnamed]
char * __cdecl FUN_0043fd9a(char *param_1,char *param_2,int param_3)

{
  for (; (param_2 != param_1 && (param_3 != *param_1)); param_1 = param_1 + -1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fdb8  FUN_0043fdb8   (56 bytes)   [unnamed]
char * __cdecl FUN_0043fdb8(char *param_1,char *param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_0043fd44((char *)param_3,pcVar1 + (int)param_3,(int)*param_1);
    if (pcVar1 + (int)param_3 != pcVar2) break;
    param_1 = param_1 + -1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fdf0  FUN_0043fdf0   (35 bytes)   [unnamed]
char * __cdecl FUN_0043fdf0(char *param_1,char *param_2,char *param_3)

{
  for (; ((param_2 != param_1 && (*param_3 != '\0')) && (*param_1 == *param_3));
      param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fe14  FUN_0043fe14   (3008 bytes)   [unnamed]
undefined4 __cdecl FUN_0043fe14(int param_1,uint *param_2,char param_3)

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
  
  __InitExceptBlockLDTC(0x46e55c);
  puVar1 = (uint *)FUN_0043fd34((char *)param_2);
  if ((char)*param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_0044cf10(param_1,(uint *)&DAT_0046e4b2);
    FUN_0044cf10(param_1 + 0x10,(uint *)&DAT_0046e4b2);
    FUN_0044cf10(param_1 + 0x40,(uint *)&DAT_0046e4b2);
    FUN_0044cf10(param_1 + 0x20,(uint *)&DAT_0046e4b2);
    FUN_00440b04(param_1);
    *in_FS_OFFSET = in_stack_ffffff18;
    return in_stack_ffffff18;
  }
  puVar2 = (uint *)FUN_0043fdf0((char *)param_2,(char *)puVar1,&DAT_0046e4a4);
  if (puVar2 < (uint *)((int)param_2 + 2U)) {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_0044cf10(param_1,(uint *)&DAT_0046e4b2);
    puVar2 = (uint *)FUN_0043fd44((char *)param_2,(char *)puVar1,(int)DAT_0046e4a7);
    if (puVar2 == puVar1) {
      FUN_0044cf10(param_1 + 0x10,(uint *)&DAT_0046e4b2);
    }
    else {
      uVar5 = (int)puVar2 - (int)param_2;
      uVar7 = 0;
      std::string::string_from_cstr((int)local_54,param_2);
      iVar4 = FUN_0044f8a4((int)local_64,(int)local_54,uVar7,uVar5);
      FUN_0044ce78(param_1 + 0x10,iVar4);
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          piVar6 = (int *)(local_5c + -0xc);
          if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_00440322;
        }
        operator_delete();
        local_5c = 0;
      }
LAB_00440322:
      if (local_4c != 0) {
        if (*(int *)(local_4c + -0xc) != -1) {
          piVar6 = (int *)(local_4c + -0xc);
          if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004403b7;
        }
        operator_delete();
        local_4c = 0;
      }
LAB_004403b7:
      param_2 = (uint *)((int)puVar2 + 1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x164) = 1;
    pcVar3 = FUN_0043fd62((char *)puVar2,(char *)puVar1,(uint *)&DAT_0046e4aa);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)local_14,puVar2);
    iVar4 = FUN_0044f8a4((int)local_24,(int)local_14,uVar7,uVar5);
    FUN_0044ce78(param_1,iVar4);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0043ffcb;
      }
      operator_delete();
      local_1c = 0;
    }
LAB_0043ffcb:
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar6 = (int *)(local_c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00440060;
      }
      operator_delete();
      local_c = 0;
    }
LAB_00440060:
    puVar2 = (uint *)(pcVar3 + 1);
    pcVar3 = FUN_0043fd62((char *)puVar2,(char *)puVar1,(uint *)&DAT_0046e4aa);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)local_34,puVar2);
    iVar4 = FUN_0044f8a4((int)local_44,(int)local_34,uVar7,uVar5);
    FUN_0044ce78(param_1 + 0x10,iVar4);
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar6 = (int *)(local_3c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00440162;
      }
      operator_delete();
      local_3c = 0;
    }
LAB_00440162:
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004401f7;
      }
      operator_delete();
      local_2c = 0;
    }
LAB_004401f7:
    param_2 = (uint *)(pcVar3 + 1);
  }
  if (param_3 == '\0') {
    local_ec = (uint *)FUN_0043fd9a((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                    (int)DAT_0046e4af);
    puVar2 = (uint *)FUN_0043fdb8((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                  (uint *)&DAT_0046e4aa);
    if (puVar2 < local_ec) {
      uVar5 = (int)puVar1 - (int)local_ec;
      uVar7 = 0;
      std::string::string_from_cstr((int)local_74,local_ec);
      iVar4 = FUN_0044f8a4((int)local_84,(int)local_74,uVar7,uVar5);
      FUN_0044ce78(param_1 + 0x40,iVar4);
      if (local_7c != 0) {
        if (*(int *)(local_7c + -0xc) != -1) {
          piVar6 = (int *)(local_7c + -0xc);
          if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_00440529;
        }
        operator_delete();
        local_7c = 0;
      }
LAB_00440529:
      if (local_6c != 0) {
        if (*(int *)(local_6c + -0xc) != -1) {
          piVar6 = (int *)(local_6c + -0xc);
          if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004405f3;
        }
        operator_delete();
        local_6c = 0;
      }
    }
    else {
      FUN_0044cf10(param_1 + 0x40,(uint *)&DAT_0046e4b2);
      local_ec = puVar1;
    }
LAB_004405f3:
    uVar5 = (int)local_ec - ((int)puVar2 + 1);
    uVar7 = 0;
    std::string::string_from_cstr((int)local_94,(uint *)((int)puVar2 + 1));
    iVar4 = FUN_0044f8a4((int)local_a4,(int)local_94,uVar7,uVar5);
    FUN_0044ce78(param_1 + 0x30,iVar4);
    if (local_9c != 0) {
      if (*(int *)(local_9c + -0xc) != -1) {
        piVar6 = (int *)(local_9c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0044070c;
      }
      operator_delete();
      local_9c = 0;
    }
LAB_0044070c:
    local_ec = puVar2;
    if (local_8c != 0) {
      if (*(int *)(local_8c + -0xc) != -1) {
        piVar6 = (int *)(local_8c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004407e6;
      }
      operator_delete();
      local_8c = 0;
    }
  }
  else {
    FUN_0044cf10(param_1 + 0x30,(uint *)&DAT_0046e4b2);
    FUN_0044cf10(param_1 + 0x40,(uint *)&DAT_0046e4b2);
    local_ec = puVar1;
  }
LAB_004407e6:
  if (local_ec <= param_2) {
    FUN_0044cf10(param_1 + 0x20,(uint *)&DAT_0046e4b2);
    goto LAB_004409ba;
  }
  uVar5 = (int)local_ec - (int)param_2;
  uVar7 = 0;
  std::string::string_from_cstr((int)local_b4,param_2);
  iVar4 = FUN_0044f8a4((int)local_c4,(int)local_b4,uVar7,uVar5);
  FUN_0044ce78(param_1 + 0x20,iVar4);
  if (local_bc != 0) {
    if (*(int *)(local_bc + -0xc) != -1) {
      piVar6 = (int *)(local_bc + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004408fd;
    }
    operator_delete();
    local_bc = 0;
  }
LAB_004408fd:
  if (local_ac != 0) {
    if (*(int *)(local_ac + -0xc) != -1) {
      piVar6 = (int *)(local_ac + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004409ba;
    }
    operator_delete();
    local_ac = 0;
  }
LAB_004409ba:
  FUN_00440b04(param_1);
  *in_FS_OFFSET = in_stack_ffffff18;
  return in_stack_ffffff18;
}

} // namespace tea
