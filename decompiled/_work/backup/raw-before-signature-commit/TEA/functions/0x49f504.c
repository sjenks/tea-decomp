// name: FUN_0049f504
// address: 0x49f504
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049f504(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

