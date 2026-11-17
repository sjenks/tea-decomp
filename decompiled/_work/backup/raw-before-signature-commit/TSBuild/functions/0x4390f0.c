// name: FUN_004390f0
// address: 0x4390f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004390f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47e8d0);
  puVar1 = (undefined4 *)FUN_00456840();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00439068(puVar1,param_1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

