// name: FUN_0041fd00
// address: 0x41fd00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0041fd00(void)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_00434cc4 == 2) {
    FUN_00427ce5(5,1);
  }
  (*DAT_00431f3c)();
  FUN_00426b84();
  return;
}

