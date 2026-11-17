// name: FUN_0048b8f4
// address: 0x48b8f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048b8f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(code **)(param_1 + 0x3c) = FUN_004b070c;
  iVar1 = FUN_0048c274();
  if (iVar1 == 0) {
    uVar2 = FUN_0048c2ac();
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 4) = uVar2;
    uVar2 = 2;
  }
  else {
    **(undefined4 **)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x48) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x4c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x50) = *(undefined4 *)(param_1 + 0x48);
    *(undefined2 *)(*(int *)(param_1 + 0x58) + 0x54) = *(undefined2 *)(param_1 + 0x4c);
    uVar2 = 1;
  }
  return uVar2;
}

