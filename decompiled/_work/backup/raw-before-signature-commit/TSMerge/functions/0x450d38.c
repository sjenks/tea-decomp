// name: FUN_00450d38
// address: 0x450d38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00450d38(undefined4 param_1,uint param_2,char *param_3,int param_4,int param_5)

{
  char *pcVar1;
  
  pcVar1 = thunk_FUN_004571b8(param_2,param_3,(char *)(param_4 * param_5));
  if ((int)pcVar1 < 0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

