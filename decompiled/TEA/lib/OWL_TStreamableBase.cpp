// TEA.exe — runtime / library code "OWL_TStreamableBase"
// 1 functions, 0x00489c54..0x00489c54. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00489c54  OWL::TStreamableBase::~TStreamableBase   (32 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TStreamableBase::_dtor
void __cdecl OWL::TStreamableBase::_dtor(undefined4 *self,byte dtorFlags)

{
  if ((self != (undefined4 *)0x0) && (*self = &OWL::TStreamableBase::vftable, (dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
