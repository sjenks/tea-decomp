// name: FUN_0044cdc8
// address: 0x44cdc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044cdc8(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x471dc0);
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_0044b390();
    *param_1 = iVar1;
    do {
      param_2 = param_2 + -1;
      *(undefined4 *)(*param_1 + param_2 * 4) = *param_3;
    } while (param_2 != 0);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

