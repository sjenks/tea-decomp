// TEA.exe — runtime / library code "OWL_TMenuDescr"
// 2 functions, 0x004c01f4..0x004c02cc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c01f4  OWL::TMenuDescr::~TMenuDescr   (89 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMenuDescr::_dtor
void __cdecl OWL::TMenuDescr::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ffc4);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TMenuDescr::vftable;
    OWL::TMenu::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c02cc  OWL::TMenuDescr::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TMenuDescr::vf1(int self)

{
  return *(undefined4 *)(self + 4);
}

} // namespace tea
