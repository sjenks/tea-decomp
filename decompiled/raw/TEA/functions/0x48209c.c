// name: FUN_0048209c
// address: 0x48209c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048209c(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x502fc4);
  if (param_1 != 0) {
    for (piVar1 = *(int **)(param_1 + 0xa4); piVar1 < *(int **)(param_1 + 0xa8); piVar1 = piVar1 + 1
        ) {
      if (*piVar1 != 0) {
        FUN_00481ebc(*piVar1,3);
      }
    }
    FUN_004803d8(param_1 + 0xa0,*(int *)(param_1 + 0xa4),*(int *)(param_1 + 0xa8));
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

