// name: FUN_004926f8
// address: 0x4926f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004926f8(int param_1,int *param_2)

{
  if (*(char *)((int)param_2 + 5) != '\0') {
    *(char *)(param_1 + 0x33) = *(char *)(param_1 + 0x33) + -1;
  }
  if (param_2 == *(int **)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_004916d0(param_1,(int)param_2);
  (**(code **)(*param_2 + 0x28))();
  *(undefined4 *)((int)param_2 + 6) = 0;
  *(undefined4 *)((int)param_2 + 0x3e) = 0;
  FUN_00494454((int *)((int)param_2 + 10),-*(int *)((int)param_2 + 10),-*(int *)((int)param_2 + 0xe)
              );
  return;
}

