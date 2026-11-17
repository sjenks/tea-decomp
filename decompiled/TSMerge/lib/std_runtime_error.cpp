// TSMerge.exe — runtime / library code "std_runtime_error"
// 2 functions, 0x004554f0..0x00455890. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004554f0  std::runtime_error::vf1   (11 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
undefined4 __cdecl std::runtime_error::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x00455890  std::runtime_error::~runtime_error   (217 bytes)   [rtti:dtor destructor]
//   written in code as std::runtime_error::_dtor
void __cdecl std::runtime_error::_dtor(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474048);
  if (param_1 == (undefined4 *)0x0) goto LAB_00455959;
  *param_1 = &std::runtime_error::vftable;
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
      if (iVar1 != 0) goto LAB_00455938;
    }
    operator_delete();
    param_1[4] = 0;
  }
LAB_00455938:
  std::exception::_dtor(param_1,0);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00455959:
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
