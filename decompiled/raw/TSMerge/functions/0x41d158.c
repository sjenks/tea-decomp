// name: FUN_0041d158
// address: 0x41d158
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041d158(uint param_1)

{
  int iVar1;
  
  FUN_0041cb6c();
  iVar1 = FUN_0041cdb0(param_1);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + '\x01';
  }
  return;
}

