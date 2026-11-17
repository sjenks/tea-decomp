// name: FUN_0044b824
// address: 0x44b824
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_0044b824(LPVOID param_1,int param_2)

{
  LPVOID pvVar1;
  LPVOID lpAddress;
  
  lpAddress = param_1;
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    pvVar1 = VirtualAlloc(lpAddress,0x1000,0x1000,4);
    if (pvVar1 == (LPVOID)0x0) break;
    lpAddress = (LPVOID)((int)lpAddress + 0x1000);
    param_2 = param_2 + -0x1000;
  }
  FUN_0044b870(param_1,(int)lpAddress - (int)param_1);
  return 0;
}

