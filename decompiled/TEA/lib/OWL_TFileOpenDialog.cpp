// TEA.exe — runtime / library code "OWL_TFileOpenDialog"
// 1 functions, 0x004c2db8..0x004c2db8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c2db8  OWL::TFileOpenDialog::vf6   (90 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TFileOpenDialog::vf6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(code **)(param_1 + 0x60) = FUN_004b070c;
  iVar1 = FUN_0048c35c();
  if (iVar1 == 0) {
    uVar2 = FUN_0048c2ac();
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 4) = uVar2;
    uVar2 = 2;
  }
  else {
    **(undefined4 **)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x14) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 4) = 0;
    uVar2 = 1;
  }
  return uVar2;
}

} // namespace tea
