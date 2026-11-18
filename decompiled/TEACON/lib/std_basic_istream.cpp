// TEACON.exe — runtime / library code "std_basic_istream"
// 3 functions, 0x004187f4..0x00418d8c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004187f4  std::basic_istream<char>::~basic_istream   (118 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_istream_char::_dtor
void __cdecl std::basic_istream_char::_dtor(undefined4 *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430078);
  if (self != (undefined4 *)0x0) {
    self[1] = &std::basic_istream_char::vftable;
    *(undefined ***)*self = &PTR_LAB_00430b1c;
    if ((dtorFlags & 2) != 0) {
      std::basic_ios_char::_dtor(self + 3,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004188cc  std::basic_istream<char>::basic_istream   (175 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_istream<char,std::char_traits<char> >'s vtable at its vptr offset (+0x4) in this
//   written in code as std::basic_istream_char::basic_istream
int * __cdecl std::basic_istream_char::basic_istream(int *self,int vbasesBuilt,int param_3)

{
  uint uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4300c0);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 3);
    std::basic_ios_char::basic_ios(self + 3);
  }
  self[1] = (int)&std::basic_istream_char::vftable;
  *(undefined ***)*self = &PTR_LAB_00430b1c;
  self[2] = 0;
  if (param_3 == 0) {
    FUN_0041830c(*self,0);
  }
  else {
    uVar1 = FUN_0041897c(param_3);
    if ((uVar1 & 4) == 0) {
      FUN_0041830c(*self,0);
    }
    else {
      FUN_0041830c(*self,param_3);
    }
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418d8c  std::basic_istream<char>::sentry::~sentry   (25 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_istream_char::sentry::_dtor
void __cdecl std::basic_istream_char::sentry::_dtor(int self,byte dtorFlags)

{
  if ((self != 0) && ((dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
