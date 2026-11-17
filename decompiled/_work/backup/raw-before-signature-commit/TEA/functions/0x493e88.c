// name: FUN_00493e88
// address: 0x493e88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00493e88(uint param_1)

{
  int iVar1;
  
  FUN_0049389c();
  iVar1 = FUN_00493ae0(param_1);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + '\x01';
  }
  return;
}

