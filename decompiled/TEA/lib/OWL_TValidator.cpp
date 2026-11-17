// TEA.exe — runtime / library code "OWL_TValidator"
// 9 functions, 0x004c9dc0..0x004ca124. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c9dc0  OWL::TValidator::~TValidator   (89 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TValidator::_dtor
void __cdecl OWL::TValidator::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511ed8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TValidator::vftable;
    OWL::TStreamableBase::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9e1c  OWL::TValidator::vf1   (5 bytes)   [rtti:vtable virtual slot 1]
void __stdcall OWL::TValidator::vf1(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9e24  OWL::TValidator::vf2   (7 bytes)   [rtti:vtable virtual slot 2]
undefined1 __stdcall OWL::TValidator::vf2(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9e2c  OWL::TValidator::vf3   (7 bytes)   [rtti:vtable virtual slot 3]
undefined1 __stdcall OWL::TValidator::vf3(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9e34  OWL::TValidator::vf4   (7 bytes)   [rtti:vtable virtual slot 4]
undefined4 __stdcall OWL::TValidator::vf4(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9e3c  OWL::TValidator::vf5   (7 bytes)   [rtti:vtable virtual slot 5]
undefined4 __stdcall OWL::TValidator::vf5(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9fe0  OWL::TValidator::Streamer::vf1   (36 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TValidator::Streamer::vf1(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00499ec0(param_2);
  *(short *)(iVar1 + 4) = (short)uVar2;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca004  OWL::TValidator::Streamer::vf2   (30 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TValidator::Streamer::vf2(undefined4 param_1,int *param_2)

{
  FUN_0049a2e0(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca124  OWL::TValidator::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TValidator::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
