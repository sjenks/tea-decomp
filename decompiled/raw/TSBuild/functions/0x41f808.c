// name: FUN_0041f808
// address: 0x41f808
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0041f808(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x479b24);
  if (DAT_00479708 == '\0') {
    FUN_0044ecbc((undefined4 *)&DAT_0048c5f5,(uint *)s_imagehlp_dll_00479923,'\x01','\x01','\0');
    DAT_00479708 = DAT_00479708 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c5f5;
}

