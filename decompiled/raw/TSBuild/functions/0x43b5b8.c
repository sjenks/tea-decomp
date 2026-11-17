// name: FUN_0043b5b8
// address: 0x43b5b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043b5b8(int param_1,int *param_2)

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
    FUN_00438338(**(int **)(param_1 + 0x31),0x407,0,(LPARAM)param_2);
  }
  hWnd = (HWND)*param_2;
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    if (DAT_0047f21c == '\0') {
      DAT_0047f218 = GetDesktopWindow();
      DAT_0047f21c = DAT_0047f21c + '\x01';
    }
    if (hWnd == DAT_0047f218) break;
    LVar2 = FUN_00436e00(hWnd,param_1);
    if ((LVar2 != 0) && (uVar3 = (**(code **)(*(int *)(LVar2 + 8) + 0x28))(), (char)uVar3 != '\0'))
    {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    hWnd = GetParent(hWnd);
  }
  return 0;
}

