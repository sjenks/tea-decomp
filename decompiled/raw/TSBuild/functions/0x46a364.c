// name: FUN_0046a364
// address: 0x46a364
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046a364(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00469ae0(param_1,0,0);
  if (iVar1 == 0) {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffef;
  }
  return;
}

