// TSMerge.exe — runtime / library code "code_0x00418000"
// 46 functions, 0x004181c8..0x0041b748. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004181c8  FUN_004181c8   (69 bytes)   [unnamed]
undefined4 * __cdecl FUN_004181c8(undefined4 *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x466ca0);
  FUN_00417b88(param_1,param_2);
  param_1[2] = param_2[2];
  *param_1 = &OWL::TXOwl::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418210  FUN_00418210   (83 bytes)   [unnamed]
void __cdecl FUN_00418210(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x466a58);
  piVar1 = FUN_00417f14(local_10,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,2);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418264  FUN_00418264   (478 bytes)   [unnamed]
int __cdecl FUN_00418264(int param_1,char *param_2,uint param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_f4 [34];
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  uint local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x466aac);
  if (param_4 == 0) {
LAB_004182a1:
    cVar2 = '\0';
  }
  else {
    iVar3 = FUN_00443f20(param_4,param_3,(LPSTR)local_f4,0x80);
    if (iVar3 == 0) goto LAB_004182a1;
    cVar2 = '\x01';
  }
  if (param_2 != (char *)0x0) {
    *param_2 = cVar2;
  }
  if (cVar2 == '\0') {
    FUN_00457ef4((undefined1 *)local_f4,(byte *)"Exception #%u (Could not load description string; <owl/except.rc> not bound\?).");
  }
  local_28 = 8;
  std::string::string_from_cstr((int)local_14,local_f4);
  local_1c = local_1c + 1;
  local_28 = 0x20;
  local_44 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_54 = std::string::__getRep(param_1,uVar1,uVar1);
    local_50 = local_54 + 3;
    *(int **)(param_1 + 8) = local_50;
    local_58 = param_1;
    local_60 = local_c;
    local_64 = *(undefined4 **)(param_1 + 8);
    local_5c = uVar1;
    memcpy(local_64,local_c,uVar1);
  }
  else {
    local_48 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_4c = param_1;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00471d5c) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_28 = 0x38;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00418427;
    }
    local_68 = local_c + -3;
    local_6c = local_c + -3;
    operator_delete();
  }
