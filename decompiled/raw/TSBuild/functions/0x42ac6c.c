// name: FUN_0042ac6c
// address: 0x42ac6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042ac6c(char *param_1,char *param_2)

{
  HMODULE hModule;
  int iVar1;
  char *lpProcName;
  
  if (DAT_0047bbdc == '\0') {
    lpProcName = s_CompareStringA_0047bbe6;
    hModule = GetModuleHandleA(s_kernel32_0047bbdd);
    DAT_0047bbd8 = GetProcAddress(hModule,lpProcName);
    DAT_0047bbdc = DAT_0047bbdc + '\x01';
  }
  if (DAT_0047bbd8 == (FARPROC)0x0) {
    iVar1 = FUN_004679a4(param_1,param_2);
  }
  else {
    iVar1 = (*DAT_0047bbd8)();
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

