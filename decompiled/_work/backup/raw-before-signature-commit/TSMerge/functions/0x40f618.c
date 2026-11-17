// name: FUN_0040f618
// address: 0x40f618
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0040f618(int *param_1,int param_2,int param_3,int *param_4)

{
  int local_1c [3];
  int local_10 [3];
  
  FUN_00452bbc(local_10,param_1);
  FUN_004517ec(param_1,param_2,param_3);
  FUN_00452bbc(local_1c,param_1);
  *param_4 = local_1c[0] - local_10[0];
  return 0;
}

