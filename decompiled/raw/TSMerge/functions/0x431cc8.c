// name: FUN_00431cc8
// address: 0x431cc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00431cc8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  FUN_0043287c(local_14,piVar1);
  local_8 = 2;
  FUN_00422d00(param_2,&local_8,4);
  FUN_00432a70((int)local_14,param_2);
  return;
}

