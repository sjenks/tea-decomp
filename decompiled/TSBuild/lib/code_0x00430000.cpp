// TSBuild.exe — runtime / library code "code_0x00430000"
// 40 functions, 0x004302e4..0x00433fdc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004302e4  FUN_004302e4   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004302e4(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47cd80);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0042fbbc(piVar2,0);
        param_1 = (int *)piVar2[1];
      }
    }
    FUN_0042fb54(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043044c  FUN_0043044c   (42 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0043044c(int *param_1,int *param_2,int param_3)

{
  *param_1 = (*param_2 - _DAT_0048c8d1) * 0x15180 + param_3 * 0xe10 + DAT_0048aa98;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430478  FUN_00430478   (240 bytes)   [unnamed]
int * __cdecl FUN_00430478(int *param_1,uint param_2)

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
      piVar1 = FUN_00421768(&local_18,6,1,0x7b6);
      FUN_0043044c(param_1,piVar1,iVar2);
    }
    else if (param_2 == 0x7b7) {
      iVar2 = 2;
      piVar1 = FUN_00421768(&local_14,0x17,2,0x7b7);
      FUN_0043044c(param_1,piVar1,iVar2);
    }
    else {
      FUN_00421768(&local_c,0x1e,4,param_2);
      iVar2 = 2;
      FUN_004219cc(&local_10,&local_c,7);
      FUN_0043044c(param_1,&local_10,iVar2);
    }
  }
  else {
    FUN_00421768(&local_8,0x1f,3,param_2);
    iVar3 = 2;
    iVar2 = 7;
    FUN_004219cc(&local_20,&local_8,7);
    FUN_00421a80(&local_1c,&local_20,iVar2);
    FUN_0043044c(param_1,&local_1c,iVar3);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430568  FUN_00430568   (69 bytes)   [unnamed]
int * __cdecl FUN_00430568(int *param_1,uint param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  FUN_00421768(&local_8,0x1f,10,param_2);
  iVar1 = 1;
  FUN_004219cc(&local_c,&local_8,7);
  FUN_0043044c(param_1,&local_c,iVar1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004305b0  FUN_004305b0   (160 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint * __cdecl FUN_004305b0(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47ce74);
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (*param_2 - _DAT_0048c8d1) * 0x15180 + (param_3 + -1) * 0xe10 + param_4 * 0x3c +
               param_5;
    if (*param_1 != 0) {
      *param_1 = *param_1 + DAT_0048aa98;
    }
    iVar1 = FUN_004306b4(param_1);
    if (iVar1 == 0) {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_004306b4(param_1);
      if (iVar1 != 0) {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_004306b4(param_1);
      if (iVar1 != 0) {
        *param_1 = *param_1 - 0xe10;
      }
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430650  FUN_00430650   (97 bytes)   [unnamed]
uint * __cdecl FUN_00430650(uint *param_1,FILETIME *param_2)

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
  
  __InitExceptBlockLDTC(0x47ce7c);
  FileTimeToSystemTime(param_2,&local_40);
  uVar4 = (uint)local_40.wSecond;
  uVar1 = (uint)local_40.wMinute;
  uVar5 = (uint)local_40.wHour;
  piVar2 = FUN_004217a0(&local_30,&local_40.wYear);
  puVar3 = FUN_004305b0(&local_2c,piVar2,uVar5,uVar1,uVar4);
  *param_1 = *puVar3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004306b4  FUN_004306b4   (116 bytes)   [unnamed]
undefined4 __cdecl FUN_004306b4(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_0048aa9c != 0) {
    piVar1 = FUN_00421718(&local_8,*param_1 / 0x15180,0);
    uVar2 = FUN_00421a58(piVar1);
    FUN_00430478((int *)&local_c,uVar2);
    if ((local_c <= *param_1) && (FUN_00430568((int *)&local_10,uVar2), *param_1 < local_10)) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430728  FUN_00430728   (126 bytes)   [unnamed]
undefined4 * __cdecl FUN_00430728(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cea8);
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
// 0x004307c8  FUN_004307c8   (130 bytes)   [unnamed]
undefined4 * __cdecl FUN_004307c8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, uint *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_28;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x47cecc);
  param_1[0xb] = 0;
  memset(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_0043084c((int)param_1,param_2,param_4);
  puVar2 = param_1 + 4;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  FUN_00430864((int)param_1,param_5,'\0');
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043084c  FUN_0043084c   (24 bytes)   [unnamed]
void __cdecl FUN_0043084c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430864  FUN_00430864   (84 bytes)   [unnamed]
void __cdecl FUN_00430864(int param_1,uint *param_2,char param_3)

{
  undefined4 uVar1;
  
  if (((param_2 == (uint *)0xffffffff) || (param_2 == (uint *)0x0)) || (param_3 == '\0')) {
    *(uint **)(param_1 + 0x24) = param_2;
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    uVar1 = FUN_0042aea0(param_2);
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004308b8  FUN_004308b8   (25 bytes)   [unnamed]
void __cdecl FUN_004308b8(int param_1,uint *param_2)

{
  FUN_004679ec((undefined4 *)(param_1 + 0x10),param_2,(char *)0x50);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004308d4  FUN_004308d4   (88 bytes)   [unnamed]
undefined4 * __cdecl FUN_004308d4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cee0);
  if ((*(byte *)(param_2 + 100) & 1) == 0) {
    iVar1 = *(int *)(param_2 + 4);
  }
  else {
    iVar1 = GetDlgCtrlID(*(HWND *)(param_2 + 4));
  }
  FUN_00435bb0(param_1,iVar1,param_3);
  *param_1 = &OWL::TTooltipEnabler::vftable;
  param_1[4] = param_2;
  param_1[3] = param_1[3] | 2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430958  FUN_00430958   (357 bytes)   [unnamed]
int * __cdecl FUN_00430958(int *param_1,int param_2,undefined4 param_3,char param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cef8);
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
    FUN_00435d18(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_0043d404(param_1,1,param_3,0,(uint *)&DAT_0047ce84,0,0,0,0,param_5);
  param_1[3] = (int)&OWL::TTooltip::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047cf6c;
  *(undefined ***)param_1[2] = &PTR_LAB_0047cf78;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047cf84;
  *(undefined4 *)(*param_1 + 0x18) = 0x88000000;
  if (param_4 != '\0') {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 1;
  }
  bVar1 = FUN_0041b9e4();
  if (bVar1) {
    *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 0x100;
  }
  else {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x800000;
  }
  *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 8;
  bVar1 = FUN_0041b778();
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
// 0x00430cac  FUN_00430cac   (93 bytes)   [unnamed]
undefined4 * __cdecl FUN_00430cac(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_28;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x47d0c4);
  puVar2 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[4] = *(undefined4 *)(&DAT_0047d024 + param_3 * 8);
  param_1[5] = *(uint *)(&DAT_0047d028 + param_3 * 8) | param_4;
  if ((*(byte *)(param_1 + 5) & 0xf) == 0) {
    param_1[5] = param_1[5] | 0xf;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d0c  FUN_00430d0c   (77 bytes)   [unnamed]
undefined4 * __cdecl FUN_00430d0c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 local_28;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x47d0cc);
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
// 0x00430d5c  FUN_00430d5c   (26 bytes)   [unnamed]
void __cdecl FUN_00430d5c(LPRECT param_1,undefined4 *param_2)

{
  FUN_00430d78(param_2,param_1,param_1[1].left,param_1[1].top);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d78  FUN_00430d78   (1107 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00430d78(undefined4 *param_1,LPRECT param_2,uint param_3,uint param_4)

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
  __InitExceptBlockLDTC(0x47d134);
  if (DAT_0047d07c != 0) {
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
    DAT_0047d07c = 0;
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
        if (DAT_0047d090 == '\0') {
          _DAT_0047d080 = DAT_0048c6b4;
          DAT_0047d090 = '\x01';
          _DAT_0047d084 = (*(undefined4 *)&DAT_0048c6ac);
          _DAT_0047d088 = DAT_0048c69c;
          _DAT_0047d08c = DAT_0048c6b0;
        }
        if (DAT_0047d0a1 == '\0') {
          _DAT_0047d091 = DAT_0048c6b0;
          DAT_0047d0a1 = '\x01';
          _DAT_0047d095 = DAT_0048c6b0;
          _DAT_0047d099 = (*(undefined4 *)&DAT_0048c6ac);
          _DAT_0047d09d = (*(undefined4 *)&DAT_0048c6ac);
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_004311cc(param_1,&local_54,param_4,(uint *)(&DAT_0047d080 + uVar4 * 4),
                     (uint *)(&DAT_0047d091 + uVar4 * 4));
        param_2 = (LPRECT)FUN_004288b4(&local_54,-1,-1);
      }
      if ((param_3 & 0xc) != 0) {
        if (DAT_0047d0b2 == '\0') {
          _DAT_0047d0a2 = (*(undefined4 *)&DAT_0048c6ac);
          DAT_0047d0b2 = '\x01';
          _DAT_0047d0a6 = DAT_0048c6b4;
          _DAT_0047d0aa = DAT_0048c6b0;
          _DAT_0047d0ae = DAT_0048c69c;
        }
        if (DAT_0047d0c3 == '\0') {
          _DAT_0047d0b3 = DAT_0048c69c;
          DAT_0047d0c3 = '\x01';
          _DAT_0047d0b7 = DAT_0048c69c;
          _DAT_0047d0bb = DAT_0048c6b4;
          _DAT_0047d0bf = DAT_0048c6b4;
        }
        if ((param_3 & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (param_4 & 0x1000) != 0;
        FUN_004311cc(param_1,&local_54,param_4,(uint *)(&DAT_0047d0a2 + uVar4 * 4),
                     (uint *)(&DAT_0047d0b3 + uVar4 * 4));
        param_2 = (LPRECT)FUN_004288b4(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x38;
        FUN_0043c4b4(local_1c,&DAT_0048c698,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x44;
        FUN_00421cec(param_1,local_1c);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_00421e18(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)OWL::TBrush::_dtor(local_1c,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
    else {
      if ((param_3 & 3) != 0) {
        FUN_004311cc(param_1,&local_54,param_4,&DAT_0048c69c,&DAT_0048c69c);
        param_2 = (LPRECT)FUN_004288b4(&local_54,-1,-1);
      }
      if ((param_4 & 0x800) != 0) {
        local_30 = 0x20;
        FUN_0043c4b4(local_14,&DAT_0048c698,'\x01');
        local_24 = local_24 + 2;
        local_30 = 0x2c;
        FUN_00421cec(param_1,local_14);
        PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
        FUN_00421e18(param_1);
        local_24 = local_24 + -2;
        param_2 = (LPRECT)OWL::TBrush::_dtor(local_14,2);
      }
      uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
      *in_FS_OFFSET = local_40;
    }
  }
  else {
    if ((param_3 & 3) != 0) {
      FUN_004311cc(param_1,&local_54,param_4,(uint *)&DAT_0048c674,(uint *)&DAT_0048c674);
      param_2 = (LPRECT)FUN_004288b4(&local_54,-1,-1);
    }
    if ((param_4 & 0x800) != 0) {
      local_30 = 8;
      FUN_0043c4b4(local_c,(uint *)&DAT_0048c670,'\x01');
      local_24 = local_24 + 2;
      local_30 = 0x14;
      FUN_00421cec(param_1,local_c);
      PatBlt((HDC)*param_1,local_54,local_50,local_4c - local_54,local_48 - local_50,0xf00021);
      FUN_00421e18(param_1);
      local_24 = local_24 + -2;
      param_2 = (LPRECT)OWL::TBrush::_dtor(local_c,2);
    }
    uVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
    *in_FS_OFFSET = local_40;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004311cc  FUN_004311cc   (458 bytes)   [unnamed]
void __cdecl FUN_004311cc(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  uint local_14 [2];
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x47d1c4);
  if ((param_3 & 3) != 0) {
    FUN_0043c4b4(local_c,param_4,'\x01');
    FUN_00421cec(param_1,local_c);
    if ((param_3 & 2) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1],(param_2[2] - *param_2) + -1,1,0xf00021);
    }
    if ((param_3 & 1) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1] + 1,1,(param_2[3] - param_2[1]) + -2,0xf00021);
    }
    FUN_00421e18(param_1);
    OWL::TBrush::_dtor(local_c,2);
  }
  if ((param_3 & 0xc) != 0) {
    FUN_0043c4b4(local_14,param_5,'\x01');
    FUN_00421cec(param_1,local_14);
    if ((param_3 & 8) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[3] + -1,param_2[2] - *param_2,1,0xf00021);
    }
    if ((param_3 & 4) != 0) {
      PatBlt((HDC)*param_1,param_2[2] + -1,param_2[1],1,(param_2[3] - param_2[1]) + -1,0xf00021);
    }
    FUN_00421e18(param_1);
    OWL::TBrush::_dtor(local_14,2);
  }
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431398  FUN_00431398   (133 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_00431398(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47d20d);
  if (DAT_0047d1fc == '\0') {
    FUN_0043c628((uint *)&DAT_0048c8dc,0x47f530,&DAT_0048c698,&DAT_0048c6ac);
    _DAT_0048c8e1 = DAT_0048c6ac;
    _DAT_0048c8e5 = 0;
    _DAT_0048c8e9 = 0;
    (*(undefined4 *)&DAT_0048c8ed) = 0;
    DAT_0047d1fc = DAT_0047d1fc + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c8dc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043141d  FUN_0043141d   (114 bytes)   [unnamed]
void __stdcall FUN_0043141d(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47d24a);
  if (DAT_0047d1fc != '\0') {
    if (DAT_0048c8ed != (uint *)0x0) {
      OWL::TBitmap::_dtor(DAT_0048c8ed,3);
    }
    OWL::TBrush::_dtor((uint *)&DAT_0048c8dc,0);
    DAT_0047d1fc = '\0';
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004314f0  FUN_004314f0   (66 bytes)   [unnamed]
uint * __cdecl FUN_004314f0(uint *param_1)

{
  if (*(int *)((int)param_1 + 5) != DAT_0048c6ac) {
    FUN_0043c698(param_1,0x47f530,&DAT_0048c698,(uint *)&DAT_0048c6ac);
    *(int *)((int)param_1 + 5) = DAT_0048c6ac;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431534  FUN_00431534   (185 bytes)   [unnamed]
undefined4 __cdecl FUN_00431534(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47d28c);
  if ((*(int *)(param_1 + 9) < *param_2) || (*(int *)(param_1 + 0xd) < param_2[1])) {
    if (*(int *)(param_1 + 9) < *param_2) {
      *(int *)(param_1 + 9) = *param_2;
    }
    if (*(int *)(param_1 + 0xd) < param_2[1]) {
      *(int *)(param_1 + 0xd) = param_2[1];
    }
    puVar3 = (uint *)operator_new();
    if (puVar3 != (uint *)0x0) {
      FUN_0041cd0c(puVar3,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd),1,1,(void *)0x0);
    }
    puVar1 = *(uint **)(param_1 + 0x11);
    if (puVar1 != (uint *)0x0) {
      OWL::TBitmap::_dtor(puVar1,3);
    }
    *(uint **)(param_1 + 0x11) = puVar3;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x11);
  *in_FS_OFFSET = local_30;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004315f0  FUN_004315f0   (13 bytes)   [unnamed]
uint * __stdcall FUN_004315f0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00431398();
  puVar1 = FUN_004314f0(puVar1);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431600  FUN_00431600   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_00431600(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_00431398();
  uVar2 = FUN_00431534((int)puVar1,param_1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431618  FUN_00431618   (208 bytes)   [unnamed]
void __cdecl FUN_00431618(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5, int *param_6)

{
  PatBlt((HDC)*param_1,0,0,*param_3,param_3[1],0xff0062);
  if (*param_6 != DAT_0048c654) {
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
    BitBlt((HDC)*param_1,*param_2,param_2[1],param_5[2] - *param_5,param_5[3] - param_5[1],
           (HDC)*param_4,*param_5,param_5[1],0xcc0020);
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004316e8  FUN_004316e8   (174 bytes)   [unnamed]
void __cdecl FUN_004316e8(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  FUN_00421cec(param_1,param_4);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  BitBlt((HDC)*param_1,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],
         (HDC)*param_2,0,0,0xe20746);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  FUN_00421e18(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431798  FUN_00431798   (28 bytes)   [unnamed]
void __cdecl FUN_00431798(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004315f0();
  FUN_004316e8(param_1,param_2,param_3,puVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004317b4  FUN_004317b4   (253 bytes)   [unnamed]
undefined4 __cdecl FUN_004317b4(int *param_1)

{
  int iVar1;
  HDC pHVar2;
  int iVar3;
  uint in_stack_00000014;
  undefined4 local_10;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    SetBkMode((HDC)*param_1,1);
  }
  iVar1 = 1;
  pHVar2 = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  iVar1 = SetBkMode(pHVar2,iVar1);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  local_10 = (**(code **)(*(int *)((int)param_1 + 5) + 0x50))();
  if ((in_stack_00000014 & 0x400) == 0) {
    (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
    local_10 = (**(code **)(*(int *)((int)param_1 + 5) + 0x50))();
  }
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  iVar3 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar3 != *param_1) {
    SetBkMode((HDC)*param_1,iVar1);
  }
  pHVar2 = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  SetBkMode(pHVar2,iVar1);
  return local_10;
}

// ----------------------------------------------------------------------------------------------------
// 0x004318b4  FUN_004318b4   (1559 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_004318b4(uint *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,int param_6, char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int *local_130;
  int *local_124;
  undefined4 local_11c;
  undefined4 local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  uint local_64 [2];
  uint local_5c [2];
  HDC local_54 [10];
  HDC local_2c;
  int local_27;
  
  __InitExceptBlockLDTC(0x47d334);
  local_78 = 8;
  FUN_0042b980((int *)&local_2c,param_1);
  local_6c = local_6c + 3;
  local_78 = 0x14;
  (**(code **)(local_27 + 0x24))();
  (**(code **)(local_27 + 0x20))();
  local_94 = param_2[3] - param_2[1];
  local_98 = param_2[2] - *param_2;
  local_a0 = *param_5;
  local_9c = param_5[1];
  local_140 = param_4[1] + local_9c;
  local_144 = *param_4 + local_a0;
  local_138 = local_140 + local_94;
  local_13c = local_144 + local_98;
  local_b0 = local_144;
  local_ac = local_140;
  local_a8 = local_144;
  local_a4 = local_140;
  FUN_004288d0(&local_144,param_4);
  local_b8 = *param_5;
  local_b4 = param_5[1];
  if ((param_7 != '\0') || (param_6 == 1)) {
    local_b8 = local_b8 + 1;
    local_b4 = local_b4 + 1;
    FUN_00428898(&local_144,1,1);
    FUN_004288d0(&local_144,param_4);
  }
  local_bc = local_138 - local_140;
  local_c0 = local_13c - local_144;
  local_148 = param_4[3] - param_4[1];
  local_14c = param_4[2] - *param_4;
  local_d0 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_154 = 0;
  local_150 = 0;
  local_78 = 0x20;
  local_e8 = local_14c;
  local_e4 = local_148;
  local_e0 = local_14c;
  local_dc = local_148;
  local_c8 = local_14c;
  local_c4 = local_148;
  puVar1 = (uint *)FUN_00431600(&local_e8);
  FUN_0042b980((int *)local_54,puVar1);
  local_6c = local_6c + 3;
  local_78 = 0x14;
  local_ec = local_148 - local_150;
  local_f0 = local_14c - local_154;
  FUN_00431618((undefined4*)local_54,&local_b8,&local_f0,(undefined4*)&local_2c,param_2,param_9);
  local_fc = param_2[3] - param_2[1];
  local_100 = param_2[2] - *param_2;
  local_158 = local_b4 + local_fc;
  local_15c = local_b8 + local_100;
  local_10c = local_b4;
  local_110 = local_b8;
  local_164 = local_b8;
  local_160 = local_b4;
  local_108 = local_15c;
  local_104 = local_158;
  local_f8 = local_100;
  local_f4 = local_fc;
  if (param_6 == 3) {
    (**(code **)(local_27 + 0x20))();
    local_11c = 0;
    local_118 = 0;
    BitBlt(local_54[0],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],local_2c,0,
           0,0xee0086);
    local_78 = 0x2c;
    FUN_0043c4b4(local_5c,&DAT_0048c69c,'\x01');
    local_6c = local_6c + 2;
    local_78 = 0x38;
    FUN_00421cec(param_3,local_5c);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    local_124 = &local_164;
    BitBlt((HDC)*param_3,local_144,local_140,local_13c - local_144,local_138 - local_140,local_54[0]
           ,local_164,local_160,0xb8074a);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    local_6c = local_6c + -2;
    OWL::TBrush::_dtor(local_5c,2);
    local_78 = 0x14;
  }
  else {
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    local_130 = &local_164;
    BitBlt((HDC)*param_3,local_144,local_140,local_13c - local_144,local_138 - local_140,local_54[0]
           ,local_164,local_160,0x8800c6);
    BitBlt((HDC)*param_3,local_144,local_140,local_13c - local_144,local_138 - local_140,local_2c,
           *param_2,param_2[1],0xee0086);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
  }
  if (param_6 == 2) {
    FUN_00431798(param_3,(undefined4*)local_54,param_4);
  }
  else if ((param_8 != '\0') && (*param_10 != (*(uint *)&DAT_0048c654))) {
    local_78 = 0x44;
    FUN_0043c4b4(local_64,param_10,'\x01');
    local_6c = local_6c + 2;
    local_78 = 0x50;
    FUN_004316e8(param_3,(undefined4*)local_54,param_4,local_64);
    local_6c = local_6c + -2;
    OWL::TBrush::_dtor(local_64,2);
    local_78 = 0x14;
  }
  FUN_0042ba5c((undefined4*)local_54);
  local_6c = local_6c + -3;
  OWL::TMemoryDC::_dtor((int *)local_54,2);
  local_6c = local_6c + -3;
  OWL::TMemoryDC::_dtor((int *)&local_2c,2);
  *in_FS_OFFSET = local_88;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431ecc  FUN_00431ecc   (179 bytes)   [unnamed]
void __cdecl FUN_00431ecc(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5, int param_6,char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  ICONINFO local_4c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  uint local_14 [2];
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x47d3bc);
  GetIconInfo((HICON)*param_1,&local_4c);
  local_28 = 0x14;
  puVar1 = FUN_0041cc9c(local_14,local_4c.hbmColor,0);
  local_1c = local_1c + 2;
  FUN_0041ce0c(local_c,puVar1);
  OWL::TBitmap::_dtor(local_14,2);
  local_28 = 8;
  FUN_004318b4(local_c,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  local_1c = local_1c + -2;
  OWL::TBitmap::_dtor(local_c,2);
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431f80  FUN_00431f80   (1252 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_00431f80(undefined4 param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7,COLORREF *param_8,ushort param_9)

{
  int iVar1;
  HDC pHVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  char cVar8;
  int local_e0;
  int local_dc;
  undefined4 local_cc;
  undefined4 local_c8;
  COLORREF local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  COLORREF local_9c;
  COLORREF local_98 [2];
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  uint local_5c [2];
  int local_54 [10];
  int local_2c [10];
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x47d428);
  piVar5 = param_3;
  piVar6 = &local_e0;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  local_88 = *param_4;
  local_84 = param_4[1];
  if (param_7 == '\0') {
    iVar4 = 1;
  }
  else {
    iVar4 = 2;
  }
  iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar1 != *param_2) {
    SetBkMode((HDC)*param_2,iVar4);
  }
  pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  iVar4 = SetBkMode(pHVar2,iVar4);
  if ((param_6 != '\0') || (iVar1 = local_dc, param_5 == 1)) {
    local_88 = local_88 + 1;
    local_84 = local_84 + 1;
    iVar1 = local_e0 + 1;
    if ((param_9 & 1) != 0) {
      iVar1 = local_e0 + 2;
    }
    local_e0 = iVar1;
    iVar1 = local_dc + 1;
    if ((param_9 & 4) != 0) {
      iVar1 = local_dc + 2;
    }
  }
  local_dc = iVar1;
  switch(param_5) {
  case 0:
    local_8c = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_8c = local_90;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 1:
    iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    if (iVar1 != *param_2) {
      SetBkMode((HDC)*param_2,1);
    }
    iVar1 = 1;
    pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    SetBkMode(pHVar2,iVar1);
    pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    local_98[0] = GetBkColor(pHVar2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_98[0] = local_9c;
      if (param_6 != '\0') {
        (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
      }
    }
    if (param_6 == '\0') {
      local_70 = 8;
      FUN_0042b918(local_2c,param_2);
      local_64 = local_64 + 3;
      local_70 = 0x20;
      local_a4 = param_3[3] - param_3[1];
      local_a8 = param_3[2] - *param_3;
      local_a0 = local_a8;
      puVar3 = (uint *)FUN_00431600(&local_a8);
      FUN_0042b980(local_54,puVar3);
      local_64 = local_64 + 3;
      local_70 = 0x14;
      if (param_7 == '\0') {
        param_8 = local_98;
      }
      local_ac = param_3[3] - param_3[1];
      local_b0 = param_3[2] - *param_3;
      FUN_00431618(local_54,&local_88,&local_b0,local_2c,param_3,(int *)param_8);
      FUN_00431798(param_2,local_54,param_3);
      (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
      local_64 = local_64 + -3;
      OWL::TMemoryDC::_dtor(local_54,2);
      local_64 = local_64 + -3;
      OWL::TMemoryDC::_dtor(local_2c,2);
      local_70 = 0;
    }
    else {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
    }
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 2:
    local_b8 = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_b8 = local_bc;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    local_70 = 0x2c;
    cVar8 = '\x01';
    pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    local_c0 = GetTextColor(pHVar2);
    FUN_0043c4b4(local_5c,&local_c0,cVar8);
    local_64 = local_64 + 2;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x58))();
    local_64 = local_64 + -2;
    OWL::TBrush::_dtor(local_5c,2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 3:
    local_c8 = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_c8 = local_cc;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    FUN_004317b4(param_2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 4:
    (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
  }
  iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar1 != *param_2) {
    SetBkMode((HDC)*param_2,iVar4);
  }
  pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetBkMode(pHVar2,iVar4);
  *in_FS_OFFSET = local_80;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432478  FUN_00432478   (145 bytes)   [unnamed]
void __cdecl FUN_00432478(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7)

{
  if (param_1[1] == 0) {
    FUN_00431f80(*param_1,param_2,param_1 + 2,param_4,param_5,param_6,param_7,param_1 + 7,
                 *(ushort *)(param_1 + 8));
  }
  else if (param_1[1] == 1) {
    FUN_004318b4((uint *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  else if (param_1[1] == 2) {
    FUN_00431ecc((undefined4 *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432700  FUN_00432700   (12 bytes)   [unnamed]
void __cdecl FUN_00432700(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432764  FUN_00432764   (2214 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00432764(void)

{
  undefined *puVar1;
  
  if (DAT_0047d4f4 == '\0') {
    _DAT_0047d4f0 = 0;
    DAT_0047d4f4 = '\x01';
  }
  if (DAT_0047d4fc == '\0') {
    _DAT_0047d4f8 = 1;
    DAT_0047d4fc = '\x01';
  }
  if (DAT_0047d504 == '\0') {
    _DAT_0047d500 = 2;
    DAT_0047d504 = '\x01';
  }
  if (DAT_0047d50c == '\0') {
    _DAT_0047d508 = 3;
    DAT_0047d50c = '\x01';
  }
  if (DAT_0047d514 == '\0') {
    _DAT_0047d510 = 4;
    DAT_0047d514 = '\x01';
  }
  if (DAT_0047d51c == '\0') {
    (*(undefined4 *)&DAT_0047d518) = 5;
    DAT_0047d51c = '\x01';
  }
  if (DAT_0047d524 == '\0') {
    (*(undefined4 *)&DAT_0047d520) = 6;
    DAT_0047d524 = '\x01';
  }
  if (DAT_0047d52c == '\0') {
    (*(undefined4 *)&DAT_0047d528) = 7;
    DAT_0047d52c = '\x01';
  }
  if (DAT_0047d534 == '\0') {
    (*(undefined4 *)&DAT_0047d530) = 8;
    DAT_0047d534 = '\x01';
  }
  if (DAT_0047d53c == '\0') {
    _DAT_0047d538 = 9;
    DAT_0047d53c = '\x01';
  }
  if (DAT_0047d544 == '\0') {
    _DAT_0047d540 = 10;
    DAT_0047d544 = '\x01';
  }
  if (DAT_0047d54c == '\0') {
    _DAT_0047d548 = 0xb;
    DAT_0047d54c = '\x01';
  }
  if (DAT_0047d554 == '\0') {
    _DAT_0047d550 = 0xc;
    DAT_0047d554 = '\x01';
  }
  if (DAT_0047d55c == '\0') {
    _DAT_0047d558 = 0xd;
    DAT_0047d55c = '\x01';
  }
  if (DAT_0047d564 == '\0') {
    _DAT_0047d560 = 0xe;
    DAT_0047d564 = '\x01';
  }
  if (DAT_0047d56c == '\0') {
    _DAT_0047d568 = 0xf;
    DAT_0047d56c = '\x01';
  }
  if (DAT_0047d574 == '\0') {
    _DAT_0047d570 = 0x10;
    DAT_0047d574 = '\x01';
  }
  if (DAT_0047d57c == '\0') {
    _DAT_0047d578 = 0x11;
    DAT_0047d57c = '\x01';
  }
  if (DAT_0047d584 == '\0') {
    _DAT_0047d580 = 0x12;
    DAT_0047d584 = '\x01';
  }
  if (DAT_0047d58c == '\0') {
    _DAT_0047d588 = 0x13;
    DAT_0047d58c = '\x01';
  }
  if (DAT_0047d594 == '\0') {
    _DAT_0047d590 = 0x14;
    DAT_0047d594 = '\x01';
  }
  if (DAT_0047d59c == '\0') {
    _DAT_0047d598 = 0x15;
    DAT_0047d59c = '\x01';
  }
  if (DAT_0047d5a4 == '\0') {
    _DAT_0047d5a0 = 0x16;
    DAT_0047d5a4 = '\x01';
  }
  if (DAT_0047d5ac == '\0') {
    _DAT_0047d5a8 = 0x17;
    DAT_0047d5ac = '\x01';
  }
  if (DAT_0047d5b4 == '\0') {
    _DAT_0047d5b0 = 0x18;
    DAT_0047d5b4 = '\x01';
  }
  if (DAT_0047d5bc == '\0') {
    _DAT_0047d5b8 = 0x19;
    DAT_0047d5bc = '\x01';
  }
  if (DAT_0047d5c4 == '\0') {
    _DAT_0047d5c0 = 0x1a;
    DAT_0047d5c4 = '\x01';
  }
  if (DAT_0047d5cc == '\0') {
    _DAT_0047d5c8 = 0x1b;
    DAT_0047d5cc = '\x01';
  }
  if (DAT_0047d5d4 == '\0') {
    _DAT_0047d5d0 = 0x1c;
    DAT_0047d5d4 = '\x01';
  }
  if (DAT_0047d5dc == '\0') {
    _DAT_0047d5d8 = 0x1d;
    DAT_0047d5dc = '\x01';
  }
  if (DAT_0047d5e4 == '\0') {
    _DAT_0047d5e0 = 0x1e;
    DAT_0047d5e4 = '\x01';
  }
  if (DAT_0047d5ec == '\0') {
    _DAT_0047d5e8 = 0x1f;
    DAT_0047d5ec = '\x01';
  }
  if (DAT_0047d5f4 == '\0') {
    (*(undefined4 *)&DAT_0047d5f0) = 0x20;
    DAT_0047d5f4 = '\x01';
  }
  if (DAT_0047d5fc == '\0') {
    (*(undefined4 *)&DAT_0047d5f8) = 0x21;
    DAT_0047d5fc = '\x01';
  }
  if (DAT_0047d604 == '\0') {
    _DAT_0047d600 = 0x22;
    DAT_0047d604 = '\x01';
  }
  if (DAT_0047d60c == '\0') {
    _DAT_0047d608 = 0x23;
    DAT_0047d60c = '\x01';
  }
  if (DAT_0047d614 == '\0') {
    _DAT_0047d610 = 0x24;
    DAT_0047d614 = '\x01';
  }
  if (DAT_0047d61c == '\0') {
    _DAT_0047d618 = 0x25;
    DAT_0047d61c = '\x01';
  }
  if (DAT_0047d624 == '\0') {
    _DAT_0047d620 = 0x26;
    DAT_0047d624 = '\x01';
  }
  if (DAT_0047d62c == '\0') {
    _DAT_0047d628 = 0x27;
    DAT_0047d62c = '\x01';
  }
  if (DAT_0047d634 == '\0') {
    _DAT_0047d630 = 0x28;
    DAT_0047d634 = '\x01';
  }
  if (DAT_0047d63c == '\0') {
    _DAT_0047d638 = 0x29;
    DAT_0047d63c = '\x01';
  }
  if (DAT_0047d644 == '\0') {
    _DAT_0047d640 = 0x2a;
    DAT_0047d644 = '\x01';
  }
  if (DAT_0047d64c == '\0') {
    _DAT_0047d648 = 0x2b;
    DAT_0047d64c = '\x01';
  }
  if (DAT_0047d654 == '\0') {
    _DAT_0047d650 = 0x2c;
    DAT_0047d654 = '\x01';
  }
  if (DAT_0047d65c == '\0') {
    _DAT_0047d658 = 0x2d;
    DAT_0047d65c = '\x01';
  }
  if (DAT_0047d664 == '\0') {
    _DAT_0047d660 = 0x2e;
    DAT_0047d664 = '\x01';
  }
  if (DAT_0047d66c == '\0') {
    _DAT_0047d668 = 0x2f;
    DAT_0047d66c = '\x01';
  }
  if (DAT_0047d674 == '\0') {
    _DAT_0047d670 = 0x30;
    DAT_0047d674 = '\x01';
  }
  if (DAT_0047d67c == '\0') {
    (*(undefined4 *)&DAT_0047d678) = 0x31;
    DAT_0047d67c = '\x01';
  }
  if (DAT_0047d684 == '\0') {
    (*(undefined4 *)&DAT_0047d680) = 0x32;
    DAT_0047d684 = '\x01';
  }
  if (DAT_0047d68c == '\0') {
    _DAT_0047d688 = 0x33;
    DAT_0047d68c = '\x01';
  }
  if (DAT_0047d694 == '\0') {
    _DAT_0047d690 = 0x34;
    DAT_0047d694 = '\x01';
  }
  if (DAT_0047d69c == '\0') {
    _DAT_0047d698 = 0x35;
    DAT_0047d69c = '\x01';
  }
  if (DAT_0047d6a4 == '\0') {
    _DAT_0047d6a0 = 0x36;
    DAT_0047d6a4 = '\x01';
  }
  if (DAT_0047d6ac == '\0') {
    _DAT_0047d6a8 = 0x37;
    DAT_0047d6ac = '\x01';
  }
  if (DAT_0047d6b4 == '\0') {
    _DAT_0047d6b0 = 0x38;
    DAT_0047d6b4 = '\x01';
  }
  if (DAT_0047d6bc == '\0') {
    _DAT_0047d6b8 = 0x39;
    DAT_0047d6bc = '\x01';
  }
  if (DAT_0047d6c4 == '\0') {
    _DAT_0047d6c0 = 0x3a;
    DAT_0047d6c4 = '\x01';
  }
  if (DAT_0047d6cc == '\0') {
    _DAT_0047d6c8 = 0x3b;
    DAT_0047d6cc = '\x01';
  }
  if (DAT_0047d6d4 == '\0') {
    _DAT_0047d6d0 = 0x3c;
    DAT_0047d6d4 = '\x01';
  }
  if (DAT_0047d6dc == '\0') {
    _DAT_0047d6d8 = 0x3d;
    DAT_0047d6dc = '\x01';
  }
  if (DAT_0047d6e4 == '\0') {
    _DAT_0047d6e0 = 0x3e;
    DAT_0047d6e4 = '\x01';
  }
  if (DAT_0047d6ec == '\0') {
    _DAT_0047d6e8 = 0x3f;
    DAT_0047d6ec = '\x01';
  }
  if (DAT_0047d6f4 == '\0') {
    _DAT_0047d6f0 = 0x40;
    DAT_0047d6f4 = '\x01';
  }
  if (DAT_0047d6fc == '\0') {
    _DAT_0047d6f8 = 0x41;
    DAT_0047d6fc = '\x01';
  }
  if (DAT_0047d704 == '\0') {
    _DAT_0047d700 = 0x42;
    DAT_0047d704 = '\x01';
  }
  if (DAT_0047d70c == '\0') {
    _DAT_0047d708 = 0x43;
    DAT_0047d70c = '\x01';
  }
  if (DAT_0047d714 == '\0') {
    _DAT_0047d710 = 0x44;
    DAT_0047d714 = '\x01';
  }
  if (DAT_0047d71c == '\0') {
    _DAT_0047d718 = 0x45;
    DAT_0047d71c = '\x01';
  }
  if (DAT_0047d724 == '\0') {
    _DAT_0047d720 = 0x46;
    DAT_0047d724 = '\x01';
  }
  if (DAT_0047d72c == '\0') {
    _DAT_0047d728 = 0x47;
    DAT_0047d72c = '\x01';
  }
  if (DAT_0047d734 == '\0') {
    _DAT_0047d730 = 0x48;
    DAT_0047d734 = '\x01';
  }
  if (DAT_0047d73c == '\0') {
    _DAT_0047d738 = 0x49;
    DAT_0047d73c = '\x01';
  }
  if (DAT_0047d744 == '\0') {
    _DAT_0047d740 = 0x4a;
    DAT_0047d744 = '\x01';
  }
  if (DAT_0047d74c == '\0') {
    _DAT_0047d748 = 0x4b;
    DAT_0047d74c = '\x01';
  }
  if (DAT_0047d754 == '\0') {
    _DAT_0047d750 = 0x4c;
    DAT_0047d754 = '\x01';
  }
  if (DAT_0047d75c == '\0') {
    _DAT_0047d758 = 0x4d;
    DAT_0047d75c = '\x01';
  }
  if (DAT_0047d764 == '\0') {
    _DAT_0047d760 = 0x4e;
    DAT_0047d764 = '\x01';
  }
  if (DAT_0047d76c == '\0') {
    _DAT_0047d768 = 0x4f;
    DAT_0047d76c = '\x01';
  }
  if (DAT_0047d774 == '\0') {
    _DAT_0047d770 = 0x50;
    DAT_0047d774 = '\x01';
  }
  if (DAT_0047d77c == '\0') {
    _DAT_0047d778 = 0x51;
    DAT_0047d77c = '\x01';
  }
  if (DAT_0047d784 == '\0') {
    puVar1 = FUN_0041b958();
    if ((*(uint *)(puVar1 + 4) < 5) &&
       ((puVar1 = FUN_0041b958(), *(int *)(puVar1 + 0x10) != 2 ||
        (puVar1 = FUN_0041b958(), *(uint *)(puVar1 + 4) < 4)))) {
      _DAT_0047d780 = 0x4c;
    }
    else {
      _DAT_0047d780 = 0x53;
    }
    DAT_0047d784 = 1;
    return;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043300c  FUN_0043300c   (86 bytes)   [unnamed]
void __stdcall FUN_0043300c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47d798);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00435378;
  puVar1 = FUN_00468310(1,0,0x434ef0);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048c8f4,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433062  FUN_00433062   (48 bytes)   [unnamed]
void __stdcall FUN_00433062(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47d7ac);
  OWL::TStreamableClass::_dtor(0x48c8f4,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433660  FUN_00433660   (346 bytes)   [unnamed]
void __cdecl FUN_00433660(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  tagRECT local_70;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined4 local_3c [12];
  int local_c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x47daa4);
  if (param_1[7] != 0) {
    if (*(int *)(*(int *)param_1[7] + 0xc) == 0) {
      local_c = param_1[7];
      if (local_c != 0) {
        local_8 = *(undefined4 *)(local_c + 0xc);
        local_50 = 0x14;
        (*(code *)**(undefined4 **)(local_c + 0xc))();
        local_50 = 8;
      }
    }
    else {
      FUN_00438338(*(int *)param_1[7],0x10,0,0);
    }
  }
  param_1[7] = param_2;
  if (((param_1[7] != 0) && (*(int *)(*param_1 + 0xc) != 0)) &&
     (*(int *)(*(int *)param_1[7] + 0xc) == 0)) {
    FUN_00438618(*(int *)param_1[7],0,0x8000000,0);
    (**(code **)(*(int *)(*(int *)param_1[7] + 8) + 0x10))();
    local_70.left = 0;
    local_70.top = 0;
    local_70.right = 0;
    local_70.bottom = 0;
    FUN_004386fc(*param_1,&local_70);
    local_50 = 0x20;
    FUN_004307c8(local_3c,*(undefined4 *)(*param_1 + 0xc),&local_70.left,0x3eb,(uint *)0xffffffff);
    local_44 = local_44 + 2;
    local_50 = 0x2c;
    FUN_00430864((int)local_3c,(uint *)param_1[0xd],'\x01');
    FUN_00438338(*(int *)param_1[7],0x404,0,(LPARAM)local_3c);
    local_44 = local_44 + -2;
    operator_delete_array();
  }
  *in_FS_OFFSET = local_60;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433844  FUN_00433844   (42 bytes)   [unnamed]
LRESULT __stdcall FUN_00433844(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  if (param_2 == 0x87) {
    LVar1 = 0x104;
  }
  else {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433fdc  FUN_00433fdc   (36 bytes)   [unnamed]
void __cdecl FUN_00433fdc(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x3d) = param_2;
  if (*(int *)(*param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}

} // namespace tea
