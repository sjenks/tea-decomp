// name: FUN_004d8d78
// address: 0x4d8d78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004d8d78(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x515be4);
  DAT_0051bbec = DAT_0051bbec + 1;
  if (DAT_0051bbec == 1) {
    FUN_004d562c(DAT_0051bae0,&DAT_0051bb24);
    FUN_004d562c(DAT_0051bb64,&DAT_0051bb24);
    FUN_004d562c(DAT_0051bba4,&DAT_0051bb24);
    *(uint *)(DAT_0051bb64 + 4) = *(uint *)(DAT_0051bb64 + 4) | 0x2000;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

