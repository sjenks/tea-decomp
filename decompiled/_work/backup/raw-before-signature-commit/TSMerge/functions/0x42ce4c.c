// name: FUN_0042ce4c
// address: 0x42ce4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0042ce4c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
    iVar1 = FUN_0042b294(param_1);
    return (uint)(iVar1 != 0);
  }
  if ((*(byte *)(param_1 + 0x74) & 0x10) != 0) {
    uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x1b) + 4))();
    return uVar2;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))();
  return uVar2;
}

