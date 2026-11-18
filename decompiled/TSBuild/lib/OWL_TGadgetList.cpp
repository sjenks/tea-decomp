// TSBuild.exe — runtime / library code "OWL_TGadgetList"
// 8 functions, 0x00424f3c..0x00427254. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00424f3c  OWL::TGadgetList::TGadgetList   (65 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TGadgetList's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TGadgetList::TGadgetList(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47aea0);
  *self = &OWL::TGadgetList::vftable;
  self[1] = 0;
  self[2] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424fa0  OWL::TGadgetList::~TGadgetList   (119 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TGadgetList::_dtor
void __cdecl OWL::TGadgetList::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47aec4);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TGadgetList::vftable;
    puVar1 = (undefined4 *)self[1];
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)((int)puVar2 + 0x3e);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)();
      }
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425088  OWL::TGadgetList::vf1   (84 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TGadgetList::vf1(int *self,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = self + 1;
  if ((param_4 != 0) || (param_3 == 1)) {
    for (; (*piVar1 != 0 && (param_4 != *piVar1)); piVar1 = (int *)(*piVar1 + 0x3e)) {
    }
  }
  if ((param_3 == 1) && (*piVar1 != 0)) {
    piVar1 = (int *)(*piVar1 + 0x3e);
  }
  *(int *)(param_2 + 0x3e) = *piVar1;
  *piVar1 = param_2;
  self[2] = self[2] + 1;
  (**(code **)(*self + 0x10))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004250dc  OWL::TGadgetList::vf2   (142 bytes)   [rtti:vtable virtual slot 2]
void OWL::TGadgetList::vf2(int self,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5, int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_5[1] != 0) {
    piVar3 = param_4 + 1;
    if ((param_7 != 0) || (param_6 == 1)) {
      for (; (*piVar3 != 0 && (param_7 != *piVar3)); piVar3 = (int *)(*piVar3 + 0x3e)) {
      }
    }
    if ((param_6 == 1) && (*piVar3 != 0)) {
      piVar3 = (int *)(*piVar3 + 0x3e);
    }
    iVar2 = param_5[1];
    while (iVar1 = iVar2, iVar1 != 0) {
      (**(code **)(*param_5 + 0x14))();
      (**(code **)(*param_4 + 0x10))();
      self = iVar1;
      iVar2 = *(int *)(iVar1 + 0x3e);
    }
    *(int *)(self + 0x3e) = *piVar3;
    *piVar3 = param_5[1];
    param_4[2] = param_4[2] + param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042516c  OWL::TGadgetList::vf3   (94 bytes)   [rtti:vtable virtual slot 3]
int __cdecl OWL::TGadgetList::vf3(int *self,int param_2)

{
  int iVar1;
  
  if (self[1] == 0) {
    return 0;
  }
  if (param_2 == self[1]) {
    self[1] = *(int *)(self[1] + 0x3e);
  }
  else {
    for (iVar1 = self[1]; (*(int *)(iVar1 + 0x3e) != 0 && (param_2 != *(int *)(iVar1 + 0x3e)));
        iVar1 = *(int *)(iVar1 + 0x3e)) {
    }
    if (*(int *)(iVar1 + 0x3e) == 0) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(*(int *)(iVar1 + 0x3e) + 0x3e);
  }
  self[2] = self[2] + -1;
  (**(code **)(*self + 0x14))();
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004251cc  OWL::TGadgetList::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
void __stdcall OWL::TGadgetList::vf4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004251d4  OWL::TGadgetList::vf5   (5 bytes)   [rtti:vtable virtual slot 5]
void __stdcall OWL::TGadgetList::vf5(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427254  OWL::TGadgetList::vf6   (9 bytes)   [rtti:vtable virtual slot 6]
void __stdcall OWL::TGadgetList::vf6(int *self)

{
                    /* WARNING: Could not recover jumptable at 0x0042725a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*self + 0x3c))();
  return;
}

} // namespace tea
