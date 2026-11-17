// name: FUN_00432a18
// address: 0x432a18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00432a18(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_14 [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042280c(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 4);
  }
  piVar1 = FUN_004249c0(local_14,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

