// name: FUN_00485758
// address: 0x485758
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00485758(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

