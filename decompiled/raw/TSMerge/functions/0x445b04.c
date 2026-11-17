// name: FUN_00445b04
// address: 0x445b04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * FUN_00445b04(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  char *local_8;
  
  if (param_5 != (uint *)0x0) {
    FUN_0044b2dc();
    pcVar1 = thunk_FUN_00455b20((char *)param_5,'|');
    puVar4 = param_5;
    if (pcVar1 == (char *)0x0) {
      for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1))) {
        pcVar1 = FUN_00455bf0(puVar4);
      }
      uVar3 = FUN_0044b390();
      *(undefined4 *)(param_4 + 0xc) = uVar3;
      param_1 = (char *)FUN_004559d0(*(undefined4 **)(param_4 + 0xc),param_5,
                                     (int)puVar4 + (1 - (int)param_5));
    }
    else {
      pcVar1 = FUN_00455bf0(param_5);
      pcVar2 = (char *)FUN_0044b390();
      pcVar2 = FUN_00455bc0(pcVar2,(char *)param_5);
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

