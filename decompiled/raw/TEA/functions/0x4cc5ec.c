// name: FUN_004cc5ec
// address: 0x4cc5ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool FUN_004cc5ec(undefined4 *param_1,SIZE_T param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = VirtualAlloc((LPVOID)*param_1,param_2,0x1000,4);
  *param_1 = pvVar1;
  return pvVar1 != (LPVOID)0x0;
}

