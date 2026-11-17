// TSMerge.exe — runtime / library code "OWL_TTmpBuffer"
// 1 functions, 0x00414c74..0x00414c74. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00414c74  OWL::TTmpBuffer<char>::~TTmpBuffer   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TTmpBuffer_char::_dtor
void __cdecl OWL::TTmpBuffer_char::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x465db4);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TTmpBufferBase::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
