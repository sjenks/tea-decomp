// name: FUN_0044eb90
// address: 0x44eb90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044eb90(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4723c4);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_00473068;
    *(undefined ***)*param_1 = &PTR_LAB_00473074;
    if ((param_2 & 2) != 0) {
      FUN_0044ec80(param_1 + 2,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

