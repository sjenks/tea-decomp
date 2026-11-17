// name: FUN_00415a44
// address: 0x415a44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00415a44(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  FUN_00455f04(0x466138);
  puVar1 = (undefined4 *)FUN_0044b390();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 1);
  }
  *(undefined4 **)(param_1 + 1) = puVar1 + 1;
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  *in_FS_OFFSET = uStack_2c;
  return 1;
}

