// name: FUN_004305b0
// address: 0x4305b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_004305b0(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47ce74);
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (*param_2 - _DAT_0048c8d1) * 0x15180 + (param_3 + -1) * 0xe10 + param_4 * 0x3c +
               param_5;
    if (*param_1 != 0) {
      *param_1 = *param_1 + DAT_0048aa98;
    }
    iVar1 = FUN_004306b4(param_1);
    if (iVar1 == 0) {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_004306b4(param_1);
      if (iVar1 != 0) {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_004306b4(param_1);
      if (iVar1 != 0) {
        *param_1 = *param_1 - 0xe10;
      }
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

