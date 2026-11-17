// name: FUN_0044d0cc
// address: 0x44d0cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044d0cc(int *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  HWND hWnd;
  LRESULT LVar1;
  
  if (param_3 == (HWND)0x0) {
    for (hWnd = (HWND)(**(code **)(param_1[3] + 0x24))();
        (hWnd != (HWND)0x0 && (hWnd != *(HWND *)(*param_1 + 0xc))); hWnd = GetParent(hWnd)) {
      LVar1 = FUN_00436e00(hWnd,*(LPARAM *)(*param_1 + 0x6c));
      if (LVar1 != 0) {
        (**(code **)(*(int *)(LVar1 + 8) + 0x48))();
        return;
      }
    }
  }
  FUN_0043661c((undefined4 *)*param_1,param_2,param_3,param_4);
  return;
}

