// name: FUN_0041d7a8
// address: 0x41d7a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0041d7a8(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_0041f3fc(0x431424);
  puVar1 = DAT_00434898;
  if (DAT_00431410 != '\0') {
    DAT_00434898[1] = DAT_00434898[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_00431410 = '\0';
  }
  *in_FS_OFFSET = local_30;
  return;
}

