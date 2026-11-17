// name: FUN_004cf2d4
// address: 0x4cf2d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004cf2d4(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x513edc);
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_004cc180();
    *param_1 = iVar1;
    do {
      param_2 = param_2 + -1;
      *(undefined4 *)(*param_1 + param_2 * 4) = *param_3;
    } while (param_2 != 0);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

