// name: FUN_0042dfc4
// address: 0x42dfc4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042dfc4(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_0042df1c(param_1);
    }
    else {
      pcVar1 = FUN_004677a0(param_2);
      FUN_0042df1c(param_1);
      FUN_0042de94(param_1,param_2,(int)pcVar1);
    }
  }
  return;
}

