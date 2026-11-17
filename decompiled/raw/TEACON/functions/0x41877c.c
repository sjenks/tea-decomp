// name: FUN_0041877c
// address: 0x41877c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041877c(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x430054);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_00430af4;
    *(undefined ***)*param_1 = &PTR_LAB_00430b00;
    if ((param_2 & 2) != 0) {
      FUN_0041886c(param_1 + 2,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

