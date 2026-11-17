// name: FUN_004458e0
// address: 0x4458e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004458e0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46f674);
  puVar1 = (undefined4 *)FUN_0044b300();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_0044b300(), param_1 != (int *)0x0)) {
      FUN_004457b0(param_1);
    }
    FUN_00445748(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

