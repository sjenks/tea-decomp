// name: FUN_004bf504
// address: 0x4bf504
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004bf504(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50fbfc);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x25;
    *(int *)((int)param_1 + 0x25) = (int)param_1 + 0x19;
    *(int *)((int)param_1 + 0x29) = (int)param_1 + 0x1d;
    param_1[1] = (int)param_1 + 0x19;
    param_1[2] = (int)param_1 + 0x1d;
    *(undefined4 *)((int)param_1 + 0x15) = 0;
    *(undefined4 *)((int)param_1 + 0x21) = 0;
    *(undefined ***)((int)param_1 + 0x19) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x1d) = &PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x25),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  FUN_004ad87c(param_1,1,param_3,param_4,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 1;
  param_1[3] = (int)&PTR_FUN_0050fc1c;
  *(undefined ***)param_1[1] = &PTR_LAB_0050fc50;
  *(undefined ***)param_1[2] = &PTR_LAB_0050fc5c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050fc68;
  *(undefined1 *)(param_1 + 5) = 1;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffeff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

