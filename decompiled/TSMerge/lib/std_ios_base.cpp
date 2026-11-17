// TSMerge.exe — runtime / library code "std_ios_base"
// 4 functions, 0x0045347c..0x004536e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045347c  std::ios_base::failure::~failure   (217 bytes)   [rtti:dtor destructor]
//   written in code as std::ios_base::failure::_dtor
void __cdecl std::ios_base::failure::_dtor(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x473250);
  if (param_1 == (undefined4 *)0x0) goto LAB_00453545;
  *param_1 = &std::ios_base::failure::vftable;
  if (param_1[4] != 0) {
    if (*(int *)(param_1[4] + -0xc) != -1) {
      piVar2 = (int *)(param_1[4] + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00453524;
    }
    operator_delete();
    param_1[4] = 0;
  }
LAB_00453524:
  std::exception::_dtor(param_1,0);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00453545:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453558  std::ios_base::failure::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl std::ios_base::failure::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x00453614  std::ios_base::Init::~Init   (68 bytes)   [rtti:dtor destructor]
//   written in code as std::ios_base::Init::_dtor
void __cdecl std::ios_base::Init::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_004775c0 = DAT_004775c0 + -1;
    if (DAT_004775c0 == 0) {
      FUN_0044f200((int *)&DAT_004774f8);
      FUN_0044f200(&DAT_00477538);
      FUN_0044f200(&DAT_00477578);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004536e8  std::ios_base::~ios_base   (225 bytes)   [rtti:dtor destructor]
//   written in code as std::ios_base::_dtor
void __cdecl std::ios_base::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4732d8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &std::ios_base::vftable;
    while (param_1[6] != 0) {
      param_1[6] = param_1[6] + -1;
      (**(code **)(param_1[8] + 4 + param_1[6] * 8))();
    }
    operator_delete_array();
    operator_delete_array();
    puVar1 = (undefined4 *)param_1[4];
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

} // namespace tea
