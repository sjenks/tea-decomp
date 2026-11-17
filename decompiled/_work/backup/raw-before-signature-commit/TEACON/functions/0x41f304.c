// name: FUN_0041f304
// address: 0x41f304
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0041f304(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = DAT_004348ac;
  }
  for (; pcVar1 = param_2, *param_1 != '\0'; param_1 = param_1 + 1) {
    for (; (*pcVar1 != '\0' && (*pcVar1 != *param_1)); pcVar1 = pcVar1 + 1) {
    }
    if (*pcVar1 == '\0') break;
  }
  DAT_004348ac = param_1;
  if (*param_1 == '\0') {
    pcVar2 = (char *)0x0;
  }
  else {
    for (; pcVar1 = param_2, pcVar2 = param_1, *DAT_004348ac != '\0';
        DAT_004348ac = DAT_004348ac + 1) {
      for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
        if (*pcVar1 == *DAT_004348ac) {
          *DAT_004348ac = '\0';
          DAT_004348ac = DAT_004348ac + 1;
          return param_1;
        }
      }
    }
  }
  return pcVar2;
}

