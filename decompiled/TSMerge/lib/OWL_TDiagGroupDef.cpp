// TSMerge.exe — runtime / library code "OWL_TDiagGroupDef"
// 3 functions, 0x00414644..0x00414a64. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00414644  OWL::TDiagGroupDef::TDiagGroupDef   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TDiagGroupDef's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TDiagGroupDef::TDiagGroupDef(undefined4 *self,undefined4 param_2,byte param_3,char param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465d24);
  OWL::TDiagBase::TDiagBase(self,param_2,param_3,param_4);
  *self = &OWL::TDiagGroupDef::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004146b4  OWL::TDiagGroupDef::vf0   (10 bytes)   [rtti:vtable virtual slot 0]
undefined4 __stdcall OWL::TDiagGroupDef::vf0(void)

{
  return (*(undefined4 *)&DAT_00470a60);
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a64  OWL::TDiagGroupDef::~TDiagGroupDef   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TDiagGroupDef::_dtor
void __cdecl OWL::TDiagGroupDef::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465d84);
  if (self != (undefined4 *)0x0) {
    OWL::TDiagBase::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
