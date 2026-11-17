// name: FUN_0045baf0
// address: 0x45baf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045baf0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486408);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 3);
    FUN_0045b2c8(param_1 + 3);
  }
  param_1[1] = (int)&PTR_FUN_004876ac;
  *(undefined ***)*param_1 = &PTR_LAB_004876b8;
  param_1[2] = 0;
  if (param_3 == 0) {
    FUN_0045b330(*param_1,0);
  }
  else {
    uVar1 = FUN_0045bba0(param_3);
    if ((uVar1 & 4) == 0) {
      FUN_0045b330(*param_1,0);
    }
    else {
      FUN_0045b330(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

