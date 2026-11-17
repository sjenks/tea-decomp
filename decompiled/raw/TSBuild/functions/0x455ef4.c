// name: FUN_00455ef4
// address: 0x455ef4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00455ef4(int param_1,int *param_2)

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
     (uVar2 = FUN_00455b38(*(int **)(param_1 + 0x1c)), (char)uVar2 != '\0')) {
    FUN_00456024(param_1,(int)param_2);
    iVar3 = (**(code **)(param_2[6] + 0x2c))();
    FUN_0041ee7c(iVar3,-1);
    local_c = 0;
    local_10 = 0;
    iVar7 = 0;
    do {
      if (*(int *)(param_1 + 4 + iVar7 * 4) != 0) {
        for (local_14 = 0; local_14 < *(int *)(param_1 + 4 + iVar7 * 4); local_14 = local_14 + 1) {
          piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x30) + 9) + local_c * 4);
          (**(code **)(param_2[6] + 0x14))();
          if ((char)piVar1[1] != '\0') {
            FUN_0041eddc(iVar3,*(int *)(param_1 + 0x20),local_10);
            if (*piVar1 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)*piVar1;
            }
            puVar5 = FUN_00468488(*piVar1,iVar4,(int *)&DAT_0041d680,(int *)&DAT_0041d840,0);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_0041e2d0((int)puVar5,local_10);
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

