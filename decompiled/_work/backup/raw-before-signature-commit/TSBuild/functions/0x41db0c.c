// name: FUN_0041db0c
// address: 0x41db0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041db0c(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x4792b0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00479420;
    if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x12])();
    }
    if ((short)((uint)param_1[0x11] >> 0x10) != 0) {
      FUN_0045681c();
    }
    FUN_0042420c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

