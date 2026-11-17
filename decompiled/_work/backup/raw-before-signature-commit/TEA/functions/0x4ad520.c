// name: FUN_004ad520
// address: 0x4ad520
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ad520(int param_1,int *param_2)

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
  FUN_004bff34(local_14,piVar1);
  local_8 = 1;
  FUN_0049a294(param_2,&local_8,4);
  FUN_004c00c4((int)local_14,param_2);
  return;
}

