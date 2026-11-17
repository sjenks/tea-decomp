// name: FUN_00445e1c
// address: 0x445e1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00445e1c(int *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    SetFocus(*(HWND *)(*param_1 + 0xc));
    piVar1 = (int *)param_1[6];
    param_1[6] = 0;
    (**(code **)(*piVar1 + 4))();
    param_1[6] = (int)piVar1;
  }
  return;
}

