// name: FUN_00471060
// address: 0x471060
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00471060(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_0048aa94 == 0) {
    DAT_0048aa94 = 1;
    FUN_00470f8c((int *)&DAT_0048d8d8,1);
    FUN_00470f8c((int *)&DAT_0048d8bc,1);
    piVar1 = (int *)FUN_00470f88();
    if (piVar1 != (int *)0x0) {
      FUN_00470f8c(piVar1,1);
      piVar2 = piVar1;
      for (iVar3 = 0; piVar2 = piVar2 + 1, iVar3 < *piVar1; iVar3 = iVar3 + 1) {
        (**(code **)(*piVar2 + 0x18))();
      }
    }
  }
  return;
}

