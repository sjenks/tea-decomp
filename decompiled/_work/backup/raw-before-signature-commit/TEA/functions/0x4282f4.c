// name: FUN_004282f4
// address: 0x4282f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004282f4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  if (*(int *)(iVar1 + 0xc) < *(int *)(iVar1 + 0x14)) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
    FUN_0049c744(*(int *)(param_1 + 0x68),*(undefined4 *)(iVar1 + 8));
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_0049c744(*(int *)(param_1 + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
  }
  (**(code **)(*(int *)(param_1 + 0x35) + 0x50))();
  return;
}

