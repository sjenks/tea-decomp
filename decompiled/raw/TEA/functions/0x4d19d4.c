// name: FUN_004d19d4
// address: 0x4d19d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d19d4(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x514640);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_00515914;
    *(undefined ***)*param_1 = &PTR_LAB_00515920;
    FUN_004d0840(param_1 + 2,2);
    FUN_004d109c(param_1,0);
    if ((param_2 & 2) != 0) {
      FUN_004d118c(param_1 + 0x13,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

