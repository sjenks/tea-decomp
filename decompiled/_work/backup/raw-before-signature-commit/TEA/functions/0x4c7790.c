// name: FUN_004c7790
// address: 0x4c7790
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004c7790(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x511904);
  puVar1 = (undefined4 *)FUN_004cc0f0();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_004cc0f0(), param_1 != (int *)0x0)) {
      FUN_004c7454(param_1);
    }
    FUN_004c73ec(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

