// name: FUN_004a1348
// address: 0x4a1348
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a1348(uint *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x509d50);
  if (param_1 != (uint *)0x0) {
    if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
      FUN_004886b0(*(uint **)((int)param_1 + 0x11),3);
    }
    FUN_004ab9b4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

