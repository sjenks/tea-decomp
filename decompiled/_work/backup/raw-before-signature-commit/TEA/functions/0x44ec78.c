// name: FUN_0044ec78
// address: 0x44ec78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044ec78(int param_1,int param_2,int param_3)

{
  RegSetValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),0,1,*(BYTE **)(param_3 + 8),
                 *(int *)(*(BYTE **)(param_3 + 8) + -4) + 1);
  return;
}

