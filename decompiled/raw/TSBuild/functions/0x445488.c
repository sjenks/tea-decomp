// name: FUN_00445488
// address: 0x445488
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_00445488(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = FUN_004677a0(param_2);
  pcVar3 = FUN_004677a0(param_1);
  pcVar3 = (char *)((int)param_1 + (int)pcVar3);
  if (param_3 == '\0') {
    for (; param_1 < pcVar3 + (1 - (int)pcVar2); param_1 = (uint *)((int)param_1 + 1)) {
      cVar1 = *(char *)((int)param_1 + (int)pcVar2);
      *(char *)((int)param_1 + (int)pcVar2) = '\0';
      iVar4 = FUN_004679a4((char *)param_1,(char *)param_2);
      if (iVar4 == 0) {
        *(char *)((int)param_1 + (int)pcVar2) = cVar1;
        return param_1;
      }
      *(char *)((int)param_1 + (int)pcVar2) = cVar1;
    }
  }
  else {
    for (; param_1 < pcVar3 + (1 - (int)pcVar2); param_1 = (uint *)((int)param_1 + 1)) {
      cVar1 = *(char *)((int)param_1 + (int)pcVar2);
      *(char *)((int)param_1 + (int)pcVar2) = '\0';
      iVar4 = FUN_00467724((char *)param_1,(char *)param_2);
      if (iVar4 == 0) {
        *(char *)((int)param_1 + (int)pcVar2) = cVar1;
        return param_1;
      }
      *(char *)((int)param_1 + (int)pcVar2) = cVar1;
    }
  }
  return (uint *)0x0;
}

