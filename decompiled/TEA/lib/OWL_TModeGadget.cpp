// TEA.exe — runtime / library code "OWL_TModeGadget"
// 3 functions, 0x004989b8..0x00498b20. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004989b8  OWL::TModeGadget::TModeGadget   (105 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TModeGadget's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TModeGadget::TModeGadget(undefined4 *self,undefined4 param_2,uint *param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50827c);
  OWL::TTextGadget::TTextGadget(self,param_4,param_5,param_6,10,param_3,param_7);
  *self = &OWL::TModeGadget::vftable;
  self[0x18] = param_2;
  FUN_0048fe6c((int)self,1,1);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498a44  OWL::TModeGadget::vf4   (126 bytes)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TModeGadget::vf4(int *self,int param_2)

{
  SHORT SVar1;
  
  OWL::TGadget::vf4(self,param_2);
  SVar1 = GetKeyState(self[0x18]);
  if ((((self[0x18] == 0x91) || (self[0x18] == 0x2d)) || (self[0x18] == 0x90)) ||
     (self[0x18] == 0x14)) {
    if (((int)SVar1 & 1U) == 0) {
      (**(code **)(*self + 4))();
    }
    else {
      (**(code **)(*self + 4))();
    }
  }
  else if (((int)SVar1 & 0x80000000U) == 0) {
    (**(code **)(*self + 4))();
  }
  else {
    (**(code **)(*self + 4))();
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498b20  OWL::TModeGadget::~TModeGadget   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TModeGadget::_dtor
void __cdecl OWL::TModeGadget::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5082f4);
  if (self != (undefined4 *)0x0) {
    OWL::TTextGadget::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
