// name: FUN_00420b88
// address: 0x420b88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00420b88(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1 + param_3;
  while( true ) {
    if (pcVar1 < param_1) {
      return (char *)0x0;
    }
    if (param_2 == *pcVar1) break;
    pcVar1 = pcVar1 + -1;
  }
  return pcVar1;
}

