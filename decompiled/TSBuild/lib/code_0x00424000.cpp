// TSBuild.exe — runtime / library code "code_0x00424000"
// 40 functions, 0x004240d0..0x00427ff0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004240d0  FUN_004240d0   (6 bytes)   [unnamed]
undefined4 * __stdcall FUN_004240d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 in_stack_0000000c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_18;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x47ac44);
  uStack_18 = 8;
  *param_1 = &OWL::TGadget::vftable;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 1;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x33) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)((int)param_1 + 0x32) = *(undefined1 *)((int)param_1 + 0x33);
  *(undefined4 *)((int)param_1 + 6) = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  puVar2 = &uStack_38;
  puVar3 = (undefined4 *)((int)param_1 + 10);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(undefined2 *)((int)param_1 + 0x42) = 3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 1;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = param_2;
  FUN_00424340((int)param_1,in_stack_0000000c);
  *in_FS_OFFSET = uStack_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004240d6  FUN_004240d6   (282 bytes)   [unnamed]
int __stdcall FUN_004240d6(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  
  bVar5 = 0;
  piVar1 = (int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x47ac44);
  *(undefined2 *)(unaff_EBP + -0x14) = 8;
  *(undefined ***)*piVar1 = &OWL::TGadget::vftable;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 10) = 0;
  *(undefined4 *)(iVar2 + 0xe) = 0;
  *(undefined4 *)(iVar2 + 0x12) = 0;
  *(undefined4 *)(iVar2 + 0x16) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2a) = 0;
  *(undefined4 *)(iVar2 + 0x26) = 0;
  *(undefined4 *)(iVar2 + 0x22) = 0;
  *(undefined4 *)(iVar2 + 0x1e) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2e) = 1;
  *(undefined1 *)(iVar2 + 0x35) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x33) = *(undefined1 *)(iVar2 + 0x34);
  *(undefined1 *)(iVar2 + 0x32) = *(undefined1 *)(iVar2 + 0x33);
  *(undefined4 *)(*piVar1 + 6) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puVar3 = (undefined4 *)(unaff_EBP + -0x34);
  puVar4 = (undefined4 *)(*piVar1 + 10);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(undefined2 *)(*piVar1 + 0x42) = 3;
  *(undefined1 *)(*piVar1 + 0x38) = 0;
  *(undefined1 *)(*piVar1 + 0x39) = 0;
  *(undefined1 *)(*piVar1 + 4) = 0;
  *(undefined1 *)(*piVar1 + 5) = 0;
  *(undefined1 *)(*piVar1 + 0x37) = 1;
  *(undefined1 *)(*piVar1 + 0x36) = 1;
  *(undefined4 *)(*piVar1 + 0x3e) = 0;
  *(undefined4 *)(*piVar1 + 0x3a) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_00424340(*piVar1,*(undefined4 *)(unaff_EBP + 0x10));
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x24);
  return *piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424310  FUN_00424310   (45 bytes)   [unnamed]
