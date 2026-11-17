// name: FUN_0048aa90
// address: 0x48aa90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048aa90(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_005053ac;
  if (param_1 != DAT_005053ac) {
    for (; param_1 != *(int *)(iVar1 + 0xd); iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = *(undefined4 *)(param_1 + 0xd);
    return;
  }
  DAT_005053ac = *(undefined4 *)(param_1 + 0xd);
  return;
}

