// TSMerge.exe — runtime / library code "OWL_TBarDescr"
// 4 functions, 0x0044a4c0..0x0044a9b4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044a4c0  OWL::TBarDescr::~TBarDescr   (6 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TBarDescr::_dtor
void __stdcall OWL::TBarDescr::_dtor(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  
  __InitExceptBlockLDTC(0x470550);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TBarDescr::vftable;
    iVar1 = param_1[0xc];
    if (iVar1 != 0) {
      FUN_0044a5ac(iVar1,'\x01');
      if (*(int *)(iVar1 + 9) != 0) {
        free();
      }
      operator_delete();
    }
    if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
      OWL::TToolbarRes::_dtor((undefined4 *)param_1[7],3);
    }
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])();
    }
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = uStack_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a63c  OWL::TBarDescr::vf1   (345 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TBarDescr::vf1(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x4705d0);
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     (uVar3 = FUN_0044a5f8(*(int **)(param_1 + 0x1c)), (char)uVar3 == '\0')) {
    uVar3 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x30) + 1) == 0) {
      FUN_0044a2aa(*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x1c));
    }
    puVar4 = (undefined4 *)FUN_00424684(*(int *)(param_1 + 0x1c));
    iVar5 = FUN_0041203c(puVar4);
    uVar1 = FUN_004246d4(*(int *)(param_1 + 0x1c));
    iVar5 = iVar5 / CONCAT22(extraout_var,uVar1);
    local_8 = (undefined4 *)operator_new();
    if (local_8 != (undefined4 *)0x0) {
      local_1c = 0x14;
      uVar7 = 5;
      uVar1 = FUN_00424690(*(int *)(param_1 + 0x1c));
      iVar6 = CONCAT22(extraout_var_00,uVar1);
      uVar3 = 0;
      uVar1 = FUN_004246d4(*(int *)(param_1 + 0x1c));
      uVar2 = FUN_004246bc(*(int *)(param_1 + 0x1c));
      local_38 = CONCAT22(extraout_var_02,uVar2);
      local_34 = CONCAT22(extraout_var_01,uVar1);
      local_30 = local_38;
      FUN_00413b14(local_8,&local_38,uVar3,iVar6,uVar7,iVar5);
      local_1c = 8;
    }
    puVar4 = local_8;
    FUN_00413e58((int)local_8,-1);
    (**(code **)(*(int *)(param_2 + 0x18) + 0x28))();
    iVar5 = 0;
    local_3c = 0;
    for (iVar6 = 0; iVar6 < *(int *)(*(int *)(param_1 + 0x30) + 1); iVar6 = iVar6 + 1) {
      (**(code **)(*(int *)(param_2 + 0x18) + 0x14))();
      iVar5 = *(int *)(param_1 + 0x30);
      if (*(char *)(*(int *)(*(int *)(iVar5 + 9) + iVar6 * 4) + 4) != '\0') {
        iVar5 = FUN_00413db8((int)puVar4,*(int *)(param_1 + 0x20),local_3c);
        local_3c = local_3c + 1;
      }
    }
    uVar3 = CONCAT31((int3)((uint)iVar5 >> 8),1);
    *in_FS_OFFSET = local_2c;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a798  OWL::TBarDescr::vf2   (538 bytes)   [rtti:vtable virtual slot 2]
