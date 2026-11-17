// name: FUN_0043f628
// address: 0x43f628
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0043f628(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47ff40);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&PTR_FUN_00474f84;
    param_1[8] = (int)&PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&PTR_FUN_0047ff60;
  *(undefined ***)param_1[1] = &PTR_LAB_0047ffa4;
  *(undefined ***)param_1[2] = &PTR_LAB_0047ffb0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047ffbc;
  FUN_0043f898(param_1,param_3,0,param_5);
  if ((short)((uint)param_4 >> 0x10) != 0) {
    param_4 = (uint *)FUN_0042aea0(param_4);
  }
  param_1[4] = (int)param_4;
  *in_FS_OFFSET = local_28;
  return param_1;
}

