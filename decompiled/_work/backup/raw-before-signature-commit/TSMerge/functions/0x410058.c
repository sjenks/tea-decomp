// name: FUN_00410058
// address: 0x410058
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00410058(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  puVar3 = FUN_0045666c((int)piVar1,iVar2,0x404628);
  FUN_0045677c((int)puVar3);
  return;
}

