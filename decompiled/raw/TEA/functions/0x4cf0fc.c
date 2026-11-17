// name: FUN_004cf0fc
// address: 0x4cf0fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004cf0fc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_004dce64(0x513e8c);
  FUN_004cf0b8(&local_8,param_3);
  FUN_004cf164(param_1,param_3,&local_8);
  FUN_00437eb0(&local_8,2);
  *(undefined4 *)(param_1 + 0x278) = param_2;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

