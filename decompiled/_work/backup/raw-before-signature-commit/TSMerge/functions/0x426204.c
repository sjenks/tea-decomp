// name: FUN_00426204
// address: 0x426204
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_00426204(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x469431);
  if (DAT_00469420 == '\0') {
    FUN_00431494((uint *)&DAT_00476e34,0x46b754,&DAT_00476bf0,&DAT_00476c04);
    _DAT_00476e39 = DAT_00476c04;
    _DAT_00476e3d = 0;
    _DAT_00476e41 = 0;
    DAT_00476e45 = 0;
    DAT_00469420 = DAT_00469420 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476e34;
}

