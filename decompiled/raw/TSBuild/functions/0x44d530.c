// name: FUN_0044d530
// address: 0x44d530
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044d530(int *param_1,int param_2)

{
  FUN_004362a4(*param_1,param_2);
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

