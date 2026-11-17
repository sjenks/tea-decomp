// name: FUN_004065c8
// address: 0x4065c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004065c8(int param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    iVar3 = FUN_004065a8(param_1);
    if (iVar3 <= iVar4) {
      return 0;
    }
    uVar1 = FUN_00406600(param_1,iVar4);
    if (CONCAT31(extraout_var,uVar1) == 0) break;
    iVar4 = iVar4 + 1;
  }
  uVar2 = FUN_00406720(param_1,iVar4);
  return uVar2;
}

