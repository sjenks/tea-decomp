// name: FUN_0041e908
// address: 0x41e908
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e908(int *param_1)

{
  FUN_00424be0((int)param_1);
  if ((*(byte *)((int)param_1 + 0x56) & 2) == 0) {
    if ((DAT_0047b01c & 1) != 0) {
      FUN_0042477c((int)param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x6c))();
  }
  return;
}

