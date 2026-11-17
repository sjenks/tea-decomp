// name: FUN_004a0119
// address: 0x4a0119
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004a0119(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x509b1a);
  if (DAT_00509acc != '\0') {
    if (DAT_0051b441 != (uint *)0x0) {
      FUN_004886b0(DAT_0051b441,3);
    }
    FUN_004ab9b4((uint *)&DAT_0051b430,0);
    DAT_00509acc = '\0';
  }
  *in_FS_OFFSET = local_2c;
  return;
}

