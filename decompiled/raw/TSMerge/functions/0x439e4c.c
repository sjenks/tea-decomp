// name: FUN_00439e4c
// address: 0x439e4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00439e4c(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)param_1 + 0x26);
  while( true ) {
    if (*piVar2 == 0) {
      return 0;
    }
    if (param_2 == *piVar2) break;
    piVar2 = (int *)(*piVar2 + 0x14);
  }
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0xe) + 8) + 0x54))();
  *piVar2 = *(int *)(param_2 + 0x14);
  FUN_00439f90((int)param_1,2,param_2,(undefined4 *)param_2);
  if (*(int *)((int)param_1 + 0x26) != 0) {
    FUN_00439c84((int)param_1);
    return 0;
  }
  if (*(int *)((int)param_1 + 0x22) == 0) {
    return 0;
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0x22) + 0x17) & 0x40) == 0) &&
     ((*(byte *)(*(int *)((int)param_1 + 0x22) + 0x17) & 8) == 0)) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x10))();
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0x22) + 0x17) & 0x40) != 0) &&
     (*(int *)(param_2 + 0x18) != 0)) {
    return 1;
  }
  return 0;
}

