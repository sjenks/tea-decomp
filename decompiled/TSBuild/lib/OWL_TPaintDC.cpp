// TSBuild.exe — runtime / library code "OWL_TPaintDC"
// 2 functions, 0x0042ec14..0x0042ed40. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042ec14  OWL::TPaintDC::~TPaintDC   (126 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPaintDC::_dtor
void __cdecl OWL::TPaintDC::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47ca74);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &OWL::TPaintDC::vftable;
    FUN_00421ef4(param_1);
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

// ----------------------------------------------------------------------------------------------------
// 0x0042ed40  OWL::TPaintDC::vf24   (10 bytes)   [rtti:vtable virtual slot 24; function defined from vtable-slot]
void OWL::TPaintDC::vf24(char *param_1,undefined4 param_2,char param_3)

{
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  return;
}

} // namespace tea
