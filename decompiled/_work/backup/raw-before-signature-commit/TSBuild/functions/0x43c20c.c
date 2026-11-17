// name: FUN_0043c20c
// address: 0x43c20c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043c20c(int param_1,byte param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0xc0); iVar1 = iVar1 + 1) {
      if (*(int *)(param_1 + iVar1 * 0xc) != 0) {
        FUN_004282f8(*(uint *)(param_1 + iVar1 * 0xc));
        *(undefined4 *)(param_1 + iVar1 * 0xc) = 0;
        *(undefined4 *)(param_1 + 4 + iVar1 * 0xc) = 0;
        *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = 0;
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}

