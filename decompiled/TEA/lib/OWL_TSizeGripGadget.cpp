// TEA.exe — runtime / library code "OWL_TSizeGripGadget"
// 2 functions, 0x00490b68..0x00490c60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00490b68  OWL::TSizeGripGadget::vf12   (150 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TSizeGripGadget::vf12(int param_1,undefined4 *param_2)

{
  tagRECT local_28;
  undefined1 local_15;
  int local_14;
  int local_10 [2];
  int local_8;
  
  local_8 = 0;
  local_10[1] = 0;
  local_10[0] = 0;
  local_14 = 0;
  FUN_004905e8(param_1,local_10 + 2,local_10 + 1,local_10,&local_14);
  local_28.left = local_8;
  local_28.top = local_10[0];
  local_28.right = (*(int *)(param_1 + 0x12) - *(int *)(param_1 + 10)) + 1;
  local_28.bottom = (*(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe)) + 1;
  FUN_004a1e48(&local_15);
  FUN_004a1e70(&local_15,param_2,&local_28,3,8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490c60  OWL::TSizeGripGadget::~TSizeGripGadget   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TSizeGripGadget::_dtor
void __cdecl OWL::TSizeGripGadget::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x506ab4);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TGadget::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
