// TSMerge.exe — runtime / library code "OWL_TRegion"
// 1 functions, 0x00424874..0x00424874. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00424874  OWL::TRegion::~TRegion   (59 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TRegion::_dtor
void __cdecl OWL::TRegion::_dtor(undefined4 *self,byte dtorFlags)

{
  BOOL ok;
  
  if (self != (undefined4 *)0x0) {
    if (*(char *)(self + 1) != '\0') {
      ok = DeleteObject((HGDIOBJ)*self);
      if (ok == 0) {
        FUN_0041cad0(0x7fde,*self);
      }
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
