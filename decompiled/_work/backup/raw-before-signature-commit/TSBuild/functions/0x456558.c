// name: FUN_00456558
// address: 0x456558
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00456558(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x484600);
  if (DAT_004844b4 == '\0') {
    FUN_0044ecbc((undefined4 *)&DAT_0048ce10,(uint *)s_SHELL32_DLL_004844cd,'\x01','\x01','\0');
    DAT_004844b4 = DAT_004844b4 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048ce10;
}

