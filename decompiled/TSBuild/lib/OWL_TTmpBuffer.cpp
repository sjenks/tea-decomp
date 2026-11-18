// TSBuild.exe — runtime / library code "OWL_TTmpBuffer"
// 1 functions, 0x0041fc98..0x0041fc98. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041fc98  OWL::TTmpBuffer<char>::~TTmpBuffer   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TTmpBuffer_char::_dtor
void __cdecl OWL::TTmpBuffer_char::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x479b68);
  if (self != (undefined4 *)0x0) {
    OWL::TTmpBufferBase::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
