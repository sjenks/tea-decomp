// TEA.exe — runtime / library code "std_bad_alloc"
// 2 functions, 0x004cf8dc..0x004dc41c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004cf8dc  std::bad_alloc::bad_alloc   (62 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::bad_alloc's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl std::bad_alloc::bad_alloc(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515700);
  std::exception::exception(self);
  *self = &std::bad_alloc::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc41c  std::bad_alloc::~bad_alloc   (92 bytes)   [rtti:dtor destructor]
//   written in code as std::bad_alloc::_dtor
void __cdecl std::bad_alloc::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516c40);
  if (self != (undefined4 *)0x0) {
    *self = &std::bad_alloc::vftable;
    std::exception::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
