// name: FUN_004283a8
// address: 0x4283a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004283a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  iVar2 = *(int *)(iVar1 + 0x14);
  if (*(int *)(iVar1 + 0xc) < iVar2) {
    *(int *)(iVar1 + 0xc) = iVar2;
    *(int *)(iVar1 + 8) = iVar2;
    FUN_0049c744(*(int *)(param_1 + 0x68),iVar2);
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_0049c744(*(int *)(param_1 + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
    (**(code **)(*(int *)(param_1 + 0x35) + 0x50))();
  }
  return;
}

