// name: FUN_0043061c
// address: 0x43061c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0043061c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int local_48;
  int local_44;
  undefined4 local_28;
  
  FUN_004dce64(0x4f2bac);
  *param_1 = param_2 + 0x78;
  iVar1 = *(int *)(*(int *)(param_2 + 0x9c) + 8);
  param_1[2] = local_48;
  param_1[3] = local_44;
  param_1[4] = iVar1;
  FUN_00430730(param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

