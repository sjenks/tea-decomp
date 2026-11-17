// name: FUN_004a795c
// address: 0x4a795c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __cdecl FUN_004a795c(int param_1,LONG param_2)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x1c);
    *(LONG *)(param_1 + 0x1c) = param_2;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14,param_2);
  }
  return LVar1;
}

