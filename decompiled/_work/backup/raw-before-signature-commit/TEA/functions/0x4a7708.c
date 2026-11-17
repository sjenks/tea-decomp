// name: FUN_004a7708
// address: 0x4a7708
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a7708(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_2 != '\0') {
    FUN_004a6094(param_1,*(undefined4 *)(iVar1 + 0x5b),*(undefined4 *)(iVar1 + 0x5f),
                 *(undefined4 *)(iVar1 + 99));
    return;
  }
  FUN_004a76c4(param_1,*(HWND *)(param_1 + 0xc),'\0');
  return;
}

