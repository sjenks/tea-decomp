// name: FUN_00429fb0
// address: 0x429fb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00429fb0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0042a07c(*(int *)(param_1 + 8),param_2);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = 0;
  FUN_0042280c(param_2,*(int *)(param_1 + 8) + 0x20,4);
  FUN_0042280c(param_2,*(int *)(param_1 + 8) + 0x24,4);
  FUN_0042280c(param_2,*(int *)(param_1 + 8) + 0x28,4);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00422970(param_2);
  *(bool *)(iVar1 + 0x3c) = iVar2 != 0;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00422970(param_2);
  *(bool *)(iVar1 + 0x3d) = iVar2 != 0;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00422970(param_2);
  *(bool *)(iVar1 + 0x3e) = iVar2 != 0;
  (**(code **)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x48))();
  return *(undefined4 *)(param_1 + 8);
}

