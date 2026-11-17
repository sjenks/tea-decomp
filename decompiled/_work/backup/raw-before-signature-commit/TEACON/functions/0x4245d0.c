// name: FUN_004245d0
// address: 0x4245d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004245d0(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = param_2 + 1;
  for (psVar1 = param_1; (iVar2 = iVar2 + -1, iVar2 != 0 && (*psVar1 != 0)); psVar1 = psVar1 + 1) {
  }
  if ((iVar2 != 0) && (*psVar1 == 0)) {
    iVar2 = (int)psVar1 - (int)param_1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)(((int)psVar1 - (int)param_1 & 1U) != 0);
    }
    return iVar2 + 1;
  }
  return param_2;
}

