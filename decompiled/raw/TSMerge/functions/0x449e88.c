// name: FUN_00449e88
// address: 0x449e88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00449e88(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x470304);
  puVar1 = (undefined4 *)FUN_0044b300();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_0044b300(), param_1 != (int *)0x0)) {
      FUN_00449d98(param_1);
    }
    FUN_00449d30(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

