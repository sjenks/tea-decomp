// name: FUN_004ab72c
// address: 0x4ab72c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ab72c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = 0; (iVar2 < *(int *)(param_1 + 0xc0) && (*(int *)(param_1 + iVar2 * 0xc) != 0));
      iVar2 = iVar2 + 1) {
    if (param_2 == *(int *)(param_1 + iVar2 * 0xc)) {
      piVar1 = (int *)(param_1 + 8 + iVar2 * 0xc);
      *piVar1 = *piVar1 + -1;
      return;
    }
  }
  return;
}

