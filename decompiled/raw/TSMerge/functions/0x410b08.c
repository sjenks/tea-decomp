// name: FUN_00410b08
// address: 0x410b08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00410b08(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x464eec);
  if (DAT_00464de8 == '\0') {
    FUN_00410c84((undefined4 *)&DAT_00476a94,0x80000000,1,(uint *)s_HKEY_CLASSES_ROOT_00464df8);
    DAT_00464de8 = DAT_00464de8 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476a94;
}

