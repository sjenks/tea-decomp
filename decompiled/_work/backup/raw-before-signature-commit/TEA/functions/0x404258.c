// name: FUN_00404258
// address: 0x404258
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00404258(int param_1,int param_2)

{
  int iVar1;
  
  FUN_004034c0(param_1);
  if (0 < param_2) {
    iVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    if (param_2 <= iVar1 >> 3) {
      return 1;
    }
  }
  return 0;
}

