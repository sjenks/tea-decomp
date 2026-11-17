// name: FUN_004340e8
// address: 0x4340e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004340e8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_0042d188(*(int *)(param_1 + 4));
  if (iVar1 == 0) {
    iVar1 = FUN_0042d08c(*(int *)(param_1 + 4),FUN_00432d20);
    if (iVar1 != 0) {
      iVar1 = FUN_0042d188(iVar1);
      if (iVar1 != 0) goto LAB_00434136;
    }
    puVar2 = (undefined4 *)0x0;
  }
  else {
LAB_00434136:
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 8);
    }
    puVar2 = FUN_004567e4(iVar1,iVar3,(int *)&DAT_0040467c,(int *)&DAT_00416440,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}

