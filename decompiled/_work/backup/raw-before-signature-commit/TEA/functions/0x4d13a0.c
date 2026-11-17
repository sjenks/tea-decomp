// name: FUN_004d13a0
// address: 0x4d13a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d13a0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x514594);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 3);
    FUN_004d0b78(param_1 + 3);
  }
  param_1[1] = (int)&PTR_FUN_00515978;
  *(undefined ***)*param_1 = &PTR_LAB_00515984;
  param_1[2] = 0;
  if (param_3 == 0) {
    FUN_004d0be0(*param_1,0);
  }
  else {
    uVar1 = FUN_004d1450(param_3);
    if ((uVar1 & 4) == 0) {
      FUN_004d0be0(*param_1,0);
    }
    else {
      FUN_004d0be0(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

