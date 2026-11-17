// name: FUN_0042d1c0
// address: 0x42d1c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LRESULT __cdecl FUN_0042d1c0(int param_1,HWND param_2,char param_3)

{
  int iVar1;
  LRESULT LVar2;
  BOOL BVar3;
  
  if (param_2 == (HWND)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_3 != '\0') {
    LVar2 = SendMessageA(param_2,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                         *(LPARAM *)(iVar1 + 99));
    return LVar2;
  }
  BVar3 = PostMessageA(param_2,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                       *(LPARAM *)(iVar1 + 99));
  return BVar3;
}

