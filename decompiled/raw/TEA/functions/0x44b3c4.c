// name: FUN_0044b3c4
// address: 0x44b3c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044b3c4(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0xc) == 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 8) + 4); *(int *)(param_1 + 8) == *(int *)(iVar1 + 0xc)
        ; iVar1 = *(int *)(iVar1 + 4)) {
      *(int *)(param_1 + 8) = iVar1;
    }
    if (iVar1 != *(int *)(*(int *)(param_1 + 8) + 0xc)) {
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
    while (*(int *)(*(int *)(param_1 + 8) + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
    }
  }
  return param_1;
}

