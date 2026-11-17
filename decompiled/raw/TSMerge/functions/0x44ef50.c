// name: FUN_0044ef50
// address: 0x44ef50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044ef50(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x47249c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 2);
    FUN_0044e66c(param_1 + 2);
  }
  param_1[1] = (int)&PTR_FUN_00473068;
  *(undefined ***)*param_1 = &PTR_LAB_00473074;
  if (param_3 == 0) {
    FUN_0044e6d4(*param_1,0);
  }
  else {
    uVar1 = FUN_0044ef44(param_3);
    if ((uVar1 & 8) == 0) {
      FUN_0044e6d4(*param_1,0);
    }
    else {
      FUN_0044e6d4(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

