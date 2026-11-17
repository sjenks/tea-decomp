// TEA.exe — runtime / library code "OWL_TMenuDescr"
// 2 functions, 0x004c01f4..0x004c02cc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c01f4  OWL::TMenuDescr::~TMenuDescr   (89 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMenuDescr::_dtor
void __cdecl OWL::TMenuDescr::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ffc4);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TMenuDescr::vftable;
    OWL::TMenu::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c02cc  OWL::TMenuDescr::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TMenuDescr::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

} // namespace tea
