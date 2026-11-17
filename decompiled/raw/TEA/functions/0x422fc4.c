// name: FUN_00422fc4
// address: 0x422fc4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __cdecl FUN_00422fc4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f10ec);
  if (DAT_004f0d98 == '\0') {
    FUN_00424c28((int *)&DAT_00519900,param_1);
    DAT_004f0d98 = DAT_004f0d98 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00519900;
}

