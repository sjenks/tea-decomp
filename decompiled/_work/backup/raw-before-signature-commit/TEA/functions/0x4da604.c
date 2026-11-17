// name: FUN_004da604
// address: 0x4da604
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004da604(int param_1,undefined4 param_2,UINT param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x51659c);
  uVar1 = FUN_004da4c0(param_1);
  if (uVar1 < DAT_0051bbf4) {
    param_4 = FUN_004da204(*(undefined4 **)(DAT_0051bbf0 + uVar1 * 4),param_2,param_3,param_4);
    *in_FS_OFFSET = local_28;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  return param_4;
}

