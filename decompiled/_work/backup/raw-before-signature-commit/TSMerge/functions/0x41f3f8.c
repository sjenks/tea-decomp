// name: FUN_0041f3f8
// address: 0x41f3f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041f3f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 local_28;
  
  FUN_00455f04(0x467d50);
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = 0;
  puVar2 = param_1;
  piVar1 = (int *)FUN_0041f2cc();
  FUN_0041f908(piVar1,(int)puVar2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

