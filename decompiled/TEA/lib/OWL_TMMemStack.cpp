// TEA.exe — runtime / library code "OWL_TMMemStack"
// 1 functions, 0x0048cdf8..0x0048cdf8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048cdf8  OWL::TMMemStack<TStandardAllocator>::~TMMemStack   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TMMemStack_TStandardAllocator::_dtor
void __cdecl OWL::TMMemStack_TStandardAllocator::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x505b28);
  if (param_1 != 0) {
    FUN_0048c8b0(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
