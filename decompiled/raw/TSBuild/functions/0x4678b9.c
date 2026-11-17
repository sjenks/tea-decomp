// name: thunk_FUN_00467a3c
// address: 0x4678b9
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl thunk_FUN_00467a3c(char *param_1,char *param_2)

{
  char *pcVar1;
  
  do {
    pcVar1 = param_2;
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*pcVar1 == *param_1) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

