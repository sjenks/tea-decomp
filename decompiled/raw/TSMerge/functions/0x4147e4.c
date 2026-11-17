// name: FUN_004147e4
// address: 0x4147e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004147e4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x465d70);
  if (DAT_00465954 == '\0') {
    FUN_00443b28((undefined4 *)&DAT_00476b4d,(uint *)s_imagehlp_dll_00465b6f,'\x01','\x01','\0');
    DAT_00465954 = DAT_00465954 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476b4d;
}

