// name: FUN_0044b018
// address: 0x44b018
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0044b018(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4707d0);
  if (DAT_00470684 == '\0') {
    FUN_00443b28((undefined4 *)&DAT_00477368,(uint *)s_SHELL32_DLL_0047069d,'\x01','\x01','\0');
    DAT_00470684 = DAT_00470684 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00477368;
}

