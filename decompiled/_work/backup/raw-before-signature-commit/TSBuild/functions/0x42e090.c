// name: FUN_0042e090
// address: 0x42e090
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042e090(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (int *)0x0) {
      FUN_0042de38(param_1,0);
    }
    else {
      iVar1 = FUN_0042d878(param_1[2],(int)param_2);
      if (iVar1 == 0) {
        FUN_0042de38(param_1,2);
        FUN_0042e054(param_1,param_2,1,param_3);
      }
      else {
        FUN_0042de38(param_1,1);
        FUN_0042df1c(param_1);
      }
    }
  }
  return;
}

