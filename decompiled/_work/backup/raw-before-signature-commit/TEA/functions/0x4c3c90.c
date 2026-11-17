// name: FUN_004c3c90
// address: 0x4c3c90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004c3c90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x400;
  uVar1 = *(undefined4 *)(param_1 + 0xc6);
  *(undefined4 *)(param_1 + 0xc6) = 0x400;
  FUN_004c3ec0(*(int *)(param_1 + 0x10e));
  FUN_004c3eec(*(int *)(param_1 + 0x10e));
  iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0x18))();
  *(undefined4 *)(param_1 + 0xc6) = uVar1;
  return iVar2 == 1;
}

