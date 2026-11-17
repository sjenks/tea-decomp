// name: FUN_0041db58
// address: 0x41db58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __cdecl FUN_0041db58(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x10;
  uVar1 = 0;
  do {
    if ((uVar2 & param_2) != 0) {
      return *(undefined **)(*(int *)(param_1 + 8) + 8 + uVar1 * 0x10);
    }
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 * 2;
  } while (uVar1 < 6);
  return &DAT_0043152a;
}

