// name: FUN_0042e908
// address: 0x42e908
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042e908(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f2a0c);
  puVar1 = (undefined4 *)param_1[6];
  if (puVar1 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_00429928(param_1);
      puVar1 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x14;
    }
    else {
      puVar1 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x14;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[4] = *param_2;
  *in_FS_OFFSET = local_28;
  return puVar1;
}

