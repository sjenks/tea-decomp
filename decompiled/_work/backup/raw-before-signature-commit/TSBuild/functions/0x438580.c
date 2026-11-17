// name: FUN_00438580
// address: 0x438580
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __cdecl FUN_00438580(int param_1)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x18);
  }
  else {
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
  }
  return LVar1;
}

