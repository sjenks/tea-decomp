// name: FUN_004876f0
// address: 0x4876f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004876f0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x504630);
  if (DAT_0050452c == '\0') {
    FUN_0048786c((undefined4 *)&DAT_0051b084,0x80000000,1,(uint *)s_HKEY_CLASSES_ROOT_0050453c);
    DAT_0050452c = DAT_0050452c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b084;
}

