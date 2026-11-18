// TSBuild.exe — runtime / library code "OWL_TPaintDC"
// 2 functions, 0x0042ec14..0x0042ed40. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042ec14  OWL::TPaintDC::~TPaintDC   (126 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPaintDC::_dtor
void __cdecl OWL::TPaintDC::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47ca74);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TPaintDC::vftable;
    FUN_00421ef4(self);
    if ((char)self[1] != '\0') {
      EndPaint(*(HWND *)((int)self + 0x61),(PAINTSTRUCT *)((int)self + 0x21));
    }
    OWL::TDC::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ed40  OWL::TPaintDC::vf24   (10 bytes)   [rtti:vtable virtual slot 24; function defined from vtable-slot]
void OWL::TPaintDC::vf24(char *self,undefined4 param_2,char param_3)

{
  *self = *self + (char)self;
  *(char *)((int)self * 2) = *(char *)((int)self * 2) + param_3;
  return;
}

} // namespace tea
