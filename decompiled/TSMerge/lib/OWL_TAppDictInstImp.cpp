// TSMerge.exe — runtime / library code "OWL_TAppDictInstImp"
// 7 functions, 0x00411be0..0x00411c60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00411be0  OWL::TAppDictInstImp::~TAppDictInstImp   (55 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAppDictInstImp::_dtor
void __cdecl OWL::TAppDictInstImp::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465248);
  if ((self != 0) && ((dtorFlags & 1) != 0)) {
    operator_delete();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c18  OWL::TAppDictInstImp::vf1   (14 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TAppDictInstImp::vf1(int self,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(self + 8) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c28  OWL::TAppDictInstImp::vf2   (13 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TAppDictInstImp::vf2(int self)

{
  *(undefined4 *)(self + 8) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c38  OWL::TAppDictInstImp::vf3   (11 bytes)   [rtti:vtable virtual slot 3]
int __cdecl OWL::TAppDictInstImp::vf3(int self)

{
  return self + 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c44  OWL::TAppDictInstImp::vf4   (11 bytes)   [rtti:vtable virtual slot 4]
int __cdecl OWL::TAppDictInstImp::vf4(int self)

{
  return self + 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c50  OWL::TAppDictInstImp::vf5   (16 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TAppDictInstImp::vf5(undefined4 self,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411c60  OWL::TAppDictInstImp::vf6   (23 bytes)   [rtti:vtable virtual slot 6]
bool __cdecl OWL::TAppDictInstImp::vf6(int self)

{
  return *(int *)(self + 8) != 0;
}

} // namespace tea
