// name: FUN_0041551c
// address: 0x41551c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_0041551c(LPVOID param_1,SIZE_T param_2)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,param_2,0x4000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

