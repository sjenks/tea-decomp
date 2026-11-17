// name: FUN_004269a0
// address: 0x4269a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004269a0(uint *param_1)

{
  byte *pbVar1;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte local_88 [128];
  DWORD local_8;
  
  if ((DAT_004337dc == (LPCSTR)0x0) && (DAT_004337d8 == (code *)0x0)) {
    if (DAT_004339cc != 0) {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_88,0x80);
      pbVar1 = FUN_00426790(local_88,0x5c);
      if ((pbVar1 == (byte *)0x0) && (pbVar1 = FUN_00426790(local_88,0x3a), pbVar1 == (byte *)0x0))
      {
        pbVar1 = local_88;
      }
      else {
        pbVar1 = pbVar1 + 1;
      }
      uVar2 = FUN_0042695c();
      MessageBoxA((HWND)0x0,(LPCSTR)param_1,(LPCSTR)pbVar1,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_004337e0,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = FUN_0041ef80(param_1);
    WriteFile(hFile,param_1,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_004337e3,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_004337d8 != (code *)0x0) {
    if (DAT_004337d8 == (code *)0xffffffff) {
      return;
    }
    (*DAT_004337d8)();
  }
  if (DAT_004337dc == (LPCSTR)0x0) {
    return;
  }
  if (DAT_004337dc == (LPCSTR)0xffffffff) {
    return;
  }
  if (*DAT_004337dc == '\0') {
    return;
  }
  FUN_004268e0(DAT_004337dc,param_1);
  return;
}

