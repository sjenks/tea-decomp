// name: FUN_004d109c
// address: 0x4d109c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d109c(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5144e0);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_0051595c;
    *(undefined ***)*param_1 = &PTR_LAB_00515968;
    if ((param_2 & 2) != 0) {
      FUN_004d118c(param_1 + 2,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

