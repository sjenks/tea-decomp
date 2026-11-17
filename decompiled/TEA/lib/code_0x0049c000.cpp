// TEA.exe — runtime / library code "code_0x0049c000"
// 58 functions, 0x0049c640..0x0049fec8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049c640  FUN_0049c640   (260 bytes)   [unnamed]
int * __cdecl FUN_0049c640(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508c00);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x9e;
    param_1[1] = (int)param_1 + 0xa2;
    *(undefined4 *)((int)param_1 + 0x9a) = 0;
    *(undefined ***)((int)param_1 + 0x9e) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0xa2) = &OWL::TStreamableBase::vftable;
  }
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x14;
  FUN_004a4de0(param_1,1,param_3,(uint *)0x0,0);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x14;
  param_1[2] = (int)&OWL::TPreviewPage::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00508cfc;
  *(undefined ***)param_1[1] = &PTR_LAB_00508d08;
  *(undefined4 *)((int)param_1 + 0x86) = param_7;
  *(undefined4 *)((int)param_1 + 0x8a) = *param_6;
  *(undefined4 *)((int)param_1 + 0x8e) = param_6[1];
  *(undefined4 *)((int)param_1 + 0x92) = param_4;
  *(undefined4 *)((int)param_1 + 0x96) = param_5;
  param_1[6] = 0x50800000;
  param_1[0x17] = DAT_0051b198;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c744  FUN_0049c744   (35 bytes)   [unnamed]
