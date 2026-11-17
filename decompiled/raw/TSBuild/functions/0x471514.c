// name: FUN_00471514
// address: 0x471514
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00471514(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  if (param_1 == *(int *)(iVar1 + 0x14)) {
    iVar1 = FUN_00401140();
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
    return;
  }
  FUN_00456e94();
  return;
}

