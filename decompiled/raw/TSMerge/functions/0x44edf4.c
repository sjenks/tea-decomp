// name: FUN_0044edf4
// address: 0x44edf4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044edf4(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x472454);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_0047303c;
    *(undefined ***)*param_1 = &PTR_LAB_00473048;
    FUN_0044e334(param_1 + 3,2);
    FUN_0044ec08(param_1,0);
    if ((param_2 & 2) != 0) {
      FUN_0044ec80(param_1 + 0x14,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

