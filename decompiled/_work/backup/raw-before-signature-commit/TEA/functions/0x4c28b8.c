// name: FUN_004c28b8
// address: 0x4c28b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * FUN_004c28b8(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  char *local_8;
  
  if (param_5 != (uint *)0x0) {
    FUN_004cc0cc();
    pcVar1 = thunk_FUN_004dc924((char *)param_5,'|');
    puVar4 = param_5;
    if (pcVar1 == (char *)0x0) {
      for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1))) {
        pcVar1 = FUN_004dc9f4(puVar4);
      }
      uVar3 = FUN_004cc180();
      *(undefined4 *)(param_4 + 0xc) = uVar3;
      param_1 = (char *)FUN_004dc7d4(*(undefined4 **)(param_4 + 0xc),param_5,
                                     (int)puVar4 + (1 - (int)param_5));
    }
    else {
      pcVar1 = FUN_004dc9f4(param_5);
      pcVar2 = (char *)FUN_004cc180();
      pcVar2 = FUN_004dc9c4(pcVar2,(char *)param_5);
      *(char **)(param_4 + 0xc) = pcVar2;
      param_1 = *(char **)(param_4 + 0xc);
      param_1[(int)(pcVar1 + 1)] = '\0';
    }
  }
  if (*(int *)(param_4 + 0xc) != 0) {
    param_1 = *(char **)(param_4 + 0xc);
    for (local_8 = *(char **)(param_4 + 0xc); *local_8 != '\0'; local_8 = local_8 + 1) {
      if (*local_8 == '|') {
        *local_8 = '\0';
      }
      param_1 = local_8;
    }
  }
  return param_1;
}

