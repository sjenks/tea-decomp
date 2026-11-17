// name: FUN_0044eb8c
// address: 0x44eb8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044eb8c(int param_1)

{
  uint uVar1;
  
  if (DAT_00482e1c == 0) {
    return 0;
  }
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_00482e1c + 1) <= uVar1) {
      return 0;
    }
    if (param_1 == *(int *)(*(int *)(DAT_00482e1c + 9) + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

