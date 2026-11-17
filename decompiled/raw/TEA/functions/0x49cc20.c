// name: FUN_0049cc20
// address: 0x49cc20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049cc20(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x508ed0);
  if (param_1 != (undefined4 *)0x0) {
    if ((*(char *)(param_1 + 3) != '\0') && ((uint *)param_1[2] != (uint *)0x0)) {
      FUN_004886b0((uint *)param_1[2],3);
    }
    FUN_0049cca4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

