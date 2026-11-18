// TSBuild.exe — runtime / library code "OWL_TWindowDC"
// 1 functions, 0x004393a8..0x004393a8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004393a8  OWL::TWindowDC::~TWindowDC   (132 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TWindowDC::_dtor
int * __cdecl OWL::TWindowDC::_dtor(int *self,byte dtorFlags)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  piVar1 = (int *)__InitExceptBlockLDTC(0x47e9d0);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TWindowDC::vftable;
    FUN_00421ef4(self);
    if ((char)self[1] != '\0') {
      ReleaseDC(*(HWND *)((int)self + 0x21),(HDC)*self);
    }
    *self = 0;
    OWL::TDC::_dtor(self,0);
    piVar1 = self;
    if ((dtorFlags & 1) != 0) {
      piVar1 = (int *)operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return piVar1;
}

} // namespace tea
