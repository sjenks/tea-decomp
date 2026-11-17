// name: FUN_004147b4
// address: 0x4147b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004147b4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00465d38;
  if (param_1 != DAT_00465d38) {
    for (; param_1 != *(int *)(iVar1 + 0xd); iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = *(undefined4 *)(param_1 + 0xd);
    return;
  }
  DAT_00465d38 = *(undefined4 *)(param_1 + 0xd);
  return;
}

