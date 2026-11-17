// TEA.exe — application module "FileHistory"
// 1 functions, 0x004131f8..0x004131f8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004131f8  FileHistory::~FileHistory   (76 bytes)   [rtti:dtor destructor]
//   written in code as FileHistory::_dtor
void __cdecl FileHistory::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ece74);
  if (param_1 != 0) {
    _vector_delete_ldtc_(param_1,0x10,10,1,(undefined*)std::string::_dtor);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
