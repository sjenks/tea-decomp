// TEA.exe — runtime / library code "OWL_TNewStreamer"
// 1 functions, 0x00486d34..0x00486d34. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00486d34  OWL::TNewStreamer::vf0   (47 bytes)   [rtti:vtable virtual slot 0; function defined from vtable-slot]
void __cdecl OWL::TNewStreamer::vf0(int self)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)(self + 4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  puVar3 = FUN_004dd5cc((int)piVar1,iVar2,0x4027f0);
  FUN_004dd6dc((int)puVar3);
  return;
}

} // namespace tea
