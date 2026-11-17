// name: FUN_0042e00c
// address: 0x42e00c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042e00c(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_0042df1c(param_1);
    }
    else {
      pcVar1 = FUN_004677a0(param_2);
      FUN_0042df1c(param_1);
      FUN_0042df58(param_1,param_2,(uint)pcVar1);
    }
  }
  return;
}

