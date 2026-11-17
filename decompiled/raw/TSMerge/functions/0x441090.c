// name: FUN_00441090
// address: 0x441090
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00441090(int param_1,int param_2)

{
  if (param_2 != 0) {
    **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
  return;
}

