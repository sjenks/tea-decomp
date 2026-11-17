// name: FUN_004ad468
// address: 0x4ad468
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004ad468(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_004ad498(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x14) = uVar2;
  return *(undefined4 *)(param_1 + 8);
}

