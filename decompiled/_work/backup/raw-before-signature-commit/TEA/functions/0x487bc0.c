// name: FUN_00487bc0
// address: 0x487bc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00487bc0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x504724);
  if (DAT_005046d4 == '\0') {
    FUN_00487c5c((undefined4 *)&DAT_0051b10c);
    DAT_005046d4 = DAT_005046d4 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b10c;
}

