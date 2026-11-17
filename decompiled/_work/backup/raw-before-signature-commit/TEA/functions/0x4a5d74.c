// name: FUN_004a5d74
// address: 0x4a5d74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a5d74(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == *(int *)(param_1 + iVar1 * 0x10)) {
      *(undefined4 *)(param_1 + 8 + iVar1 * 0x10) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1f);
  return;
}

