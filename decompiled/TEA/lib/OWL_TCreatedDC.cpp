// TEA.exe — runtime / library code "OWL_TCreatedDC"
// 1 functions, 0x0048d3a4..0x0048d3a4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048d3a4  OWL::TCreatedDC::~TCreatedDC   (126 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCreatedDC::_dtor
void __cdecl OWL::TCreatedDC::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x505d40);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &OWL::TCreatedDC::vftable;
    FUN_0048db40(param_1);
    if (((char)param_1[1] != '\0') && (*param_1 != 0)) {
      DeleteDC((HDC)*param_1);
    }
    OWL::TDC::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
