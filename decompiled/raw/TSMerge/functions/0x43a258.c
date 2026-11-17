// name: FUN_0043a258
// address: 0x43a258
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043a258(int *param_1,int param_2)

{
  while( true ) {
    if (*param_1 == 0) {
      return 0;
    }
    if (param_2 == *param_1) break;
    param_1 = (int *)(*param_1 + 0x16);
  }
  *param_1 = *(int *)(param_2 + 0x16);
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

