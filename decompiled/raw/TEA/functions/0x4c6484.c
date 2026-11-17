// name: FUN_004c6484
// address: 0x4c6484
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004c6484(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x511618);
  *param_1 = &PTR_FUN_004ea93c;
  *param_1 = &PTR_FUN_00511674;
  uVar1 = FUN_00496d48(param_2);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

