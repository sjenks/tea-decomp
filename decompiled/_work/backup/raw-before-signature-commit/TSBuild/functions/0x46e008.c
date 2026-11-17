// name: FUN_0046e008
// address: 0x46e008
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046e008(undefined4 param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  double local_c;
  
  if ((short)(param_2._2_2_ * 2) == 0) {
    iVar2 = 2;
    local_c = -_DAT_0048a668;
    pdVar1 = &local_c;
  }
  else if (param_2 < 0) {
    iVar2 = 1;
    pdVar1 = (double *)&DAT_0048a6e8;
  }
  else {
    if ((short)(param_2._2_2_ * 2) != -0x20) {
      FUN_0046dd54();
      return;
    }
    iVar2 = 3;
    pdVar1 = (double *)&DAT_0048a668;
  }
  FUN_0046d940(iVar2,&DAT_0048a6f0,(undefined8 *)&param_1,(undefined8 *)0x0,*(undefined4 *)pdVar1,
               *(undefined4 *)((int)pdVar1 + 4));
  return;
}

