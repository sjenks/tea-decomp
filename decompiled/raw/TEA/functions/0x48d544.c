// name: FUN_0048d544
// address: 0x48d544
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0048d544(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if (param_3 < 0x8a) {
    param_3 = param_3 + 0x76c;
  }
  bVar1 = FUN_0048d4f0(param_1,param_2,param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    iVar2 = 0;
  }
  else {
    if (param_1 < 3) {
      iVar2 = param_1 + 9;
      param_3 = param_3 - 1;
    }
    else {
      iVar2 = param_1 - 3;
    }
    iVar2 = (iVar2 * 0x99 + 2U) / 5 +
            ((param_3 / 100) * 0x23ab1 >> 2) + ((param_3 % 100) * 0x5b5 >> 2) + param_2 + 0x1a431f;
  }
  return iVar2;
}

