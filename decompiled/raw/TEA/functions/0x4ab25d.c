// name: FUN_004ab25d
// address: 0x4ab25d
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ab25d(int *param_1)

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
    FUN_004cc0cc();
    *(undefined4 *)((int)param_1 + 6) = 0;
  }
  return;
}

