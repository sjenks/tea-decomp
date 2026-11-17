// name: FUN_004cee50
// address: 0x4cee50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_004cee50(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x513ddc);
  puVar1 = (undefined4 *)FUN_004cc0f0();
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = FUN_004ceea8();
    FUN_004ceed4(puVar1,1,pcVar2);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

