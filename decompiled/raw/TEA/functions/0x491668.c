// name: FUN_00491668
// address: 0x491668
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00491668(int *param_1)

{
  UINT_PTR UVar1;
  
  if (*(int *)(*param_1 + 0xc) == 0) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    return CONCAT31((int3)((uint)*param_1 >> 8),1);
  }
  if (*(int *)((int)param_1 + 0x49) == 0) {
    UVar1 = SetTimer(*(HWND *)(*param_1 + 0xc),0xbaca,1000,(TIMERPROC)0x0);
    *(UINT_PTR *)((int)param_1 + 0x49) = UVar1;
  }
  return (uint)(*(int *)((int)param_1 + 0x49) != 0);
}

