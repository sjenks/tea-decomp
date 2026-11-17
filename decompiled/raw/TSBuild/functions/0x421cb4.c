// name: FUN_00421cb4
// address: 0x421cb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421cb4(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0047a4f8;
    FUN_00421ef4(param_1);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}

