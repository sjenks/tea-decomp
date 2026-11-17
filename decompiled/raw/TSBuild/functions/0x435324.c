// name: FUN_00435324
// address: 0x435324
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00435324(int param_1,int *param_2)

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
  FUN_0045308c(local_14,piVar1);
  local_8 = 1;
  FUN_0042de94(param_2,&local_8,4);
  FUN_00453240((int)local_14,param_2);
  return;
}

