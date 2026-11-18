// TSMerge.exe — runtime / library code "OWL_TValidator"
// 11 functions, 0x00449c24..0x00449f88. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00449c24  OWL::TValidator::~TValidator   (89 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TValidator::_dtor
void __cdecl OWL::TValidator::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470254);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TValidator::vftable;
    OWL::TStreamableBase::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449c80  OWL::TValidator::vf1   (5 bytes)   [rtti:vtable virtual slot 1]
void __stdcall OWL::TValidator::vf1(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449c88  OWL::TValidator::vf2   (7 bytes)   [rtti:vtable virtual slot 2]
undefined1 __stdcall OWL::TValidator::vf2(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449c90  OWL::TValidator::vf3   (7 bytes)   [rtti:vtable virtual slot 3]
undefined1 __stdcall OWL::TValidator::vf3(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449c98  OWL::TValidator::vf4   (7 bytes)   [rtti:vtable virtual slot 4]
undefined4 __stdcall OWL::TValidator::vf4(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449ca0  OWL::TValidator::vf5   (7 bytes)   [rtti:vtable virtual slot 5]
undefined4 __stdcall OWL::TValidator::vf5(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449d30  OWL::TValidator::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TValidator::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TValidator::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4702b8);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TValidator::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_00425ac0,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449d98  OWL::TValidator::TValidator   (62 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TValidator's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TValidator::TValidator(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4702d0);
  *self = &OWL::TStreamableBase::vftable;
  *self = &OWL::TValidator::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449e44  OWL::TValidator::Streamer::vf1   (36 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TValidator::Streamer::vf1(int self,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(self + 8);
  uVar2 = FUN_0042292c(param_2);
  *(short *)(iVar1 + 4) = (short)uVar2;
  return *(undefined4 *)(self + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00449e68  OWL::TValidator::Streamer::vf2   (30 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TValidator::Streamer::vf2(undefined4 self,int *param_2)

{
  FUN_00422d4c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449f88  OWL::TValidator::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TValidator::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
