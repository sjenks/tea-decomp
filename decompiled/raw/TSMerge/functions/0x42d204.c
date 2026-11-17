// name: FUN_0042d204
// address: 0x42d204
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042d204(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_2 != '\0') {
    uVar2 = FUN_0042bbb4(param_1,*(undefined4 *)(iVar1 + 0x5b),*(undefined4 *)(iVar1 + 0x5f),
                         *(undefined4 *)(iVar1 + 99));
    return uVar2;
  }
  LVar3 = FUN_0042d1c0(param_1,*(HWND *)(param_1 + 0xc),'\0');
  return LVar3;
}

