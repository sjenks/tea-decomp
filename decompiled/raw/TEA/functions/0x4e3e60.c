// name: FUN_004e3e60
// address: 0x4e3e60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004e3e60(undefined4 param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  double local_c;
  
  if ((short)(param_2._2_2_ * 2) == 0) {
    iVar2 = 2;
    local_c = -_DAT_005189b8;
    pdVar1 = &local_c;
  }
  else if (param_2 < 0) {
    iVar2 = 1;
    pdVar1 = (double *)&DAT_00518a38;
  }
  else {
    if ((short)(param_2._2_2_ * 2) != -0x20) {
      FUN_004e3bac();
      return;
    }
    iVar2 = 3;
    pdVar1 = (double *)&DAT_005189b8;
  }
  FUN_004e3798(iVar2,&DAT_00518a40,(undefined8 *)&param_1,(undefined8 *)0x0,*(undefined4 *)pdVar1,
               *(undefined4 *)((int)pdVar1 + 4));
  return;
}

