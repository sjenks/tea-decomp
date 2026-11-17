// name: FUN_0041dbbc
// address: 0x41dbbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041dbbc(int param_1,byte param_2)

{
  bool bVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  bVar1 = FUN_0041b9e4();
  if (!bVar1) {
    *(byte *)(param_1 + 0x55) = param_2 & 0xf | *(byte *)(param_1 + 0x55) & 0xf0;
    local_c = 2;
    local_14 = 2;
    local_10 = ((int)((uint)*(byte *)(param_1 + 0x55) << 0x1c) >> 0x1c) + 1;
    local_8 = local_10;
    FUN_00424310(param_1,&local_14);
  }
  return;
}

