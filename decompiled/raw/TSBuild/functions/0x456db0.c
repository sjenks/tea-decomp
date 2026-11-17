// name: FUN_00456db0
// address: 0x456db0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_00456db0(LPVOID param_1,SIZE_T param_2)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,param_2,0x4000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

