// name: FUN_004316d8
// address: 0x4316d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004316d8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46b894);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x26;
    *(int *)((int)param_1 + 0x26) = (int)param_1 + 0x1a;
    *(int *)((int)param_1 + 0x2a) = (int)param_1 + 0x1e;
    param_1[1] = (int)param_1 + 0x1a;
    param_1[2] = (int)param_1 + 0x1e;
    *(undefined4 *)((int)param_1 + 0x16) = 0;
    *(undefined4 *)((int)param_1 + 0x22) = 0;
    *(undefined ***)((int)param_1 + 0x1a) = &PTR_FUN_00462234;
    *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x26),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -2;
  FUN_00432414(param_1,1,param_3,param_4,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 2;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 2;
  param_1[3] = (int)&PTR_FUN_0046b7b0;
  *(undefined ***)param_1[1] = &PTR_LAB_0046b7e4;
  *(undefined ***)param_1[2] = &PTR_LAB_0046b7f0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046b7fc;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffeff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

