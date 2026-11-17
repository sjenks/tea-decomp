// name: FUN_0044e724
// address: 0x44e724
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044e724(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_00455f04(0x4722cc);
  FUN_0044cd28(&local_8,param_1);
  piVar1 = (int *)FUN_0044cc54(&local_8);
  uVar2 = FUN_0044e788(piVar1);
  FUN_0040b7b0(&local_8,2);
  *in_FS_OFFSET = local_2c;
  return uVar2;
}

