// name: FUN_00496414
// address: 0x496414
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00496414(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 local_28;
  
  FUN_004dce64(0x5077c8);
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = 0;
  puVar2 = param_1;
  piVar1 = (int *)FUN_004962e8();
  FUN_00496924(piVar1,(int)puVar2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

