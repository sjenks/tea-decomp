// name: FUN_00487f30
// address: 0x487f30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00487f30(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x504810);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00504860;
    FUN_004880e0();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

