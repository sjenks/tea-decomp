// TSMerge.exe — runtime / library code "OWL_TXMenu"
// 3 functions, 0x00420eb4..0x004210a4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00420eb4  OWL::TXMenu::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXMenu::vf2(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4684c8);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00417b88(puVar1,param_1);
    puVar1[2] = param_1[2];
    *puVar1 = &OWL::TXOwl::vftable;
    *puVar1 = &OWL::TXMenu::vftable;
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420f34  OWL::TXMenu::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXMenu::vf3(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_10 [2];
  int local_8;
  
  __InitExceptBlockLDTC(0x4684f8);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  puVar2 = &LAB_00420ffc;
  uVar1 = 0;
  FUN_00417b88((undefined4*)local_10,param_1);
  local_8 = param_1[2];
  local_10[0] = &OWL::TXMenu::vftable;
  FUN_0045ed74((uint *)&DAT_00420fa8,(undefined4*)local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004210a4  OWL::TXMenu::~TXMenu   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXMenu::_dtor
void __cdecl OWL::TXMenu::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46853c);
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
