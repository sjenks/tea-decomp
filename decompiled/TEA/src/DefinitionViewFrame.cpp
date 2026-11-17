// TEA.exe — application module "DefinitionViewFrame"
// 8 functions, 0x00472edc..0x00473650. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00472edc  DefinitionViewFrame::~DefinitionViewFrame   (517 bytes)   [rtti:dtor destructor]
//   written in code as DefinitionViewFrame::_dtor
void __cdecl DefinitionViewFrame::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fedcc);
  if (param_1 == (int *)0x0) goto LAB_004730d0;
  *(undefined ***)((int)param_1 + 0x35) = &DefinitionViewFrame::vftable;
  param_1[4] = (int)&PTR_LAB_004fef38;
  *(undefined ***)param_1[2] = &PTR_LAB_004fef50;
  *(undefined ***)param_1[3] = &PTR_LAB_004fef5c;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004fef68;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004feff8;
  if (param_1[0x24] != 0) {
    if (*(int *)(param_1[0x24] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0x24] + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00472fd1;
    }
    operator_delete();
    param_1[0x24] = 0;
  }
LAB_00472fd1:
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x51;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x51;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x51;
  OWL::TDecoratedFrame::_dtor(param_1,0);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x51;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x51;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x51;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    OWL::TFrameWindow::_dtor((int *)((int)param_1 + 0x132),0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x2a,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x28,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004730d0:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730e4  DefinitionViewFrame::vf9   (83 bytes)   [rtti:vtable virtual slot 9]
void __cdecl DefinitionViewFrame::vf9(int *param_1)

{
  OWL::TDecoratedFrame::vf9(param_1);
  if (*(int *)(param_1[0x12] + 0x168) != 0) {
    FUN_004a76a8(param_1[1],0x80,1,*(int *)(param_1[0x12] + 0x168));
  }
  if (*(int *)(param_1[0x12] + 0x16c) != 0) {
    FUN_004a76a8(param_1[1],0x80,0,*(int *)(param_1[0x12] + 0x16c));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473138  DefinitionViewFrame::vf15   (672 bytes)   [rtti:vtable virtual slot 15]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DefinitionViewFrame::vf15(int param_1)

{
  BOOL BVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  uint local_1d0 [66];
  undefined4 local_c8;
  WINDOWPLACEMENT local_c0;
  undefined1 *local_94;
  undefined4 local_90;
  int local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  int local_80;
  undefined1 *local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4fee34);
  local_c0.length = 0x2c;
  BVar1 = GetWindowPlacement(*(HWND *)(*(int *)(param_1 + 4) + 0xc),&local_c0);
  if (BVar1 == 0) goto LAB_004733b8;
  local_50 = 0x14;
  iVar4 = 0;
  iVar3 = 1;
  FUN_004649b0((int)local_1c);
  local_44 = local_44 + 1;
  Persist::Persist(local_c,(int)local_1c,iVar3,iVar4);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_0047322c;
    }
    local_64 = local_14 + -0xc;
    operator_delete();
    local_68 = 0;
    local_6c = local_1c;
    local_14 = 0;
    local_c8 = 0;
  }
LAB_0047322c:
  local_50 = 8;
  FUN_0044eee4((undefined1 *)local_1d0);
  local_50 = 0x2c;
  iVar3 = std::string::string_from_cstr((int)local_2c,local_1d0);
  local_44 = local_44 + 1;
  std::string::string_from_cstr((int)local_3c,(uint *)(param_1 + 0x50));
  local_44 = local_44 + 1;
  FUN_0044ec78((int)local_c,(int)local_3c,iVar3);
  local_44 = local_44 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00473318;
    }
    local_80 = local_34 + -0xc;
    operator_delete();
    local_84 = 0;
    local_88 = local_3c;
    local_34 = 0;
  }
LAB_00473318:
  local_50 = 8;
  local_44 = local_44 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004733a1;
    }
    local_8c = local_24 + -0xc;
    operator_delete();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = 0;
  }
LAB_004733a1:
  local_44 = local_44 + -1;
  Persist::_dtor((int)local_c,2);
  local_50 = 0;
LAB_004733b8:
  (**(code **)(*(int *)(*(int *)(param_1 + 4) + 8) + 100))();
  *in_FS_OFFSET = local_60;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733d8  FUN_004733d8   (152 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004733d8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 0x15) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x15) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(*param_1 + 0x15),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  FUN_0046d86c(piVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  IsIconic(*(HWND *)(param_1[1] + 0xc));
  (**(code **)(*(int *)(param_1[1] + 8) + 100))();
  SetActiveWindow(*(HWND *)(param_1[1] + 0xc));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473470  FUN_00473470   (24 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00473470(int param_1,uint *param_2)

{
  FUN_004987c4(*(int *)(param_1 + 0x4c),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473488  FUN_00473488   (58 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00473488(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(*param_1 + 0x15) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x15) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(*param_1 + 0x15),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  FUN_0046caa4(piVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734c4  FUN_004734c4   (202 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004734c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4feea4);
  FUN_00436b94((int)local_14,param_2,param_1 + 0x88);
  FUN_004a7780(*(int *)(param_1 + 4),local_c);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar1 = *local_c + 1;
      }
      if (iVar1 != 0) goto LAB_0047357d;
    }
    operator_delete();
  }
LAB_0047357d:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473650  OWL::TTreeNode::~TTreeNode   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TTreeNode::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TTreeNode::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4feed0);
  if (param_1 != 0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
