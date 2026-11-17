// name: FUN_00428d9c
// address: 0x428d9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00428d9c(undefined4 *param_1)

{
  BOOL BVar1;
  
  BVar1 = EndDeferWindowPos((HDWP)*param_1);
  if (BVar1 != 0) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}

