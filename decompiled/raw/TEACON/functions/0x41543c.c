// name: FUN_0041543c
// address: 0x41543c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool FUN_0041543c(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID pvVar1;
  uint dwSize;
  
  if (DAT_0042e9b4 == 0) {
    if ((DAT_0043509c == 2) || (DAT_0043509c == 1)) {
      DAT_0042e9b4 = 0x100000;
    }
    else {
      DAT_0042e9b4 = 0x400000;
    }
  }
  dwSize = (DAT_0042e9b4 + param_1) - 1U & ~(DAT_0042e9b4 - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return pvVar1 != (LPVOID)0x0;
}

