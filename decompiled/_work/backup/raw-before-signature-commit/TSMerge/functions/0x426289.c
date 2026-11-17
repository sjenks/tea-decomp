// name: FUN_00426289
// address: 0x426289
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00426289(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x46946e);
  if (DAT_00469420 != '\0') {
    if (DAT_00476e45 != (uint *)0x0) {
      FUN_00411fc4(DAT_00476e45,3);
    }
    FUN_00431428((uint *)&DAT_00476e34,0);
    DAT_00469420 = '\0';
  }
  *in_FS_OFFSET = local_2c;
  return;
}

