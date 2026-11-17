// name: FUN_004277f0
// address: 0x4277f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004277f0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_004339d0 == 0) {
    DAT_004339d0 = 1;
    FUN_0042771c((int *)&DAT_004350f8,1);
    FUN_0042771c((int *)&DAT_004350dc,1);
    piVar1 = (int *)FUN_00427718();
    if (piVar1 != (int *)0x0) {
      FUN_0042771c(piVar1,1);
      piVar2 = piVar1;
      for (iVar3 = 0; piVar2 = piVar2 + 1, iVar3 < *piVar1; iVar3 = iVar3 + 1) {
        (**(code **)(*piVar2 + 0x18))();
      }
    }
  }
  return;
}

