// TEA.exe — application module "InputEngine"
// 16 functions, 0x00411680..0x00412cf0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00411680  InputEngine::InputEngine   (169 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00409a5c. constructor(list, dictionaryIndex): links the engine into the global InputEngine list
undefined4 * __cdecl InputEngine::InputEngine(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ecae0);
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = *(undefined4 *)(param_3 * 4 + *(int *)(param_2 + 0xc));
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[0x11ff] = 0;
  param_1[1] = DAT_004ecacc;
  *param_1 = 0;
  if (DAT_004ecac8 == (undefined4 *)0x0) {
    DAT_004ecac8 = param_1;
  }
  else {
    *DAT_004ecacc = param_1;
  }
  DAT_004ecacc = param_1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411748  InputEngine::~InputEngine   (69 bytes)   [rtti:dtor destructor]
//   written in code as InputEngine::_dtor
void __cdecl InputEngine::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_004ecacc = *(undefined4 **)(param_1 + 4);
    if (DAT_004ecacc == (undefined4 *)0x0) {
      (*(undefined4 *)&DAT_004ecac8) = 0;
    }
    else {
      *DAT_004ecacc = 0;
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
// 0x00411790  InputEngine::StartLength   (270 bytes)   [analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). Selects one word-length bucket and opens the file
bool __cdecl InputEngine::StartLength(int param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  uint uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  
  *(int *)(param_1 + 0x47fc) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x4808) = 0;
  *(undefined4 *)(param_1 + 0x4804) = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x23fc) < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
  }
  *(undefined4 *)(param_1 + 0x4800) = uVar5;
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  iVar3 = FUN_00408c68(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
  if ((iVar3 != 0) && (0 < param_2)) {
    uVar2 = TSDictionaryList::GetNumLengths(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
    if (param_2 < CONCAT22(extraout_var_00,uVar2)) {
      uVar5 = TSDictionaryList::GetWordStreamOffset(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2);
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      uVar2 = TSDictionaryList::GetNumLengths(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
      if (param_2 != CONCAT22(extraout_var_01,uVar2) + -1) {
        uVar4 = TSDictionaryList::GetWordStreamOffset(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2 + 1);
        if (uVar4 <= *(uint *)(param_1 + 0x18)) goto LAB_00411872;
      }
      bVar1 = InputEngine::OpenFile(param_1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x14));
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      }
    }
  }
LAB_00411872:
  memset((undefined4 *)(param_1 + 0x20),0,2000);
  *(undefined1 *)(param_1 + 0x20 + *(int *)(param_1 + 0x47fc)) = 0xff;
  return *(int *)(param_1 + 0x14) != -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004118a0  InputEngine::NextWord   (828 bytes)   [analysis (inferred)]
//   second Huffman decode loop that exists only in TEA.exe; same structure as NextMatch. Its exact role was not determined
int __cdecl InputEngine::NextWord(int param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined3 extraout_var;
  uint uVar7;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *local_1c;
  char *local_18;
  uint *local_c;
  uint *local_8;
  
  iVar10 = *(int *)(param_1 + 0x47f8);
  local_8 = *(uint **)(param_1 + 0x47f0);
  local_c = *(uint **)(param_1 + 0x47f4);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar8 = iVar3 + 4;
  if (iVar10 < 0x20) {
    uVar11 = *local_8 >> ((byte)iVar10 & 0x1f);
  }
  else {
    uVar11 = 0;
  }
  do {
    local_18 = (char *)(param_1 + 0x20);
    local_1c = (char *)(param_1 + 0x408);
LAB_00411907:
    iVar9 = *(int *)(iVar3 + 0x1804 + (uVar11 & 0xff) * 4);
    if (iVar9 < 0x100) {
      iVar4 = *(int *)(iVar8 + iVar9 * 8);
      if (0x20 < iVar4 + iVar10) {
LAB_00411944:
        puVar1 = local_8 + 1;
        if (puVar1 < local_c) {
          uVar7 = *puVar1;
          iVar9 = *(int *)(iVar3 + 0x1804 +
                          ((uVar11 | uVar7 << (0x20U - (char)iVar10 & 0x1f)) & 0xff) * 4);
          local_8 = puVar1;
          if (iVar9 < 0x100) {
            iVar10 = *(int *)(iVar8 + iVar9 * 8) + -0x20 + iVar10;
            uVar11 = uVar7 >> ((byte)iVar10 & 0x1f);
            goto LAB_00411a38;
          }
          iVar10 = iVar10 + -0x18;
          uVar11 = uVar7 >> ((byte)iVar10 & 0x1f);
        }
        else {
          iVar9 = 0x100;
        }
        goto joined_r0x004119a8;
      }
      iVar10 = iVar10 + iVar4;
      uVar11 = uVar11 >> ((byte)iVar4 & 0x1f);
    }
    else {
      if (0x18 < iVar10) goto LAB_00411944;
      iVar10 = iVar10 + 8;
      uVar11 = uVar11 >> 8;
joined_r0x004119a8:
      for (; 0xff < iVar9; iVar9 = *(int *)(iVar8 + iVar9 * 8 + uVar7 * 4)) {
        if (0x1f < iVar10) {
          local_8 = local_8 + 1;
          if (local_c <= local_8) {
            bVar6 = InputEngine::OpenFile(param_1);
            if (CONCAT31(extraout_var,bVar6) == 0) {
              *(undefined1 *)(param_1 + 0x20) = 0xff;
              *(undefined4 *)(param_1 + 0x47f8) = 0;
              *(undefined4 *)(param_1 + 0x47f0) = *(undefined4 *)(param_1 + 0x47f4);
              goto LAB_00411bd5;
            }
            local_8 = *(uint **)(param_1 + 0x47f0);
            local_c = *(uint **)(param_1 + 0x47f4);
          }
          iVar10 = 0;
          uVar11 = *local_8;
        }
        uVar7 = uVar11 & 1;
        iVar10 = iVar10 + 1;
        uVar11 = uVar11 >> 1;
      }
    }
LAB_00411a38:
    pcVar2 = local_1c + 1;
    cVar5 = (char)iVar9;
    *local_1c = cVar5;
    if (cVar5 != '\0') {
      if (cVar5 == '\n') {
        *local_1c = '\0';
        local_18 = (char *)0x0;
        local_1c = pcVar2;
      }
      else {
        local_1c = pcVar2;
        if ((local_18 != (char *)0x0) &&
           (cVar5 = *(char *)(iVar3 + 8 + iVar9 * 8), *local_18 = cVar5, cVar5 != -1)) {
          local_18 = local_18 + 1;
        }
      }
      goto LAB_00411907;
    }
    *pcVar2 = '\0';
    if ((char *)(param_1 + 0x20) == local_18) {
      *local_18 = -1;
      *(undefined4 *)(param_1 + 0x4808) = 0;
      *(undefined4 *)(param_1 + 0x4804) = 1;
      *(int *)(param_1 + 0x4800) = *(int *)(param_1 + 0x4800) + -1;
      *(int *)(param_1 + 0x47f8) = iVar10;
      *(uint **)(param_1 + 0x47f0) = local_8;
      *(uint **)(param_1 + 0x47f4) = local_c;
      goto LAB_00411bd5;
    }
    if (*(int *)(param_1 + 0x4800) == 2) {
      if (0x1f < iVar10) {
        local_8 = local_8 + 1;
        if (local_c <= local_8) {
          bVar6 = InputEngine::OpenFile(param_1);
          if (CONCAT31(extraout_var_00,bVar6) == 0) {
            *(undefined1 *)(param_1 + 0x20) = 0xff;
            *(undefined4 *)(param_1 + 0x47f8) = 0;
            *(undefined4 *)(param_1 + 0x47f0) = *(undefined4 *)(param_1 + 0x47f4);
            goto LAB_00411bd5;
          }
          local_8 = *(uint **)(param_1 + 0x47f0);
          local_c = *(uint **)(param_1 + 0x47f4);
        }
        iVar10 = 0;
        uVar11 = *local_8;
      }
      *(uint *)(param_1 + 0x4804) = uVar11 & 1;
      if ((uVar11 & 1) != 0) {
        *(int *)(param_1 + 0x4808) = *(int *)(param_1 + 0x4808) + 1;
      }
      iVar10 = iVar10 + 1;
      uVar11 = uVar11 >> 1;
    }
    else {
      *(int *)(param_1 + 0x4808) = *(int *)(param_1 + 0x4808) + 1;
    }
  } while ((param_2 != 0) &&
          (bVar6 = MatchEngine::MatchWord(param_2,param_1 + 0x20), CONCAT31(extraout_var_01,bVar6) == 0));
  *(int *)(param_1 + 0x47f8) = iVar10;
  *(uint **)(param_1 + 0x47f0) = local_8;
  *(uint **)(param_1 + 0x47f4) = local_c;
LAB_00411bd5:
  return param_1 + 0x20;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411bdc  InputEngine::NextMatch   (1058 bytes)   [notes+analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). Huffman-decodes words of the current length and tests each against the MatchEngineSet
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
LAB_00411c9e:
    iVar7 = *(int *)(iVar2 + 0x1804 + (uVar14 & 0xff) * 4);
    if (iVar7 < 0x100) {
      iVar3 = *(int *)(iVar10 + iVar7 * 8);
      if (0x20 < iVar3 + iVar13) {
LAB_00411cdb:
        puVar1 = local_8 + 1;
        if (puVar1 < local_c) {
          uVar8 = *puVar1;
          iVar7 = *(int *)(iVar2 + 0x1804 +
                          ((uVar14 | uVar8 << (0x20U - (char)iVar13 & 0x1f)) & 0xff) * 4);
          local_8 = puVar1;
          if (iVar7 < 0x100) {
            iVar13 = *(int *)(iVar10 + iVar7 * 8) + -0x20 + iVar13;
            uVar14 = uVar8 >> ((byte)iVar13 & 0x1f);
            goto LAB_00411dcf;
          }
          iVar13 = iVar13 + -0x18;
          uVar14 = uVar8 >> ((byte)iVar13 & 0x1f);
        }
        else {
          iVar7 = 0x100;
        }
        goto joined_r0x00411d3f;
      }
      iVar13 = iVar13 + iVar3;
      uVar14 = uVar14 >> ((byte)iVar3 & 0x1f);
    }
    else {
      if (0x18 < iVar13) goto LAB_00411cdb;
      iVar13 = iVar13 + 8;
      uVar14 = uVar14 >> 8;
joined_r0x00411d3f:
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
LAB_00411dcf:
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
      goto LAB_00411c9e;
    }
    *pcVar9 = '\0';
    if ((char *)(param_1 + 0x20) == local_24) {
      *local_24 = -1;
      *(undefined4 *)(param_1 + 0x4808) = 0;
      *(undefined4 *)(param_1 + 0x4804) = 1;
      *(int *)(param_1 + 0x4800) = *(int *)(param_1 + 0x4800) + -1;
      *(int *)(param_1 + 0x47f8) = iVar13;
      *(uint **)(param_1 + 0x47f0) = local_8;
      *(uint **)(param_1 + 0x47f4) = local_c;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (2000 - local_20);
      return (char *)(param_1 + 0x20);
    }
    if (*(int *)(param_1 + 0x4800) == 2) {
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
LAB_00411fad:
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
      uVar8 = MatchEngineSet::EvalLogic(2,param_1 + 0x20,*(int *)(param_1 + 0x47fc),pbVar11,piVar6);
    }
    else {
      bVar5 = MatchEngine::MatchWord(iVar12,param_1 + 0x20);
      uVar8 = CONCAT31(extraout_var_01,bVar5);
    }
    if ((uVar8 != 0) || (local_20 = local_20 + -1, local_20 < 1)) goto LAB_00411fad;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00412000  MatchEngineSet::EvalLogic   (372 bytes, 2 ranges)   [notes+analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). Boolean VM over the logic bytecode; this is the 0x412000 address given in your notes
uint __cdecl MatchEngineSet::EvalLogic(int param_1,int param_2,int param_3,byte *param_4,int *param_5)

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
        if (param_1 == 0) {
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
          if (((local_8 != 0) && (param_1 == 2)) &&
             (bVar3 = MatchEngine::MatchWord(local_c,param_2), CONCAT31(extraout_var,bVar3) == 0)) {
            local_8 = 0;
          }
        }
      }
      if ((bVar5 & 8) != 0) {
        if (param_1 != 1) {
          local_8 = (uint)(local_8 == 0);
        }
        bVar5 = bVar5 & 0xf7;
      }
      if (((bVar5 == 1) && (local_8 != 0)) || ((bVar5 == 2 && (local_8 == 0)))) break;
      param_5 = piVar2;
      if (bVar5 == 5) {
        pbVar6 = pbVar6 + -1;
        if (((*pbVar6 & 8) != 0) && (param_1 != 1)) {
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
    if (((*pbVar6 & 8) != 0) && (param_1 != 1)) {
      local_8 = (uint)(local_8 == 0);
    }
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041217c  InputEngine::OpenFile   (288 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040a218. CreateFileA + seek to the saved offset; on ERROR_TOO_MANY_OPEN_FILES closes another engine's handle from the global list and retries
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
        goto LAB_0041223a;
      }
      DVar4 = GetLastError();
      puVar1 = DAT_004ecac8;
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
LAB_0041223a:
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
// 0x0041229c  InputEngine::GetLinkGroupIndex   (29 bytes)   [notes+analysis]
//   returns link_group_index-1 (+0x4808) when the has_links flag (+0x4804) is set, else -1
int __cdecl InputEngine::GetLinkGroupIndex(int param_1)

{
  if (*(int *)(param_1 + 0x4804) != 0) {
    return *(int *)(param_1 + 0x4808) + -1;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004122bc  InputEngine::GetAnnotation   (37 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040a338. returns the text following the display word's NUL, or NULL when empty. The 0x4122bc address in your notes is this function in TEA.exe
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
// 0x004122e4  FUN_004122e4   (77 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_004122e4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ecb0c);
  if (DAT_004ecb08 != '\0') {
    _vector_delete_ldtc_(0x519858,0x10,10,1,(undefined*)std::string::_dtor);
    DAT_004ecb08 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412334  FUN_00412334   (87 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00412372) */
int __cdecl FUN_00412334(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ecb14);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041238c  FUN_0041238c   (85 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined * __cdecl FUN_0041238c(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ecb5c);
  if (DAT_004ecb08 == '\0') {
    FUN_00412cf0((int *)&DAT_00519858,param_1,param_2);
    DAT_004ecb08 = DAT_004ecb08 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00519858;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412434  FUN_00412434   (230 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00412434(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ecb80);
  iVar3 = param_3 * 0x10 + param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(iVar3 + 8) + -4);
    piVar4 = std::string::__getRep(param_1,uVar2,uVar2);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar3 + 8),uVar2);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 8);
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041251c  FUN_0041251c   (788 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0041251c(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4ecbe0);
  std::string::string_from_cstr((int)local_14,param_2);
  iVar4 = 0;
  do {
    iVar5 = iVar4 * 0x10 + param_1;
    local_1c = (int *)0x0;
    iVar2 = *(int *)(*(int *)(iVar5 + 8) + -0xc);
    if (iVar2 == -1 || iVar2 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(iVar5 + 8) + -4);
      local_1c = std::string::__getRep(local_24,uVar1,uVar1);
      local_1c = local_1c + 3;
      memcpy(local_1c,*(undefined4 **)(iVar5 + 8),uVar1);
    }
    else {
      local_1c = *(int **)(iVar5 + 8);
      piVar3 = local_1c + -3;
      if (piVar3 != &DAT_00513d58) {
        *piVar3 = *piVar3 + 1;
      }
    }
    FUN_004cf384(iVar4 * 0x10 + param_1,(int)local_14);
    iVar2 = FUN_004dcbf8((char *)param_2,(char *)local_1c);
    if (iVar2 == 0) {
      if (local_1c == (int *)0x0) break;
      if (local_1c[-3] != -1) {
        piVar3 = local_1c + -3;
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) break;
      }
      operator_delete();
      local_1c = (int *)0x0;
      break;
    }
    FUN_004cf384((int)local_14,(int)local_24);
    if (local_1c != (int *)0x0) {
      if (local_1c[-3] != -1) {
        piVar3 = local_1c + -3;
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0041275b;
      }
      operator_delete();
      local_1c = (int *)0x0;
    }
LAB_0041275b:
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0041281a;
    }
    operator_delete();
  }
LAB_0041281a:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00412830  FUN_00412830   (1146 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00412830(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint local_158 [15];
  undefined4 local_11c;
  undefined4 local_10c;
  undefined4 local_fc;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int *local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int *local_d0;
  undefined1 *local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined1 *local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4eccac);
  local_70 = 0x14;
  iVar4 = 0;
  iVar3 = 1;
  FUN_004649b0((int)local_1c);
  local_64 = local_64 + 1;
  Persist::Persist(local_c,(int)local_1c,iVar3,iVar4);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar1 = (int *)(local_14 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1 + 1;
      }
      if (iVar3 != 0) goto LAB_004128fc;
    }
    local_84 = local_14 + -0xc;
    operator_delete();
    local_88 = 0;
    local_8c = local_1c;
    local_14 = 0;
    local_fc = 0;
  }
LAB_004128fc:
  local_70 = 8;
  if (*(int *)(param_1 + 0xa4) == 0) {
    pcVar2 = "FileDictionary";
  }
  else {
    pcVar2 = "FileCrossword";
  }
  if (*(int *)(*(int *)(param_1 + 8) + -4) == 0) goto LAB_00412a9b;
  local_70 = 0x2c;
  std::string::string_from_cstr((int)local_2c,*(uint **)(param_1 + 8));
  puVar5 = local_2c;
  local_64 = local_64 + 1;
  std::string::string_from_cstr((int)local_3c,(uint *)pcVar2);
  local_64 = local_64 + 1;
  FUN_0044ec78((int)local_c,(int)local_3c,(int)puVar5);
  local_64 = local_64 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar1 = (int *)(local_34 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1 + 1;
      }
      if (iVar3 != 0) goto LAB_00412a02;
    }
    local_a0 = local_34 + -0xc;
    local_a4 = local_34 + -0xc;
    operator_delete();
    local_a8 = 0;
    local_ac = local_3c;
    local_34 = 0;
    local_10c = 0;
  }
LAB_00412a02:
  local_70 = 8;
  local_64 = local_64 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar1 = (int *)(local_24 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1 + 1;
      }
      if (iVar3 != 0) goto LAB_00412a9b;
    }
    local_b0 = local_24 + -0xc;
    local_b4 = local_24 + -0xc;
    operator_delete();
    local_b8 = 0;
    local_bc = local_2c;
    local_24 = 0;
    local_11c = 0;
  }
