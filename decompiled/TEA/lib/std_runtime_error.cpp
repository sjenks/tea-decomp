// TEA.exe — runtime / library code "std_runtime_error"
// 2 functions, 0x004dbc54..0x004dc694. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004dbc54  std::runtime_error::vf1   (11 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
undefined4 __cdecl std::runtime_error::vf1(int self)

{
  return *(undefined4 *)(self + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc694  std::runtime_error::~runtime_error   (217 bytes)   [rtti:dtor destructor]
//   written in code as std::runtime_error::_dtor
void __cdecl std::runtime_error::_dtor(undefined4 *self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516d00);
  if (self == (undefined4 *)0x0) goto LAB_004dc75d;
  *self = &std::runtime_error::vftable;
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
      if (prevRefs != 0) goto LAB_004dc73c;
    }
    operator_delete();
    self[4] = 0;
  }
LAB_004dc73c:
  std::exception::_dtor(self,0);
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004dc75d:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
