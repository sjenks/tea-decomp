// TSMerge.exe — runtime / library code "OWL_TFileHandle"
// 1 functions, 0x0043ed84..0x0043ed84. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043ed84  OWL::TFileHandle::~TFileHandle   (32 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFileHandle::_dtor
void __cdecl OWL::TFileHandle::_dtor(undefined4 *param_1,byte param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = &OWL::TFileHandle::vftable, (param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
