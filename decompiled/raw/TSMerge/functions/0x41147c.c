// name: FUN_0041147c
// address: 0x41147c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0041147c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4650a0);
  if (DAT_00465050 == '\0') {
    FUN_00411518((undefined4 *)&DAT_00476b1c);
    DAT_00465050 = DAT_00465050 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476b1c;
}

