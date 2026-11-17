// name: FUN_0041bb44
// address: 0x41bb44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0041bb44(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4eecd4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xf);
    param_1[0xf] = (int)(param_1 + 0xc);
    param_1[0x10] = (int)(param_1 + 0xd);
    param_1[1] = (int)(param_1 + 0xc);
    param_1[2] = (int)(param_1 + 0xd);
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = (int)&PTR_FUN_004ea94c;
    param_1[0xd] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xf,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004a1f48(param_1,1,uVar1,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PTR_FUN_004f0394;
  *(undefined ***)param_1[1] = &PTR_LAB_004f03cc;
  *(undefined ***)param_1[2] = &PTR_LAB_004f03d8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f03e4;
  param_1[10] = (int)param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

