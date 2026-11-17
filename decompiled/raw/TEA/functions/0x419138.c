// name: FUN_00419138
// address: 0x419138
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00419138(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6
            ,int param_7)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee568);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x26);
    param_1[0x26] = (int)(param_1 + 0x23);
    param_1[0x27] = (int)(param_1 + 0x24);
    param_1[1] = (int)(param_1 + 0x23);
    param_1[2] = (int)(param_1 + 0x24);
    param_1[0x22] = 0;
    param_1[0x25] = 0;
    param_1[0x23] = (int)&PTR_FUN_004ea94c;
    param_1[0x24] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x26,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x72;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x72;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004abc64(param_1,1,uVar1,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x72;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x72;
  param_1[3] = (int)&PTR_FUN_004f07a4;
  *(undefined ***)param_1[1] = &PTR_LAB_004f07dc;
  *(undefined ***)param_1[2] = &PTR_LAB_004f07e8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f07f4;
  param_1[6] = (int)param_3;
  param_1[7] = 1;
  param_1[0x1e] = 1;
  param_1[0x1f] = param_5;
  param_1[0x20] = param_6;
  param_1[0x21] = param_7;
  *in_FS_OFFSET = local_28;
  return param_1;
}

