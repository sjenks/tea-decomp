// TSMerge.exe — runtime / library code "OWL_TPaintDC"
// 1 functions, 0x00423a80..0x00423a80. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00423a80  OWL::TPaintDC::~TPaintDC   (126 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPaintDC::_dtor
void __cdecl OWL::TPaintDC::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468c98);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &OWL::TPaintDC::vftable;
    FUN_00416d80(param_1);
    if ((char)param_1[1] != '\0') {
      EndPaint(*(HWND *)((int)param_1 + 0x61),(PAINTSTRUCT *)((int)param_1 + 0x21));
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
