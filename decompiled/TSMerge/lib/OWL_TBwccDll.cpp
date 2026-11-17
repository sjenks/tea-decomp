// TSMerge.exe — runtime / library code "OWL_TBwccDll"
// 1 functions, 0x0042ee70..0x0042ee70. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042ee70  OWL::TBwccDll::~TBwccDll   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TBwccDll::_dtor
void __cdecl OWL::TBwccDll::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46af9c);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TModule::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
