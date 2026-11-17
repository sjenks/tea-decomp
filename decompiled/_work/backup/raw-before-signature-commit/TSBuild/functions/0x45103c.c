// name: FUN_0045103c
// address: 0x45103c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0045103c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x483524);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x22);
    param_1[0x22] = (int)(param_1 + 0x1f);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[1] = (int)(param_1 + 0x1f);
    param_1[2] = (int)(param_1 + 0x20);
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x1f] = (int)&PTR_FUN_00474f84;
    param_1[0x20] = (int)&PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0x22,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00450e94(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&PTR_FUN_0048365c;
  *(undefined ***)param_1[1] = &PTR_LAB_004836a4;
  *(undefined ***)param_1[2] = &PTR_LAB_004836b0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004836bc;
  *in_FS_OFFSET = local_28;
  return param_1;
}

