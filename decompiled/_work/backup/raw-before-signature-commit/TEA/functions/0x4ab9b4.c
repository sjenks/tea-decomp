// name: FUN_004ab9b4
// address: 0x4ab9b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ab9b4(uint *param_1,byte param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint uVar2;
  undefined4 local_28;
  
  FUN_004dce64(0x50bf44);
  if (param_1 != (uint *)0x0) {
    if ((char)param_1[1] == '\0') {
      uVar2 = *param_1;
      puVar1 = FUN_004ab4bc();
      FUN_004ab72c((int)puVar1,uVar2);
    }
    FUN_00494064(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

