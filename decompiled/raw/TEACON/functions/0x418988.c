// name: FUN_00418988
// address: 0x418988
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00418988(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x4300e4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 2);
    FUN_004182a4(param_1 + 2);
  }
  param_1[1] = (int)&PTR_FUN_00430af4;
  *(undefined ***)*param_1 = &PTR_LAB_00430b00;
  if (param_3 == 0) {
    FUN_0041830c(*param_1,0);
  }
  else {
    uVar1 = FUN_0041897c(param_3);
    if ((uVar1 & 8) == 0) {
      FUN_0041830c(*param_1,0);
    }
    else {
      FUN_0041830c(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

