// name: FUN_004858a4
// address: 0x4858a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004858a4(int param_1,undefined4 param_2,char param_3)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if (param_3 == '\0') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

