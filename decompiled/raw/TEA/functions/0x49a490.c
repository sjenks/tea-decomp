// name: FUN_0049a490
// address: 0x49a490
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049a490(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (int *)0x0) {
      FUN_0049a238(param_1,0);
    }
    else {
      iVar1 = FUN_00499c78(param_1[2],(int)param_2);
      if (iVar1 == 0) {
        FUN_0049a238(param_1,2);
        FUN_0049a454(param_1,param_2,1,param_3);
      }
      else {
        FUN_0049a238(param_1,1);
        FUN_0049a31c(param_1);
      }
    }
  }
  return;
}

