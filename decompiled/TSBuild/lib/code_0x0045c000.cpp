// TSBuild.exe — runtime / library code "code_0x0045c000"
// 95 functions, 0x0045c008..0x0045ff3c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045c008  FUN_0045c008   (23 bytes)   [unnamed]
void __cdecl FUN_0045c008(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c020  FUN_0045c020   (14 bytes)   [unnamed]
void __cdecl FUN_0045c020(int param_1,int param_2)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c030  FUN_0045c030   (130 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045c030(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486490);
  FUN_0045ad88(param_1);
  *param_1 = &std::basic_stringbuf_char::vftable;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0045c008((int)param_1,0,0);
  FUN_0045bfec((int)param_1,0,0,0);
  param_1[1] = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c140  FUN_0045c140   (174 bytes)   [unnamed]
int * __cdecl FUN_0045c140(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4864d8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x13);
    FUN_0045b2c8(param_1 + 0x13);
  }
  FUN_0045b268(param_1,1);
  param_1[1] = (int)&std::basic_ofstream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00487614;
  FUN_0045ac30(param_1 + 2);
  FUN_0045b330(*param_1,param_1 + 2);
  FUN_0045c1f0(param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c1f0  FUN_0045c1f0   (69 bytes)   [unnamed]
void __cdecl FUN_0045c1f0(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_0045b3fc(*param_1,0);
  piVar1 = FUN_0045b6ac(param_1 + 2,param_2,param_3 | 8,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_0045b7d4(*param_1,4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c2d8  FUN_0045c2d8   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045c2d8(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x486520);
  local_18 = 8;
  *param_1 = param_2;
  iVar3 = FUN_0045be50(*param_2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_0045be50(*param_2);
    FUN_0045be5c(piVar4);
  }
  cVar1 = FUN_0045c3c0();
  if (cVar1 != '\0') {
    bVar2 = FUN_0045c3cc((undefined *)param_2);
    if (bVar2) {
      FUN_00469598((int *)&DAT_0048908c);
    }
    bVar2 = FUN_0045c3e0(param_2);
    if (bVar2) {
      FUN_00469598((int *)&DAT_004890a4);
    }
  }
  iVar3 = FUN_0045bea8(*param_2);
  if (iVar3 != 0) {
    iVar3 = FUN_0045bea8(*param_2);
    uVar5 = FUN_0045bba0(iVar3);
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)FUN_0045bea8(*param_2);
      FUN_0045c418(local_34,piVar4);
    }
  }
  bVar2 = FUN_0045be3c(*param_2);
  *(bool *)(param_1 + 1) = bVar2;
  if (!bVar2) {
    FUN_0045b7d4(*param_2,1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c3c0  FUN_0045c3c0   (10 bytes)   [unnamed]
undefined1 __stdcall FUN_0045c3c0(void)

{
  return DAT_00487898;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c3cc  FUN_0045c3cc   (19 bytes)   [unnamed]
bool __cdecl FUN_0045c3cc(undefined *param_1)

{
  return param_1 == &DAT_0048cfa0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c3e0  FUN_0045c3e0   (19 bytes)   [unnamed]
bool __cdecl FUN_0045c3e0(undefined4 *param_1)

{
  return param_1 == &DAT_0048cfe0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c418  FUN_0045c418   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_0045c418(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0xc))();
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c504  FUN_0045c504   (159 bytes)   [unnamed]
int * __cdecl FUN_0045c504(int *param_1,int param_2,uint param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486544);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xe);
    FUN_0045b2c8(param_1 + 0xe);
  }
  FUN_0045b268(param_1,1);
  param_1[1] = (int)&std::basic_ostringstream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_004875f8;
  FUN_0045c030(param_1 + 2,param_3 | 8);
  FUN_0045b330(*param_1,param_1 + 2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c644  FUN_0045c644   (465 bytes)   [unnamed]
int __cdecl FUN_0045c644(int param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_27c [16];
  undefined1 local_26c [240];
  undefined1 local_17c [240];
  int local_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x4865f0);
  local_68 = 8;
  FUN_00459ec8(param_1,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    pcVar6 = FUN_0045642c;
    uVar5 = 0;
    local_68 = 0x2c;
    FUN_00459238(local_80);
    puVar1 = FUN_004670cc(local_17c,PTR_s_unexpected_NULL_pointer_in_funct_00488a64);
    puVar2 = (uint *)FUN_00459ce4(puVar1);
    std::string::string_from_cstr((int)local_2c,puVar2);
    local_5c = local_5c + 1;
    FUN_00459cec(local_1c,(int)local_2c);
    local_5c = local_5c + 2;
    std::string::_dtor((int)local_2c,2);
    local_68 = 0x20;
    FUN_00471ae8((uint *)&DAT_00403f08,local_1c,uVar5,(undefined*)pcVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if (param_3 == (*(uint *)&DAT_00485f20)) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar7 = &LAB_00402064;
    uVar5 = 0;
    local_68 = 0x44;
    FUN_00459238(local_88);
    puVar1 = FUN_004670cc(local_26c,PTR_s_invalid_string_size_parameter_in_00488a54);
    puVar2 = (uint *)FUN_00459ce4(puVar1);
    std::string::string_from_cstr((int)local_54,puVar2);
    local_5c = local_5c + 1;
    FUN_0045a664(local_44,(int)local_54);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_54,2);
    local_68 = 0x38;
    FUN_00471ae8((uint *)&DAT_00402008,local_44,uVar5,puVar7,uVar8,uVar9,uVar10,uVar11);
  }
  piVar3 = std::string::__getRep(param_1,param_3,param_3);
  local_8c = FUN_0045a1f0((int)piVar3);
  FUN_004591e0((int)local_27c,param_1,&local_8c);
  puVar4 = (undefined4 *)FUN_00459074(param_1);
  FUN_00459ea8(puVar4,param_2,param_3);
  *in_FS_OFFSET = local_78;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c818  FUN_0045c818   (373 bytes)   [unnamed]
int __cdecl FUN_0045c818(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_15c [16];
  undefined1 local_14c [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x48667c);
  local_40 = 8;
  FUN_00459ec8(param_1,0);
  uVar1 = FUN_004591bc(param_2);
  if (uVar1 < param_3) {
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar1 = 1;
    puVar10 = &LAB_004021bc;
    uVar9 = 0;
    local_40 = 0x2c;
    FUN_00459238(local_58);
    FUN_004591bc(param_2);
    puVar2 = FUN_004670cc(local_14c,PTR_s_string_index_out_of_range_in_fun_00488a60);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_0045a61c(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    std::string::_dtor((int)local_2c,2);
    local_40 = 0x20;
    FUN_00471ae8((uint *)&DAT_00402160,local_1c,uVar9,puVar10,uVar1,uVar11,uVar12,uVar13);
  }
  iVar4 = FUN_004591bc(param_2);
  uVar1 = iVar4 - param_3;
  local_40 = 8;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  if (param_4 == (*(uint *)&DAT_00485f20)) {
    param_4 = 0;
  }
  uVar8 = uVar1;
  if (uVar1 < param_4) {
    uVar8 = param_4;
  }
  piVar5 = std::string::__getRep(param_1,uVar8,uVar1);
  local_5c = FUN_0045a1f0((int)piVar5);
  FUN_004591e0((int)local_15c,param_1,&local_5c);
  iVar4 = FUN_00459074(param_2);
  puVar6 = (undefined4 *)(iVar4 + param_3);
  puVar7 = (undefined4 *)FUN_00459074(param_1);
  FUN_00459ea8(puVar7,puVar6,uVar1);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c990  FUN_0045c990   (71 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045c990(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487470);
  FUN_00459688(param_1,param_2,0x20);
  *param_1 = &PTR_FUN_00487578;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c9d8  FUN_0045c9d8   (226 bytes)   [unnamed]
int __cdecl FUN_0045c9d8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x4866c4);
  local_18 = 8;
  FUN_00459238(local_34);
  local_2c = 0;
  FUN_0045ab08(param_1,&local_2c);
  piVar1 = (int *)FUN_00459080(param_2);
  iVar2 = FUN_00459094(piVar1);
  if (iVar2 < 1) {
    uVar3 = FUN_004591bc(param_2);
    piVar1 = std::string::__getRep(param_1,uVar3,uVar3);
    local_3c = FUN_0045a1f0((int)piVar1);
    FUN_004591e0((int)local_5c,param_1,&local_3c);
    puVar4 = (undefined4 *)FUN_00459b5c(param_2);
    puVar5 = (undefined4 *)FUN_00459074(param_1);
    FUN_00459ea8(puVar5,puVar4,uVar3);
  }
  else {
    local_38 = FUN_00459074(param_2);
    FUN_004591e0((int)local_4c,param_1,&local_38);
    piVar1 = (int *)FUN_00459080(param_1);
    FUN_00459b44(piVar1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cb4c  FUN_0045cb4c   (163 bytes)   [unnamed]
void __cdecl FUN_0045cb4c(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486718);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00487770;
    std::string::_dtor((int)(param_1 + 0x10),2);
    std::string::_dtor((int)(param_1 + 0xc),2);
    std::string::_dtor((int)(param_1 + 8),2);
    std::locale::facet::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cbf0  FUN_0045cbf0   (93 bytes)   [unnamed]
void __cdecl FUN_0045cbf0(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48673c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00487748;
    FUN_0045cb4c(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cc50  FUN_0045cc50   (125 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_0045cc50(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_34 [8];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x486770);
  local_2c = FUN_0045ccf8(param_1);
  FUN_00458f14(local_34);
  local_18 = 8;
  iVar1 = FUN_00458f3c((int)local_2c);
  uVar2 = FUN_00458f48(local_34,iVar1);
  FUN_0045cf4c(local_34,uVar2,param_2);
  *in_FS_OFFSET = local_28;
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ccf8  FUN_0045ccf8   (97 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045ccf8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_0045cd5c(param_1);
      puVar2 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
    else {
      puVar2 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  uVar1 = FUN_00458200();
  puVar2[1] = uVar1;
  uVar1 = FUN_00458200();
  puVar2[2] = uVar1;
  uVar1 = FUN_00458200();
  puVar2[3] = uVar1;
  *puVar2 = 0;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cd5c  FUN_0045cd5c   (213 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_0045cd5c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_54 [24];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x4867a4);
  FUN_004592d8((int)(param_1 + 2));
  FUN_004593a8(local_34);
  local_2c = (undefined4 *)FUN_0045ce6c();
  local_18 = 8;
  FUN_00459370(local_3c);
  iVar1 = FUN_0045cedc();
  local_2c[2] = iVar1;
  local_18 = 0;
  piVar3 = param_1 + 2;
  uVar2 = FUN_004592e4((int)piVar3);
  *local_2c = uVar2;
  local_2c[1] = *param_1;
  FUN_004592f0((int)local_54,(int)piVar3,(undefined4*)&local_2c);
  iVar1 = FUN_004592d8((int)piVar3);
  iVar1 = *(int *)(iVar1 + 8);
  param_1[7] = iVar1;
  param_1[8] = iVar1 + *param_1 * 0x28;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ce6c  FUN_0045ce6c   (112 bytes)   [unnamed]
int __stdcall FUN_0045ce6c(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_2c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x4867c8);
  iVar1 = operator_new();
  if (iVar1 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 1;
    puVar3 = &LAB_0040eb80;
    uVar2 = 0;
    FUN_0045a02c(&local_8);
    FUN_00471ae8((uint *)&DAT_0040eb28,&local_8,uVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cedc  FUN_0045cedc   (112 bytes)   [unnamed]
int __stdcall FUN_0045cedc(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_2c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x4867ec);
  iVar1 = operator_new();
  if (iVar1 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 1;
    puVar3 = &LAB_0040eb80;
    uVar2 = 0;
    FUN_0045a02c(&local_8);
    FUN_00471ae8((uint *)&DAT_0040eb28,&local_8,uVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cf4c  FUN_0045cf4c   (21 bytes)   [unnamed]
void __cdecl FUN_0045cf4c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0045cf64(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cf64  FUN_0045cf64   (78 bytes)   [unnamed]
void __cdecl FUN_0045cf64(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x486810);
  puVar1 = (undefined4 *)FUN_0045a108(0x18,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0045cfb4(puVar1,param_2);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cfb4  FUN_0045cfb4   (73 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045cfb4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486840);
  *param_1 = *param_2;
  FUN_0045c9d8((int)(param_1 + 2),(int)(param_2 + 2));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d000  FUN_0045d000   (182 bytes)   [unnamed]
int __cdecl FUN_0045d000(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_00458cb8(*(undefined4 *)(param_1 + 8));
  if (*piVar2 == 0) {
    piVar2 = (int *)FUN_0045816c(*(int *)(param_1 + 8));
    piVar2 = (int *)FUN_0045816c(*piVar2);
    if (*piVar2 == *(int *)(param_1 + 8)) {
      puVar3 = (undefined4 *)FUN_004581e0(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = *puVar3;
      return param_1;
    }
  }
  piVar2 = (int *)FUN_00457fb4(*(int *)(param_1 + 8));
  bVar1 = FUN_004581c8(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_0045816c(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while (piVar2 = (int *)FUN_00457fb4(iVar4), *piVar2 == *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar4;
      piVar2 = (int *)FUN_0045816c(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  else {
    piVar2 = (int *)FUN_00457fb4(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while( true ) {
      piVar2 = (int *)FUN_004581e0(iVar4);
      bVar1 = FUN_004581c8(piVar2);
      if (bVar1) break;
      piVar2 = (int *)FUN_004581e0(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d0b8  FUN_0045d0b8   (939 bytes)   [unnamed]
int __cdecl FUN_0045d0b8(int param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_c [8];
  
  puVar2 = FUN_0045cc50(param_2,param_5);
  param_2[10] = param_2[10] + 1;
  if (param_4 != param_2[9]) {
    bVar1 = FUN_004581c8((int *)&param_3);
    if (bVar1) {
      piVar3 = (int *)FUN_0045d46c(param_4);
      piVar4 = (int *)FUN_0045d464(local_c,param_5);
      bVar1 = FUN_0045d490(param_2 + 0xc,piVar4,piVar3);
      if (!bVar1) {
        puVar5 = (undefined4 *)FUN_004581e0(param_4);
        *puVar5 = puVar2;
        piVar3 = (int *)FUN_00458204((int)param_2);
        if (*piVar3 == param_4) {
          puVar5 = (undefined4 *)FUN_00458204((int)param_2);
          *puVar5 = puVar2;
        }
        goto LAB_0045d17c;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_00457fb4(param_4);
  *puVar5 = puVar2;
  if (param_4 == param_2[9]) {
    puVar5 = (undefined4 *)FUN_00458158((int)param_2);
    *puVar5 = puVar2;
    puVar5 = (undefined4 *)FUN_00458204((int)param_2);
    *puVar5 = puVar2;
  }
  else {
    piVar3 = (int *)FUN_004581ec((int)param_2);
    if (*piVar3 == param_4) {
      puVar5 = (undefined4 *)FUN_004581ec((int)param_2);
      *puVar5 = puVar2;
    }
  }
LAB_0045d17c:
  piVar3 = (int *)FUN_0045816c((int)puVar2);
  *piVar3 = param_4;
  param_3 = puVar2;
LAB_0045d40e:
  do {
    piVar3 = (int *)FUN_00458158((int)param_2);
    if ((undefined4 *)*piVar3 == param_3) {
LAB_0045d436:
      puVar5 = (undefined4 *)FUN_00458158((int)param_2);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 1;
      FUN_00457fc0(param_1,puVar2);
      return param_1;
    }
    puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_00458cb8(*puVar5);
    if (*piVar3 != 0) goto LAB_0045d436;
    piVar3 = (int *)FUN_0045816c((int)param_3);
    iVar6 = *piVar3;
    piVar3 = (int *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_0045816c(*piVar3);
    piVar3 = (int *)FUN_00457fb4(*piVar3);
    if (iVar6 == *piVar3) {
      piVar3 = (int *)FUN_0045816c((int)param_3);
      piVar3 = (int *)FUN_0045816c(*piVar3);
      piVar3 = (int *)FUN_004581e0(*piVar3);
      param_4 = *piVar3;
      bVar1 = FUN_004581c8(&param_4);
      if (!bVar1) {
        piVar3 = (int *)FUN_00458cb8(param_4);
        if (*piVar3 == 0) {
          puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
          puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_00458cb8(param_4);
          *puVar5 = 1;
          piVar3 = (int *)FUN_0045816c((int)param_3);
          puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
          puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
          *puVar5 = 0;
          piVar3 = (int *)FUN_0045816c((int)param_3);
          puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
          param_3 = (undefined4 *)*puVar5;
          goto LAB_0045d40e;
        }
      }
      piVar3 = (int *)FUN_0045816c((int)param_3);
      piVar3 = (int *)FUN_004581e0(*piVar3);
      if ((undefined4 *)*piVar3 == param_3) {
        piVar3 = (int *)FUN_0045816c((int)param_3);
        param_3 = (undefined4 *)*piVar3;
        FUN_00458d30((int)param_2,(int)param_3);
      }
      puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 1;
      piVar3 = (int *)FUN_0045816c((int)param_3);
      puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 0;
      piVar3 = (int *)FUN_0045816c((int)param_3);
      piVar3 = (int *)FUN_0045816c(*piVar3);
      FUN_00458df8((int)param_2,*piVar3);
      goto LAB_0045d40e;
    }
    piVar3 = (int *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_0045816c(*piVar3);
    piVar3 = (int *)FUN_00457fb4(*piVar3);
    param_4 = *piVar3;
    bVar1 = FUN_004581c8(&param_4);
    if (!bVar1) {
      piVar3 = (int *)FUN_00458cb8(param_4);
      if (*piVar3 == 0) {
        puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
        puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
        *puVar5 = 1;
        puVar5 = (undefined4 *)FUN_00458cb8(param_4);
        *puVar5 = 1;
        piVar3 = (int *)FUN_0045816c((int)param_3);
        puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
        puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
        *puVar5 = 0;
        piVar3 = (int *)FUN_0045816c((int)param_3);
        puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
        param_3 = (undefined4 *)*puVar5;
        goto LAB_0045d40e;
      }
    }
    piVar3 = (int *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_00457fb4(*piVar3);
    if ((undefined4 *)*piVar3 == param_3) {
      piVar3 = (int *)FUN_0045816c((int)param_3);
      param_3 = (undefined4 *)*piVar3;
      FUN_00458df8((int)param_2,(int)param_3);
    }
    puVar5 = (undefined4 *)FUN_0045816c((int)param_3);
    puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
    *puVar5 = 1;
    piVar3 = (int *)FUN_0045816c((int)param_3);
    puVar5 = (undefined4 *)FUN_0045816c(*piVar3);
    puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
    *puVar5 = 0;
    piVar3 = (int *)FUN_0045816c((int)param_3);
    piVar3 = (int *)FUN_0045816c(*piVar3);
    FUN_00458d30((int)param_2,*piVar3);
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d464  FUN_0045d464   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_0045d464(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d46c  FUN_0045d46c   (33 bytes)   [unnamed]
undefined4 __cdecl FUN_0045d46c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c [8];
  
  iVar1 = FUN_00458f3c(param_1);
  uVar2 = FUN_0045d464(local_c,iVar1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d490  FUN_0045d490   (21 bytes)   [unnamed]
bool __cdecl FUN_0045d490(undefined4 param_1,int *param_2,int *param_3)

{
  return *param_2 < *param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d4a8  FUN_0045d4a8   (6 bytes)   [unnamed]
undefined4 * __stdcall FUN_0045d4a8(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_38 [4];
  undefined1 auStack_28 [16];
  undefined4 auStack_18 [2];
  int iStack_10;
  int iStack_8;
  
  iVar5 = param_2[9];
  piVar3 = (int *)FUN_0045d594((int)param_2);
  iStack_8 = *piVar3;
  while( true ) {
    bVar2 = FUN_004581c8(&iStack_8);
    if (bVar2) break;
    piVar3 = param_3;
    piVar4 = (int *)FUN_0045d46c(iStack_8);
    bVar2 = FUN_0045d490(param_2 + 0xc,piVar4,piVar3);
    iVar1 = iStack_8;
    if (bVar2) {
      piVar3 = (int *)FUN_004581e0(iStack_8);
      iStack_8 = *piVar3;
    }
    else {
      piVar3 = (int *)FUN_00457fb4(iStack_8);
      iStack_8 = *piVar3;
      iVar5 = iVar1;
    }
  }
  FUN_00457fc0((int)auStack_18,iVar5);
  FUN_00457fec((int)auStack_28,(int)param_2);
  bVar2 = FUN_0045813c((int)auStack_18,(int)auStack_28);
  if (!bVar2) {
    piVar3 = (int *)FUN_0045d46c(iStack_10);
    bVar2 = FUN_0045d490(param_2 + 0xc,param_3,piVar3);
    if (!bVar2) {
      puVar6 = auStack_18;
      goto LAB_0045d574;
    }
  }
  FUN_00457fec((int)auStack_38,(int)param_2);
  puVar6 = auStack_38;
LAB_0045d574:
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  param_1[2] = puVar6[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d4ae  FUN_0045d4ae   (230 bytes)   [unnamed]
undefined4 __stdcall FUN_0045d4ae(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int unaff_EBP;
  undefined4 uVar8;
  
  piVar1 = *(int **)(unaff_EBP + 0x10);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  uVar8 = *(undefined4 *)(iVar2 + 0x24);
  puVar5 = (undefined4 *)FUN_0045d594(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = *puVar5;
  while( true ) {
    bVar4 = FUN_004581c8((int *)(unaff_EBP + -4));
    if (bVar4) break;
    piVar7 = piVar1;
    piVar6 = (int *)FUN_0045d46c(*(int *)(unaff_EBP + -4));
    bVar4 = FUN_0045d490(iVar2 + 0x30,piVar6,piVar7);
    if (bVar4) {
      puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
    else {
      uVar8 = *(undefined4 *)(unaff_EBP + -4);
      puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -4));
      *(undefined4 *)(unaff_EBP + -4) = *puVar5;
    }
  }
  FUN_00457fc0(unaff_EBP + -0x14,uVar8);
  FUN_00457fec(unaff_EBP + -0x24,iVar2);
  bVar4 = FUN_0045813c(unaff_EBP + -0x14,unaff_EBP + -0x24);
  if (!bVar4) {
    piVar7 = (int *)FUN_0045d46c(*(int *)(unaff_EBP + -0xc));
    bVar4 = FUN_0045d490(iVar2 + 0x30,piVar1,piVar7);
    if (!bVar4) {
      puVar5 = (undefined4 *)(unaff_EBP + -0x14);
      goto LAB_0045d574;
    }
  }
  FUN_00457fec(unaff_EBP + -0x34,iVar2);
  puVar5 = (undefined4 *)(unaff_EBP + -0x34);
LAB_0045d574:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *puVar5;
  puVar3[1] = puVar5[1];
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = puVar5[2];
  return *(undefined4 *)(unaff_EBP + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d594  FUN_0045d594   (18 bytes)   [unnamed]
int __cdecl FUN_0045d594(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045816c(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d5a8  FUN_0045d5a8   (129 bytes)   [unnamed]
int __cdecl FUN_0045d5a8(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)operator_new_array();
  uVar2 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar2 = param_1[1];
  }
  puVar3 = puVar1;
  for (puVar4 = (undefined4 *)*param_1; puVar4 != (undefined4 *)(*param_1 + uVar2 * 4);
      puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
  }
  puVar4 = puVar1 + uVar2;
  for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
  }
  if (*param_1 != 0) {
    operator_delete_array();
  }
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d62c  FUN_0045d62c   (129 bytes)   [unnamed]
int __cdecl FUN_0045d62c(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)operator_new_array();
  uVar2 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar2 = param_1[1];
  }
  puVar3 = puVar1;
  for (puVar4 = (undefined4 *)*param_1; puVar4 != (undefined4 *)(*param_1 + uVar2 * 4);
      puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
  }
  puVar4 = puVar1 + uVar2;
  for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
  }
  if (*param_1 != 0) {
    operator_delete_array();
  }
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d6b0  FUN_0045d6b0   (53 bytes)   [unnamed]
void __cdecl FUN_0045d6b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_0045d6e8();
    return;
  }
  if (param_1 == 1) {
    FUN_0045d770();
    return;
  }
  FUN_0045d788(0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d6e8  FUN_0045d6e8   (79 bytes)   [unnamed]
undefined4 * __stdcall FUN_0045d6e8(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x486870);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0045c990(puVar1,1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d770  FUN_0045d770   (22 bytes)   [unnamed]
void __stdcall FUN_0045d770(void)

{
  FUN_0045d788(0,&DAT_00484eb1,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d788  FUN_0045d788   (81 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045d788(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4868a0);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0045c990(puVar1,param_3);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d7dc  FUN_0045d7dc   (53 bytes)   [unnamed]
void __cdecl FUN_0045d7dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_0045d814();
    return;
  }
  if (param_1 == 1) {
    FUN_0045d8b0();
    return;
  }
  FUN_0045d8c8(0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d814  FUN_0045d814   (79 bytes)   [unnamed]
undefined4 * __stdcall FUN_0045d814(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4868d0);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0045d864(puVar1,1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d864  FUN_0045d864   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045d864(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486900);
  FUN_00459688(param_1,param_2,0x80);
  *param_1 = &std::num_put_char_std_ostreambuf_iterator_char::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d8b0  FUN_0045d8b0   (22 bytes)   [unnamed]
void __stdcall FUN_0045d8b0(void)

{
  FUN_0045d8c8(0,&DAT_00484eb4,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d8c8  FUN_0045d8c8   (81 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045d8c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x486924);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0045d864(puVar1,param_3);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d91c  FUN_0045d91c   (10 bytes)   [unnamed]
undefined1 __cdecl FUN_0045d91c(undefined1 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d928  FUN_0045d928   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_0045d928(int param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d934  FUN_0045d934   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_0045d934(int param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ddd0  FUN_0045ddd0   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0045ddd0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dde0  FUN_0045dde0   (19 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045dde0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ddf4  FUN_0045ddf4   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_0045ddf4(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045de24  FUN_0045de24   (21 bytes)   [unnamed]
int __cdecl FUN_0045de24(int *param_1)

{
  if (*param_1 == -1) {
    return 0;
  }
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045de3c  FUN_0045de3c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045de3c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045de48  FUN_0045de48   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045de48(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045de54  FUN_0045de54   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045de54(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045de60  FUN_0045de60   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045de60(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045de6c  FUN_0045de6c   (75 bytes)   [unnamed]
undefined4 __cdecl FUN_0045de6c(int *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined1 *puVar5;
  
  uVar2 = FUN_0045de3c((int)param_1);
  uVar3 = FUN_0045de60((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)param_1[6];
    param_1[6] = param_1[6] + 1;
    *puVar5 = param_2;
    uVar1 = FUN_0045beec(&param_2);
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    puVar5 = &param_2;
    uVar1 = FUN_0045beec(puVar5);
    uVar4 = (**(code **)(*param_1 + 0x24))(uVar1,*param_1,puVar5,param_1,uVar1);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045deb8  FUN_0045deb8   (66 bytes)   [unnamed]
int * __cdecl FUN_0045deb8(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486994);
  FUN_0045defc(param_1,(int *)(param_2 + 0x20));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045defc  FUN_0045defc   (56 bytes)   [unnamed]
int * __cdecl FUN_0045defc(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487494);
  iVar1 = *param_2;
  *param_1 = iVar1;
  FUN_00462f14(iVar1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045df50  FUN_0045df50   (58 bytes)   [unnamed]
int * __cdecl FUN_0045df50(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_00459484((undefined4 *)&DAT_004887ec);
  piVar2 = (int *)FUN_00459490(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004665a4(param_1,(uint *)&DAT_004887ec,'\x01',0x20,(undefined*)FUN_0045d6b0);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045df8c  FUN_0045df8c   (49 bytes)   [unnamed]
bool __cdecl FUN_0045df8c(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_00469210(param_2,param_3,param_4 * param_5);
  return uVar1 == param_4 * param_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e370  FUN_0045e370   (81 bytes)   [unnamed]
int * __cdecl FUN_0045e370(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4869a8);
  *param_1 = param_2;
  puVar1 = FUN_0045ad20(&local_2c,0);
  FUN_0045e3c4(param_1 + 1,puVar1);
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_2 == -1) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e3c4  FUN_0045e3c4   (43 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045e3c4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4874a8);
  *param_1 = *param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e3f0  FUN_0045e3f0   (10 bytes)   [unnamed]
undefined4 __cdecl FUN_0045e3f0(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e3fc  FUN_0045e3fc   (23 bytes)   [unnamed]
bool __cdecl FUN_0045e3fc(int *param_1,int *param_2)

{
  return *param_2 < *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e414  FUN_0045e414   (80 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045e414(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4869b0);
  FUN_0045ad20(param_1 + 1,0);
  *param_1 = *param_2;
  FUN_0045dde0(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e464  FUN_0045e464   (74 bytes)   [unnamed]
undefined4 __cdecl FUN_0045e464(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  if (((char)param_1[2] == '\0') && ((char)param_2[2] == '\0')) {
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    if ((*param_1 == *param_2) &&
       ((bVar1 = FUN_0045e4b0(param_1 + 1,param_2 + 1), bVar1 &&
        ((char)param_1[2] == (char)param_2[2])))) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e4b0  FUN_0045e4b0   (23 bytes)   [unnamed]
bool __cdecl FUN_0045e4b0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e90c  FUN_0045e90c   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_0045e90c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e93c  FUN_0045e93c   (13 bytes)   [unnamed]
void __cdecl FUN_0045e93c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e94c  FUN_0045e94c   (40 bytes)   [unnamed]
char * __cdecl FUN_0045e94c(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5)

{
  char *pcVar1;
  
  pcVar1 = thunk_FUN_00468ee4(param_2,param_3,(char *)(param_4 * param_5));
  if ((int)pcVar1 < 0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e974  FUN_0045e974   (156 bytes)   [unnamed]
int __cdecl FUN_0045e974(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  __InitExceptBlockLDTC(0x486a08);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    FUN_0045deb8(&local_8,param_1);
    piVar3 = (int *)FUN_00459448(&local_8);
    uVar4 = FUN_0045b3e4(piVar3);
    std::locale::_dtor(&local_8,2);
    iVar2 = 0;
    while (param_2 != param_3) {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if ((char)uVar4 == cVar1) {
        iVar2 = iVar2 + 2;
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar2 = (int)param_3 - (int)param_2;
    *in_FS_OFFSET = local_2c;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ea80  FUN_0045ea80   (305 bytes)   [unnamed]
uint __cdecl FUN_0045ea80(int param_1,uint param_2,uint param_3,byte *param_4,uint param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_14c [240];
  uint local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x486a54);
  uVar1 = FUN_004591bc(param_1);
  if (uVar1 < param_2) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 1;
    puVar6 = &LAB_004021bc;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_14c,PTR_s_position_beyond_end_of_string_in_00488a58);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_0045a61c(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00402160,local_1c,uVar5,puVar6,uVar1,uVar7,uVar8,uVar9);
  }
  iVar4 = FUN_004591bc(param_1);
  if (iVar4 - param_2 < param_3) {
    iVar4 = FUN_004591bc(param_1);
    param_3 = iVar4 - param_2;
  }
  uVar1 = param_5;
  if (param_3 < param_5) {
    uVar1 = param_3;
  }
  local_5c = uVar1;
  iVar4 = FUN_00459074(param_1);
  uVar1 = FUN_0045ebb4((byte *)(iVar4 + param_2),param_4,uVar1);
  if (uVar1 == 0) {
    if (param_3 < param_5) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (uint)(param_3 != param_5);
    }
  }
  *in_FS_OFFSET = local_50;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ebb4  FUN_0045ebb4   (25 bytes)   [unnamed]
int __cdecl FUN_0045ebb4(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004678d8(param_1,param_2,param_3);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f178  FUN_0045f178   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045f178(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f184  FUN_0045f184   (60 bytes)   [unnamed]
int __cdecl FUN_0045f184(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_0045bef8((int)param_1);
  uVar2 = FUN_0045bf04((int)param_1);
  if (uVar1 < uVar2) {
    iVar3 = FUN_0045bf04((int)param_1);
    iVar4 = FUN_0045bef8((int)param_1);
    iVar3 = iVar3 - iVar4;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x14))();
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f1c0  FUN_0045f1c0   (325 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_0045f1c0(int *param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  __InitExceptBlockLDTC(0x486ad4);
  local_4c = 0;
  param_1[2] = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_4c = 1;
  }
  else {
    local_38 = 0x14;
    FUN_0045bc54(local_24,param_1,'\x01');
    local_2c = local_2c + 1;
    local_38 = 0x20;
    cVar1 = FUN_0045f3cc((int)local_24);
    if (cVar1 != '\0') {
      local_50 = 0;
      while (param_3 = param_3 + -1, -1 < param_3) {
        local_54 = FUN_0045b17c();
        piVar3 = &local_54;
        piVar4 = (int *)FUN_0045bea8(*param_1);
        local_50 = FUN_0045beb4(piVar4);
        bVar2 = FUN_0045bde4(&local_50,piVar3);
        if (bVar2) break;
        *param_2 = (undefined1)local_50;
        param_2 = param_2 + 1;
        param_1[2] = param_1[2] + 1;
        piVar3 = (int *)FUN_0045bea8(*param_1);
        FUN_0045bf54(piVar3);
      }
      local_58 = FUN_0045b17c();
      bVar2 = FUN_0045bde4(&local_50,&local_58);
      if (bVar2) {
        if (param_3 < 0) {
          local_4c = 2;
        }
        else {
          local_4c = 6;
        }
      }
    }
    local_2c = local_2c + -1;
    std::basic_istream_char::sentry::_dtor((int)local_24,2);
  }
  local_38 = 0;
  if (local_4c != 0) {
    FUN_0045b7d4(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f3cc  FUN_0045f3cc   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_0045f3cc(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f64c  FUN_0045f64c   (110 bytes)   [unnamed]
void __cdecl FUN_0045f64c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_004591bc(param_1);
  uVar2 = FUN_004591bc(param_1);
  piVar3 = std::string::__getRep(param_1,uVar2,uVar1);
  uVar1 = FUN_004591bc(param_1);
  puVar4 = (undefined4 *)FUN_0045a6f0(param_1);
  puVar5 = (undefined4 *)FUN_0045a1f0((int)piVar3);
  FUN_00459ea8(puVar5,puVar4,uVar1);
  FUN_00458fdc(param_1);
  local_8 = FUN_0045a1f0((int)piVar3);
  FUN_004591e0((int)local_18,param_1,&local_8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f6bc  FUN_0045f6bc   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045f6bc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f6c8  FUN_0045f6c8   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0045f6c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f6dc  FUN_0045f6dc   (18 bytes)   [unnamed]
bool __cdecl FUN_0045f6dc(int param_1)

{
  return (*(byte *)(param_1 + 0x30) & 5) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f768  FUN_0045f768   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_0045f768(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f774  FUN_0045f774   (61 bytes)   [unnamed]
int * __cdecl FUN_0045f774(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_00459484((undefined4 *)&DAT_00486b1c);
  piVar2 = (int *)FUN_00459490(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004665a4(param_1,(uint *)&DAT_00486b1c,'\x01',0x80,(undefined*)FUN_0045d7dc);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f7b4  FUN_0045f7b4   (76 bytes)   [unnamed]
int __cdecl FUN_0045f7b4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486b24);
  uVar1 = FUN_0045bea8(*param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  iVar2 = FUN_0045bea8(*param_2);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f800  FUN_0045f800   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_0045f800(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f80c  FUN_0045f80c   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_0045f80c(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f818  FUN_0045f818   (298 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_0045f818(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_88 [12];
  undefined4 uStack_7c;
  undefined1 local_60 [16];
  uint local_50;
  undefined4 local_4c;
  undefined2 local_3c;
  int local_30;
  int local_28;
  undefined4 local_24 [8];
  
  __InitExceptBlockLDTC(0x486b9c);
  local_50 = 0;
  local_3c = 0x14;
  FUN_0045c2d8(local_24,param_1);
  local_30 = local_30 + 1;
  local_3c = 0x20;
  cVar1 = FUN_0045f768((int)local_24);
  if (cVar1 != '\0') {
    FUN_0045f800(*param_1);
    FUN_0045f7b4((int)local_88,param_1);
    local_3c = 0x2c;
    FUN_00459808(&local_28,*param_1);
    local_30 = local_30 + 1;
    piVar2 = (int *)FUN_0045f774(&local_28);
    FUN_0045f990(local_60,piVar2);
    cVar1 = FUN_0045f80c((int)local_60);
    local_30 = local_30 + -1;
    uStack_7c = 0x45f8d8;
    std::locale::_dtor(&local_28,2);
    if (cVar1 != '\0') {
      local_50 = 1;
    }
    FUN_0045f6c8(*param_1,0);
  }
  local_30 = local_30 + -1;
  std::basic_ostream_char::sentry::_dtor(local_24,2);
  local_3c = 0;
  if (local_50 != 0) {
    FUN_0045b7d4(*param_1,local_50);
  }
  *in_FS_OFFSET = local_4c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f990  FUN_0045f990   (69 bytes)   [unnamed]
undefined4 __cdecl FUN_0045f990(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x28))();
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f9d8  FUN_0045f9d8   (13 bytes)   [unnamed]
void __cdecl FUN_0045f9d8(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f9e8  FUN_0045f9e8   (213 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_0045f9e8(int *param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  __InitExceptBlockLDTC(0x486c40);
  local_4c = 0;
  local_38 = 0x14;
  FUN_0045c2d8(local_24,param_1);
  local_2c = local_2c + 1;
  local_38 = 0x20;
  cVar1 = FUN_0045f768((int)local_24);
  if (cVar1 != '\0') {
    local_54 = FUN_0045b17c();
    piVar4 = &local_54;
    piVar3 = (int *)FUN_0045bea8(*param_1);
    local_50 = FUN_0045de6c(piVar3,param_2);
    bVar2 = FUN_0045bde4(&local_50,piVar4);
    if (bVar2) {
      local_4c = 1;
    }
  }
  local_2c = local_2c + -1;
  std::basic_ostream_char::sentry::_dtor(local_24,2);
  local_38 = 0;
  if (local_4c != 0) {
    FUN_0045b7d4(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fb0c  FUN_0045fb0c   (204 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_0045fb0c(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_24 [8];
  
  __InitExceptBlockLDTC(0x486cd8);
  local_4c = 0;
  if (param_2 == 0) {
    local_4c = 1;
  }
  else {
    FUN_0045c2d8(local_24,param_1);
    cVar1 = FUN_0045f768((int)local_24);
    if (cVar1 != '\0') {
      piVar2 = (int *)FUN_0045bea8(*param_1);
      iVar3 = FUN_0045fc28(piVar2);
      if (iVar3 != param_3) {
        local_4c = 1;
      }
    }
    std::basic_ostream_char::sentry::_dtor(local_24,2);
  }
  if (local_4c != 0) {
    FUN_0045b7d4(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fc28  FUN_0045fc28   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_0045fc28(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fc44  FUN_0045fc44   (618 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_0045fc44(int *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  __InitExceptBlockLDTC(0x486d70);
  local_4c = 0;
  if (param_2 == (uint *)0x0) {
    local_4c = 1;
  }
  else {
    local_38 = 0x14;
    FUN_0045c2d8(local_24,param_1);
    local_2c = local_2c + 1;
    local_38 = 0x20;
    cVar1 = FUN_0045f768((int)local_24);
    if (cVar1 != '\0') {
      iVar4 = FUN_00459d68(param_2);
      iVar5 = FUN_0045f6bc(*param_1);
      iVar5 = iVar5 - iVar4;
      uVar6 = FUN_0045bdd8(*param_1);
      if (((uVar6 & 0xb0) == 0) || (uVar6 = FUN_0045bdd8(*param_1), (uVar6 & 0x80) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0045fd26;
          local_54 = FUN_0045b17c();
          piVar8 = &local_54;
          uVar3 = FUN_0045f800(*param_1);
          piVar9 = (int *)FUN_0045bea8(*param_1);
          local_50 = FUN_0045de6c(piVar9,uVar3);
          bVar2 = FUN_0045bde4(&local_50,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_0045fd26:
      bVar2 = FUN_0045be3c(*param_1);
      if ((bVar2) && (uVar6 = FUN_0045bdd8(*param_1), (uVar6 & 0x10) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0045fd95;
          local_5c = FUN_0045b17c();
          piVar8 = &local_5c;
          uVar3 = FUN_0045f800(*param_1);
          piVar9 = (int *)FUN_0045bea8(*param_1);
          local_58 = FUN_0045de6c(piVar9,uVar3);
          bVar2 = FUN_0045bde4(&local_58,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_0045fd95:
      bVar2 = FUN_0045be3c(*param_1);
      if (((bVar2) && (iVar4 != 0)) && (iVar7 = FUN_0045bea8(*param_1), iVar7 != 0)) {
        piVar8 = (int *)FUN_0045bea8(*param_1);
        iVar7 = FUN_0045fc28(piVar8);
        if (iVar4 != iVar7) {
          local_4c = 1;
        }
      }
      bVar2 = FUN_0045be3c(*param_1);
      if ((bVar2) && (uVar6 = FUN_0045bdd8(*param_1), (uVar6 & 0x20) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0045fe4a;
          local_64 = FUN_0045b17c();
          piVar8 = &local_64;
          uVar3 = FUN_0045f800(*param_1);
          piVar9 = (int *)FUN_0045bea8(*param_1);
          local_60 = FUN_0045de6c(piVar9,uVar3);
          bVar2 = FUN_0045bde4(&local_60,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_0045fe4a:
      FUN_0045f6c8(*param_1,0);
    }
    local_2c = local_2c + -1;
    std::basic_ostream_char::sentry::_dtor(local_24,2);
  }
  local_38 = 0;
  if (local_4c != 0) {
    FUN_0045b7d4(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fefc  FUN_0045fefc   (63 bytes)   [unnamed]
int __cdecl FUN_0045fefc(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486db8);
  FUN_0045ff3c(param_1,param_2 + 8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ff3c  FUN_0045ff3c   (379 bytes)   [unnamed]
int __cdecl FUN_0045ff3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x486e0c);
  if (*(int *)(param_2 + 0x2c) == 0) {
    local_18 = 8;
    FUN_00459238(local_30);
    FUN_0045aa98(param_1);
    *in_FS_OFFSET = local_28;
  }
  else {
    iVar1 = FUN_0045de3c(param_2);
    iVar2 = FUN_0045de48(param_2);
    if (iVar1 - iVar2 < *(int *)(param_2 + 0x2c)) {
      iVar1 = FUN_0045bf04(param_2);
      iVar2 = FUN_0045de54(param_2);
      if (iVar1 - iVar2 < *(int *)(param_2 + 0x2c)) {
        local_18 = 0x14;
        FUN_00459238(local_38);
        FUN_0045c644(param_1,*(undefined4 **)(param_2 + 0x24),*(uint *)(param_2 + 0x2c));
        *in_FS_OFFSET = local_28;
        return param_1;
      }
    }
    iVar1 = FUN_0045de3c(param_2);
    iVar2 = FUN_0045de48(param_2);
    iVar3 = FUN_0045bf04(param_2);
    iVar4 = FUN_0045de54(param_2);
    if (iVar3 - iVar4 < iVar1 - iVar2) {
      local_18 = 0x20;
      FUN_00459238(local_40);
      iVar1 = FUN_0045de3c(param_2);
      iVar2 = FUN_0045de48(param_2);
      FUN_0045c644(param_1,*(undefined4 **)(param_2 + 0x24),iVar1 - iVar2);
      *in_FS_OFFSET = local_28;
    }
    else {
      local_18 = 0x2c;
      FUN_00459238(local_48);
      iVar1 = FUN_0045bf04(param_2);
      iVar2 = FUN_0045de54(param_2);
      FUN_0045c644(param_1,*(undefined4 **)(param_2 + 0x24),iVar1 - iVar2);
      *in_FS_OFFSET = local_28;
    }
  }
  return param_1;
}

} // namespace tea
