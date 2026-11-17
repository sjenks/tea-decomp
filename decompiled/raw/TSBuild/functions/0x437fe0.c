// name: FUN_00437fe0
// address: 0x437fe0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00437fe0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
    iVar1 = FUN_00436428(param_1);
    return (uint)(iVar1 != 0);
  }
  if ((*(byte *)(param_1 + 0x74) & 0x10) != 0) {
    uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x1b) + 4))();
    return uVar2;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))();
  return uVar2;
}

