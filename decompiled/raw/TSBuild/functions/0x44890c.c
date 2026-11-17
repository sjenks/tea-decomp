// name: FUN_0044890c
// address: 0x44890c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044890c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x481bc0);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_00478284;
    *(undefined ***)param_1[1] = &PTR_LAB_004782e4;
    *(undefined ***)param_1[2] = &PTR_LAB_004782f0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004782fc;
    if (param_1[0xc] != 0) {
      (*(code *)**(undefined4 **)(param_1[0xc] + 0xc))();
    }
    FUN_0044bf94((int)(param_1 + 7),2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
    FUN_004457b8(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_00435f74(param_1 + 0x12,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_0041e99c(param_1 + 0x10,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

