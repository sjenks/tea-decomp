// name: FUN_00410750
// address: 0x410750
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00410750(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  *param_3 = iVar1 >> 2;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x14);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  *param_2 = iVar1 >> 2;
  return;
}

