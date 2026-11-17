// name: FUN_0048fe80
// address: 0x48fe80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048fe80(int param_1,char param_2)

{
  if ((bool)param_2 != ((*(ushort *)(param_1 + 0x42) & 1) != 0)) {
    if (param_2 == '\0') {
      *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) & 0xfffe;
    }
    else {
      *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | 1;
    }
    FUN_004903b8(param_1);
  }
  return;
}

