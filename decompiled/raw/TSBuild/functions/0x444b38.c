// name: FUN_00444b38
// address: 0x444b38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00444b38(int *param_1,undefined4 param_2,int *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint local_14 [4];
  
  switch(param_2) {
  default:
    return (char *)0x0;
  case 1:
    if (param_1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_1;
    }
    puVar1 = FUN_00468310((int)param_1,iVar5,0x441f94);
    puVar2 = (uint *)FUN_00468420((int)puVar1);
    break;
  case 2:
    if (*(int *)((int)param_1 + 0x22) == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)FUN_004448e8(*(int *)((int)param_1 + 0x22));
    }
    break;
  case 3:
    iVar3 = 0;
    for (iVar5 = *(int *)((int)param_1 + 0x26); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
      iVar3 = iVar3 + 1;
    }
    if (param_4 == (char *)0x0) {
      *param_3 = iVar3;
      return (char *)0x4;
    }
    wsprintfA((LPSTR)local_14,&DAT_00480f60,iVar3);
    puVar2 = local_14;
    break;
  case 4:
    puVar2 = *(uint **)((int)param_1 + 0x2e);
    break;
  case 5:
    puVar2 = *(uint **)((int)param_1 + 0x1e);
  }
  if (param_4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    if (puVar2 == (uint *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = FUN_004677a0(puVar2);
    }
    if ((int)pcVar4 < (int)param_4) {
      param_4 = pcVar4;
    }
    if (param_4 != (char *)0x0) {
      FUN_00467580(param_3,puVar2,(uint)param_4);
    }
    *(char *)((int)param_3 + (int)param_4) = '\0';
  }
  return pcVar4;
}

