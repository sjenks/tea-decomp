// name: FUN_00456cd0
// address: 0x456cd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool FUN_00456cd0(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID pvVar1;
  uint dwSize;
  
  if (DAT_00484a8c == 0) {
    if ((DAT_0048d874 == 2) || (DAT_0048d874 == 1)) {
      DAT_00484a8c = 0x100000;
    }
    else {
      DAT_00484a8c = 0x400000;
    }
  }
  dwSize = (DAT_00484a8c + param_1) - 1U & ~(DAT_00484a8c - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return pvVar1 != (LPVOID)0x0;
}

