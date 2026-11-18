// TSMerge.exe — runtime / library code "OWL_TLocaleCache"
// 1 functions, 0x0041facc..0x0041facc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041facc  OWL::_TLocaleCache::~_TLocaleCache   (25 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::_TLocaleCache::_dtor
void __cdecl OWL::_TLocaleCache::_dtor(int self,byte dtorFlags)

{
  if ((self != 0) && ((dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
