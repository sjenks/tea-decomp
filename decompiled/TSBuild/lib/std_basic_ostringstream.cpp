// TSBuild.exe — runtime / library code "std_basic_ostringstream"
// 2 functions, 0x0045c504..0x0045c5a4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045c504  std::basic_ostringstream<char>::basic_ostringstream   (159 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char> >'s vtable at its vptr offset (+0x4) in this
//   written in code as std::basic_ostringstream_char::basic_ostringstream
int * __cdecl std::basic_ostringstream_char::basic_ostringstream(int *self,int vbasesBuilt,uint param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x486544);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xe);
    std::basic_ios_char::basic_ios(self + 0xe);
  }
  std::basic_ostream_char::basic_ostream(self,1);
  self[1] = (int)&std::basic_ostringstream_char::vftable;
  *(undefined ***)*self = &PTR_LAB_004875f8;
  std::basic_stringbuf_char::basic_stringbuf(self + 2,param_3 | 8);
  FUN_0045b330(*self,self + 2);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c5a4  std::basic_ostringstream<char>::~basic_ostringstream   (157 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostringstream_char::_dtor
void __cdecl std::basic_ostringstream_char::_dtor(undefined4 *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x486574);
  if (self != (undefined4 *)0x0) {
    self[1] = &std::basic_ostringstream_char::vftable;
    *(undefined ***)*self = &PTR_LAB_004875f8;
    std::basic_stringbuf_char::_dtor(self + 2,2);
    std::basic_ostream_char::_dtor(self,0);
    if ((dtorFlags & 2) != 0) {
      std::basic_ios_char::_dtor(self + 0xe,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
