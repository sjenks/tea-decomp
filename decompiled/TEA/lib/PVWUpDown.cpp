// TEA.exe — runtime / library code "PVWUpDown"
// 2 functions, 0x004a20b0..0x004a20c4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a20b0  PVWUpDown::GetClassName   (20 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from PVWUpDown's OWL::TWindow subobject vtable at 0x004f03e4 (through the this-adjusting thunk at 0x00422573); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TUpDown::vf9 [rtti:vtable]
char * __cdecl PVWUpDown::GetClassName(int self)

{
  *(uint *)(self + 0x10) = *(uint *)(self + 0x10) | 0x8000;
  return "msctls_updown32";
}

// ----------------------------------------------------------------------------------------------------
// 0x004a20c4  PVWUpDown::PerformCreate   (113 bytes)   [rtti:vtable virtual slot 5]
//   override of OWL::TWindow vtable slot 5, from PVWUpDown's OWL::TWindow subobject vtable at 0x004f03e4 (through the this-adjusting thunk at 0x00422599); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TUpDown::vf10 [rtti:vtable]
void __cdecl PVWUpDown::PerformCreate(int *self)

{
  undefined4 uVar1;
  
  FUN_00487178();
  uVar1 = FUN_00486ff4();
  *(undefined4 *)(*self + 0xc) = uVar1;
  return;
}

} // namespace tea
