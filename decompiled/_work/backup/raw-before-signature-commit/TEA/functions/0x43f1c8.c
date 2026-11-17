// name: FUN_0043f1c8
// address: 0x43f1c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043f1c8(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    param_1[5] = param_1[5] | param_2 << ((byte)param_1[4] & 0x1f);
    param_1[4] = param_1[4] + 1;
  }
  else {
    FUN_0043f1c8((int *)*param_1,param_2);
    FUN_0043f1c8((int *)param_1[1],param_2);
  }
  return;
}

