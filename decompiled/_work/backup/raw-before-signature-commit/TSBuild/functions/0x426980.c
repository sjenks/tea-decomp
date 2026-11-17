// name: FUN_00426980
// address: 0x426980
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00426980(int param_1,int *param_2)

{
  if (*(char *)((int)param_2 + 5) != '\0') {
    *(char *)(param_1 + 0x33) = *(char *)(param_1 + 0x33) + -1;
  }
  if (param_2 == *(int **)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_00425974(param_1,(int)param_2);
  (**(code **)(*param_2 + 0x28))();
  *(undefined4 *)((int)param_2 + 6) = 0;
  *(undefined4 *)((int)param_2 + 0x3e) = 0;
  FUN_00428898((int *)((int)param_2 + 10),-*(int *)((int)param_2 + 10),-*(int *)((int)param_2 + 0xe)
              );
  return;
}

