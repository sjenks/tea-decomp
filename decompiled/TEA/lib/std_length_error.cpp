// TEA.exe — runtime / library code "std_length_error"
// 1 functions, 0x004dc5d4..0x004dc5d4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004dc5d4  std::length_error::~length_error   (93 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::length_error::_dtor
void __cdecl std::length_error::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516cb8);
  if (self != (undefined4 *)0x0) {
    *self = &std::length_error::vftable;
    std::logic_error::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
