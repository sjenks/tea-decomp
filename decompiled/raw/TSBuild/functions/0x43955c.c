// name: FUN_0043955c
// address: 0x43955c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043955c(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  WORD wLanguageId;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined4 *)FUN_0041c4a0();
  iVar2 = FUN_0041c6e8(puVar1,iVar2);
  if (iVar2 == 0) {
    wLanguageId = 0;
  }
  else {
    wLanguageId = *(WORD *)(iVar2 + 0x2f);
  }
  MessageBoxExA(param_1,param_2,param_3,param_4,wLanguageId);
  return;
}

