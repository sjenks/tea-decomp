// name: FUN_0042041c
// address: 0x42041c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0042041c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x479d28);
  if (DAT_00479c5c == '\0') {
    FUN_0044ecbc((undefined4 *)&DAT_0048c6c0,(uint *)s_COMDLG32_DLL_00479c70,'\x01','\x01','\0');
    DAT_00479c5c = DAT_00479c5c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c6c0;
}

