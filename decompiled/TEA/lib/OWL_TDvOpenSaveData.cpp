// TEA.exe — runtime / library code "OWL_TDvOpenSaveData"
// 1 functions, 0x004b4d3c..0x004b4d3c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b4d3c  OWL::TDvOpenSaveData::~TDvOpenSaveData   (66 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDvOpenSaveData::_dtor
void __cdecl OWL::TDvOpenSaveData::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50d9a8);
  if (param_1 != 0) {
    OWL::TOpenSaveDialog::TData::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
