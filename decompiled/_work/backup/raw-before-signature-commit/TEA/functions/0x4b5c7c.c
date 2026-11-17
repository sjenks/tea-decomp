// name: FUN_004b5c7c
// address: 0x4b5c7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004b5c7c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  do {
    piVar3 = (int *)FUN_004b5d60(param_1 + 2,(int)piVar3);
    if (piVar3 == (int *)0x0) {
      puVar2 = FUN_004b5b68((int)param_1,8,param_2,(undefined4 *)0x0);
      if (puVar2 != (undefined4 *)0x0) {
        return param_1;
      }
      return (int *)0x0;
    }
    iVar1 = (**(code **)(*piVar3 + 0x38))();
  } while (iVar1 == 0);
  return piVar3;
}

