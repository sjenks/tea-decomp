// name: FUN_0044239c
// address: 0x44239c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044239c(int *param_1,int param_2)

{
  FUN_0042b110(*param_1,param_2);
  if (param_2 != 0) {
    if (param_2 == *(int *)((int)param_1 + 0x15)) {
      *(undefined4 *)((int)param_1 + 0x15) = 0;
    }
    if (*(int *)(param_2 + 0xc) == *(int *)((int)param_1 + 0x11)) {
      *(undefined4 *)((int)param_1 + 0x11) = 0;
    }
  }
  return;
}

