// name: FUN_004118ec
// address: 0x4118ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004118ec(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  while( true ) {
    if ((uint)(*(int *)(param_1 + 4) * 8 + *(int *)(param_1 + 8)) <= uVar1) {
      return 0;
    }
    if (param_2 == *(int *)(uVar1 + 4)) break;
    uVar1 = uVar1 + 8;
  }
  return uVar1;
}

