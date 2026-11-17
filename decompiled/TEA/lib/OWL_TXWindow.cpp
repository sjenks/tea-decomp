// TEA.exe — runtime / library code "OWL_TXWindow"
// 4 functions, 0x004a8460..0x004a85d4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a8460  OWL::TXWindow::vf4   (28 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TXWindow::vf4(int param_1,int *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  OWL::TXOwl::vf4(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a847c  OWL::TXWindow::vf2   (82 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXWindow::vf2(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x50b338);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004a83f4(puVar1,param_1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a84d0  OWL::TXWindow::vf3   (84 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXWindow::vf3(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_14 [4];
  
  __InitExceptBlockLDTC(0x50b368);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  pcVar2 = FUN_004a83f4;
  uVar1 = 0;
  FUN_004a83f4(local_14,param_1);
  FUN_004e7cc4((uint *)&DAT_004a8524,local_14,uVar1,(undefined*)pcVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a85d4  OWL::TXWindow::~TXWindow   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXWindow::_dtor
void __cdecl OWL::TXWindow::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50b3ac);
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
