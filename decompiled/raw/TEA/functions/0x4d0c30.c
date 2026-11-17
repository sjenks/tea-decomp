// name: FUN_004d0c30
// address: 0x4d0c30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004d0c30(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_004dce64(0x5143e8);
  FUN_004cf0b8(&local_8,param_1);
  piVar1 = (int *)FUN_004cecf8(&local_8);
  uVar2 = FUN_004d0c94(piVar1);
  FUN_00437eb0(&local_8,2);
  *in_FS_OFFSET = local_2c;
  return uVar2;
}

