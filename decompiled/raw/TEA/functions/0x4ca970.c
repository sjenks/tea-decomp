// name: FUN_004ca970
// address: 0x4ca970
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004ca970(int param_1,int param_2,int *param_3)

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
     (uVar2 = FUN_004ca7d0(*(int **)(param_1 + 0x1c)), (char)uVar2 == '\0')) {
    uVar2 = 0;
  }
  else {
    FUN_004cacbc(param_1,(int)param_3);
    if (*(int *)(*(int *)(param_2 + 0x30) + 1) == 0) {
      FUN_004ca482(*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x2c),*(int *)(param_2 + 0x1c));
    }
    iVar3 = (**(code **)(param_3[6] + 0x2c))();
    FUN_0048a134(iVar3,-1);
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
              FUN_0048a094(iVar3,*(int *)(param_1 + 0x20),local_1c);
              if (*piVar1 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)*piVar1;
              }
              puVar4 = FUN_004dd744(*piVar1,iVar6,(int *)&DAT_00427ee4,(int *)&DAT_0042850c,0);
              if (puVar4 != (undefined4 *)0x0) {
                FUN_00489588((int)puVar4,local_14);
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
            FUN_0048a094(iVar3,*(int *)(param_2 + 0x20),local_18);
            if (*piVar1 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)*piVar1;
            }
            puVar4 = FUN_004dd744(*piVar1,iVar6,(int *)&DAT_00427ee4,(int *)&DAT_0042850c,0);
            if (puVar4 != (undefined4 *)0x0) {
              FUN_00489588((int)puVar4,local_14);
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

