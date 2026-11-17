// name: FUN_00450a74
// address: 0x450a74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00450a74(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x483450);
  puVar1 = (undefined4 *)FUN_00456840();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)FUN_00456840(), param_1 != (int *)0x0)) {
      FUN_00450944(param_1);
    }
    FUN_004508dc(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

