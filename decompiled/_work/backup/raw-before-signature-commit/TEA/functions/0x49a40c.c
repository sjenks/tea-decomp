// name: FUN_0049a40c
// address: 0x49a40c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049a40c(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_0049a31c(param_1);
    }
    else {
      pcVar1 = FUN_004dc9f4(param_2);
      FUN_0049a31c(param_1);
      FUN_0049a358(param_1,param_2,(uint)pcVar1);
    }
  }
  return;
}

