// TSBuild.exe — runtime / library code "OWL_TErrorMode"
// 1 functions, 0x0041ae14..0x0041ae14. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041ae14  OWL::TErrorMode::~TErrorMode   (34 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TErrorMode::_dtor
void __cdecl OWL::TErrorMode::_dtor(UINT *self,byte dtorFlags)

{
  if (self != (UINT *)0x0) {
    SetErrorMode(*self);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
