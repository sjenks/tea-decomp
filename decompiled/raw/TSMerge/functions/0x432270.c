// name: FUN_00432270
// address: 0x432270
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00432270(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10
            )

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46bbc0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&PTR_FUN_00462234;
    param_1[7] = (int)&PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&PTR_FUN_0046bbe0;
  *(undefined ***)param_1[1] = &PTR_LAB_0046bc0c;
  *(undefined ***)param_1[2] = &PTR_LAB_0046bc18;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046bc24;
  FUN_0042ac60(*param_1,param_3,param_5,param_10);
  *(undefined4 *)(*param_1 + 0x34) = param_4;
  *(undefined4 *)(*param_1 + 0x20) = param_6;
  *(undefined4 *)(*param_1 + 0x24) = param_7;
  *(undefined4 *)(*param_1 + 0x28) = param_8;
  *(undefined4 *)(*param_1 + 0x2c) = param_9;
  *(undefined4 *)(*param_1 + 0x18) = 0x50030000;
  param_1[4] = 2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

