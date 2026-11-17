// name: FUN_00418c54
// address: 0x418c54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00418c54(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_6c [28];
  uint local_50 [10];
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00455f04(0x466e18);
  GetObjectA((HANDLE)*param_2,0x3c,local_6c);
  local_18 = 8;
  FUN_0044d11c(param_1,local_50);
  *in_FS_OFFSET = local_28;
  return param_1;
}

