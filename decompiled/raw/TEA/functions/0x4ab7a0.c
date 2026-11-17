// name: FUN_004ab7a0
// address: 0x4ab7a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004ab7a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 < (int)param_1[0x30] && (param_1[iVar1 * 3] != 0)); iVar1 = iVar1 + 1) {
    if (param_2 == param_1[iVar1 * 3 + 1]) {
      param_1[iVar1 * 3 + 2] = param_1[iVar1 * 3 + 2] + 1;
      FUN_004ab620(param_1,iVar1);
      return *param_1;
    }
  }
  return 0;
}

