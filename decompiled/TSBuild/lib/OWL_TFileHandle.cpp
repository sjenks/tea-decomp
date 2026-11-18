// TSBuild.exe — runtime / library code "OWL_TFileHandle"
// 1 functions, 0x00449f18..0x00449f18. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00449f18  OWL::TFileHandle::~TFileHandle   (32 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFileHandle::_dtor
void __cdecl OWL::TFileHandle::_dtor(undefined4 *self,byte dtorFlags)

{
  if ((self != (undefined4 *)0x0) && (*self = &OWL::TFileHandle::vftable, (dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
