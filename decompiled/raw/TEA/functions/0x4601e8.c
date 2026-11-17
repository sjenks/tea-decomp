// name: FUN_004601e8
// address: 0x4601e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004601e8(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      DAT_0051ac64 = 0;
    }
    else if (*param_1 == 1) {
      FUN_00468b8c((int)param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

