// name: FUN_00448714
// address: 0x448714
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00448714(int param_1,int *param_2)

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
  FUN_00449414(local_14,piVar1);
  local_8 = 1;
  FUN_0042de94(param_2,&local_8,4);
  FUN_0044964c((int)local_14,param_2);
  return;
}

