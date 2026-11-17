// name: FUN_0045db98
// address: 0x45db98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045db98(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) * 4 + *(int *)(param_1 + 0x6b4));
  iVar2 = FUN_0042ba08(*(int *)(iVar1 + 8));
  FUN_00429084(*(int **)(iVar1 + 4),iVar2);
  FUN_0042bdf0(*(int **)(iVar1 + 8),'\x01');
  return;
}

