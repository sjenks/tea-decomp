// TEA.exe — runtime / library code "std_basic_ostream"
// 3 functions, 0x004d0b18..0x004d145c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d0b18  std::basic_ostream<char>::basic_ostream   (95 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_ostream<char,std::char_traits<char> >'s vtable at its vptr offset (+0x4) in this
//   written in code as std::basic_ostream_char::basic_ostream
undefined4 * __cdecl std::basic_ostream_char::basic_ostream(undefined4 *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5143a0);
  if (vbasesBuilt == 0) {
    *self = self + 2;
    std::basic_ios_char::basic_ios(self + 2);
  }
  self[1] = &std::basic_ostream_char::vftable;
  *(undefined ***)*self = &PTR_LAB_00515968;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d109c  std::basic_ostream<char>::~basic_ostream   (118 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostream_char::_dtor
void __cdecl std::basic_ostream_char::_dtor(undefined4 *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5144e0);
  if (self != (undefined4 *)0x0) {
    self[1] = &std::basic_ostream_char::vftable;
    *(undefined ***)*self = &PTR_LAB_00515968;
    if ((dtorFlags & 2) != 0) {
      std::basic_ios_char::_dtor(self + 2,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d145c  std::basic_ostream<char>::basic_ostream_4d145c   (166 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_ostream<char,std::char_traits<char> >'s vtable at its vptr offset (+0x4) in this
//   written in code as std::basic_ostream_char::basic_ostream_4d145c
int * __cdecl std::basic_ostream_char::basic_ostream_4d145c(int *self,int vbasesBuilt,int param_3)

{
  uint uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5145b8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 2);
    std::basic_ios_char::basic_ios(self + 2);
  }
  self[1] = (int)&std::basic_ostream_char::vftable;
  *(undefined ***)*self = &PTR_LAB_00515968;
  if (param_3 == 0) {
    FUN_004d0be0(*self,0);
  }
  else {
    uVar1 = FUN_004d1450(param_3);
    if ((uVar1 & 8) == 0) {
      FUN_004d0be0(*self,0);
    }
    else {
      FUN_004d0be0(*self,param_3);
    }
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
