// name: FUN_00447738
// address: 0x447738
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00447738(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46fca4);
  puVar1 = (undefined4 *)FUN_0044b300();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_0044b300(), param_1 != (int *)0x0)) {
      FUN_004473fc(param_1);
    }
    FUN_00447394(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

