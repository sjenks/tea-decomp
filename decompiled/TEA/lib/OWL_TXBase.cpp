// TEA.exe — runtime / library code "OWL_TXBase"
// 4 functions, 0x0048ea24..0x0048ebb8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048ea24  OWL::TXBase::~TXBase   (233 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXBase::_dtor
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl OWL::TXBase::_dtor(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5061bc);
  if (param_1 == (undefined4 *)0x0) goto LAB_0048eafc;
  *param_1 = &OWL::TXBase::vftable;
  _DAT_00506100 = _DAT_00506100 + -1;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0048ead6;
      }
      operator_delete();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
LAB_0048ead6:
    operator_delete();
  }
  std::exception::_dtor(param_1,0);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0048eafc:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048eb10  OWL::TXBase::vf2   (82 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXBase::vf2(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x5061ec);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0048e99c(puVar1,param_1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048eb64  OWL::TXBase::vf3   (84 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXBase::vf3(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_c [2];
  
  __InitExceptBlockLDTC(0x50621c);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  pcVar2 = FUN_0048e99c;
  uVar1 = 0;
  FUN_0048e99c(local_c,param_1);
  FUN_004e7cc4((uint *)&DAT_004874c8,local_c,uVar1,(undefined*)pcVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ebb8  OWL::TXBase::vf1   (41 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TXBase::vf1(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x506234);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  *in_FS_OFFSET = local_28;
  return uVar1;
}

} // namespace tea
