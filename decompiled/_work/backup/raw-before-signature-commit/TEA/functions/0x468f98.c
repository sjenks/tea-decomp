// name: FUN_00468f98
// address: 0x468f98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00468f98(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4fce60);
  piVar1 = (int *)FUN_004690e8();
  if (*piVar1 == 0) {
    puVar2 = (undefined4 *)FUN_004cc0f0();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00469a6c(puVar2);
    }
    *piVar1 = (int)puVar2;
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

