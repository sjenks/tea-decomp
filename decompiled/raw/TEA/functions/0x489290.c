// name: FUN_00489290
// address: 0x489290
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00489290(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x504bdc);
  if (*(int *)(param_1 + 0x44) == 0) {
    piVar1 = (int *)0x0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_004b1504(piVar1,*(HMODULE *)(*(int *)(**(int **)(param_1 + 6) + 0x70) + 8),
                   *(LPCSTR *)(param_1 + 0x44));
    }
    FUN_004b11dc((int)piVar1,0xf,(uint *)0x0);
    *in_FS_OFFSET = local_2c;
  }
  return piVar1;
}

