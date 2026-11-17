// TSBuild.exe — runtime / library code "OWL_TScreenDC"
// 1 functions, 0x0041d410..0x0041d410. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041d410  OWL::TScreenDC::~TScreenDC   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TScreenDC::_dtor
void __cdecl OWL::TScreenDC::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4791e0);
  if (param_1 != (int *)0x0) {
    OWL::TWindowDC::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
