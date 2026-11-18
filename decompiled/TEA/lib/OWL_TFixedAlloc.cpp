// TEA.exe — runtime / library code "OWL_TFixedAlloc"
// 1 functions, 0x0049739c..0x0049739c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049739c  OWL::__TFixedAlloc::~__TFixedAlloc   (429 bytes)   [rtti:dtor destructor]
//   written in code as OWL::__TFixedAlloc::_dtor
void __cdecl OWL::__TFixedAlloc::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507b98);
  if (self != 0) {
    FUN_0048c8b0(self + 0x117,0);
    FUN_0048c8b0(self + 0xfe,0);
    FUN_0048c8b0(self + 0xe5,0);
    FUN_0048c8b0(self + 0xcc,0);
    FUN_0048c8b0(self + 0xb3,0);
    FUN_0048c8b0(self + 0x9a,0);
    FUN_0048c8b0(self + 0x81,0);
    FUN_0048c8b0(self + 0x68,0);
    FUN_0048c8b0(self + 0x4f,0);
    FUN_0048c8b0(self + 0x36,0);
    FUN_0048c8b0(self + 0x1d,0);
    FUN_0048c8b0(self + 4,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
