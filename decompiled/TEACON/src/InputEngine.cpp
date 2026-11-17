// TEACON.exe — application module "InputEngine"
// 8 functions, 0x00409a5c..0x0040a360. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00409a5c  InputEngine::InputEngine   (169 bytes)   [analysis]
//   constructor(list, dictionaryIndex): links the engine into the global InputEngine list
undefined4 * __cdecl InputEngine::InputEngine(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42c49c);
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = *(undefined4 *)(param_3 * 4 + *(int *)(param_2 + 0xc));
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[0x11ff] = 0;
  param_1[1] = DAT_0042c488;
  *param_1 = 0;
  if (DAT_0042c484 == (undefined4 *)0x0) {
    DAT_0042c484 = param_1;
  }
  else {
    *DAT_0042c488 = param_1;
  }
  DAT_0042c488 = param_1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409b24  InputEngine::~InputEngine   (69 bytes)   [rtti:dtor destructor]
//   written in code as InputEngine::_dtor
void __cdecl InputEngine::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_0042c488 = *(undefined4 **)(param_1 + 4);
    if (DAT_0042c488 == (undefined4 *)0x0) {
      (*(undefined4 *)&DAT_0042c484) = 0;
    }
    else {
      *DAT_0042c488 = 0;
    }
    if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
      CloseHandle(*(HANDLE *)(param_1 + 0x14));
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409b6c  InputEngine::StartLength   (267 bytes)   [analysis]
//   selects one word-length bucket: looks up word_stream_offsets[L], skips empty buckets, opens the file, clears the word buffer
bool __cdecl InputEngine::StartLength(int param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 extraout_var_00;
  undefined4 uVar4;
  undefined2 extraout_var_01;
  uint uVar5;
  undefined3 extraout_var;
  undefined1 uVar6;
  
  *(int *)(param_1 + 0x47fc) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x4808) = 0;
  *(undefined4 *)(param_1 + 0x4804) = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x23fc) < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  *(undefined1 *)(param_1 + 0x4800) = uVar6;
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  iVar3 = FUN_004066fc(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
  if ((iVar3 != 0) && (0 < param_2)) {
    uVar2 = TSDictionaryList::GetNumLengths(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
    if (param_2 < CONCAT22(extraout_var_00,uVar2)) {
      uVar4 = TSDictionaryList::GetWordStreamOffset(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      uVar2 = TSDictionaryList::GetNumLengths(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
      if (param_2 != CONCAT22(extraout_var_01,uVar2) + -1) {
        uVar5 = TSDictionaryList::GetWordStreamOffset(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2 + 1);
        if (uVar5 <= *(uint *)(param_1 + 0x18)) goto LAB_00409c4b;
      }
      bVar1 = InputEngine::OpenFile(param_1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x14));
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      }
    }
  }
LAB_00409c4b:
  memset((undefined4 *)(param_1 + 0x20),0,2000);
  *(undefined1 *)(param_1 + 0x20 + *(int *)(param_1 + 0x47fc)) = 0xff;
  return *(int *)(param_1 + 0x14) != -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409c78  InputEngine::NextMatch   (1058 bytes)   [notes+analysis]
//   Huffman-decodes words of the current length (8-bit lookahead table, then bit-by-bit trie walk), at most 2000 per call, testing each against the MatchEngineSet
char * __cdecl InputEngine::NextMatch(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char *local_28;
  char *local_24;
  int local_20;
  uint *local_c;
  uint *local_8;
  
  iVar13 = *(int *)(param_1 + 0x47f8);
  local_8 = *(uint **)(param_1 + 0x47f0);
  local_c = *(uint **)(param_1 + 0x47f4);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar10 = iVar2 + 4;
  if (*(int *)(*(int *)(param_2 + 0x28) + -4) == 0) {
    pbVar11 = (byte *)0x0;
  }
  else {
    pbVar11 = *(byte **)(param_2 + 0x28);
  }
  if (**(char **)(param_2 + 0x28) == '\x03') {
    iVar12 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 3;
    }
    if (iVar12 >> 2 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *(int **)(param_2 + 4);
    }
    iVar12 = *piVar6;
  }
  else {
    iVar12 = 0;
  }
  local_20 = 2000;
  if (iVar13 < 0x20) {
    uVar14 = *local_8 >> ((byte)iVar13 & 0x1f);
  }
  else {
    uVar14 = 0;
  }
  do {
    local_24 = (char *)(param_1 + 0x20);
    local_28 = (char *)(param_1 + 0x408);
LAB_00409d3a:
    iVar7 = *(int *)(iVar2 + 0x1804 + (uVar14 & 0xff) * 4);
    if (iVar7 < 0x100) {
      iVar3 = *(int *)(iVar10 + iVar7 * 8);
      if (0x20 < iVar3 + iVar13) {
LAB_00409d77:
        puVar1 = local_8 + 1;
        if (puVar1 < local_c) {
          uVar8 = *puVar1;
          iVar7 = *(int *)(iVar2 + 0x1804 +
                          ((uVar14 | uVar8 << (0x20U - (char)iVar13 & 0x1f)) & 0xff) * 4);
          local_8 = puVar1;
          if (iVar7 < 0x100) {
            iVar13 = *(int *)(iVar10 + iVar7 * 8) + -0x20 + iVar13;
            uVar14 = uVar8 >> ((byte)iVar13 & 0x1f);
            goto LAB_00409e6b;
          }
          iVar13 = iVar13 + -0x18;
          uVar14 = uVar8 >> ((byte)iVar13 & 0x1f);
        }
        else {
          iVar7 = 0x100;
        }
        goto joined_r0x00409ddb;
      }
      iVar13 = iVar13 + iVar3;
      uVar14 = uVar14 >> ((byte)iVar3 & 0x1f);
    }
    else {
      if (0x18 < iVar13) goto LAB_00409d77;
      iVar13 = iVar13 + 8;
      uVar14 = uVar14 >> 8;
joined_r0x00409ddb:
      for (; 0xff < iVar7; iVar7 = *(int *)(iVar10 + iVar7 * 8 + uVar8 * 4)) {
        if (0x1f < iVar13) {
          local_8 = local_8 + 1;
          if (local_c <= local_8) {
            bVar5 = InputEngine::OpenFile(param_1);
            if (CONCAT31(extraout_var,bVar5) == 0) {
              *(undefined1 *)(param_1 + 0x20) = 0xff;
              *(undefined4 *)(param_1 + 0x47f8) = 0;
              *(undefined4 *)(param_1 + 0x47f0) = *(undefined4 *)(param_1 + 0x47f4);
              return (char *)(param_1 + 0x20);
            }
            local_8 = *(uint **)(param_1 + 0x47f0);
            local_c = *(uint **)(param_1 + 0x47f4);
          }
          iVar13 = 0;
          uVar14 = *local_8;
        }
        uVar8 = uVar14 & 1;
        iVar13 = iVar13 + 1;
        uVar14 = uVar14 >> 1;
      }
    }
LAB_00409e6b:
    pcVar9 = local_28 + 1;
    cVar4 = (char)iVar7;
    *local_28 = cVar4;
    if (cVar4 != '\0') {
      if (cVar4 == '\n') {
        *local_28 = '\0';
        local_24 = (char *)0x0;
        local_28 = pcVar9;
      }
      else {
        local_28 = pcVar9;
        if ((local_24 != (char *)0x0) &&
           (cVar4 = *(char *)(iVar2 + 8 + iVar7 * 8), *local_24 = cVar4, cVar4 != -1)) {
          local_24 = local_24 + 1;
        }
      }
      goto LAB_00409d3a;
    }
    *pcVar9 = '\0';
    if ((char *)(param_1 + 0x20) == local_24) {
      *local_24 = -1;
      *(undefined4 *)(param_1 + 0x4808) = 0;
      *(undefined4 *)(param_1 + 0x4804) = 1;
      *(char *)(param_1 + 0x4800) = *(char *)(param_1 + 0x4800) + -1;
      *(int *)(param_1 + 0x47f8) = iVar13;
      *(uint **)(param_1 + 0x47f0) = local_8;
      *(uint **)(param_1 + 0x47f4) = local_c;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (2000 - local_20);
      return (char *)(param_1 + 0x20);
    }
    if (*(char *)(param_1 + 0x4800) == '\x02') {
      if (0x1f < iVar13) {
        local_8 = local_8 + 1;
        if (local_c <= local_8) {
          bVar5 = InputEngine::OpenFile(param_1);
          if (CONCAT31(extraout_var_00,bVar5) == 0) {
            *(undefined1 *)(param_1 + 0x20) = 0xff;
            *(undefined4 *)(param_1 + 0x47f8) = 0;
            *(undefined4 *)(param_1 + 0x47f0) = *(undefined4 *)(param_1 + 0x47f4);
            return (char *)(param_1 + 0x20);
          }
          local_8 = *(uint **)(param_1 + 0x47f0);
          local_c = *(uint **)(param_1 + 0x47f4);
        }
        iVar13 = 0;
        uVar14 = *local_8;
      }
      *(uint *)(param_1 + 0x4804) = uVar14 & 1;
      if ((uVar14 & 1) != 0) {
        *(int *)(param_1 + 0x4808) = *(int *)(param_1 + 0x4808) + 1;
      }
      iVar13 = iVar13 + 1;
      uVar14 = uVar14 >> 1;
    }
    else {
      *(int *)(param_1 + 0x4808) = *(int *)(param_1 + 0x4808) + 1;
    }
    if (iVar12 == 0) {
      if (pbVar11 == (byte *)0x0) {
LAB_0040a049:
        *(int *)(param_1 + 0x47f8) = iVar13;
        *(uint **)(param_1 + 0x47f0) = local_8;
        *(uint **)(param_1 + 0x47f4) = local_c;
        if (local_20 < 1) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 2000;
          pcVar9 = (char *)0x0;
        }
        else {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (0x7d1 - local_20);
          pcVar9 = (char *)(param_1 + 0x20);
        }
        return pcVar9;
      }
      iVar7 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 3;
      }
      if (iVar7 >> 2 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *(int **)(param_2 + 4);
      }
      uVar8 = MatchEngineSet::EvalLogic('\x02',param_1 + 0x20,*(int *)(param_1 + 0x47fc),pbVar11,piVar6);
    }
    else {
      bVar5 = MatchEngine::MatchWord(iVar12,param_1 + 0x20);
      uVar8 = CONCAT31(extraout_var_01,bVar5);
    }
    if ((uVar8 != 0) || (local_20 = local_20 + -1, local_20 < 1)) goto LAB_0040a049;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a09c  MatchEngineSet::EvalLogic   (372 bytes, 2 ranges)   [notes+analysis]
//   boolean VM over the logic bytecode: 1=OR 2=AND 3=END 4=open paren 5=close paren, bit 0x08=NOT. mode 0 = precomputed flags, 1 = length pre-check (NOT is skipped), 2 = match the word. The 0x412000 address in your notes is this function in TEA.exe
uint __cdecl MatchEngineSet::EvalLogic(char param_1,int param_2,int param_3,byte *param_4,int *param_5)

{
  byte *pbVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  byte bVar5;
  byte *pbVar6;
  byte local_2c [32];
  int local_c;
  uint local_8;
  
  pbVar6 = local_2c;
  local_8 = 0x2a;
  while( true ) {
    while( true ) {
      while( true ) {
        bVar5 = *param_4;
        param_4 = param_4 + 1;
        if ((bVar5 & 0xf7) != 4) break;
        *pbVar6 = bVar5;
        pbVar6 = pbVar6 + 1;
        param_5 = param_5 + 1;
      }
      piVar2 = param_5 + 1;
      local_c = *param_5;
      if (local_c != 0) {
        if (param_1 == '\0') {
          local_8 = (uint)(local_c == 1);
        }
        else {
          iVar4 = MatchEngine::GetMinLength(local_c);
          if ((param_3 < iVar4) || (iVar4 = MatchEngine::GetMaxLength(local_c), iVar4 < param_3)) {
            local_8 = 0;
          }
          else {
            local_8 = 1;
          }
          if (((local_8 != 0) && (param_1 == '\x02')) &&
             (bVar3 = MatchEngine::MatchWord(local_c,param_2), CONCAT31(extraout_var,bVar3) == 0)) {
            local_8 = 0;
          }
        }
      }
      if ((bVar5 & 8) != 0) {
        if (param_1 != '\x01') {
          local_8 = (uint)(local_8 == 0);
        }
        bVar5 = bVar5 & 0xf7;
      }
      if (((bVar5 == 1) && (local_8 != 0)) || ((bVar5 == 2 && (local_8 == 0)))) break;
      param_5 = piVar2;
      if (bVar5 == 5) {
        pbVar6 = pbVar6 + -1;
        if (((*pbVar6 & 8) != 0) && (param_1 != '\x01')) {
          local_8 = (uint)(local_8 == 0);
        }
      }
      else if (bVar5 == 3) {
        return local_8;
      }
    }
    if (pbVar6 == local_2c) break;
    pbVar1 = pbVar6 + -1;
    while (pbVar1 < pbVar6) {
      bVar5 = *param_4;
      param_4 = param_4 + 1;
      piVar2 = piVar2 + 1;
      if ((bVar5 & 0xf7) == 4) {
        pbVar6 = pbVar6 + 1;
      }
      else if ((bVar5 & 0xf7) == 5) {
        pbVar6 = pbVar6 + -1;
      }
    }
    param_5 = piVar2;
    if (((*pbVar6 & 8) != 0) && (param_1 != '\x01')) {
      local_8 = (uint)(local_8 == 0);
    }
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a218  InputEngine::OpenFile   (288 bytes)   [notes+analysis]
//   CreateFileA + seek to the saved offset; on ERROR_TOO_MANY_OPEN_FILES closes another engine's handle from the global list and retries
bool __cdecl InputEngine::OpenFile(int param_1)

{
  undefined4 *puVar1;
  LPCSTR lpFileName;
  BOOL BVar2;
  DWORD in_ECX;
  bool bVar3;
  DWORD DVar4;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar5;
  DWORD local_8;
  
  local_8 = in_ECX;
  if (*(int *)(param_1 + 0x14) == -1) {
    do {
      pvVar5 = (HANDLE)0x0;
      dwFlagsAndAttributes = 0x80;
      dwCreationDisposition = 3;
      lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
      dwShareMode = 3;
      DVar4 = 0x80000000;
      lpFileName = (LPCSTR)(**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 0xc) +
                                                  *(int *)(param_1 + 0xc) * 4) + 0x18))();
      pvVar5 = CreateFileA(lpFileName,DVar4,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
                           dwFlagsAndAttributes,pvVar5);
      *(HANDLE *)(param_1 + 0x14) = pvVar5;
      if (pvVar5 != (HANDLE)0xffffffff) {
        if (*(int *)(param_1 + 0x18) != 0) {
          SetFilePointer(*(HANDLE *)(param_1 + 0x14),*(int *)(param_1 + 0x18),(PLONG)0x0,0);
        }
        goto LAB_0040a2d6;
      }
      DVar4 = GetLastError();
      puVar1 = DAT_0042c484;
      if (DVar4 != 4) {
        return false;
      }
      for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
        if (puVar1[5] != -1) {
          DVar4 = SetFilePointer(*(HANDLE *)(param_1 + 0x14),0,(PLONG)0x0,1);
          puVar1[6] = DVar4;
          CloseHandle((HANDLE)puVar1[5]);
          puVar1[5] = 0xffffffff;
          break;
        }
      }
    } while (puVar1 != (undefined4 *)0x0);
    bVar3 = false;
  }
  else {
LAB_0040a2d6:
    BVar2 = ReadFile(*(HANDLE *)(param_1 + 0x14),(LPVOID)(param_1 + 0x7f0),0x4000,&local_8,
                     (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      bVar3 = false;
    }
    else {
      *(undefined4 *)(param_1 + 0x47f8) = 0;
      *(LPVOID *)(param_1 + 0x47f0) = (LPVOID)(param_1 + 0x7f0);
      *(DWORD *)(param_1 + 0x47f4) = (local_8 + 3 & 0xfffffffc) + param_1 + 0x7f0;
      bVar3 = local_8 != 0;
    }
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a338  InputEngine::GetAnnotation   (37 bytes)   [notes+analysis]
//   returns the text following the display word's NUL, or NULL when empty. The 0x4122bc address in your notes is this function in TEA.exe
char * __cdecl InputEngine::GetAnnotation(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strlen((uint *)(param_1 + 0x408));
  pcVar1 = (char *)(param_1 + 0x408 + (int)(pcVar1 + 1));
  if (*pcVar1 == '\0') {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a360  FUN_0040a360   (25 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0040a360(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x1144) = (char)param_2;
  *(int *)(param_1 + 0x1148) = *(int *)(param_1 + 0x1148) + 1;
  return param_2;
}

} // namespace tea
