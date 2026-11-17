// name: FUN_0041fe58
// address: 0x41fe58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041fe58(undefined4 param_1,HWND param_2)

{
  BOOL BVar1;
  
  BVar1 = OpenClipboard(param_2);
  *(bool *)param_1 = BVar1 != 0;
  return;
}

