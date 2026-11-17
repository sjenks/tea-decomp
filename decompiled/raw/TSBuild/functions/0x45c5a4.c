// name: FUN_0045c5a4
// address: 0x45c5a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045c5a4(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486574);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_004875ec;
    *(undefined ***)*param_1 = &PTR_LAB_004875f8;
    FUN_0045c0b4(param_1 + 2,2);
    FUN_0045b7ec(param_1,0);
    if ((param_2 & 2) != 0) {
      FUN_0045b8dc(param_1 + 0xe,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

