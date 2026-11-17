// name: FUN_004a7a6c
// address: 0x4a7a6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a7a6c(int param_1,LPRECT param_2)

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

