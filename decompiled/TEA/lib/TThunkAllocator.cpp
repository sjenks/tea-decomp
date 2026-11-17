// TEA.exe — runtime / library code "TThunkAllocator"
// 1 functions, 0x0049af0c..0x0049af0c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049af0c  TThunkAllocator::~TThunkAllocator   (34 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as TThunkAllocator::_dtor
void __cdecl TThunkAllocator::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    HeapDestroy((HANDLE)*param_1);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
