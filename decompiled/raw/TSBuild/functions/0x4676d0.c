// name: FUN_004676d0
// address: 0x4676d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004676d0(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    if (param_2 == *param_1) {
      return param_1;
    }
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[1]) {
      return param_1 + 1;
    }
    if (param_1[1] == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[2]) {
      return param_1 + 2;
    }
    if (param_1[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = param_1 + 3;
    if (param_2 == *pcVar1) {
      return param_1 + 3;
    }
    param_1 = param_1 + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

