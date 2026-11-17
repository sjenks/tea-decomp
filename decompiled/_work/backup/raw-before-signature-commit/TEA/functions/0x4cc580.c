// name: FUN_004cc580
// address: 0x4cc580
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool FUN_004cc580(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID pvVar1;
  uint dwSize;
  
  if (DAT_00512c18 == 0) {
    if ((DAT_0051c3fc == 2) || (DAT_0051c3fc == 1)) {
      DAT_00512c18 = 0x100000;
    }
    else {
      DAT_00512c18 = 0x400000;
    }
  }
  dwSize = (DAT_00512c18 + param_1) - 1U & ~(DAT_00512c18 - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return pvVar1 != (LPVOID)0x0;
}

