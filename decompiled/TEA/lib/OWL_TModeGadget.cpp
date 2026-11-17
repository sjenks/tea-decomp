// TEA.exe — runtime / library code "OWL_TModeGadget"
// 2 functions, 0x00498a44..0x00498b20. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00498a44  OWL::TModeGadget::vf4   (126 bytes)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TModeGadget::vf4(int *param_1,int param_2)

{
  SHORT SVar1;
  
  OWL::TGadget::vf4(param_1,param_2);
  SVar1 = GetKeyState(param_1[0x18]);
  if ((((param_1[0x18] == 0x91) || (param_1[0x18] == 0x2d)) || (param_1[0x18] == 0x90)) ||
     (param_1[0x18] == 0x14)) {
    if (((int)SVar1 & 1U) == 0) {
      (**(code **)(*param_1 + 4))();
    }
    else {
      (**(code **)(*param_1 + 4))();
    }
  }
  else if (((int)SVar1 & 0x80000000U) == 0) {
    (**(code **)(*param_1 + 4))();
  }
  else {
    (**(code **)(*param_1 + 4))();
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498b20  OWL::TModeGadget::~TModeGadget   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TModeGadget::_dtor
void __cdecl OWL::TModeGadget::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5082f4);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TTextGadget::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
