// name: thunk_FUN_004dcd18
// address: 0x4dcb20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl thunk_FUN_004dcd18(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      param_1 = (char *)0x0;
    }
    else {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        pcVar1 = param_2;
        pcVar2 = param_1;
        if (*param_1 == *param_2) {
          for (; ((*pcVar2 != '\0' && (*pcVar1 != '\0')) && (*pcVar1 == *pcVar2));
              pcVar1 = pcVar1 + 1) {
            pcVar2 = pcVar2 + 1;
          }
          if (*pcVar1 == '\0') {
            return param_1;
          }
        }
      }
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}

