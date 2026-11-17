// name: FUN_0048c948
// address: 0x48c948
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0048c948(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  FUN_004dce64(0x505a64);
  puVar1 = (undefined4 *)FUN_004cc180();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 1);
  }
  *(undefined4 **)(param_1 + 1) = puVar1 + 1;
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  *in_FS_OFFSET = uStack_2c;
  return 1;
}

