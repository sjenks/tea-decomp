// name: FUN_00498f10
// address: 0x498f10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00498f10(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x5083fc);
  piVar1 = DAT_005083e8;
  if ((DAT_005083e8 == (int *)0x0) && (piVar1 = (int *)FUN_004cc0f0(), piVar1 != (int *)0x0)) {
    FUN_00499330(piVar1);
  }
  DAT_005083e8 = piVar1;
  *in_FS_OFFSET = local_2c;
  return;
}

