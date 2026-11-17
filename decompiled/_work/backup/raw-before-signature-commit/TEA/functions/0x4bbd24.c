// name: FUN_004bbd24
// address: 0x4bbd24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004bbd24(char *param_1,char *param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = FUN_004dc9f4(param_3);
  while( true ) {
    if (param_1 == param_2) {
      return param_1;
    }
    pcVar2 = (char *)FUN_004bbcb0((char *)param_3,pcVar1 + (int)param_3,(int)*param_1);
    if (pcVar1 + (int)param_3 != pcVar2) break;
    param_1 = param_1 + -1;
  }
  return param_1;
}

