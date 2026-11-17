// name: FUN_0043e4f8
// address: 0x43e4f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043e4f8(int param_1,int *param_2)

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
  FUN_0043b6c0(local_14,piVar1);
  local_8 = 1;
  FUN_00422d00(param_2,&local_8,4);
  FUN_0043b874((int)local_14,param_2);
  return;
}

