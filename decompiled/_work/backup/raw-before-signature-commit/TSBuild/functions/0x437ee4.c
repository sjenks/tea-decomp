// name: FUN_00437ee4
// address: 0x437ee4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00437ee4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x74) & 0x10) == 0) {
    iVar2 = param_1;
    uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x3c))();
  }
  else {
    iVar2 = *(int *)(param_1 + 0x6c);
    uVar1 = (**(code **)(*(int *)(iVar2 + 0x1b) + 4))();
  }
  if ((char)uVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + 8) + 0x18))(uVar1,*(int *)(param_1 + 8),iVar2,param_1,param_2);
  }
  return;
}

