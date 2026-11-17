// name: FUN_00438180
// address: 0x438180
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438180(int param_1,WPARAM param_2,LPARAM param_3)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2b) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  else {
    iVar1 = **(int **)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    FUN_0042d1a4(iVar1,0x7ffc,param_2,param_3);
  }
  return;
}

