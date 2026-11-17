// name: FUN_0045984c
// address: 0x45984c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045984c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  FUN_00467ba8(0x485d00);
  FUN_00459808(&local_8,param_3);
  FUN_004598b4(param_1,param_3,&local_8);
  FUN_00405004(&local_8,2);
  *(undefined4 *)(param_1 + 0x278) = param_2;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

