// name: FUN_0045c440
// address: 0x45c440
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045c440(undefined4 *param_1,byte param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = FUN_0045bdd8(*(int *)*param_1);
    if ((uVar3 & 0x2000) != 0) {
      piVar4 = (int *)FUN_0045bea8(*(int *)*param_1);
      iVar5 = FUN_0045be98(piVar4);
      if (iVar5 == -1) {
        FUN_0045b7d4(*(int *)*param_1,1);
      }
    }
    cVar1 = FUN_0045c3c0();
    if ((cVar1 != '\0') &&
       ((bVar2 = FUN_0045c3cc((undefined *)*param_1), bVar2 ||
        (bVar2 = FUN_0045c3e0((undefined4 *)*param_1), bVar2)))) {
      piVar4 = (int *)FUN_0045bea8(*(int *)*param_1);
      iVar5 = FUN_0045be98(piVar4);
      if (iVar5 == -1) {
        FUN_0045b7d4(*(int *)*param_1,1);
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
    return;
  }
  return;
}

