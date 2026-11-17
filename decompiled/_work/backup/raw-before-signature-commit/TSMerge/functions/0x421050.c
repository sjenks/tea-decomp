// name: FUN_00421050
// address: 0x421050
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421050(uint param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_00455f04(0x46851c);
  piVar1 = FUN_00420e50(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  FUN_00418068(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

