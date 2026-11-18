// TSBuild.exe — runtime / library code "std_exception"
// 2 functions, 0x00462e84..0x004671a8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00462e84  std::exception::exception   (48 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::exception's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl std::exception::exception(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4874ec);
  *self = &std::exception::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004671a8  std::exception::~exception   (32 bytes)   [rtti:dtor destructor]
//   written in code as std::exception::_dtor
void __cdecl std::exception::_dtor(undefined4 *self,byte dtorFlags)

{
  if ((self != (undefined4 *)0x0) && (*self = &std::exception::vftable, (dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
