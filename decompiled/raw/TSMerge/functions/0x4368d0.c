// name: FUN_004368d0
// address: 0x4368d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004368d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if ((((*(byte *)((int)piVar1 + 0x17) & 2) == 0) && ((*(byte *)(piVar1 + 5) & 1) == 0)) &&
         ((param_5 == '\0' || (iVar3 = (**(code **)(*piVar1 + 0xc))(), iVar3 != 0)))) {
        if (param_2 != 0) {
          *(int **)(param_2 + iVar2 * 4) = piVar1;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}

