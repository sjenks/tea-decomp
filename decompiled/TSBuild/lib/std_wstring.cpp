// TSBuild.exe — runtime / library code "std_wstring"
// 1 functions, 0x0045a7ec..0x0045a7ec. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045a7ec  std::wstring::~basic_string   (34 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::wstring::_dtor
void __cdecl std::wstring::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    FUN_0045a810(self);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
