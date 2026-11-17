// name: FUN_00499268
// address: 0x499268
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_00499268(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508434);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[3] = param_5;
  uVar1 = FUN_00496d48(param_2);
  param_1[2] = uVar1;
  FUN_00499d44();
  if (param_5 != 0) {
    FUN_00498ebc(param_5,(int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

