// name: FUN_00422e30
// address: 0x422e30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00422e30(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_00422d88(param_1);
    }
    else {
      pcVar1 = FUN_00455bf0(param_2);
      FUN_00422d88(param_1);
      FUN_00422d00(param_1,param_2,(int)pcVar1);
    }
  }
  return;
}

