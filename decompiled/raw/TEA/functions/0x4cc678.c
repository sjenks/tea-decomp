// name: FUN_004cc678
// address: 0x4cc678
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_004cc678(LPVOID param_1)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,0,0x8000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

