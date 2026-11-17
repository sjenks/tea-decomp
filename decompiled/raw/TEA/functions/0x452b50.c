// name: FUN_00452b50
// address: 0x452b50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00452b50(int *param_1,int param_2)

{
  int *piVar1;
  HWND pHVar2;
  
  if (param_2 != param_1[0x1b4]) {
    piVar1 = *(int **)(*(int *)(param_1[0x1b4] * 4 + param_1[0x1ad]) + 8);
    pHVar2 = GetFocus();
    if (pHVar2 == *(HWND *)(*piVar1 + 0xc)) {
      SetFocus(*(HWND *)(**(int **)(*(int *)(param_2 * 4 + param_1[0x1ad]) + 8) + 0xc));
    }
    else {
      param_1[0x1b4] = param_2;
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
  }
  return;
}

