// name: FUN_004431a0
// address: 0x4431a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004431a0(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  int *piVar2;
  int *piVar3;
  
  hWnd = (HWND)(**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x2b) + 0xc) + 0x24))();
  piVar3 = (int *)0x0;
  if ((hWnd != (HWND)0x0) && (BVar1 = IsWindow(hWnd), piVar2 = piVar3, BVar1 != 0)) {
    do {
      piVar2 = (int *)FUN_004453d4((undefined4 *)(param_1 + 0x14),(int)piVar2);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar3 = (int *)(**(code **)(*piVar2 + 0x38))();
    } while (piVar3 == (int *)0x0);
  }
  return piVar3;
}

