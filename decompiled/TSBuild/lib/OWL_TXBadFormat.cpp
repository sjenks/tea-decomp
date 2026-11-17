// TSBuild.exe — runtime / library code "OWL_TXBadFormat"
// 3 functions, 0x004499c0..0x00449a84. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004499c0  OWL::TXBadFormat::~TXBadFormat   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TXBadFormat::_dtor
void __cdecl OWL::TXBadFormat::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x481e30);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TXOwl::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449a04  OWL::TXBadFormat::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXBadFormat::vf2(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x481e68);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00422cfc(puVar1,param_1);
    puVar1[2] = param_1[2];
    *puVar1 = &OWL::TXOwl::vftable;
    *puVar1 = &OWL::TXBadFormat::vftable;
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449a84  OWL::TXBadFormat::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXBadFormat::vf3(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_10 [2];
  int local_8;
  
  __InitExceptBlockLDTC(0x481e98);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  pcVar2 = FUN_00449af8;
  uVar1 = 0;
  FUN_00422cfc((undefined4*)local_10,param_1);
  local_8 = param_1[2];
  local_10[0] = &OWL::TXBadFormat::vftable;
  FUN_00471ae8((uint *)&DAT_00449964,(undefined4*)local_10,uVar1,(undefined*)pcVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

} // namespace tea
