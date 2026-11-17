// name: FUN_00446004
// address: 0x446004
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00446004(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(code **)(param_1 + 0x60) = FUN_00434bec;
  iVar1 = FUN_00415500();
  if (iVar1 == 0) {
    uVar2 = FUN_00415450();
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 4) = uVar2;
    uVar2 = 2;
  }
  else {
    **(undefined4 **)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x14) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 4) = 0;
    uVar2 = 1;
  }
  return uVar2;
}

