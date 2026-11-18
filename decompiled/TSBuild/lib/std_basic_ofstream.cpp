// TSBuild.exe — runtime / library code "std_basic_ofstream"
// 2 functions, 0x0045c140..0x0045c238. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045c140  std::basic_ofstream<char>::basic_ofstream   (174 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::basic_ofstream<char,std::char_traits<char> >'s vtable at its vptr offset (+0x4) in this
//   written in code as std::basic_ofstream_char::basic_ofstream
int * __cdecl std::basic_ofstream_char::basic_ofstream(int *self,int vbasesBuilt,LPCSTR fileName,uint param_4,uint param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4864d8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x13);
    std::basic_ios_char::basic_ios(self + 0x13);
  }
  std::basic_ostream_char::basic_ostream(self,1);
  self[1] = (int)&std::basic_ofstream_char::vftable;
  *(undefined ***)*self = &PTR_LAB_00487614;
  std::basic_filebuf_char::basic_filebuf(self + 2);
  FUN_0045b330(*self,self + 2);
  FUN_0045c1f0(self,fileName,param_4,param_5);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c238  std::basic_ofstream<char>::~basic_ofstream   (157 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ofstream_char::_dtor
void __cdecl std::basic_ofstream_char::_dtor(undefined4 *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4864fc);
  if (self != (undefined4 *)0x0) {
    self[1] = &std::basic_ofstream_char::vftable;
    *(undefined ***)*self = &PTR_LAB_00487614;
    std::basic_filebuf_char::_dtor(self + 2,2);
    std::basic_ostream_char::_dtor(self,0);
    if ((dtorFlags & 2) != 0) {
      std::basic_ios_char::_dtor(self + 0x13,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
