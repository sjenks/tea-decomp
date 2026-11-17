// TEA.exe — runtime / library code "OWL_TXOwl"
// 4 functions, 0x0048ee7c..0x0048ef70. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048ee7c  OWL::TXOwl::~TXOwl   (93 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXOwl::_dtor
void __cdecl OWL::TXOwl::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x506364);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TXOwl::vftable;
    OWL::TXBase::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048eedc  OWL::TXOwl::vf4   (29 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TXOwl::vf4(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048eefc  OWL::TXOwl::vf2   (113 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXOwl::vf2(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x506388);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0048e99c(puVar1,param_1);
    puVar1[2] = param_1[2];
    *puVar1 = &OWL::TXOwl::vftable;
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ef70  OWL::TXOwl::vf3   (105 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXOwl::vf3(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_10 [2];
  int local_8;
  
  __InitExceptBlockLDTC(0x5063b8);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  pcVar2 = FUN_0048efdc;
  uVar1 = 0;
  FUN_0048e99c((undefined4*)local_10,param_1);
  local_8 = param_1[2];
  local_10[0] = &OWL::TXOwl::vftable;
  FUN_004e7cc4((uint *)&DAT_00487430,(undefined4*)local_10,uVar1,(undefined*)pcVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

} // namespace tea
