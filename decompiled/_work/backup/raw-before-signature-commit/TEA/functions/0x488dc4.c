// name: FUN_00488dc4
// address: 0x488dc4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00488dc4(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x504b70);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00504ce0;
    if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x12])();
    }
    if ((short)((uint)param_1[0x11] >> 0x10) != 0) {
      FUN_004cc0cc();
    }
    FUN_0048fe0c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

