// name: FUN_004df67c
// address: 0x4df67c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004df67c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004dedd8(param_1,0,0);
  if (iVar1 == 0) {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffef;
  }
  return;
}

