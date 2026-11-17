// name: FUN_004755ac
// address: 0x4755ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004755ac(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_ac;
  int local_88 [33];
  
  FUN_004dce64(0x4ffc1c);
  FUN_004cc0dc(&LAB_00437ba4);
  uVar1 = FUN_004e7624((int *)0x0);
  FUN_004e4280(uVar1);
  piVar2 = FUN_00474e1c(local_88,0);
  uVar1 = (**(code **)(*(int *)((int)piVar2 + 0x1b) + 8))();
  FUN_00474ef0(local_88,2);
  FUN_004089c8();
  *in_FS_OFFSET = local_ac;
  return uVar1;
}

