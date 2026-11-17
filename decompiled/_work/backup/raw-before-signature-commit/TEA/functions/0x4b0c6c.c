// name: FUN_004b0c6c
// address: 0x4b0c6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b0c6c(int *param_1)

{
  (**(code **)(param_1[3] + 0x20))();
  if ((((*(byte *)(*param_1 + 0x76) & 0x10) == 0) && (*(int *)(*param_1 + 0xc) == 0)) &&
     ((*(byte *)(*param_1 + 0x75) & 8) != 0)) {
    FUN_004aae70(*(int *)(*param_1 + 0x6c),*param_1);
  }
  return;
}

