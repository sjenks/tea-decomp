// TEA.exe — runtime / library code "OWL_TAPointer"
// 2 functions, 0x004934a4..0x004b50e4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004934a4  OWL::TAPointer<OWL::TRect>::~TAPointer   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAPointer_OWL_TRect::_dtor
void __cdecl OWL::TAPointer_OWL_TRect::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      *self = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b50e4  OWL::TAPointer<OWL::TDocTemplate *>::~TAPointer   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAPointer_OWL_TDocTemplate_ptr::_dtor
void __cdecl OWL::TAPointer_OWL_TDocTemplate_ptr::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      *self = 0;
    }
  }
  return;
}

} // namespace tea
