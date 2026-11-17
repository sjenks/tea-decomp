// TEA.exe — runtime / library code "OWL_TWindowDC"
// 1 functions, 0x004a86dc..0x004a86dc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a86dc  OWL::TWindowDC::~TWindowDC   (132 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TWindowDC::_dtor
int * __cdecl OWL::TWindowDC::_dtor(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  piVar1 = (int *)__InitExceptBlockLDTC(0x50b438);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &OWL::TWindowDC::vftable;
    FUN_0048db40(param_1);
    if ((char)param_1[1] != '\0') {
      ReleaseDC(*(HWND *)((int)param_1 + 0x21),(HDC)*param_1);
    }
    *param_1 = 0;
    OWL::TDC::_dtor(param_1,0);
    piVar1 = param_1;
    if ((param_2 & 1) != 0) {
      piVar1 = (int *)operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return piVar1;
}

} // namespace tea
