// name: FUN_0042541c
// address: 0x42541c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_0042541c(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x469098);
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (*param_2 - _DAT_00476e29) * 0x15180 + (param_3 + -1) * 0xe10 + param_4 * 0x3c +
               param_5;
    if (*param_1 != 0) {
      *param_1 = *param_1 + DAT_00475ff8;
    }
    iVar1 = FUN_00425520(param_1);
    if (iVar1 == 0) {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_00425520(param_1);
      if (iVar1 != 0) {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_00425520(param_1);
      if (iVar1 != 0) {
        *param_1 = *param_1 - 0xe10;
      }
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

