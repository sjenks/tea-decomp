// name: FUN_004d0840
// address: 0x4d0840
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d0840(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5142dc);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_005159d4;
    FUN_004d08c4(param_1);
    FUN_004cc0bc();
    FUN_004cc0bc();
    FUN_004d0a50(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

