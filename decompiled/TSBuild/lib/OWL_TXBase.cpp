// TSBuild.exe — runtime / library code "OWL_TXBase"
// 4 functions, 0x00422d84..0x00422f18. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00422d84  OWL::TXBase::~TXBase   (233 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXBase::_dtor
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl OWL::TXBase::_dtor(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a614);
  if (param_1 == (undefined4 *)0x0) goto LAB_00422e5c;
  *param_1 = &OWL::TXBase::vftable;
  _DAT_0047a558 = _DAT_0047a558 + -1;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_00422e36;
      }
      operator_delete();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
LAB_00422e36:
    operator_delete();
  }
  std::exception::_dtor(param_1,0);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00422e5c:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422e70  OWL::TXBase::vf2   (82 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXBase::vf2(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47a644);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00422cfc(puVar1,param_1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422ec4  OWL::TXBase::vf3   (84 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXBase::vf3(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_c [2];
  
  __InitExceptBlockLDTC(0x47a674);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  pcVar2 = FUN_00422cfc;
  uVar1 = 0;
  FUN_00422cfc(local_c,param_1);
  FUN_00471ae8((uint *)&DAT_0041b820,local_c,uVar1,(undefined*)pcVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422f18  OWL::TXBase::vf1   (41 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TXBase::vf1(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a68c);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  *in_FS_OFFSET = local_28;
  return uVar1;
}

} // namespace tea
