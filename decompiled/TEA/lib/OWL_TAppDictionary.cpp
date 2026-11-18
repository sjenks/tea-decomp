// TEA.exe — runtime / library code "OWL_TAppDictionary"
// 1 functions, 0x00487d78..0x00487d78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00487d78  OWL::TAppDictionary::~TAppDictionary   (102 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAppDictionary::_dtor
void __cdecl OWL::TAppDictionary::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5047bc);
  if (self != (int *)0x0) {
    FUN_00487eac(self);
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
