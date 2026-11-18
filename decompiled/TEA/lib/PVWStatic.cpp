// TEA.exe — runtime / library code "PVWStatic"
// 2 functions, 0x004c7b84..0x004c7ba4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c7b84  PVWStatic::GetClassName   (31 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from PVWStatic's OWL::TWindow subobject vtable at 0x004f04c8 (through the this-adjusting thunk at 0x004225ef); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TStatic::vf11 [rtti:vtable]
char * __cdecl PVWStatic::GetClassName(int *self)

{
  if (*(char *)(*(int *)(*self + 0x6c) + 0x4d) != '\0') {
    return "BorStatic";
  }
  return "STATIC";
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7ba4  PVWStatic::Transfer   (56 bytes)   [rtti:vtable virtual slot 22]
//   override of OWL::TWindow vtable slot 22, from PVWStatic's OWL::TWindow subobject vtable at 0x004f04c8 (through the this-adjusting thunk at 0x00422602); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TStatic::vf10 [rtti:vtable]
int __cdecl PVWStatic::Transfer(int *self,LPSTR string_,int param_3)

{
  if (param_3 == 0) {
    GetWindowTextA(*(HWND *)(*self + 0xc),string_,self[5]);
  }
  else if (param_3 == 1) {
    SetWindowTextA(*(HWND *)(*self + 0xc),string_);
  }
  return self[5];
}

} // namespace tea
