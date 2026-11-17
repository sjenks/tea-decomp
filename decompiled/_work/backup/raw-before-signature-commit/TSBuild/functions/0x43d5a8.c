// name: FUN_0043d5a8
// address: 0x43d5a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0043d5a8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47fa98);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&PTR_FUN_00474f84;
    param_1[7] = (int)&PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&PTR_FUN_0047f9bc;
  *(undefined ***)param_1[1] = &PTR_LAB_0047f9e8;
  *(undefined ***)param_1[2] = &PTR_LAB_0047f9f4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047fa00;
  FUN_00435df4(*param_1,param_3,(uint *)0x0,param_5);
  if ((short)((uint)*(undefined4 *)(*param_1 + 0x10) >> 0x10) != 0) {
    FUN_0045681c();
  }
  *(undefined4 *)(*param_1 + 0x10) = 0;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 4;
  FUN_004675f0((undefined4 *)(*param_1 + 0x18),0,0x28);
  *(undefined4 *)(*param_1 + 0x34) = param_4;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x100;
  param_1[4] = 2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

