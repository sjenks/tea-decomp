// name: FUN_00428d08
// address: 0x428d08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00428d08(undefined4 *param_1,int param_2)

{
  HDWP pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47b81c);
  if (param_2 == 0) {
    pvVar1 = (HDWP)0x0;
  }
  else {
    pvVar1 = BeginDeferWindowPos(param_2);
  }
  *param_1 = pvVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

