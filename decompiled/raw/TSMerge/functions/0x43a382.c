// name: FUN_0043a382
// address: 0x43a382
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0043a382(char *param_1,int param_2,uint *param_3,char param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = FUN_00455bf0(param_3);
  pcVar4 = param_1 + (param_2 - (int)pcVar2);
  if (param_4 == '\0') {
    for (; param_1 <= pcVar4; pcVar4 = pcVar4 + -1) {
      cVar1 = pcVar4[(int)pcVar2];
      pcVar4[(int)pcVar2] = '\0';
      iVar3 = FUN_00455d94(pcVar4,(char *)param_3);
      if (iVar3 == 0) {
        pcVar4[(int)pcVar2] = cVar1;
        return pcVar4;
      }
      pcVar4[(int)pcVar2] = cVar1;
    }
  }
  else {
    for (; param_1 <= pcVar4; pcVar4 = pcVar4 + -1) {
      cVar1 = pcVar4[(int)pcVar2];
      pcVar4[(int)pcVar2] = '\0';
      iVar3 = FUN_00455b74(pcVar4,(char *)param_3);
      if (iVar3 == 0) {
        pcVar4[(int)pcVar2] = cVar1;
        return pcVar4;
      }
      pcVar4[(int)pcVar2] = cVar1;
    }
  }
  return (char *)0x0;
}

