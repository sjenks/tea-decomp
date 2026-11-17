// name: FUN_0043c43c
// address: 0x43c43c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043c43c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f4e70);
  FUN_004cc0bc();
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_0043061c(piVar1,*(int *)(param_1 + 4));
    }
    *(int **)(param_1 + 8) = piVar1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

