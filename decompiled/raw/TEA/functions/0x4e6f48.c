// name: FUN_004e6f48
// address: 0x4e6f48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004e6f48(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_00518dec == 0) {
    DAT_00518dec = 1;
    FUN_004e6e74((int *)&DAT_0051c460,1);
    FUN_004e6e74((int *)&DAT_0051c444,1);
    piVar1 = (int *)FUN_004e6e70();
    if (piVar1 != (int *)0x0) {
      FUN_004e6e74(piVar1,1);
      piVar2 = piVar1;
      for (iVar3 = 0; piVar2 = piVar2 + 1, iVar3 < *piVar1; iVar3 = iVar3 + 1) {
        (**(code **)(*piVar2 + 0x18))();
      }
    }
  }
  return;
}

