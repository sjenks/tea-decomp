// name: FUN_0044b790
// address: 0x44b790
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool FUN_0044b790(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID pvVar1;
  uint dwSize;
  
  if (DAT_00470c5c == 0) {
    if ((DAT_00477db0 == 2) || (DAT_00477db0 == 1)) {
      DAT_00470c5c = 0x100000;
    }
    else {
      DAT_00470c5c = 0x400000;
    }
  }
  dwSize = (DAT_00470c5c + param_1) - 1U & ~(DAT_00470c5c - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return pvVar1 != (LPVOID)0x0;
}

