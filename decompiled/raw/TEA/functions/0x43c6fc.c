// name: FUN_0043c6fc
// address: 0x43c6fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0043c6fc(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f523c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1da);
    param_1[0x1da] = (int)(param_1 + 0x1d7);
    param_1[0x1db] = (int)(param_1 + 0x1d8);
    param_1[1] = (int)(param_1 + 0x1d7);
    param_1[2] = (int)(param_1 + 0x1d8);
    param_1[0x1d6] = 0;
    param_1[0x1d9] = 0;
    param_1[0x1d7] = (int)&PTR_FUN_004ea94c;
    param_1[0x1d8] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1da,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  FUN_0043ce14(param_1,1,param_3,param_4,(uint *)s_Save_TEA_Sympathy_Dictionary_004f520c,param_6,
               param_7,param_8,param_9,param_10,param_11);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&PTR_FUN_004f5280;
  param_1[0x18] = (int)&PTR_LAB_004f5358;
  *(undefined ***)param_1[1] = &PTR_LAB_004f5374;
  *(undefined ***)param_1[2] = &PTR_LAB_004f5380;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f538c;
  param_1[0x1d4] = param_5;
  param_1[0x1d5] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

