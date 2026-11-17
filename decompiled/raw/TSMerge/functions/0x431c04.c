// name: FUN_00431c04
// address: 0x431c04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00431c04(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00431c3c(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00422970(param_2);
  *(bool *)(iVar1 + 0x14) = iVar2 != 0;
  return *(undefined4 *)(param_1 + 8);
}

