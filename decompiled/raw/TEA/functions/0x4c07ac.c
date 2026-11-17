// name: FUN_004c07ac
// address: 0x4c07ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004c07ac(int param_1)

{
  uint uVar1;
  
  if (DAT_005101d0 == 0) {
    return 0;
  }
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_005101d0 + 1) <= uVar1) {
      return 0;
    }
    if (param_1 == *(int *)(*(int *)(DAT_005101d0 + 9) + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

