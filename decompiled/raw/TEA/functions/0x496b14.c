// name: FUN_00496b14
// address: 0x496b14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00496b14(char *param_1,char *param_2)

{
  HMODULE hModule;
  int iVar1;
  char *lpProcName;
  
  if (DAT_00507878 == '\0') {
    lpProcName = s_CompareStringA_00507882;
    hModule = GetModuleHandleA(s_kernel32_00507879);
    DAT_00507874 = GetProcAddress(hModule,lpProcName);
    DAT_00507878 = DAT_00507878 + '\x01';
  }
  if (DAT_00507874 == (FARPROC)0x0) {
    iVar1 = FUN_004dcbf8(param_1,param_2);
  }
  else {
    iVar1 = (*DAT_00507874)();
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

