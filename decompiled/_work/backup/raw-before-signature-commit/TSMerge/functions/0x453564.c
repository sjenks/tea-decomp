// name: FUN_00453564
// address: 0x453564
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00453564(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x473280);
  DAT_004775c0 = DAT_004775c0 + 1;
  if (DAT_004775c0 == 1) {
    FUN_00451924(DAT_004774b4,&DAT_004774f8);
    FUN_00451924(DAT_00477538,&DAT_004774f8);
    FUN_00451924(DAT_00477578,&DAT_004774f8);
    *(uint *)(DAT_00477538 + 4) = *(uint *)(DAT_00477538 + 4) | 0x2000;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

