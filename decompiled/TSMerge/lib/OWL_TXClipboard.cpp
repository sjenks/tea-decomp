// TSMerge.exe — runtime / library code "OWL_TXClipboard"
// 3 functions, 0x00414eb8..0x00414fac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00414eb8  OWL::TXClipboard::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXClipboard::vf2(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x465e30);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00417b88(puVar1,param_1);
    puVar1[2] = param_1[2];
    *puVar1 = &OWL::TXOwl::vftable;
    *puVar1 = &OWL::TXClipboard::vftable;
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414f38  OWL::TXClipboard::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXClipboard::vf3(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_10 [2];
  int local_8;
  
  __InitExceptBlockLDTC(0x465e60);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  puVar2 = &LAB_00414d98;
  uVar1 = 0;
  FUN_00417b88((undefined4*)local_10,param_1);
  local_8 = param_1[2];
  local_10[0] = &OWL::TXClipboard::vftable;
  FUN_0045ed74((uint *)&DAT_00414d3c,(undefined4*)local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414fac  OWL::TXClipboard::~TXClipboard   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXClipboard::_dtor
void __cdecl OWL::TXClipboard::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x465e80);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TXOwl::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
