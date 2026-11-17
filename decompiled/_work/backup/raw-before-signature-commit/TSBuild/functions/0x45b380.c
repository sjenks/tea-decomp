// name: FUN_0045b380
// address: 0x45b380
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045b380(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_00467ba8(0x48625c);
  FUN_00459808(&local_8,param_1);
  piVar1 = (int *)FUN_00459448(&local_8);
  uVar2 = FUN_0045b3e4(piVar1);
  FUN_00405004(&local_8,2);
  *in_FS_OFFSET = local_2c;
  return uVar2;
}

