// name: FUN_004d145c
// address: 0x4d145c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d145c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5145b8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 2);
    FUN_004d0b78(param_1 + 2);
  }
  param_1[1] = (int)&PTR_FUN_0051595c;
  *(undefined ***)*param_1 = &PTR_LAB_00515968;
  if (param_3 == 0) {
    FUN_004d0be0(*param_1,0);
  }
  else {
    uVar1 = FUN_004d1450(param_3);
    if ((uVar1 & 8) == 0) {
      FUN_004d0be0(*param_1,0);
    }
    else {
      FUN_004d0be0(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

