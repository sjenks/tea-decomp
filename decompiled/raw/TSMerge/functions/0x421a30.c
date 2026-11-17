// name: FUN_00421a30
// address: 0x421a30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00421a30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_00421ae0(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar1 = *(int *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar2 = FUN_00455b74(*(char **)(param_2 + 8),*(char **)(iVar1 + 8));
    if (iVar2 < 0) {
      bVar4 = true;
    }
    else if (iVar2 < 1) {
      if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(iVar1 + 0xc) == 0)) ||
         (*(int *)(param_2 + 0xc) == *(int *)(iVar1 + 0xc))) {
        bVar4 = false;
      }
      else {
        bVar4 = *(uint *)(param_2 + 0xc) < *(uint *)(iVar1 + 0xc);
      }
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
  }
  *(int *)(*(int *)(param_1 + 9) + iVar3 * 4) = param_2;
  return iVar3;
}

