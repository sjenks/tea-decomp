// name: FUN_0041c970
// address: 0x41c970
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041c970(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x430c90);
  DAT_00434894 = DAT_00434894 + 1;
  if (DAT_00434894 == 1) {
    FUN_0041aa58(DAT_00434788,&DAT_004347cc);
    FUN_0041aa58(DAT_0043480c,&DAT_004347cc);
    FUN_0041aa58(DAT_0043484c,&DAT_004347cc);
    *(uint *)(DAT_0043480c + 4) = *(uint *)(DAT_0043480c + 4) | 0x2000;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

