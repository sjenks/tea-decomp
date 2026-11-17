// name: FUN_00431458
// address: 0x431458
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00431458(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x1144) = (char)param_2;
  *(int *)(param_1 + 0x1148) = *(int *)(param_1 + 0x1148) + 1;
  return param_2;
}

