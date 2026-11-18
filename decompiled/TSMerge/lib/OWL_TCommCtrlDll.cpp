// TSMerge.exe — runtime / library code "OWL_TCommCtrlDll"
// 2 functions, 0x00410554..0x004107b8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00410554  OWL::TCommCtrlDll::TCommCtrlDll   (149 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TCommCtrlDll's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TCommCtrlDll::TCommCtrlDll(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_34;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x464d54);
  ehContext = 8;
  OWL::TModule::TModule(self,(uint *)"COMCTL32.DLL",'\x01','\x01','\0');
  ehDtorCount = ehDtorCount + 2;
  *self = &OWL::TCommCtrlDll::vftable;
  *(undefined4 *)((int)self + 0xd) = 0;
  FUN_0041060c((int)self);
  memset(&local_3c,0,0x14);
  local_3c = 0x14;
  FUN_0041063c((int)self,(int)&local_3c);
  *(uint *)((int)self + 0xd) = CONCAT22(local_38,local_34);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004107b8  OWL::TCommCtrlDll::~TCommCtrlDll   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TCommCtrlDll::_dtor
void __cdecl OWL::TCommCtrlDll::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x464d8c);
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
