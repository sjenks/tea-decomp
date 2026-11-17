// name: FUN_004ba384
// address: 0x4ba384
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004ba384(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_004ba3cc(*(int *)(param_1 + 8),param_2);
  FUN_004bd5e4(*(int *)(param_1 + 8) + 0x1c,param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x30) = 0;
  return *(undefined4 *)(param_1 + 8);
}

