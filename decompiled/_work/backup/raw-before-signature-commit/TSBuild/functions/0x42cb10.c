// name: FUN_0042cb10
// address: 0x42cb10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0042cb10(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47c5e0);
  piVar1 = DAT_0047c5cc;
  if ((DAT_0047c5cc == (int *)0x0) && (piVar1 = (int *)FUN_00456840(), piVar1 != (int *)0x0)) {
    FUN_0042cf30(piVar1);
  }
  DAT_0047c5cc = piVar1;
  *in_FS_OFFSET = local_2c;
  return;
}

