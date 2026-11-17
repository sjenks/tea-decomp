// name: FUN_004bdc6c
// address: 0x4bdc6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004bdc6c(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_004dce64(0x50f958);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0050fa80;
    *(undefined ***)param_1[1] = &PTR_LAB_0050fad4;
    *(undefined ***)param_1[2] = &PTR_LAB_0050fae0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050faec;
    if (param_1 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_1;
    }
    if ((*(byte *)(iVar1 + 0x74) & 0x10) != 0) {
      if (param_1 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_1;
      }
      if (*(int **)(*(int *)(iVar1 + 0x6c) + 0x2b) == param_1) {
        if (param_1 == (int *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *param_1;
        }
        *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x2b) = 0;
      }
    }
    if (*(undefined4 **)((int)param_1 + 0x21) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x21))();
    }
    if ((*(char *)((int)param_1 + 0x29) != '\0') &&
       (*(undefined4 **)((int)param_1 + 0x25) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x25))();
    }
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0((undefined4 *)((int)param_1 + 0x5a),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54((undefined4 *)((int)param_1 + 0x52),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_38;
  return;
}

