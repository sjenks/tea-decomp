// TSBuild.exe — runtime / library code "OWL_TStreamableTypes"
// 1 functions, 0x0042cfe0..0x0042cfe0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042cfe0  OWL::TStreamableTypes::~TStreamableTypes   (136 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TStreamableTypes::_dtor
void __cdecl OWL::TStreamableTypes::_dtor(int *self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c688);
  if (self != (int *)0x0) {
    iVar1 = *self;
    if (iVar1 != 0) {
      FUN_0042d068(iVar1,'\x01');
      if (*(int *)(iVar1 + 9) != 0) {
        free();
      }
      operator_delete();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
