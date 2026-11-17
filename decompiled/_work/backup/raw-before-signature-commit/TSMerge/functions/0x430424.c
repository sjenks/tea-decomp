// name: FUN_00430424
// address: 0x430424
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00430424(int param_1,int *param_2)

{
  BOOL BVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  HWND hWnd;
  
  if ((((*(int *)(param_1 + 0x31) != 0) &&
       (BVar1 = IsWindow(*(HWND *)(**(int **)(param_1 + 0x31) + 0xc)), BVar1 != 0)) &&
      ((*param_2 == *(int *)(**(int **)(param_1 + 0x2b) + 0xc) ||
       (BVar1 = IsChild(*(HWND *)(**(int **)(param_1 + 0x2b) + 0xc),(HWND)*param_2), BVar1 != 0))))
     && ((0x1ff < (uint)param_2[1] && ((uint)param_2[1] < 0x20e)))) {
    FUN_0042d1a4(**(int **)(param_1 + 0x31),0x407,0,(LPARAM)param_2);
  }
  hWnd = (HWND)*param_2;
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    if (DAT_0046b440 == '\0') {
      DAT_0046b43c = GetDesktopWindow();
      DAT_0046b440 = DAT_0046b440 + '\x01';
    }
    if (hWnd == DAT_0046b43c) break;
    LVar2 = FUN_0042bc6c(hWnd,param_1);
    if ((LVar2 != 0) && (uVar3 = (**(code **)(*(int *)(LVar2 + 8) + 0x28))(), (char)uVar3 != '\0'))
    {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    hWnd = GetParent(hWnd);
  }
  return 0;
}

