// TSBuild.exe — runtime / library code "OWL_TCtl3dDll"
// 1 functions, 0x0043a048..0x0043a048. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043a048  OWL::TCtl3dDll::~TCtl3dDll   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCtl3dDll::_dtor
void __cdecl OWL::TCtl3dDll::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47ed80);
  if (self != (undefined4 *)0x0) {
    OWL::TModule::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
