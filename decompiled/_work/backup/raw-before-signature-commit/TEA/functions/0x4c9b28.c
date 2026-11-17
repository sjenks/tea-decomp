// name: FUN_004c9b28
// address: 0x4c9b28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004c9b28(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_24 [4];
  int local_14 [4];
  
  FUN_004c9b94(local_24,param_2);
  piVar3 = local_24;
  piVar4 = local_14;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  uVar1 = GetWindowLongA(*(HWND *)(*param_2 + 0xc),-0x10);
  if ((uVar1 & 0x10000) != 0) {
    FUN_00494454(local_14,-*(int *)((int)param_2 + 0x22),0);
  }
  piVar3 = local_14;
  piVar4 = param_1;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  return param_1;
}

