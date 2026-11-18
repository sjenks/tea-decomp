// TSBuild.exe — runtime / library code "code_0x00448000"
// 43 functions, 0x00448418..0x0044beec. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00448418  InitRichEditStreamer_448418   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_448418(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481a14);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00448768;
  puVar1 = FUN_00468310(1,0,0x41aedc);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cd48,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044846e  FUN_0044846e   (48 bytes)   [unnamed]
void __stdcall FUN_0044846e(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481a28);
  OWL::TStreamableClass::_dtor(0x48cd48,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448684  FUN_00448684   (87 bytes)   [unnamed]
void __cdecl FUN_00448684(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
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
  piVar1 = OWL::TEditSearch::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448714  FUN_00448714   (81 bytes)   [unnamed]
void __cdecl FUN_00448714(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  OWL::TEditSearch::Streamer::Streamer(streamer,piVar1);
  local_8 = 1;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TEditSearch::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448768  FUN_00448768   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00448768(int *param_1)

{
  undefined4 *streamer;
  int *editFile;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481a80);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      editFile = (int *)operator_new();
      if (editFile == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TEditFile::TEditFile(editFile,0);
        param_1 = (int *)editFile[2];
      }
    }
    OWL::TEditFile::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448ab4  FUN_00448ab4   (735 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00448ab4(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int *newRep;
  undefined1 *buf;
  byte *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 alloc [8];
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
          newRep = std::string::__getRep(alloc,uVar1,uVar1);
          local_c = (byte *)(newRep + 3);
          memcpy((undefined4 *)local_c,(undefined4 *)local_1c,uVar1);
        }
        else {
          local_c = local_1c;
          strRep = local_1c + -0xc;
          if (strRep != (byte *)&g_nullStringRep) {
            *(int *)strRep = *(int *)strRep + 1;
          }
        }
        if (local_1c != (byte *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            strRep = local_1c + -0xc;
            if (strRep == (byte *)&g_nullStringRep) {
              iVar3 = 1;
            }
            else if (strRep == (byte *)&g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *(int *)strRep = *(int *)strRep + -1;
              iVar3 = *(int *)strRep + 1;
            }
            if (iVar3 != 0) goto LAB_00448ca3;
          }
          operator_delete();
          local_1c = (byte *)0x0;
        }
LAB_00448ca3:
        strlen((uint *)param_1[10]);
        buf = (undefined1 *)operator_new_array();
        sprintf(buf,local_c);
        (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
        operator_delete_array();
        if (local_c != (byte *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            strRep = local_c + -0xc;
            if (strRep == (byte *)&g_nullStringRep) {
              iVar3 = 1;
            }
            else if (strRep == (byte *)&g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *(int *)strRep = *(int *)strRep + -1;
              iVar3 = *(int *)strRep + 1;
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044938c  InitRichEditStreamer_44938c   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_44938c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481d34);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004496e0;
  puVar1 = FUN_00468310(1,0,0x41b138);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cd58,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004493e2  FUN_004493e2   (48 bytes)   [unnamed]
void __stdcall FUN_004493e2(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481d48);
  OWL::TStreamableClass::_dtor(0x48cd58,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004495f4  FUN_004495f4   (87 bytes)   [unnamed]
void __cdecl FUN_004495f4(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
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
  piVar1 = OWL::TEdit::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044968c  FUN_0044968c   (81 bytes)   [unnamed]
void __cdecl FUN_0044968c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  OWL::TEdit::Streamer::Streamer(streamer,piVar1);
  local_8 = 1;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TEdit::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004496e0  FUN_004496e0   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004496e0(int *param_1)

{
  undefined4 *streamer;
  int *editSearch;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481d9c);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      editSearch = (int *)operator_new();
      if (editSearch == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TEditSearch::TEditSearch(editSearch,0);
        param_1 = (int *)editSearch[2];
      }
    }
    OWL::TEditSearch::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449914  FUN_00449914   (78 bytes)   [unnamed]
void __stdcall FUN_00449914(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x481e18);
  piVar1 = OWL::TXBadFormat::TXBadFormat(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
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
int __cdecl FUN_0044aa2c(undefined4 *src,undefined4 *dest,undefined4 param_3,int param_4,int param_5)

{
  memcpy(dest,src,param_5 * param_4);
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aa54  FUN_0044aa54   (38 bytes)   [unnamed]
int __cdecl FUN_0044aa54(undefined4 *src,undefined4 *dest,undefined4 param_3,int param_4,int param_5)

{
  memcpy(dest,src,param_5 * param_4);
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
  char *len;
  char *pcVar2;
  
  len = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_0044aed8((char *)param_3,len + (int)param_3,(int)*param_1);
    if (len + (int)param_3 != pcVar2) break;
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
  char *len;
  char *pcVar2;
  
  len = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_0044aed8((char *)param_3,len + (int)param_3,(int)*param_1);
    if (len + (int)param_3 != pcVar2) break;
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
undefined4 __cdecl FUN_0044afa8(int str,uint *param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int *strRep;
  undefined4 *sehChainHead;
  uint uVar7;
  uint *local_ec;
  undefined4 in_stack_ffffff18;
  undefined1 local_c4 [8];
  int str8;
  undefined1 str2 [8];
  int str9;
  undefined1 local_a4 [8];
  int str10;
  undefined1 str3 [8];
  int str11;
  undefined1 local_84 [8];
  int str12;
  undefined1 str4 [8];
  int str13;
  undefined1 local_64 [8];
  int str14;
  undefined1 str5 [8];
  int str15;
  undefined1 local_44 [8];
  int str16;
  undefined1 str6 [8];
  int str17;
  undefined1 local_24 [8];
  int str18;
  undefined1 str7 [8];
  int str19;
  
  __InitExceptBlockLDTC(0x482338);
  puVar1 = (uint *)FUN_0044aec8((char *)param_2);
  if ((char)*param_2 == '\0') {
    *(undefined1 *)(str + 0x164) = 0;
    std::string::assign_cstr(str,(uint *)&DAT_0048228e);
    std::string::assign_cstr(str + 0x10,(uint *)&DAT_0048228e);
    std::string::assign_cstr(str + 0x40,(uint *)&DAT_0048228e);
    std::string::assign_cstr(str + 0x20,(uint *)&DAT_0048228e);
    FUN_0044bc98(str);
    *sehChainHead = in_stack_ffffff18;
    return in_stack_ffffff18;
  }
  puVar2 = (uint *)FUN_0044af84((char *)param_2,(char *)puVar1,&DAT_00482280);
  if (puVar2 < (uint *)((int)param_2 + 2U)) {
    *(undefined1 *)(str + 0x164) = 0;
    std::string::assign_cstr(str,(uint *)&DAT_0048228e);
    puVar2 = (uint *)FUN_0044aed8((char *)param_2,(char *)puVar1,(int)DAT_00482283);
    if (puVar2 == puVar1) {
      std::string::assign_cstr(str + 0x10,(uint *)&DAT_0048228e);
    }
    else {
      uVar5 = (int)puVar2 - (int)param_2;
      uVar7 = 0;
      std::string::string_from_cstr((int)str5,param_2);
      iVar4 = FUN_0045c818((int)local_64,(int)str5,uVar7,uVar5);
      std::string::operator_assign(str + 0x10,iVar4);
      if (str14 != 0) {
        if (*(int *)(str14 + -0xc) != -1) {
          strRep = (int *)(str14 + -0xc);
          if (strRep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else {
            *strRep = *strRep + -1;
            iVar4 = *strRep + 1;
          }
          if (iVar4 != 0) goto LAB_0044b4b6;
        }
        operator_delete();
        str14 = 0;
      }
LAB_0044b4b6:
      if (str15 != 0) {
        if (*(int *)(str15 + -0xc) != -1) {
          strRep = (int *)(str15 + -0xc);
          if (strRep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else {
            *strRep = *strRep + -1;
            iVar4 = *strRep + 1;
          }
          if (iVar4 != 0) goto LAB_0044b54b;
        }
        operator_delete();
        str15 = 0;
      }
LAB_0044b54b:
      param_2 = (uint *)((int)puVar2 + 1);
    }
  }
  else {
    *(undefined1 *)(str + 0x164) = 1;
    pcVar3 = FUN_0044aef6((char *)puVar2,(char *)puVar1,(uint *)&DAT_00482286);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)str7,puVar2);
    iVar4 = FUN_0045c818((int)local_24,(int)str7,uVar7,uVar5);
    std::string::operator_assign(str,iVar4);
    if (str18 != 0) {
      if (*(int *)(str18 + -0xc) != -1) {
        strRep = (int *)(str18 + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar4 = *strRep + 1;
        }
        if (iVar4 != 0) goto LAB_0044b15f;
      }
      operator_delete();
      str18 = 0;
    }
LAB_0044b15f:
    if (str19 != 0) {
      if (*(int *)(str19 + -0xc) != -1) {
        strRep = (int *)(str19 + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar4 = *strRep + 1;
        }
        if (iVar4 != 0) goto LAB_0044b1f4;
      }
      operator_delete();
      str19 = 0;
    }
LAB_0044b1f4:
    puVar2 = (uint *)(pcVar3 + 1);
    pcVar3 = FUN_0044aef6((char *)puVar2,(char *)puVar1,(uint *)&DAT_00482286);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)str6,puVar2);
    iVar4 = FUN_0045c818((int)local_44,(int)str6,uVar7,uVar5);
    std::string::operator_assign(str + 0x10,iVar4);
    if (str16 != 0) {
      if (*(int *)(str16 + -0xc) != -1) {
        strRep = (int *)(str16 + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar4 = *strRep + 1;
        }
        if (iVar4 != 0) goto LAB_0044b2f6;
      }
      operator_delete();
      str16 = 0;
    }
LAB_0044b2f6:
    if (str17 != 0) {
      if (*(int *)(str17 + -0xc) != -1) {
        strRep = (int *)(str17 + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar4 = *strRep + 1;
        }
        if (iVar4 != 0) goto LAB_0044b38b;
      }
      operator_delete();
      str17 = 0;
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
      std::string::string_from_cstr((int)str4,local_ec);
      iVar4 = FUN_0045c818((int)local_84,(int)str4,uVar7,uVar5);
      std::string::operator_assign(str + 0x40,iVar4);
      if (str12 != 0) {
        if (*(int *)(str12 + -0xc) != -1) {
          strRep = (int *)(str12 + -0xc);
          if (strRep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else {
            *strRep = *strRep + -1;
            iVar4 = *strRep + 1;
          }
          if (iVar4 != 0) goto LAB_0044b6bd;
        }
        operator_delete();
        str12 = 0;
      }
LAB_0044b6bd:
      if (str13 != 0) {
        if (*(int *)(str13 + -0xc) != -1) {
          strRep = (int *)(str13 + -0xc);
          if (strRep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            iVar4 = 1;
          }
          else {
            *strRep = *strRep + -1;
            iVar4 = *strRep + 1;
          }
          if (iVar4 != 0) goto LAB_0044b787;
        }
        operator_delete();
        str13 = 0;
      }
    }
    else {
      std::string::assign_cstr(str + 0x40,(uint *)&DAT_0048228e);
      local_ec = puVar1;
    }
LAB_0044b787:
    uVar5 = (int)local_ec - ((int)puVar2 + 1);
    uVar7 = 0;
    std::string::string_from_cstr((int)str3,(uint *)((int)puVar2 + 1));
    iVar4 = FUN_0045c818((int)local_a4,(int)str3,uVar7,uVar5);
    std::string::operator_assign(str + 0x30,iVar4);
    if (str10 != 0) {
      if (*(int *)(str10 + -0xc) != -1) {
        strRep = (int *)(str10 + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar4 = *strRep + 1;
        }
        if (iVar4 != 0) goto LAB_0044b8a0;
      }
      operator_delete();
      str10 = 0;
    }
LAB_0044b8a0:
    local_ec = puVar2;
    if (str11 != 0) {
      if (*(int *)(str11 + -0xc) != -1) {
        strRep = (int *)(str11 + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar4 = *strRep + 1;
        }
        if (iVar4 != 0) goto LAB_0044b97a;
      }
      operator_delete();
      str11 = 0;
    }
  }
  else {
    std::string::assign_cstr(str + 0x30,(uint *)&DAT_0048228e);
    std::string::assign_cstr(str + 0x40,(uint *)&DAT_0048228e);
    local_ec = puVar1;
  }
LAB_0044b97a:
  if (local_ec <= param_2) {
    std::string::assign_cstr(str + 0x20,(uint *)&DAT_0048228e);
    goto LAB_0044bb4e;
  }
  uVar5 = (int)local_ec - (int)param_2;
  uVar7 = 0;
  std::string::string_from_cstr((int)str2,param_2);
  iVar4 = FUN_0045c818((int)local_c4,(int)str2,uVar7,uVar5);
  std::string::operator_assign(str + 0x20,iVar4);
  if (str8 != 0) {
    if (*(int *)(str8 + -0xc) != -1) {
      strRep = (int *)(str8 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_0044ba91;
    }
    operator_delete();
    str8 = 0;
  }
LAB_0044ba91:
  if (str9 != 0) {
    if (*(int *)(str9 + -0xc) != -1) {
      strRep = (int *)(str9 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_0044bb4e;
    }
    operator_delete();
    str9 = 0;
  }
LAB_0044bb4e:
  FUN_0044bc98(str);
  *sehChainHead = in_stack_ffffff18;
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
int __cdecl FUN_0044bb88(int str,uint *param_2,char param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482428);
  *(undefined4 *)(str + 8) = 0;
  *(undefined **)(str + 8) = &g_emptyStringData;
  *(undefined4 *)(str + 0x18) = 0;
  *(undefined **)(str + 0x18) = &g_emptyStringData;
  *(undefined4 *)(str + 0x28) = 0;
  *(undefined **)(str + 0x28) = &g_emptyStringData;
  *(undefined4 *)(str + 0x38) = 0;
  *(undefined **)(str + 0x38) = &g_emptyStringData;
  *(undefined4 *)(str + 0x48) = 0;
  *(undefined **)(str + 0x48) = &g_emptyStringData;
  *(undefined4 *)(str + 0x58) = 0;
  *(undefined **)(str + 0x58) = &g_emptyStringData;
  FUN_0044afa8(str,param_2,param_3);
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044bc98  FUN_0044bc98   (110 bytes)   [unnamed]
void __cdecl FUN_0044bc98(int param_1)

{
  int iVar1;
  uint buffer [65];
  
  FUN_0044bd08(param_1,0x1f);
  iVar1 = FUN_00467724((char *)(param_1 + 0x60),&DAT_00482484);
  if (iVar1 == 0) {
    std::string::assign_cstr(param_1 + 0x50,(uint *)(param_1 + 0x60));
  }
  else {
    GetFullPathNameA((LPCSTR)(param_1 + 0x60),0x104,(LPSTR)buffer,(LPSTR *)0x0);
    std::string::assign_cstr(param_1 + 0x50,buffer);
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return param_1;
}

} // namespace tea
