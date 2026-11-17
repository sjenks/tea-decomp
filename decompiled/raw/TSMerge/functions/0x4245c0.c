// name: FUN_004245c0
// address: 0x4245c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004245c0(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x468ea8);
  if (param_1 != (undefined4 *)0x0) {
    if ((*(char *)(param_1 + 3) != '\0') && ((uint *)param_1[2] != (uint *)0x0)) {
      FUN_00411fc4((uint *)param_1[2],3);
    }
    FUN_00424644(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

