// name: FUN_0041f7d8
// address: 0x41f7d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041f7d8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00479aec;
  if (param_1 != DAT_00479aec) {
    for (; param_1 != *(int *)(iVar1 + 0xd); iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = *(undefined4 *)(param_1 + 0xd);
    return;
  }
  DAT_00479aec = *(undefined4 *)(param_1 + 0xd);
  return;
}

