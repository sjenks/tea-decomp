// TSMerge.exe — application module "DMApplication"
// 9 functions, 0x00404128..0x00404a9c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00404128  DMApplication::vf17   (236 bytes)   [rtti:vtable virtual slot 17]
void __cdecl DMApplication::vf17(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  int iVar5;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x461ea4);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    iVar5 = 0;
    cVar4 = '\x01';
    piVar2 = (int *)operator_new();
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      FUN_004016c0(piVar2,0,0,(uint *)0x66);
      iVar3 = *piVar2;
    }
    FUN_004419a0(piVar1,0,0,(uint *)"TEA&Sympathy Word List Merge",iVar3,cVar4,iVar5);
  }
  DAT_00461e80 = piVar1;
  *(uint *)(*piVar1 + 0x18) = *(uint *)(*piVar1 + 0x18) & 0xfffaffff;
  FUN_0044215c(DAT_00461e80,param_1 + 4,0x6c);
  FUN_0042f090(param_1,DAT_00461e80);
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404270  FUN_00404270   (174 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_00404270(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a0;
  undefined ***local_7c;
  undefined **local_78;
  undefined **local_6b;
  undefined **local_61;
  undefined4 local_d;
  undefined **local_9;
  
  __InitExceptBlockLDTC(0x461ee0);
  set_new_handler(&LAB_00404230);
  local_7c = &local_9;
  local_d = 0;
  local_9 = &OWL::TEventHandler::vftable;
  FUN_0042e748((int *)&local_7c,1,(uint *)"TEA&Sympathy Word List Merge",&DAT_00470a60,
               (undefined *)0x0);
  local_61 = &DMApplication::vftable;
  local_78 = &PTR_LAB_00461f94;
  local_6b = &PTR_LAB_00461fa4;
  *local_7c = &PTR_LAB_00461fc4;
  uVar1 = (*(code *)local_61[2])();
  OWL::TApplication::_dtor((undefined4*)&local_7c,0);
  *in_FS_OFFSET = local_a0;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404384  DMApplication::~DMApplication   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as DMApplication::_dtor
void __cdecl DMApplication::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x461f1c);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TApplication::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004044f4  OWL::TFileSaveDialog::~TFileSaveDialog   (175 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFileSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFileSaveDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x461f24);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x22,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x20,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004046e0  OWL::TFileOpenDialog::~TFileOpenDialog   (175 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFileOpenDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFileOpenDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x461f2c);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x22,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x20,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004049d4  OWL::TApplication::vf9   (5 bytes)   [rtti:vtable virtual slot 9; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
void __stdcall OWL::TApplication::vf9(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004049dc  OWL::TApplication::vf13   (11 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TApplication::vf13(int param_1)

{
  return *(undefined4 *)(param_1 + 0x31);
}

// ----------------------------------------------------------------------------------------------------
// 0x00404a44  std::logic_error::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::logic_error::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x00404a9c  std::exception::vf1   (10 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::exception::vf1(void)

{
  return PTR_s_no_named_exception_thrown_00473f24;
}

} // namespace tea