void __cdecl FUN_00424310(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x1e);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 6) != 0) {
    FUN_004268bc(*(int *)(param_1 + 6));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424340  FUN_00424340   (78 bytes)   [unnamed]
void __cdecl FUN_00424340(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1a) = param_2;
  iVar1 = *(int *)(param_1 + 0x1a);
  if (iVar1 != 0) {
    if (iVar1 - 1U < 3) {
      uVar2 = 1;
      goto LAB_0042436e;
    }
    if (iVar1 - 4U < 6) {
      uVar2 = 2;
      goto LAB_0042436e;
    }
  }
  uVar2 = 0;
LAB_0042436e:
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  if (*(int *)(param_1 + 6) != 0) {
    FUN_004268bc(*(int *)(param_1 + 6));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042471c  FUN_0042471c   (95 bytes)   [unnamed]
void __cdecl FUN_0042471c(int param_1)

{
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    (**(code **)(*(int *)(**(int **)(param_1 + 6) + 8) + 0x6c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042477c  FUN_0042477c   (73 bytes)   [unnamed]
void __cdecl FUN_0042477c(int param_1)

{
  FUN_0042471c(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004247c8  FUN_004247c8   (38 bytes)   [unnamed]
void __cdecl FUN_004247c8(int param_1)

{
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    UpdateWindow(*(HWND *)(**(int **)(param_1 + 6) + 0xc));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004249ac  FUN_004249ac   (184 bytes)   [unnamed]
void __cdecl FUN_004249ac(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 6) != 0) {
    iVar1 = GetSystemMetrics(DAT_0047d518);
    iVar2 = GetSystemMetrics(DAT_0047d520);
    FUN_00423fac((int *)(param_1 + 0x2e),param_2,param_3,param_4,param_5,
                 (uint)*(byte *)(*(int *)(param_1 + 6) + 0x30));
    *param_2 = *(int *)(param_1 + 0x1e) * iVar1 + *param_2;
    *param_3 = *param_3 + *(int *)(param_1 + 0x22) * iVar1;
    *param_4 = *param_4 + *(int *)(param_1 + 0x26) * iVar2;
    *param_5 = *param_5 + *(int *)(param_1 + 0x2a) * iVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424a64  FUN_00424a64   (105 bytes)   [unnamed]
void __cdecl FUN_00424a64(int param_1,int *param_2)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  FUN_004249ac(param_1,&local_8,&local_c,&local_10,&local_14);
  *param_2 = local_8;
  param_2[2] = (*(int *)(param_1 + 0x12) - *(int *)(param_1 + 10)) - local_c;
  param_2[1] = local_10;
  param_2[3] = (*(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe)) - local_14;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424c0c  FUN_00424c0c   (151 bytes)   [unnamed]
int * __cdecl FUN_00424c0c(int *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iVar2;
  
  __InitExceptBlockLDTC(0x47adb4);
  FUN_004240d0(param_1,param_3);
  *param_1 = (int)&OWL::TSeparatorGadget::vftable;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  iVar2 = 0;
  (**(code **)(*param_1 + 4))();
  *(ushort *)((int)param_1 + 0x42) = *(ushort *)((int)param_1 + 0x42) & 0xfffd;
  if (param_2 == 0) {
    iVar2 = DAT_0047d5f0;
    iVar1 = GetSystemMetrics(DAT_0047d5f0);
    param_2 = iVar1 * 2;
  }
  *(int *)((int)param_1 + 0x12) = param_2;
  *(int *)((int)param_1 + 0x16) = param_2;
  *in_FS_OFFSET = iVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424f3c  FUN_00424f3c   (65 bytes)   [unnamed]
undefined4 * __cdecl FUN_00424f3c(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47aea0);
  *param_1 = &OWL::TGadgetList::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042503c  FUN_0042503c   (74 bytes)   [unnamed]
int * __cdecl FUN_0042503c(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  while ((piVar1 != (int *)0x0 && (cVar2 = (**(code **)(*piVar1 + 0x2c))(), cVar2 == '\0'))) {
    piVar1 = *(int **)((int)piVar1 + 0x3e);
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425224  FUN_00425224   (421 bytes)   [unnamed]
uint * __cdecl FUN_00425224(uint *param_1,int param_2,char param_3,byte param_4)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int nDenominator;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined4 local_70;
  int local_4c;
  int local_47;
  undefined1 local_24 [8];
  LPCSTR local_1c;
  uint local_14 [2];
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x47b068);
  bVar14 = 0;
  bVar13 = 0;
  bVar12 = 0;
  bVar11 = 1;
  bVar10 = 0;
  bVar9 = 0;
  puVar2 = FUN_00423e4c(local_c);
  bVar1 = FUN_00423e24(puVar2);
  if (param_3 == '\0') {
    iVar3 = 400;
  }
  else {
    iVar3 = 700;
  }
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  FUN_0043942c(&local_4c);
  nDenominator = 0x48;
  iVar4 = (**(code **)(local_47 + 0xc))();
  iVar4 = MulDiv(-param_2,iVar4,nDenominator);
  OWL::TWindowDC::_dtor(&local_4c,0);
  puVar2 = FUN_00423e4c(local_14);
  FUN_00423dc8((int)local_24,puVar2);
  FUN_00423abc(param_1,local_1c,iVar4,iVar6,iVar7,iVar8,iVar3,bVar1,param_4,bVar9,bVar10,bVar11,
               bVar12,bVar13,bVar14);
  if (local_1c != (LPCSTR)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar5 = (int *)(local_1c + -0xc);
      if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0042537c;
    }
    operator_delete();
    local_1c = (LPCSTR)0x0;
  }
LAB_0042537c:
  OWL::TGdiObject::_dtor(local_14,0);
  OWL::TGdiObject::_dtor(local_c,0);
  *in_FS_OFFSET = local_70;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004253f4  FUN_004253f4   (757 bytes)   [unnamed]
int * __cdecl FUN_004253f4(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  tagTEXTMETRICA local_64;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x47b0cc);
  local_1c = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5d;
    *(int *)((int)param_1 + 0x5d) = (int)param_1 + 0x51;
    *(int *)((int)param_1 + 0x61) = (int)param_1 + 0x55;
    param_1[4] = (int)param_1 + 0x51;
    param_1[5] = (int)param_1 + 0x55;
    *(undefined4 *)((int)param_1 + 0x4d) = 0;
    *(undefined4 *)((int)param_1 + 0x59) = 0;
    *(undefined ***)((int)param_1 + 0x51) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x55) = &OWL::TStreamableBase::vftable;
    local_10 = local_10 + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_00435d18((int *)((int)param_1 + 0x5d),1);
    local_10 = local_10 + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  FUN_00424f3c(param_1 + 1);
  local_10 = local_10 + 1;
  param_1[6] = (int)&OWL::TGadgetWindow::vftable;
  param_1[1] = (int)&PTR_LAB_0047b3d0;
  *(undefined ***)param_1[4] = &PTR_LAB_0047b3f0;
  *(undefined ***)param_1[5] = &PTR_LAB_0047b3fc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047b408;
  param_1[10] = 1;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = *(undefined1 *)((int)param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  FUN_00435df4(*param_1,param_3,(uint *)0x0,param_6);
  FUN_00438618(*param_1,0,0x2000000,0);
  bVar1 = FUN_0041b9e4();
  if (!bVar1) {
    FUN_00438618(*param_1,0,0x800000,0);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  if ((param_5 == (uint *)0x0) &&
     (param_5 = (uint *)operator_new(), local_8 = param_5, param_5 != (uint *)0x0)) {
    local_1c = 0x20;
    FUN_00425224(param_5,6,'\0',0);
    local_1c = 0x14;
    param_5 = local_8;
  }
  param_1[7] = (int)param_5;
  *(undefined1 *)((int)param_1 + 0x35) = param_4;
  *(bool *)((int)param_1 + 0x31) = *(char *)((int)param_1 + 0x35) != '\0';
  *(bool *)((int)param_1 + 0x32) = *(char *)((int)param_1 + 0x35) != '\x01';
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  *(undefined1 *)((int)param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_00423bf8(param_1[7],&local_64);
  *(char *)(param_1 + 0xc) = (char)local_64.tmHeight + (char)local_64.tmExternalLeading;
  *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)(param_1 + 0xc);
  if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
    iVar2 = GetSystemMetrics(DAT_0047d520);
    *(int *)(*param_1 + 0x2c) = *(int *)(*param_1 + 0x2c) + iVar2 * 2;
  }
  *(undefined4 *)(*param_1 + 0x5c) = DAT_0048c698;
  *(undefined4 *)((int)param_1 + 0x37) = 0;
  *(undefined4 *)((int)param_1 + 0x3b) = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 4;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042590c  FUN_0042590c   (68 bytes)   [unnamed]
uint __cdecl FUN_0042590c(int *param_1)

{
  UINT_PTR UVar1;
  
  if (*(int *)(*param_1 + 0xc) == 0) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    return CONCAT31((int3)((uint)*param_1 >> 8),1);
  }
  if (*(int *)((int)param_1 + 0x49) == 0) {
    UVar1 = SetTimer(*(HWND *)(*param_1 + 0xc),0xbaca,1000,(TIMERPROC)0x0);
    *(UINT_PTR *)((int)param_1 + 0x49) = UVar1;
  }
  return (uint)(*(int *)((int)param_1 + 0x49) != 0);
}

// ----------------------------------------------------------------------------------------------------
// 0x00425950  FUN_00425950   (36 bytes)   [unnamed]
undefined4 __cdecl FUN_00425950(int *param_1,int param_2)

{
  HWND pHVar1;
  
  if (param_1[8] != 0) {
    return 0;
  }
  param_1[8] = param_2;
  pHVar1 = SetCapture(*(HWND *)(*param_1 + 0xc));
  return CONCAT31((int3)((uint)pHVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00425974  FUN_00425974   (26 bytes)   [unnamed]
void __cdecl FUN_00425974(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    ReleaseCapture();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425990  FUN_00425990   (189 bytes)   [unnamed]
void __cdecl FUN_00425990(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*param_1 + 0x14);
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar3 + 8);
    }
    puVar1 = FUN_00468488(iVar3,iVar2,(int *)&DAT_00403c70,(int *)&DAT_0041d6e8,0);
  }
  while ((iVar3 != 0 && (puVar1 == (undefined4 *)0x0))) {
    iVar3 = *(int *)(iVar3 + 0x14);
    if (iVar3 != 0) {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar3 + 8);
      }
      puVar1 = FUN_00468488(iVar3,iVar2,(int *)&DAT_00403c70,(int *)&DAT_0041d6e8,0);
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 < 1) {
      FUN_00436d48(puVar1[1],0x11f,0xffff0000,0);
    }
    else {
      FUN_00436d48(puVar1[1],0x11f,param_2,0);
    }
    FUN_00436d48(puVar1[1],0x121,2,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425b54  FUN_00425b54   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_00425b54(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b334);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425bf0  FUN_00425bf0   (79 bytes)   [unnamed]
int __cdecl FUN_00425bf0(int *param_1)

{
  int in_EAX;
  
  if ((*(char *)((int)param_1 + 0x31) != '\0') || (*(char *)((int)param_1 + 0x32) != '\0')) {
    in_EAX = (**(code **)(param_1[6] + 0x38))();
    if (*(char *)((int)param_1 + 0x31) != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0;
    }
    if (*(char *)((int)param_1 + 0x32) != '\0') {
      in_EAX = *param_1;
      *(undefined4 *)(in_EAX + 0x2c) = 0;
    }
  }
  return in_EAX;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425f74  FUN_00425f74   (718 bytes)   [unnamed]
void __cdecl FUN_00425f74(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x40))();
  FUN_00423fac((int *)(param_1 + 0x28),&local_8,&local_c,&local_10,&local_14,
               (uint)*(byte *)(param_1 + 0x30));
  local_1c = 0;
  local_18 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,(undefined*)FUN_00425b54);
  operator_delete_array();
  param_2[2] = (int)piVar1;
  if (*(char *)(param_1 + 0x33) == '\0') {
    local_20 = 0;
  }
  else {
    iVar5 = 0;
    for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0;
        piVar1 = *(int **)((int)piVar1 + 0x3e)) {
      if (*(char *)((int)piVar1 + 5) == '\0') {
        local_28 = 0;
        local_24 = 0;
        (**(code **)(*piVar1 + 8))();
        iVar5 = iVar5 + local_28;
      }
      if (*(int *)((int)piVar1 + 0x3e) != 0) {
        local_30 = 0;
        local_2c = 0;
        (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
        iVar5 = iVar5 + local_30;
      }
    }
    local_34 = 0;
    local_38 = ((local_68 - local_70) - iVar5) / (int)(uint)*(byte *)(param_1 + 0x33);
    if (local_38 < 1) {
      piVar1 = &local_34;
    }
    else {
      piVar1 = &local_38;
    }
    local_20 = *piVar1;
  }
  local_3c = local_8;
  local_40 = local_10;
  local_44 = 0;
  iVar5 = 0;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    local_4c = 0;
    local_48 = 0;
    (**(code **)(*piVar1 + 8))();
    *(undefined4 *)(param_2[2] + iVar5 * 0x10) = local_4c;
    *(int *)(param_2[2] + 4 + iVar5 * 0x10) = local_48;
    if (local_48 < local_44) {
      piVar2 = &local_44;
    }
    else {
      piVar2 = &local_48;
    }
    local_44 = *piVar2;
    iVar5 = iVar5 + 1;
  }
  iVar6 = 0;
  for (iVar5 = *(int *)(param_1 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3e)) {
    local_50 = (int *)(iVar5 + 10);
    piVar1 = (int *)(iVar5 + 10);
    piVar2 = &local_80;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar7 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar7 * -2 + 1;
    }
    local_54 = *(int *)(param_2[2] + 4 + iVar6 * 0x10);
    iVar3 = *(int *)(param_2[2] + iVar6 * 0x10);
    local_58 = iVar3;
    local_80 = local_3c;
    iVar4 = local_44 - local_54 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((local_44 - local_54 & 1U) != 0);
    }
    local_7c = iVar4 + local_40;
    if (*(char *)(iVar5 + 5) == '\0') {
      local_78 = local_3c + iVar3;
    }
    else {
      if (iVar3 < local_20) {
        iVar3 = local_20;
      }
      local_78 = iVar3 + local_3c;
    }
    local_74 = iVar4 + local_40 + local_54;
    piVar1 = &local_80;
    piVar2 = (int *)(param_2[2] + iVar6 * 0x10);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar7 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar7 * -2 + 1;
    }
    local_60 = local_78;
    local_3c = local_78;
    if (*(int *)(iVar5 + 0x3e) != 0) {
      local_5c = 0;
      (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
      local_3c = local_60;
    }
    if (*param_2 < local_78 + local_c) {
      local_78 = local_78 + local_c;
    }
    else {
      local_78 = *param_2;
    }
    *param_2 = local_78;
    if (param_2[1] < local_74 + local_14) {
      local_74 = local_74 + local_14;
    }
    else {
      local_74 = param_2[1];
    }
    param_2[1] = local_74;
    iVar6 = iVar6 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426244  FUN_00426244   (536 bytes)   [unnamed]
void __cdecl FUN_00426244(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48 [3];
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar6 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x40))();
  FUN_00423fac((int *)(param_1 + 0x28),&local_8,&local_c,&local_10,&local_14,
               (uint)*(byte *)(param_1 + 0x30));
  local_1c = 0;
  local_18 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,(undefined*)FUN_00425b54);
  operator_delete_array();
  param_2[2] = (int)piVar1;
  local_20 = local_10;
  local_24 = local_8;
  local_28 = 0;
  iVar4 = 0;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    local_30 = 0;
    local_2c = 0;
    (**(code **)(*piVar1 + 8))();
    *(int *)(param_2[2] + iVar4 * 0x10) = local_30;
    *(undefined4 *)(param_2[2] + 4 + iVar4 * 0x10) = local_2c;
    if (local_30 < local_28) {
      piVar2 = &local_28;
    }
    else {
      piVar2 = &local_30;
    }
    local_28 = *piVar2;
    iVar4 = iVar4 + 1;
  }
  iVar5 = 0;
  for (iVar4 = *(int *)(param_1 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x3e)) {
    local_34 = (int *)(iVar4 + 10);
    piVar1 = (int *)(iVar4 + 10);
    piVar2 = &local_6c;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    }
    local_38 = *(int *)(param_2[2] + 4 + iVar5 * 0x10);
    local_3c = *(int *)(param_2[2] + iVar5 * 0x10);
    local_68 = local_20;
    local_48[2] = local_20 + local_38;
    local_60 = local_48[2];
    iVar3 = local_28 - local_3c >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_28 - local_3c & 1U) != 0);
    }
    local_6c = iVar3 + local_24;
    local_64 = iVar3 + local_24 + local_3c;
    piVar1 = &local_6c;
    piVar2 = (int *)(param_2[2] + iVar5 * 0x10);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    }
    local_20 = local_48[2];
    if (*(int *)(iVar4 + 0x3e) != 0) {
      local_48[1] = 0;
      (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
      local_20 = local_48[2];
    }
    local_48[0] = local_64 + local_c;
    piVar1 = param_2;
    if (*param_2 < local_64 + local_c) {
      piVar1 = local_48;
    }
    *param_2 = *piVar1;
    piVar1 = param_2 + 1;
    local_4c = local_60 + local_14;
    if (*piVar1 < local_60 + local_14) {
      piVar1 = &local_4c;
    }
    param_2[1] = *piVar1;
    iVar5 = iVar5 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042645c  FUN_0042645c   (208 bytes)   [unnamed]
void __cdecl FUN_0042645c(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int *param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  *param_7 = 0;
  iVar1 = param_2;
  for (iVar5 = param_3; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3e)) {
    piVar2 = (int *)(*(int *)(param_6 + 8) + iVar1 * 0x10 + 0xc);
    if (*piVar2 < *param_7) {
      piVar2 = param_7;
    }
    *param_7 = *piVar2;
    if (iVar5 == param_4) break;
    iVar1 = iVar1 + 1;
  }
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    uVar4 = *param_7 - *(int *)(*(int *)(param_6 + 8) + 0xc + param_2 * 0x10);
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    *(int *)(*(int *)(param_6 + 8) + 4 + param_2 * 0x10) = iVar5 + param_5;
    piVar2 = (int *)(*(int *)(param_6 + 8) + 0xc + param_2 * 0x10);
    *piVar2 = *piVar2 + *(int *)(*(int *)(param_6 + 8) + 4 + param_2 * 0x10);
    piVar2 = (int *)(param_6 + 4);
    piVar3 = (int *)(*(int *)(param_6 + 8) + param_2 * 0x10 + 0xc);
    if (*piVar2 < *piVar3) {
      piVar2 = piVar3;
    }
    *(int *)(param_6 + 4) = *piVar2;
    if (param_3 == param_4) break;
    param_3 = *(int *)(param_3 + 0x3e);
    param_2 = param_2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042652c  FUN_0042652c   (851 bytes)   [unnamed]
void __cdecl FUN_0042652c(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int *local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char local_3e;
  bool local_3d;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar7 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x40))();
  local_c = 0;
  local_8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar2 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,(undefined*)FUN_00425b54);
  operator_delete_array();
  param_2[2] = (int)piVar2;
  FUN_00423fac((int *)(param_1 + 0x28),&local_10,&local_14,&local_18,&local_1c,
               (uint)*(byte *)(param_1 + 0x30));
  local_20 = local_10;
  local_24 = local_18;
  local_28 = *(int *)(param_1 + 0x40) - local_14;
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = *(int **)((int)piVar2 + 0x3e)
      ) {
    local_30 = 0;
    local_2c = 0;
    (**(code **)(*piVar2 + 8))();
    local_34 = local_20 + local_30 + local_14;
    if (local_34 < local_28) {
      piVar3 = &local_28;
    }
    else {
      piVar3 = &local_34;
    }
    local_28 = *piVar3;
  }
  local_3d = false;
  local_3e = '\0';
  iVar5 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_38 = *(int **)(param_1 + 8);
  local_3c = *(int **)(param_1 + 8);
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = *(int **)((int)piVar2 + 0x3e)
      ) {
    *(ushort *)((int)piVar2 + 0x42) = *(ushort *)((int)piVar2 + 0x42) & 0xfffb;
    local_58 = 0;
    local_54 = 0;
    (**(code **)(*piVar2 + 8))();
    local_5c = (int *)((int)piVar2 + 10);
    piVar3 = (int *)((int)piVar2 + 10);
    piVar6 = &local_88;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    local_88 = local_20;
    local_80 = local_20 + local_58;
    local_84 = 0;
    local_7c = local_54;
    if ((((local_28 < local_80) || (local_3e != '\0')) && (piVar2 != local_38)) &&
       ((*(byte *)((int)piVar2 + 0x42) & 2) != 0)) {
      *(ushort *)((int)local_3c + 0x42) = *(ushort *)((int)local_3c + 0x42) | 4;
      if (*param_2 < *(int *)(param_2[2] + 8 + local_48 * 0x10) + local_14) {
        iVar5 = *(int *)(param_2[2] + 8 + local_48 * 0x10) + local_14;
      }
      else {
        iVar5 = *param_2;
      }
      *param_2 = iVar5;
      FUN_0042645c(param_1,local_44,(int)local_38,(int)local_3c,local_24,(int)param_2,&local_50);
      piVar2 = local_3c;
      local_3d = (*(byte *)((int)local_3c + 0x42) & 2) != 0;
      local_20 = local_10;
      local_24 = local_24 + local_50;
      if (!local_3d) {
        local_24 = local_24 + *(int *)(param_1 + 0x44);
      }
      puVar1 = (undefined4 *)((int)local_3c + 0x3e);
      local_3c = (int *)*puVar1;
      local_38 = (int *)*puVar1;
      local_44 = local_4c + 1;
      local_3e = '\0';
      iVar5 = local_4c;
    }
    else {
      piVar3 = &local_88;
      piVar6 = (int *)(param_2[2] + iVar5 * 0x10);
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar3;
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      if ((*(byte *)((int)piVar2 + 0x42) & 2) == 0) {
        local_3c = piVar2;
        local_4c = iVar5;
        if (local_3d != false) {
          local_3e = '\x01';
        }
      }
      else if ((*(byte *)((int)local_3c + 0x42) & 2) == 0) {
        if ((*(int *)((int)piVar2 + 0x3e) == 0) ||
           ((*(byte *)(*(int *)((int)piVar2 + 0x3e) + 0x42) & 2) == 0)) {
          local_48 = iVar5;
        }
      }
      else {
        local_48 = iVar5;
        local_3c = piVar2;
        local_4c = iVar5;
      }
      local_20 = local_80;
      if (*(int *)((int)piVar2 + 0x3e) != 0) {
        local_60 = 0;
        local_64 = local_80;
        (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
        local_20 = local_64;
      }
    }
    iVar5 = iVar5 + 1;
  }
  local_68 = *(int *)(param_2[2] + 8 + local_48 * 0x10) + local_14;
  piVar2 = param_2;
  if (*param_2 < local_68) {
    piVar2 = &local_68;
  }
  *param_2 = *piVar2;
  FUN_0042645c(param_1,local_44,(int)local_38,0,local_24,(int)param_2,&local_50);
  param_2[1] = param_2[1] + local_1c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004268bc  FUN_004268bc   (16 bytes)   [unnamed]
void __cdecl FUN_004268bc(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427260  FUN_00427260   (9 bytes)   [unnamed]
void __stdcall FUN_00427260(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00427266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042726c  FUN_0042726c   (9 bytes)   [unnamed]
void __stdcall FUN_0042726c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00427272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427348  FUN_00427348   (186 bytes)   [unnamed]
void __cdecl FUN_00427348(int *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47b314);
  if (*(int *)((int)param_1 + 0x3b) != 0) {
    if (*(int *)(**(int **)((int)param_1 + 0x3b) + 0xc) == 0) {
      if (*(int *)((int)param_1 + 0x3b) != 0) {
        (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x3b) + 0xc))();
      }
    }
    else {
      FUN_00438338(**(int **)((int)param_1 + 0x3b),0x10,0,0);
    }
  }
  *(undefined4 *)((int)param_1 + 0x3b) = param_2;
  if (((*(int *)((int)param_1 + 0x3b) != 0) && (*(int *)(*param_1 + 0xc) != 0)) &&
     (*(int *)(**(int **)((int)param_1 + 0x3b) + 0xc) == 0)) {
    FUN_00438618(**(int **)((int)param_1 + 0x3b),0,0x8000000,0);
    (**(code **)(*(int *)(**(int **)((int)param_1 + 0x3b) + 8) + 0x10))();
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004278dc  FUN_004278dc   (12 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004278dc(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042790c  FUN_0042790c   (45 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042790c(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b498);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042793c  FUN_0042793c   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042793c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b4a0);
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_3 == 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427974  FUN_00427974   (21 bytes)   [unnamed]
void __cdecl FUN_00427974(int *param_1,uint param_2)

{
  FUN_0042798c(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042798c  FUN_0042798c   (24 bytes)   [unnamed]
void __cdecl FUN_0042798c(int param_1,uint param_2)

{
  if (param_1 == 0) {
    FUN_00427c44(param_2,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004279a4  FUN_004279a4   (229 bytes)   [unnamed]
undefined4 * __cdecl FUN_004279a4(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x47b4c8);
  FUN_004236bc((int)local_14,param_2,param_3,DAT_00484890);
  FUN_00423088(param_1,(int)local_14,param_2);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00427a60;
    }
    operator_delete();
  }
LAB_00427a60:
  *param_1 = &OWL::TXGdi::vftable;
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427c44  FUN_00427c44   (86 bytes)   [unnamed]
void __cdecl FUN_00427c44(uint param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47b564);
  piVar1 = FUN_004279a4(local_10,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427ce0  FUN_00427ce0   (242 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __stdcall FUN_00427ce0(void)

{
  LONG LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47b5c4);
  if (DAT_0047b5ac == 0) {
    LVar1 = InterlockedIncrement((LONG *)&DAT_0047b5b0);
    if (LVar1 == 0) {
      InterlockedIncrement((LONG *)&DAT_0047b5b0);
      DAT_0047b5ac = operator_new();
      if (DAT_0047b5ac != 0) {
        *(undefined4 *)(DAT_0047b5ac + 1) = 0;
        *(undefined4 *)(DAT_0047b5ac + 5) = 0;
        *(undefined4 *)(DAT_0047b5ac + 9) = 0;
        *(undefined4 *)(DAT_0047b5ac + 0xd) = 0;
        *(undefined4 *)(DAT_0047b5ac + 0x12) = 0;
        *(undefined4 *)(DAT_0047b5ac + 0x16) = 0x3c;
        *(undefined4 *)(DAT_0047b5ac + 0x1a) = 0;
        *(undefined4 *)(DAT_0047b5ac + 0x1e) = 0x3c;
        *(undefined4 *)(DAT_0047b5ac + 0x22) = 6;
      }
      _DAT_0047b5b0 = 0xffffffff;
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427dd2  FUN_00427dd2   (228 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
LONG __stdcall FUN_00427dd2(void)

{
  int iVar1;
  LONG LVar2;
  LONG *in_FS_OFFSET;
  LONG local_2c;
  
  __InitExceptBlockLDTC(0x47b61c);
  if ((DAT_0047b5ac == 0) || (*(int *)(DAT_0047b5ac + 1) != 0)) {
    *in_FS_OFFSET = local_2c;
    LVar2 = local_2c;
  }
  else {
    LVar2 = InterlockedIncrement((LONG *)&DAT_0047b608);
    if (LVar2 == 0) {
      LVar2 = InterlockedIncrement((LONG *)&DAT_0047b608);
      iVar1 = DAT_0047b5ac;
      if (DAT_0047b5ac != 0) {
        FUN_00427ed8(DAT_0047b5ac);
        if (*(int *)(iVar1 + 9) != 0) {
          free();
        }
        FUN_004209d0(iVar1 + 0x11,0);
        LVar2 = operator_delete();
      }
      DAT_0047b5ac = 0;
      _DAT_0047b608 = 0xffffffff;
    }
    *in_FS_OFFSET = local_2c;
  }
  return LVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427ed8  FUN_00427ed8   (73 bytes)   [unnamed]
void __cdecl FUN_00427ed8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b654);
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 1); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 9) + iVar2 * 4);
    *puVar1 = *(undefined4 *)(param_1 + 0xd);
    *(undefined4 *)(param_1 + 0xd) = puVar1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427f24  FUN_00427f24   (126 bytes)   [unnamed]
undefined4 __cdecl FUN_00427f24(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x47b66c);
  if ((param_1 != 0) && (DAT_0047b5ac != 0)) {
    local_c[0] = param_1;
    uVar2 = FUN_00427ff0(DAT_0047b5ac,local_c);
    if (uVar2 != 0xffffffff) {
      uVar1 = *(undefined4 *)(*(int *)(DAT_0047b5ac + 9) + uVar2 * 4);
      *in_FS_OFFSET = local_30;
      return uVar1;
    }
  }
  *in_FS_OFFSET = local_30;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427ff0  FUN_00427ff0   (135 bytes)   [unnamed]
uint __cdecl FUN_00427ff0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    uVar3 = *(int *)(param_1 + 1) - 1;
    while ((uVar1 < uVar3 && (uVar3 != 0xffffffff))) {
      uVar2 = uVar3 + uVar1 >> 1;
      if (*param_2 == **(uint **)(*(int *)(param_1 + 9) + uVar2 * 4)) {
        return uVar2;
      }
      if (*param_2 < **(uint **)(*(int *)(param_1 + 9) + uVar2 * 4)) {
        uVar1 = uVar2 + 1;
      }
      else {
        uVar3 = uVar2 - 1;
      }
    }
    if ((uVar3 != uVar1) || (**(uint **)(*(int *)(param_1 + 9) + uVar1 * 4) != *param_2)) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

} // namespace tea
