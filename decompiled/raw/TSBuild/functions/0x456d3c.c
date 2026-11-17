// name: FUN_00456d3c
// address: 0x456d3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool FUN_00456d3c(undefined4 *param_1,SIZE_T param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = VirtualAlloc((LPVOID)*param_1,param_2,0x1000,4);
  *param_1 = pvVar1;
  return pvVar1 != (LPVOID)0x0;
}

