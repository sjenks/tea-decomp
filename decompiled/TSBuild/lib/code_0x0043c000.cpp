// TSBuild.exe — runtime / library code "code_0x0043c000"
// 61 functions, 0x0043c050..0x0043fe3c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043c050  FUN_0043c050   (36 bytes)   [unnamed]
void __cdecl FUN_0043c050(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x16) = param_2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  piVar1 = (int *)FUN_004396f0();
  if (*piVar1 != 0) {
    FUN_0043bea9((int *)*piVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c074  FUN_0043c074   (55 bytes)   [unnamed]
void __cdecl FUN_0043c074(int param_1,char param_2)

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
// 0x0043c0c8  FUN_0043c0c8   (64 bytes)   [unnamed]
void __stdcall FUN_0043c0c8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f40d);
  if (DAT_0047f40c != '\0') {
    OWL::TBrushCache::_dtor(0x48cc54,2);
    DAT_0047f40c = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c108  FUN_0043c108   (73 bytes)   [unnamed]
undefined * __stdcall FUN_0043c108(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f428);
  if (DAT_0047f40c == '\0') {
    FUN_0043c1a4((undefined4 *)&DAT_0048cc54);
    DAT_0047f40c = DAT_0047f40c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048cc54;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c1a4  FUN_0043c1a4   (70 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043c1a4(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f44c);
  param_1[0x30] = 0x10;
  memset(param_1,0,0xc0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c26c  FUN_0043c26c   (77 bytes)   [unnamed]
void __cdecl FUN_0043c26c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1[param_2 * 3];
    uVar2 = param_1[param_2 * 3 + 1];
    uVar3 = param_1[param_2 * 3 + 2];
    FUN_004675a4(param_1 + 3,param_1,param_2 * 0xc);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c2bc  FUN_0043c2bc   (188 bytes)   [unnamed]
undefined1 __cdecl FUN_0043c2bc(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 local_5;
  
  local_5 = 1;
  if (param_1[param_1[0x30] * 3 + -3] == 0) {
    FUN_004675a4(param_1 + 3,param_1,(param_1[0x30] - 1) * 0xc);
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
  }
  else {
    uVar1 = param_1[0x30];
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) goto LAB_0043c32e;
    } while (param_1[uVar1 * 3 + 2] != 0);
    FUN_004282f8(param_1[uVar1 * 3]);
    param_1[uVar1 * 3] = param_2;
    param_1[uVar1 * 3 + 1] = param_3;
    param_1[uVar1 * 3 + 2] = 1;
    FUN_0043c26c(param_1,uVar1);
LAB_0043c32e:
    if ((int)uVar1 < 0) {
      local_5 = 0;
    }
  }
  FUN_00428078(param_2,2);
  return local_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c378  FUN_0043c378   (53 bytes)   [unnamed]
void __cdecl FUN_0043c378(int param_1,int param_2)

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
// 0x0043c3b0  FUN_0043c3b0   (57 bytes)   [unnamed]
undefined4 __cdecl FUN_0043c3b0(int param_1,int param_2)

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
// 0x0043c3ec  FUN_0043c3ec   (68 bytes)   [unnamed]
undefined4 __cdecl FUN_0043c3ec(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 < (int)param_1[0x30] && (param_1[iVar1 * 3] != 0)); iVar1 = iVar1 + 1) {
    if (param_2 == param_1[iVar1 * 3 + 1]) {
      param_1[iVar1 * 3 + 2] = param_1[iVar1 * 3 + 2] + 1;
      FUN_0043c26c(param_1,iVar1);
      return *param_1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c430  FUN_0043c430   (104 bytes)   [unnamed]
uint * __cdecl FUN_0043c430(uint *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint uVar2;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f470);
  FUN_00428470(param_1,param_2,param_3);
  if ((char)param_1[1] == '\0') {
    uVar2 = *param_1;
    puVar1 = FUN_0043c108();
    FUN_0043c3b0((int)puVar1,uVar2);
  }
  else {
    FUN_00428078(*param_1,2);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c4b4  FUN_0043c4b4   (261 bytes)   [unnamed]
uint * __cdecl FUN_0043c4b4(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  HBRUSH pHVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f494);
  FUN_00428420(param_1);
  *(bool *)(param_1 + 1) = param_3 == '\0';
  uVar2 = FUN_00420364(param_2);
  if (param_3 != '\0') {
    uVar4 = uVar2;
    puVar3 = (undefined4 *)FUN_0043c108();
    uVar4 = FUN_0043c3ec(puVar3,uVar4);
    *param_1 = uVar4;
    if (uVar4 != 0) {
      *in_FS_OFFSET = local_28;
      goto LAB_0043c5a5;
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
  FUN_00427974((int *)param_1,0x7fe3);
  if (param_3 == '\0') {
    FUN_00428078(*param_1,2);
  }
  else {
    uVar4 = FUN_00420364(param_2);
    uVar2 = *param_1;
    puVar6 = (uint *)FUN_0043c108();
    cVar1 = FUN_0043c2bc(puVar6,uVar2,uVar4);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_0043c5a5:
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c628  FUN_0043c628   (74 bytes)   [unnamed]
uint * __cdecl FUN_0043c628(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH pHVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f4dc);
  iVar2 = 1;
  pHVar1 = FUN_0043c6d4(param_2,param_3,param_4);
  FUN_0043c430(param_1,pHVar1,iVar2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c698  FUN_0043c698   (58 bytes)   [unnamed]
void __cdecl FUN_0043c698(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH pHVar1;
  
  if (*param_1 != 0) {
    FUN_004282f8(*param_1);
  }
  pHVar1 = FUN_0043c6d4(param_2,param_3,param_4);
  *param_1 = (uint)pHVar1;
  FUN_00428078(*param_1,2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c6d4  FUN_0043c6d4   (199 bytes)   [unnamed]
HBRUSH __cdecl FUN_0043c6d4(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  HBRUSH pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  HGLOBAL local_24 [5];
  undefined4 *local_f;
  
  __InitExceptBlockLDTC(0x47f510);
  FUN_00440cd0((int *)local_24,8,8,2,0);
  memset(local_f,0,0x20);
  iVar1 = 0;
  do {
    *(undefined1 *)(local_f + (7 - iVar1)) = *(undefined1 *)(param_1 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  FUN_00440750((int)local_24,0,param_3);
  FUN_00440750((int)local_24,1,param_2);
  pHVar2 = CreateDIBPatternBrush(local_24[0],0);
  FUN_0042798c((int)pHVar2,0x7fe3);
  OWL::TDib::_dtor((int *)local_24,2);
  *in_FS_OFFSET = local_48;
  return pHVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c86c  FUN_0043c86c   (312 bytes)   [unnamed]
int * __cdecl FUN_0043c86c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f670);
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
    FUN_00435d18((int *)((int)param_1 + 0x26),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -2;
  FUN_0043d5a8(param_1,1,param_3,param_4,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 2;
  param_1[3] = (int)&OWL::TButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047f5c0;
  *(undefined ***)param_1[2] = &PTR_LAB_0047f5cc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047f5d8;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffeff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cb8c  FUN_0043cb8c   (86 bytes)   [unnamed]
void __stdcall FUN_0043cb8c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f6c8);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043ceb0;
  puVar1 = FUN_00468310(1,0,0x404a1c);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cd18,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cbe2  FUN_0043cbe2   (48 bytes)   [unnamed]
void __stdcall FUN_0043cbe2(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f6dc);
  OWL::TStreamableClass::_dtor(0x48cd18,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cc14  FUN_0043cc14   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043cc14(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f6e4);
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
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_00404a1c,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cc7c  FUN_0043cc7c   (283 bytes)   [unnamed]
int * __cdecl FUN_0043cc7c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f6fc);
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
    FUN_00435d18((int *)((int)param_1 + 0x26),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -2;
  FUN_0043da78(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 2;
  param_1[3] = (int)&OWL::TButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047f5c0;
  *(undefined ***)param_1[2] = &PTR_LAB_0047f5cc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047f5d8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cd98  EvRegisteredMsg_43cd98_43cd98   (55 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TButton::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_43cd98_43cd98(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0043cdd0(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_0042db04(param_2);
  *(bool *)(iVar1 + 0x14) = iVar2 != 0;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cdd0  FUN_0043cdd0   (87 bytes)   [unnamed]
void __cdecl FUN_0043cdd0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042d9a0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = FUN_0043da10(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ce5c  FUN_0043ce5c   (81 bytes)   [unnamed]
void __cdecl FUN_0043ce5c(int param_1,int *param_2)

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
  FUN_0043da10(local_14,piVar1);
  local_8 = 2;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TControl::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ceb0  FUN_0043ceb0   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043ceb0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47f730);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0043cc7c(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_0043cc14(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d010  EvGetDlgCode_43d010   (18 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
void __cdecl EvGetDlgCode_43d010(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d0c0  FUN_0043d0c0   (309 bytes)   [unnamed]
int * __cdecl FUN_0043d0c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f8b4);
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
    FUN_00435d18((int *)((int)param_1 + 0x2a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_0043c86c(param_1,1,param_3,param_4,param_6);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TCheckBox::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047f804;
  *(undefined ***)param_1[2] = &PTR_LAB_0047f810;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047f81c;
  *(undefined4 *)((int)param_1 + 0x16) = param_5;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x100;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d358  FUN_0043d358   (54 bytes)   [unnamed]
void __cdecl FUN_0043d358(int *param_1,WPARAM param_2)

{
  FUN_00438338(*param_1,0xf1,param_2,0);
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d390  BNClicked_43d390   (42 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl BNClicked_43d390(int *param_1)

{
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d404  FUN_0043d404   (323 bytes)   [unnamed]
int * __cdecl FUN_0043d404(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 )

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f99c);
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
  param_1[3] = (int)&OWL::TControl::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047f9e8;
  *(undefined ***)param_1[2] = &PTR_LAB_0047f9f4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047fa00;
  FUN_00435df4(*param_1,param_3,param_5,param_10);
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
// 0x0043d5a8  FUN_0043d5a8   (347 bytes)   [unnamed]
int * __cdecl FUN_0043d5a8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47fa98);
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
  param_1[3] = (int)&OWL::TControl::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047f9e8;
  *(undefined ***)param_1[2] = &PTR_LAB_0047f9f4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047fa00;
  FUN_00435df4(*param_1,param_3,(uint *)0x0,param_5);
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
// 0x0043d988  FUN_0043d988   (86 bytes)   [unnamed]
void __stdcall FUN_0043d988(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47fae0);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043dc90;
  puVar1 = FUN_00468310(1,0,0x404ef0);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cd28,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d9de  FUN_0043d9de   (48 bytes)   [unnamed]
void __stdcall FUN_0043d9de(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47faf4);
  OWL::TStreamableClass::_dtor(0x48cd28,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043da10  FUN_0043da10   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043da10(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47fafc);
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
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_00404ef0,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043da78  FUN_0043da78   (250 bytes)   [unnamed]
int * __cdecl FUN_0043da78(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47fb14);
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
    FUN_0042fbbc(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TControl::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047f9e8;
  *(undefined ***)param_1[2] = &PTR_LAB_0047f9f4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047fa00;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dbac  FUN_0043dbac   (87 bytes)   [unnamed]
void __cdecl FUN_0043dbac(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042d9a0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 4);
  }
  piVar1 = FUN_0042fb54(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dc3c  FUN_0043dc3c   (81 bytes)   [unnamed]
void __cdecl FUN_0043dc3c(int param_1,int *param_2)

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
  FUN_0042fb54(local_14,piVar1);
  local_8 = 3;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TWindow::Streamer::vf2((int)local_14,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dc90  FUN_0043dc90   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043dc90(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47fb48);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0043da78(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_0043da10(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dda8  FUN_0043dda8   (141 bytes)   [unnamed]
int * __cdecl FUN_0043dda8(undefined4 param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47fbb0);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    puVar2 = (uint *)operator_new();
    if (puVar2 != (uint *)0x0) {
      FUN_00425224(puVar2,10,'\0',0);
    }
    FUN_00420f84(piVar1,0,param_1,0,puVar2,iVar3);
  }
  *in_FS_OFFSET = local_30;
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043de35  FUN_0043de35   (86 bytes)   [unnamed]
undefined4 __cdecl FUN_0043de35(int param_1,int *param_2)

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
// 0x0043de8b  FUN_0043de8b   (41 bytes)   [unnamed]
undefined4 __cdecl FUN_0043de8b(int param_1,int *param_2)

{
  if ((param_1 != *param_2) && ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1])) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043deb4  FUN_0043deb4   (42 bytes)   [unnamed]
undefined4 __cdecl FUN_0043deb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0043831c(param_1);
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
// 0x0043e9b0  FUN_0043e9b0   (387 bytes)   [unnamed]
void __cdecl FUN_0043e9b0(int param_1,int param_2,int param_3)

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
  
  FUN_0042a154(&local_40);
  FUN_0042925c(param_1 + 4,param_3,&local_40);
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
  FUN_0042918c(param_1 + 4,param_3,&local_40);
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
  FUN_0042918c(param_1 + 4,param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043eb34  FUN_0043eb34   (451 bytes)   [unnamed]
void __cdecl FUN_0043eb34(int *param_1,int param_2,int param_3)

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
  
  FUN_0042a154(&local_40);
  FUN_0042925c((int)(param_1 + 1),param_3,&local_40);
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
  FUN_0042918c((int)(param_1 + 1),param_3,&local_40);
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
  FUN_0042918c((int)(param_1 + 1),param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ecf8  FUN_0043ecf8   (572 bytes)   [unnamed]
void __cdecl FUN_0043ecf8(int *param_1,int param_2,int param_3)

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
  
  FUN_0042a154(&local_3c);
  FUN_0042925c((int)(param_1 + 1),param_3,&local_3c);
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
  FUN_0042918c((int)(param_1 + 1),param_3,&local_3c);
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
  FUN_0042918c((int)(param_1 + 1),param_2,&local_3c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef34  FUN_0043ef34   (638 bytes)   [unnamed]
void __cdecl FUN_0043ef34(int *param_1,int param_2,int param_3)

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
  
  FUN_0042a154(&local_3c);
  FUN_0042925c((int)(param_1 + 1),param_3,&local_3c);
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
  FUN_0042918c((int)(param_1 + 1),param_3,&local_3c);
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
  FUN_0042918c((int)(param_1 + 1),param_2,&local_3c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f3f9  Child4453411_Notify4453432_43f3f9   (21 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_CHILD_NOTIFY(id 4453411, code 4453432)
void __cdecl Child4453411_Notify4453432_43f3f9(int param_1)

{
  OWL::TDecoratedFrame::vf10((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f40e  FUN_0043f40e   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_0043f40e(int param_1)

{
  OWL::TDecoratedFrame::vf9((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f44d  FUN_0043f44d   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_0043f44d(int param_1,LPMSG param_2)

{
  OWL::TDecoratedFrame::vf3((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f48c  Child4514932_Notify4510180_43f48c   (21 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_CHILD_NOTIFY(id 4514932, code 4510180)
void __cdecl Child4514932_Notify4510180_43f48c(int param_1)

{
  OWL::TDecoratedFrame::vf7((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f4a1  FUN_0043f4a1   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_0043f4a1(int param_1)

{
  OWL::TDecoratedFrame::vf6((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f628  FUN_0043f628   (292 bytes)   [unnamed]
int * __cdecl FUN_0043f628(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47ff40);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&OWL::TEventHandler::vftable;
    param_1[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047ffa4;
  *(undefined ***)param_1[2] = &PTR_LAB_0047ffb0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047ffbc;
  FUN_0043f898(param_1,param_3,0,param_5);
  if ((short)((uint)param_4 >> 0x10) != 0) {
    param_4 = (uint *)FUN_0042aea0(param_4);
  }
  param_1[4] = (int)param_4;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f87c  FUN_0043f87c   (28 bytes)   [unnamed]
bool __cdecl FUN_0043f87c(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  return cVar1 == '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f898  FUN_0043f898   (92 bytes)   [unnamed]
void __cdecl FUN_0043f898(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_00435df4(*param_1,param_2,(uint *)0x0,param_4);
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffffd;
  if ((short)((uint)*(undefined4 *)(*param_1 + 0x10) >> 0x10) != 0) {
    operator_delete_array();
  }
  *(undefined4 *)(*param_1 + 0x10) = 0xffff;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 4;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffff7ff;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fbc4  EvSetfont_43fbc4   (34 bytes)   [owl:response-table message-handler]
//   WM_SETFONT
void __cdecl EvSetfont_43fbc4(int *param_1)

{
  if ((*(byte *)(*param_1 + 0x74) & 0x20) != 0) {
    FUN_00436428(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fbe8  EvPaint_43fbe8   (16 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl EvPaint_43fbe8(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fbf8  EvMsg_19_43fbf8   (93 bytes)   [owl:response-table message-handler]
//   message 0x0019
void __cdecl EvMsg_19_43fbf8(int *param_1,HDC param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') &&
     (iVar1 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x19))(), iVar1 != 0)) {
    return;
  }
  OWL::TWindow::EvMsg_19(*param_1,param_2,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fc58  EvMsg_400_43fc58   (18 bytes)   [owl:response-table message-handler]
//   message 0x0400
void __cdecl EvMsg_400_43fc58(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fc6c  EvMsg_401_43fc6c   (26 bytes)   [owl:response-table message-handler]
//   message 0x0401
bool __cdecl EvMsg_401_43fc6c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00436428(*param_1);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fc88  EvMsg_402_43fc88   (16 bytes)   [owl:response-table message-handler]
//   message 0x0402
void __cdecl EvMsg_402_43fc88(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fd80  FUN_0043fd80   (188 bytes)   [unnamed]
undefined1 __stdcall FUN_0043fd80(HWND param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  LRESULT LVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == DAT_0047eb5c) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_00436e00(param_1,0);
    if (LVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(LVar3 + 8);
    }
    piVar4 = FUN_00468488(LVar3,iVar5,(int *)&DAT_00403c70,(int *)&DAT_0040293c,0);
    if ((((DAT_0047fe3c != (int *)0x0) && (piVar4 == (int *)0x0)) && (param_2 != 0x1f)) &&
       (param_2 != 10)) {
      *(HWND *)(*DAT_0047fe3c + 0xc) = param_1;
      FUN_00437d74(*DAT_0047fe3c);
      piVar4 = DAT_0047fe3c;
      DAT_0047fe3c = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_0041b984();
      if (cVar1 == '\0') {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)(piVar4[3] + 4))();
      }
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fe3c  FUN_0043fe3c   (46 bytes)   [unnamed]
void __cdecl FUN_0043fe3c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00438220(*param_1,(undefined*)FUN_0043f87c);
  if (iVar1 != 0) {
    FUN_004391f0(*param_1,0x7fec);
  }
  return;
}

} // namespace tea
