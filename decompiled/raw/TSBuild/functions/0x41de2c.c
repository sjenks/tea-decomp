// name: FUN_0041de2c
// address: 0x41de2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041de2c(int *param_1,int param_2)

{
  if (param_2 != (int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c) {
    if ((((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 1) ||
        ((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 3)) && (param_2 == 1)) {
      FUN_0041dcdc(param_1);
    }
    else {
      *(byte *)(param_1 + 0x15) = (byte)param_2 & 0xf | *(byte *)(param_1 + 0x15) & 0xf0;
    }
    FUN_0042477c((int)param_1);
    FUN_004247c8((int)param_1);
  }
  return;
}

