// TEA.exe — runtime / library code "OWL_TGdiObject"
// 1 functions, 0x00494064..0x00494064. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00494064  OWL::TGdiObject::~TGdiObject   (45 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TGdiObject::_dtor
void __cdecl OWL::TGdiObject::_dtor(uint *self,byte dtorFlags)

{
  if (self != (uint *)0x0) {
    if ((char)self[1] != '\0') {
      FUN_00493eb4(*self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
