// name: FUN_004d0688
// address: 0x4d0688
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d0688(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x515774);
  if (DAT_0051bc08 == 0) {
    FUN_004daff8();
  }
  iVar1 = DAT_0051bc08;
  *param_1 = DAT_0051bc08;
  FUN_004d8174(iVar1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

