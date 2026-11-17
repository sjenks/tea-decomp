// name: FUN_004b5ea2
// address: 0x4b5ea2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004b5ea2(char *param_1,int param_2,uint *param_3,char param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = FUN_004dc9f4(param_3);
  pcVar4 = param_1 + (param_2 - (int)pcVar2);
  if (param_4 == '\0') {
    for (; param_1 <= pcVar4; pcVar4 = pcVar4 + -1) {
      cVar1 = pcVar4[(int)pcVar2];
      pcVar4[(int)pcVar2] = '\0';
      iVar3 = FUN_004dcbf8(pcVar4,(char *)param_3);
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
      iVar3 = FUN_004dc978(pcVar4,(char *)param_3);
      if (iVar3 == 0) {
        pcVar4[(int)pcVar2] = cVar1;
        return pcVar4;
      }
      pcVar4[(int)pcVar2] = cVar1;
    }
  }
  return (char *)0x0;
}

