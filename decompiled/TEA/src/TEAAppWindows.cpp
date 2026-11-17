// TEA.exe — application module "TEAAppWindows"
// 8 functions, 0x00474ef0..0x00475a74. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00474ef0  TEAAppWindows::~TEAAppWindows   (198 bytes)   [rtti:dtor destructor]
//   written in code as TEAAppWindows::_dtor
void __cdecl TEAAppWindows::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ffa88);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x1b) = &TEAAppWindows::vftable;
    param_1[1] = (int)&PTR_LAB_004ffc9c;
    *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_004ffcac;
    *(undefined ***)*param_1 = &PTR_LAB_004ffccc;
    if (param_1[0x1c] != 0) {
      GridViewWindows::_dtor(param_1[0x1c],3);
    }
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xd;
    OWL::TApplication::_dtor(param_1,0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xd;
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474fb8  TEAAppWindows::vf17   (1083 bytes)   [rtti:vtable virtual slot 17]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAAppWindows::vf17(int param_1)

{
  char *pcVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_a8;
  undefined4 local_98;
  char *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  int local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4ffb28);
  local_28 = operator_new();
  if (local_28 != 0) {
    local_48 = 0x14;
    std::string::string_from_cstr((int)local_14,(uint *)"tea.chm");
    local_3c = local_3c + 1;
    FUN_00437470((int)local_24,(int)local_14);
    local_3c = local_3c + 1;
    FUN_00462d9c(local_28,(int)local_24);
    local_48 = 8;
  }
  *(int *)(param_1 + 0x70) = local_28;
  local_3c = local_3c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar9 = (int *)(local_1c + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_004750a9;
    }
    local_64 = local_1c + -0xc;
    operator_delete();
    local_68 = 0;
    local_6c = local_24;
    local_1c = 0;
    local_98 = 0;
  }
LAB_004750a9:
  local_3c = local_3c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar9 = (int *)(local_c + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_0047511d;
    }
    local_70 = local_c + -0xc;
    operator_delete();
    local_74 = 0;
    local_78 = local_14;
    local_c = 0;
    local_a8 = 0;
  }
LAB_0047511d:
  local_2c = (int *)operator_new();
  if (local_2c != (int *)0x0) {
    local_48 = 0x44;
    FUN_00450bbc(local_2c,0,0,*(int *)(param_1 + 0x70),0x4ff3d1,0);
    local_48 = 0x38;
  }
  *(int **)(param_1 + 0x74) = local_2c;
  local_30 = (int *)operator_new();
  if (local_30 != (int *)0x0) {
    local_48 = 0x5c;
    FUN_00473f78(local_30,0,*(int *)(param_1 + 0x70),*(int **)(param_1 + 0x74));
    local_48 = 0x50;
  }
  *(int **)(param_1 + 0x78) = local_30;
  local_34 = (int *)operator_new();
  if (local_34 != (int *)0x0) {
    local_48 = 0x74;
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 4);
    }
    FUN_0047be04(local_34,0,uVar4,3,0x40);
    local_48 = 0x68;
  }
  piVar9 = local_34;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x78) + 0x35) + 4))();
  FUN_00463310(*(int *)(param_1 + 0x70),*(int **)(param_1 + 0x74),piVar9,&local_7c,&local_80,
               &local_84,&local_88,&local_8c);
  iVar2 = FUN_004153ec(local_7c,local_80,local_84,local_88);
  if (iVar2 == 0) {
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    BVar3 = SystemParametersInfoA(0x30,0,&local_c0,0);
    if (BVar3 != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 4);
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(int *)(iVar2 + 0x28) = (local_b8 - local_c0) / 3;
      iVar8 = (local_b4 - local_bc) * 0xf;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xf;
      }
      *(int *)(iVar2 + 0x2c) = iVar8 >> 4;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 4);
    *(int *)(iVar2 + 0x20) = local_7c;
    *(int *)(iVar2 + 0x24) = local_80;
    *(int *)(iVar2 + 0x28) = local_84;
    *(int *)(iVar2 + 0x2c) = local_88;
    if (local_8c != 0) {
      *(undefined4 *)(param_1 + 0x23) = 3;
    }
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    uVar4 = **(undefined4 **)(param_1 + 0x78);
  }
  FUN_004a95d8(param_1,uVar4);
  puVar5 = FUN_0041238c(*(int *)(param_1 + 0x70),0);
  puVar6 = FUN_004a8c00();
  pcVar1 = *(char **)(puVar6 + 8);
  if (DAT_0051c440 == 1) {
    FUN_0046449c(*(int *)(param_1 + 0x70));
  }
  else if (((DAT_0051c440 < 3) ||
           (local_90 = thunk_FUN_004dc924(pcVar1,':'), local_90 == (char *)0x0)) ||
          (pcVar7 = thunk_FUN_004dc924(local_90 + 1,':'), pcVar7 != (char *)0x0)) {
    for (iVar2 = 1; iVar2 < DAT_0051c440; iVar2 = iVar2 + 1) {
      FUN_004753f4(param_1,(int)puVar5,*(LPCSTR *)(DAT_0051c408 + iVar2 * 4));
    }
  }
  else {
    FUN_004753f4(param_1,(int)puVar5,pcVar1);
  }
  (**(code **)(*(int *)(**(int **)(param_1 + 0x78) + 0xc) + 4))();
  FUN_004be1e0((int *)**(undefined4 **)(param_1 + 0x78),param_1 + 4,"GRIDICON");
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004753f4  FUN_004753f4   (398 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004753f4(int param_1,int param_2,LPCSTR param_3)

{
  DWORD DVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_170 [67];
  uint *local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  int local_58;
  LPSTR local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4ffbd4);
  DVar1 = GetFullPathNameA(param_3,0x104,(LPSTR)local_170,&local_4c);
  if (DVar1 == 0) goto LAB_00475571;
  local_38 = 0x14;
  std::string::string_from_cstr((int)local_24,local_170);
  local_2c = local_2c + 1;
  FUN_00435de0((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_004754d5;
    }
    local_58 = local_1c + -0xc;
    operator_delete();
    local_5c = 0;
    local_60 = local_24;
    local_1c = 0;
  }
LAB_004754d5:
  local_38 = 8;
  FUN_0041251c(param_2,local_c);
  FUN_00464bb4(*(int *)(param_1 + 0x70),local_c);
  local_2c = local_2c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar3 = local_c + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00475571;
    }
    local_64 = local_c + -3;
    operator_delete();
  }
