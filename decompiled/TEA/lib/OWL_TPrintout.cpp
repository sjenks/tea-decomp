// TEA.exe — runtime / library code "OWL_TPrintout"
// 10 functions, 0x004c6484..0x004c65f4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c6484  OWL::TPrintout::TPrintout   (117 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPrintout's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TPrintout::TPrintout(undefined4 *self,uint *param_2)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511618);
  *self = &OWL::TStreamableBase::vftable;
  *self = &OWL::TPrintout::vftable;
  uVar1 = FUN_00496d48(param_2);
  self[1] = uVar1;
  *(undefined1 *)(self + 2) = 0;
  *(undefined1 *)((int)self + 9) = 1;
  *(undefined4 *)((int)self + 10) = 0;
  *(undefined4 *)((int)self + 0xe) = 0;
  *(undefined4 *)((int)self + 0x12) = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c651c  OWL::TPrintout::~TPrintout   (102 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPrintout::_dtor
void __cdecl OWL::TPrintout::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511654);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TPrintout::vftable;
    operator_delete_array();
    OWL::TStreamableBase::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6584  OWL::TPrintout::vf1   (26 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TPrintout::vf1(int self,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(self + 10) = param_2;
  *(undefined4 *)(self + 0xe) = param_3;
  *(undefined4 *)(self + 0x12) = param_4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c65a0  OWL::TPrintout::vf2   (35 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TPrintout::vf2(undefined4 self,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5)

{
  *param_2 = 1;
  *param_3 = 0x7fffffff;
  *param_5 = 0;
  *param_4 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c65c4  OWL::TPrintout::vf3   (5 bytes)   [rtti:vtable virtual slot 3]
void __stdcall OWL::TPrintout::vf3(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c65cc  OWL::TPrintout::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
void __stdcall OWL::TPrintout::vf4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c65d4  OWL::TPrintout::vf5   (15 bytes)   [rtti:vtable virtual slot 5]
bool __cdecl OWL::TPrintout::vf5(undefined4 self,int param_2)

{
  return param_2 == 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c65e4  OWL::TPrintout::vf6   (5 bytes)   [rtti:vtable virtual slot 6]
void __stdcall OWL::TPrintout::vf6(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c65ec  OWL::TPrintout::vf7   (5 bytes)   [rtti:vtable virtual slot 7]
void __stdcall OWL::TPrintout::vf7(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c65f4  OWL::TPrintout::vf8   (5 bytes)   [rtti:vtable virtual slot 8]
void __stdcall OWL::TPrintout::vf8(void)

{
  return;
}

} // namespace tea
