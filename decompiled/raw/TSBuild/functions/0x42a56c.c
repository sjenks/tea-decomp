// name: FUN_0042a56c
// address: 0x42a56c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042a56c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 local_28;
  
  FUN_00467ba8(0x47bb2c);
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = 0;
  puVar2 = param_1;
  piVar1 = (int *)FUN_0042a440();
  FUN_0042aa7c(piVar1,(int)puVar2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

