// name: FUN_004154a8
// address: 0x4154a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool FUN_004154a8(undefined4 *param_1,SIZE_T param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = VirtualAlloc((LPVOID)*param_1,param_2,0x1000,4);
  *param_1 = pvVar1;
  return pvVar1 != (LPVOID)0x0;
}

