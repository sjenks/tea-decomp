// name: FUN_0042ec10
// address: 0x42ec10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042ec10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EDI;
  
  if (param_2 == 0x26) {
    unaff_EDI = param_1[0x44] + -1;
  }
  else if (param_2 == 0x28) {
    unaff_EDI = param_1[0x44] + 1;
  }
  else if (param_2 == 0x24) {
    unaff_EDI = 0;
  }
  else if (param_2 == 0x23) {
    iVar1 = FUN_0042ba08((int)param_1);
    unaff_EDI = iVar1 + -1;
  }
  if ((-1 < unaff_EDI) && (iVar1 = FUN_0042ba08((int)param_1), unaff_EDI < iVar1)) {
    if (param_3 == 0) {
      if (param_1[0x44] == -1) {
        if ((param_2 == 0x26) || (param_2 == 0x28)) {
          return 0;
        }
        param_1[0x44] = unaff_EDI;
      }
      FUN_0042ced4(param_1,param_2);
    }
    return 1;
  }
  return 0;
}

