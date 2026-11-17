// name: FUN_004029ac
// address: 0x4029ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004029ac(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetWindowTextLengthA(*(HWND *)(*param_2 + 0xc));
  if (iVar1 < 1) {
    *(undefined4 *)(param_3 + 0x18) = DAT_0048b444;
  }
  else {
    GetWindowTextA(*(HWND *)(*param_2 + 0xc),*(LPSTR *)(param_3 + 8),0x104);
  }
  return;
}

