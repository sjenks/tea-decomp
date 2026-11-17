// name: FUN_00496088
// address: 0x496088
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00496088(int param_1,char param_2)

{
  *(byte *)(param_1 + 0x26) = param_2 << 4 | *(byte *)(param_1 + 0x26) & 0xf;
  *(byte *)(param_1 + 0x1b) =
       (*(char *)(param_1 + 0x26) >> 4) << 4 | *(byte *)(param_1 + 0x1b) & 0xf;
  *(byte *)(param_1 + 0x10) =
       (*(char *)(param_1 + 0x1b) >> 4) << 4 | *(byte *)(param_1 + 0x10) & 0xf;
  *(byte *)(param_1 + 5) = (*(char *)(param_1 + 0x10) >> 4) << 4 | *(byte *)(param_1 + 5) & 0xf;
  return;
}

