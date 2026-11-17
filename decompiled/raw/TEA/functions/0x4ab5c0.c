// name: FUN_004ab5c0
// address: 0x4ab5c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ab5c0(int param_1,byte param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0xc0); iVar1 = iVar1 + 1) {
      if (*(int *)(param_1 + iVar1 * 0xc) != 0) {
        FUN_00493eb4(*(uint *)(param_1 + iVar1 * 0xc));
        *(undefined4 *)(param_1 + iVar1 * 0xc) = 0;
        *(undefined4 *)(param_1 + 4 + iVar1 * 0xc) = 0;
        *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = 0;
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

