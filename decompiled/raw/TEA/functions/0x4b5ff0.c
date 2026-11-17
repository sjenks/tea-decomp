// name: FUN_004b5ff0
// address: 0x4b5ff0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004b5ff0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10
            ,char param_11,int param_12)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50e1d4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&PTR_FUN_004ea94c;
    param_1[9] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004c78e4(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_12);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PTR_FUN_0050e344;
  *(undefined ***)param_1[1] = &PTR_LAB_0050e3a4;
  *(undefined ***)param_1[2] = &PTR_LAB_0050e3b0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050e3bc;
  FUN_004a7988(*param_1,0,0x810080,0);
  FUN_004a79e0(*param_1,0,0x200,0);
  if (param_11 != '\0') {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x300044;
  }
  param_1[6] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

