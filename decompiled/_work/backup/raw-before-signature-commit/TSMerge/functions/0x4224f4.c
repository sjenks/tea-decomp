// name: FUN_004224f4
// address: 0x4224f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004224f4(int *param_1,uint param_2)

{
  if (param_2 < *(uint *)(*param_1 + 1)) {
    return *(undefined4 *)(*(int *)(*param_1 + 9) + param_2 * 4);
  }
  return 0;
}

