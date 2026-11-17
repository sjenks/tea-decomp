// name: FUN_0046a058
// address: 0x46a058
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0046a058(int *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4fd480);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x20);
    param_1[0x20] = (int)(param_1 + 0x1d);
    param_1[0x21] = (int)(param_1 + 0x1e);
    param_1[1] = (int)(param_1 + 0x1d);
    param_1[2] = (int)(param_1 + 0x1e);
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1d] = (int)&PTR_FUN_004ea94c;
    param_1[0x1e] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x20,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00419c00(param_1,1,param_3,0x240e,param_4,1);
  param_1[3] = (int)&PTR_FUN_004ff1d0;
  *(undefined ***)param_1[1] = &PTR_LAB_004ff25c;
  *(undefined ***)param_1[2] = &PTR_LAB_004ff268;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ff274;
  *in_FS_OFFSET = local_28;
  return param_1;
}