undefined4 __cdecl OWL::TBarDescr::vf2(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     (uVar2 = FUN_0044a5f8(*(int **)(param_1 + 0x1c)), (char)uVar2 == '\0')) {
    uVar2 = 0;
  }
  else {
    FUN_0044aae4(param_1,(int)param_3);
    if (*(int *)(*(int *)(param_2 + 0x30) + 1) == 0) {
      FUN_0044a2aa(*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x2c),*(int *)(param_2 + 0x1c));
    }
    iVar3 = (**(code **)(param_3[6] + 0x2c))();
    FUN_00413e58(iVar3,-1);
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar7 = 0;
    do {
      if (*(int *)(param_2 + 4 + iVar7 * 4) < 1) {
        if ((*(int *)(param_2 + 4 + iVar7 * 4) == 0) && (0 < *(int *)(param_1 + 4 + iVar7 * 4))) {
          for (local_24 = 0; local_24 < *(int *)(param_1 + 4 + iVar7 * 4); local_24 = local_24 + 1)
          {
            piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x30) + 9) + local_10 * 4);
            (**(code **)(param_3[6] + 0x14))();
            if ((char)piVar1[1] != '\0') {
              FUN_00413db8(iVar3,*(int *)(param_1 + 0x20),local_1c);
              if (*piVar1 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)*piVar1;
              }
              puVar4 = FUN_004567e4(*piVar1,iVar6,(int *)&DAT_0041265c,(int *)&DAT_0041281c,0);
              if (puVar4 != (undefined4 *)0x0) {
                FUN_004132ac((int)puVar4,local_14);
              }
              local_14 = local_14 + 1;
              local_1c = local_1c + 1;
            }
            local_10 = local_10 + 1;
          }
        }
      }
      else {
        for (local_20 = 0; local_20 < *(int *)(param_2 + 4 + iVar7 * 4); local_20 = local_20 + 1) {
          piVar1 = *(int **)(*(int *)(*(int *)(param_2 + 0x30) + 9) + local_c * 4);
          (**(code **)(param_3[6] + 0x14))();
          if ((char)piVar1[1] != '\0') {
            FUN_00413db8(iVar3,*(int *)(param_2 + 0x20),local_18);
            if (*piVar1 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)*piVar1;
            }
            puVar4 = FUN_004567e4(*piVar1,iVar6,(int *)&DAT_0041265c,(int *)&DAT_0041281c,0);
            if (puVar4 != (undefined4 *)0x0) {
              FUN_004132ac((int)puVar4,local_14);
            }
            local_14 = local_14 + 1;
            local_18 = local_18 + 1;
          }
          local_c = local_c + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
    (**(code **)(*(int *)(*param_3 + 8) + 0x68))();
    (**(code **)(param_3[6] + 0x34))();
    BVar5 = UpdateWindow(*(HWND *)(*param_3 + 0xc));
    uVar2 = CONCAT31((int3)((uint)BVar5 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a9b4  OWL::TBarDescr::vf3   (302 bytes)   [rtti:vtable virtual slot 3]
undefined4 __cdecl OWL::TBarDescr::vf3(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  BOOL BVar6;
  int iVar7;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*(int *)(param_1 + 0x1c) != 0) &&
     (uVar2 = FUN_0044a5f8(*(int **)(param_1 + 0x1c)), (char)uVar2 != '\0')) {
    FUN_0044aae4(param_1,(int)param_2);
    iVar3 = (**(code **)(param_2[6] + 0x2c))();
    FUN_00413e58(iVar3,-1);
    local_c = 0;
    local_10 = 0;
    iVar7 = 0;
    do {
      if (*(int *)(param_1 + 4 + iVar7 * 4) != 0) {
        for (local_14 = 0; local_14 < *(int *)(param_1 + 4 + iVar7 * 4); local_14 = local_14 + 1) {
          piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x30) + 9) + local_c * 4);
          (**(code **)(param_2[6] + 0x14))();
          if ((char)piVar1[1] != '\0') {
            FUN_00413db8(iVar3,*(int *)(param_1 + 0x20),local_10);
            if (*piVar1 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)*piVar1;
            }
            puVar5 = FUN_004567e4(*piVar1,iVar4,(int *)&DAT_0041265c,(int *)&DAT_0041281c,0);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_004132ac((int)puVar5,local_10);
            }
            local_10 = local_10 + 1;
          }
          local_c = local_c + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
    (**(code **)(*(int *)(*param_2 + 8) + 0x68))();
    (**(code **)(param_2[6] + 0x34))();
    BVar6 = UpdateWindow(*(HWND *)(*param_2 + 0xc));
    return CONCAT31((int3)((uint)BVar6 >> 8),1);
  }
  return 0;
}

} // namespace tea
