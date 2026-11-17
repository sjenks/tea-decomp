// name: FUN_004439f8
// address: 0x4439f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004439f8(int param_1)

{
  uint uVar1;
  
  if (DAT_0046f040 == 0) {
    return 0;
  }
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_0046f040 + 1) <= uVar1) {
      return 0;
    }
    if (param_1 == *(int *)(*(int *)(DAT_0046f040 + 9) + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

