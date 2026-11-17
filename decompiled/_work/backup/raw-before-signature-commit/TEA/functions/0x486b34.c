// name: FUN_00486b34
// address: 0x486b34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00486b34(int param_1,int *param_2)

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
  FUN_004b9114(local_14,piVar1);
  local_8 = 1;
  FUN_0049a294(param_2,&local_8,4);
  FUN_004b9350((int)local_14,param_2);
  return;
}

