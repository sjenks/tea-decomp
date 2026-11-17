// name: FUN_0043d374
// address: 0x43d374
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0043d374(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46dc70);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1d);
    param_1[0x1d] = (int)(param_1 + 0x1a);
    param_1[0x1e] = (int)(param_1 + 0x1b);
    param_1[1] = (int)(param_1 + 0x1a);
    param_1[2] = (int)(param_1 + 0x1b);
    param_1[0x19] = 0;
    param_1[0x1c] = 0;
    param_1[0x1a] = (int)&PTR_FUN_00462234;
    param_1[0x1b] = (int)&PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x1d,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_0043e2e8(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&PTR_FUN_004645dc;
  *(undefined ***)param_1[1] = &PTR_LAB_0046465c;
  *(undefined ***)param_1[2] = &PTR_LAB_00464668;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00464674;
  FUN_004459e8((uint *)(param_1 + 0xe),0,(uint *)0x0,0,0,0,0,0,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

