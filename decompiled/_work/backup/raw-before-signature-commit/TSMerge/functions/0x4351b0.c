// name: FUN_004351b0
// address: 0x4351b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004351b0(int *param_1)

{
  (**(code **)(param_1[3] + 0x24))();
  if ((((*(byte *)(*param_1 + 0x76) & 0x10) == 0) && (*(int *)(*param_1 + 0xc) == 0)) &&
     ((*(byte *)(*param_1 + 0x75) & 8) != 0)) {
    FUN_00430928(*(int *)(*param_1 + 0x6c),*param_1);
  }
  return;
}

