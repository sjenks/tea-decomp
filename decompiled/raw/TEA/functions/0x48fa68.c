// name: FUN_0048fa68
// address: 0x48fa68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0048fa68(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_6c [28];
  uint local_50 [10];
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x50679c);
  GetObjectA((HANDLE)*param_2,0x3c,local_6c);
  local_18 = 8;
  FUN_004cf628(param_1,local_50);
  *in_FS_OFFSET = local_28;
  return param_1;
}

