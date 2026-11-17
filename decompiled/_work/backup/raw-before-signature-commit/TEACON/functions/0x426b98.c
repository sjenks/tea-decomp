// name: FUN_00426b98
// address: 0x426b98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00426b98(int param_1,int param_2,UINT param_3)

{
  if (param_1 == 0) {
    if (DAT_00433830 != (code *)0x0) {
      (*DAT_00433830)();
    }
    FUN_004277f0();
    (*(code *)PTR_FUN_00433834)();
  }
  else {
    DAT_00433830 = (code *)0x0;
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_00433838)();
      (*(code *)PTR_FUN_0043383c)();
    }
    FUN_00427704(param_3);
  }
  return;
}

