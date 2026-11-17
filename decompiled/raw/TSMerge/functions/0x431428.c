// name: FUN_00431428
// address: 0x431428
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00431428(uint *param_1,byte param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint uVar2;
  undefined4 local_28;
  
  FUN_00455f04(0x46b6dc);
  if (param_1 != (uint *)0x0) {
    if ((char)param_1[1] == '\0') {
      uVar2 = *param_1;
      puVar1 = FUN_00430f74();
      FUN_004311e4((int)puVar1,uVar2);
    }
    FUN_0041d334(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return local_28;
}

