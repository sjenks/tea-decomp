// name: FUN_0043c5bc
// address: 0x43c5bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043c5bc(uint *param_1,byte param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint uVar2;
  undefined4 local_28;
  
  FUN_00467ba8(0x47f4b8);
  if (param_1 != (uint *)0x0) {
    if ((char)param_1[1] == '\0') {
      uVar2 = *param_1;
      puVar1 = FUN_0043c108();
      FUN_0043c378((int)puVar1,uVar2);
    }
    FUN_004284a8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return local_28;
}

