// name: FUN_004187f4
// address: 0x4187f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004187f4(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x430078);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_00430b10;
    *(undefined ***)*param_1 = &PTR_LAB_00430b1c;
    if ((param_2 & 2) != 0) {
      FUN_0041886c(param_1 + 3,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

