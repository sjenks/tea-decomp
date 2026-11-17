// name: FUN_00414788
// address: 0x414788
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00414788(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00465d38;
  if (DAT_00465d38 != 0) {
    for (; *(int *)(iVar1 + 0xd) != 0; iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = param_1;
    return;
  }
  DAT_00465d38 = param_1;
  return;
}

