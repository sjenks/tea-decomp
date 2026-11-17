// name: FUN_0044f4c8
// address: 0x44f4c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f4c8(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x472524);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_00473020;
    *(undefined ***)*param_1 = &PTR_LAB_0047302c;
    FUN_0044e334(param_1 + 2,2);
    FUN_0044eb90(param_1,0);
    if ((param_2 & 2) != 0) {
      FUN_0044ec80(param_1 + 0x13,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

