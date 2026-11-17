// name: FUN_0041becc
// address: 0x41becc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041becc(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_00419ec8((int)(param_1 + 1));
  }
  else {
    piVar1 = (int *)param_1[8];
  }
  if ((piVar1 != (int *)0x0) && (((*(byte *)((int)piVar1 + 0x42) & 1) != 0 || (param_1[8] != 0)))) {
    (**(code **)(*piVar1 + 0x48))();
  }
  FUN_0042b294(*param_1);
  return;
}

