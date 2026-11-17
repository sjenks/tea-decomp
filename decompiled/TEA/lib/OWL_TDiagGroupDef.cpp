// TEA.exe — runtime / library code "OWL_TDiagGroupDef"
// 2 functions, 0x0048a990..0x0048addc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048a990  OWL::TDiagGroupDef::vf0   (10 bytes)   [rtti:vtable virtual slot 0]
undefined4 __stdcall OWL::TDiagGroupDef::vf0(void)

{
  return (*(undefined4 *)&DAT_00512a1c);
}

// ----------------------------------------------------------------------------------------------------
// 0x0048addc  OWL::TDiagGroupDef::~TDiagGroupDef   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TDiagGroupDef::_dtor
void __cdecl OWL::TDiagGroupDef::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5053f8);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TDiagBase::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
