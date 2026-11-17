// name: FUN_0041c4b0
// address: 0x41c4b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041c4b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  while (0 < iVar1) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0x48))();
    uVar3 = FUN_004cc0cc();
    (**(code **)(*(int *)(param_1 + 0xc) + 0x68))
              (uVar3,*(int *)(param_1 + 0xc),uVar2,param_1,iVar1 + -1);
    iVar1 = iVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 1;
  return;
}

