// name: FUN_004a7910
// address: 0x4a7910
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __cdecl FUN_004a7910(int param_1,LONG param_2)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x18);
    *(LONG *)(param_1 + 0x18) = param_2;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10,param_2);
  }
  return LVar1;
}

