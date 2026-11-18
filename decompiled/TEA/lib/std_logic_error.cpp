// TEA.exe — runtime / library code "std_logic_error"
// 1 functions, 0x004dc478..0x004dc478. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004dc478  std::logic_error::~logic_error   (217 bytes)   [rtti:dtor destructor]
//   written in code as std::logic_error::_dtor
void __cdecl std::logic_error::_dtor(undefined4 *self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516c64);
  if (self == (undefined4 *)0x0) goto LAB_004dc541;
  *self = &std::logic_error::vftable;
  if (self[4] != 0) {
    if (*(int *)(self[4] + -0xc) != -1) {
      strRep = (int *)(self[4] + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004dc520;
    }
    operator_delete();
    self[4] = 0;
  }
LAB_004dc520:
  std::exception::_dtor(self,0);
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004dc541:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
