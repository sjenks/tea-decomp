// name: FUN_00488e74
// address: 0x488e74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00488e74(int param_1,byte param_2)

{
  bool bVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  bVar1 = FUN_004875a8();
  if (!bVar1) {
    *(byte *)(param_1 + 0x55) = param_2 & 0xf | *(byte *)(param_1 + 0x55) & 0xf0;
    local_c = 2;
    local_14 = 2;
    local_10 = ((int)((uint)*(byte *)(param_1 + 0x55) << 0x1c) >> 0x1c) + 1;
    local_8 = local_10;
    FUN_0048ff24(param_1,&local_14);
  }
  return;
}

