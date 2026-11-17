// name: FUN_00420a68
// address: 0x420a68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00420a68(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  FUN_00467ba8(0x479eec);
  puVar1 = (undefined4 *)FUN_004568d0();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 1);
  }
  *(undefined4 **)(param_1 + 1) = puVar1 + 1;
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  *in_FS_OFFSET = uStack_2c;
  return 1;
}

