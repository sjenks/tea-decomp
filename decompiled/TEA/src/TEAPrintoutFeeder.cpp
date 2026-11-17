// TEA.exe — application module "TEAPrintoutFeeder"
// 10 functions, 0x0043c3a8..0x0043c6fc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043c3a8  TEAPrintoutFeeder::~TEAPrintoutFeeder   (105 bytes)   [rtti:dtor destructor]
//   written in code as TEAPrintoutFeeder::_dtor
undefined4 __cdecl TEAPrintoutFeeder::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  uVar1 = __InitExceptBlockLDTC(0x4f4e4c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &TEAPrintoutFeeder::vftable;
    uVar1 = operator_delete();
    PrintoutFeeder::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      uVar1 = operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c414  TEAPrintoutFeeder::vf1   (18 bytes)   [rtti:vtable virtual slot 1]
void __cdecl TEAPrintoutFeeder::vf1(int param_1)

{
  FUN_0042ba08(*(int *)(param_1 + 4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c428  TEAPrintoutFeeder::vf2   (18 bytes)   [rtti:vtable virtual slot 2]
int __cdecl TEAPrintoutFeeder::vf2(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042ba14(*(int *)(param_1 + 4));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c43c  TEAPrintoutFeeder::vf3   (122 bytes)   [rtti:vtable virtual slot 3]
void __cdecl TEAPrintoutFeeder::vf3(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4f4e70);
  operator_delete();
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_0043061c(piVar1,*(int *)(param_1 + 4));
    }
    *(int **)(param_1 + 8) = piVar1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c4ec  TEAPrintoutFeeder::vf4   (33 bytes)   [rtti:vtable virtual slot 4]
void __cdecl TEAPrintoutFeeder::vf4(int param_1,int param_2)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_00430730(*(int **)(param_1 + 8),param_2);
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c510  TEAPrintoutFeeder::vf5   (106 bytes)   [rtti:vtable virtual slot 5]
int __cdecl TEAPrintoutFeeder::vf5(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f4ea0);
  if (*(int **)(param_2 + 8) == (int *)0x0) {
    iVar1 = *(int *)(param_2 + 0xc);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  }
  else {
    iVar1 = FUN_00430678(*(int **)(param_2 + 8));
  }
  puVar2 = (uint *)FUN_0042baf8(*(int *)(param_2 + 4),iVar1);
  std::string::string_from_cstr(param_1,puVar2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c624  FUN_0043c624   (126 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0043c624(byte *param_1,int param_2,byte *param_3,int param_4)

{
  uint in_ECX;
  undefined4 uStack_8;
  
  uStack_8 = in_ECX;
  while( true ) {
    while ((param_2 != 0 &&
           (in_ECX = (uint)(byte)(&DAT_004f50d8)[*param_1], (&DAT_004f50d8)[*param_1] == 0))) {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    }
    while ((param_4 != 0 &&
           (uStack_8 = (uint)(byte)(&DAT_004f50d8)[*param_3] << 0x18, (&DAT_004f50d8)[*param_3] == 0
           ))) {
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    }
    if ((param_2 == 0) || (param_4 == 0)) break;
    if ((byte)in_ECX != GH_PIECE(uStack_8, 3, undefined1)) {
      return (in_ECX & 0xff) - (uint)GH_PIECE(uStack_8, 3, undefined1);
    }
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
  }
  if (param_2 != 0) {
    return 1;
  }
  if (param_4 == 0) {
    return 0;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c6a4  FUN_0043c6a4   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0043c6a4(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while (iVar2 = param_2 + -1, param_2 != 0) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = iVar2;
    if ((&DAT_004f50d8)[bVar1] != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c6d4  FUN_0043c6d4   (38 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0043c6d4(byte param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_004f50d8)[param_1] == '\0') && ((param_1 < 0x30 || (0x39 < param_1)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c6fc  FUN_0043c6fc   (383 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0043c6fc(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f523c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1da);
    param_1[0x1da] = (int)(param_1 + 0x1d7);
    param_1[0x1db] = (int)(param_1 + 0x1d8);
    param_1[1] = (int)(param_1 + 0x1d7);
    param_1[2] = (int)(param_1 + 0x1d8);
    param_1[0x1d6] = 0;
    param_1[0x1d9] = 0;
    param_1[0x1d7] = (int)&OWL::TEventHandler::vftable;
    param_1[0x1d8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1da,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  FUN_0043ce14(param_1,1,param_3,param_4,(uint *)"Save TEA&Sympathy Dictionary",param_6,
               param_7,param_8,param_9,param_10,param_11);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&TSDictionarySaveTEADialog::vftable;
  param_1[0x18] = (int)&PTR_LAB_004f5358;
  *(undefined ***)param_1[1] = &PTR_LAB_004f5374;
  *(undefined ***)param_1[2] = &PTR_LAB_004f5380;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f538c;
  param_1[0x1d4] = param_5;
  param_1[0x1d5] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
