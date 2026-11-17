// name: FUN_004890e4
// address: 0x4890e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004890e4(int *param_1,int param_2)

{
  if (param_2 != (int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c) {
    if ((((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 1) ||
        ((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 3)) && (param_2 == 1)) {
      FUN_00488f94(param_1);
    }
    else {
      *(byte *)(param_1 + 0x15) = (byte)param_2 & 0xf | *(byte *)(param_1 + 0x15) & 0xf0;
    }
    FUN_004903b8((int)param_1);
    FUN_00490404((int)param_1);
  }
  return;
}

