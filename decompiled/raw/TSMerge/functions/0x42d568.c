// name: FUN_0042d568
// address: 0x42d568
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042d568(int param_1,LPRECT param_2)

{
  LONG LVar1;
  LONG LVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    GetClientRect(*(HWND *)(param_1 + 0xc),param_2);
    return;
  }
  LVar1 = *(LONG *)(param_1 + 0x2c);
  LVar2 = *(LONG *)(param_1 + 0x28);
  param_2->left = 0;
  param_2->top = 0;
  param_2->right = LVar2;
  param_2->bottom = LVar1;
  return;
}

