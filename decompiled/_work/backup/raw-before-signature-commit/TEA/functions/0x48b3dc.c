// name: FUN_0048b3dc
// address: 0x48b3dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048b3dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(code **)(param_1 + 0x38) = FUN_004b070c;
  iVar1 = FUN_0048c23c();
  if (iVar1 == 0) {
    uVar2 = FUN_0048c2ac();
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = uVar2;
    uVar2 = 2;
  }
  else {
    **(undefined4 **)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 8) = *(undefined4 *)(param_1 + 0x28);
    uVar2 = 1;
  }
  return uVar2;
}

