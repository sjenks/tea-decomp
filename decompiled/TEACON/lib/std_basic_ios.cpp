// TEACON.exe — runtime / library code "std_basic_ios"
// 2 functions, 0x004182a4..0x0041886c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004182a4  std::basic_ios<char>::basic_ios   (77 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_ios<char,std::char_traits<char> >'s vtable at its vptr offset (+0x0) in this
//   written in code as std::basic_ios_char::basic_ios
undefined4 * __cdecl std::basic_ios_char::basic_ios(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42ff38);
  std::ios_base::ios_base(self);
  *self = &std::basic_ios_char::vftable;
  FUN_0041830c((int)self,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041886c  std::basic_ios<char>::~basic_ios   (93 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ios_char::_dtor
void __cdecl std::basic_ios_char::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x43009c);
  if (self != (undefined4 *)0x0) {
    *self = &std::basic_ios_char::vftable;
    std::ios_base::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
