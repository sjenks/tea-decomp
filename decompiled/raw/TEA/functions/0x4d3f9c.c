// name: FUN_004d3f9c
// address: 0x4d3f9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004d3f9c(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5)

{
  char *pcVar1;
  
  pcVar1 = thunk_FUN_004de1a0(param_2,param_3,(char *)(param_4 * param_5));
  if ((int)pcVar1 < 0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

