// name: FUN_0046ff70
// address: 0x46ff70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046ff70(uint *param_1)

{
  byte *pbVar1;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte local_88 [128];
  DWORD local_8;
  
  if ((DAT_0048a880 == (LPCSTR)0x0) && (DAT_0048a87c == (code *)0x0)) {
    if (DAT_0048aa90 != 0) {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_88,0x80);
      pbVar1 = FUN_0046fd60(local_88,0x5c);
      if ((pbVar1 == (byte *)0x0) && (pbVar1 = FUN_0046fd60(local_88,0x3a), pbVar1 == (byte *)0x0))
      {
        pbVar1 = local_88;
      }
      else {
        pbVar1 = pbVar1 + 1;
      }
      uVar2 = FUN_0046ff2c();
      MessageBoxA((HWND)0x0,(LPCSTR)param_1,(LPCSTR)pbVar1,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_0048a884,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = FUN_004677a0(param_1);
    WriteFile(hFile,param_1,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_0048a887,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_0048a87c != (code *)0x0) {
    if (DAT_0048a87c == (code *)0xffffffff) {
      return;
    }
    (*DAT_0048a87c)();
  }
  if (DAT_0048a880 == (LPCSTR)0x0) {
    return;
  }
  if (DAT_0048a880 == (LPCSTR)0xffffffff) {
    return;
  }
  if (*DAT_0048a880 == '\0') {
    return;
  }
  FUN_0046feb0(DAT_0048a880,param_1);
  return;
}

