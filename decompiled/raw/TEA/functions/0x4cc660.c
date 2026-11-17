// name: FUN_004cc660
// address: 0x4cc660
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_004cc660(LPVOID param_1,SIZE_T param_2)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,param_2,0x4000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

