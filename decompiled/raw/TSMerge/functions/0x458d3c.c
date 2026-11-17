// name: FUN_00458d3c
// address: 0x458d3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00458d3c(int param_1)

{
  if (param_1 < 0x11) {
    if (param_1 == 0x10) {
      return *(undefined4 *)(*(int *)(PTR_DAT_00475910 + 0x18) + 8);
    }
    if (param_1 == 0xe) {
      return *(undefined4 *)(*(int *)(PTR_DAT_00475910 + 0x18) + 4);
    }
    if (param_1 == 0xf) {
      return **(undefined4 **)(PTR_DAT_00475910 + 0x18);
    }
  }
  else {
    if (param_1 == 0x50) {
      return *(undefined4 *)(*(int *)(PTR_DAT_00475910 + 0x18) + 0xc);
    }
    if (param_1 == 0x51) {
      return *(undefined4 *)(*(int *)(PTR_DAT_00475910 + 0x18) + 0x10);
    }
  }
  return 0;
}