void __cdecl FUN_0049c744(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x86) = param_2;
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ca30  FUN_0049ca30   (120 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049ca30(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508e0c);
  FUN_0048d35c(param_1,param_2,param_3);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPrintDC::vftable;
  memset((undefined4 *)((int)param_1 + 0x21),0,0x14);
  *(undefined4 *)((int)param_1 + 0x21) = 0x14;
  *(undefined **)((int)param_1 + 0x29) = &DAT_00508df8;
  *(undefined **)((int)param_1 + 0x2d) = &DAT_00508df8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049caa8  FUN_0049caa8   (126 bytes)   [unnamed]
int * __cdecl FUN_0049caa8(int *param_1,LPCSTR param_2,LPCSTR param_3,LPCSTR param_4,DEVMODEA *param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508e30);
  FUN_0048d2f8(param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPrintDC::vftable;
  memset((undefined4 *)((int)param_1 + 0x21),0,0x14);
  *(undefined4 *)((int)param_1 + 0x21) = 0x14;
  *(undefined **)((int)param_1 + 0x29) = &DAT_00508df8;
  *(undefined **)((int)param_1 + 0x2d) = &DAT_00508df8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ccc8  FUN_0049ccc8   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0049ccc8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0049ccd8(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ccd8  FUN_0049ccd8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0049ccd8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cce4  FUN_0049cce4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0049cce4(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ccf0  FUN_0049ccf0   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0049ccf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ccc8(param_1);
  return *(undefined2 *)(iVar1 + 6);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cd08  FUN_0049cd08   (20 bytes)   [unnamed]
int __cdecl FUN_0049cd08(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ccc8(param_1);
  return iVar1 + 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cd1c  FUN_0049cd1c   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0049cd1c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ccc8(param_1);
  return *(undefined2 *)(iVar1 + 2);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cd34  FUN_0049cd34   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0049cd34(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ccc8(param_1);
  return *(undefined2 *)(iVar1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ce10  FUN_0049ce10   (81 bytes)   [unnamed]
undefined * __cdecl FUN_0049ce10(undefined4 *param_1,char *param_2,ushort param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (param_2 != (char *)0x0) {
    for (piVar3 = (int *)*param_1; *piVar3 != 0; piVar3 = piVar3 + 2) {
      iVar1 = FUN_004dc978((char *)*piVar3,param_2);
      if (iVar1 == 0) {
        if (piVar3[1] != 0) {
          puVar2 = (undefined *)FUN_00496938(piVar3 + 1,param_3);
          return puVar2;
        }
        return &DAT_00508efc;
      }
    }
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ce64  FUN_0049ce64   (82 bytes)   [unnamed]
int * __cdecl FUN_0049ce64(int *param_1)

{
  HRGN pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508f2c);
  FUN_004934c8(param_1);
  pHVar1 = CreateRectRgn(0,0,0,0);
  *param_1 = (int)pHVar1;
  FUN_00493530(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ced4  FUN_0049ced4   (77 bytes)   [unnamed]
int * __cdecl FUN_0049ced4(int *param_1,RECT *param_2)

{
  HRGN pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508f50);
  FUN_004934c8(param_1);
  pHVar1 = CreateRectRgnIndirect(param_2);
  *param_1 = (int)pHVar1;
  FUN_00493530(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cf60  FUN_0049cf60   (96 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049cf60(undefined4 *param_1,RECT *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iMode;
  undefined4 local_30;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x508f74);
  iMode = 2;
  piVar1 = FUN_0049ced4(local_c,param_2);
  CombineRgn((HRGN)*param_1,(HRGN)*param_1,(HRGN)*piVar1,iMode);
  OWL::TRegion::_dtor(local_c,2);
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cfc0  FUN_0049cfc0   (96 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049cfc0(undefined4 *param_1,RECT *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iMode;
  undefined4 local_30;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x508f98);
  iMode = 3;
  piVar1 = FUN_0049ced4(local_c,param_2);
  CombineRgn((HRGN)*param_1,(HRGN)*param_1,(HRGN)*piVar1,iMode);
  OWL::TRegion::_dtor(local_c,2);
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d0a8  FUN_0049d0a8   (85 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_0049d0a8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508fe7);
  if (DAT_00508fd6 == '\0') {
    _DAT_0051b408 = 0;
    DAT_0051b40c = 0;
    DAT_0051b410 = 0;
    DAT_00508fd6 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b408;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d0fd  FUN_0049d0fd   (73 bytes)   [unnamed]
void __stdcall FUN_0049d0fd(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50902c);
  if (DAT_00508fd6 != '\0') {
    operator_delete_array();
    operator_delete_array();
    DAT_00508fd6 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d148  FUN_0049d148   (612 bytes)   [unnamed]
void __cdecl FUN_0049d148(int *param_1,int param_2,ushort param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  char *local_78;
  undefined4 local_48;
  undefined1 local_24 [8];
  uint *local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x50906c);
  if (param_1[2] != 0) goto LAB_0049d39b;
  FUN_004c0e0c((int)local_24,param_2,(uint)param_3);
  local_c = (uint *)0x0;
  if (local_1c[-3] == 0xffffffff || (int)(local_1c[-3] + 1) < 0) {
    uVar1 = local_1c[-1];
    piVar2 = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = (uint *)(piVar2 + 3);
    memcpy(local_c,local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    puVar5 = local_1c + -3;
    if (puVar5 != &DAT_00513d58) {
      *puVar5 = *puVar5 + 1;
    }
  }
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar3 = *puVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0049d29a;
    }
    operator_delete();
    local_1c = (uint *)0x0;
  }
LAB_0049d29a:
  if (local_c[-1] != 0) {
    param_4 = local_c;
  }
  iVar3 = FUN_00496d48(param_4);
  param_1[1] = iVar3;
  *param_1 = 1;
  for (local_78 = (char *)param_1[1]; *local_78 != '\0'; local_78 = local_78 + 1) {
    if (*local_78 == '|') {
      *local_78 = '\0';
      *param_1 = *param_1 + 1;
    }
  }
  iVar3 = operator_new_array();
  param_1[2] = iVar3;
  puVar5 = (uint *)param_1[1];
  for (iVar3 = 0; iVar3 < *param_1; iVar3 = iVar3 + 1) {
    *(uint **)(param_1[2] + iVar3 * 4) = puVar5;
    pcVar4 = strlen(puVar5);
    puVar5 = (uint *)((int)puVar5 + (int)(pcVar4 + 1));
  }
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar5 = local_c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar3 = *puVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0049d39b;
    }
    operator_delete();
  }
LAB_0049d39b:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d444  FUN_0049d444   (1326 bytes)   [unnamed]
int * __cdecl FUN_0049d444(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, uint *param_6,int param_7)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  ushort uVar7;
  uint *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined *local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_27;
  
  __InitExceptBlockLDTC(0x509148);
  local_48 = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x7b;
    *(int *)((int)param_1 + 0x7b) = (int)param_1 + 0x6f;
    *(int *)((int)param_1 + 0x7f) = (int)param_1 + 0x73;
    param_1[4] = (int)param_1 + 0x6f;
    param_1[5] = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6b) = 0;
    *(undefined4 *)((int)param_1 + 0x77) = 0;
    *(undefined ***)((int)param_1 + 0x6f) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x73) = &OWL::TStreamableBase::vftable;
    local_3c = local_3c + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x7b),1);
    local_3c = local_3c + 1;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x19;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x19;
  FUN_0049834c(param_1,1,param_3,param_6,param_7);
  local_3c = local_3c + 3;
  *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x19;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x19;
  param_1[6] = (int)&OWL::TStatusBar::vftable;
  param_1[1] = (int)&PTR_LAB_00509288;
  *(undefined ***)param_1[4] = &PTR_LAB_005092a8;
  *(undefined ***)param_1[5] = &PTR_LAB_005092b4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005092c0;
  *(undefined4 *)((int)param_1 + 0x56) = 1;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = param_4;
  *(undefined4 *)((int)param_1 + 0x62) = param_5;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)((int)param_1 + 0x6a) = 1;
  pcVar10 = "EXT|CAPS|NUM|SCRL|OVR|REC";
  uVar7 = 0x7f12;
  iVar5 = *(int *)(*param_1 + 0x70);
  piVar1 = (int *)FUN_0049d0a8();
  FUN_0049d148(piVar1,iVar5,uVar7,(uint *)pcVar10);
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x8000;
  if ((*(int *)((int)param_1 + 0x52) == 1) || (*(int *)((int)param_1 + 0x52) == 4)) {
    *(undefined1 *)((int)param_1 + 0x4d) = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x5a) = 2;
  }
  iVar5 = *(int *)((int)param_1 + 0x52);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      param_1[10] = 2;
      *(undefined1 *)((int)param_1 + 0x2f) = 0xff;
      *(undefined1 *)((int)param_1 + 0x2d) = 0xff;
      *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2d);
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2e);
    }
    else if (iVar5 - 2U < 2) {
      param_1[10] = 0;
      uVar2 = FUN_004917ac((int)param_1,4);
      *(char *)(param_1 + 0xb) = (char)uVar2;
      uVar2 = FUN_004917ac((int)param_1,4);
      *(char *)((int)param_1 + 0x2d) = (char)uVar2;
      if ((*(byte *)((int)param_1 + 0x62) & 0x40) != 0) {
        uVar2 = FUN_004917ac((int)param_1,1);
        *(char *)((int)param_1 + 0x2d) = (char)uVar2;
      }
      iVar5 = GetSystemMetrics(DAT_00509df0);
      *(char *)((int)param_1 + 0x2f) = (char)iVar5;
      *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
    }
  }
  FUN_0048ff7c(param_1[2],*(undefined4 *)((int)param_1 + 0x52));
  local_48 = 0x14;
  FUN_004a8760(&local_2c);
  local_3c = local_3c + 3;
  local_48 = 0x20;
  (**(code **)(local_27 + 0x14))();
  for (iVar5 = 0; piVar1 = (int *)FUN_0049d0a8(), iVar5 < *piVar1; iVar5 = iVar5 + 1) {
    if ((1 << ((byte)iVar5 & 0x1f) & *(uint *)((int)param_1 + 0x62)) != 0) {
      if ((&DAT_00508ffc)[iVar5] == 0) {
        local_30 = (int *)operator_new();
        if (local_30 != (int *)0x0) {
          local_48 = 0x38;
          uVar11 = 0;
          local_5c = FUN_0049d0a8();
          puVar8 = *(uint **)(*(int *)(local_5c + 8) + iVar5 * 4);
          puVar3 = FUN_0049d0a8();
          iVar4 = lstrlenA(*(LPCSTR *)(*(int *)(puVar3 + 8) + iVar5 * 4));
          FUN_0049eb84(local_30,(&DAT_00509014)[iVar5],*(undefined4 *)((int)param_1 + 0x52),0,iVar4,
                       puVar8,uVar11);
          local_48 = 0x2c;
        }
        piVar1 = local_30;
        (**(code **)(*local_30 + 4))();
      }
      else {
        piVar1 = (int *)operator_new();
        local_34 = piVar1;
        if (piVar1 != (int *)0x0) {
          local_48 = 0x50;
          uVar12 = 0;
          uVar9 = 1;
          uVar11 = *(undefined4 *)((int)param_1 + 0x52);
          uVar6 = (&DAT_00509014)[iVar5];
          puVar3 = FUN_0049d0a8();
          FUN_004989b8(local_34,(&DAT_00508ffc)[iVar5],*(uint **)(*(int *)(puVar3 + 8) + iVar5 * 4),
                       uVar6,uVar11,uVar9,uVar12);
          piVar1 = local_34;
        }
      }
      local_64 = *(undefined4 *)((int)piVar1 + 0x2e);
      local_5e = (undefined1)piVar1[0xd];
      local_5d = *(undefined1 *)((int)piVar1 + 0x35);
      local_48 = 0x20;
      local_5f = 2;
      local_60 = 2;
      FUN_0048ff54((int)piVar1,&local_64);
      OWL::TGadgetWindow::vf5(param_1,(int)piVar1,1,0);
      *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + 1;
    }
  }
  if ((*(byte *)((int)param_1 + 0x62) & 0x40) != 0) {
    FUN_0049d994(param_1);
  }
  local_3c = local_3c + -3;
  OWL::TWindowDC::_dtor(&local_2c,0);
  *in_FS_OFFSET = local_58;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d994  FUN_0049d994   (152 bytes)   [unnamed]
undefined4 __cdecl FUN_0049d994(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int local_3c [4];
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x5091b4);
  local_8 = (int *)operator_new();
  if (local_8 != (int *)0x0) {
    local_1c = 0x14;
    FUN_00490ab0(local_8,0x7537);
    local_1c = 8;
  }
  piVar1 = local_8;
  OWL::TGadgetWindow::vf5(param_1,(int)local_8,1,0);
  piVar3 = (int *)((int)piVar1 + 10);
  piVar4 = local_3c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_00494470(local_3c,1,1);
  (**(code **)(*piVar1 + 0xc))();
  *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + 1;
  *in_FS_OFFSET = local_2c;
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049da2c  FUN_0049da2c   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_0049da2c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x5e);
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (iVar1 == param_2) {
        return 0;
      }
      iVar1 = *(int *)(iVar1 + 0x3e);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049dec0  FUN_0049dec0   (86 bytes)   [unnamed]
void __stdcall FUN_0049dec0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50935a);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0049e6d8;
  puVar1 = FUN_004dd5cc(1,0,0x40299c);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b414,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049df16  FUN_0049df16   (48 bytes)   [unnamed]
