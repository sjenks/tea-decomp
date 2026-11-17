// name: FUN_0044b888
// address: 0x44b888
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_0044b888(LPVOID param_1)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,0,0x8000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

