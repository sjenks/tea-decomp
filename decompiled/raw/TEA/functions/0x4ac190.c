// name: FUN_004ac190
// address: 0x4ac190
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004ac190(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004ac1c8(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x14) = iVar2 != 0;
  return *(undefined4 *)(param_1 + 8);
}

