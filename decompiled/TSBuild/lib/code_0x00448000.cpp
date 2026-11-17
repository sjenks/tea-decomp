// TSBuild.exe — runtime / library code "code_0x00448000"
// 51 functions, 0x00448418..0x0044beec. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00448418  FUN_00448418   (86 bytes)   [unnamed]
void __stdcall FUN_00448418(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481a14);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00448768;
  puVar1 = FUN_00468310(1,0,0x41aedc);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cd48,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044846e  FUN_0044846e   (48 bytes)   [unnamed]
void __stdcall FUN_0044846e(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481a28);
  OWL::TStreamableClass::_dtor(0x48cd48,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004484a0  FUN_004484a0   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004484a0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481a34);
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
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_0041aedc,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448508  FUN_00448508   (316 bytes)   [unnamed]
int * __cdecl FUN_00448508(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481a4c);
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
    FUN_00435d18(param_1 + 0x1d,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_0044947c(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&OWL::TEditFile::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00478410;
  *(undefined ***)param_1[2] = &PTR_LAB_0047841c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00478428;
  FUN_00450b7c((uint *)(param_1 + 0xe),0,(uint *)0x0,0,0,0,0,0,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448684  FUN_00448684   (87 bytes)   [unnamed]
void __cdecl FUN_00448684(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042d9a0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_00449414(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448714  FUN_00448714   (81 bytes)   [unnamed]
void __cdecl FUN_00448714(int param_1,int *param_2)

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
  FUN_00449414(local_14,piVar1);
  local_8 = 1;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TEditSearch::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448768  FUN_00448768   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00448768(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x481a80);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_00448508(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_004484a0(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448ab4  FUN_00448ab4   (735 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00448ab4(int *param_1)

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
  
  __InitExceptBlockLDTC(0x481c18);
  do {
    puVar2 = FUN_0041b958();
    if (((*(int *)(puVar2 + 0x10) == 1) || (puVar2 = FUN_0041b958(), *(int *)(puVar2 + 0x10) == 0))
       && (*(int *)(*param_1 + 0x6c) != 0)) {
      FUN_0042c95c((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
    }
    iVar3 = (**(code **)(param_1[3] + 0x40))();
    if (iVar3 < 0) {
      if ((*(byte *)(param_1 + 7) & 0x18) == 0) {
        if ((*(byte *)(param_1 + 7) & 0x20) != 0) break;
      }
      else {
        FUN_0044f1ec((int)local_24,*(int *)(*param_1 + 0x70),0x7f1c);
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
          if (pbVar6 != (byte *)&DAT_00485bcc) {
            *(int *)pbVar6 = *(int *)pbVar6 + 1;
          }
        }
        if (local_1c != (byte *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            pbVar6 = local_1c + -0xc;
            if (pbVar6 == (byte *)&DAT_00485bcc) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00485bcc) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_00448ca3;
          }
          operator_delete();
          local_1c = (byte *)0x0;
        }
LAB_00448ca3:
        strlen((uint *)param_1[10]);
        puVar5 = (undefined1 *)operator_new_array();
        FUN_0046a5c8(puVar5,local_c);
        (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
        operator_delete_array();
        if (local_c != (byte *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            pbVar6 = local_c + -0xc;
            if (pbVar6 == (byte *)&DAT_00485bcc) {
              iVar3 = 1;
            }
            else if (pbVar6 == (byte *)&DAT_00485bcc) {
              iVar3 = 1;
            }
            else {
              *(int *)pbVar6 = *(int *)pbVar6 + -1;
              iVar3 = *(int *)pbVar6 + 1;
            }
            if (iVar3 != 0) goto LAB_00448d78;
          }
          operator_delete();
          local_c = (byte *)0x0;
        }
      }
    }
    else if ((*(byte *)(param_1 + 7) & 0x30) != 0) {
      FUN_00438338(*param_1,0xc2,0,param_1[0xb]);
    }
LAB_00448d78:
  } while ((*(byte *)(param_1 + 7) & 0x20) != 0);
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044938c  FUN_0044938c   (86 bytes)   [unnamed]
void __stdcall FUN_0044938c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481d34);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004496e0;
  puVar1 = FUN_00468310(1,0,0x41b138);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cd58,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004493e2  FUN_004493e2   (48 bytes)   [unnamed]
void __stdcall FUN_004493e2(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481d48);
  OWL::TStreamableClass::_dtor(0x48cd58,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449414  FUN_00449414   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_00449414(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481d50);
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
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_0041b138,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044947c  FUN_0044947c   (304 bytes)   [unnamed]
int * __cdecl FUN_0044947c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481d68);
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
    FUN_00435d18(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
  FUN_004468bc(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
  param_1[3] = (int)&OWL::TEditSearch::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004782e4;
  *(undefined ***)param_1[2] = &PTR_LAB_004782f0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004782fc;
  FUN_0044beec(param_1 + 7,0,0x51);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004495f4  FUN_004495f4   (87 bytes)   [unnamed]
void __cdecl FUN_004495f4(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042d9a0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_00446854(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044968c  FUN_0044968c   (81 bytes)   [unnamed]
void __cdecl FUN_0044968c(int param_1,int *param_2)

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
  FUN_00446854(local_14,piVar1);
  local_8 = 1;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TEdit::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004496e0  FUN_004496e0   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004496e0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x481d9c);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0044947c(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_00449414(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004498a8  FUN_004498a8   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_004498a8(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481df4);
  FUN_004230f0(param_1,0x7fee,DAT_00484890);
  *param_1 = &OWL::TXBadFormat::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449914  FUN_00449914   (78 bytes)   [unnamed]
void __stdcall FUN_00449914(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x481e18);
  piVar1 = FUN_004498a8(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449af8  FUN_00449af8   (83 bytes)   [unnamed]
undefined4 * __cdecl FUN_00449af8(undefined4 *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481eac);
  FUN_00422cfc(param_1,param_2);
  param_1[2] = param_2[2];
  *param_1 = &OWL::TXOwl::vftable;
  *param_1 = &OWL::TXBadFormat::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449b4c  FUN_00449b4c   (92 bytes)   [unnamed]
void __cdecl FUN_00449b4c(uint *param_1,uint *param_2,uint *param_3,uint param_4)

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
// 0x00449ba8  FUN_00449ba8   (217 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x00449bfe) */
undefined4 * __cdecl FUN_00449ba8(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  undefined4 *in_FS_OFFSET;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x481ec4);
  local_18 = 8;
  *param_1 = &OWL::TFileHandle::vftable;
  *param_1 = &OWL::TDiskFileHandle::vftable;
  param_1[5] = 0;
  param_1[5] = &DAT_00485bd8;
  local_c = local_c + 2;
  param_1[2] = param_3;
  FUN_00459b6c((int)(param_1 + 3),param_2);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  FUN_00449b4c(&local_2c,&local_30,&local_34,param_1[2]);
  pvVar1 = CreateFileA((LPCSTR)param_1[5],local_2c,local_30,(LPSECURITY_ATTRIBUTES)0x0,local_34,
                       0x10000000,(HANDLE)0x0);
  param_1[1] = pvVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449f38  FUN_00449f38   (105 bytes)   [unnamed]
undefined4 * __cdecl FUN_00449f38(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482008);
  *param_1 = &OWL::TFileHandle::vftable;
  *param_1 = &OWL::TDiskFileHandle::vftable;
  param_1[1] = param_2;
  param_1[2] = param_4;
  std::string::string_from_cstr((int)(param_1 + 3),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a2f4  FUN_0044a2f4   (62 bytes)   [unnamed]
uint __cdecl FUN_0044a2f4(uint param_1)

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
// 0x0044a684  FUN_0044a684   (66 bytes)   [unnamed]
int __cdecl FUN_0044a684(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0044a6c6  FUN_0044a6c6   (107 bytes)   [unnamed]
int __cdecl FUN_0044a6c6(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0044a731  FUN_0044a731   (107 bytes)   [unnamed]
int __cdecl FUN_0044a731(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0044a79c  FUN_0044a79c   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_0044a79c(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a7a3  FUN_0044a7a3   (180 bytes)   [unnamed]
int __cdecl FUN_0044a7a3(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0044a857  FUN_0044a857   (66 bytes)   [unnamed]
int __cdecl FUN_0044a857(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0044a899  FUN_0044a899   (107 bytes)   [unnamed]
int __cdecl FUN_0044a899(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0044a904  FUN_0044a904   (107 bytes)   [unnamed]
int __cdecl FUN_0044a904(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0044a96f  FUN_0044a96f   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_0044a96f(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a976  FUN_0044a976   (180 bytes)   [unnamed]
int __cdecl FUN_0044a976(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

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
// 0x0044aa2c  FUN_0044aa2c   (38 bytes)   [unnamed]
int __cdecl FUN_0044aa2c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  memcpy(param_2,param_1,param_5 * param_4);
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aa54  FUN_0044aa54   (38 bytes)   [unnamed]
int __cdecl FUN_0044aa54(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  memcpy(param_2,param_1,param_5 * param_4);
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aa7c  FUN_0044aa7c   (32 bytes)   [unnamed]
int __cdecl FUN_0044aa7c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *(int *)(param_1 + 8) != 0; param_1 = param_1 + 0xc) {
    iVar1 = iVar1 + *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aa9c  FUN_0044aa9c   (309 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044aaf1) */
/* WARNING: Removing unreachable block (ram,0x0044ab26) */
int __cdecl FUN_0044aa9c(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_3;
  while( true ) {
    if (piVar5[2] == 0) {
      uVar1 = FUN_0044aa7c((int)param_3);
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
            iVar4 = (**(code **)(&DAT_00482110 + *param_3 * 4))();
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
// 0x0044abd4  FUN_0044abd4   (323 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044ac2a) */
/* WARNING: Removing unreachable block (ram,0x0044ac66) */
undefined1 __cdecl FUN_0044abd4(int *param_1,undefined4 param_2,int *param_3,int param_4)

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
      uVar2 = FUN_0044aa7c((int)param_3);
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
          iVar4 = (**(code **)(&DAT_00482110 + *param_3 * 4))();
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
// 0x0044ad18  FUN_0044ad18   (33 bytes)   [unnamed]
void __cdecl FUN_0044ad18(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_0044aa9c(param_1,param_2,(int *)(&PTR_DAT_00482260)[param_3],param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ad3c  FUN_0044ad3c   (33 bytes)   [unnamed]
void __cdecl FUN_0044ad3c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_0044abd4(param_1,param_2,(int *)(&PTR_DAT_00482260)[param_3],param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aec8  FUN_0044aec8   (16 bytes)   [unnamed]
char * __cdecl FUN_0044aec8(char *param_1)

{
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aed8  FUN_0044aed8   (30 bytes)   [unnamed]
char * __cdecl FUN_0044aed8(char *param_1,char *param_2,int param_3)

{
  for (; (param_2 != param_1 && (param_3 != *param_1)); param_1 = param_1 + 1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aef6  FUN_0044aef6   (56 bytes)   [unnamed]
char * __cdecl FUN_0044aef6(char *param_1,char *param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_0044aed8((char *)param_3,pcVar1 + (int)param_3,(int)*param_1);
    if (pcVar1 + (int)param_3 != pcVar2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044af2e  FUN_0044af2e   (30 bytes)   [unnamed]
char * __cdecl FUN_0044af2e(char *param_1,char *param_2,int param_3)

{
  for (; (param_2 != param_1 && (param_3 != *param_1)); param_1 = param_1 + -1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044af4c  FUN_0044af4c   (56 bytes)   [unnamed]
char * __cdecl FUN_0044af4c(char *param_1,char *param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_0044aed8((char *)param_3,pcVar1 + (int)param_3,(int)*param_1);
    if (pcVar1 + (int)param_3 != pcVar2) break;
    param_1 = param_1 + -1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044af84  FUN_0044af84   (35 bytes)   [unnamed]
char * __cdecl FUN_0044af84(char *param_1,char *param_2,char *param_3)

{
  for (; ((param_2 != param_1 && (*param_3 != '\0')) && (*param_1 == *param_3));
      param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044afa8  FUN_0044afa8   (3008 bytes)   [unnamed]
undefined4 __cdecl FUN_0044afa8(int param_1,uint *param_2,char param_3)

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
  
  __InitExceptBlockLDTC(0x482338);
  puVar1 = (uint *)FUN_0044aec8((char *)param_2);
  if ((char)*param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_00459b6c(param_1,(uint *)&DAT_0048228e);
    FUN_00459b6c(param_1 + 0x10,(uint *)&DAT_0048228e);
    FUN_00459b6c(param_1 + 0x40,(uint *)&DAT_0048228e);
    FUN_00459b6c(param_1 + 0x20,(uint *)&DAT_0048228e);
    FUN_0044bc98(param_1);
    *in_FS_OFFSET = in_stack_ffffff18;
    return in_stack_ffffff18;
  }
  puVar2 = (uint *)FUN_0044af84((char *)param_2,(char *)puVar1,&DAT_00482280);
  if (puVar2 < (uint *)((int)param_2 + 2U)) {
    *(undefined1 *)(param_1 + 0x164) = 0;
    FUN_00459b6c(param_1,(uint *)&DAT_0048228e);
    puVar2 = (uint *)FUN_0044aed8((char *)param_2,(char *)puVar1,(int)DAT_00482283);
    if (puVar2 == puVar1) {
      FUN_00459b6c(param_1 + 0x10,(uint *)&DAT_0048228e);
    }
    else {
      uVar5 = (int)puVar2 - (int)param_2;
      uVar7 = 0;
      std::string::string_from_cstr((int)local_54,param_2);
      iVar4 = FUN_0045c818((int)local_64,(int)local_54,uVar7,uVar5);
      FUN_00459ad4(param_1 + 0x10,iVar4);
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          piVar6 = (int *)(local_5c + -0xc);
          if (piVar6 == &DAT_00485bcc) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00485bcc) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_0044b4b6;
        }
        operator_delete();
        local_5c = 0;
      }
LAB_0044b4b6:
      if (local_4c != 0) {
        if (*(int *)(local_4c + -0xc) != -1) {
          piVar6 = (int *)(local_4c + -0xc);
          if (piVar6 == &DAT_00485bcc) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00485bcc) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_0044b54b;
        }
        operator_delete();
        local_4c = 0;
      }
LAB_0044b54b:
      param_2 = (uint *)((int)puVar2 + 1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x164) = 1;
    pcVar3 = FUN_0044aef6((char *)puVar2,(char *)puVar1,(uint *)&DAT_00482286);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)local_14,puVar2);
    iVar4 = FUN_0045c818((int)local_24,(int)local_14,uVar7,uVar5);
    FUN_00459ad4(param_1,iVar4);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0044b15f;
      }
      operator_delete();
      local_1c = 0;
    }
LAB_0044b15f:
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar6 = (int *)(local_c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0044b1f4;
      }
      operator_delete();
      local_c = 0;
    }
LAB_0044b1f4:
    puVar2 = (uint *)(pcVar3 + 1);
    pcVar3 = FUN_0044aef6((char *)puVar2,(char *)puVar1,(uint *)&DAT_00482286);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)local_34,puVar2);
    iVar4 = FUN_0045c818((int)local_44,(int)local_34,uVar7,uVar5);
    FUN_00459ad4(param_1 + 0x10,iVar4);
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar6 = (int *)(local_3c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0044b2f6;
      }
      operator_delete();
      local_3c = 0;
    }
LAB_0044b2f6:
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0044b38b;
      }
      operator_delete();
      local_2c = 0;
    }
LAB_0044b38b:
    param_2 = (uint *)(pcVar3 + 1);
  }
  if (param_3 == '\0') {
    local_ec = (uint *)FUN_0044af2e((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                    (int)DAT_0048228b);
    puVar2 = (uint *)FUN_0044af4c((char *)((int)puVar1 + -1),(char *)((int)param_2 + -1),
                                  (uint *)&DAT_00482286);
    if (puVar2 < local_ec) {
      uVar5 = (int)puVar1 - (int)local_ec;
      uVar7 = 0;
      std::string::string_from_cstr((int)local_74,local_ec);
      iVar4 = FUN_0045c818((int)local_84,(int)local_74,uVar7,uVar5);
      FUN_00459ad4(param_1 + 0x40,iVar4);
      if (local_7c != 0) {
        if (*(int *)(local_7c + -0xc) != -1) {
          piVar6 = (int *)(local_7c + -0xc);
          if (piVar6 == &DAT_00485bcc) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00485bcc) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_0044b6bd;
        }
        operator_delete();
        local_7c = 0;
      }
LAB_0044b6bd:
      if (local_6c != 0) {
        if (*(int *)(local_6c + -0xc) != -1) {
          piVar6 = (int *)(local_6c + -0xc);
          if (piVar6 == &DAT_00485bcc) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00485bcc) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_0044b787;
        }
        operator_delete();
        local_6c = 0;
      }
    }
    else {
      FUN_00459b6c(param_1 + 0x40,(uint *)&DAT_0048228e);
      local_ec = puVar1;
    }
LAB_0044b787:
    uVar5 = (int)local_ec - ((int)puVar2 + 1);
    uVar7 = 0;
    std::string::string_from_cstr((int)local_94,(uint *)((int)puVar2 + 1));
    iVar4 = FUN_0045c818((int)local_a4,(int)local_94,uVar7,uVar5);
    FUN_00459ad4(param_1 + 0x30,iVar4);
    if (local_9c != 0) {
      if (*(int *)(local_9c + -0xc) != -1) {
        piVar6 = (int *)(local_9c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0044b8a0;
      }
      operator_delete();
      local_9c = 0;
    }
LAB_0044b8a0:
    local_ec = puVar2;
    if (local_8c != 0) {
      if (*(int *)(local_8c + -0xc) != -1) {
        piVar6 = (int *)(local_8c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_0044b97a;
      }
      operator_delete();
      local_8c = 0;
    }
  }
  else {
    FUN_00459b6c(param_1 + 0x30,(uint *)&DAT_0048228e);
    FUN_00459b6c(param_1 + 0x40,(uint *)&DAT_0048228e);
    local_ec = puVar1;
  }
LAB_0044b97a:
  if (local_ec <= param_2) {
    FUN_00459b6c(param_1 + 0x20,(uint *)&DAT_0048228e);
    goto LAB_0044bb4e;
  }
  uVar5 = (int)local_ec - (int)param_2;
  uVar7 = 0;
  std::string::string_from_cstr((int)local_b4,param_2);
  iVar4 = FUN_0045c818((int)local_c4,(int)local_b4,uVar7,uVar5);
  FUN_00459ad4(param_1 + 0x20,iVar4);
  if (local_bc != 0) {
    if (*(int *)(local_bc + -0xc) != -1) {
      piVar6 = (int *)(local_bc + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0044ba91;
    }
    operator_delete();
    local_bc = 0;
  }
LAB_0044ba91:
  if (local_ac != 0) {
    if (*(int *)(local_ac + -0xc) != -1) {
      piVar6 = (int *)(local_ac + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0044bb4e;
    }
    operator_delete();
    local_ac = 0;
  }
LAB_0044bb4e:
  FUN_0044bc98(param_1);
  *in_FS_OFFSET = in_stack_ffffff18;
  return in_stack_ffffff18;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044bb88  FUN_0044bb88   (271 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044bc4d) */
/* WARNING: Removing unreachable block (ram,0x0044bc09) */
/* WARNING: Removing unreachable block (ram,0x0044bbc5) */
/* WARNING: Removing unreachable block (ram,0x0044bbe7) */
/* WARNING: Removing unreachable block (ram,0x0044bc2b) */
/* WARNING: Removing unreachable block (ram,0x0044bc6f) */
int __cdecl FUN_0044bb88(int param_1,uint *param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482428);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x28) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined **)(param_1 + 0x58) = &DAT_00485bd8;
  FUN_0044afa8(param_1,param_2,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044bc98  FUN_0044bc98   (110 bytes)   [unnamed]
void __cdecl FUN_0044bc98(int param_1)

{
  int iVar1;
  uint local_108 [65];
  
  FUN_0044bd08(param_1,0x1f);
  iVar1 = FUN_00467724((char *)(param_1 + 0x60),&DAT_00482484);
  if (iVar1 == 0) {
    FUN_00459b6c(param_1 + 0x50,(uint *)(param_1 + 0x60));
  }
  else {
    GetFullPathNameA((LPCSTR)(param_1 + 0x60),0x104,(LPSTR)local_108,(LPSTR *)0x0);
    FUN_00459b6c(param_1 + 0x50,local_108);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044bd08  FUN_0044bd08   (371 bytes)   [unnamed]
int __cdecl FUN_0044bd08(int param_1,uint param_2)

{
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x164) == '\0') {
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_00467694((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      FUN_00467694((char *)(param_1 + 0x60),&DAT_00482284);
      if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) == 0)) {
        FUN_00467694((char *)(param_1 + 0x60),&DAT_00482289);
      }
    }
  }
  else {
    if ((param_2 & 1) != 0) {
      FUN_00467694((char *)(param_1 + 0x60),&DAT_00482280);
      FUN_00467694((char *)(param_1 + 0x60),*(char **)(param_1 + 8));
      if ((param_2 & 2) != 0) {
        FUN_00467694((char *)(param_1 + 0x60),&DAT_00482289);
      }
    }
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_00467694((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      if (((param_2 & 4) != 0) || ((param_2 & 8) != 0)) {
        FUN_00467694((char *)(param_1 + 0x60),&DAT_00482289);
      }
    }
  }
  if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) != 0)) {
    FUN_00467694((char *)(param_1 + 0x60),*(char **)(param_1 + 0x28));
    FUN_00467694((char *)(param_1 + 0x60),&DAT_00482289);
  }
  if (((param_2 & 8) != 0) && (*(int *)(*(int *)(param_1 + 0x38) + -4) != 0)) {
    FUN_00467694((char *)(param_1 + 0x60),*(char **)(param_1 + 0x38));
  }
  if (((param_2 & 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x48) + -4) != 0)) {
    FUN_00467694((char *)(param_1 + 0x60),*(char **)(param_1 + 0x48));
  }
  return param_1 + 0x60;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044be7c  FUN_0044be7c   (112 bytes)   [unnamed]
bool __cdecl FUN_0044be7c(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_2 & 1) != 0) {
    bVar1 = *(int *)(*(int *)(param_1 + 8) + -4) != 0;
  }
  if ((param_2 & 2) != 0) {
    bVar1 = (bool)(bVar1 | *(int *)(*(int *)(param_1 + 0x18) + -4) != 0);
  }
  if ((param_2 & 4) != 0) {
    bVar1 = (bool)(bVar1 | *(int *)(*(int *)(param_1 + 0x28) + -4) != 0);
  }
  if ((param_2 & 8) != 0) {
    bVar1 = (bool)(bVar1 | *(int *)(*(int *)(param_1 + 0x38) + -4) != 0);
  }
  if ((param_2 & 0x10) != 0) {
    bVar1 = (bool)(bVar1 | *(int *)(*(int *)(param_1 + 0x48) + -4) != 0);
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044beec  FUN_0044beec   (117 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044beec(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482498);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  uVar1 = operator_new_array();
  param_1[3] = uVar1;
  uVar1 = operator_new_array();
  param_1[4] = uVar1;
  *(undefined1 *)param_1[4] = 0;
  *(undefined1 *)param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
