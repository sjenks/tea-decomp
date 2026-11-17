// name: FUN_0048d8bc
// address: 0x48d8bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048d8bc(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_005060a0;
    FUN_0048db40(param_1);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

