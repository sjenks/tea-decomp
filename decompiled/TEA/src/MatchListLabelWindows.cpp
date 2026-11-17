// TEA.exe — application module "MatchListLabelWindows"
// 4 functions, 0x00428eb4..0x0042909c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00428eb4  MatchListLabelWindows::~MatchListLabelWindows   (424 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as MatchListLabelWindows::_dtor
void __cdecl MatchListLabelWindows::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f20c0);
  if (param_1 == (int *)0x0) goto LAB_0042904b;
  param_1[3] = (int)&MatchListLabelWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f2170;
  *(undefined ***)param_1[2] = &PTR_LAB_004f217c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f2188;
  if (param_1[10] != 0) {
    if (*(int *)(param_1[10] + -0xc) != -1) {
      piVar2 = (int *)(param_1[10] + -0xc);
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
      if (iVar1 != 0) goto LAB_00428f8d;
    }
    operator_delete();
    param_1[10] = 0;
  }
LAB_00428f8d:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x20;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  OWL::TControl::_dtor(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x20;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x12,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x10,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0042904b:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042905c  FUN_0042905c   (39 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042905c(int *param_1,int param_2,int param_3)

{
  param_1[7] = param_2;
  FUN_004cf384((int)(param_1 + 8),param_3);
  FUN_0042909c(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429084  FUN_00429084   (21 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00429084(int *param_1,int param_2)

{
  param_1[0xc] = param_2;
  FUN_0042909c(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042909c  FUN_0042909c   (300 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0042909c(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *in_FS_OFFSET;
  uint local_5c [6];
  uint *local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4f2100);
  FUN_004e0344((undefined1 *)local_5c,(byte *)" &%d ");
  local_28 = 0x14;
  std::string::string_from_cstr((int)local_14,local_5c);
  local_1c = local_1c + 1;
  local_28 = 8;
  std::string::append((int)local_14,(int)(param_1 + 8));
  if (-1 < param_1[0xc]) {
    FUN_004e0344((undefined1 *)local_5c,(byte *)" (%d)");
    uVar1 = local_c[-1];
    pcVar2 = strlen(local_5c);
    FUN_004cfad4((int)local_14,uVar1,0,(uint)local_5c,(uint)pcVar2,0,(uint)pcVar2);
  }
  FUN_004a7780(*param_1,local_c);
  local_1c = local_1c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar4 = local_c + -3;
      if (puVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar4 = *puVar4 - 1;
        iVar3 = *puVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_004291b7;
    }
    local_44 = local_c + -3;
    operator_delete();
  }
LAB_004291b7:
  *in_FS_OFFSET = local_38;
  return;
}

} // namespace tea
