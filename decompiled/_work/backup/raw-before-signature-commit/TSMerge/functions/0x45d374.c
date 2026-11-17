// name: FUN_0045d374
// address: 0x45d374
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045d374(LPCSTR param_1,uint *param_2)

{
  HANDLE hFile;
  uint *lpBuffer;
  char *pcVar1;
  DWORD *pDVar2;
  LPOVERLAPPED p_Var3;
  DWORD local_8;
  
  hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0x0) {
    lpBuffer = (uint *)FUN_0045d324();
    pDVar2 = &local_8;
    p_Var3 = (LPOVERLAPPED)0x0;
    pcVar1 = FUN_00455bf0(lpBuffer);
    WriteFile(hFile,lpBuffer,(DWORD)pcVar1,pDVar2,p_Var3);
    p_Var3 = (LPOVERLAPPED)0x0;
    pDVar2 = &local_8;
    pcVar1 = FUN_00455bf0(param_2);
    WriteFile(hFile,param_2,(DWORD)pcVar1,pDVar2,p_Var3);
    CloseHandle(hFile);
  }
  return;
}

