// name: FUN_0045d63c
// address: 0x45d63c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045d63c(int param_1,int param_2,UINT param_3)

{
  if (param_1 == 0) {
    if (DAT_00475e54 != (code *)0x0) {
      (*DAT_00475e54)();
    }
    FUN_0045e2ec();
    (*(code *)PTR_FUN_00475e58)();
  }
  else {
    DAT_00475e54 = (code *)0x0;
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_00475e5c)();
      (*(code *)PTR_FUN_00475e60)();
    }
    FUN_0045e200(param_3);
  }
  return;
}

