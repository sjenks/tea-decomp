// name: FUN_0044ecbc
// address: 0x44ecbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0044ecbc(undefined4 *param_1,uint *param_2,char param_3,char param_4,char param_5)

{
  UINT uMode;
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x482ebc);
  *param_1 = &PTR_FUN_00474f74;
  *param_1 = &PTR_FUN_004833bc;
  param_1[1] = 0;
  if (param_3 == '\0') {
    param_1[2] = 0;
  }
  else {
    uMode = SetErrorMode(0x8001);
    pHVar1 = LoadLibraryA((LPCSTR)param_2);
    param_1[2] = pHVar1;
    if (((uint)param_1[2] < 0x21) && (param_4 != '\0')) {
      FUN_0045063c(param_2);
    }
    SetErrorMode(uMode);
  }
  *(char *)(param_1 + 3) = param_3;
  FUN_0044ef34((int)param_1,param_2);
  if (param_5 != '\0') {
    FUN_0044e870((int)param_1);
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

