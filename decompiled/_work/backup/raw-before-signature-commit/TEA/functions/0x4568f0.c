// name: FUN_004568f0
// address: 0x4568f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004568f0(int *param_1)

{
  int iVar1;
  uint *lpString;
  
  iVar1 = GetWindowTextLengthA(*(HWND *)(param_1[0x56] + 0xc));
  lpString = (uint *)FUN_004cc180();
  GetWindowTextA(*(HWND *)(param_1[0x56] + 0xc),(LPSTR)lpString,iVar1 + 1);
  FUN_004cf41c((int)(param_1 + 0x1a6),lpString);
  FUN_004cc0cc();
  FUN_0045269c(param_1);
  return;
}

