// name: FUN_00467944
// address: 0x467944
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00467944(char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pcVar1 = param_2;
    if (*param_1 == '\0') {
      return iVar2;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*pcVar1 == *param_1) {
        return iVar2;
      }
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}

