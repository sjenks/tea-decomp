// name: FUN_004b232c
// address: 0x4b232c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004b232c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (((param_2 == 0) || (iVar2 = (**(code **)(*piVar1 + 0xc))(), iVar2 != 0)) &&
         ((param_3 == 0 || (iVar2 = (**(code **)(*piVar1 + 0x10))(), iVar2 != 0)))) {
        local_8 = local_8 + 1;
      }
    }
  }
  return local_8;
}