void __stdcall FUN_0049df16(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50936e);
  OWL::TStreamableClass::_dtor(0x51b414,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049df48  FUN_0049df48   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049df48(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x509378);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TWindow::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_0040299c,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049dfb0  FUN_0049dfb0   (192 bytes)   [unnamed]
int * __cdecl FUN_0049dfb0(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x509390);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  param_1[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0050948c;
  *(undefined ***)param_1[1] = &PTR_LAB_00509498;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e070  FUN_0049e070   (78 bytes)   [unnamed]
int * __cdecl FUN_0049e070(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0049a1b0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004dd744((int)local_8,iVar1,(int *)&DAT_004027f0,(int *)&DAT_0040299c,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e0c0  FUN_0049e0c0   (38 bytes)   [unnamed]
int * __cdecl FUN_0049e0c0(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
  }
  FUN_0049a490(param_1,piVar1,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e6d8  FUN_0049e6d8   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049e6d8(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x5093c4);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0049dfb0(piVar2,0);
        param_1 = (int *)piVar2[1];
      }
    }
    FUN_0049df48(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e814  FUN_0049e814   (72 bytes)   [unnamed]
uint * __cdecl FUN_0049e814(uint *param_1,uint *param_2,char *param_3,uint param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5094c8);
  *param_1 = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = param_4;
  *param_1 = *param_1 | 8;
  FUN_0049e85c(param_1,param_2,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e85c  FUN_0049e85c   (42 bytes)   [unnamed]
void __cdecl FUN_0049e85c(uint *param_1,uint *param_2,char *param_3)

{
  param_1[3] = (uint)param_2;
  if (param_3 == (char *)0x0) {
    param_3 = strlen(param_2);
  }
  param_1[4] = (uint)param_3;
  *param_1 = *param_1 | 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e8f0  FUN_0049e8f0   (279 bytes)   [unnamed]
int * __cdecl FUN_0049e8f0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x509528);
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
    FUN_004a4fbc(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004ad87c(param_1,1,param_3,param_4,param_5);
  param_1[3] = (int)&OWL::TTabControl::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_005095a0;
  *(undefined ***)param_1[2] = &PTR_LAB_005095ac;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005095b8;
  bVar1 = FUN_00487180();
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  param_1[4] = iVar2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eb84  FUN_0049eb84   (228 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049eb84(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,uint *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50965c);
  FUN_0048fcec(param_1,param_2);
  *param_1 = &OWL::TTextGadget::vftable;
  param_1[0x15] = param_7;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar1 = GetSystemMetrics(DAT_00509df8);
  *(char *)((int)param_1 + 0x33) = (char)iVar1;
  *(undefined1 *)((int)param_1 + 0x32) = *(undefined1 *)((int)param_1 + 0x33);
  param_1[0x13] = param_4;
  param_1[0x14] = param_5;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_0049f044((int)param_1);
  FUN_0049f058((int)param_1);
  FUN_0048fe6c((int)param_1,0,1);
  FUN_0049ed44((int)param_1,param_6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ed04  FUN_0049ed04   (63 bytes)   [unnamed]
void __cdecl FUN_0049ed04(int param_1)

{
  int local_14 [4];
  
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  FUN_004906a0(param_1,local_14);
  FUN_00490358(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ed44  FUN_0049ed44   (117 bytes)   [unnamed]
void __cdecl FUN_0049ed44(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (((param_2 != (uint *)0x0) && (*(int *)(param_1 + 0x44) != 0)) &&
     (iVar1 = FUN_004dc978((char *)param_2,*(char **)(param_1 + 0x44)), iVar1 == 0)) {
    return;
  }
  operator_delete_array();
  if (param_2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar2 = FUN_00496d48(param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    pcVar3 = strlen(*(uint **)(param_1 + 0x44));
    *(char **)(param_1 + 0x48) = pcVar3;
  }
  if (*(int *)(param_1 + 6) != 0) {
    FUN_00492634(*(int *)(param_1 + 6));
  }
  FUN_0049ed04(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f044  FUN_0049f044   (19 bytes)   [unnamed]
void __cdecl FUN_0049f044(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = DAT_0051b1e0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f058  FUN_0049f058   (19 bytes)   [unnamed]
void __cdecl FUN_0049f058(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = DAT_0051b1ec;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f098  FUN_0049f098   (42 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0049f098(int *param_1,int *param_2,int param_3)

{
  *param_1 = (*param_2 - _DAT_0051b425) * 0x15180 + param_3 * 0xe10 + DAT_00518fb4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f0c4  FUN_0049f0c4   (240 bytes)   [unnamed]
int * __cdecl FUN_0049f0c4(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 < 0x7c3) {
    if (param_2 == 0x7b6) {
      iVar2 = 2;
      piVar1 = FUN_0048d474(&local_18,6,1,0x7b6);
      FUN_0049f098(param_1,piVar1,iVar2);
    }
    else if (param_2 == 0x7b7) {
      iVar2 = 2;
      piVar1 = FUN_0048d474(&local_14,0x17,2,0x7b7);
      FUN_0049f098(param_1,piVar1,iVar2);
    }
    else {
      FUN_0048d474(&local_c,0x1e,4,param_2);
      iVar2 = 2;
      FUN_0048d6d8(&local_10,&local_c,7);
      FUN_0049f098(param_1,&local_10,iVar2);
    }
  }
  else {
    FUN_0048d474(&local_8,0x1f,3,param_2);
    iVar3 = 2;
    iVar2 = 7;
    FUN_0048d6d8(&local_20,&local_8,7);
    FUN_0048d78c(&local_1c,&local_20,iVar2);
    FUN_0049f098(param_1,&local_1c,iVar3);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f1b4  FUN_0049f1b4   (69 bytes)   [unnamed]
int * __cdecl FUN_0049f1b4(int *param_1,uint param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  FUN_0048d474(&local_8,0x1f,10,param_2);
  iVar1 = 1;
  FUN_0048d6d8(&local_c,&local_8,7);
  FUN_0049f098(param_1,&local_c,iVar1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f1fc  FUN_0049f1fc   (160 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint * __cdecl FUN_0049f1fc(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x509720);
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (*param_2 - _DAT_0051b425) * 0x15180 + (param_3 + -1) * 0xe10 + param_4 * 0x3c +
               param_5;
    if (*param_1 != 0) {
      *param_1 = *param_1 + DAT_00518fb4;
    }
    iVar1 = FUN_0049f300(param_1);
    if (iVar1 == 0) {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_0049f300(param_1);
      if (iVar1 != 0) {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_0049f300(param_1);
      if (iVar1 != 0) {
        *param_1 = *param_1 - 0xe10;
      }
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f29c  FUN_0049f29c   (97 bytes)   [unnamed]
uint * __cdecl FUN_0049f29c(uint *param_1,FILETIME *param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  _SYSTEMTIME local_40;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x509728);
  FileTimeToSystemTime(param_2,&local_40);
  uVar4 = (uint)local_40.wSecond;
  uVar1 = (uint)local_40.wMinute;
  uVar5 = (uint)local_40.wHour;
  piVar2 = FUN_0048d4ac(&local_30,&local_40.wYear);
  puVar3 = FUN_0049f1fc(&local_2c,piVar2,uVar5,uVar1,uVar4);
  *param_1 = *puVar3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f300  FUN_0049f300   (116 bytes)   [unnamed]
undefined4 __cdecl FUN_0049f300(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_00518fb8 != 0) {
    piVar1 = FUN_0048d424(&local_8,*param_1 / 0x15180,0);
    uVar2 = FUN_0048d764(piVar1);
    FUN_0049f0c4((int *)&local_c,uVar2);
    if ((local_c <= *param_1) && (FUN_0049f1b4((int *)&local_10,uVar2), *param_1 < local_10)) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f374  FUN_0049f374   (126 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f374(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x509754);
  param_1[0xb] = 0;
  memset(param_1,0,0x2c);
  *param_1 = 0x2c;
  if (param_2 != '\0') {
    uVar1 = operator_new_array();
    operator_delete_array();
    param_1[0xb] = uVar1;
    param_1[9] = param_1[0xb];
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f414  FUN_0049f414   (130 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f414(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, uint *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_28;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x509778);
  param_1[0xb] = 0;
  memset(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_0049f504((int)param_1,param_2,param_4);
  puVar2 = param_1 + 4;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  FUN_0049f534((int)param_1,param_5,'\0');
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f498  FUN_0049f498   (108 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f498(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50979c);
  param_1[0xb] = 0;
  memset(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_0049f51c((int)param_1,param_3,param_2);
  FUN_0049f534((int)param_1,param_4,'\0');
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f504  FUN_0049f504   (24 bytes)   [unnamed]
void __cdecl FUN_0049f504(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f51c  FUN_0049f51c   (24 bytes)   [unnamed]
void __cdecl FUN_0049f51c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f534  FUN_0049f534   (84 bytes)   [unnamed]
void __cdecl FUN_0049f534(int param_1,uint *param_2,char param_3)

{
  undefined4 uVar1;
  
  if (((param_2 == (uint *)0xffffffff) || (param_2 == (uint *)0x0)) || (param_3 == '\0')) {
    *(uint **)(param_1 + 0x24) = param_2;
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    uVar1 = FUN_00496d48(param_2);
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f588  FUN_0049f588   (25 bytes)   [unnamed]
void __cdecl FUN_0049f588(int param_1,uint *param_2)

{
  FUN_004dcc40((undefined4 *)(param_1 + 0x10),param_2,(char *)0x50);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f5a4  FUN_0049f5a4   (88 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f5a4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5097b0);
  if ((*(byte *)(param_2 + 100) & 1) == 0) {
    iVar1 = *(int *)(param_2 + 4);
  }
  else {
    iVar1 = GetDlgCtrlID(*(HWND *)(param_2 + 4));
  }
  FUN_004a4d68(param_1,iVar1,param_3);
  *param_1 = &OWL::TTooltipEnabler::vftable;
  param_1[4] = param_2;
  param_1[3] = param_1[3] | 2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f628  FUN_0049f628   (357 bytes)   [unnamed]
int * __cdecl FUN_0049f628(int *param_1,int param_2,undefined4 param_3,char param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5097c8);
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
    FUN_004a4fbc(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004ad6d8(param_1,1,param_3,0,(uint *)&DAT_00509730,0,0,0,0,param_5);
  param_1[3] = (int)&OWL::TTooltip::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050983c;
  *(undefined ***)param_1[2] = &PTR_LAB_00509848;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00509854;
  *(undefined4 *)(*param_1 + 0x18) = 0x88000000;
  if (param_4 != '\0') {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 1;
  }
  bVar1 = FUN_004875a8();
  if (bVar1) {
    *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 0x100;
  }
  else {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x800000;
  }
  *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 8;
  bVar1 = FUN_00487180();
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  param_1[4] = iVar2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f930  FUN_0049f930   (93 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f930(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_28;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x509994);
  puVar2 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[4] = *(undefined4 *)(&DAT_005098f4 + param_3 * 8);
  param_1[5] = *(uint *)(&DAT_005098f8 + param_3 * 8) | param_4;
  if ((*(byte *)(param_1 + 5) & 0xf) == 0) {
    param_1[5] = param_1[5] | 0xf;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f990  FUN_0049f990   (77 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f990(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_28;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x50999c);
  puVar2 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[4] = param_3;
  param_1[5] = param_4;
  if ((*(byte *)(param_1 + 5) & 0xf) == 0) {
    param_1[5] = param_1[5] | 0xf;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f9e0  FUN_0049f9e0   (119 bytes)   [unnamed]
int * __cdecl FUN_0049f9e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (uint)((*(byte *)(param_2 + 4) & 3) != 0) + (uint)((*(byte *)(param_2 + 4) & 0xc) != 0);
  iVar1 = param_2[3];
  iVar2 = param_2[2];
  iVar3 = param_2[1];
  *param_1 = *param_2 + iVar4;
  param_1[1] = iVar3 + iVar4;
  param_1[2] = iVar2 - iVar4;
  param_1[3] = iVar1 - iVar4;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049fa58  FUN_0049fa58   (26 bytes)   [unnamed]
void __cdecl FUN_0049fa58(LPRECT param_1,undefined4 *param_2)

{
  FUN_0049fa74(param_2,param_1,param_1[1].left,param_1[1].top);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049fa74  FUN_0049fa74   (1107 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_0049fa74(undefined4 *param_1,LPRECT param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  LPRECT ptVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  LPRECT local_44;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  uint local_1c [2];
  uint local_14 [2];
  uint local_c [2];
  
  bVar8 = 0;
  __InitExceptBlockLDTC(0x509a04);
  if (DAT_0050994c != 0) {
    BVar1 = DrawEdge((HDC)*param_1,param_2,param_3,param_4);
    if (BVar1 != 0) {
      *in_FS_OFFSET = local_40;
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x78) {
      *in_FS_OFFSET = local_40;
      return 0;
    }
    DAT_0050994c = 0;
  }
  local_44 = param_2;
  ptVar6 = param_2;
  piVar7 = &local_54;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = ptVar6->left;
    ptVar6 = (LPRECT)((int)ptVar6 + (uint)bVar8 * -8 + 4);
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  if ((param_4 & 0x8000) == 0) {
    if ((param_4 & 0x4000) == 0) {
      if ((param_3 & 3) != 0) {
        if (DAT_00509960 == '\0') {
          _DAT_00509950 = DAT_0051b1fc;
          DAT_00509960 = '\x01';
          _DAT_00509954 = (*(undefined4 *)&DAT_0051b1f4);
          _DAT_00509958 = DAT_0051b1e4;
          _DAT_0050995c = DAT_0051b1f8;
        }
        if (DAT_00509971 == '\0') {
          _DAT_00509961 = DAT_0051b1f8;
          DAT_00509971 = '\x01';
          _DAT_00509965 = DAT_0051b1f8;
          _DAT_00509969 = (*(undefined4 *)&DAT_0051b1f4);
          _DAT_0050996d = (*(undefined4 *)&DAT_0051b1f4);
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_0049fec8(param_1,&local_54,param_4,(uint *)(&DAT_00509950 + uVar4 * 4),
                     (uint *)(&DAT_00509961 + uVar4 * 4));
        param_2 = (LPRECT)FUN_00494470(&local_54,-1,-1);
      }
      if ((param_3 & 0xc) != 0) {
        if (DAT_00509982 == '\0') {
          _DAT_00509972 = (*(undefined4 *)&DAT_0051b1f4);
          DAT_00509982 = '\x01';
          _DAT_00509976 = DAT_0051b1fc;
          _DAT_0050997a = DAT_0051b1f8;
          _DAT_0050997e = DAT_0051b1e4;
        }
        if (DAT_00509993 == '\0') {
          _DAT_00509983 = DAT_0051b1e4;
          DAT_00509993 = '\x01';
          _DAT_00509987 = DAT_0051b1e4;
          _DAT_0050998b = DAT_0051b1fc;
          _DAT_0050998f = DAT_0051b1fc;
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_0049fec8(param_1,&local_54,param_4,(uint *)(&DAT_00509972 + uVar4 * 4),
                     (uint *)(&DAT_00509983 + uVar4 * 4));
        param_2 = (LPRECT)FUN_00494470(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x38;
        FUN_004ab84c(local_1c,&DAT_0051b1e0,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x44;
        FUN_0048d938(param_1,local_1c);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_0048da64(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)OWL::TBrush::_dtor(local_1c,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
    else {
      if ((param_3 & 3) != 0) {
        FUN_0049fec8(param_1,&local_54,param_4,&DAT_0051b1e4,&DAT_0051b1e4);
        param_2 = (LPRECT)FUN_00494470(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x20;
        FUN_004ab84c(local_14,&DAT_0051b1e0,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x2c;
        FUN_0048d938(param_1,local_14);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_0048da64(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)OWL::TBrush::_dtor(local_14,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
  }
  else {
    if ((param_3 & 3) != 0) {
      FUN_0049fec8(param_1,&local_54,param_4,(uint *)&DAT_0051b1bc,(uint *)&DAT_0051b1bc);
      param_2 = (LPRECT)FUN_00494470(&local_54,-1,-1);
    }
    if ((param_4 & 0x800) != 0) {
      local_30 = 8;
      FUN_004ab84c(local_c,(uint *)&DAT_0051b1b8,'\x01');
      local_24 = local_24 + 2;
      local_30 = 0x14;
      FUN_0048d938(param_1,local_c);
      PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
      FUN_0048da64(param_1);
      local_24 = local_24 + -2;
      param_2 = (LPRECT)OWL::TBrush::_dtor(local_c,2);
    }
    uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
    *in_FS_OFFSET = local_40;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049fec8  FUN_0049fec8   (458 bytes)   [unnamed]
void __cdecl FUN_0049fec8(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  uint local_14 [2];
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x509a94);
  if ((param_3 & 3) != 0) {
    FUN_004ab84c(local_c,param_4,'\x01');
    FUN_0048d938(param_1,local_c);
    if ((param_3 & 2) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1],(param_2[2] - *param_2) + -1,1,0xf00021);
    }
    if ((param_3 & 1) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1] + 1,1,(param_2[3] - param_2[1]) + -2,0xf00021);
    }
    FUN_0048da64(param_1);
    OWL::TBrush::_dtor(local_c,2);
  }
  if ((param_3 & 0xc) != 0) {
    FUN_004ab84c(local_14,param_5,'\x01');
    FUN_0048d938(param_1,local_14);
    if ((param_3 & 8) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[3] + -1,param_2[2] - *param_2,1,0xf00021);
    }
    if ((param_3 & 4) != 0) {
      PatBlt((HDC)*param_1,param_2[2] + -1,param_2[1],1,(param_2[3] - param_2[1]) + -1,0xf00021);
    }
    FUN_0048da64(param_1);
    OWL::TBrush::_dtor(local_14,2);
  }
  *in_FS_OFFSET = local_38;
  return;
}

} // namespace tea
