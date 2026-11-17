// name: FUN_004d39c0
// address: 0x4d39c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d39c0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_004dce64(0x514ac8);
  *param_1 = param_2;
  puVar1 = FUN_004d05d0(&local_2c,0);
  FUN_004d3a14(param_1 + 1,puVar1);
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_2 == -1) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

