// name: FUN_004138e4
// address: 0x4138e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004138e4(int *param_1)

{
  FUN_00419a6c((int)param_1);
  if ((*(byte *)((int)param_1 + 0x56) & 2) == 0) {
    if ((DAT_00467240 & 1) != 0) {
      FUN_00419608((int)param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x6c))();
  }
  return;
}