LAB_00475571:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00475584  TEAAppWindows::vf16   (37 bytes)   [rtti:vtable virtual slot 16]
void __cdecl TEAAppWindows::vf16(int param_1)

{
  OWL::TApplication::vf16(param_1);
  FUN_00465a80(*(int *)(param_1 + 0x70));
  FUN_0045ce74(*(int **)(param_1 + 0x74));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004755ac  FUN_004755ac   (149 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_004755ac(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_ac;
  int local_88 [33];
  
  __InitExceptBlockLDTC(0x4ffc1c);
  set_new_handler(&LAB_00437ba4);
  uVar1 = FUN_004e7624((int *)0x0);
  FUN_004e4280(uVar1);
  piVar2 = FUN_00474e1c(local_88,0);
  uVar1 = (**(code **)(*(int *)((int)piVar2 + 0x1b) + 8))();
  TEAAppWindows::_dtor(local_88,2);
  FUN_004089c8();
  *in_FS_OFFSET = local_ac;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004757ac  OWL::TApplication::vf9   (5 bytes)   [rtti:vtable virtual slot 9; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
void __stdcall OWL::TApplication::vf9(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004757b4  OWL::TApplication::vf13   (11 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TApplication::vf13(int param_1)

{
  return *(undefined4 *)(param_1 + 0x31);
}

// ----------------------------------------------------------------------------------------------------
// 0x00475a74  FUN_00475a74   (642 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00475a74(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ffe98);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xac);
    param_1[0xac] = (int)(param_1 + 0xa9);
    param_1[0xad] = (int)(param_1 + 0xaa);
    param_1[1] = (int)(param_1 + 0xa9);
    param_1[2] = (int)(param_1 + 0xaa);
    param_1[0xa8] = 0;
    param_1[0xab] = 0;
    param_1[0xa9] = (int)&OWL::TEventHandler::vftable;
    param_1[0xaa] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xac,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x240;
  FUN_00413cf4(param_1,1,0x4ffe34,param_3,param_4,(uint *)0x321e,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x240;
  param_1[3] = (int)&ExternalLookupViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050012c;
  *(undefined ***)param_1[2] = &PTR_LAB_00500138;
  iVar1 = *param_1;
  *(undefined ***)(iVar1 + 8) = &PTR_LAB_00500144;
  FUN_004c7a28(param_1 + 0x18,0,iVar1,0x3228,0,0);
  FUN_004abc64((int *)((int)param_1 + 0x10e),0,*param_1,1,0);
  FUN_004179f0(param_1 + 0x70,0,param_1,0xd0c);
  param_1[0xa4] = 0;
  iVar1 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_5 + 8) + -4);
    piVar3 = std::string::__getRep(param_1 + 0xa2,uVar2,uVar2);
    param_1[0xa4] = (int)(piVar3 + 3);
    memcpy((undefined4 *)param_1[0xa4],*(undefined4 **)(param_5 + 8),uVar2);
  }
  else {
    param_1[0xa4] = *(int *)(param_5 + 8);
    piVar3 = (int *)(param_1[0xa4] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  param_1[0xa6] = param_6;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
