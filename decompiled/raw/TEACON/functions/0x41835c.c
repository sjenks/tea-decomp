// name: FUN_0041835c
// address: 0x41835c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041835c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_0041f3fc(0x42ff5c);
  FUN_00416a80(&local_8,param_1);
  piVar1 = (int *)FUN_00416920(&local_8);
  uVar2 = FUN_004183c0(piVar1);
  FUN_00409948(&local_8,2);
  *in_FS_OFFSET = local_2c;
  return uVar2;
}

