// TEA.exe — runtime / library code "OWL_TGadgetList"
// 7 functions, 0x00490d0c..0x00492f74. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00490d0c  OWL::TGadgetList::~TGadgetList   (119 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TGadgetList::_dtor
void __cdecl OWL::TGadgetList::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x506af0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TGadgetList::vftable;
    puVar1 = (undefined4 *)param_1[1];
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)((int)puVar2 + 0x3e);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)();
      }
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490e0c  OWL::TGadgetList::vf1   (84 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TGadgetList::vf1(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  if ((param_4 != 0) || (param_3 == 1)) {
    for (; (*piVar1 != 0 && (param_4 != *piVar1)); piVar1 = (int *)(*piVar1 + 0x3e)) {
    }
  }
  if ((param_3 == 1) && (*piVar1 != 0)) {
    piVar1 = (int *)(*piVar1 + 0x3e);
  }
  *(int *)(param_2 + 0x3e) = *piVar1;
  *piVar1 = param_2;
  param_1[2] = param_1[2] + 1;
  (**(code **)(*param_1 + 0x10))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490e60  OWL::TGadgetList::vf2   (142 bytes)   [rtti:vtable virtual slot 2]
void OWL::TGadgetList::vf2(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5, int param_6,int param_7)

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
      param_1 = iVar1;
      iVar2 = *(int *)(iVar1 + 0x3e);
    }
    *(int *)(param_1 + 0x3e) = *piVar3;
    *piVar3 = param_5[1];
    param_4[2] = param_4[2] + param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490ef0  OWL::TGadgetList::vf3   (94 bytes)   [rtti:vtable virtual slot 3]
int __cdecl OWL::TGadgetList::vf3(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    return 0;
  }
  if (param_2 == param_1[1]) {
    param_1[1] = *(int *)(param_1[1] + 0x3e);
  }
  else {
    for (iVar1 = param_1[1]; (*(int *)(iVar1 + 0x3e) != 0 && (param_2 != *(int *)(iVar1 + 0x3e)));
        iVar1 = *(int *)(iVar1 + 0x3e)) {
    }
    if (*(int *)(iVar1 + 0x3e) == 0) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(*(int *)(iVar1 + 0x3e) + 0x3e);
  }
  param_1[2] = param_1[2] + -1;
  (**(code **)(*param_1 + 0x14))();
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490f50  OWL::TGadgetList::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
void __stdcall OWL::TGadgetList::vf4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490f58  OWL::TGadgetList::vf5   (5 bytes)   [rtti:vtable virtual slot 5]
void __stdcall OWL::TGadgetList::vf5(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00492f74  OWL::TGadgetList::vf6   (9 bytes)   [rtti:vtable virtual slot 6]
void __stdcall OWL::TGadgetList::vf6(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00492f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))();
  return;
}

} // namespace tea
