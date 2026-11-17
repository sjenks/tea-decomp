// name: FUN_004bdfbc
// address: 0x4bdfbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004bdfbc(int *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 uVar2;
  
  if (param_3 == (HWND)0x0) {
    for (hWnd = (HWND)(**(code **)(param_1[3] + 0x24))();
        (hWnd != (HWND)0x0 && (hWnd != *(HWND *)(*param_1 + 0xc))); hWnd = GetParent(hWnd)) {
      LVar1 = FUN_004a614c(hWnd,*(LPARAM *)(*param_1 + 0x6c));
      if (LVar1 != 0) {
        uVar2 = (**(code **)(*(int *)(LVar1 + 8) + 0x48))();
        return uVar2;
      }
    }
  }
  uVar2 = FUN_004a5968((undefined4 *)*param_1,param_2,param_3,param_4);
  return uVar2;
}

