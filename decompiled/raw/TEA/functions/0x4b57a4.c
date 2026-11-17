// name: FUN_004b57a4
// address: 0x4b57a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b57a4(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  for (iVar1 = *(int *)(param_1 + 0x26); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    bVar2 = (**(code **)(*(int *)(iVar1 + 8) + 0x14))();
    iVar4 = iVar4 - (uint)bVar2;
    if (iVar4 == -3) break;
  }
  if (iVar4 != -1) {
    for (iVar1 = *(int *)(param_1 + 0x26); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      iVar4 = iVar1;
      iVar3 = (**(code **)(*(int *)(iVar1 + 8) + 0x10))();
      if ((iVar3 != 0) &&
         (iVar4 = (**(code **)(*(int *)(iVar1 + 8) + 0x10))(iVar3,*(int *)(iVar1 + 8),iVar4,iVar1),
         *(int *)(iVar4 + 0xc) != 0)) {
        (**(code **)(*(int *)(iVar1 + 8) + 0x14))();
      }
    }
  }
  return;
}