LAB_00412a9b:
  iVar3 = 1;
  piVar1 = (int *)(param_1 + 0x18);
  do {
    FUN_004e0344((undefined1 *)local_158,&DAT_004ecb45 /* "%s%d" */);
    if (*(int *)(*piVar1 + -4) != 0) {
      local_70 = 0x50;
      std::string::string_from_cstr((int)local_4c,(uint *)*piVar1);
      local_64 = local_64 + 1;
      puVar5 = local_4c;
      std::string::string_from_cstr((int)local_5c,local_158);
      local_64 = local_64 + 1;
      FUN_0044ec78((int)local_c,(int)local_5c,(int)puVar5);
      local_64 = local_64 + -1;
      if (local_54 != 0) {
        if (*(int *)(local_54 + -0xc) != -1) {
          local_d0 = (int *)(local_54 + -0xc);
          if (local_d0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_d0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_d0 = *local_d0 + -1;
            iVar4 = *local_d0 + 1;
          }
          if (iVar4 != 0) goto LAB_00412bc6;
        }
        local_d4 = local_54 + -0xc;
        local_d8 = local_54 + -0xc;
        operator_delete();
        local_dc = 0;
        local_e0 = local_5c;
        local_54 = 0;
      }
LAB_00412bc6:
      local_70 = 8;
      local_64 = local_64 + -1;
      if (local_44 != 0) {
        if (*(int *)(local_44 + -0xc) != -1) {
          local_e4 = (int *)(local_44 + -0xc);
          if (local_e4 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_e4 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_e4 = *local_e4 + -1;
            iVar4 = *local_e4 + 1;
          }
          if (iVar4 != 0) goto LAB_00412c7b;
        }
        local_e8 = local_44 + -0xc;
        local_ec = local_44 + -0xc;
        operator_delete();
        local_f0 = 0;
        local_f4 = local_4c;
        local_44 = 0;
      }
    }
LAB_00412c7b:
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 4;
    if (9 < iVar3) {
      local_64 = local_64 + -1;
      Persist::_dtor((int)local_c,2);
      *in_FS_OFFSET = local_80;
      return;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00412cf0  FUN_00412cf0   (1260 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00412e4d) */
/* WARNING: Removing unreachable block (ram,0x00412f6e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FUN_00412cf0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint local_150 [15];
  undefined4 local_114;
  undefined *local_104;
  undefined4 local_f4;
  undefined1 *local_ec;
  undefined4 local_e8;
  undefined *local_e4;
  undefined *local_e0;
  undefined1 *local_dc;
  undefined4 local_d8;
  undefined *local_d4;
  undefined *local_d0;
  int *local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int *local_b8;
  undefined1 *local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  uint *local_94;
  undefined1 *local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  undefined *local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  undefined *local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4ecdb8);
  local_70 = 8;
  _vector_new_ldtc_(param_1,0x10,10,1,(undefined*)FUN_00412334);
  local_64 = local_64 + 10;
  param_1[0x28] = param_2;
  param_1[0x29] = param_3;
  local_70 = 0x20;
  iVar3 = 0;
  iVar2 = 0;
  FUN_004649b0((int)local_2c);
  local_64 = local_64 + 1;
  Persist::Persist(local_c,(int)local_2c,iVar2,iVar3);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar1 = (int *)(local_24 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00412e08;
    }
    local_84 = local_24 + -0xc;
    local_88 = local_24 + -0xc;
    operator_delete();
    local_8c = 0;
    local_90 = local_2c;
    local_24 = 0;
    local_f4 = 0;
  }
LAB_00412e08:
  if (param_1[0x29] == 0) {
    local_94 = (uint *)"FileDictionary";
  }
  else {
    local_94 = (uint *)"FileCrossword";
  }
  local_14 = &DAT_00513d64;
  local_104 = &DAT_00513d64;
  local_64 = local_64 + 1;
  puVar4 = local_1c;
  local_70 = 0x50;
  std::string::string_from_cstr((int)local_3c,local_94);
  local_64 = local_64 + 1;
  Persist::QueryValueSized((int)local_c,(int)local_3c,(int)puVar4);
  local_64 = local_64 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar1 = (int *)(local_34 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00412f16;
    }
    local_a0 = local_34 + -0xc;
    local_a4 = local_34 + -0xc;
    operator_delete();
    local_a8 = 0;
    local_ac = local_3c;
    local_34 = 0;
    local_114 = 0;
  }
LAB_00412f16:
  local_70 = 0x14;
  FUN_004cf384((int)param_1,(int)local_1c);
  iVar2 = 1;
  do {
    FUN_004e0344((undefined1 *)local_150,&DAT_004ecb45 /* "%s%d" */);
    local_44 = &DAT_00513d64;
    local_64 = local_64 + 1;
    puVar4 = local_4c;
    local_70 = 0x8c;
    std::string::string_from_cstr((int)local_5c,local_150);
    local_64 = local_64 + 1;
    Persist::QueryValueSized((int)local_c,(int)local_5c,(int)puVar4);
    local_64 = local_64 + -1;
    if (local_54 != 0) {
      if (*(int *)(local_54 + -0xc) != -1) {
        local_b8 = (int *)(local_54 + -0xc);
        if (local_b8 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (local_b8 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *local_b8 = *local_b8 + -1;
          iVar3 = *local_b8 + 1;
        }
        if (iVar3 != 0) goto LAB_00413055;
      }
      local_bc = local_54 + -0xc;
      local_c0 = local_54 + -0xc;
      operator_delete();
      local_c4 = 0;
      local_c8 = local_5c;
      local_54 = 0;
    }
LAB_00413055:
    local_70 = 0x80;
    FUN_004cf384((int)(param_1 + iVar2 * 4),(int)local_4c);
    local_64 = local_64 + -1;
    if (local_44 != (undefined *)0x0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        local_cc = (int *)(local_44 + -0xc);
        if (local_cc == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (local_cc == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *local_cc = *local_cc + -1;
          iVar3 = *local_cc + 1;
        }
        if (iVar3 != 0) goto LAB_00413115;
      }
      local_d0 = local_44 + -0xc;
      local_d4 = local_44 + -0xc;
      operator_delete();
      local_d8 = 0;
      local_dc = local_4c;
      local_44 = (undefined *)0x0;
    }
LAB_00413115:
    local_70 = 0x14;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  local_64 = local_64 + -1;
  if (local_14 != (undefined *)0x0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar1 = (int *)(local_14 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_004131ac;
    }
    local_e0 = local_14 + -0xc;
    local_e4 = local_14 + -0xc;
    operator_delete();
    local_e8 = 0;
    local_ec = local_1c;
    local_14 = (undefined *)0x0;
  }
LAB_004131ac:
  local_70 = 0x14;
  local_64 = local_64 + -1;
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_80;
  return param_1;
}

} // namespace tea
