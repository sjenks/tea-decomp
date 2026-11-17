// name: FUN_0041a7dc
// address: 0x41a7dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041a7dc(int *param_1,int param_2)

{
  HWND pHVar1;
  
  if (param_1[8] != 0) {
    return 0;
  }
  param_1[8] = param_2;
  pHVar1 = SetCapture(*(HWND *)(*param_1 + 0xc));
  return CONCAT31((int3)((uint)pHVar1 >> 8),1);
}

