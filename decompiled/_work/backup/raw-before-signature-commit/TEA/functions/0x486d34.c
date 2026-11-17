// name: FUN_00486d34
// address: 0x486d34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00486d34(int param_1)

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
  puVar3 = FUN_004dd5cc((int)piVar1,iVar2,0x4027f0);
  FUN_004dd6dc((int)puVar3);
  return;
}

