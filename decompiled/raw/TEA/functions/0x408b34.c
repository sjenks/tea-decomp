// name: FUN_00408b34
// address: 0x408b34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00408b34(int param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    iVar3 = FUN_00408b14(param_1);
    if (iVar3 <= iVar4) {
      return 0;
    }
    uVar1 = FUN_00408b6c(param_1,iVar4);
    if (CONCAT31(extraout_var,uVar1) == 0) break;
    iVar4 = iVar4 + 1;
  }
  uVar2 = FUN_00408c98(param_1,iVar4);
  return uVar2;
}

