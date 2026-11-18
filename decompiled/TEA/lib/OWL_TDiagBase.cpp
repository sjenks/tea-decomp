// TEA.exe — runtime / library code "OWL_TDiagBase"
// 2 functions, 0x0048a99c..0x0048aa38. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048a99c  OWL::TDiagBase::TDiagBase   (122 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TDiagBase's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TDiagBase::TDiagBase(undefined4 *self,undefined4 param_2,byte param_3,char param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5053c0);
  *self = &OWL::TDiagBase::vftable;
  *(undefined4 *)((int)self + 5) = param_2;
  *(undefined4 *)((int)self + 9) = 0;
  *(byte *)(self + 1) = param_3 & 1 | *(byte *)(self + 1) & 0xfe;
  *(byte *)(self + 1) = param_4 * '\x02' | *(byte *)(self + 1) & 1;
  FUN_0048aa64(self);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048aa38  OWL::TDiagBase::~TDiagBase   (41 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDiagBase::_dtor
void __cdecl OWL::TDiagBase::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TDiagBase::vftable;
    FUN_0048aa90((int)self);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
