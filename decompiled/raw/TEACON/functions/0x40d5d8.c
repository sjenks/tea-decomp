// name: FUN_0040d5d8
// address: 0x40d5d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040d629) */

undefined4 * __cdecl FUN_0040d5d8(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42c910);
  FUN_0040dae0(param_1);
  param_1[0x404] = 0;
  param_1[0x404] = &DAT_0042fac0;
  param_1[0x408] = 0;
  *(undefined1 *)(param_1 + 0x409) = 1;
  param_1[1099] = 0;
  param_1[0x44c] = 0xffffffff;
  param_1[0x44d] = 1;
  param_1[0x44e] = 100;
  param_1[0x453] = FUN_0040ebec;
  *in_FS_OFFSET = local_28;
  return param_1;
}

