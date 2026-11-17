// TEACON.exe — application module "Persist"
// 9 functions, 0x0041193c..0x00411e94. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041193c  Persist::Persist   (201 bytes)   [analysis]
//   opens or creates the registry key (RegOpenKeyExA / RegCreateKeyExA)
char * __cdecl Persist::Persist(char *param_1,int param_2,char param_3,char param_4)

{
  HKEY hKey;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x42df7c);
  *param_1 = param_3;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  while( true ) {
    if (param_4 == '\0') {
      hKey = (HKEY)0x80000001;
    }
    else {
      hKey = (HKEY)0x80000002;
    }
    local_18 = 8;
    if (*param_1 == '\x01') {
      iVar1 = RegCreateKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,&DAT_0042defe,0,0x2001f,
                              (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)(param_1 + 4),&local_2c);
    }
    else {
      iVar1 = RegOpenKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,0x20019,(PHKEY)(param_1 + 4));
    }
    if (iVar1 == 0) break;
    if (param_4 == '\0') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *in_FS_OFFSET = local_28;
LAB_004119f3:
      *in_FS_OFFSET = local_28;
      return param_1;
    }
    param_4 = '\0';
  }
  *in_FS_OFFSET = local_28;
  goto LAB_004119f3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411a20  Persist::~Persist   (42 bytes)   [rtti:dtor destructor]
//   written in code as Persist::_dtor
void __cdecl Persist::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(HKEY *)(param_1 + 4) != (HKEY)0x0) {
      RegCloseKey(*(HKEY *)(param_1 + 4));
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411a4c  Persist::QueryValueSized   (116 bytes)   [analysis]
//   RegQueryValueExA wrapper
undefined4 __cdecl Persist::QueryValueSized(int param_1,int param_2,int param_3)

{
  int iVar1;
  LSTATUS LVar2;
  uint auStackY_1000c [15352];
  undefined4 uStackY_102c;
  DWORD local_c [2];
  
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 4) != 0) {
    local_c[1] = 0x10000;
    local_c[0] = 1;
    uStackY_102c = 0x411a9e;
    LVar2 = RegQueryValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),(LPDWORD)0x0,local_c,
                             (LPBYTE)auStackY_1000c,local_c + 1);
    if (LVar2 == 0) {
      iVar1 = FUN_00416c68(param_3,auStackY_1000c);
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411ac0  Persist::QueryValue   (83 bytes)   [analysis]
//   RegQueryValueExA wrapper
undefined4 __cdecl Persist::QueryValue(int param_1,int param_2,undefined4 *param_3)

{
  LSTATUS LVar1;
  DWORD local_10 [2];
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_10[1] = 4;
    local_10[0] = 4;
    LVar1 = RegQueryValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),(LPDWORD)0x0,local_10,
                             (LPBYTE)&local_8,local_10 + 1);
    if (LVar1 == 0) {
      *param_3 = local_8;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411b14  FUN_00411b14   (364 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00411b14(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x42dfb0);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_3 + 8),uVar1);
  }
  else {
    local_c = *(int **)(param_3 + 8);
    piVar4 = local_c + -3;
    if (piVar4 != &DAT_0042fab4) {
      *piVar4 = *piVar4 + 1;
    }
  }
  uVar2 = Persist::QueryValueSized(param_1,param_2,(int)local_14);
  FUN_00411dd8((char *)local_c,param_4);
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00411c6e;
    }
    operator_delete();
  }
LAB_00411c6e:
  *in_FS_OFFSET = local_38;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c80  FUN_00411c80   (248 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00411cbe) */
uint __cdecl FUN_00411c80(int param_1,int param_2,uint *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  __InitExceptBlockLDTC(0x42e008);
  local_c = &DAT_0042fac0;
  uVar2 = Persist::QueryValueSized(param_1,param_2,(int)local_14);
  cVar1 = (char)uVar2;
  if (cVar1 == '\x01') {
    uVar2 = FUN_00411d78(local_c,param_3);
  }
  uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),cVar1);
  if (local_c != (char *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00411d66;
    }
    operator_delete();
  }
LAB_00411d66:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411d78  FUN_00411d78   (95 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
uint * __cdecl FUN_00411d78(char *param_1,uint *param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar4;
  uint uVar5;
  int iVar3;
  
  pcVar2 = FUN_0041f304(param_1,PTR_DAT_0042def8);
  if (pcVar2 == (char *)0x0) {
    bVar1 = 0;
  }
  else {
    iVar3 = FUN_00424b58(pcVar2);
    bVar1 = (byte)iVar3;
  }
  uVar4 = FUN_00411910();
  uVar5 = FUN_00411910();
  *param_2 = (uint)bVar1 | (uVar4 & 0xff) << 8 | (uVar5 & 0xff) << 0x10;
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411dd8  FUN_00411dd8   (186 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00411dd8(char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  memset(param_2,0,0x40);
  FUN_00411d78(param_1,param_2);
  uVar1 = FUN_00411910();
  param_2[1] = uVar1;
  uVar1 = FUN_00411910();
  param_2[2] = uVar1;
  uVar1 = FUN_00411910();
  param_2[3] = uVar1;
  uVar1 = FUN_00411910();
  param_2[4] = uVar1;
  uVar1 = FUN_00411910();
  param_2[5] = uVar1;
  iVar2 = FUN_00411910();
  *(char *)(param_2 + 6) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x19) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1a) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1b) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)(param_2 + 7) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1d) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1e) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1f) = (char)iVar2;
  puVar3 = (uint *)FUN_0041f304((char *)0x0,PTR_DAT_0042def8);
  if (puVar3 == (uint *)0x0) {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else {
    FUN_0041f1c0(param_2 + 8,puVar3,(char *)0x20);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411e94  FUN_00411e94   (162 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00411f15) */
/* WARNING: Removing unreachable block (ram,0x00411edb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00411ee6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FUN_00411e94(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42e1b4);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  *param_1 = 0x100;
  param_1[10] = 0;
  param_1[10] = &DAT_0042fac0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
