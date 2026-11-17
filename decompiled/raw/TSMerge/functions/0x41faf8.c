// name: FUN_0041faf8
// address: 0x41faf8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0041faf8(char *param_1,char *param_2)

{
  HMODULE hModule;
  int iVar1;
  char *lpProcName;
  
  if (DAT_00467e00 == '\0') {
    lpProcName = s_CompareStringA_00467e0a;
    hModule = GetModuleHandleA(s_kernel32_00467e01);
    DAT_00467dfc = GetProcAddress(hModule,lpProcName);
    DAT_00467e00 = DAT_00467e00 + '\x01';
  }
  if (DAT_00467dfc == (FARPROC)0x0) {
    iVar1 = FUN_00455d94(param_1,param_2);
  }
  else {
    iVar1 = (*DAT_00467dfc)();
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

