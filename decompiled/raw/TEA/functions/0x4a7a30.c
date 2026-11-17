// name: FUN_004a7a30
// address: 0x4a7a30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a7a30(int param_1,LPRECT param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x20);
    param_2->left = iVar4;
    param_2->top = iVar3;
    param_2->right = iVar2 + iVar4;
    param_2->bottom = iVar1 + iVar3;
  }
  else {
    GetWindowRect(*(HWND *)(param_1 + 0xc),param_2);
  }
  return;
}

