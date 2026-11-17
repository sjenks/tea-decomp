// name: FUN_0041bb2c
// address: 0x41bb2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0041bb2c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x478ca0);
  if (DAT_00478b9c == '\0') {
    FUN_0041bca8((undefined4 *)&DAT_0048c53c,0x80000000,1,(uint *)s_HKEY_CLASSES_ROOT_00478bac);
    DAT_00478b9c = DAT_00478b9c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c53c;
}

