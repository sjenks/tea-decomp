// name: FUN_0049eb84
// address: 0x49eb84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0049eb84(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50965c);
  FUN_0048fcec(param_1,param_2);
  *param_1 = &PTR_FUN_005096c8;
  param_1[0x15] = param_7;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar1 = GetSystemMetrics(DAT_00509df8);
  *(char *)((int)param_1 + 0x33) = (char)iVar1;
  *(undefined1 *)((int)param_1 + 0x32) = *(undefined1 *)((int)param_1 + 0x33);
  param_1[0x13] = param_4;
  param_1[0x14] = param_5;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_0049f044((int)param_1);
  FUN_0049f058((int)param_1);
  FUN_0048fe6c((int)param_1,0,1);
  FUN_0049ed44((int)param_1,param_6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

