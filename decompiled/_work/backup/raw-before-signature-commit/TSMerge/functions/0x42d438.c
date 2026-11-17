// name: FUN_0042d438
// address: 0x42d438
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __cdecl FUN_0042d438(int param_1)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x1c);
  }
  else {
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14);
  }
  return LVar1;
}

