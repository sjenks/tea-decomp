// name: FUN_0048c1e4
// address: 0x48c1e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0048c1e4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5058a0);
  if (DAT_005057d4 == '\0') {
    FUN_004c08dc((undefined4 *)&DAT_0051b208,(uint *)s_COMDLG32_DLL_005057e8,'\x01','\x01','\0');
    DAT_005057d4 = DAT_005057d4 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b208;
}

