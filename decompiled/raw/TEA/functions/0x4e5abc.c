// name: FUN_004e5abc
// address: 0x4e5abc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004e5abc(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0x100) {
    iVar2 = FUN_004e133c(param_1 & 0xff);
    if ((iVar2 == 0) && (((&DAT_0051c1d9)[param_1 & 0xff] & 1) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

