// TEA.exe — application module "PrintPreviewPrintout"
// 1 functions, 0x00404548..0x00404548. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00404548  PrintPreviewPrintout::~PrintPreviewPrintout   (93 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as PrintPreviewPrintout::_dtor
void __cdecl PrintPreviewPrintout::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ead18);
  if (self != (undefined4 *)0x0) {
    *self = &PrintPreviewPrintout::vftable;
    OWL::TPrintout::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
