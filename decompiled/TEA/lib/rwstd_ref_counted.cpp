// TEA.exe — runtime / library code "rwstd_ref_counted"
// 2 functions, 0x004d8180..0x004dab1c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d8180  __rwstd::ref_counted::ref_counted   (58 bytes)   [rtti:vtable-store constructor]
//   constructor: stores __rwstd::ref_counted's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl __rwstd::ref_counted::ref_counted(undefined4 *self,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515838);
  *self = &__rwstd::ref_counted::vftable;
  self[1] = param_2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dab1c  __rwstd::ref_counted::~ref_counted   (32 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::ref_counted::_dtor
void __cdecl __rwstd::ref_counted::_dtor(undefined4 *self,byte dtorFlags)

{
  if ((self != (undefined4 *)0x0) && (*self = &__rwstd::ref_counted::vftable, (dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
