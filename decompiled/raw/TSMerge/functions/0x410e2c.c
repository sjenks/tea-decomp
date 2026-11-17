// name: FUN_00410e2c
// address: 0x410e2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00410e2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x464f7c);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  RegQueryValueExA(*(HKEY *)*param_1,(LPCSTR)param_1[1],(LPDWORD)0x0,param_1 + 3,(LPBYTE)0x0,
                   param_1 + 5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

