// TSMerge.exe — runtime / library code "code_0x00430000"
// 54 functions, 0x004306a4..0x00433da0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004306a4  FUN_004306a4   (238 bytes)   [unnamed]
void __cdecl FUN_004306a4(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46b484);
  if (*(int *)(param_1 + 0x31) != 0) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0) {
      if (*(int *)(param_1 + 0x31) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x31) + 0xc))();
      }
    }
    else {
      FUN_0042d1a4(**(int **)(param_1 + 0x31),0x10,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0x31) = param_2;
  if ((((*(int *)(param_1 + 0x31) != 0) && (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0)) &&
      (*(int *)(param_1 + 0x2b) != 0)) && (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) != 0)) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == 0) {
      (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
    }
    FUN_0042d484(**(int **)(param_1 + 0x31),0,0x8000000,0);
    (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x10))();
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430928  FUN_00430928   (62 bytes)   [unnamed]
void __cdecl FUN_00430928(int param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_2 + 8) + 0x34))();
  *(undefined4 *)(param_2 + 0x7e) = 0;
  if (*(int *)(param_1 + 0x67) == 0) {
    *(int *)(param_1 + 0x67) = param_2;
  }
  else {
    for (iVar1 = *(int *)(param_1 + 0x67); *(int *)(iVar1 + 0x7e) != 0;
        iVar1 = *(int *)(iVar1 + 0x7e)) {
    }
    *(int *)(iVar1 + 0x7e) = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430968  FUN_00430968   (65 bytes)   [unnamed]
void __cdecl FUN_00430968(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x67) != 0)) {
    iVar1 = 0;
    if (param_2 != *(int *)(param_1 + 0x67)) {
      for (iVar1 = *(int *)(param_1 + 0x67); param_2 != *(int *)(iVar1 + 0x7e);
          iVar1 = *(int *)(iVar1 + 0x7e)) {
        if (*(int *)(iVar1 + 0x7e) == 0) {
          return;
        }
      }
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x7e) = *(undefined4 *)(param_2 + 0x7e);
      return;
    }
    *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x7e);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004309ac  FUN_004309ac   (102 bytes)   [unnamed]
void __cdecl FUN_004309ac(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46b4fc);
  while (*(int *)(param_1 + 0x67) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x67) + 0x7e);
    if (*(int *)(param_1 + 0x67) != 0) {
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x67) + 8))();
    }
    *(undefined4 *)(param_1 + 0x67) = uVar1;
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430a14  FUN_00430a14   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_00430a14(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b52c);
  FUN_00417f7c(param_1,0x7ff7,DAT_00470a60);
  *param_1 = &OWL::TXInvalidMainWindow::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430c34  FUN_00430c34   (78 bytes)   [unnamed]
