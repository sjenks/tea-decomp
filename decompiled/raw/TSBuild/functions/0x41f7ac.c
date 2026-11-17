// name: FUN_0041f7ac
// address: 0x41f7ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041f7ac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00479aec;
  if (DAT_00479aec != 0) {
    for (; *(int *)(iVar1 + 0xd) != 0; iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = param_1;
    return;
  }
  DAT_00479aec = param_1;
  return;
}

