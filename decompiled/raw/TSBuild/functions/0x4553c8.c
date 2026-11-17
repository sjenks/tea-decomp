// name: FUN_004553c8
// address: 0x4553c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004553c8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x484134);
  puVar1 = (undefined4 *)FUN_00456840();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_00456840(), param_1 != (int *)0x0)) {
      FUN_004552d8(param_1);
    }
    FUN_00455270(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

