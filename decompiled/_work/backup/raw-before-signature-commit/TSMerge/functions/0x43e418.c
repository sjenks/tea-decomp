// name: FUN_0043e418
// address: 0x43e418
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043e418(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_0043e460(*(int *)(param_1 + 8),param_2);
  FUN_00441678(*(int *)(param_1 + 8) + 0x1c,param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00422908(param_2);
  *(uint *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x30) = 0;
  return *(undefined4 *)(param_1 + 8);
}

