// name: FUN_004282cc
// address: 0x4282cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004282cc(uint param_1)

{
  int iVar1;
  
  FUN_00427ce0();
  iVar1 = FUN_00427f24(param_1);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + '\x01';
  }
  return;
}

