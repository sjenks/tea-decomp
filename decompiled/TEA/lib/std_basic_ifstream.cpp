// TEA.exe — runtime / library code "std_basic_ifstream"
// 2 functions, 0x004d1208..0x004d1300. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d1208  std::basic_ifstream<char>::basic_ifstream   (174 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_ifstream<char,std::char_traits<char> >'s vtable at its vptr offset (+0x4) in this
//   written in code as std::basic_ifstream_char::basic_ifstream
int * __cdecl std::basic_ifstream_char::basic_ifstream(int *self,int vbasesBuilt,LPCSTR fileName,uint param_4,uint param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51454c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x14);
    std::basic_ios_char::basic_ios(self + 0x14);
  }
  std::basic_istream_char::basic_istream(self,1);
  self[1] = (int)&std::basic_ifstream_char::vftable;
  *(undefined ***)*self = &PTR_LAB_0051593c;
  std::basic_filebuf_char::basic_filebuf(self + 3);
  FUN_004d0be0(*self,self + 3);
  FUN_004d12b8(self,fileName,param_4,param_5);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d1300  std::basic_ifstream<char>::~basic_ifstream   (157 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ifstream_char::_dtor
void __cdecl std::basic_ifstream_char::_dtor(undefined4 *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514570);
  if (self != (undefined4 *)0x0) {
    self[1] = &std::basic_ifstream_char::vftable;
    *(undefined ***)*self = &PTR_LAB_0051593c;
    std::basic_filebuf_char::_dtor(self + 3,2);
    std::basic_istream_char::_dtor(self,0);
    if ((dtorFlags & 2) != 0) {
      std::basic_ios_char::_dtor(self + 0x14,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
