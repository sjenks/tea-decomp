// TSBuild.exe — runtime / library code "std_out_of_range"
// 2 functions, 0x0045a61c..0x004673e0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045a61c  std::out_of_range::out_of_range   (69 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::out_of_range's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl std::out_of_range::out_of_range(undefined4 *self,int what)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4873fc);
  std::logic_error::logic_error_416de8(self,what);
  *self = &std::out_of_range::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004673e0  std::out_of_range::~out_of_range   (93 bytes)   [rtti:dtor destructor]
//   written in code as std::out_of_range::_dtor
void __cdecl std::out_of_range::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x488a10);
  if (self != (undefined4 *)0x0) {
    *self = &std::out_of_range::vftable;
    std::logic_error::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
