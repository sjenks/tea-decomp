// TEA.exe — runtime / library code "OWL_TDvOpenSaveData"
// 1 functions, 0x004b4d3c..0x004b4d3c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b4d3c  OWL::TDvOpenSaveData::~TDvOpenSaveData   (66 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDvOpenSaveData::_dtor
void __cdecl OWL::TDvOpenSaveData::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50d9a8);
  if (self != 0) {
    OWL::TOpenSaveDialog::TData::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