void __stdcall FUN_00430c34(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x46b5a4);
  piVar1 = FUN_00430a14(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430cc8  FUN_00430cc8   (77 bytes)   [unnamed]
undefined4 __stdcall FUN_00430cc8(HWND param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = GetWindowLongA(param_1,-0x10);
  if (((uVar2 & 0x40000000) == 0) && (param_1 != (HWND)*param_2)) {
    uVar2 = IsWindowEnabled(param_1);
    if (uVar2 != 0) {
      if (*(int *)((int)param_2 + 6) == 0) {
        *(short *)(param_2 + 1) = (short)param_2[1] + 1;
      }
      else {
        puVar1 = *(undefined4 **)((int)param_2 + 6);
        *(int *)((int)param_2 + 6) = *(int *)((int)param_2 + 6) + 4;
        *puVar1 = param_1;
        uVar2 = EnableWindow(param_1,0);
      }
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d15  FUN_00430d15   (85 bytes)   [unnamed]
void __cdecl FUN_00430d15(int *param_1)

{
  BOOL BVar1;
  int *piVar2;
  
  if (*(int *)((int)param_1 + 6) == 0) {
    if (*param_1 != 0) {
      BVar1 = IsWindow((HWND)*param_1);
      if (BVar1 != 0) {
        EnableWindow((HWND)*param_1,1);
        *param_1 = 0;
      }
    }
  }
  else {
    for (piVar2 = *(int **)((int)param_1 + 6); *piVar2 != 0; piVar2 = piVar2 + 1) {
      EnableWindow((HWND)*piVar2,1);
    }
    operator_delete_array();
    *(undefined4 *)((int)param_1 + 6) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d6c  FUN_00430d6c   (290 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_00430d6c(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  code *pcVar8;
  int local_40;
  short local_3c;
  undefined4 *local_3a;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x46b61c);
  piVar1 = &DAT_0046b5ec;
  piVar6 = &local_40;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar1;
    piVar1 = piVar1 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  *(short *)piVar6 = (short)*piVar1;
  piVar1 = (int *)FUN_0042e55c();
  local_2c = *piVar1;
  *piVar1 = (int)&local_40;
  if ((param_3 & 0x1000) != 0) {
    param_3 = param_3 & 0xffffefff | 0x2000;
  }
  if ((param_3 & 0x2000) == 0) {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
      (**(code **)(*(int *)(param_2 + 8) + 0x60))();
    }
  }
  else {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
    }
    piVar1 = &local_40;
    pcVar8 = FUN_00430cc8;
    DVar2 = GetCurrentThreadId();
    BVar3 = EnumThreadWindows(DVar2,pcVar8,(LPARAM)piVar1);
    if (BVar3 == 0) {
      *in_FS_OFFSET = local_28;
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)operator_new_array();
    local_3a = puVar4;
    memset(puVar4,0,(local_3c + 1) * 4);
    piVar1 = &local_40;
    pcVar8 = FUN_00430cc8;
    DVar2 = GetCurrentThreadId();
    EnumThreadWindows(DVar2,pcVar8,(LPARAM)piVar1);
    local_3a = puVar4;
  }
  local_18 = 8;
  local_30 = (**(code **)(*(int *)(param_1 + 0x1b) + 0x10))();
  local_18 = 0;
  piVar1 = (int *)FUN_0042e55c();
  *piVar1 = local_2c;
  FUN_00430d15(&local_40);
  *in_FS_OFFSET = local_28;
  return local_30;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430ebc  FUN_00430ebc   (36 bytes)   [unnamed]
void __cdecl FUN_00430ebc(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x16) = param_2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  piVar1 = (int *)FUN_0042e55c();
  if (*piVar1 != 0) {
    FUN_00430d15((int *)*piVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430ee0  FUN_00430ee0   (55 bytes)   [unnamed]
void __cdecl FUN_00430ee0(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x52) != '\0') {
    if (param_2 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x53) + 0xd))();
      (**(code **)(*(int *)(param_1 + 0x53) + 0x15))();
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x53) + 0x11))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430f34  FUN_00430f34   (64 bytes)   [unnamed]
void __stdcall FUN_00430f34(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b631);
  if (DAT_0046b630 != '\0') {
    OWL::TBrushCache::_dtor(0x4771ac,2);
    DAT_0046b630 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430f74  FUN_00430f74   (73 bytes)   [unnamed]
undefined * __stdcall FUN_00430f74(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b64c);
  if (DAT_0046b630 == '\0') {
    FUN_00431010((undefined4 *)&DAT_004771ac);
    DAT_0046b630 = DAT_0046b630 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_004771ac;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431010  FUN_00431010   (70 bytes)   [unnamed]
undefined4 * __cdecl FUN_00431010(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b670);
  param_1[0x30] = 0x10;
  memset(param_1,0,0xc0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004310d8  FUN_004310d8   (77 bytes)   [unnamed]
void __cdecl FUN_004310d8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1[param_2 * 3];
    uVar2 = param_1[param_2 * 3 + 1];
    uVar3 = param_1[param_2 * 3 + 2];
    FUN_004559f4(param_1 + 3,param_1,param_2 * 0xc);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431128  FUN_00431128   (188 bytes)   [unnamed]
undefined1 __cdecl FUN_00431128(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 local_5;
  
  local_5 = 1;
  if (param_1[param_1[0x30] * 3 + -3] == 0) {
    FUN_004559f4(param_1 + 3,param_1,(param_1[0x30] - 1) * 0xc);
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
  }
  else {
    uVar1 = param_1[0x30];
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) goto LAB_0043119a;
    } while (param_1[uVar1 * 3 + 2] != 0);
    FUN_0041d184(param_1[uVar1 * 3]);
    param_1[uVar1 * 3] = param_2;
    param_1[uVar1 * 3 + 1] = param_3;
    param_1[uVar1 * 3 + 2] = 1;
    FUN_004310d8(param_1,uVar1);
LAB_0043119a:
    if ((int)uVar1 < 0) {
      local_5 = 0;
    }
  }
  FUN_0041cf04(param_2,2);
  return local_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004311e4  FUN_004311e4   (53 bytes)   [unnamed]
void __cdecl FUN_004311e4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = 0; (iVar2 < *(int *)(param_1 + 0xc0) && (*(int *)(param_1 + iVar2 * 0xc) != 0));
      iVar2 = iVar2 + 1) {
    if (param_2 == *(int *)(param_1 + iVar2 * 0xc)) {
      piVar1 = (int *)(param_1 + 8 + iVar2 * 0xc);
      *piVar1 = *piVar1 + -1;
      return;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043121c  FUN_0043121c   (57 bytes)   [unnamed]
undefined4 __cdecl FUN_0043121c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = 0; (iVar2 < *(int *)(param_1 + 0xc0) && (*(int *)(param_1 + iVar2 * 0xc) != 0));
      iVar2 = iVar2 + 1) {
    if (param_2 == *(int *)(param_1 + iVar2 * 0xc)) {
      piVar1 = (int *)(param_1 + 8 + iVar2 * 0xc);
      *piVar1 = *piVar1 + 1;
      return CONCAT31((int3)((uint)(iVar2 * 3) >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431258  FUN_00431258   (68 bytes)   [unnamed]
undefined4 __cdecl FUN_00431258(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 < (int)param_1[0x30] && (param_1[iVar1 * 3] != 0)); iVar1 = iVar1 + 1) {
    if (param_2 == param_1[iVar1 * 3 + 1]) {
      param_1[iVar1 * 3 + 2] = param_1[iVar1 * 3 + 2] + 1;
      FUN_004310d8(param_1,iVar1);
      return *param_1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043129c  FUN_0043129c   (104 bytes)   [unnamed]
uint * __cdecl FUN_0043129c(uint *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint uVar2;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b694);
  FUN_0041d2fc(param_1,param_2,param_3);
  if ((char)param_1[1] == '\0') {
    uVar2 = *param_1;
    puVar1 = FUN_00430f74();
    FUN_0043121c((int)puVar1,uVar2);
  }
  else {
    FUN_0041cf04(*param_1,2);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431320  FUN_00431320   (261 bytes)   [unnamed]
uint * __cdecl FUN_00431320(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  HBRUSH pHVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b6b8);
  FUN_0041d2ac(param_1);
  *(bool *)(param_1 + 1) = param_3 == '\0';
  uVar2 = FUN_00415340(param_2);
  if (param_3 != '\0') {
    uVar4 = uVar2;
    puVar3 = (undefined4 *)FUN_00430f74();
    uVar4 = FUN_00431258(puVar3,uVar4);
    *param_1 = uVar4;
    if (uVar4 != 0) {
      *in_FS_OFFSET = local_28;
      goto LAB_00431411;
    }
  }
  if ((*param_2 & 0xf0000000) == 0x80000000) {
    pHVar5 = GetSysColorBrush(*param_2 & 0xffff);
    *param_1 = (uint)pHVar5;
  }
  else {
    pHVar5 = CreateSolidBrush(uVar2);
    *param_1 = (uint)pHVar5;
  }
  FUN_0041c800((int *)param_1,0x7fe3);
  if (param_3 == '\0') {
    FUN_0041cf04(*param_1,2);
  }
  else {
    uVar4 = FUN_00415340(param_2);
    uVar2 = *param_1;
    puVar6 = (uint *)FUN_00430f74();
    cVar1 = FUN_00431128(puVar6,uVar2,uVar4);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_00431411:
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431494  FUN_00431494   (74 bytes)   [unnamed]
uint * __cdecl FUN_00431494(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH pHVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b700);
  iVar2 = 1;
  pHVar1 = FUN_00431540(param_2,param_3,param_4);
  FUN_0043129c(param_1,pHVar1,iVar2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431504  FUN_00431504   (58 bytes)   [unnamed]
void __cdecl FUN_00431504(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH pHVar1;
  
  if (*param_1 != 0) {
    FUN_0041d184(*param_1);
  }
  pHVar1 = FUN_00431540(param_2,param_3,param_4);
  *param_1 = (uint)pHVar1;
  FUN_0041cf04(*param_1,2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431540  FUN_00431540   (199 bytes)   [unnamed]
HBRUSH __cdecl FUN_00431540(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  HBRUSH pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  HGLOBAL local_24 [5];
  undefined4 *local_f;
  
  __InitExceptBlockLDTC(0x46b734);
  FUN_00435b3c((int *)local_24,8,8,2,0);
  memset(local_f,0,0x20);
  iVar1 = 0;
  do {
    *(undefined1 *)(local_f + (7 - iVar1)) = *(undefined1 *)(param_1 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  FUN_004355bc((int)local_24,0,param_3);
  FUN_004355bc((int)local_24,1,param_2);
  pHVar2 = CreateDIBPatternBrush(local_24[0],0);
  FUN_0041c818((int)pHVar2,0x7fe3);
  OWL::TDib::_dtor((int *)local_24,2);
  *in_FS_OFFSET = local_48;
  return pHVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004316d8  FUN_004316d8   (312 bytes)   [unnamed]
int * __cdecl FUN_004316d8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b894);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x26;
    *(int *)((int)param_1 + 0x26) = (int)param_1 + 0x1a;
    *(int *)((int)param_1 + 0x2a) = (int)param_1 + 0x1e;
    param_1[1] = (int)param_1 + 0x1a;
    param_1[2] = (int)param_1 + 0x1e;
    *(undefined4 *)((int)param_1 + 0x16) = 0;
    *(undefined4 *)((int)param_1 + 0x22) = 0;
    *(undefined ***)((int)param_1 + 0x1a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x1e) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x26),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -2;
  FUN_00432414(param_1,1,param_3,param_4,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 2;
  param_1[3] = (int)&OWL::TButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046b7e4;
  *(undefined ***)param_1[2] = &PTR_LAB_0046b7f0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046b7fc;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffeff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004319f8  FUN_004319f8   (86 bytes)   [unnamed]
void __stdcall FUN_004319f8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b8ec);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00431d1c;
  puVar1 = FUN_0045666c(1,0,0x405354);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477270,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431a4e  FUN_00431a4e   (48 bytes)   [unnamed]
void __stdcall FUN_00431a4e(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b900);
  OWL::TStreamableClass::_dtor(0x477270,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431a80  FUN_00431a80   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_00431a80(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b908);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TButton::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_00405354,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431ae8  FUN_00431ae8   (283 bytes)   [unnamed]
int * __cdecl FUN_00431ae8(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b920);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x26;
    *(int *)((int)param_1 + 0x26) = (int)param_1 + 0x1a;
    *(int *)((int)param_1 + 0x2a) = (int)param_1 + 0x1e;
    param_1[1] = (int)param_1 + 0x1a;
    param_1[2] = (int)param_1 + 0x1e;
    *(undefined4 *)((int)param_1 + 0x16) = 0;
    *(undefined4 *)((int)param_1 + 0x22) = 0;
    *(undefined ***)((int)param_1 + 0x1a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x1e) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x26),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -2;
  FUN_004328e4(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 2;
  param_1[3] = (int)&OWL::TButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046b7e4;
  *(undefined ***)param_1[2] = &PTR_LAB_0046b7f0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046b7fc;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431c04  EvRegisteredMsg_431c04_431c04   (55 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TButton::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_431c04_431c04(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00431c3c(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00422970(param_2);
  *(bool *)(iVar1 + 0x14) = iVar2 != 0;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00431c3c  FUN_00431c3c   (87 bytes)   [unnamed]
void __cdecl FUN_00431c3c(int param_1,int *param_2)

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
  piVar1 = FUN_0043287c(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431cc8  FUN_00431cc8   (81 bytes)   [unnamed]
void __cdecl FUN_00431cc8(int param_1,int *param_2)

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
  FUN_0043287c(local_14,piVar1);
  local_8 = 2;
  FUN_00422d00(param_2,&local_8,4);
  OWL::TControl::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431d1c  FUN_00431d1c   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00431d1c(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46b954);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_00431ae8(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_00431a80(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431e7c  EvGetDlgCode_431e7c   (18 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
void __cdecl EvGetDlgCode_431e7c(int *param_1)

{
  FUN_0042b294(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431f2c  FUN_00431f2c   (309 bytes)   [unnamed]
int * __cdecl FUN_00431f2c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46bad8);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x2a;
    *(int *)((int)param_1 + 0x2a) = (int)param_1 + 0x1e;
    *(int *)((int)param_1 + 0x2e) = (int)param_1 + 0x22;
    param_1[1] = (int)param_1 + 0x1e;
    param_1[2] = (int)param_1 + 0x22;
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    *(undefined ***)((int)param_1 + 0x1e) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x22) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x2a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004316d8(param_1,1,param_3,param_4,param_6);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TCheckBox::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046ba28;
  *(undefined ***)param_1[2] = &PTR_LAB_0046ba34;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046ba40;
  *(undefined4 *)((int)param_1 + 0x16) = param_5;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x100;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004321c4  FUN_004321c4   (54 bytes)   [unnamed]
void __cdecl FUN_004321c4(int *param_1,WPARAM param_2)

{
  FUN_0042d1a4(*param_1,0xf1,param_2,0);
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004321fc  BNClicked_4321fc   (42 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl BNClicked_4321fc(int *param_1)

{
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  FUN_0042b294(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432270  FUN_00432270   (323 bytes)   [unnamed]
int * __cdecl FUN_00432270(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 )

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46bbc0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&OWL::TEventHandler::vftable;
    param_1[7] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TControl::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046bc0c;
  *(undefined ***)param_1[2] = &PTR_LAB_0046bc18;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046bc24;
  FUN_0042ac60(*param_1,param_3,param_5,param_10);
  *(undefined4 *)(*param_1 + 0x34) = param_4;
  *(undefined4 *)(*param_1 + 0x20) = param_6;
  *(undefined4 *)(*param_1 + 0x24) = param_7;
  *(undefined4 *)(*param_1 + 0x28) = param_8;
  *(undefined4 *)(*param_1 + 0x2c) = param_9;
  *(undefined4 *)(*param_1 + 0x18) = 0x50030000;
  param_1[4] = 2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432414  FUN_00432414   (347 bytes)   [unnamed]
int * __cdecl FUN_00432414(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46bcbc);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&OWL::TEventHandler::vftable;
    param_1[7] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TControl::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046bc0c;
  *(undefined ***)param_1[2] = &PTR_LAB_0046bc18;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046bc24;
  FUN_0042ac60(*param_1,param_3,(uint *)0x0,param_5);
  if ((short)((uint)*(undefined4 *)(*param_1 + 0x10) >> 0x10) != 0) {
    operator_delete_array();
  }
  *(undefined4 *)(*param_1 + 0x10) = 0;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 4;
  memset((undefined4 *)(*param_1 + 0x18),0,0x28);
  *(undefined4 *)(*param_1 + 0x34) = param_4;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x100;
  param_1[4] = 2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004327f4  FUN_004327f4   (86 bytes)   [unnamed]
void __stdcall FUN_004327f4(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46bd04);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00432afc;
  puVar1 = FUN_0045666c(1,0,0x40580c);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477280,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043284a  FUN_0043284a   (48 bytes)   [unnamed]
void __stdcall FUN_0043284a(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46bd18);
  OWL::TStreamableClass::_dtor(0x477280,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043287c  FUN_0043287c   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043287c(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46bd20);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TControl::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_0040580c,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004328e4  FUN_004328e4   (250 bytes)   [unnamed]
int * __cdecl FUN_004328e4(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46bd38);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&OWL::TEventHandler::vftable;
    param_1[7] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00424a28(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TControl::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046bc0c;
  *(undefined ***)param_1[2] = &PTR_LAB_0046bc18;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046bc24;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432a18  FUN_00432a18   (87 bytes)   [unnamed]
void __cdecl FUN_00432a18(int param_1,int *param_2)

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
    piVar1 = *(int **)(param_1 + 4);
  }
  piVar1 = FUN_004249c0(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432aa8  FUN_00432aa8   (81 bytes)   [unnamed]
void __cdecl FUN_00432aa8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 4);
  }
  FUN_004249c0(local_14,piVar1);
  local_8 = 3;
  FUN_00422d00(param_2,&local_8,4);
  OWL::TWindow::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432afc  FUN_00432afc   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00432afc(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46bd6c);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004328e4(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_0043287c(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432c14  FUN_00432c14   (141 bytes)   [unnamed]
int * __cdecl FUN_00432c14(undefined4 param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46bdd4);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    puVar2 = (uint *)operator_new();
    if (puVar2 != (uint *)0x0) {
      FUN_0041a0b0(puVar2,10,'\0',0);
    }
    FUN_00415f60(piVar1,0,param_1,0,puVar2,iVar3);
  }
  *in_FS_OFFSET = local_30;
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432ca1  FUN_00432ca1   (86 bytes)   [unnamed]
undefined4 __cdecl FUN_00432ca1(int param_1,int *param_2)

{
  undefined4 in_EAX;
  BOOL BVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_1 == *param_2) {
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    if ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1]) {
      if (*(int *)(param_1 + 0xc) == 0) {
        bVar3 = (*(byte *)(param_1 + 0x1b) & 0x10) != 0;
      }
      else {
        BVar1 = IsWindowVisible(*(HWND *)(param_1 + 0xc));
        bVar3 = BVar1 != 0;
      }
      if (bVar3) {
        param_2[2] = param_1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432cf7  FUN_00432cf7   (41 bytes)   [unnamed]
undefined4 __cdecl FUN_00432cf7(int param_1,int *param_2)

{
  if ((param_1 != *param_2) && ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1])) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432d20  FUN_00432d20   (42 bytes)   [unnamed]
undefined4 __cdecl FUN_00432d20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0042d188(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043381c  FUN_0043381c   (387 bytes)   [unnamed]
void __cdecl FUN_0043381c(int param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  undefined4 local_39;
  int local_35;
  byte local_31;
  byte local_30;
  byte local_2f;
  undefined4 local_2e;
  undefined4 local_2a;
  byte local_26;
  byte local_25;
  byte local_24;
  undefined4 local_23;
  byte local_1b;
  byte local_1a;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0041efe0(&local_40);
  FUN_0041e0e8(param_1 + 4,param_3,&local_40);
  local_8 = local_35;
  if ((*(byte *)(param_3 + 0x1a) & 0x80) == 0) {
    bVar1 = 3;
  }
  else {
    bVar1 = 4;
  }
  local_35 = param_2;
  local_31 = local_31 & 0xf0 | 1;
  local_30 = bVar1 | local_30 & 0xf0;
  local_2f = local_2f & 0xf0 | 3;
  local_2e = 0;
  FUN_0041e018(param_1 + 4,param_3,&local_40);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) == 0;
  if (local_8 == 0) {
    local_c = 1;
  }
  else {
    local_c = 3;
  }
  if (bVar2) {
    local_10 = 3;
  }
  else {
    local_10 = 4;
  }
  local_35 = local_8;
  local_31 = local_31 & 0xf0 | 1;
  local_30 = (byte)local_10 | local_30 & 0xf0;
  local_2f = (byte)local_c | local_2f & 0xf0;
  local_2e = 0;
  local_1b = local_1b & 0xf0 | 6;
  local_1a = local_1a & 0xf0;
  if (bVar2) {
    local_14 = 3;
  }
  else {
    local_14 = 4;
  }
  local_40 = 0;
  local_3c = local_3c & 0xf0;
  local_3b = (byte)local_14 | local_3b & 0xf0;
  local_3a = local_3a & 0xf0;
  local_39 = 0;
  if (bVar2) {
    bVar1 = 2;
  }
  else {
    bVar1 = 4;
  }
  local_2a = 0;
  local_26 = local_26 & 0xf0 | 2;
  local_25 = bVar1 | local_25 & 0xf0;
  local_24 = local_24 & 0xf0 | 2;
  local_23 = 0;
  FUN_0041e018(param_1 + 4,param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004339a0  FUN_004339a0   (451 bytes)   [unnamed]
void __cdecl FUN_004339a0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  undefined4 local_39;
  int local_35;
  byte local_31;
  byte local_30;
  byte local_2f;
  undefined4 local_2e;
  undefined4 local_2a;
  byte local_26;
  byte local_25;
  byte local_24;
  undefined4 local_23;
  int local_1f;
  byte local_1b;
  byte local_1a;
  byte local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0041efe0(&local_40);
  FUN_0041e0e8((int)(param_1 + 1),param_3,&local_40);
  if (*(int *)(*param_1 + 0x15) == param_3) {
    local_8 = local_1f;
    if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
      bVar1 = 2;
    }
    else {
      bVar1 = 4;
    }
    local_1f = param_2;
    local_1b = local_1b & 0xf0 | 3;
    local_1a = bVar1 | local_1a & 0xf0;
    local_19 = local_19 & 0xf0 | 1;
    local_18 = 0;
  }
  else {
    local_8 = local_35;
    local_35 = param_2;
    local_31 = local_31 & 0xf0 | 3;
    local_30 = local_30 & 0xf0 | 4;
    local_2f = local_2f & 0xf0 | 1;
    local_2e = 0;
  }
  FUN_0041e018((int)(param_1 + 1),param_3,&local_40);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) == 0;
  if (local_8 == 0) {
    local_c = 3;
  }
  else {
    local_c = 1;
  }
  if (bVar2) {
    local_10 = 2;
  }
  else {
    local_10 = 4;
  }
  local_35 = local_8;
  local_31 = local_31 & 0xf0 | 3;
  local_30 = (byte)local_10 | local_30 & 0xf0;
  local_2f = (byte)local_c | local_2f & 0xf0;
  local_2e = 0;
  local_1b = local_1b & 0xf0 | 6;
  local_1a = local_1a & 0xf0;
  if (bVar2) {
    local_14 = 3;
  }
  else {
    local_14 = 4;
  }
  local_40 = 0;
  local_3c = local_3c & 0xf0;
  local_3b = (byte)local_14 | local_3b & 0xf0;
  local_3a = local_3a & 0xf0;
  local_39 = 0;
  if (bVar2) {
    bVar1 = 2;
  }
  else {
    bVar1 = 4;
  }
  local_2a = 0;
  local_26 = local_26 & 0xf0 | 2;
  local_25 = bVar1 | local_25 & 0xf0;
  local_24 = local_24 & 0xf0 | 2;
  local_23 = 0;
  FUN_0041e018((int)(param_1 + 1),param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433b64  FUN_00433b64   (572 bytes)   [unnamed]
void __cdecl FUN_00433b64(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int local_3c;
  byte local_38;
  byte local_37;
  byte local_36;
  undefined4 local_35;
  undefined4 local_31;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  undefined4 local_2a;
  byte local_22;
  byte local_21;
  undefined4 local_1b;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0041efe0(&local_3c);
  FUN_0041e0e8((int)(param_1 + 1),param_3,&local_3c);
  local_8 = local_3c;
  if ((*(byte *)(param_3 + 0x1a) & 0x80) == 0) {
    bVar1 = 3;
  }
  else {
    bVar1 = 4;
  }
  local_3c = param_2;
  local_38 = local_38 & 0xf0;
  local_37 = bVar1 | local_37 & 0xf0;
  local_36 = local_36 & 0xf0 | 2;
  local_35 = 0;
  FUN_0041e018((int)(param_1 + 1),param_3,&local_3c);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) != 0;
  if (local_8 == 0) {
    local_c = 0;
  }
  else {
    local_c = 2;
  }
  if (bVar2) {
    local_10 = 4;
  }
  else {
    local_10 = 3;
  }
  local_3c = local_8;
  local_38 = local_38 & 0xf0;
  local_37 = (byte)local_10 | local_37 & 0xf0;
  local_36 = (byte)local_c | local_36 & 0xf0;
  local_35 = 0;
  local_22 = local_22 & 0xf0 | 5;
  local_21 = local_21 & 0xf0;
  if (bVar2 == ((*(uint *)(*(int *)(*param_1 + 0x15) + 0x18) & 0x800000) != 0)) {
    local_31 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 4;
    local_2b = local_2b & 0xf0 | 1;
    local_1b = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 4;
    local_15 = local_15 & 0xf0 | 3;
  }
  else if (bVar2) {
    local_31 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 2;
    local_2b = local_2b & 0xf0 | 1;
    local_1b = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 3;
    local_15 = local_15 & 0xf0 | 3;
  }
  else {
    local_31 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 3;
    local_2b = local_2b & 0xf0 | 1;
    local_1b = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 3;
  }
  local_14 = 0;
  local_2a = 0;
  FUN_0041e018((int)(param_1 + 1),param_2,&local_3c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433da0  FUN_00433da0   (638 bytes)   [unnamed]
void __cdecl FUN_00433da0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int local_3c;
  byte local_38;
  byte local_37;
  byte local_36;
  undefined4 local_35;
  undefined4 local_31;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  undefined4 local_2a;
  int local_26;
  byte local_22;
  byte local_21;
  byte local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0041efe0(&local_3c);
  FUN_0041e0e8((int)(param_1 + 1),param_3,&local_3c);
  if (*(int *)(*param_1 + 0x15) == param_3) {
    local_8 = local_26;
    if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
      bVar1 = 2;
    }
    else {
      bVar1 = 4;
    }
    local_26 = param_2;
    local_22 = local_22 & 0xf0 | 2;
    local_21 = bVar1 | local_21 & 0xf0;
    local_20 = local_20 & 0xf0;
    local_1f = 0;
  }
  else {
    local_8 = local_3c;
    local_3c = param_2;
    local_38 = local_38 & 0xf0 | 2;
    local_37 = local_37 & 0xf0 | 4;
    local_36 = local_36 & 0xf0;
    local_35 = 0;
  }
  FUN_0041e018((int)(param_1 + 1),param_3,&local_3c);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) != 0;
  if (local_8 == 0) {
    local_c = 2;
  }
  else {
    local_c = 0;
  }
  if (bVar2) {
    local_10 = 4;
  }
  else {
    local_10 = 2;
  }
  local_3c = local_8;
  local_38 = local_38 & 0xf0 | 2;
  local_37 = (byte)local_10 | local_37 & 0xf0;
  local_36 = (byte)local_c | local_36 & 0xf0;
  local_35 = 0;
  local_22 = local_22 & 0xf0 | 5;
  local_21 = local_21 & 0xf0;
  if (bVar2 == ((*(uint *)(*(int *)(*param_1 + 0x15) + 0x18) & 0x800000) != 0)) {
    local_31 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 4;
    local_2b = local_2b & 0xf0 | 1;
    local_1b = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 4;
    local_15 = local_15 & 0xf0 | 3;
  }
  else if (bVar2) {
    local_31 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 2;
    local_2b = local_2b & 0xf0 | 1;
    local_1b = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 3;
    local_15 = local_15 & 0xf0 | 3;
  }
  else {
    local_31 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 3;
    local_2b = local_2b & 0xf0 | 1;
    local_1b = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 3;
  }
  local_14 = 0;
  local_2a = 0;
  FUN_0041e018((int)(param_1 + 1),param_2,&local_3c);
  return;
}

} // namespace tea
