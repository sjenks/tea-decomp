// name: FUN_00426f24
// address: 0x426f24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00426f24(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_0042503c((int)(param_1 + 1));
  }
  else {
    piVar1 = (int *)param_1[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (param_1[8] != 0)))) {
    (**(code **)(*piVar1 + 0x44))();
  }
  FUN_004377e8(*param_1);
  return;
}

