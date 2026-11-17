// name: FUN_004bf950
// address: 0x4bf950
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004bf950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != -1) {
    iVar2 = FUN_004bf998(*(int *)(param_1 + 8),param_2);
    if (iVar2 == -1) {
      iVar2 = *(int *)(param_1 + 8);
      if (*(uint *)(iVar2 + 5) <= *(uint *)(iVar2 + 1)) {
        FUN_0048aee8(iVar2,*(int *)(iVar2 + 1) + 1);
      }
      iVar1 = *(int *)(iVar2 + 1);
      *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + 1;
      *(int *)(*(int *)(iVar2 + 9) + iVar1 * 4) = param_2;
    }
  }
  return;
}

