// name: FUN_004329e0
// address: 0x4329e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004329e0(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  FUN_00432a18(iVar2,param_2);
  if (1 < param_3) {
    uVar3 = FUN_00422908(param_2);
    piVar1[4] = uVar3;
  }
  return piVar1;
}

