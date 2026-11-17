// name: thunk_FUN_00467540
// address: 0x467894
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl thunk_FUN_00467540(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      pcVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

