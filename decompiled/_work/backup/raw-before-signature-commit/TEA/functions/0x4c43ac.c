// name: FUN_004c43ac
// address: 0x4c43ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004c43ac(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
            uint *param_6)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x510d90);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xc);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[0xd] = (int)(param_1 + 10);
    param_1[1] = (int)(param_1 + 9);
    param_1[2] = (int)(param_1 + 10);
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[9] = (int)&PTR_FUN_004ea94c;
    param_1[10] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xc,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  FUN_004c7a28(param_1,1,param_3,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&PTR_FUN_0051151c;
  *(undefined ***)param_1[1] = &PTR_LAB_00511558;
  *(undefined ***)param_1[2] = &PTR_LAB_00511564;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511570;
  iVar1 = FUN_00496d48(param_5);
  param_1[6] = iVar1;
  if (param_6 == (uint *)0x0) {
    iVar1 = FUN_00496d48((uint *)&DAT_00510d7c);
  }
  else {
    iVar1 = FUN_00496d48(param_6);
  }
  param_1[7] = iVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

