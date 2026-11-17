// TEA.exe — application module "ExternalLookupViewWindows"
// 5 functions, 0x00475d20..0x004760d8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00475d20  ExternalLookupViewWindows::~ExternalLookupViewWindows   (556 bytes)   [rtti:dtor destructor]
//   written in code as ExternalLookupViewWindows::_dtor
void __cdecl ExternalLookupViewWindows::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ffef8);
  if (param_1 == (int *)0x0) goto LAB_00475f3b;
  param_1[3] = (int)&ExternalLookupViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050012c;
  *(undefined ***)param_1[2] = &PTR_LAB_00500138;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00500144;
  if (param_1[0xa4] != 0) {
    if (*(int *)(param_1[0xa4] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xa4] + -0xc);
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
      if (iVar1 != 0) goto LAB_00475dfc;
    }
    operator_delete();
    param_1[0xa4] = 0;
  }
LAB_00475dfc:
  PVWPushButton::_dtor(param_1 + 0x70,2);
  OWL::TButton::_dtor((int *)((int)param_1 + 0x10e),2);
  piVar2 = param_1 + 0x18;
  *(int *)(param_1[0x19] + -4) = *(int *)(param_1[0x19] + -4) + -4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -4;
  OWL::TControl::_dtor(piVar2,0);
  *(int *)(param_1[0x19] + -4) = *(int *)(param_1[0x19] + -4) + 4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 4;
  *(int *)(param_1[0x19] + -4) = *(int *)(param_1[0x19] + -4) + 0x96;
  OWL::TWindow::_dtor(param_1 + 0x22,0);
  *(int *)(param_1[0x19] + -4) = *(int *)(param_1[0x19] + -4) + -0x96;
  OWL::TStreamableBase::_dtor(param_1 + 0x20,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x240;
  PropertiesViewWindows::_dtor(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x240;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0xac,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0xaa,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00475f3b:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00475f4c  ExternalLookupViewWindows::vf19   (138 bytes)   [rtti:vtable virtual slot 19]
void __cdecl ExternalLookupViewWindows::vf19(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_3b8;
  int local_394 [3];
  int local_388;
  
  __InitExceptBlockLDTC(0x4fff38);
  FUN_00460220(local_394,0,*param_1,param_1[0xe]);
  (**(code **)(local_388 + 0x14))();
  FUN_004760d8((int)param_1);
  LookupPropertiesViewWindows::_dtor(local_394,2);
  *in_FS_OFFSET = local_3b8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00475fd8  ExternalLookupViewWindows::vf9   (21 bytes)   [rtti:vtable virtual slot 9]
void __cdecl ExternalLookupViewWindows::vf9(int *param_1,INT_PTR param_2)

{
  PropertiesViewWindows::vf9(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00475ff0  ExternalLookupViewWindows::vf11   (230 bytes)   [rtti:vtable virtual slot 11]
void __cdecl ExternalLookupViewWindows::vf11(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fff78);
  PropertiesViewWindows::vf11(param_1);
  std::string::string_from_cstr((int)local_14,(uint *)"External Lookup - ");
  std::string::append((int)local_14,(int)(param_1 + 0xa2));
  FUN_004b0c44(param_1,local_c);
  FUN_004760d8((int)param_1);
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
      if (iVar1 != 0) goto LAB_004760c5;
    }
    operator_delete();
  }
LAB_004760c5:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004760d8  FUN_004760d8   (895 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00476162) */
/* WARNING: Removing unreachable block (ram,0x0047621a) */
/* WARNING: Removing unreachable block (ram,0x004761de) */
/* WARNING: Removing unreachable block (ram,0x00476213) */
/* WARNING: Removing unreachable block (ram,0x00476293) */
/* WARNING: Removing unreachable block (ram,0x004762ac) */
/* WARNING: Removing unreachable block (ram,0x004762b7) */
/* WARNING: Removing unreachable block (ram,0x004762db) */
/* WARNING: Removing unreachable block (ram,0x004762c5) */
/* WARNING: Removing unreachable block (ram,0x004762d4) */
/* WARNING: Removing unreachable block (ram,0x004762cd) */
/* WARNING: Removing unreachable block (ram,0x004762e0) */
/* WARNING: Removing unreachable block (ram,0x004762e4) */
/* WARNING: Removing unreachable block (ram,0x00476332) */
/* WARNING: Removing unreachable block (ram,0x00476352) */
void __cdecl FUN_004760d8(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_60;
  undefined1 local_14 [8];
  char *local_c;
  
  __InitExceptBlockLDTC(0x4ffff0);
  piVar1 = (int *)FUN_00422fc4(*(int *)(param_1 + 0x38));
  iVar2 = FUN_00423c2c(piVar1);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x10e) + 8) + 0x60))();
  FUN_00464a94((int)local_14,*(int *)(param_1 + 0x38),
               (uint)(iVar2 < 1) + *(int *)(param_1 + 0x298) * 2 + 0x325a);
  pcVar3 = thunk_FUN_004dcd18(local_c,&DAT_004ffe56);
  iVar2 = (*(int *)&DAT_005140ac);
  if (pcVar3 != (char *)0x0) {
    iVar2 = (int)pcVar3 - (int)local_c;
  }
  if (iVar2 != -1) {
    FUN_004d5a8c((int)local_14,iVar2 + 1,param_1 + 0x288);
  }
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x60) + 0xc),local_c);
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00476440;
    }
    operator_delete();
  }
LAB_00476440:
  *in_FS_OFFSET = local_60;
  return;
}

} // namespace tea
