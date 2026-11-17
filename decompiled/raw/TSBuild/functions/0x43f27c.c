// name: FUN_0043f27c
// address: 0x43f27c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0043f27c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_0043831c(*(int *)(param_1 + 4));
  if (iVar1 == 0) {
    iVar1 = FUN_00438220(*(int *)(param_1 + 4),FUN_0043deb4);
    if (iVar1 != 0) {
      iVar1 = FUN_0043831c(iVar1);
      if (iVar1 != 0) goto LAB_0043f2ca;
    }
    puVar2 = (undefined4 *)0x0;
  }
  else {
LAB_0043f2ca:
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 8);
    }
    puVar2 = FUN_00468488(iVar1,iVar3,(int *)&DAT_00403c70,(int *)&DAT_00421464,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}

