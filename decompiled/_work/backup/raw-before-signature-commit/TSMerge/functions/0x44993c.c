// name: FUN_0044993c
// address: 0x44993c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044993c(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_00449888(local_24,param_2);
  piVar2 = local_24;
  piVar3 = local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  local_14[2] = local_14[0] + *(int *)((int)param_2 + 0x22);
  local_14[0] = local_14[0] + -1;
  local_14[1] = local_14[1] + -1;
  piVar2 = local_14;
  piVar3 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  return param_1;
}

