// TEACON.exe — runtime / library code "std_wstring"
// 1 functions, 0x004178e8..0x004178e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004178e8  std::wstring::~basic_string   (34 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::wstring::_dtor
void __cdecl std::wstring::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0041790c(param_1);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
