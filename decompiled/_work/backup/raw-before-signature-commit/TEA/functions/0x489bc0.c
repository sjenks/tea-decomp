// name: FUN_00489bc0
// address: 0x489bc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00489bc0(int *param_1)

{
  FUN_0049081c((int)param_1);
  if ((*(byte *)((int)param_1 + 0x56) & 2) == 0) {
    if ((DAT_00506c48 & 1) != 0) {
      FUN_004903b8((int)param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x6c))();
  }
  return;
}

