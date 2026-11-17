// name: FUN_0044e93c
// address: 0x44e93c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044e93c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == *(uint *)(param_1 + 1)) {
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_0044e9dc(param_1,*(int *)(param_1 + 1) + 1);
    }
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar1 * 4) = param_2;
  }
  else {
    if (*(uint *)(param_1 + 5) <= param_3) {
      FUN_0044e9dc(param_1,param_3 + 1);
    }
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_0044e9dc(param_1,*(int *)(param_1 + 1) + 1);
    }
    if ((param_3 < *(uint *)(param_1 + 1)) && (*(int *)(param_1 + 1) != 0)) {
      FUN_004675a4((undefined4 *)((param_3 + 1) * 4 + *(int *)(param_1 + 9)),
                   (undefined4 *)(param_3 * 4 + *(int *)(param_1 + 9)),
                   (*(int *)(param_1 + 1) - param_3) * 4);
    }
    *(undefined4 *)(*(int *)(param_1 + 9) + param_3 * 4) = param_2;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  return;
}

