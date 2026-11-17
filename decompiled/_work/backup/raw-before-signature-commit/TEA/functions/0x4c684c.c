// name: FUN_004c684c
// address: 0x4c684c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004c684c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5117f0);
  *param_1 = &PTR_FUN_004ea93c;
  *param_1 = &PTR_FUN_00511834;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 1;
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  if ((param_1[1] == 0) || ((*(byte *)(param_1[1] + 0x1a) & 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x3b) = uVar1;
  if ((param_1[1] == 0) || ((*(byte *)(param_1[1] + 0x1a) & 0x20) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

