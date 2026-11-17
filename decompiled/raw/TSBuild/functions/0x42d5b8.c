// name: FUN_0042d5b8
// address: 0x42d5b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042d5b8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*(uint *)(iVar1 + 5) <= *(uint *)(iVar1 + 1)) {
    FUN_0042d5ec(iVar1,*(int *)(iVar1 + 1) + 1);
  }
  iVar2 = *(int *)(iVar1 + 1);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(undefined4 *)(*(int *)(iVar1 + 9) + iVar2 * 4) = param_2;
  return;
}

