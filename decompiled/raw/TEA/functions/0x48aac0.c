// name: FUN_0048aac0
// address: 0x48aac0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0048aac0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5053e4);
  if (DAT_00504fc8 == '\0') {
    FUN_004c08dc((undefined4 *)&DAT_0051b13d,(uint *)s_imagehlp_dll_005051e3,'\x01','\x01','\0');
    DAT_00504fc8 = DAT_00504fc8 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b13d;
}

