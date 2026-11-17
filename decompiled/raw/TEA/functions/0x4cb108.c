// name: FUN_004cb108
// address: 0x4cb108
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004cb108(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x512440);
  if (DAT_005122f4 == '\0') {
    FUN_004c08dc((undefined4 *)&DAT_0051b984,(uint *)s_SHELL32_DLL_0051230d,'\x01','\x01','\0');
    DAT_005122f4 = DAT_005122f4 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b984;
}

