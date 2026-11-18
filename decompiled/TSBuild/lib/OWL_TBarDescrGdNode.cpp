// TSBuild.exe — runtime / library code "OWL_TBarDescrGdNode"
// 1 functions, 0x004558e0..0x004558e0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004558e0  OWL::__TBarDescrGdNode::~__TBarDescrGdNode   (95 bytes)   [rtti:dtor destructor]
//   written in code as OWL::__TBarDescrGdNode::_dtor
void __cdecl OWL::__TBarDescrGdNode::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x484330);
  if (self != (int *)0x0) {
    if ((undefined4 *)*self != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*self)();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
