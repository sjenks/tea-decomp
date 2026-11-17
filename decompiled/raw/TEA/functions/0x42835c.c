// name: FUN_0042835c
// address: 0x42835c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042835c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  iVar1 = *(int *)(iVar2 + 8);
  if (1 < *(int *)(iVar1 + 8)) {
    *(undefined4 *)(iVar1 + 0xc) = 1;
    *(undefined4 *)(iVar1 + 8) = 1;
    FUN_0049c744(*(int *)(param_1 + 0x68),1);
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_0049c744(*(int *)(param_1 + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0x35) + 0x50))();
  }
  return iVar2;
}

