// name: FUN_0041b07c
// address: 0x41b07c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041b07c(int param_1)

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
  puVar3 = FUN_00468310((int)piVar1,iVar2,0x403c1c);
  FUN_00468420((int)puVar3);
  return;
}

