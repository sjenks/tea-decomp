// name: FUN_004595a0
// address: 0x4595a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_004595a0(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x485c50);
  puVar1 = (undefined4 *)FUN_00456840();
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = FUN_004595f8();
    FUN_00459624(puVar1,1,pcVar2);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

