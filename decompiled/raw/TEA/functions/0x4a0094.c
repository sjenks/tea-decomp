// name: FUN_004a0094
// address: 0x4a0094
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_004a0094(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x509add);
  if (DAT_00509acc == '\0') {
    FUN_004aba20((uint *)&DAT_0051b430,0x50bfbc,&DAT_0051b1e0,&DAT_0051b1f4);
    _DAT_0051b435 = DAT_0051b1f4;
    _DAT_0051b439 = 0;
    _DAT_0051b43d = 0;
    DAT_0051b441 = 0;
    DAT_00509acc = DAT_00509acc + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b430;
}

