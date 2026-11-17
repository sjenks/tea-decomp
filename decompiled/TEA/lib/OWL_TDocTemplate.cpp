// TEA.exe — runtime / library code "OWL_TDocTemplate"
// 1 functions, 0x004b51bc..0x004b51bc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b51bc  OWL::TDocTemplate::~TDocTemplate   (149 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDocTemplate::_dtor
void __cdecl OWL::TDocTemplate::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50dce8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TDocTemplate::vftable;
    param_1[3] = &PTR_LAB_0050dd2c;
    if ((*(byte *)((int)param_1 + 0x16) & 0x80) != 0) {
      operator_delete();
      param_1[2] = 0;
    }
    operator_delete_array();
    OWL::TStreamableBase::_dtor(param_1 + 3,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
