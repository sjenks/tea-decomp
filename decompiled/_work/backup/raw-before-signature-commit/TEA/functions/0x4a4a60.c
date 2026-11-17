// name: FUN_004a4a60
// address: 0x4a4a60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a4a60(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x58))();
    *param_2 = *param_2 + iVar1;
  }
  return;
}

