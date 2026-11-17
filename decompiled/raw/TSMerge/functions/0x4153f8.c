// name: FUN_004153f8
// address: 0x4153f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004153f8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x465f74);
  if (DAT_00465ea8 == '\0') {
    FUN_00443b28((undefined4 *)&DAT_00476c18,(uint *)s_COMDLG32_DLL_00465ebc,'\x01','\x01','\0');
    DAT_00465ea8 = DAT_00465ea8 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476c18;
}

