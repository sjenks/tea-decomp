// TSBuild.exe — runtime / library code "OWL_TView"
// 11 functions, 0x0042f65c..0x00455724. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042f65c  OWL::TView::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TView::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f668  OWL::TView::vf2   (11 bytes)   [rtti:vtable virtual slot 2]
undefined4 __cdecl OWL::TView::vf2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f674  OWL::TView::vf6   (10 bytes)   [rtti:vtable virtual slot 6]
undefined4 __stdcall OWL::TView::vf6(void)

{
  return 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f680  OWL::TView::vf11   (7 bytes)   [rtti:vtable virtual slot 11]
undefined4 __stdcall OWL::TView::vf11(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004554d4  OWL::TView::~TView   (298 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TView::_dtor
void __cdecl OWL::TView::_dtor(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  
  __InitExceptBlockLDTC(0x4841e8);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = &OWL::TView::vftable;
    *(undefined ***)*param_1 = &PTR_FUN_00484288;
    *(undefined ***)param_1[1] = &PTR_LAB_00484294;
    if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[7])();
    }
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])();
    }
    uVar1 = FUN_00444fe0((int *)param_1[3],(int)param_1);
    if (((char)uVar1 != '\0') && ((undefined4 *)param_1[3] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[3])();
    }
    if ((param_2 & 2) != 0) {
      OWL::TStreamableBase::_dtor(param_1 + 10,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455600  OWL::TView::vf9   (32 bytes)   [rtti:vtable virtual slot 9]
undefined * __cdecl OWL::TView::vf9(undefined4 param_1,int param_2)

{
  if (param_2 < 1) {
    return (undefined *)0x0;
  }
  if (param_2 < 3) {
    return (&PTR_FUN_00484178)[param_2];
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455620  OWL::TView::vf8   (32 bytes)   [rtti:vtable virtual slot 8]
undefined * __cdecl OWL::TView::vf8(undefined4 param_1,int param_2)

{
  if (param_2 < 1) {
    return (undefined *)0x0;
  }
  if (param_2 < 3) {
    return (&PTR_s_View_Name_00484180)[param_2];
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455640  OWL::TView::vf7   (47 bytes)   [rtti:vtable virtual slot 7]
int __cdecl OWL::TView::vf7(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00467724((&PTR_s_View_Class_0048417c)[iVar2],param_2);
    if (iVar1 == 0) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455670  OWL::TView::vf10   (138 bytes)   [rtti:vtable virtual slot 10]
char * __cdecl OWL::TView::vf10(int param_1,int param_2,undefined4 *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_2 == 1) {
    if (param_1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
    }
    puVar1 = FUN_00468310(param_1,iVar4,0x42f688);
    puVar2 = (uint *)FUN_00468420((int)puVar1);
  }
  else {
    if (param_2 != 2) {
      return (char *)0x0;
    }
    puVar2 = (uint *)(**(code **)(*(int *)(param_1 + 8) + 0xc))();
  }
  if (param_4 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    if (puVar2 == (uint *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = strlen(puVar2);
    }
    if ((int)pcVar3 < (int)param_4) {
      param_4 = pcVar3;
    }
    if (param_4 != (char *)0x0) {
      memcpy(param_3,puVar2,(uint)param_4);
    }
    *(char *)((int)param_3 + (int)param_4) = '\0';
  }
  return pcVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045571c  OWL::TView::vf4   (7 bytes)   [rtti:vtable virtual slot 4]
undefined4 __stdcall OWL::TView::vf4(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455724  OWL::TView::vf5   (7 bytes)   [rtti:vtable virtual slot 5]
undefined4 __stdcall OWL::TView::vf5(void)

{
  return 0;
}

} // namespace tea
