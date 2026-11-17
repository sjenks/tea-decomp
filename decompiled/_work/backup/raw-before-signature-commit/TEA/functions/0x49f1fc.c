// name: FUN_0049f1fc
// address: 0x49f1fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_0049f1fc(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x509720);
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (*param_2 - _DAT_0051b425) * 0x15180 + (param_3 + -1) * 0xe10 + param_4 * 0x3c +
               param_5;
    if (*param_1 != 0) {
      *param_1 = *param_1 + DAT_00518fb4;
    }
    iVar1 = FUN_0049f300(param_1);
    if (iVar1 == 0) {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_0049f300(param_1);
      if (iVar1 != 0) {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_0049f300(param_1);
      if (iVar1 != 0) {
        *param_1 = *param_1 - 0xe10;
      }
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

