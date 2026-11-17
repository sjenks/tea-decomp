// name: FUN_004190f8
// address: 0x4190f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004190f8(int param_1,char param_2)

{
  if ((bool)param_2 != ((*(ushort *)(param_1 + 0x42) & 1) != 0)) {
    if (param_2 == '\0') {
      *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) & 0xfffe;
    }
    else {
      *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | 1;
    }
    FUN_00419608(param_1);
  }
  return;
}

