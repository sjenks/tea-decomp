// name: FUN_004e6298
// address: 0x4e6298
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e6298(int param_1,int param_2,UINT param_3)

{
  if (param_1 == 0) {
    if (DAT_00518c4c != (code *)0x0) {
      (*DAT_00518c4c)();
    }
    FUN_004e6f48();
    (*(code *)PTR_FUN_00518c50)();
  }
  else {
    DAT_00518c4c = (code *)0x0;
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_00518c54)();
      (*(code *)PTR_FUN_00518c58)();
    }
    FUN_004e6e5c(param_3);
  }
  return;
}

