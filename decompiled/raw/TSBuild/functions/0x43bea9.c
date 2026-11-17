// name: FUN_0043bea9
// address: 0x43bea9
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043bea9(int *param_1)

{
  BOOL BVar1;
  int *piVar2;
  
  if (*(int *)((int)param_1 + 6) == 0) {
    if (*param_1 != 0) {
      BVar1 = IsWindow((HWND)*param_1);
      if (BVar1 != 0) {
        EnableWindow((HWND)*param_1,1);
        *param_1 = 0;
      }
    }
  }
  else {
    for (piVar2 = *(int **)((int)param_1 + 6); *piVar2 != 0; piVar2 = piVar2 + 1) {
      EnableWindow((HWND)*piVar2,1);
    }
    FUN_0045681c();
    *(undefined4 *)((int)param_1 + 6) = 0;
  }
  return;
}

