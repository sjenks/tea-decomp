// name: FUN_00422efc
// address: 0x422efc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00422efc(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (int *)0x0) {
      FUN_00422ca4(param_1,0);
    }
    else {
      iVar1 = FUN_004226e4(param_1[2],(int)param_2);
      if (iVar1 == 0) {
        FUN_00422ca4(param_1,2);
        FUN_00422ec0(param_1,param_2,1,param_3);
      }
      else {
        FUN_00422ca4(param_1,1);
        FUN_00422d88(param_1);
      }
    }
  }
  return;
}

