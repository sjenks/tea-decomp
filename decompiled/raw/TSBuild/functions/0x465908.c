// name: FUN_00465908
// address: 0x465908
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004659a7) */

undefined4 * __cdecl FUN_00465908(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_00467ba8(0x4884cc);
  local_18 = 8;
  *param_1 = &PTR_FUN_00487554;
  param_1[1] = param_3;
  *param_1 = &PTR_FUN_0048885c;
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = local_c + 2;
  local_2c = 0;
  local_54 = 0x465969;
  FUN_00459a24(param_1 + 4,param_2,&local_2c);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[10] = &DAT_00485bd8;
  local_c = local_c + 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_18 = 0x38;
  FUN_00459d78((int)&local_54,(uint *)&DAT_00488499);
  local_18 = 0x2c;
  FUN_0046096c(param_1 + 2,6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

