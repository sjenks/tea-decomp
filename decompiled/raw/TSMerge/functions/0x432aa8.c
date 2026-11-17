// name: FUN_00432aa8
// address: 0x432aa8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00432aa8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 4);
  }
  FUN_004249c0(local_14,piVar1);
  local_8 = 3;
  FUN_00422d00(param_2,&local_8,4);
  FUN_00424e98((int)local_14,param_2);
  return;
}

