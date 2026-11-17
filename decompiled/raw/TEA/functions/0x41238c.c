// name: FUN_0041238c
// address: 0x41238c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __cdecl FUN_0041238c(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ecb5c);
  if (DAT_004ecb08 == '\0') {
    FUN_00412cf0((int *)&DAT_00519858,param_1,param_2);
    DAT_004ecb08 = DAT_004ecb08 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00519858;
}

