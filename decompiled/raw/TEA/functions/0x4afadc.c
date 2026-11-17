// name: FUN_004afadc
// address: 0x4afadc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004afadc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_004a768c(*(int *)(param_1 + 4));
  if (iVar1 == 0) {
    iVar1 = FUN_004a7590(*(int *)(param_1 + 4),FUN_004ae188);
    if (iVar1 != 0) {
      iVar1 = FUN_004a768c(iVar1);
      if (iVar1 != 0) goto LAB_004afb2a;
    }
    puVar2 = (undefined4 *)0x0;
  }
  else {
LAB_004afb2a:
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 8);
    }
    puVar2 = FUN_004dd744(iVar1,iVar3,(int *)&DAT_0040299c,(int *)&DAT_00428aa0,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}

