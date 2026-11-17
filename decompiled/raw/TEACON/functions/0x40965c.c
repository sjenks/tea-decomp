// name: FUN_0040965c
// address: 0x40965c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0040965c(int param_1,char param_2,LPFILETIME param_3)

{
  HANDLE hFile;
  BOOL BVar1;
  LPFILETIME lpLastWriteTime;
  bool bVar2;
  
  bVar2 = false;
  hFile = CreateFileA(*(LPCSTR *)(param_1 + 8),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    if (param_2 == '\0') {
      lpLastWriteTime = (LPFILETIME)0x0;
    }
    else {
      lpLastWriteTime = param_3;
      param_3 = (LPFILETIME)0x0;
    }
    BVar1 = GetFileTime(hFile,param_3,(LPFILETIME)0x0,lpLastWriteTime);
    bVar2 = BVar1 != 0;
    CloseHandle(hFile);
  }
  return bVar2;
}

