// name: FUN_00434704
// address: 0x434704
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00434755) */

undefined4 * __cdecl FUN_00434704(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f30d8);
  FUN_00434b30(param_1);
  param_1[0x404] = 0;
  param_1[0x404] = &DAT_00513d64;
  param_1[0x408] = 0;
  param_1[0x409] = 1;
  param_1[1099] = 0;
  param_1[0x44c] = 0xffffffff;
  param_1[0x44d] = 1;
  param_1[0x44e] = 100;
  param_1[0x453] = FUN_00460050;
  *in_FS_OFFSET = local_28;
  return param_1;
}

