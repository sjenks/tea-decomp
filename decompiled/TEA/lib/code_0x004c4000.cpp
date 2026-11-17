// TEA.exe — runtime / library code "code_0x004c4000"
// 28 functions, 0x004c4074..0x004c7ecc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c4074  FUN_004c4074   (114 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c4074(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x510c64);
  if (*(int *)(param_1 + 0x52) == 0) {
    puVar2 = (undefined4 *)0x0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x52);
    *(undefined4 *)(param_1 + 0x52) = 0;
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0049ca30(puVar2,uVar1,1);
    }
    *in_FS_OFFSET = local_2c;
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c43ac  FUN_004c43ac   (351 bytes)   [unnamed]
int * __cdecl FUN_004c43ac(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, uint *param_6)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x510d90);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xc);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[0xd] = (int)(param_1 + 10);
    param_1[1] = (int)(param_1 + 9);
    param_1[2] = (int)(param_1 + 10);
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[9] = (int)&OWL::TEventHandler::vftable;
    param_1[10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xc,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  FUN_004c7a28(param_1,1,param_3,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&OWL::TFormattedStatic::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00511558;
  *(undefined ***)param_1[2] = &PTR_LAB_00511564;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511570;
  iVar1 = FUN_00496d48(param_5);
  param_1[6] = iVar1;
  if (param_6 == (uint *)0x0) {
    iVar1 = FUN_00496d48((uint *)&DAT_00510d7c);
  }
  else {
    iVar1 = FUN_00496d48(param_6);
  }
  param_1[7] = iVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4754  FUN_004c4754   (300 bytes)   [unnamed]
int * __cdecl FUN_004c4754(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x510e54);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&OWL::TEventHandler::vftable;
    param_1[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004c7a28(param_1,1,param_3,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TNumericStatic::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00511470;
  *(undefined ***)param_1[2] = &PTR_LAB_0051147c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511488;
  param_1[6] = param_5;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c49bc  FUN_004c49bc   (514 bytes)   [unnamed]
int * __cdecl FUN_004c49bc(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5,uint *param_6, uint *param_7,int param_8)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  __InitExceptBlockLDTC(0x510f34);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&OWL::TEventHandler::vftable;
    param_1[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004affb4(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TPrinterAbortDlg::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0051138c;
  *(undefined ***)param_1[2] = &PTR_LAB_00511398;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005113a4;
  param_1[6] = param_8;
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_004c4754(piVar1,0,*param_1,0x68,0);
  }
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_004c43ac(piVar1,0,*param_1,0x65,param_5,(uint *)0x0);
  }
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_004c43ac(piVar1,0,*param_1,0x66,param_6,param_7);
  }
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_004c4754(piVar1,0,*param_1,0x69,0);
  }
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4c74  FUN_004c4c74   (217 bytes)   [unnamed]
int * __cdecl FUN_004c4c74(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x511000);
  *param_1 = (int)&OWL::TStreamableBase::vftable;
  *param_1 = (int)&OWL::TPrinter::vftable;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004c3ce4(puVar1);
  }
  param_1[2] = (int)puVar1;
  param_1[1] = 0;
  if (param_2 == 0) {
    iVar2 = 0;
    puVar1 = (undefined4 *)FUN_00487bc0();
    param_2 = FUN_00487e08(puVar1,iVar2);
  }
  param_1[3] = param_2;
  (**(code **)(*param_1 + 0x18))();
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4f30  FUN_004c4f30   (92 bytes)   [unnamed]
undefined4 __stdcall FUN_004c4f30(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)FUN_00487bc0();
  iVar3 = FUN_00487e08(puVar1,iVar3);
  if (iVar3 != 0) {
    FUN_00498d7c((int *)(iVar3 + 0x11));
  }
  if ((DAT_00510fdc == param_1) || (DAT_00510fdc == -1)) {
    DAT_00510fdc = 0;
    uVar2 = 0;
  }
  else if ((param_2 == 0) || (param_2 == -4)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c52b0  FUN_004c52b0   (174 bytes)   [unnamed]
void __cdecl FUN_004c52b0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  char local_18;
  char local_17;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((((*(char *)(param_1 + 0x15) == '\0') || (*(int *)(param_1 + 0x16) != 0)) ||
        (*(int *)(param_1 + 0x1a) != 0)) ||
       ((*(int *)(param_1 + 0x1e) != *(int *)(param_1 + 0x26) ||
        (*(int *)(param_1 + 0x22) != *(int *)(param_1 + 0x2a))))) {
      if ((*(uint *)(param_1 + 0x11) & 3) == 1) {
        *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffffc | 1;
      }
      else {
        *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) | 3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11) = 2;
    }
  }
  else {
    local_16 = 0;
    local_12 = 0;
    local_e = 0;
    local_a = 0;
    Escape((HDC)*param_2,0x18,0x12,(LPCSTR)0x0,&local_18);
    uVar1 = (uint)(local_18 != '\0');
    if (local_17 != '\0') {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 0x11) = uVar1 | *(uint *)(param_1 + 0x11) & 0xfffffffc;
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5cf8  FUN_004c5cf8   (72 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c5cf8(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511244);
  FUN_0048ed90(param_1,param_2,DAT_00512a1c);
  *param_1 = &OWL::TXPrinter::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5f00  FUN_004c5f00   (83 bytes)   [unnamed]
void __cdecl FUN_004c5f00(uint param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x5112bc);
  piVar1 = FUN_004c5cf8(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6484  FUN_004c6484   (117 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c6484(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511618);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TPrintout::vftable;
  uVar1 = FUN_00496d48(param_2);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6664  FUN_004c6664   (277 bytes)   [unnamed]
int * __cdecl FUN_004c6664(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5116e8);
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
    FUN_004a4fbc((int *)((int)param_1 + 0x2a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004ac4b8(param_1,1,param_3,param_4,param_5,param_6);
  param_1[3] = (int)&OWL::TRadioButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00511740;
  *(undefined ***)param_1[2] = &PTR_LAB_0051174c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511758;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c684c  FUN_004c684c   (250 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c684c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5117f0);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TScroller::vftable;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 1;
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  if ((param_1[1] == 0) || ((*(byte *)(param_1[1] + 0x1a) & 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x3b) = uVar1;
  if ((param_1[1] == 0) || ((*(byte *)(param_1[1] + 0x1a) & 0x20) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7364  FUN_004c7364   (86 bytes)   [unnamed]
void __stdcall FUN_004c7364(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51189c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004c7790;
  puVar1 = FUN_004dd5cc(1,0,0x428068);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b954,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c73ba  FUN_004c73ba   (48 bytes)   [unnamed]
void __stdcall FUN_004c73ba(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5118b0);
  OWL::TStreamableClass::_dtor(0x51b954,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c73ec  FUN_004c73ec   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c73ec(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5118b8);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TScroller::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00428068,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7454  FUN_004c7454   (62 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c7454(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5118d0);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TScroller::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7494  FUN_004c7494   (78 bytes)   [unnamed]
int * __cdecl FUN_004c7494(int *param_1,undefined4 *param_2)

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
  puVar2 = FUN_004dd744((int)local_8,iVar1,(int *)&DAT_004027f0,(int *)&DAT_00428068,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c74e4  FUN_004c74e4   (26 bytes)   [unnamed]
int * __cdecl FUN_004c74e4(int *param_1,int *param_2)

{
  FUN_0049a490(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7506  FUN_004c7506   (333 bytes)   [unnamed]
int __stdcall FUN_004c7506(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 8);
  *(int *)(unaff_EBP + -4) = iVar1 + 0x3b;
  *(int *)(unaff_EBP + -8) = iVar1 + 0x3a;
  *(int *)(unaff_EBP + -0xc) = iVar1 + 0x39;
  *(int *)(unaff_EBP + -0x10) = iVar1 + 0x38;
  *(int *)(unaff_EBP + -0x14) = iVar1 + 0x34;
  *(int *)(unaff_EBP + -0x18) = iVar1 + 0x30;
  *(int *)(unaff_EBP + -0x1c) = iVar1 + 0x2c;
  *(int *)(unaff_EBP + -0x20) = iVar1 + 0x28;
  *(int *)(unaff_EBP + -0x24) = iVar1 + 0x14;
  *(int *)(unaff_EBP + -0x28) = iVar1 + 0x10;
  *(int *)(unaff_EBP + -0x2c) = iVar1 + 0x24;
  *(int *)(unaff_EBP + -0x30) = iVar1 + 0x20;
  *(int *)(unaff_EBP + -0x34) = iVar1 + 0xc;
  piVar2 = *(int **)(unaff_EBP + 0xc);
  FUN_00499da0(piVar2,iVar1 + 8,4);
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x34),4);
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x30) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x2c) = uVar3;
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x28),4);
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x24),4);
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x20) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x1c) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x18) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x14) = uVar3;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0x10) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0xc) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -8) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -4) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)(iVar1 + 0x3c) = iVar4 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7790  FUN_004c7790   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c7790(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x511904);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)operator_new(), param_1 != (int *)0x0)) {
      FUN_004c7454(param_1);
    }
    FUN_004c73ec(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c78e4  FUN_004c78e4   (323 bytes)   [unnamed]
int * __cdecl FUN_004c78e4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 ,int param_11)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5119a0);
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
    FUN_004a4fbc(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004ad6d8(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TStatic::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00511a1c;
  *(undefined ***)param_1[2] = &PTR_LAB_00511a28;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511a34;
  param_1[5] = param_10;
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffeffff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7a28  FUN_004c7a28   (308 bytes)   [unnamed]
int * __cdecl FUN_004c7a28(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5119c4);
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
    FUN_004a4fbc(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004ad87c(param_1,1,param_3,param_4,param_6);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TStatic::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00511a1c;
  *(undefined ***)param_1[2] = &PTR_LAB_00511a28;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511a34;
  param_1[5] = param_5;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffeff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7c60  FUN_004c7c60   (86 bytes)   [unnamed]
void __stdcall FUN_004c7c60(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511acc);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004c7ecc;
  puVar1 = FUN_004dd5cc(1,0,0x402af0);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b964,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7cb6  FUN_004c7cb6   (48 bytes)   [unnamed]
void __stdcall FUN_004c7cb6(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511ae0);
  OWL::TStreamableClass::_dtor(0x51b964,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7ce8  FUN_004c7ce8   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c7ce8(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511ae8);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TStatic::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00402af0,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7d50  FUN_004c7d50   (283 bytes)   [unnamed]
int * __cdecl FUN_004c7d50(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511b00);
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
    FUN_004a4fbc(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004add4c(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TStatic::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00511a1c;
  *(undefined ***)param_1[2] = &PTR_LAB_00511a28;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511a34;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7e6c  EvRegisteredMsg_4c7e6c_4c7e6c   (47 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TStatic::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_4c7e6c_4c7e6c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_004ac1c8(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x14) = uVar2;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7ecc  FUN_004c7ecc   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c7ecc(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x511b34);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004c7d50(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_004c7ce8(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

} // namespace tea
