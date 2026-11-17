// name: FUN_004ca2cc
// address: 0x4ca2cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004ca2cc(int param_1,int param_2,undefined4 *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_2 == 1) {
    if (param_1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
    }
    puVar1 = FUN_004dd5cc(param_1,iVar4,0x49cb54);
    puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  }
  else {
    if (param_2 != 2) {
      return (char *)0x0;
    }
    puVar2 = (uint *)(**(code **)(*(int *)(param_1 + 8) + 0xc))();
  }
  if (param_4 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    if (puVar2 == (uint *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = FUN_004dc9f4(puVar2);
    }
    if ((int)pcVar3 < (int)param_4) {
      param_4 = pcVar3;
    }
    if (param_4 != (char *)0x0) {
      FUN_004dc7d4(param_3,puVar2,(uint)param_4);
    }
    *(char *)((int)param_3 + (int)param_4) = '\0';
  }
  return pcVar3;
}

