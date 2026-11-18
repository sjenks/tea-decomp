// TSMerge.exe — runtime / library code "OWL_TMMemStack"
// 1 functions, 0x00415ef4..0x00415ef4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00415ef4  OWL::TMMemStack<TStandardAllocator>::~TMMemStack   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TMMemStack_TStandardAllocator::_dtor
void __cdecl OWL::TMMemStack_TStandardAllocator::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4661fc);
  if (self != 0) {
    FUN_004159ac(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
