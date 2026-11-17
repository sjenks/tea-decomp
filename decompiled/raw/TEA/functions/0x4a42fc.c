// name: FUN_004a42fc
// address: 0x4a42fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a42fc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004a43c8(*(int *)(param_1 + 8),param_2);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = 0;
  FUN_00499da0(param_2,*(int *)(param_1 + 8) + 0x20,4);
  FUN_00499da0(param_2,*(int *)(param_1 + 8) + 0x24,4);
  FUN_00499da0(param_2,*(int *)(param_1 + 8) + 0x28,4);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3c) = iVar2 != 0;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3d) = iVar2 != 0;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3e) = iVar2 != 0;
  (**(code **)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x48))();
  return *(undefined4 *)(param_1 + 8);
}

