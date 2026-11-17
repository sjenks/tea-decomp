// name: FUN_0042a714
// address: 0x42a714
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042a714(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x58))();
    *param_2 = *param_2 + iVar1;
  }
  return;
}

