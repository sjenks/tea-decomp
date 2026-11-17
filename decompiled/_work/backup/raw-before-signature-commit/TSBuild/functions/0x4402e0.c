// name: FUN_004402e0
// address: 0x4402e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004402e0(int *param_1)

{
  (**(code **)(param_1[3] + 0x20))();
  if ((((*(byte *)(*param_1 + 0x76) & 0x10) == 0) && (*(int *)(*param_1 + 0xc) == 0)) &&
     ((*(byte *)(*param_1 + 0x75) & 8) != 0)) {
    FUN_0043babc(*(int *)(*param_1 + 0x6c),*param_1);
  }
  return;
}

