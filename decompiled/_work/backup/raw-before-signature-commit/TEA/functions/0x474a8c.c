// name: FUN_00474a8c
// address: 0x474a8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00474a8c(int param_1)

{
  HWND pHVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(int *)(*(int *)(param_1 + 0x48) + 0xa0) == 0);
  if (uVar2 == 0) {
    pHVar1 = (HWND)0xfffffffe;
  }
  else {
    pHVar1 = (HWND)0xffffffff;
  }
  FUN_004a7aa0(*(int *)(param_1 + 4),pHVar1,0,0,0,0,3);
  *(uint *)(*(int *)(param_1 + 0x48) + 0xa0) = uVar2;
  return;
}

