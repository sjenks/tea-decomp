// TSMerge.exe — runtime / library code "code_0x0043c000"
// 39 functions, 0x0043cc38..0x0043fe14. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
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
// 0x0043d284  InitRichEditStreamer_43d284   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_43d284(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46dc38);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043d5d4;
  puVar1 = FUN_0045666c(1,0,0x40feb8);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_004772a0,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d2da  FUN_0043d2da   (48 bytes)   [unnamed]
void __stdcall FUN_0043d2da(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46dc4c);
  OWL::TStreamableClass::_dtor(0x4772a0,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d4f0  FUN_0043d4f0   (87 bytes)   [unnamed]
void __cdecl FUN_0043d4f0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
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
  piVar1 = OWL::TEditSearch::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d580  FUN_0043d580   (81 bytes)   [unnamed]
void __cdecl FUN_0043d580(int param_1,int *param_2)

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
  FUN_00422d00(param_2,&local_8,4);
  OWL::TEditSearch::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d5d4  FUN_0043d5d4   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043d5d4(int *param_1)

{
  undefined4 *streamer;
  int *editFile;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46dca4);
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
// 0x0043d920  FUN_0043d920   (735 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0043d920(int *param_1)

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
            if (iVar3 != 0) goto LAB_0043db0f;
          }
          operator_delete();
          local_1c = (byte *)0x0;
        }
LAB_0043db0f:
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e1f8  InitRichEditStreamer_43e1f8   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_43e1f8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46df58);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043e54c;
  puVar1 = FUN_0045666c(1,0,0x410114);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_004772b0,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e24e  FUN_0043e24e   (48 bytes)   [unnamed]
void __stdcall FUN_0043e24e(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46df6c);
  OWL::TStreamableClass::_dtor(0x4772b0,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e460  FUN_0043e460   (87 bytes)   [unnamed]
void __cdecl FUN_0043e460(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
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
  piVar1 = OWL::TEdit::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e4f8  FUN_0043e4f8   (81 bytes)   [unnamed]
void __cdecl FUN_0043e4f8(int param_1,int *param_2)

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
  FUN_00422d00(param_2,&local_8,4);
  OWL::TEdit::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e54c  FUN_0043e54c   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043e54c(int *param_1)

{
  undefined4 *streamer;
  int *editSearch;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46dfc0);
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
// 0x0043e780  FUN_0043e780   (78 bytes)   [unnamed]
void __stdcall FUN_0043e780(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x46e03c);
  piVar1 = OWL::TXBadFormat::TXBadFormat(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
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
int __cdecl FUN_0043f898(undefined4 *src,undefined4 *dest,undefined4 param_3,int param_4,int param_5)

{
  memcpy(dest,src,param_5 * param_4);
  return param_5 * param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f8c0  FUN_0043f8c0   (38 bytes)   [unnamed]
int __cdecl FUN_0043f8c0(undefined4 *src,undefined4 *dest,undefined4 param_3,int param_4,int param_5)

{
  memcpy(dest,src,param_5 * param_4);
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
  char *len;
  char *pcVar2;
  
  len = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_0043fd44((char *)param_3,len + (int)param_3,(int)*param_1);
    if (len + (int)param_3 != pcVar2) break;
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
  char *len;
  char *pcVar2;
  
  len = strlen(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_0043fd44((char *)param_3,len + (int)param_3,(int)*param_1);
    if (len + (int)param_3 != pcVar2) break;
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
undefined4 __cdecl FUN_0043fe14(int str,uint *param_2,char param_3)

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
  
  __InitExceptBlockLDTC(0x46e55c);
  puVar1 = (uint *)FUN_0043fd34((char *)param_2);
  if ((char)*param_2 == '\0') {
    *(undefined1 *)(str + 0x164) = 0;
    std::string::assign_cstr(str,(uint *)&DAT_0046e4b2);
    std::string::assign_cstr(str + 0x10,(uint *)&DAT_0046e4b2);
    std::string::assign_cstr(str + 0x40,(uint *)&DAT_0046e4b2);
    std::string::assign_cstr(str + 0x20,(uint *)&DAT_0046e4b2);
    FUN_00440b04(str);
    *sehChainHead = in_stack_ffffff18;
    return in_stack_ffffff18;
  }
  puVar2 = (uint *)FUN_0043fdf0((char *)param_2,(char *)puVar1,&DAT_0046e4a4);
  if (puVar2 < (uint *)((int)param_2 + 2U)) {
    *(undefined1 *)(str + 0x164) = 0;
    std::string::assign_cstr(str,(uint *)&DAT_0046e4b2);
    puVar2 = (uint *)FUN_0043fd44((char *)param_2,(char *)puVar1,(int)DAT_0046e4a7);
    if (puVar2 == puVar1) {
      std::string::assign_cstr(str + 0x10,(uint *)&DAT_0046e4b2);
    }
    else {
      uVar5 = (int)puVar2 - (int)param_2;
      uVar7 = 0;
      std::string::string_from_cstr((int)str5,param_2);
      iVar4 = FUN_0044f8a4((int)local_64,(int)str5,uVar7,uVar5);
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
          if (iVar4 != 0) goto LAB_00440322;
        }
        operator_delete();
        str14 = 0;
      }
LAB_00440322:
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
          if (iVar4 != 0) goto LAB_004403b7;
        }
        operator_delete();
        str15 = 0;
      }
LAB_004403b7:
      param_2 = (uint *)((int)puVar2 + 1);
    }
  }
  else {
    *(undefined1 *)(str + 0x164) = 1;
    pcVar3 = FUN_0043fd62((char *)puVar2,(char *)puVar1,(uint *)&DAT_0046e4aa);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)str7,puVar2);
    iVar4 = FUN_0044f8a4((int)local_24,(int)str7,uVar7,uVar5);
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
        if (iVar4 != 0) goto LAB_0043ffcb;
      }
      operator_delete();
      str18 = 0;
    }
