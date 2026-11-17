// name: FUN_004151dc
// address: 0x4151dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004151dc(undefined4 param_1,undefined4 param_2,LPCSTR param_3)

{
  if ((param_3 != (LPCSTR)0x0) && (*param_3 != '\0')) {
    ShellExecuteA((HWND)0x0,&DAT_004ed2ba,param_3,(LPCSTR)0x0,(LPCSTR)0x0,9);
  }
  return;
}

