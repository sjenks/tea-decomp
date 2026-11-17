// name: FUN_00412ae8
// address: 0x412ae8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00412ae8(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x4654fc);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0046566c;
    if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x12])();
    }
    if ((short)((uint)param_1[0x11] >> 0x10) != 0) {
      FUN_0044b2dc();
    }
    FUN_00419098(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

