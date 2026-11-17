// TEA.exe — runtime / library code "OWL_TPrintout"
// 9 functions, 0x004c651c..0x004c65f4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c651c  OWL::TPrintout::~TPrintout   (102 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPrintout::_dtor
void __cdecl OWL::TPrintout::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511654);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TPrintout::vftable;
    operator_delete_array();
    OWL::TStreamableBase::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6584  OWL::TPrintout::vf1   (26 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TPrintout::vf1(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 10) = param_2;
  *(undefined4 *)(param_1 + 0xe) = param_3;
  *(undefined4 *)(param_1 + 0x12) = param_4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c65a0  OWL::TPrintout::vf2   (35 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TPrintout::vf2(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5)

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
bool __cdecl OWL::TPrintout::vf5(undefined4 param_1,int param_2)

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
