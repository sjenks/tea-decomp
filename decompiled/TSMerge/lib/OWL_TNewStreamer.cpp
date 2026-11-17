// TSMerge.exe — runtime / library code "OWL_TNewStreamer"
// 1 functions, 0x00410058..0x00410058. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00410058  OWL::TNewStreamer::vf0   (47 bytes)   [rtti:vtable virtual slot 0; function defined from vtable-slot]
void __cdecl OWL::TNewStreamer::vf0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  puVar3 = FUN_0045666c((int)piVar1,iVar2,0x404628);
  FUN_0045677c((int)puVar3);
  return;
}

} // namespace tea