LAB_0043ffcb:
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
        if (iVar4 != 0) goto LAB_00440060;
      }
      operator_delete();
      str19 = 0;
    }
LAB_00440060:
    puVar2 = (uint *)(pcVar3 + 1);
    pcVar3 = FUN_0043fd62((char *)puVar2,(char *)puVar1,(uint *)&DAT_0046e4aa);
    uVar5 = (int)pcVar3 - (int)puVar2;
    uVar7 = 0;
    std::string::string_from_cstr((int)str6,puVar2);
    iVar4 = FUN_0044f8a4((int)local_44,(int)str6,uVar7,uVar5);
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
        if (iVar4 != 0) goto LAB_00440162;
      }
      operator_delete();
      str16 = 0;
    }
LAB_00440162:
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
        if (iVar4 != 0) goto LAB_004401f7;
      }
      operator_delete();
      str17 = 0;
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
      std::string::string_from_cstr((int)str4,local_ec);
      iVar4 = FUN_0044f8a4((int)local_84,(int)str4,uVar7,uVar5);
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
          if (iVar4 != 0) goto LAB_00440529;
        }
        operator_delete();
        str12 = 0;
      }
LAB_00440529:
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
          if (iVar4 != 0) goto LAB_004405f3;
        }
        operator_delete();
        str13 = 0;
      }
    }
    else {
      std::string::assign_cstr(str + 0x40,(uint *)&DAT_0046e4b2);
      local_ec = puVar1;
    }
LAB_004405f3:
    uVar5 = (int)local_ec - ((int)puVar2 + 1);
    uVar7 = 0;
    std::string::string_from_cstr((int)str3,(uint *)((int)puVar2 + 1));
    iVar4 = FUN_0044f8a4((int)local_a4,(int)str3,uVar7,uVar5);
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
        if (iVar4 != 0) goto LAB_0044070c;
      }
      operator_delete();
      str10 = 0;
    }
LAB_0044070c:
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
        if (iVar4 != 0) goto LAB_004407e6;
      }
      operator_delete();
      str11 = 0;
    }
  }
  else {
    std::string::assign_cstr(str + 0x30,(uint *)&DAT_0046e4b2);
    std::string::assign_cstr(str + 0x40,(uint *)&DAT_0046e4b2);
    local_ec = puVar1;
  }
LAB_004407e6:
  if (local_ec <= param_2) {
    std::string::assign_cstr(str + 0x20,(uint *)&DAT_0046e4b2);
    goto LAB_004409ba;
  }
  uVar5 = (int)local_ec - (int)param_2;
  uVar7 = 0;
  std::string::string_from_cstr((int)str2,param_2);
  iVar4 = FUN_0044f8a4((int)local_c4,(int)str2,uVar7,uVar5);
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
      if (iVar4 != 0) goto LAB_004408fd;
    }
    operator_delete();
    str8 = 0;
  }
LAB_004408fd:
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
      if (iVar4 != 0) goto LAB_004409ba;
    }
    operator_delete();
    str9 = 0;
  }
LAB_004409ba:
  FUN_00440b04(str);
  *sehChainHead = in_stack_ffffff18;
  return in_stack_ffffff18;
}

} // namespace tea
