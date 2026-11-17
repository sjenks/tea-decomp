// name: FUN_004b9388
// address: 0x4b9388
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b9388(int param_1,int *param_2)

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
  FUN_004ba1ec(local_14,piVar1);
  local_8 = 1;
  FUN_0049a294(param_2,&local_8,4);
  FUN_004ba424((int)local_14,param_2);
  return;
}

