// TSBuild.exe — runtime / library code "code_0x00470000"
// 355 functions, 0x0047008c..0x0047370a. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0047008c  FUN_0047008c   (15 bytes)   [unnamed]
void __cdecl FUN_0047008c(uint *param_1)

{
  FUN_0046ff70(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047009c  FUN_0047009c   (23 bytes)   [unnamed]
void __cdecl FUN_0047009c(uint *param_1)

{
  FUN_0046ff70(param_1);
  FUN_0047041c(1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470140  vshared_470140   (16 bytes)   [rtti:vtable shared-virtual-stub]
//   in vtables of 10 classes across unrelated hierarchies (OWL::TOpenSaveDialog, DictionaryMaintainer, OWL::TStreamer, OWL::TAppDictImp, …)
void __stdcall vshared_470140(void)

{
  FUN_0047009c((uint *)"Pure virtual function called");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470150  FUN_00470150   (38 bytes)   [unnamed]
void __cdecl FUN_00470150(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < DAT_0048d87c; uVar2 = uVar2 + 1) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470178  FUN_00470178   (482 bytes)   [unnamed]
void __cdecl FUN_00470178(undefined1 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_c;
  undefined1 *local_8;
  
  do {
    if (param_2 < 3) {
      if (param_2 == 2) {
        puVar4 = param_1 + DAT_0048d87c;
        iVar1 = ((code *)DAT_0048d878)();
        if (0 < iVar1) {
          FUN_00470150(param_1,puVar4);
        }
      }
      return;
    }
    puVar4 = param_1 + (param_2 - 1) * DAT_0048d87c;
    puVar3 = param_1 + (param_2 >> 1) * DAT_0048d87c;
    iVar1 = ((code *)DAT_0048d878)();
    if (0 < iVar1) {
      FUN_00470150(puVar3,puVar4);
    }
    iVar1 = ((code *)DAT_0048d878)();
    if (iVar1 < 1) {
      iVar1 = ((code *)DAT_0048d878)();
      if (0 < iVar1) {
        FUN_00470150(param_1,puVar4);
      }
    }
    else {
      FUN_00470150(puVar3,param_1);
    }
    if (param_2 == 3) {
      FUN_00470150(param_1,puVar3);
      return;
    }
    puVar3 = param_1 + DAT_0048d87c;
    local_8 = puVar3;
    do {
      while (iVar1 = ((code *)DAT_0048d878)(), iVar1 < 1) {
        if (iVar1 == 0) {
          FUN_00470150(puVar3,local_8);
          local_8 = local_8 + DAT_0048d87c;
        }
        if (puVar4 <= puVar3) goto LAB_004702bf;
        puVar3 = puVar3 + DAT_0048d87c;
      }
      for (; puVar3 < puVar4; puVar4 = puVar4 + -DAT_0048d87c) {
        iVar1 = ((code *)DAT_0048d878)();
        if (-1 < iVar1) {
          FUN_00470150(puVar3,puVar4);
          if (iVar1 != 0) {
            puVar3 = puVar3 + DAT_0048d87c;
            puVar4 = puVar4 + -DAT_0048d87c;
          }
          break;
        }
      }
    } while (puVar3 < puVar4);
LAB_004702bf:
    iVar1 = ((code *)DAT_0048d878)();
    if (iVar1 < 1) {
      puVar3 = puVar3 + DAT_0048d87c;
    }
    puVar4 = param_1;
    for (local_c = puVar3 + -DAT_0048d87c; (puVar4 < local_8 && (local_8 <= local_c));
        local_c = local_c + -DAT_0048d87c) {
      FUN_00470150(puVar4,local_c);
      puVar4 = puVar4 + DAT_0048d87c;
    }
    uVar2 = (uint)((int)puVar3 - (int)local_8) / DAT_0048d87c;
    param_2 = (uint)(param_1 + (param_2 * DAT_0048d87c - (int)puVar3)) / DAT_0048d87c;
    if (param_2 < uVar2) {
      FUN_00470178(puVar3,param_2);
      param_2 = uVar2;
    }
    else {
      FUN_00470178(param_1,uVar2);
      param_1 = puVar3;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0047035c  FUN_0047035c   (42 bytes)   [unnamed]
void __cdecl FUN_0047035c(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  (*(int *)&DAT_0048d87c) = param_3;
  if (param_3 != 0) {
    (*(undefined4 *)&DAT_0048d878) = param_4;
    FUN_00470178(param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470388  FUN_00470388   (20 bytes)   [unnamed]
void __stdcall FUN_00470388(void)

{
  FUN_0046ff70((uint *)"Abnormal program termination");
  FUN_0047041c(3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047039c  FUN_0047039c   (14 bytes)   [unnamed]
void __stdcall FUN_0047039c(void)

{
  FUN_00470f04(0x16);
  FUN_00470388();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004703ac  FUN_004703ac   (1 bytes)   [unnamed]
void __stdcall FUN_004703ac(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004703b0  FUN_004703b0   (81 bytes)   [unnamed]
void __cdecl FUN_004703b0(int param_1,int param_2,UINT param_3)

{
  if (param_1 == 0) {
    if (DAT_0048a8f4 != (code *)0x0) {
      ((code *)DAT_0048a8f4)();
    }
    FUN_00471060();
    (*(code *)PTR_FUN_0048a8f8)();
  }
  else {
    DAT_0048a8f4 = (undefined*)((code *)(undefined*)(0x0));
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_0048a8fc)();
      (*(code *)PTR_FUN_0048a900)();
    }
    FUN_00470f74(param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470404  FUN_00470404   (21 bytes)   [unnamed]
void __cdecl FUN_00470404(UINT param_1)

{
  FUN_004703b0(0,0,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047041c  FUN_0047041c   (21 bytes)   [unnamed]
void __cdecl FUN_0047041c(UINT param_1)

{
  FUN_004703b0(1,0,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470454  FUN_00470454   (87 bytes)   [unnamed]
char * __cdecl FUN_00470454(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  pcVar1 = strlen(param_1);
  piVar3 = DAT_0048d894;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    for (; (*piVar3 != 0 &&
           ((iVar2 = FUN_0046fca0((byte *)*piVar3,(byte *)param_1,(int)pcVar1), iVar2 != 0 ||
            (pcVar1[*piVar3] != '=')))); piVar3 = piVar3 + 1) {
    }
    if (*piVar3 == 0) {
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = pcVar1 + *piVar3 + 1;
    }
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004704ac  FUN_004704ac   (26 bytes)   [unnamed]
void __cdecl FUN_004704ac(undefined4 *param_1,undefined4 *param_2)

{
  PTR_FUN_0048a9b4 = (undefined *)*param_1;
  PTR_FUN_0048a9b8 = (undefined *)*param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004704c8  FUN_004704c8   (17 bytes)   [unnamed]
void __cdecl FUN_004704c8(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004704dc  FUN_004704dc   (17 bytes)   [unnamed]
void __cdecl FUN_004704dc(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004704f0  FUN_004704f0   (39 bytes)   [unnamed]
void __cdecl FUN_004704f0(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  PTR_FUN_0048a904 = param_1;
  PTR_LAB_0048a908 = param_2;
  PTR_FUN_0048a90c = param_3;
  PTR_LAB_0048a910 = param_4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004705d4  FUN_004705d4   (176 bytes)   [unnamed]
void __cdecl FUN_004705d4(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (DAT_0048d8b8 == DAT_0048d884) {
    DAT_0048d884 = DAT_0048d884 + 0x10;
    DAT_0048d880 = FUN_00456ea4();
    if (DAT_0048d880 == 0) {
      FUN_0047009c((uint *)"No space for command line argument vector");
    }
  }
  puVar1 = param_1;
  if (param_2 != 0) {
    strlen(param_1);
    puVar1 = (uint *)malloc();
    if (puVar1 == (uint *)0x0) {
      FUN_0047009c((uint *)"No space for command line argument");
    }
    uVar2 = 0xffffffff;
    do {
      puVar4 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      puVar4 = (uint *)((int)param_1 + 1);
      uVar3 = *param_1;
      param_1 = puVar4;
    } while ((char)uVar3 != '\0');
    uVar2 = ~uVar2;
    puVar4 = (uint *)((int)puVar4 - uVar2);
    puVar5 = puVar1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)puVar5 = (char)*puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
      puVar5 = (uint *)((int)puVar5 + 1);
    }
  }
  *(uint **)(DAT_0048d880 + DAT_0048d8b8 * 4) = puVar1;
  DAT_0048d8b8 = DAT_0048d8b8 + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470684  FUN_00470684   (344 bytes)   [unnamed]
undefined4 __cdecl FUN_00470684(undefined4 param_1,uint *param_2,undefined *param_3)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  undefined1 *local_c;
  uint *local_8;
  
  local_8 = param_2;
  (*(code *)param_3)();
  for (; ((char)*local_8 == ' ' || ((char)*local_8 == '\t')); local_8 = (uint *)((int)local_8 + 1))
  {
  }
  if ((char)*local_8 == '\"') {
    do {
      puVar3 = local_8;
      local_8 = (uint *)((int)puVar3 + 1);
      if (*(char *)local_8 == '\"') break;
    } while (*(char *)local_8 != '\0');
    if (*(char *)local_8 == '\"') {
      local_8 = (uint *)((int)puVar3 + 2);
    }
  }
  else {
    for (; ((cVar1 = (char)*local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'));
        local_8 = (uint *)((int)local_8 + 1)) {
    }
  }
  strlen(local_8);
  DAT_0048d88c = (undefined1 *)malloc();
  local_c = DAT_0048d88c;
  if (DAT_0048d88c == (undefined1 *)0x0) {
    FUN_0047009c((uint *)"No space for copy of command line");
  }
  while( true ) {
    if ((char)*local_8 == '\0') {
      return 1;
    }
    bVar2 = false;
    for (; ((char)*local_8 == ' ' || ((char)*local_8 == '\t')); local_8 = (uint *)((int)local_8 + 1)
        ) {
    }
    if ((char)*local_8 == '\0') break;
    while (((cVar1 = (char)*local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'))) {
      if (cVar1 == '\"') {
        local_8 = (uint *)((int)local_8 + 1);
        while (((char)*local_8 != '\"' && ((char)*local_8 != '\0'))) {
          FUN_004707f8((int *)&local_c,(int *)&local_8);
        }
        if ((char)*local_8 == '\"') {
          local_8 = (uint *)((int)local_8 + 1);
        }
      }
      else {
        if (((char)*local_8 == '*') || ((char)*local_8 == '?')) {
          bVar2 = true;
        }
        FUN_004707f8((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_0048a9b4)();
    }
    else {
      (*(code *)param_3)();
    }
    if ((char)*local_8 == '\0') {
      return 1;
    }
    local_8 = (uint *)((int)local_8 + 1);
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004707f8  FUN_004707f8   (113 bytes)   [unnamed]
void __cdecl FUN_004707f8(int *param_1,int *param_2)

{
  byte bVar1;
  
  if ((*(char *)*param_2 == '\\') && (((char *)*param_2)[1] == '\"')) {
    *(undefined1 *)*param_1 = 0x22;
    *param_2 = *param_2 + 2;
  }
  else if ((DAT_0048a968 == 0) || ((*(char *)*param_2 != '\\' || (((char *)*param_2)[1] != '\\'))))
  {
    bVar1 = *(byte *)*param_2;
    if ((((&DAT_0048d651)[bVar1] & 4) != 0) && (((byte *)*param_2)[1] != 0)) {
      *(byte *)*param_1 = bVar1;
      *param_2 = *param_2 + 1;
      *param_1 = *param_1 + 1;
    }
    *(undefined1 *)*param_1 = *(undefined1 *)*param_2;
    *param_2 = *param_2 + 1;
  }
  else {
    *(undefined1 *)*param_1 = 0x5c;
    *param_2 = *param_2 + 2;
  }
  *param_1 = *param_1 + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047086c  FUN_0047086c   (403 bytes)   [unnamed]
undefined4 __cdecl FUN_0047086c(undefined4 param_1,short *param_2,undefined *param_3)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  undefined2 *local_c;
  short *local_8;
  
  local_8 = param_2;
  (*(code *)param_3)();
  for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
  }
  if (*local_8 == 0x22) {
    do {
      psVar3 = local_8;
      local_8 = psVar3 + 1;
      if (*local_8 == 0x22) break;
    } while (*local_8 != 0);
    if (*local_8 == 0x22) {
      local_8 = psVar3 + 2;
    }
  }
  else {
    for (; ((sVar1 = *local_8, sVar1 != 0x20 && (sVar1 != 9)) && (sVar1 != 0));
        local_8 = local_8 + 1) {
    }
  }
  FUN_00467b50(local_8);
  DAT_0048d890 = (undefined2 *)malloc();
  local_c = DAT_0048d890;
  if (DAT_0048d890 == (undefined2 *)0x0) {
    FUN_0047009c((uint *)"No space for copy of command line");
  }
  while( true ) {
    if (*local_8 == 0) {
      return 1;
    }
    bVar2 = false;
    for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
    }
    if (*local_8 == 0) break;
    while (((sVar1 = *local_8, sVar1 != 0x20 && (sVar1 != 9)) && (sVar1 != 0))) {
      if (sVar1 == 0x22) {
        local_8 = local_8 + 1;
        while ((*local_8 != 0x22 && (*local_8 != 0))) {
          FUN_00470a1c((int *)&local_c,(int *)&local_8);
        }
        if (*local_8 == 0x22) {
          local_8 = local_8 + 1;
        }
      }
      else {
        if ((*local_8 == 0x2a) || (*local_8 == 0x3f)) {
          bVar2 = true;
        }
        FUN_00470a1c((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_0048a9b8)();
    }
    else {
      (*(code *)param_3)();
    }
    if (*local_8 == 0) {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470a1c  FUN_00470a1c   (92 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_00470a1c(int *param_1,int *param_2)

{
  if ((*(short *)*param_2 == 0x5c) && (((short *)*param_2)[1] == 0x22)) {
    *(undefined2 *)*param_1 = 0x22;
    *param_2 = *param_2 + 4;
  }
  else if ((DAT_0048a968 == 0) || ((*(short *)*param_2 != 0x5c || (((short *)*param_2)[1] != 0x5c)))
          ) {
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    *param_2 = *param_2 + 2;
  }
  else {
    *(undefined2 *)*param_1 = 0x5c;
    *param_2 = *param_2 + 4;
  }
  *param_1 = *param_1 + 2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470b10  FUN_00470b10   (330 bytes)   [unnamed]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __stdcall FUN_00470b10(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if ((*(undefined4 * *)&DAT_0048d894) == (undefined4 *)0x0) {
    if (((*(uint * *)&DAT_0048d8b4) == (uint *)0x0) &&
       ((*(uint * *)&DAT_0048d8b4) = (uint *)GetEnvironmentStrings(), (*(uint * *)&DAT_0048d8b4) == (uint *)0x0)) {
      FUN_0047009c((uint *)"GetEnvironmentStrings failed");
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = (*(uint * *)&DAT_0048d8b4);
    while (pcVar1 = strlen(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_0048d898 = (uint *)malloc();
    if (DAT_0048d898 == (uint *)0x0) {
      return 0;
    }
    memcpy(DAT_0048d898,(*(uint * *)&DAT_0048d8b4),(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = (*(undefined4 * *)&DAT_0048d894); (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = strlen((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_0048d89c = iVar8 + 4;
  puVar2 = calloc(iVar8 + 5,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = (*(undefined4 * *)&DAT_0048d894);
    puVar4 = DAT_0048d898;
    puVar7 = puVar2;
    if ((*(undefined4 * *)&DAT_0048d894) == (undefined4 *)0x0) {
      while (pcVar6 = strlen(puVar4), pcVar6 != (char *)0x0) {
        *puVar7 = puVar4;
        puVar4 = (uint *)((int)puVar4 + (int)(pcVar6 + 1));
        puVar7 = puVar7 + 1;
      }
    }
    else {
      for (; (uint *)*puVar5 != (uint *)0x0; puVar5 = puVar5 + 1) {
        pcVar6 = strlen((uint *)*puVar5);
        if (pcVar6 == (char *)0x0) {
          puVar7 = puVar7 + -1;
        }
        else {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
    }
    if ((*(undefined4 * *)&DAT_0048d894) != (undefined4 *)0x0) {
      free();
    }
    uVar3 = 1;
    (*(undefined4 * *)&DAT_0048d894) = puVar2;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470c7c  FUN_00470c7c   (31 bytes)   [unnamed]
int __cdecl FUN_00470c7c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_0048aa5c;
  do {
    if (param_1 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470c9c  FUN_00470c9c   (455 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_00470c9c(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_c;
  
  uVar3 = 0;
  local_c = 0;
  iVar2 = *param_1;
  if (iVar2 < -0x3fffff6f) {
    if (iVar2 == -0x3fffff70) {
      iVar2 = 2;
      uVar3 = 1;
    }
    else if (iVar2 < -0x3ffffffa) {
      if (iVar2 == -0x3ffffffb) {
        iVar2 = 3;
      }
      else if (iVar2 == -0x7ffffffd) {
        iVar2 = 1;
      }
      else {
        if (iVar2 != -0x7ffffffc) {
          return 1;
        }
        iVar2 = 1;
      }
    }
    else if (iVar2 == -0x3fffffe3) {
      iVar2 = 1;
    }
    else {
      if (iVar2 != -0x3fffff72) {
        return 1;
      }
      iVar2 = 2;
      uVar3 = 4;
    }
  }
  else {
    switch(iVar2) {
    case -0x3fffff6f:
      iVar2 = 2;
      uVar3 = 8;
      break;
    case -0x3fffff6e:
      iVar2 = 2;
      uVar3 = 0x49;
      break;
    case -0x3fffff6d:
      iVar2 = 2;
      uVar3 = 0x10;
      break;
    case -0x3fffff6c:
      iVar2 = 2;
      break;
    default:
      return 1;
    case -0x3fffff6a:
      iVar2 = 1;
    }
  }
  pcVar1 = *(code **)(&DAT_0048aa34 + iVar2 * 4);
  if (pcVar1 == (code *)0x1) {
    local_c = 0;
  }
  else if (pcVar1 == (code *)0x0) {
    local_c = 1;
  }
  else {
    *(undefined4 *)(&DAT_0048aa34 + iVar2 * 4) = 0;
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 2)) {
      FUN_0046dbf0();
      FUN_0046dc04(DAT_0048a634,7999);
      (*pcVar1)();
      *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & ~uVar3;
    }
    else {
      (*pcVar1)();
    }
  }
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470e7c  FUN_00470e7c   (37 bytes)   [unnamed]
undefined4 __stdcall FUN_00470e7c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 0x15;
  }
  FUN_00470f04(iVar1);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470ea4  FUN_00470ea4   (93 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00470ea4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0048aa30 == '\0') {
    DAT_0048d4a0 = (undefined*)FUN_00470c9c;
    SetConsoleCtrlHandler(FUN_00470e7c,1);
    DAT_0048aa30 = '\x01';
  }
  iVar2 = FUN_00470c7c(param_1);
  if (iVar2 == -1) {
    _DAT_0048a878 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_0048aa34 + iVar2 * 4);
  *(undefined4 *)(&DAT_0048aa34 + iVar2 * 4) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470f04  FUN_00470f04   (112 bytes)   [unnamed]
undefined4 __cdecl FUN_00470f04(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar2 = FUN_00470c7c(param_1);
  if (iVar2 == -1) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(&DAT_0048aa34 + iVar2 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < param_1 - 0x10U) && (param_1 != 0x14)) {
          if (param_1 == 0x16) {
            FUN_00470388();
          }
          else {
            FUN_0047041c(3);
          }
        }
      }
      else {
        *(undefined4 *)(&DAT_0048aa34 + iVar2 * 4) = 0;
        (*pcVar1)(pcVar1,(&DAT_0048aa84)[iVar2],iVar4,param_1,(&DAT_0048aa84)[iVar2],0);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470f74  FUN_00470f74   (12 bytes)   [unnamed]
void __stdcall FUN_00470f74(UINT param_1)

{
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00470f84  FUN_00470f84   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_00470f84(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470f88  FUN_00470f88   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_00470f88(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470f8c  FUN_00470f8c   (210 bytes)   [unnamed]
void __cdecl FUN_00470f8c(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 0) {
    local_10 = 0x100;
    local_14 = 1;
    iVar4 = 0;
  }
  else {
    local_10 = -1;
    local_14 = -1;
    iVar4 = 0xff;
  }
  for (; iVar4 != local_10; iVar4 = iVar4 + local_14) {
    local_18 = param_1;
    for (local_c = 0; local_18 = local_18 + 1, local_c < *param_1; local_c = local_c + 1) {
      puVar1 = (uint *)*local_18;
      if (param_2 == 0) {
        uVar2 = puVar1[1];
        for (uVar5 = *puVar1; uVar5 < uVar2; uVar5 = uVar5 + 6) {
          if ((char)iVar4 == *(char *)(uVar5 + 1)) {
            (**(code **)(uVar5 + 2))();
          }
        }
      }
      else {
        uVar5 = puVar1[2];
        uVar2 = puVar1[3];
        while (uVar3 = uVar2, uVar2 = uVar3 - 6, uVar5 <= uVar2) {
          if ((char)iVar4 == *(char *)(uVar3 - 5)) {
            (**(code **)(uVar3 - 4))();
          }
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471060  FUN_00471060   (107 bytes)   [unnamed]
void __stdcall FUN_00471060(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_0048aa94 == 0) {
    DAT_0048aa94 = 1;
    FUN_00470f8c((int *)&DAT_0048d8d8,1);
    FUN_00470f8c((int *)&DAT_0048d8bc,1);
    piVar1 = (int *)FUN_00470f88();
    if (piVar1 != (int *)0x0) {
      FUN_00470f8c(piVar1,1);
      piVar2 = piVar1;
      for (iVar3 = 0; piVar2 = piVar2 + 1, iVar3 < *piVar1; iVar3 = iVar3 + 1) {
        (**(code **)(*piVar2 + 0x18))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004710cc  FUN_004710cc   (387 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004710cc(int param_1)

{
  char cVar1;
  int *piVar2;
  UINT UVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int local_10;
  undefined1 local_c [8];
  
  (*(uint *)&DAT_0048aa90) = *(uint *)(param_1 + 0x10) & 1;
  FUN_0046dd94();
  FUN_0046e1dc(*(undefined **)(param_1 + 0x1c),*(undefined **)(param_1 + 0x20));
  FUN_004697a4(*(undefined **)(param_1 + 0x28));
  FUN_004697b4(*(undefined4 **)(param_1 + 0x44));
  _DAT_0048d8d8 = 1;
  _DAT_0048d8dc = param_1;
  DAT_0048d8c4 = local_c;
  FUN_00468a18();
  DAT_0048d8b4 = GetEnvironmentStrings();
  DAT_0048d8b0 = GetCommandLineA();
  FUN_004704ac(*(undefined4 **)(param_1 + 0x2c),*(undefined4 **)(param_1 + 0x30));
  FUN_004704f0(*(undefined **)(param_1 + 0x34),*(undefined **)(param_1 + 0x38),
               *(undefined **)(param_1 + 0x3c),*(undefined **)(param_1 + 0x40));
  piVar2 = (int *)FUN_00470f84();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    FUN_00470f8c(piVar2,0);
    piVar5 = piVar2;
    for (local_10 = 0; piVar5 = piVar5 + 1, local_10 < *piVar2; local_10 = local_10 + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  FUN_00470f8c((int *)&DAT_0048d8d8,0);
  pcVar6 = DAT_0048d8b0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    UVar3 = (**(code **)(param_1 + 0x18))();
    FUN_00470404(UVar3);
  }
  else {
    for (; (*pcVar6 == ' ' || (*pcVar6 == '\t')); pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      cVar4 = '\"';
      pcVar6 = pcVar6 + 1;
    }
    else {
      cVar4 = ' ';
    }
    for (; ((cVar1 = *pcVar6, cVar1 != '\0' && (cVar4 != cVar1)) && (cVar1 != '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      pcVar6 = pcVar6 + 1;
    }
    for (; ((cVar4 = *pcVar6, cVar4 != '\0' && (cVar4 == ' ')) || (cVar4 == '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    FUN_00471250();
    GetModuleHandleA((LPCSTR)0x0);
    UVar3 = (**(code **)(param_1 + 0x18))();
    FUN_00470404(UVar3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471250  FUN_00471250   (32 bytes)   [unnamed]
WORD __stdcall FUN_00471250(void)

{
  _STARTUPINFOA _Stack_44;
  
  GetStartupInfoA(&_Stack_44);
  if (((byte)_Stack_44.dwFlags & 1) == 0) {
    _Stack_44.wShowWindow = 10;
  }
  return _Stack_44.wShowWindow;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471278  FUN_00471278   (16 bytes)   [unnamed]
void __stdcall FUN_00471278(DWORD param_1)

{
  TlsFree(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471288  FUN_00471288   (16 bytes)   [unnamed]
void __stdcall FUN_00471288(DWORD param_1)

{
  TlsGetValue(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471298  FUN_00471298   (20 bytes)   [unnamed]
void __stdcall FUN_00471298(DWORD param_1,LPVOID param_2)

{
  TlsSetValue(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004712ac  FUN_004712ac   (7 bytes)   [unnamed]
void __stdcall FUN_004712ac(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004712b4  FUN_004712b4   (7 bytes)   [unnamed]
void __stdcall FUN_004712b4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004712c8  FUN_004712c8   (456 bytes)   [unnamed]
char * __stdcall FUN_004712c8(void)

{
  char cVar1;
  undefined *puVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int local_bc;
  WCHAR local_68;
  short local_22;
  WCHAR local_14;
  
  puVar3 = (uint *)FUN_00470454((uint *)&DAT_0048aaa8);
  if ((((((puVar3 == (uint *)0x0) || (pcVar4 = strlen(puVar3), pcVar4 < (char *)0x4)) ||
        (iVar5 = FUN_0046fbd4((int)(char)*puVar3), iVar5 == 0)) ||
       ((iVar5 = FUN_0046fbd4((int)*(char *)((int)puVar3 + 1)), iVar5 == 0 ||
        (iVar5 = FUN_0046fbd4((int)*(char *)((int)puVar3 + 2)), iVar5 == 0)))) ||
      ((cVar1 = *(char *)((int)puVar3 + 3), cVar1 != '-' &&
       ((cVar1 != '+' && (iVar5 = FUN_0046fc14((int)cVar1), iVar5 == 0)))))) ||
     ((iVar5 = FUN_0046fc14((int)*(char *)((int)puVar3 + 3)), iVar5 == 0 &&
      (iVar5 = FUN_0046fc14((int)(char)puVar3[1]), iVar5 == 0)))) {
    GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&local_bc);
    if (local_22 == 0) {
      (*(uint *)&DAT_0048aa9c) = 0;
    }
    else {
      (*(uint *)&DAT_0048aa9c) = (uint)(local_14 != L'\0');
    }
    DAT_0048aa98 = (local_bc + local_68) * 0x3c;
    *PTR_DAT_0048aaa0 = DAT_0048aaab;
    puVar2 = PTR_DAT_0048aaa4;
    *PTR_DAT_0048aaa4 = DAT_0048aaac;
    return puVar2;
  }
  memset((undefined4 *)PTR_DAT_0048aaa4,0,4);
  FUN_0046fc4c(PTR_DAT_0048aaa0,(byte *)puVar3,3);
  PTR_DAT_0048aaa0[3] = 0;
  iVar5 = FUN_0046db78((char *)((int)puVar3 + 3));
  iVar7 = 3;
  pcVar4 = (char *)((int)puVar3 + 3);
  DAT_0048aa98 = iVar5 * 0xe10;
  (*(uint *)&DAT_0048aa9c) = 0;
  while( true ) {
    if (*pcVar4 == '\0') {
      return (char *)0x0;
    }
    iVar5 = FUN_0046fbd4((int)*pcVar4);
    if (iVar5 != 0) break;
    iVar7 = iVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
  pcVar6 = strlen((uint *)(iVar7 + (int)puVar3));
  if (pcVar6 < (char *)0x3) {
    return pcVar6;
  }
  iVar5 = FUN_0046fbd4((int)pcVar4[1]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  iVar5 = FUN_0046fbd4((int)pcVar4[2]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  FUN_0046fc4c(PTR_DAT_0048aaa4,(byte *)(iVar7 + (int)puVar3),3);
  puVar2 = PTR_DAT_0048aaa4;
  PTR_DAT_0048aaa4[3] = 0;
  (*(uint *)&DAT_0048aa9c) = 1;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004714c3  FUN_004714c3   (6 bytes)   [unnamed]
void FUN_004714c3(undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x004714c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004714ca  FUN_004714ca   (74 bytes)   [unnamed]
int __cdecl FUN_004714ca(uint param_1)

{
  int iVar1;
  
  iVar1 = malloc();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 < 0x81) {
    iVar1 = FUN_00401140();
    if ((*(byte *)(iVar1 + 4) & 1) == 0) goto LAB_004714f7;
  }
  FUN_0047039c();
LAB_004714f7:
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  iVar1 = FUN_00401140();
  return *(int *)(iVar1 + 0x14);
}

// ----------------------------------------------------------------------------------------------------
// 0x00471514  FUN_00471514   (45 bytes)   [unnamed]
void __cdecl FUN_00471514(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  if (param_1 == *(int *)(iVar1 + 0x14)) {
    iVar1 = FUN_00401140();
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
    return;
  }
  free();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471541  FUN_00471541   (198 bytes)   [unnamed]
undefined4 __cdecl FUN_00471541(int *param_1,undefined4 param_2,int *param_3,byte param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = FUN_004681e0(param_1,param_3,0,param_2);
  if (iVar3 != 0) {
    return 1;
  }
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = *(ushort *)(param_3 + 1);
  if ((uVar2 & 0x20) != 0) {
    iVar3 = FUN_004681e0(param_1,(int *)param_3[2],1,param_2);
    if (iVar3 != 0) {
      return 1;
    }
    uVar2 = *(ushort *)((int *)param_3[2] + 1);
    if ((uVar2 & 0x10) == 0) {
      return 0;
    }
    iVar3 = FUN_004681e0(param_1,(int *)param_3[2],0,param_2);
    if (iVar3 != 0) {
      return 1;
    }
  }
  if ((uVar2 & 0x10) != 0) {
    if ((param_4 & 1) != 0) {
      return 1;
    }
    if ((uVar1 & 0x10) == 0) {
      return 0;
    }
    if ((((uVar2 & 0x40) != 0) && (((uVar2 & 0x100) != 0 || ((uVar1 & 0x100) == 0)))) &&
       (((uVar2 & 0x200) != 0 || ((uVar1 & 0x200) == 0)))) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471607  FUN_00471607   (270 bytes)   [unnamed]
void __cdecl FUN_00471607(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_0046fe00("(ctorMask & 0x0100) != 0 || (ctorMask & 0x0020) == 0","xx.cpp",0x205);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_0046fe00("(ctorMask & 0x0080) == 0","xx.cpp",0x207);
  }
  if ((param_4 & 0x1000) == 0) {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_0046fe00("!\"what\?\"","xx.cpp",0x25e);
    }
  }
  else {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,0,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_0046fe00("!\"what\?\"","xx.cpp",0x232);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471715  FUN_00471715   (24 bytes)   [unnamed]
int __cdecl FUN_00471715(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    while (cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047172d  FUN_0047172d   (29 bytes)   [unnamed]
void __cdecl FUN_0047172d(undefined4 param_1,int param_2)

{
  RaiseException(0xeedfae6,0,param_2 + 2,&param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047174a  FUN_0047174a   (208 bytes)   [unnamed]
void __cdecl FUN_0047174a(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6 )

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  if ((param_3 & 2) != 0) {
    uVar2 = uVar2 | 0x80;
  }
  if (*DAT_0048d8f0 == 2) {
    pcVar1 = FUN_004680cc(param_2);
    FUN_00471715(pcVar1);
    FUN_0047172d(0,3);
  }
  if ((param_5 & 0x80) != 0) {
    FUN_0046fe00("(dtorMask & 0x0080) == 0","xx.cpp",0x2cd);
  }
  uVar3 = param_5 & 7;
  if (uVar3 == 1) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 2) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 3) {
    (*(code *)param_4)(param_1,uVar2);
  }
  else if (uVar3 == 5) {
    (*(code *)param_4)();
  }
  else {
    FUN_0046fe00("!\"what\?\"","xx.cpp",0x2f4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047181a  FUN_0047181a   (126 bytes)   [unnamed]
void __cdecl FUN_0047181a(undefined4 param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x80) != 0) {
    FUN_0046fe00("(mfnMask & 0x0080) == 0","xx.cpp",0x2fc);
  }
  uVar1 = param_3 & 7;
  if (uVar1 == 1) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 2) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 3) {
    (*(code *)param_2)(param_1);
    return;
  }
  if (uVar1 == 5) {
    (*(code *)param_2)();
    return;
  }
  FUN_0046fe00("!\"what\?\"","xx.cpp",0x323);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471898  FUN_00471898   (576 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_00471898(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined2 in_FS;
  ULONG_PTR local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  uint local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x48aad4);
  iVar4 = FUN_00401140();
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 2;
  iVar4 = FUN_00401140();
  if (param_1 == (uint *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)*(ushort *)((int)param_1 + 6) + (int)param_1;
  }
  *(int *)(iVar4 + 0x10) = iVar6;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 0xc) = param_7;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 8) = param_8;
  local_2c = param_1;
  uVar2 = (ushort)param_1[1];
  uVar3 = *param_1;
  if ((uVar2 & 2) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_1[3];
  }
  if ((uVar2 & 0x30) != 0) {
    local_2c = (uint *)param_1[2];
  }
  local_34 = (undefined4 *)FUN_004714ca(uVar3 + 0x52);
  *local_34 = 0;
  local_34[1] = param_1;
  local_34[3] = param_6;
  local_34[4] = uVar3;
  *(ushort *)(local_34 + 6) = uVar2;
  *(undefined2 *)((int)local_34 + 0x1a) = (undefined2)local_30;
  local_34[5] = local_2c;
  local_34[2] = param_3;
  local_34[10] = 0;
  local_34[0xb] = 0;
  local_34[7] = FUN_00471514;
  local_34[0xd] = param_7;
  local_34[0xe] = param_8;
  local_34[8] = param_4;
  local_34[9] = param_5;
  *(undefined1 *)((int)local_34 + 0x45) = 0;
  *(undefined1 *)(local_34 + 0x11) = 1;
  memcpy((undefined4 *)((int)local_34 + 0x52),param_2,uVar3);
  if ((*DAT_0048d8f0 == 1) || (*DAT_0048d8f0 == 2)) {
    pcVar5 = FUN_004680cc((int)param_1);
    FUN_00471715(pcVar5);
    FUN_0047172d(1,0xb);
  }
  if ((local_30 & 1) != 0) {
    if (param_4 == (undefined *)0x0) {
      FUN_0046fe00("cctrAddr","xx.cpp",0x445);
    }
    local_38 = DAT_0048d8ec;
    local_18 = 8;
    FUN_00471607((int)local_34 + 0x52,param_2,param_4,param_5);
    local_18 = 0;
    DAT_0048d8ec = local_38;
  }
  iVar4 = FUN_00401140();
  local_44 = *(ULONG_PTR *)(iVar4 + 0x10);
  local_40 = param_9;
  local_3c = local_34;
  RaiseException(0xeefface,1,3,&local_44);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471ae8  FUN_00471ae8   (53 bytes)   [unnamed]
void __cdecl FUN_00471ae8(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 in_stack_00000000;
  
  FUN_00471898(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,in_stack_00000000);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471b1d  FUN_00471b1d   (107 bytes)   [unnamed]
void __cdecl FUN_00471b1d(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000000;
  
  piVar2 = (int *)FUN_00401140();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    FUN_00468784();
  }
  if (*(char *)(iVar1 + 0x44) == '\0') {
    puVar3 = *(undefined4 **)(iVar1 + 0x40);
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + 0x52);
  }
  FUN_00471898(*(uint **)(iVar1 + 4),puVar3,*(undefined4 *)(iVar1 + 8),*(undefined **)(iVar1 + 0x20)
               ,*(uint *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0xc),param_1,param_2,
               in_stack_00000000);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471b88  FUN_00471b88   (63 bytes)   [unnamed]
void __cdecl FUN_00471b88(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  EXCEPTION_RECORD local_54;
  
  if (param_2 == (PEXCEPTION_RECORD)0x0) {
    local_54.ExceptionCode = 0x26;
    local_54.ExceptionFlags = 2;
    param_2 = &local_54;
    local_54.NumberParameters = 0;
  }
  param_2->ExceptionFlags = param_2->ExceptionFlags | 2;
  FUN_00468a7a(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471bc7  FUN_00471bc7   (101 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_00471bc7(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48ab08);
  if (param_3 == (undefined *)0x0) {
    FUN_0046fe00("dtorAddr","xx.cpp",0x5b9);
  }
  FUN_0047174a(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471c3c  FUN_00471c3c   (136 bytes)   [unnamed]
void __cdecl FUN_00471c3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0048d8ec;
  if (*(char *)(param_1 + 0x44) != '\0') {
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_00471bc7(param_1 + 0x52,iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    DAT_0048d8ec = uVar2;
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      FUN_0046fe00("argType","xx.cpp",0x5fe);
    }
    if (((*(byte *)(iVar1 + 4) & 2) != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
      FUN_00471bc7(*(undefined4 *)(param_1 + 0x40),iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471cc4  FUN_00471cc4   (234 bytes)   [unnamed]
/* WARNING: Unable to track spacebase fully for stack */
void __stdcall FUN_00471cc4(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 in_FS;
  undefined4 in_stack_00000000;
  
  piVar4 = (int *)FUN_00401140();
  if (*piVar4 == 0) {
    FUN_0046fe00("__CPPexceptionList","xx.cpp",0x629);
  }
  piVar4 = (int *)FUN_00401140();
  puVar1 = (undefined4 *)*piVar4;
  puVar5 = (undefined4 *)FUN_00401140();
  *puVar5 = *puVar1;
  iVar2 = puVar1[10];
  piVar4 = (int *)segment(in_FS,0);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    FUN_0046fe00(&DAT_0048acc8,"xx.cpp",0x637);
  }
  if (iVar3 != puVar1[10]) {
    FUN_0046fe00("xdrPtr->xdERRaddr == xl","xx.cpp",0x638);
  }
  *(undefined2 *)(iVar2 + 0x10) =
       *(undefined2 *)(*(int *)(iVar2 + 8) + (uint)*(ushort *)(iVar2 + 0x10));
  FUN_00471c3c((int)puVar1);
  (*(code *)puVar1[7])();
  if (*DAT_0048d8f0 == 2) {
    FUN_0047172d(6,1);
  }
  *(undefined4 *)(*(int *)(iVar2 + 0xc) + -4) = in_stack_00000000;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471db5  FUN_00471db5   (724 bytes)   [unnamed]
void __cdecl FUN_00471db5(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  int *local_c;
  uint local_8;
  
  if (*(int *)(param_3 + 0x28) != param_2) {
    FUN_0046fe00("dscPtr->xdERRaddr == errPtr","xx.cpp",0x722);
  }
  if (*(int *)(param_3 + 0x2c) != param_1) {
    FUN_0046fe00("dscPtr->xdHtabAdr == hdtPtr","xx.cpp",0x723);
  }
  if (*(char *)(param_3 + 0x45) != '\0') {
    FUN_0046fe00("dscPtr->xdArgCopy == 0","xx.cpp",0x725);
  }
  puVar6 = *(uint **)(param_1 + 4);
  *(uint **)(param_3 + 0x3c) = puVar6;
  if ((puVar6 != (uint *)0x0) && ((*(byte *)(param_1 + 8) & 0x80) == 0)) {
    bVar7 = (*(byte *)(param_1 + 8) & 1) == 0;
    local_c = (int *)(param_3 + 0x52);
    *(undefined1 *)(param_3 + 0x45) = 1;
    *(int *)(param_3 + 0x40) = *param_4 + param_5;
    uVar1 = (ushort)puVar6[1];
    uVar3 = *puVar6;
    uVar2 = uVar1;
    if ((uVar1 & 0x30) != 0) {
      puVar6 = (uint *)puVar6[2];
      uVar2 = (ushort)puVar6[1];
    }
    local_8 = (uint)uVar2;
    if (((uVar1 & 0x10) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      if (((uVar2 & 1) == 0) || ((uVar1 & 0x30) == 0)) {
        if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if (uVar3 != *(uint *)(param_3 + 0x10)) {
              FUN_0046fe00("dscPtr->xdSize == size","xx.cpp",0x7f8);
            }
            memcpy(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            memcpy(*(undefined4 **)(param_3 + 0x40),(undefined4*)&local_c,uVar3);
            bVar7 = true;
          }
        }
        else {
          if (*(int *)(param_3 + 4) != *(int *)(param_3 + 0x14)) {
            FUN_0046fe00("dscPtr->xdTypeID == dscPtr->xdBase","xx.cpp",0x7b6);
          }
          iVar5 = FUN_00468104(*(int **)(param_3 + 0x14),(int *)puVar6);
          if (iVar5 == 0) {
            local_c = (int *)FUN_00468570((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          }
          bVar7 = iVar5 == 0 || bVar7;
          if ((puVar6[3] & 1) == 0) {
            memcpy(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            if (*(int *)(param_1 + 0xc) == 0) {
              FUN_0046fe00("hdtPtr->HDcctrAddr","xx.cpp",2000);
            }
            FUN_00471607(*(undefined4 *)(param_3 + 0x40),local_c,*(undefined **)(param_1 + 0xc),
                         *(uint *)(param_1 + 0x10));
            bVar7 = true;
          }
        }
      }
      else {
        if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 0x10) == 0) {
            FUN_0046fe00("mask & TM_IS_PTR","xx.cpp",0x795);
          }
          if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
            FUN_0046fe00("dscPtr->xdMask & TM_IS_PTR","xx.cpp",0x796);
          }
          local_c = (int *)*local_c;
        }
        else {
          if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
            FUN_0046fe00("(dscPtr->xdMask & TM_IS_PTR) == 0","xx.cpp",0x782);
          }
          bVar7 = true;
        }
        iVar5 = FUN_00468104(*(int **)(param_3 + 0x14),(int *)puVar6);
        piVar4 = local_c;
        if (iVar5 == 0) {
          local_c = (int *)FUN_00468570((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          if (local_c != piVar4) {
            bVar7 = true;
          }
        }
        memcpy(*(undefined4 **)(param_3 + 0x40),(undefined4*)&local_c,uVar3);
      }
    }
    else {
      memset(*(undefined4 **)(param_3 + 0x40),0,uVar3);
      bVar7 = true;
    }
    if ((!bVar7) && ((local_8 & 3) != 0)) {
      if ((puVar6[3] & 2) != 0) {
        FUN_00471bc7(local_c,(int)puVar6,(undefined *)puVar6[10],(uint)(ushort)puVar6[0xb]);
      }
      *(undefined1 *)(param_3 + 0x44) = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472089  FUN_00472089   (358 bytes, 2 ranges)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00472089(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  puVar5 = &GHIDRA_STACK(0xfffffffc);
  uVar6 = (uint)*(ushort *)(param_1 + 0x10);
  while ((uVar4 = uVar6, uVar4 != 0 && (uVar4 != *(uint *)(puVar5 + 0xc)))) {
    uVar6 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    uVar3 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4 + 2);
    *(ushort *)(*(int *)(puVar5 + 8) + 0x10) = *(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    if (uVar3 == 0) {
      _DAT_0048d8f4 = *(undefined4 *)(*(int *)(puVar5 + -4) + 4 + uVar4 + 4);
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 1;
      FUN_00468a8f();
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 0;
    }
    else if (2 < uVar3 - 1) {
      if (uVar3 == 4) {
        uVar2 = FUN_00401140();
        *(undefined4 *)(puVar5 + -0x10) = uVar2;
        while ((puVar1 = (undefined4 *)**(int **)(puVar5 + -0x10), puVar1 != (undefined4 *)0x0 &&
               ((puVar1[10] != *(int *)(puVar5 + 8) || (uVar4 != puVar1[0xc]))))) {
          *(undefined4 **)(puVar5 + -0x10) = puVar1;
        }
        if ((puVar1 == (undefined4 *)0x0) || (puVar1 != (undefined4 *)**(int **)(puVar5 + -0x10))) {
          FUN_0046fe00("xdrPtr && xdrPtr == *xdrLPP","xx.cpp",0x8ba);
        }
        **(undefined4 **)(puVar5 + -0x10) = *puVar1;
        FUN_00471c3c((int)puVar1);
        (*(code *)puVar1[7])();
      }
      else if (uVar3 - 1 == 4) {
        uVar2 = FUN_00472b62(*(int **)(*(int *)(puVar5 + -4) + uVar4 + 8),
                             *(int *)(*(int *)(puVar5 + -4) + uVar4 + 4) + *(int *)(puVar5 + -0xc),
                             *(int *)(puVar5 + 8),*(int *)(puVar5 + -8));
        *(undefined4 *)(puVar5 + -0xc) = uVar2;
      }
      else {
        FUN_0046fe00("!\"bogus context in Local_unwind()\"","xx.cpp",0x8e9);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004721f4  FUN_004721f4   (19 bytes)   [unnamed]
void __cdecl FUN_004721f4(int param_1)

{
  FUN_00472089(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472207  FUN_00472207   (28 bytes)   [unnamed]
void __cdecl FUN_00472207(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  FUN_00472089((int)param_1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = *param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472223  FUN_00472223   (69 bytes)   [unnamed]
int * __cdecl FUN_00472223(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if ((int *)piVar2[1] == (int *)0x0) break;
    iVar1 = FUN_00471541(*(int **)(param_2 + 4),*(undefined4 *)(param_2 + 8),(int *)piVar2[1],
                         (byte)*(undefined4 *)(param_2 + 0xc));
    if (iVar1 != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472268  FUN_00472268   (837 bytes, 2 ranges)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00472268(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined2 in_FS;
  
  puVar8 = &GHIDRA_STACK(0xfffffffc);
  iVar9 = param_1[7];
  piVar6 = (int *)param_2[2];
  if (*param_1 == 0xeedfae6) {
    uVar1 = 0;
  }
  else {
    FUN_0046dd94();
    if ((*(byte *)(param_1 + 1) & 6) == 0) {
      uVar7 = (uint)*(ushort *)(param_2 + 4);
      while (uVar7 != 0) {
        *(uint *)(puVar8 + -8) = (uint)*(ushort *)((int)piVar6 + uVar7);
        *(uint *)(puVar8 + -0x14) = (uint)*(ushort *)((int)piVar6 + uVar7 + 2);
        iVar9 = uVar7 + 4;
        switch(*(undefined4 *)(puVar8 + -0x14)) {
        case 0:
        case 4:
        case 5:
          break;
        case 1:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(puVar8 + -0x28) = *(undefined4 *)(puVar8 + 8);
            *(undefined4 *)(puVar8 + -0x24) = *(undefined4 *)(puVar8 + 0x10);
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            *(undefined1 **)(*(int *)(puVar8 + 0xc) + 0x18) = puVar8 + -0x28;
            _DAT_0048d8f8 = *(undefined4 *)((int)piVar6 + iVar9);
            iVar2 = FUN_00468a8f();
LAB_00472553:
            if (iVar2 < 0) {
              if ((*(byte *)(*(int *)(puVar8 + 8) + 4) & 1) != 0) {
                *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -8);
              }
              return 0;
            }
            if (iVar2 != 0) {
              *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x18) = 0;
              *(undefined4 *)(puVar8 + -0x20) = *(undefined4 *)(puVar8 + -8);
              UNRECOVERED_JUMPTABLE = *(undefined **)((int)piVar6 + iVar9 + 4);
LAB_00472426:
              FUN_00471b88(*(PVOID *)(puVar8 + 0xc),*(PEXCEPTION_RECORD *)(puVar8 + 8));
              FUN_00472089(*(int *)(puVar8 + 0xc));
              *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -0x20);
              if (*(int *)(puVar8 + -0x14) == 3) {
                FUN_00471db5(*(int *)(puVar8 + -0x18),*(int *)(puVar8 + 0xc),*(int *)(puVar8 + -4),
                             *(int **)(puVar8 + -0x1c),*(int *)(puVar8 + -0xc));
              }
              iVar9 = FUN_00401140();
              *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) & 0xfffffffd;
              if ((*DAT_0048d8f0 == 2) && (*(int *)(puVar8 + -0x14) == 3)) {
                pcVar5 = FUN_004680cc(*(int *)(*(int *)(puVar8 + -4) + 4));
                FUN_00471715(pcVar5);
                FUN_0047172d(3,5);
              }
              FUN_004714c3(UNRECOVERED_JUMPTABLE);
            }
          }
          break;
        case 2:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            iVar2 = *(int *)((int)piVar6 + iVar9);
            goto LAB_00472553;
          }
          break;
        case 3:
          if (**(int **)(puVar8 + 8) == 0xeefface) {
            *(undefined4 *)(puVar8 + -0x1c) = *(undefined4 *)((int)piVar6 + iVar9);
            piVar3 = FUN_00472223(*(int *)(puVar8 + -0x1c),*(int *)(puVar8 + -4));
            *(int **)(puVar8 + -0x18) = piVar3;
            if (*(int *)(puVar8 + -0x18) != 0) {
              if (((*DAT_0048d8f0 == 1) || (*DAT_0048d8f0 == 2)) &&
                 ((**(uint **)(puVar8 + 8) < 0xeedface || (0xeefface < **(uint **)(puVar8 + 8))))) {
                FUN_0047172d(2,3);
              }
              puVar4 = (undefined4 *)FUN_00401140();
              **(undefined4 **)(puVar8 + -4) = *puVar4;
              puVar4 = (undefined4 *)FUN_00401140();
              *puVar4 = *(undefined4 *)(puVar8 + -4);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x28) = *(undefined4 *)(puVar8 + 0xc);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x2c) = *(undefined4 *)(puVar8 + -0x18);
              *(uint *)(*(int *)(puVar8 + -4) + 0x30) = uVar7 + 8;
              *(uint *)(puVar8 + -0x20) = uVar7 + 8;
              UNRECOVERED_JUMPTABLE = (undefined *)**(undefined4 **)(puVar8 + -0x18);
              goto LAB_00472426;
            }
          }
          break;
        default:
          FUN_0046fe00("!\"bogus context in _ExceptionHandler()\"","xx.cpp",0xc00);
        }
        uVar7 = *(uint *)(puVar8 + -8);
      }
      uVar1 = 1;
    }
    else {
      FUN_00472089((int)param_2);
      if ((*param_1 == 0xeefface) && (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0)) {
        for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
          iVar2 = FUN_00471541(*(int **)(iVar9 + 4),*(undefined4 *)(iVar9 + 8),(int *)*piVar6,
                               (byte)*(undefined4 *)(iVar9 + 0xc));
          if (iVar2 != 0) goto LAB_00472318;
        }
        puVar4 = (undefined4 *)segment(in_FS,0);
        uVar1 = *puVar4;
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = *param_2;
        FUN_004687f8();
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = uVar1;
      }
LAB_00472318:
      uVar1 = 1;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004725c5  FUN_004725c5   (215 bytes, 3 ranges)   [unnamed]
void __cdecl FUN_004725c5(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 in_FS;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48ab5c);
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_0046fe00("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xc1c);
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_0046fe00("varType->tpClass.tpcDtorAddr","xx.cpp",0xc1d);
  }
  if ((*(uint *)(param_5 + 0x1c) < *(uint *)(param_2 + 0x20)) && (param_3 == 0)) {
    FUN_0046fe00("(errPtr->ERRcInitDtc >= varType->tpClass.tpcDtorCount) || flags","xx.cpp",0xc28);
  }
  if ((param_3 & 2) == 0) {
    if (param_4 == 0) {
      iVar2 = *(int *)(param_2 + 0x24);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x20);
    }
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) - iVar2;
  }
  FUN_0047174a(param_1,param_2,(byte)param_3,*(undefined **)(param_2 + 0x28),
               (uint)*(ushort *)(param_2 + 0x2c),param_4);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004726bc  FUN_004726bc   (75 bytes)   [unnamed]
void __cdecl FUN_004726bc(int param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  
  while (piVar2 = param_3 + -3, param_4 <= piVar2) {
    puVar1 = (undefined4 *)(param_3[-2] + param_1);
    if (in_stack_00000018 != 0) {
      puVar1 = (undefined4 *)*puVar1;
    }
    param_3 = piVar2;
    if ((*(byte *)(*piVar2 + 0xc) & 2) != 0) {
      FUN_00472707((int)puVar1,*piVar2,param_2,in_stack_00000014,0,in_stack_0000001c,
                   in_stack_00000020);
      in_stack_00000014 = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472707  FUN_00472707   (688 bytes)   [unnamed]
void __cdecl FUN_00472707(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6, int param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint local_1c;
  int *local_14;
  int *local_c;
  
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_0046fe00("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xcb3);
  }
  if (param_5 == 0) {
    uVar4 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x20);
  }
  if ((param_4 == 0) || (uVar4 <= param_4)) {
    FUN_004725c5(param_1,param_2,param_3,param_5,param_7);
  }
  else {
    if (uVar4 <= param_4) {
      FUN_0046fe00("dtorCnt < varCount","xx.cpp",0xced);
    }
    piVar3 = (int *)((uint)*(ushort *)(param_2 + 0x12) + param_2);
    local_14 = piVar3;
    if (param_5 != 0) {
      for (; iVar2 = *local_14, iVar2 != 0; local_14 = local_14 + 3) {
        if ((*(byte *)(iVar2 + 4) & 1) == 0) {
          FUN_0046fe00("IS_STRUC(blType->tpMask)","xx.cpp",0xd18);
        }
        if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
          if (param_4 <= *(uint *)(iVar2 + 0x24)) {
            FUN_004726bc(param_1,param_3,local_14 + 3,piVar3);
            return;
          }
          param_4 = param_4 - *(uint *)(iVar2 + 0x24);
        }
      }
    }
    piVar1 = (int *)((uint)*(ushort *)(param_2 + 0x10) + param_2);
    for (local_c = piVar1; iVar2 = *local_c, iVar2 != 0; local_c = local_c + 3) {
      if ((*(byte *)(iVar2 + 4) & 1) == 0) {
        FUN_0046fe00("IS_STRUC(blType->tpMask)","xx.cpp",0xd3f);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
        if (param_4 <= *(uint *)(iVar2 + 0x24)) {
          FUN_004726bc(param_1,param_3,local_c + 3,piVar1);
          if (param_5 == 0) {
            return;
          }
          FUN_004726bc(param_1,param_3,local_14,piVar3);
          return;
        }
        param_4 = param_4 - *(uint *)(iVar2 + 0x24);
      }
    }
    piVar5 = (int *)((uint)*(ushort *)(param_2 + 0x2e) + param_2);
    piVar6 = piVar5;
    while( true ) {
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        FUN_0046fe00("memType","xx.cpp",0xd65);
      }
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(int *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
        FUN_0046fe00("memType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xd73);
      }
      local_1c = local_1c * *(int *)(iVar2 + 0x20);
      if (param_4 <= local_1c) break;
      param_4 = param_4 - local_1c;
      piVar6 = piVar6 + 2;
    }
    do {
      iVar2 = *piVar6;
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(uint *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (local_1c < 2) {
        FUN_00472707(piVar6[1] + param_1,iVar2,0,param_4,1,param_6,param_7);
      }
      else {
        FUN_004729b7(piVar6[1] + param_1,*piVar6,param_4,param_6,param_7);
      }
      param_4 = 0;
      piVar6 = piVar6 + -2;
    } while (piVar5 <= piVar6);
    FUN_004726bc(param_1,param_3,local_c,piVar1);
    if (param_5 != 0) {
      FUN_004726bc(param_1,param_3,local_14,piVar3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004729b7  FUN_004729b7   (292 bytes)   [unnamed]
void __cdecl FUN_004729b7(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_0046fe00("varType->tpMask & TM_IS_ARRAY","xx.cpp",0xdcc);
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0xc) & 2) == 0) {
    FUN_0046fe00("varType->tpArr.tpaElemType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xdcd);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(param_2 + 8);
  uVar3 = piVar2[8];
  if (uVar3 == 0) {
    FUN_0046fe00("vdtCount","xx.cpp",0xdd6);
  }
  if (param_3 == 0) {
    param_3 = uVar3 * uVar1;
  }
  local_c = param_3 / uVar3;
  if ((uVar1 < local_c) && (uVar1 != 0)) {
    FUN_0046fe00("etdCount <= elemCount || elemCount == 0","xx.cpp",0xddf);
  }
  uVar1 = param_3 - local_c * uVar3;
  if (uVar3 < uVar1) {
    FUN_0046fe00("dtrCount <= vdtCount","xx.cpp",0xde0);
  }
  iVar4 = param_1 + local_c * *piVar2;
  if (uVar1 != 0) {
    FUN_00472707(iVar4,(int)piVar2,0,uVar1,1,param_4,param_5);
  }
  while (local_c != 0) {
    iVar4 = iVar4 - *piVar2;
    FUN_00472707(iVar4,(int)piVar2,0,uVar3,1,param_4,param_5);
    local_c = local_c - 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472adb  FUN_00472adb   (135 bytes)   [unnamed]
int __cdecl FUN_00472adb(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)(iVar1 + 4) & 2) == 0) {
    FUN_0046fe00("IS_CLASS(varType->tpMask)","xx.cpp",0xe13);
  }
  if (((*(uint *)(iVar1 + 0xc) & 0x50) == 0x50) && (*(int *)(iVar1 + 8) != -1)) {
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(iVar1 + 8) + param_1);
    }
    param_1 = param_1 - *(int *)(param_3 + -8);
    iVar1 = param_3 - *(int *)(param_3 + -4);
    if (*(int *)(iVar1 + -4) != 0) {
      FUN_0046fe00("((unsigned __far *)vftAddr)[-1] == 0","xx.cpp",0xe39);
    }
    *param_2 = *(int *)(iVar1 + -0xc);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472b62  FUN_00472b62   (1156 bytes)   [unnamed]
undefined4 __cdecl FUN_00472b62(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    local_8 = *(int *)(param_3 + 0x1c) - param_2;
    if ((*(byte *)(param_1 + 1) & 0x20) != 0) {
      if ((*(byte *)(param_1 + 1) & 0x11) == 0) {
        FUN_0046fe00("dttPtr->dttFlags & (DTCVF_PTRVAL|DTCVF_RETVAL)","xx.cpp",0xe78);
      }
      if ((*(byte *)(*param_1 + 4) & 0x10) == 0) {
        FUN_0046fe00("dttPtr->dttType->tpMask & TM_IS_PTR","xx.cpp",0xe7c);
      }
      if ((*(byte *)(*(int *)(*param_1 + 8) + 0xc) & 2) == 0) {
        FUN_0046fe00("dttPtr->dttType->tpPtr.tppBaseType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xe7d);
      }
      local_8 = *(uint *)(*(int *)(*param_1 + 8) + 0x20);
    }
    if ((*(byte *)((int)param_1 + 5) & 1) == 0) {
      piVar5 = param_1;
      if (((int)local_8 < 1) && ((*(byte *)((int)param_1 + 5) & 4) == 0)) {
        if ((param_1[1] & 3U) != 3) {
          return 0;
        }
        local_c = local_c + 1;
      }
      else {
        for (; *piVar5 != 0; piVar5 = piVar5 + 3) {
          if ((*(byte *)((int)piVar5 + 5) & 0x10) == 0) {
            local_10 = *piVar5;
          }
          else {
            if ((*(byte *)(*piVar5 + 5) & 4) == 0) {
              FUN_0046fe00("dtvtPtr->dttType->tpMask & TM_IS_ARRAY","xx.cpp",0xed7);
            }
            local_10 = *(int *)(*piVar5 + 8);
          }
          iVar8 = 1;
          if (((((*(byte *)(local_10 + 4) & 0x10) != 0) &&
               (local_10 = *(int *)(local_10 + 8), (*(byte *)(local_10 + 4) & 2) != 0)) &&
              ((*(byte *)(local_10 + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar5 + 1) & 8) != 0)) {
            iVar6 = 0;
            if ((*(byte *)(local_10 + 0xc) & 2) == 0) {
              FUN_0046fe00("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xef7);
            }
            if ((*(byte *)(piVar5 + 1) & 4) == 0) {
              local_14 = (int *)piVar5[2];
            }
            else {
              local_14 = (int *)(param_4 + piVar5[2]);
            }
            iVar1 = *local_14;
            if ((*(byte *)((int)piVar5 + 5) & 0x10) != 0) {
              iVar6 = local_14[1];
            }
            local_14 = (int *)iVar1;
            if ((*(byte *)(piVar5 + 1) & 0x40) != 0) {
              local_14 = (int *)(iVar1 + 4);
            }
            local_14 = (int *)FUN_00472adb((int)local_14,&local_10,iVar6);
          }
          iVar6 = local_10;
          if ((*(byte *)(local_10 + 5) & 4) != 0) {
            iVar8 = *(int *)(local_10 + 0xc);
            iVar6 = *(int *)(local_10 + 8);
          }
          if ((*(byte *)(iVar6 + 0xc) & 2) == 0) {
            FUN_0046fe00("elemType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xf22);
          }
          uVar7 = iVar8 * *(int *)(iVar6 + 0x20);
          if (local_8 <= uVar7) goto LAB_00472d9d;
          local_8 = local_8 - uVar7;
        }
        piVar5 = piVar5 + -3;
      }
LAB_00472d9d:
      do {
        local_18 = *piVar5;
        uVar7 = piVar5[1];
        if ((uVar7 & 4) == 0) {
          local_1c = (int *)piVar5[2];
        }
        else {
          local_1c = (int *)(param_4 + piVar5[2]);
        }
        if ((uVar7 & 0x1000) != 0) {
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_0046fe00("varType->tpMask & TM_IS_ARRAY","xx.cpp",0xf52);
          }
          local_18 = *(int *)(local_18 + 8);
        }
        if ((uVar7 & 0x11) != 0) {
          iVar8 = 0;
          if ((*(byte *)(local_18 + 4) & 0x10) == 0) {
            FUN_0046fe00("varType->tpMask & TM_IS_PTR","xx.cpp",0xf5c);
          }
          local_18 = *(int *)(local_18 + 8);
          local_20 = (int *)*local_1c;
          if ((uVar7 & 0x1000) != 0) {
            iVar8 = local_1c[1];
          }
          local_1c = local_20;
          if ((uVar7 & 0x48) == 0x40) {
            local_1c = local_20 + 1;
          }
          if ((((*(byte *)(local_18 + 4) & 2) != 0) && ((*(byte *)(local_18 + 0xc) & 0x20) != 0)) &&
             ((uVar7 & 8) != 0)) {
            local_20 = (int *)FUN_00472adb((int)local_1c,&local_18,iVar8);
            local_1c = local_20;
          }
        }
        if (local_c == 0) {
          if ((uVar7 & 0x400) == 0) {
            uVar4 = 0;
          }
          else {
            if (*(short *)(local_18 + 0x10) == 0) {
              uVar4 = 0;
            }
            else {
              piVar9 = (int *)((uint)*(ushort *)(local_18 + 0x10) + local_18);
              if (piVar9 == (int *)0x0) {
                FUN_0046fe00(&DAT_0048b329,"xx.cpp",0xf92);
              }
              uVar4 = *(uint *)(*piVar9 + 0x20);
            }
            if (local_8 < uVar4) {
              uVar4 = 2;
            }
            else {
              uVar4 = 1;
            }
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_00472707((int)local_1c,local_18,uVar4,local_8,1,param_4,param_3);
          }
          else {
            FUN_004729b7((int)local_1c,local_18,local_8,param_4,param_3);
          }
          if ((((uVar7 & 0x400) != 0) && ((*(byte *)(param_3 + 0x20) & 1) != 0)) &&
             (*(char *)(param_3 + 0x20) != -1)) {
            (**(code **)(*local_1c + -8))(local_1c);
          }
        }
        if ((uVar7 & 3) == 3) {
          if ((uVar7 & 0x48) == 0x48) {
            local_20 = local_20 + -1;
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            if (*(int *)(local_18 + 0x14) == 0) {
              operator_delete();
            }
            else {
              FUN_0047181a(local_20,*(undefined **)(local_18 + 0x14),
                           (uint)*(ushort *)(local_18 + 0x18));
            }
          }
          else {
            local_18 = *(int *)(local_18 + 8);
            if (*(int *)(local_18 + 0x1c) == 0) {
              operator_delete_array();
            }
            else {
              FUN_0047181a(local_20,*(undefined **)(local_18 + 0x1c),
                           (uint)*(ushort *)(local_18 + 0x1a));
            }
          }
        }
        local_8 = 0;
        bVar2 = param_1 < piVar5;
        piVar5 = piVar5 + -3;
      } while (bVar2);
      uVar3 = 0;
    }
    else {
      if (((*(byte *)(*param_1 + 4) & 2) == 0) || ((*(byte *)(*param_1 + 0xc) & 2) == 0)) {
        FUN_0046fe00("IS_CLASS(dttPtr->dttType->tpMask) && (dttPtr->dttType->tpClass.tpcFlags & CF_HAS_DTOR)","xx.cpp",0xe8b);
      }
      uVar3 = *(undefined4 *)(*param_1 + 0x24);
    }
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472fe6  FUN_00472fe6   (84 bytes)   [unnamed]
uint __cdecl FUN_00472fe6(int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  if (**(short **)(param_1 + 4) == 0x25ff) {
    iVar1 = **(int **)(*(int *)(param_1 + 4) + 2);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
  }
  iVar1 = FUN_004678d8((byte *)(iVar1 + -8),(byte *)"**BCCxh1",8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x0047303c  ADVAPI32.DLL::IsTextUnicode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::IsTextUnicode
BOOL __stdcall import_IsTextUnicode(void *lpv,int iSize,LPINT lpiResult)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047303c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsTextUnicode(lpv,iSize,lpiResult);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473042  ADVAPI32.DLL::RegCloseKey   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegCloseKey
LSTATUS __stdcall import_RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473048  ADVAPI32.DLL::RegCreateKeyExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegCreateKeyExA
LSTATUS __stdcall import_RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions, REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult, LPDWORD lpdwDisposition)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCreateKeyExA(hKey,lpSubKey,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes,
                          phkResult,lpdwDisposition);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047304e  ADVAPI32.DLL::RegOpenKeyExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegOpenKeyExA
LSTATUS __stdcall import_RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047304e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473054  ADVAPI32.DLL::RegQueryInfoKeyA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegQueryInfoKeyA
LSTATUS __stdcall import_RegQueryInfoKeyA(HKEY hKey,LPSTR lpClass,LPDWORD lpcchClass,LPDWORD lpReserved,LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen,LPDWORD lpcbMaxClassLen,LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen,LPDWORD lpcbMaxValueLen,LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryInfoKeyA(hKey,lpClass,lpcchClass,lpReserved,lpcSubKeys,lpcbMaxSubKeyLen,
                           lpcbMaxClassLen,lpcValues,lpcbMaxValueNameLen,lpcbMaxValueLen,
                           lpcbSecurityDescriptor,lpftLastWriteTime);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047305a  ADVAPI32.DLL::RegQueryValueExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegQueryValueExA
LSTATUS __stdcall import_RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData, LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047305a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473060  ADVAPI32.DLL::RegSetValueExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegSetValueExA
LSTATUS __stdcall import_RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegSetValueExA(hKey,lpValueName,Reserved,dwType,lpData,cbData);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473068  KERNEL32.DLL::CloseHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CloseHandle
BOOL __stdcall import_CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047306e  KERNEL32.DLL::CreateFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CreateFileA
HANDLE __stdcall import_CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047306e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473074  KERNEL32.DLL::CreateFileW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CreateFileW
HANDLE __stdcall import_CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047307a  KERNEL32.DLL::DeleteFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::DeleteFileA
BOOL __stdcall import_DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047307a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473080  KERNEL32.DLL::DuplicateHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::DuplicateHandle
BOOL __stdcall import_DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwOptions)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,bInheritHandle,dwOptions);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047308c  KERNEL32.DLL::ExitProcess   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ExitProcess
void __stdcall import_ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x0047308c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473092  KERNEL32.DLL::ExpandEnvironmentStringsA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ExpandEnvironmentStringsA
DWORD __stdcall import_ExpandEnvironmentStringsA(LPCSTR lpSrc,LPSTR lpDst,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ExpandEnvironmentStringsA(lpSrc,lpDst,nSize);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473098  KERNEL32.DLL::FileTimeToSystemTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FileTimeToSystemTime
BOOL __stdcall import_FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToSystemTime(lpFileTime,lpSystemTime);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047309e  KERNEL32.DLL::FindClose   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindClose
BOOL __stdcall import_FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047309e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730a4  KERNEL32.DLL::FindFirstFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindFirstFileA
HANDLE __stdcall import_FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730aa  KERNEL32.DLL::FindResourceA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindResourceA
HRSRC __stdcall import_FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceA(hModule,lpName,lpType);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730b0  KERNEL32.DLL::FindResourceExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindResourceExA
HRSRC __stdcall import_FindResourceExA(HMODULE hModule,LPCSTR lpType,LPCSTR lpName,WORD wLanguage)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceExA(hModule,lpType,lpName,wLanguage);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730b6  KERNEL32.DLL::FlushFileBuffers   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FlushFileBuffers
BOOL __stdcall import_FlushFileBuffers(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushFileBuffers(hFile);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730bc  KERNEL32.DLL::FormatMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FormatMessageA
DWORD __stdcall import_FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer, DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730c2  KERNEL32.DLL::FreeLibrary   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FreeLibrary
BOOL __stdcall import_FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730c8  KERNEL32.DLL::FreeResource   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FreeResource
BOOL __stdcall import_FreeResource(HGLOBAL hResData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeResource(hResData);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730ce  KERNEL32.DLL::GetACP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetACP
UINT __stdcall import_GetACP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetACP();
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730d4  KERNEL32.DLL::GetCPInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCPInfo
BOOL __stdcall import_GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730da  KERNEL32.DLL::GetCommandLineA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCommandLineA
LPSTR __stdcall import_GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730e0  KERNEL32.DLL::GetCurrentProcess   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentProcess
HANDLE __stdcall import_GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730e6  KERNEL32.DLL::GetCurrentProcessId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentProcessId
DWORD __stdcall import_GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730ec  KERNEL32.DLL::GetCurrentThreadId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentThreadId
DWORD __stdcall import_GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730f2  KERNEL32.DLL::GetDriveTypeA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetDriveTypeA
UINT __stdcall import_GetDriveTypeA(LPCSTR lpRootPathName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDriveTypeA(lpRootPathName);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730f8  KERNEL32.DLL::GetEnvironmentStrings   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetEnvironmentStrings
LPCH __stdcall import_GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730fe  KERNEL32.DLL::GetFileAttributesA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileAttributesA
DWORD __stdcall import_GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004730fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473104  KERNEL32.DLL::GetFileAttributesW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileAttributesW
DWORD __stdcall import_GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047310a  KERNEL32.DLL::GetFileSize   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileSize
DWORD __stdcall import_GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047310a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473110  KERNEL32.DLL::GetFileTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileTime
BOOL __stdcall import_GetFileTime(HANDLE hFile,LPFILETIME lpCreationTime,LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473116  KERNEL32.DLL::GetFileType   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileType
DWORD __stdcall import_GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047311c  KERNEL32.DLL::GetFullPathNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFullPathNameA
DWORD __stdcall import_GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047311c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameA(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473122  KERNEL32.DLL::GetLastError   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLastError
DWORD __stdcall import_GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473128  KERNEL32.DLL::GetLocalTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLocalTime
void __stdcall import_GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x00473128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047312e  KERNEL32.DLL::GetLocaleInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLocaleInfoA
int __stdcall import_GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047312e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473134  KERNEL32.DLL::GetModuleFileNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetModuleFileNameA
DWORD __stdcall import_GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047313a  KERNEL32.DLL::GetModuleHandleA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetModuleHandleA
HMODULE __stdcall import_GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047313a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473140  KERNEL32.DLL::GetOEMCP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetOEMCP
UINT __stdcall import_GetOEMCP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetOEMCP();
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473146  KERNEL32.DLL::GetProcAddress   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetProcAddress
FARPROC __stdcall import_GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473152  KERNEL32.DLL::GetStartupInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStartupInfoA
void __stdcall import_GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00473152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473158  KERNEL32.DLL::GetStdHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStdHandle
HANDLE __stdcall import_GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047315e  KERNEL32.DLL::GetStringTypeA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStringTypeA
BOOL __stdcall import_GetStringTypeA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047315e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeA(Locale,dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473164  KERNEL32.DLL::GetStringTypeW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStringTypeW
BOOL __stdcall import_GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047316a  KERNEL32.DLL::GetSystemDefaultLangID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetSystemDefaultLangID
LANGID __stdcall import_GetSystemDefaultLangID(void)

{
  LANGID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047316a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetSystemDefaultLangID();
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473170  KERNEL32.DLL::GetTickCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetTickCount
DWORD __stdcall import_GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473176  KERNEL32.DLL::GetTimeZoneInformation   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetTimeZoneInformation
DWORD __stdcall import_GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047317c  KERNEL32.DLL::GetUserDefaultLCID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetUserDefaultLCID
LCID __stdcall import_GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047317c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473188  KERNEL32.DLL::GetVersion   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetVersion
DWORD __stdcall import_GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047318e  KERNEL32.DLL::GetVersionExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetVersionExA
BOOL __stdcall import_GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047318e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473194  KERNEL32.DLL::GetWindowsDirectoryA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetWindowsDirectoryA
UINT __stdcall import_GetWindowsDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryA(lpBuffer,uSize);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047319a  KERNEL32.DLL::GlobalAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalAlloc
HGLOBAL __stdcall import_GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047319a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731a0  KERNEL32.DLL::GlobalFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalFree
HGLOBAL __stdcall import_GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731a6  KERNEL32.DLL::GlobalHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalHandle
HGLOBAL __stdcall import_GlobalHandle(LPCVOID pMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalHandle(pMem);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731ac  KERNEL32.DLL::GlobalLock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalLock
LPVOID __stdcall import_GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731b2  KERNEL32.DLL::GlobalMemoryStatus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalMemoryStatus
void __stdcall import_GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)

{
                    /* WARNING: Could not recover jumptable at 0x004731b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GlobalMemoryStatus(lpBuffer);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731b8  KERNEL32.DLL::GlobalSize   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalSize
SIZE_T __stdcall import_GlobalSize(HGLOBAL hMem)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GlobalSize(hMem);
  return SVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731be  KERNEL32.DLL::GlobalUnlock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalUnlock
BOOL __stdcall import_GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731c4  KERNEL32.DLL::HeapAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapAlloc
LPVOID __stdcall import_HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731ca  KERNEL32.DLL::HeapCreate   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapCreate
HANDLE __stdcall import_HeapCreate(DWORD flOptions,SIZE_T dwInitialSize,SIZE_T dwMaximumSize)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapCreate(flOptions,dwInitialSize,dwMaximumSize);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731d0  KERNEL32.DLL::HeapDestroy   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapDestroy
BOOL __stdcall import_HeapDestroy(HANDLE hHeap)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapDestroy(hHeap);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731d6  KERNEL32.DLL::HeapFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapFree
BOOL __stdcall import_HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731dc  KERNEL32.DLL::InterlockedIncrement   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::InterlockedIncrement
LONG __stdcall import_InterlockedIncrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731e2  KERNEL32.DLL::IsBadReadPtr   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::IsBadReadPtr
BOOL __stdcall import_IsBadReadPtr(void *lp,UINT_PTR ucb)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsBadReadPtr(lp,ucb);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731e8  KERNEL32.DLL::IsValidLocale   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::IsValidLocale
BOOL __stdcall import_IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidLocale(Locale,dwFlags);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731ee  KERNEL32.DLL::LCMapStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LCMapStringA
int __stdcall import_LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004731fa  KERNEL32.DLL::LoadLibraryA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LoadLibraryA
HMODULE __stdcall import_LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473200  KERNEL32.DLL::LoadResource   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LoadResource
HGLOBAL __stdcall import_LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473206  KERNEL32.DLL::LocalFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalFree
HLOCAL __stdcall import_LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047320c  KERNEL32.DLL::LocalHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalHandle
HLOCAL __stdcall import_LocalHandle(LPCVOID pMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047320c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalHandle(pMem);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473212  KERNEL32.DLL::LocalLock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalLock
LPVOID __stdcall import_LocalLock(HLOCAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalLock(hMem);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473218  KERNEL32.DLL::LocalReAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalReAlloc
HLOCAL __stdcall import_LocalReAlloc(HLOCAL hMem,SIZE_T uBytes,UINT uFlags)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalReAlloc(hMem,uBytes,uFlags);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047321e  KERNEL32.DLL::LocalUnlock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalUnlock
BOOL __stdcall import_LocalUnlock(HLOCAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047321e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LocalUnlock(hMem);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473224  KERNEL32.DLL::LockFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LockFile
BOOL __stdcall import_LockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToLockLow,
                   nNumberOfBytesToLockHigh);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047322a  KERNEL32.DLL::LockResource   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LockResource
LPVOID __stdcall import_LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047322a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473230  KERNEL32.DLL::MulDiv   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::MulDiv
int __stdcall import_MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MulDiv(nNumber,nNumerator,nDenominator);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473236  KERNEL32.DLL::MultiByteToWideChar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::MultiByteToWideChar
int __stdcall import_MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte, LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047323c  KERNEL32.DLL::RaiseException   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::RaiseException
void __stdcall import_RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments, ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x0047323c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473242  KERNEL32.DLL::ReadFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ReadFile
BOOL __stdcall import_ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473248  KERNEL32.DLL::RtlUnwind   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::RtlUnwind
void __stdcall import_RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x00473248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047324e  KERNEL32.DLL::SetConsoleCtrlHandler   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetConsoleCtrlHandler
BOOL __stdcall import_SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047324e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473254  KERNEL32.DLL::SetEndOfFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetEndOfFile
BOOL __stdcall import_SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047325a  KERNEL32.DLL::SetErrorMode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetErrorMode
UINT __stdcall import_SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047325a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473260  KERNEL32.DLL::SetFilePointer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetFilePointer
DWORD __stdcall import_SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473266  KERNEL32.DLL::SetHandleCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetHandleCount
UINT __stdcall import_SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047326c  KERNEL32.DLL::SetLastError   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetLastError
void __stdcall import_SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x0047326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473272  KERNEL32.DLL::SetThreadLocale   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetThreadLocale
BOOL __stdcall import_SetThreadLocale(LCID Locale)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadLocale(Locale);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047327e  KERNEL32.DLL::TlsFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsFree
BOOL __stdcall import_TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047327e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsFree(dwTlsIndex);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473284  KERNEL32.DLL::TlsGetValue   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsGetValue
LPVOID __stdcall import_TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047328a  KERNEL32.DLL::TlsSetValue   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsSetValue
BOOL __stdcall import_TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047328a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473290  KERNEL32.DLL::UnhandledExceptionFilter   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::UnhandledExceptionFilter
LONG __stdcall import_UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473296  KERNEL32.DLL::UnlockFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::UnlockFile
BOOL __stdcall import_UnlockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToUnlockLow ,DWORD nNumberOfBytesToUnlockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnlockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToUnlockLow,
                     nNumberOfBytesToUnlockHigh);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047329c  KERNEL32.DLL::VirtualAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualAlloc
LPVOID __stdcall import_VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732a2  KERNEL32.DLL::VirtualFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualFree
BOOL __stdcall import_VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(lpAddress,dwSize,dwFreeType);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732a8  KERNEL32.DLL::VirtualQueryEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualQueryEx
SIZE_T __stdcall import_VirtualQueryEx(HANDLE hProcess,LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQueryEx(hProcess,lpAddress,lpBuffer,dwLength);
  return SVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732ae  KERNEL32.DLL::WideCharToMultiByte   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WideCharToMultiByte
int __stdcall import_WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar, LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732b4  KERNEL32.DLL::WinExec   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WinExec
UINT __stdcall import_WinExec(LPCSTR lpCmdLine,UINT uCmdShow)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = WinExec(lpCmdLine,uCmdShow);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732ba  KERNEL32.DLL::WriteFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WriteFile
BOOL __stdcall import_WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732c0  KERNEL32.DLL::lstrcatA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrcatA
LPSTR __stdcall import_lstrcatA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcatA(lpString1,lpString2);
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732c6  KERNEL32.DLL::lstrcpyA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrcpyA
LPSTR __stdcall import_lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732cc  KERNEL32.DLL::lstrcpynA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrcpynA
LPSTR __stdcall import_lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpynA(lpString1,lpString2,iMaxLength);
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732d4  GDI32.DLL::BitBlt   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::BitBlt
BOOL __stdcall import_BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732da  GDI32.DLL::CreateBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateBitmap
HBITMAP __stdcall import_CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732e0  GDI32.DLL::CreateCompatibleBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateCompatibleBitmap
HBITMAP __stdcall import_CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleBitmap(hdc,cx,cy);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732e6  GDI32.DLL::CreateCompatibleDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateCompatibleDC
HDC __stdcall import_CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732ec  GDI32.DLL::CreateDIBPatternBrush   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDIBPatternBrush
HBRUSH __stdcall import_CreateDIBPatternBrush(HGLOBAL h,UINT iUsage)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBPatternBrush(h,iUsage);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732f2  GDI32.DLL::CreateDIBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDIBitmap
HBITMAP __stdcall import_CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi, UINT iUsage)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBitmap(hdc,pbmih,flInit,pjBits,pbmi,iUsage);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732f8  GDI32.DLL::CreateDiscardableBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDiscardableBitmap
HBITMAP __stdcall import_CreateDiscardableBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDiscardableBitmap(hdc,cx,cy);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004732fe  GDI32.DLL::CreateFontA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateFontA
HFONT __stdcall import_CreateFontA(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic, DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision ,DWORD iQuality,DWORD iPitchAndFamily,LPCSTR pszFaceName)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontA(cHeight,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,bStrikeOut
                       ,iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,pszFaceName);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473304  GDI32.DLL::CreateFontIndirectA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateFontIndirectA
HFONT __stdcall import_CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontIndirectA(lplf);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047330a  GDI32.DLL::CreatePalette   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreatePalette
HPALETTE __stdcall import_CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047330a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePalette(plpal);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473310  GDI32.DLL::CreateRectRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateRectRgn
HRGN __stdcall import_CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRectRgn(x1,y1,x2,y2);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473316  GDI32.DLL::CreateSolidBrush   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateSolidBrush
HBRUSH __stdcall import_CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047331c  GDI32.DLL::DPtoLP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::DPtoLP
BOOL __stdcall import_DPtoLP(HDC hdc,LPPOINT lppt,int c)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047331c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DPtoLP(hdc,lppt,c);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473322  GDI32.DLL::DeleteDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::DeleteDC
BOOL __stdcall import_DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473328  GDI32.DLL::DeleteObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::DeleteObject
BOOL __stdcall import_DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047332e  GDI32.DLL::ExtTextOutA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ExtTextOutA
BOOL __stdcall import_ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047332e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExtTextOutA(hdc,x,y,options,lprect,lpString,c,lpDx);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473334  GDI32.DLL::GetBkColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetBkColor
COLORREF __stdcall import_GetBkColor(HDC hdc)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetBkColor(hdc);
  return CVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047333a  GDI32.DLL::GetClipRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetClipRgn
int __stdcall import_GetClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047333a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipRgn(hdc,hrgn);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473340  GDI32.DLL::GetDeviceCaps   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetDeviceCaps
int __stdcall import_GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473346  GDI32.DLL::GetObjectA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetObjectA
int __stdcall import_GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047334c  GDI32.DLL::GetStockObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetStockObject
HGDIOBJ __stdcall import_GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047334c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473352  GDI32.DLL::GetSystemPaletteEntries   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetSystemPaletteEntries
UINT __stdcall import_GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473358  GDI32.DLL::GetTextColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextColor
COLORREF __stdcall import_GetTextColor(HDC hdc)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetTextColor(hdc);
  return CVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047335e  GDI32.DLL::GetTextExtentPoint32A   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextExtentPoint32A
BOOL __stdcall import_GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047335e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPoint32A(hdc,lpString,c,psizl);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473364  GDI32.DLL::GetTextMetricsA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextMetricsA
BOOL __stdcall import_GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextMetricsA(hdc,lptm);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047336a  GDI32.DLL::GetViewportOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetViewportOrgEx
BOOL __stdcall import_GetViewportOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047336a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetViewportOrgEx(hdc,lppoint);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473370  GDI32.DLL::IntersectClipRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::IntersectClipRect
int __stdcall import_IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473376  GDI32.DLL::LineTo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::LineTo
BOOL __stdcall import_LineTo(HDC hdc,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LineTo(hdc,x,y);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047337c  GDI32.DLL::MoveToEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::MoveToEx
BOOL __stdcall import_MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047337c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveToEx(hdc,x,y,lppt);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473382  GDI32.DLL::OffsetViewportOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::OffsetViewportOrgEx
BOOL __stdcall import_OffsetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473388  GDI32.DLL::PatBlt   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::PatBlt
BOOL __stdcall import_PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PatBlt(hdc,x,y,w,h,rop);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047338e  GDI32.DLL::RealizePalette   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::RealizePalette
UINT __stdcall import_RealizePalette(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047338e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RealizePalette(hdc);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473394  GDI32.DLL::Rectangle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::Rectangle
BOOL __stdcall import_Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Rectangle(hdc,left,top,right,bottom);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047339a  GDI32.DLL::ResetDCA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ResetDCA
HDC __stdcall import_ResetDCA(HDC hdc,DEVMODEA *lpdm)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047339a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ResetDCA(hdc,lpdm);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733a0  GDI32.DLL::RestoreDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::RestoreDC
BOOL __stdcall import_RestoreDC(HDC hdc,int nSavedDC)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RestoreDC(hdc,nSavedDC);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733a6  GDI32.DLL::SaveDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SaveDC
int __stdcall import_SaveDC(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveDC(hdc);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733ac  GDI32.DLL::ScaleViewportExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ScaleViewportExtEx
BOOL __stdcall import_ScaleViewportExtEx(HDC hdc,int xn,int dx,int yn,int yd,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScaleViewportExtEx(hdc,xn,dx,yn,yd,lpsz);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733b2  GDI32.DLL::ScaleWindowExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ScaleWindowExtEx
BOOL __stdcall import_ScaleWindowExtEx(HDC hdc,int xn,int xd,int yn,int yd,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScaleWindowExtEx(hdc,xn,xd,yn,yd,lpsz);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733b8  GDI32.DLL::SelectClipRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SelectClipRgn
int __stdcall import_SelectClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SelectClipRgn(hdc,hrgn);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733be  GDI32.DLL::SelectObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SelectObject
HGDIOBJ __stdcall import_SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733c4  GDI32.DLL::SelectPalette   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SelectPalette
HPALETTE __stdcall import_SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SelectPalette(hdc,hPal,bForceBkgd);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733ca  GDI32.DLL::SetBkColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetBkColor
COLORREF __stdcall import_SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733d0  GDI32.DLL::SetBkMode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetBkMode
int __stdcall import_SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733d6  GDI32.DLL::SetMapMode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetMapMode
int __stdcall import_SetMapMode(HDC hdc,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMapMode(hdc,iMode);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733dc  GDI32.DLL::SetTextColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetTextColor
COLORREF __stdcall import_SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733e2  GDI32.DLL::SetViewportExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetViewportExtEx
BOOL __stdcall import_SetViewportExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportExtEx(hdc,x,y,lpsz);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733e8  GDI32.DLL::SetViewportOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetViewportOrgEx
BOOL __stdcall import_SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733ee  GDI32.DLL::SetWindowExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetWindowExtEx
BOOL __stdcall import_SetWindowExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowExtEx(hdc,x,y,lpsz);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733f4  GDI32.DLL::TextOutA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::TextOutA
BOOL __stdcall import_TextOutA(HDC hdc,int x,int y,LPCSTR lpString,int c)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TextOutA(hdc,x,y,lpString,c);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733fc  SHELL32.DLL::SHGetMalloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHGetMalloc
HRESULT __stdcall import_SHGetMalloc(IMalloc **ppMalloc)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004733fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SHGetMalloc(ppMalloc);
  return HVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473402  SHELL32.DLL::SHGetSpecialFolderLocation   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHGetSpecialFolderLocation
HRESULT __stdcall import_SHGetSpecialFolderLocation(HWND hwnd,int csidl,LPITEMIDLIST *ppidl)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SHGetSpecialFolderLocation(hwnd,csidl,ppidl);
  return HVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473408  SHELL32.DLL::SHGetPathFromIDListA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHGetPathFromIDListA
BOOL __stdcall import_SHGetPathFromIDListA(LPCITEMIDLIST pidl,LPSTR pszPath)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SHGetPathFromIDListA(pidl,pszPath);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473410  USER32.DLL::AppendMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::AppendMenuA
BOOL __stdcall import_AppendMenuA(HMENU hMenu,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AppendMenuA(hMenu,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473416  USER32.DLL::BeginDeferWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::BeginDeferWindowPos
HDWP __stdcall import_BeginDeferWindowPos(int nNumWindows)

{
  HDWP pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = BeginDeferWindowPos(nNumWindows);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047341c  USER32.DLL::BeginPaint   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::BeginPaint
HDC __stdcall import_BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473422  USER32.DLL::CallWindowProcA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CallWindowProcA
LRESULT __stdcall import_CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallWindowProcA(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473428  USER32.DLL::CheckMenuItem   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CheckMenuItem
DWORD __stdcall import_CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CheckMenuItem(hMenu,uIDCheckItem,uCheck);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047342e  USER32.DLL::ClientToScreen   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ClientToScreen
BOOL __stdcall import_ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047342e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473434  USER32.DLL::CloseClipboard   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CloseClipboard
BOOL __stdcall import_CloseClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseClipboard();
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047343a  USER32.DLL::CopyIcon   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CopyIcon
HICON __stdcall import_CopyIcon(HICON hIcon)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047343a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CopyIcon(hIcon);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473440  USER32.DLL::CountClipboardFormats   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CountClipboardFormats
int __stdcall import_CountClipboardFormats(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CountClipboardFormats();
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473446  USER32.DLL::CreateDialogIndirectParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateDialogIndirectParamA
HWND __stdcall import_CreateDialogIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA lpTemplate,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDialogIndirectParamA(hInstance,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047344c  USER32.DLL::CreateDialogParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateDialogParamA
HWND __stdcall import_CreateDialogParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047344c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDialogParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473452  USER32.DLL::CreateMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateMenu
HMENU __stdcall import_CreateMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateMenu();
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473458  USER32.DLL::CreatePopupMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreatePopupMenu
HMENU __stdcall import_CreatePopupMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePopupMenu();
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047345e  USER32.DLL::CreateWindowExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateWindowExA
HWND __stdcall import_CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y, int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam )

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047345e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateWindowExA(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473464  USER32.DLL::DefWindowProcA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DefWindowProcA
LRESULT __stdcall import_DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047346a  USER32.DLL::DeferWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DeferWindowPos
HDWP __stdcall import_DeferWindowPos(HDWP hWinPosInfo,HWND hWnd,HWND hWndInsertAfter,int x,int y,int cx,int cy,UINT uFlags )

{
  HDWP pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047346a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = DeferWindowPos(hWinPosInfo,hWnd,hWndInsertAfter,x,y,cx,cy,uFlags);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473470  USER32.DLL::DeleteMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DeleteMenu
BOOL __stdcall import_DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteMenu(hMenu,uPosition,uFlags);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473476  USER32.DLL::DestroyCursor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DestroyCursor
BOOL __stdcall import_DestroyCursor(HCURSOR hCursor)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyCursor(hCursor);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047347c  USER32.DLL::DestroyMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DestroyMenu
BOOL __stdcall import_DestroyMenu(HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047347c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473482  USER32.DLL::DestroyWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DestroyWindow
BOOL __stdcall import_DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473488  USER32.DLL::DialogBoxIndirectParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DialogBoxIndirectParamA
INT_PTR __stdcall import_DialogBoxIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA hDialogTemplate,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  INT_PTR IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = DialogBoxIndirectParamA(hInstance,hDialogTemplate,hWndParent,lpDialogFunc,dwInitParam);
  return IVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047348e  USER32.DLL::DialogBoxParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DialogBoxParamA
INT_PTR __stdcall import_DialogBoxParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  INT_PTR IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047348e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = DialogBoxParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return IVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473494  USER32.DLL::DispatchMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DispatchMessageA
LRESULT __stdcall import_DispatchMessageA(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageA(lpMsg);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047349a  USER32.DLL::DrawEdge   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawEdge
BOOL __stdcall import_DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047349a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawEdge(hdc,qrc,edge,grfFlags);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734a0  USER32.DLL::DrawIcon   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawIcon
BOOL __stdcall import_DrawIcon(HDC hDC,int X,int Y,HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIcon(hDC,X,Y,hIcon);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734a6  USER32.DLL::DrawMenuBar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawMenuBar
BOOL __stdcall import_DrawMenuBar(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawMenuBar(hWnd);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734ac  USER32.DLL::DrawTextA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawTextA
int __stdcall import_DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734b2  USER32.DLL::DrawTextExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawTextExA
int __stdcall import_DrawTextExA(HDC hdc,LPSTR lpchText,int cchText,LPRECT lprc,UINT format,LPDRAWTEXTPARAMS lpdtp)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextExA(hdc,lpchText,cchText,lprc,format,lpdtp);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734b8  USER32.DLL::EnableMenuItem   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnableMenuItem
BOOL __stdcall import_EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734be  USER32.DLL::EnableScrollBar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnableScrollBar
BOOL __stdcall import_EnableScrollBar(HWND hWnd,UINT wSBflags,UINT wArrows)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableScrollBar(hWnd,wSBflags,wArrows);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734c4  USER32.DLL::EnableWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnableWindow
BOOL __stdcall import_EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableWindow(hWnd,bEnable);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734ca  USER32.DLL::EndDeferWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EndDeferWindowPos
BOOL __stdcall import_EndDeferWindowPos(HDWP hWinPosInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndDeferWindowPos(hWinPosInfo);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734d0  USER32.DLL::EndDialog   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EndDialog
BOOL __stdcall import_EndDialog(HWND hDlg,INT_PTR nResult)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndDialog(hDlg,nResult);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734d6  USER32.DLL::EndPaint   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EndPaint
BOOL __stdcall import_EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734dc  USER32.DLL::EnumThreadWindows   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnumThreadWindows
BOOL __stdcall import_EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734e2  USER32.DLL::FindWindowA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::FindWindowA
HWND __stdcall import_FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowA(lpClassName,lpWindowName);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734e8  USER32.DLL::FrameRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::FrameRect
int __stdcall import_FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734ee  USER32.DLL::GetActiveWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetActiveWindow
HWND __stdcall import_GetActiveWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetActiveWindow();
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734f4  USER32.DLL::GetClassInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetClassInfoA
BOOL __stdcall import_GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734fa  USER32.DLL::GetClassNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetClassNameA
int __stdcall import_GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClassNameA(hWnd,lpClassName,nMaxCount);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473500  USER32.DLL::GetClientRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetClientRect
BOOL __stdcall import_GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473506  USER32.DLL::GetCursorPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetCursorPos
BOOL __stdcall import_GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047350c  USER32.DLL::GetDesktopWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetDesktopWindow
HWND __stdcall import_GetDesktopWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDesktopWindow();
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473512  USER32.DLL::GetDlgCtrlID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetDlgCtrlID
int __stdcall import_GetDlgCtrlID(HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDlgCtrlID(hWnd);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473518  USER32.DLL::GetDlgItem   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetDlgItem
HWND __stdcall import_GetDlgItem(HWND hDlg,int nIDDlgItem)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDlgItem(hDlg,nIDDlgItem);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047351e  USER32.DLL::GetFocus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetFocus
HWND __stdcall import_GetFocus(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047351e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetFocus();
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473524  USER32.DLL::GetIconInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetIconInfo
BOOL __stdcall import_GetIconInfo(HICON hIcon,PICONINFO piconinfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetIconInfo(hIcon,piconinfo);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047352a  USER32.DLL::GetKeyState   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetKeyState
SHORT __stdcall import_GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047352a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473530  USER32.DLL::GetMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenu
HMENU __stdcall import_GetMenu(HWND hWnd)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetMenu(hWnd);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473536  USER32.DLL::GetMenuItemCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenuItemCount
int __stdcall import_GetMenuItemCount(HMENU hMenu)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuItemCount(hMenu);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047353c  USER32.DLL::GetMenuItemID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenuItemID
UINT __stdcall import_GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047353c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuItemID(hMenu,nPos);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473542  USER32.DLL::GetMenuState   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenuState
UINT __stdcall import_GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuState(hMenu,uId,uFlags);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473548  USER32.DLL::GetParent   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetParent
HWND __stdcall import_GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047354e  USER32.DLL::GetScrollInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetScrollInfo
BOOL __stdcall import_GetScrollInfo(HWND hwnd,int nBar,LPSCROLLINFO lpsi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047354e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetScrollInfo(hwnd,nBar,lpsi);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473554  USER32.DLL::GetSubMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSubMenu
HMENU __stdcall import_GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSubMenu(hMenu,nPos);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047355a  USER32.DLL::GetSysColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSysColor
DWORD __stdcall import_GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047355a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473560  USER32.DLL::GetSysColorBrush   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSysColorBrush
HBRUSH __stdcall import_GetSysColorBrush(int nIndex)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSysColorBrush(nIndex);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473566  USER32.DLL::GetSystemMetrics   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSystemMetrics
int __stdcall import_GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047356c  USER32.DLL::GetWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindow
HWND __stdcall import_GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047356c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473572  USER32.DLL::GetWindowDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowDC
HDC __stdcall import_GetWindowDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindowDC(hWnd);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473578  USER32.DLL::GetWindowLongA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowLongA
LONG __stdcall import_GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047357e  USER32.DLL::GetWindowPlacement   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowPlacement
BOOL __stdcall import_GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047357e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473584  USER32.DLL::GetWindowRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowRect
BOOL __stdcall import_GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047358a  USER32.DLL::GetWindowTextA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowTextA
int __stdcall import_GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047358a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextA(hWnd,lpString,nMaxCount);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473590  USER32.DLL::GetWindowTextLengthA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowTextLengthA
int __stdcall import_GetWindowTextLengthA(HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextLengthA(hWnd);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473596  USER32.DLL::GetWindowThreadProcessId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowThreadProcessId
DWORD __stdcall import_GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetWindowThreadProcessId(hWnd,lpdwProcessId);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047359c  USER32.DLL::GrayStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GrayStringA
BOOL __stdcall import_GrayStringA(HDC hDC,HBRUSH hBrush,GRAYSTRINGPROC lpOutputFunc,LPARAM lpData,int nCount,int X,int Y, int nWidth,int nHeight)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047359c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GrayStringA(hDC,hBrush,lpOutputFunc,lpData,nCount,X,Y,nWidth,nHeight);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735a2  USER32.DLL::InsertMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::InsertMenuA
BOOL __stdcall import_InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InsertMenuA(hMenu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735a8  USER32.DLL::InvalidateRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::InvalidateRect
BOOL __stdcall import_InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvalidateRect(hWnd,lpRect,bErase);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735ae  USER32.DLL::IsChild   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsChild
BOOL __stdcall import_IsChild(HWND hWndParent,HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsChild(hWndParent,hWnd);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735b4  USER32.DLL::IsClipboardFormatAvailable   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsClipboardFormatAvailable
BOOL __stdcall import_IsClipboardFormatAvailable(UINT format)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsClipboardFormatAvailable(format);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735ba  USER32.DLL::IsDialogMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsDialogMessageA
BOOL __stdcall import_IsDialogMessageA(HWND hDlg,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDialogMessageA(hDlg,lpMsg);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735c0  USER32.DLL::IsIconic   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsIconic
BOOL __stdcall import_IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735c6  USER32.DLL::IsMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsMenu
BOOL __stdcall import_IsMenu(HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsMenu(hMenu);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735cc  USER32.DLL::IsWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsWindow
BOOL __stdcall import_IsWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindow(hWnd);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735d2  USER32.DLL::IsWindowEnabled   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsWindowEnabled
BOOL __stdcall import_IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735d8  USER32.DLL::IsWindowVisible   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsWindowVisible
BOOL __stdcall import_IsWindowVisible(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowVisible(hWnd);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735de  USER32.DLL::IsZoomed   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsZoomed
BOOL __stdcall import_IsZoomed(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsZoomed(hWnd);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735e4  USER32.DLL::KillTimer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::KillTimer
BOOL __stdcall import_KillTimer(HWND hWnd,UINT_PTR uIDEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = KillTimer(hWnd,uIDEvent);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735ea  USER32.DLL::LoadAcceleratorsA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadAcceleratorsA
HACCEL __stdcall import_LoadAcceleratorsA(HINSTANCE hInstance,LPCSTR lpTableName)

{
  HACCEL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadAcceleratorsA(hInstance,lpTableName);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735f0  USER32.DLL::LoadCursorA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadCursorA
HCURSOR __stdcall import_LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorA(hInstance,lpCursorName);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735f6  USER32.DLL::LoadIconA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadIconA
HICON __stdcall import_LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004735fc  USER32.DLL::LoadImageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadImageA
HANDLE __stdcall import_LoadImageA(HINSTANCE hInst,LPCSTR name,UINT type,int cx,int cy,UINT fuLoad)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadImageA(hInst,name,type,cx,cy,fuLoad);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473602  USER32.DLL::LoadMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadMenuA
HMENU __stdcall import_LoadMenuA(HINSTANCE hInstance,LPCSTR lpMenuName)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadMenuA(hInstance,lpMenuName);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473608  USER32.DLL::LoadStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadStringA
int __stdcall import_LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047360e  USER32.DLL::MapWindowPoints   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MapWindowPoints
int __stdcall import_MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047360e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473614  USER32.DLL::MessageBeep   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBeep
BOOL __stdcall import_MessageBeep(UINT uType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MessageBeep(uType);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047361a  USER32.DLL::MessageBoxA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBoxA
int __stdcall import_MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047361a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473620  USER32.DLL::MessageBoxExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBoxExA
int __stdcall import_MessageBoxExA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType,WORD wLanguageId)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxExA(hWnd,lpText,lpCaption,uType,wLanguageId);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473626  USER32.DLL::ModifyMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ModifyMenuA
BOOL __stdcall import_ModifyMenuA(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ModifyMenuA(hMnu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047362c  USER32.DLL::MsgWaitForMultipleObjects   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MsgWaitForMultipleObjects
DWORD __stdcall import_MsgWaitForMultipleObjects(DWORD nCount,HANDLE *pHandles,BOOL fWaitAll,DWORD dwMilliseconds,DWORD dwWakeMask)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047362c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = MsgWaitForMultipleObjects(nCount,pHandles,fWaitAll,dwMilliseconds,dwWakeMask);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473632  USER32.DLL::OpenClipboard   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::OpenClipboard
BOOL __stdcall import_OpenClipboard(HWND hWndNewOwner)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenClipboard(hWndNewOwner);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473638  USER32.DLL::PeekMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::PeekMessageA
BOOL __stdcall import_PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PeekMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047363e  USER32.DLL::PostMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::PostMessageA
BOOL __stdcall import_PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047363e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageA(hWnd,Msg,wParam,lParam);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473644  USER32.DLL::PostQuitMessage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::PostQuitMessage
void __stdcall import_PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00473644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047364a  USER32.DLL::RegisterClassA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::RegisterClassA
ATOM __stdcall import_RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047364a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473650  USER32.DLL::RegisterWindowMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::RegisterWindowMessageA
UINT __stdcall import_RegisterWindowMessageA(LPCSTR lpString)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterWindowMessageA(lpString);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473656  USER32.DLL::ReleaseCapture   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ReleaseCapture
BOOL __stdcall import_ReleaseCapture(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseCapture();
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047365c  USER32.DLL::ReleaseDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ReleaseDC
int __stdcall import_ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047365c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473662  USER32.DLL::ScreenToClient   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ScreenToClient
BOOL __stdcall import_ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473668  USER32.DLL::ScrollWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ScrollWindow
BOOL __stdcall import_ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScrollWindow(hWnd,XAmount,YAmount,lpRect,lpClipRect);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047366e  USER32.DLL::SendDlgItemMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SendDlgItemMessageA
LRESULT __stdcall import_SendDlgItemMessageA(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047366e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendDlgItemMessageA(hDlg,nIDDlgItem,Msg,wParam,lParam);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473674  USER32.DLL::SendMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SendMessageA
LRESULT __stdcall import_SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047367a  USER32.DLL::SetCapture   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetCapture
HWND __stdcall import_SetCapture(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047367a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCapture(hWnd);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473680  USER32.DLL::SetCursor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetCursor
HCURSOR __stdcall import_SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473686  USER32.DLL::SetFocus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetFocus
HWND __stdcall import_SetFocus(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetFocus(hWnd);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047368c  USER32.DLL::SetMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetMenu
BOOL __stdcall import_SetMenu(HWND hWnd,HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047368c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenu(hWnd,hMenu);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473692  USER32.DLL::SetParent   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetParent
HWND __stdcall import_SetParent(HWND hWndChild,HWND hWndNewParent)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetParent(hWndChild,hWndNewParent);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473698  USER32.DLL::SetScrollInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetScrollInfo
int __stdcall import_SetScrollInfo(HWND hwnd,int nBar,LPCSCROLLINFO lpsi,BOOL redraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetScrollInfo(hwnd,nBar,lpsi,redraw);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047369e  USER32.DLL::SetTimer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetTimer
UINT_PTR __stdcall import_SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc)

{
  UINT_PTR UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047369e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTimer(hWnd,nIDEvent,uElapse,lpTimerFunc);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736a4  USER32.DLL::SetWindowLongA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowLongA
LONG __stdcall import_SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736aa  USER32.DLL::SetWindowPlacement   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowPlacement
BOOL __stdcall import_SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736b0  USER32.DLL::SetWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowPos
BOOL __stdcall import_SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736b6  USER32.DLL::SetWindowTextA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowTextA
BOOL __stdcall import_SetWindowTextA(HWND hWnd,LPCSTR lpString)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowTextA(hWnd,lpString);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736bc  USER32.DLL::ShowScrollBar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ShowScrollBar
BOOL __stdcall import_ShowScrollBar(HWND hWnd,int wBar,BOOL bShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowScrollBar(hWnd,wBar,bShow);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736c2  USER32.DLL::ShowWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ShowWindow
BOOL __stdcall import_ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736c8  USER32.DLL::SystemParametersInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SystemParametersInfoA
BOOL __stdcall import_SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemParametersInfoA(uiAction,uiParam,pvParam,fWinIni);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736ce  USER32.DLL::TabbedTextOutA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TabbedTextOutA
LONG __stdcall import_TabbedTextOutA(HDC hdc,int x,int y,LPCSTR lpString,int chCount,int nTabPositions, INT *lpnTabStopPositions,int nTabOrigin)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = TabbedTextOutA(hdc,x,y,lpString,chCount,nTabPositions,lpnTabStopPositions,nTabOrigin);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736d4  USER32.DLL::TrackPopupMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TrackPopupMenu
BOOL __stdcall import_TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TrackPopupMenu(hMenu,uFlags,x,y,nReserved,hWnd,prcRect);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736da  USER32.DLL::TranslateAcceleratorA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TranslateAcceleratorA
int __stdcall import_TranslateAcceleratorA(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = TranslateAcceleratorA(hWnd,hAccTable,lpMsg);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736e0  USER32.DLL::TranslateMDISysAccel   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TranslateMDISysAccel
BOOL __stdcall import_TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMDISysAccel(hWndClient,lpMsg);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736e6  USER32.DLL::TranslateMessage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TranslateMessage
BOOL __stdcall import_TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736ec  USER32.DLL::UnregisterClassA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::UnregisterClassA
BOOL __stdcall import_UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnregisterClassA(lpClassName,hInstance);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736f2  USER32.DLL::UpdateWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::UpdateWindow
BOOL __stdcall import_UpdateWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateWindow(hWnd);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736f8  USER32.DLL::WaitMessage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::WaitMessage
BOOL __stdcall import_WaitMessage(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WaitMessage();
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004736fe  USER32.DLL::WindowFromPoint   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::WindowFromPoint
HWND __stdcall import_WindowFromPoint(POINT Point)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004736fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = WindowFromPoint(Point);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473704  USER32.DLL::wsprintfA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::wsprintfA
int __cdecl import_wsprintfA(LPSTR param_1,LPCSTR param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wsprintfA(param_1,param_2);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047370a  USER32.DLL::GetSystemMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSystemMenu
HMENU __stdcall import_GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047370a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSystemMenu(hWnd,bRevert);
  return pHVar1;
}

} // namespace tea
