// name: FUN_004b76b8
// address: 0x4b76b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004b76b8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            uint *param_10,int param_11)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50e574);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1d);
    param_1[0x1d] = (int)(param_1 + 0x1a);
    param_1[0x1e] = (int)(param_1 + 0x1b);
    param_1[1] = (int)(param_1 + 0x1a);
    param_1[2] = (int)(param_1 + 0x1b);
    param_1[0x19] = 0;
    param_1[0x1c] = 0;
    param_1[0x1a] = (int)&PTR_FUN_004ea94c;
    param_1[0x1b] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1d,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_004b9560(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&PTR_FUN_004fd108;
  *(undefined ***)param_1[1] = &PTR_LAB_004fd188;
  *(undefined ***)param_1[2] = &PTR_LAB_004fd194;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd1a0;
  FUN_004c279c((uint *)(param_1 + 0xe),0,(uint *)0x0,0,0,0,0,0,0);
  if (param_10 == (uint *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00496d48(param_10);
  }
  param_1[0x18] = iVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

