// TSBuild.exe — runtime / library code "OWL_TLocaleCache"
// 1 functions, 0x0042ac40..0x0042ac40. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042ac40  OWL::_TLocaleCache::~_TLocaleCache   (25 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::_TLocaleCache::_dtor
void __cdecl OWL::_TLocaleCache::_dtor(int param_1,byte param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
