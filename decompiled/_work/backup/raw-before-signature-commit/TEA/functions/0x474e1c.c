// name: FUN_00474e1c
// address: 0x474e1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00474e1c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ffa54);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x20);
    param_1[0x1f] = 0;
    param_1[0x20] = (int)&PTR_FUN_004ea94c;
  }
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xd;
  FUN_004a8c70(param_1,1,(uint *)s_TEA_for_Windows_004ff40a,&DAT_00512a1c,(undefined *)0x0);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xd;
  *(undefined ***)((int)param_1 + 0x1b) = &PTR_FUN_004ffc48;
  param_1[1] = (int)&PTR_LAB_004ffc9c;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_004ffcac;
  *(undefined ***)*param_1 = &PTR_LAB_004ffccc;
  param_1[0x1c] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

