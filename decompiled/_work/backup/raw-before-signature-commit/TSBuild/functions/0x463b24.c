// name: FUN_00463b24
// address: 0x463b24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00463b24(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x487918);
  DAT_0048d068 = DAT_0048d068 + 1;
  if (DAT_0048d068 == 1) {
    FUN_004600b8(DAT_0048cf5c,&DAT_0048cfa0);
    FUN_004600b8(DAT_0048cfe0,&DAT_0048cfa0);
    FUN_004600b8(DAT_0048d020,&DAT_0048cfa0);
    *(uint *)(DAT_0048cfe0 + 4) = *(uint *)(DAT_0048cfe0 + 4) | 0x2000;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

