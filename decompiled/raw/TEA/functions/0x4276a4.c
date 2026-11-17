// name: FUN_004276a4
// address: 0x4276a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004276a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = FUN_004a6e1c(iVar3);
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    (**(code **)(*(int *)(iVar1 + 8) + 100))(iVar1,*(int *)(iVar1 + 8),iVar3,iVar1,3);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return uVar2;
}

