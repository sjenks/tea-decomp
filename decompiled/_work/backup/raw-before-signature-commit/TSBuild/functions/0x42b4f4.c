// name: FUN_0042b4f4
// address: 0x42b4f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042b4f4(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47befc);
  if (param_1 != 0) {
    FUN_004209d0(param_1 + 0x117,0);
    FUN_004209d0(param_1 + 0xfe,0);
    FUN_004209d0(param_1 + 0xe5,0);
    FUN_004209d0(param_1 + 0xcc,0);
    FUN_004209d0(param_1 + 0xb3,0);
    FUN_004209d0(param_1 + 0x9a,0);
    FUN_004209d0(param_1 + 0x81,0);
    FUN_004209d0(param_1 + 0x68,0);
    FUN_004209d0(param_1 + 0x4f,0);
    FUN_004209d0(param_1 + 0x36,0);
    FUN_004209d0(param_1 + 0x1d,0);
    FUN_004209d0(param_1 + 4,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

