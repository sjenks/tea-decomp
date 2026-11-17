// name: FUN_0042691c
// address: 0x42691c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042691c(int *param_1,int *param_2)

{
  *(int **)((int)param_2 + 6) = param_1;
  (**(code **)(*param_2 + 0x20))();
  if (*(int *)(*param_1 + 0xc) != 0) {
    (**(code **)(*param_2 + 0x1c))();
  }
  if (*(char *)((int)param_2 + 5) != '\0') {
    *(char *)((int)param_1 + 0x33) = *(char *)((int)param_1 + 0x33) + '\x01';
  }
  return;
}

