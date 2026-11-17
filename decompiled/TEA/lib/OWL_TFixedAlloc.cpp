// TEA.exe — runtime / library code "OWL_TFixedAlloc"
// 1 functions, 0x0049739c..0x0049739c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049739c  OWL::__TFixedAlloc::~__TFixedAlloc   (429 bytes)   [rtti:dtor destructor]
//   written in code as OWL::__TFixedAlloc::_dtor
void __cdecl OWL::__TFixedAlloc::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x507b98);
  if (param_1 != 0) {
    FUN_0048c8b0(param_1 + 0x117,0);
    FUN_0048c8b0(param_1 + 0xfe,0);
    FUN_0048c8b0(param_1 + 0xe5,0);
    FUN_0048c8b0(param_1 + 0xcc,0);
    FUN_0048c8b0(param_1 + 0xb3,0);
    FUN_0048c8b0(param_1 + 0x9a,0);
    FUN_0048c8b0(param_1 + 0x81,0);
    FUN_0048c8b0(param_1 + 0x68,0);
    FUN_0048c8b0(param_1 + 0x4f,0);
    FUN_0048c8b0(param_1 + 0x36,0);
    FUN_0048c8b0(param_1 + 0x1d,0);
    FUN_0048c8b0(param_1 + 4,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
