// TEA.exe — runtime / library code "OWL_TSizeGripGadget"
// 3 functions, 0x00490ab0..0x00490c60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00490ab0  OWL::TSizeGripGadget::TSizeGripGadget   (145 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TSizeGripGadget's vtable at its vptr offset (+0x0) in this
int * __cdecl OWL::TSizeGripGadget::TSizeGripGadget(int *self,undefined4 param_2)

{
  int metric;
  int metric2;
  int *piVar3;
  undefined4 *sehChainHead;
  undefined1 uVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506980);
  uVar4 = 1;
  metric = GetSystemMetrics(DAT_00509e68);
  metric2 = GetSystemMetrics(DAT_00509e60);
  if (metric2 < metric) {
    piVar3 = &DAT_00509e68;
  }
  else {
    piVar3 = &DAT_00509e60;
  }
  metric = GetSystemMetrics(*piVar3);
  OWL::TSeparatorGadget::TSeparatorGadget(self,metric,param_2,uVar4);
  *self = (int)&OWL::TSizeGripGadget::vftable;
  (**(code **)(*self + 4))();
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490b68  OWL::TSizeGripGadget::vf12   (150 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TSizeGripGadget::vf12(int self,undefined4 *param_2)

{
  tagRECT rect;
  undefined1 local_15;
  int local_14;
  int local_10 [2];
  int local_8;
  
  local_8 = 0;
  local_10[1] = 0;
  local_10[0] = 0;
  local_14 = 0;
  FUN_004905e8(self,local_10 + 2,local_10 + 1,local_10,&local_14);
  rect.left = local_8;
  rect.top = local_10[0];
  rect.right = (*(int *)(self + 0x12) - *(int *)(self + 10)) + 1;
  rect.bottom = (*(int *)(self + 0x16) - *(int *)(self + 0xe)) + 1;
  FUN_004a1e48(&local_15);
  FUN_004a1e70(&local_15,param_2,&rect,3,8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490c60  OWL::TSizeGripGadget::~TSizeGripGadget   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TSizeGripGadget::_dtor
void __cdecl OWL::TSizeGripGadget::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506ab4);
  if (self != (undefined4 *)0x0) {
    OWL::TGadget::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
