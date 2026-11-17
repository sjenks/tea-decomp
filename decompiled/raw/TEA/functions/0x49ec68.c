// name: FUN_0049ec68
// address: 0x49ec68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049ec68(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x509690);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_005096c8;
    FUN_004cc0cc();
    if ((uint *)param_1[0x15] != (uint *)0x0) {
      FUN_00494064((uint *)param_1[0x15],0);
      FUN_004cc0bc();
    }
    FUN_0048fe0c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

