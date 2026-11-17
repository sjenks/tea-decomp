// name: FUN_00440d58
// address: 0x440d58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00440d58(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46e6bc);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  uVar1 = FUN_0044b390();
  param_1[3] = uVar1;
  uVar1 = FUN_0044b390();
  param_1[4] = uVar1;
  *(undefined1 *)param_1[4] = 0;
  *(undefined1 *)param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

