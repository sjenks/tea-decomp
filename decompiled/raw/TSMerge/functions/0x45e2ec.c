// name: FUN_0045e2ec
// address: 0x45e2ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0045e2ec(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_00475ff4 == 0) {
    DAT_00475ff4 = 1;
    FUN_0045e218((int *)&DAT_00477e0c,1);
    FUN_0045e218((int *)&DAT_00477df0,1);
    piVar1 = (int *)FUN_0045e214();
    if (piVar1 != (int *)0x0) {
      FUN_0045e218(piVar1,1);
      piVar2 = piVar1;
      for (iVar3 = 0; piVar2 = piVar2 + 1, iVar3 < *piVar1; iVar3 = iVar3 + 1) {
        (**(code **)(*piVar2 + 0x18))();
      }
    }
  }
  return;
}