LAB_00418427:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418444  FUN_00418444   (258 bytes)   [unnamed]
int __cdecl FUN_00418444(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  uint local_158 [69];
  byte *local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x466b3c);
  local_28 = 0x14;
  FUN_00418264((int)local_14,(char *)0x0,param_2,param_4);
  local_1c = local_1c + 1;
  local_28 = 8;
  FUN_00457ef4((undefined1 *)local_158,local_c);
  local_28 = 0x20;
  std::string::string_from_cstr(param_1,local_158);
  local_28 = 0x2c;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar2 = local_c + -0xc;
      if (pbVar2 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (pbVar2 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        iVar1 = *(int *)pbVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0041852b;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_0041852b:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418548  FUN_00418548   (258 bytes)   [unnamed]
int __cdecl FUN_00418548(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  uint local_158 [69];
  byte *local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x466bc0);
  local_28 = 0x14;
  FUN_00418264((int)local_14,(char *)0x0,param_2,param_4);
  local_1c = local_1c + 1;
  local_28 = 8;
  FUN_00457ef4((undefined1 *)local_158,local_c);
  local_28 = 0x20;
  std::string::string_from_cstr(param_1,local_158);
  local_28 = 0x2c;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar2 = local_c + -0xc;
      if (pbVar2 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (pbVar2 == (byte *)&DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        iVar1 = *(int *)pbVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0041862f;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_0041862f:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041864c  FUN_0041864c   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041864c(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x466c14);
  FUN_00417f7c(param_1,0x7ff9,DAT_00470a60);
  *param_1 = &OWL::TXOutOfMemory::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418860  FUN_00418860   (78 bytes)   [unnamed]
void __stdcall FUN_00418860(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x466c8c);
  piVar1 = FUN_0041864c(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004188f4  FUN_004188f4   (82 bytes)   [unnamed]
uint * __cdecl FUN_004188f4(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x466cec);
  FUN_0041d2fc(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_0041cf04(*param_1,3);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418948  FUN_00418948   (158 bytes)   [unnamed]
uint * __cdecl FUN_00418948(uint *param_1,LPCSTR param_2,int param_3,int param_4,int param_5,int param_6, int param_7,byte param_8,byte param_9,byte param_10,byte param_11,byte param_12, byte param_13,byte param_14,byte param_15)

{
  HFONT pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x466d10);
  FUN_0041d2ac(param_1);
  pHVar1 = CreateFontA(param_3,param_4,param_5,param_6,param_7,(uint)param_9,(uint)param_10,
                       (uint)param_11,(uint)param_12,(uint)param_13,(uint)param_14,(uint)param_15,
                       (uint)param_8,param_2);
  *param_1 = (uint)pHVar1;
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004189e8  FUN_004189e8   (94 bytes)   [unnamed]
uint * __cdecl FUN_004189e8(uint *param_1,LOGFONTA *param_2)

{
  HFONT pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x466d34);
  FUN_0041d2ac(param_1);
  pHVar1 = CreateFontIndirectA(param_2);
  *param_1 = (uint)pHVar1;
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a48  FUN_00418a48   (60 bytes)   [unnamed]
void __cdecl FUN_00418a48(undefined4 param_1,LPTEXTMETRICA param_2,int param_3)

{
  HDC hdc;
  BOOL BVar1;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  BVar1 = GetTextMetricsA(hdc,param_2);
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))(BVar1,BVar1 != 0,*(int *)(param_3 + 5),param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a84  FUN_00418a84   (98 bytes)   [unnamed]
void __cdecl FUN_00418a84(undefined4 param_1,LPTEXTMETRICA param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  int local_2c [10];
  
  __InitExceptBlockLDTC(0x466d68);
  FUN_0042e298(local_2c);
  FUN_00418a48(param_1,param_2,(int)local_2c);
  OWL::TWindowDC::_dtor(local_2c,0);
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418ae8  FUN_00418ae8   (131 bytes)   [unnamed]
LONG * __cdecl FUN_00418ae8(LONG *param_1,undefined4 param_2)

{
  int iVar1;
  tagTEXTMETRICA *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagTEXTMETRICA local_88;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  int local_2c [10];
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x466da8);
  local_40 = 8;
  FUN_0042e298(local_2c);
  local_34 = local_34 + 3;
  local_40 = 0x14;
  FUN_00418a48(param_2,&local_88,(int)local_2c);
  ptVar2 = &local_88;
  pLVar3 = param_1;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->tmHeight;
    ptVar2 = (tagTEXTMETRICA *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_34 = local_34 + -3;
  OWL::TWindowDC::_dtor(local_2c,0);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418b6c  FUN_00418b6c   (108 bytes)   [unnamed]
LONG * __cdecl FUN_00418b6c(LONG *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  int local_2c [10];
  
  __InitExceptBlockLDTC(0x466de8);
  FUN_0042e298(local_2c);
  FUN_00418bd8(param_1,param_2,(int)local_2c,param_3);
  OWL::TWindowDC::_dtor(local_2c,0);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418bd8  FUN_00418bd8   (122 bytes)   [unnamed]
LONG * __cdecl FUN_00418bd8(LONG *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  char *c;
  HDC hdc;
  tagSIZE *psizl;
  tagSIZE local_18;
  char *local_10;
  LONG local_c;
  LONG local_8;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  c = strlen(param_4);
  local_18.cx = 0;
  local_18.cy = 0;
  psizl = &local_18;
  local_10 = c;
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  GetTextExtentPoint32A(hdc,(LPCSTR)param_4,(int)c,psizl);
  local_c = local_18.cx;
  local_8 = local_18.cy;
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))();
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418c54  FUN_00418c54   (90 bytes)   [unnamed]
int __cdecl FUN_00418c54(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_6c [28];
  uint local_50 [10];
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x466e18);
  GetObjectA((HANDLE)*param_2,0x3c,local_6c);
  local_18 = 8;
  std::string::string_from_cstr(param_1,local_50);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418cb0  FUN_00418cb0   (39 bytes)   [unnamed]
undefined1 __cdecl FUN_00418cb0(undefined4 *param_1)

{
  undefined1 local_40 [27];
  undefined1 local_25;
  
  GetObjectA((HANDLE)*param_1,0x3c,local_40);
  return local_25;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418cd8  FUN_00418cd8   (82 bytes)   [unnamed]
uint * __cdecl FUN_00418cd8(uint *param_1)

{
  bool bVar1;
  HGDIOBJ pvVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x466e3c);
  iVar3 = 0;
  bVar1 = FUN_004109c0();
  if (bVar1) {
    pvVar2 = GetStockObject(0x11);
  }
  else {
    pvVar2 = GetStockObject(0xd);
  }
  FUN_004188f4(param_1,pvVar2,iVar3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418df8  FUN_00418df8   (24 bytes)   [unnamed]
int __cdecl FUN_00418df8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_2 + 4;
  if (iVar1 < 0) {
    iVar1 = param_1 * param_2 + 0xb;
  }
  return iVar1 >> 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418e10  FUN_00418e10   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00418e10(int param_1)

{
  if (((param_1 != 0) && (param_1 != -1)) && ((param_1 < 30000 || (30999 < param_1)))) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00418e38  FUN_00418e38   (291 bytes)   [unnamed]
void __cdecl FUN_00418e38(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_2 = (int)(char)param_1[1];
    *param_4 = (int)*(char *)((int)param_1 + 6);
    *param_3 = (int)*(char *)((int)param_1 + 5);
    *param_5 = (int)*(char *)((int)param_1 + 7);
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00418df8((int)(char)param_1[1],param_6);
    *param_2 = iVar1;
    iVar1 = FUN_00418df8((int)*(char *)((int)param_1 + 6),param_6);
    *param_4 = iVar1;
    iVar1 = FUN_00418df8((int)*(char *)((int)param_1 + 5),param_6);
    *param_3 = iVar1;
    iVar1 = FUN_00418df8((int)*(char *)((int)param_1 + 7),param_6);
    *param_5 = iVar1;
  }
  else if (iVar1 == 2) {
    iVar1 = GetSystemMetrics(DAT_0046973c);
    iVar2 = GetSystemMetrics(DAT_00469744);
    *param_2 = (char)param_1[1] * iVar1;
    *param_4 = *(char *)((int)param_1 + 6) * iVar2;
    *param_3 = *(char *)((int)param_1 + 5) * iVar1;
    *param_5 = *(char *)((int)param_1 + 7) * iVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418f5c  FUN_00418f5c   (6 bytes)   [unnamed]
undefined4 * __stdcall FUN_00418f5c(undefined4 *param_1,undefined4 param_2)

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
  __InitExceptBlockLDTC(0x466e68);
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
  FUN_004191cc((int)param_1,in_stack_0000000c);
  *in_FS_OFFSET = uStack_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418f62  FUN_00418f62   (282 bytes)   [unnamed]
int __stdcall FUN_00418f62(void)

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
  __InitExceptBlockLDTC(0x466e68);
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
  FUN_004191cc(*piVar1,*(undefined4 *)(unaff_EBP + 0x10));
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x24);
  return *piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041919c  FUN_0041919c   (45 bytes)   [unnamed]
void __cdecl FUN_0041919c(int param_1,undefined4 *param_2)

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
    FUN_0041b748(*(int *)(param_1 + 6));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004191cc  FUN_004191cc   (78 bytes)   [unnamed]
void __cdecl FUN_004191cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1a) = param_2;
  iVar1 = *(int *)(param_1 + 0x1a);
  if (iVar1 != 0) {
    if (iVar1 - 1U < 3) {
      uVar2 = 1;
      goto LAB_004191fa;
    }
    if (iVar1 - 4U < 6) {
      uVar2 = 2;
      goto LAB_004191fa;
    }
  }
  uVar2 = 0;
LAB_004191fa:
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  if (*(int *)(param_1 + 6) != 0) {
    FUN_0041b748(*(int *)(param_1 + 6));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004195a8  FUN_004195a8   (95 bytes)   [unnamed]
void __cdecl FUN_004195a8(int param_1)

{
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    (**(code **)(*(int *)(**(int **)(param_1 + 6) + 8) + 0x6c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419608  FUN_00419608   (73 bytes)   [unnamed]
void __cdecl FUN_00419608(int param_1)

{
  FUN_004195a8(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419654  FUN_00419654   (38 bytes)   [unnamed]
void __cdecl FUN_00419654(int param_1)

{
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    UpdateWindow(*(HWND *)(**(int **)(param_1 + 6) + 0xc));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419838  FUN_00419838   (184 bytes)   [unnamed]
void __cdecl FUN_00419838(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 6) != 0) {
    iVar1 = GetSystemMetrics(DAT_0046973c);
    iVar2 = GetSystemMetrics(DAT_00469744);
    FUN_00418e38((int *)(param_1 + 0x2e),param_2,param_3,param_4,param_5,
                 (uint)*(byte *)(*(int *)(param_1 + 6) + 0x30));
    *param_2 = *(int *)(param_1 + 0x1e) * iVar1 + *param_2;
    *param_3 = *param_3 + *(int *)(param_1 + 0x22) * iVar1;
    *param_4 = *param_4 + *(int *)(param_1 + 0x26) * iVar2;
    *param_5 = *param_5 + *(int *)(param_1 + 0x2a) * iVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004198f0  FUN_004198f0   (105 bytes)   [unnamed]
void __cdecl FUN_004198f0(int param_1,int *param_2)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  FUN_00419838(param_1,&local_8,&local_c,&local_10,&local_14);
  *param_2 = local_8;
  param_2[2] = (*(int *)(param_1 + 0x12) - *(int *)(param_1 + 10)) - local_c;
  param_2[1] = local_10;
  param_2[3] = (*(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe)) - local_14;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419a98  FUN_00419a98   (151 bytes)   [unnamed]
int * __cdecl FUN_00419a98(int *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iVar2;
  
  __InitExceptBlockLDTC(0x466fd8);
  FUN_00418f5c(param_1,param_3);
  *param_1 = (int)&OWL::TSeparatorGadget::vftable;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  iVar2 = 0;
  (**(code **)(*param_1 + 4))();
  *(ushort *)((int)param_1 + 0x42) = *(ushort *)((int)param_1 + 0x42) & 0xfffd;
  if (param_2 == 0) {
    iVar2 = DAT_00469814;
    iVar1 = GetSystemMetrics(DAT_00469814);
    param_2 = iVar1 * 2;
  }
  *(int *)((int)param_1 + 0x12) = param_2;
  *(int *)((int)param_1 + 0x16) = param_2;
  *in_FS_OFFSET = iVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419dc8  FUN_00419dc8   (65 bytes)   [unnamed]
undefined4 * __cdecl FUN_00419dc8(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4670c4);
  *param_1 = &OWL::TGadgetList::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419ec8  FUN_00419ec8   (74 bytes)   [unnamed]
int * __cdecl FUN_00419ec8(int param_1)

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
// 0x0041a0b0  FUN_0041a0b0   (421 bytes)   [unnamed]
uint * __cdecl FUN_0041a0b0(uint *param_1,int param_2,char param_3,byte param_4)

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
  
  __InitExceptBlockLDTC(0x46728c);
  bVar14 = 0;
  bVar13 = 0;
  bVar12 = 0;
  bVar11 = 1;
  bVar10 = 0;
  bVar9 = 0;
  puVar2 = FUN_00418cd8(local_c);
  bVar1 = FUN_00418cb0(puVar2);
  if (param_3 == '\0') {
    iVar3 = 400;
  }
  else {
    iVar3 = 700;
  }
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  FUN_0042e298(&local_4c);
  nDenominator = 0x48;
  iVar4 = (**(code **)(local_47 + 0xc))();
  iVar4 = MulDiv(-param_2,iVar4,nDenominator);
  OWL::TWindowDC::_dtor(&local_4c,0);
  puVar2 = FUN_00418cd8(local_14);
  FUN_00418c54((int)local_24,puVar2);
  FUN_00418948(param_1,local_1c,iVar4,iVar6,iVar7,iVar8,iVar3,bVar1,param_4,bVar9,bVar10,bVar11,
               bVar12,bVar13,bVar14);
  if (local_1c != (LPCSTR)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar5 = (int *)(local_1c + -0xc);
      if (piVar5 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0041a208;
    }
    operator_delete();
    local_1c = (LPCSTR)0x0;
  }
LAB_0041a208:
  OWL::TGdiObject::_dtor(local_14,0);
  OWL::TGdiObject::_dtor(local_c,0);
  *in_FS_OFFSET = local_70;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a280  FUN_0041a280   (757 bytes)   [unnamed]
int * __cdecl FUN_0041a280(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  tagTEXTMETRICA local_64;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x4672f0);
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
    FUN_0042ab84((int *)((int)param_1 + 0x5d),1);
    local_10 = local_10 + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  FUN_00419dc8(param_1 + 1);
  local_10 = local_10 + 1;
  param_1[6] = (int)&OWL::TGadgetWindow::vftable;
  param_1[1] = (int)&PTR_LAB_004675f4;
  *(undefined ***)param_1[4] = &PTR_LAB_00467614;
  *(undefined ***)param_1[5] = &PTR_LAB_00467620;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046762c;
  param_1[10] = 1;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = *(undefined1 *)((int)param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  FUN_0042ac60(*param_1,param_3,(uint *)0x0,param_6);
  FUN_0042d484(*param_1,0,0x2000000,0);
  bVar1 = FUN_004109c0();
  if (!bVar1) {
    FUN_0042d484(*param_1,0,0x800000,0);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  if ((param_5 == (uint *)0x0) &&
     (param_5 = (uint *)operator_new(), local_8 = param_5, param_5 != (uint *)0x0)) {
    local_1c = 0x20;
    FUN_0041a0b0(param_5,6,'\0',0);
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
  FUN_00418a84(param_1[7],&local_64);
  *(char *)(param_1 + 0xc) = (char)local_64.tmHeight + (char)local_64.tmExternalLeading;
  *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)(param_1 + 0xc);
  if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
    iVar2 = GetSystemMetrics(DAT_00469744);
    *(int *)(*param_1 + 0x2c) = *(int *)(*param_1 + 0x2c) + iVar2 * 2;
  }
  *(undefined4 *)(*param_1 + 0x5c) = DAT_00476bf0;
  *(undefined4 *)((int)param_1 + 0x37) = 0;
  *(undefined4 *)((int)param_1 + 0x3b) = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 4;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a798  FUN_0041a798   (68 bytes)   [unnamed]
uint __cdecl FUN_0041a798(int *param_1)

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
// 0x0041a7dc  FUN_0041a7dc   (36 bytes)   [unnamed]
undefined4 __cdecl FUN_0041a7dc(int *param_1,int param_2)

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
// 0x0041a800  FUN_0041a800   (26 bytes)   [unnamed]
void __cdecl FUN_0041a800(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    ReleaseCapture();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a81c  FUN_0041a81c   (189 bytes)   [unnamed]
void __cdecl FUN_0041a81c(int *param_1,int param_2)

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
    puVar1 = FUN_004567e4(iVar3,iVar2,(int *)&DAT_0040467c,(int *)&DAT_004126c4,0);
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
      puVar1 = FUN_004567e4(iVar3,iVar2,(int *)&DAT_0040467c,(int *)&DAT_004126c4,0);
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 < 1) {
      FUN_0042bbb4(puVar1[1],0x11f,0xffff0000,0);
    }
    else {
      FUN_0042bbb4(puVar1[1],0x11f,param_2,0);
    }
    FUN_0042bbb4(puVar1[1],0x121,2,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a9e0  FUN_0041a9e0   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041a9e0(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x467558);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa7c  FUN_0041aa7c   (79 bytes)   [unnamed]
int __cdecl FUN_0041aa7c(int *param_1)

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
// 0x0041ae00  FUN_0041ae00   (718 bytes)   [unnamed]
void __cdecl FUN_0041ae00(int param_1,int *param_2)

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
  FUN_00418e38((int *)(param_1 + 0x28),&local_8,&local_c,&local_10,&local_14,
               (uint)*(byte *)(param_1 + 0x30));
  local_1c = 0;
  local_18 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,(undefined*)FUN_0041a9e0);
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
// 0x0041b0d0  FUN_0041b0d0   (536 bytes)   [unnamed]
void __cdecl FUN_0041b0d0(int param_1,int *param_2)

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
  FUN_00418e38((int *)(param_1 + 0x28),&local_8,&local_c,&local_10,&local_14,
               (uint)*(byte *)(param_1 + 0x30));
  local_1c = 0;
  local_18 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,(undefined*)FUN_0041a9e0);
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
// 0x0041b2e8  FUN_0041b2e8   (208 bytes)   [unnamed]
void __cdecl FUN_0041b2e8(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int *param_7)

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
// 0x0041b3b8  FUN_0041b3b8   (851 bytes)   [unnamed]
void __cdecl FUN_0041b3b8(int param_1,int *param_2)

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
  piVar2 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,(undefined*)FUN_0041a9e0);
  operator_delete_array();
  param_2[2] = (int)piVar2;
  FUN_00418e38((int *)(param_1 + 0x28),&local_10,&local_14,&local_18,&local_1c,
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
      FUN_0041b2e8(param_1,local_44,(int)local_38,(int)local_3c,local_24,(int)param_2,&local_50);
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
  FUN_0041b2e8(param_1,local_44,(int)local_38,0,local_24,(int)param_2,&local_50);
  param_2[1] = param_2[1] + local_1c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b748  FUN_0041b748   (16 bytes)   [unnamed]
void __cdecl FUN_0041b748(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x34))();
  return;
}

} // namespace tea
