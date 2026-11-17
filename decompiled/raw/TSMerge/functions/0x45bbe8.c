// name: FUN_0045bbe8
// address: 0x45bbe8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0045bbe8(short param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  
  psVar2 = (short *)FUN_00458d3c(0xe);
  if ((param_1 == 0x47) || (uVar1 = param_3, param_1 == 0x67)) {
    do {
      uVar1 = param_3;
      if (*(short *)(param_3 - 2) != 0x30) goto LAB_0045bc1f;
      param_3 = param_3 - 2;
    } while (param_2 < param_3);
  }
  else {
LAB_0045bc1f:
    param_2 = uVar1;
    if (*psVar2 == *(short *)(param_2 - 2)) {
      param_2 = param_2 - 2;
    }
  }
  return param_2;
}

