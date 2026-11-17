// name: FUN_0045d434
// address: 0x45d434
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045d434(uint *param_1)

{
  byte *pbVar1;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte local_88 [128];
  DWORD local_8;
  
  if ((DAT_00475de0 == (LPCSTR)0x0) && (DAT_00475ddc == (code *)0x0)) {
    if (DAT_00475ff0 != 0) {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_88,0x80);
      pbVar1 = FUN_0045d224(local_88,0x5c);
      if ((pbVar1 == (byte *)0x0) && (pbVar1 = FUN_0045d224(local_88,0x3a), pbVar1 == (byte *)0x0))
      {
        pbVar1 = local_88;
      }
      else {
        pbVar1 = pbVar1 + 1;
      }
      uVar2 = FUN_0045d3f0();
      MessageBoxA((HWND)0x0,(LPCSTR)param_1,(LPCSTR)pbVar1,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_00475de4,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = FUN_00455bf0(param_1);
    WriteFile(hFile,param_1,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_00475de7,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_00475ddc != (code *)0x0) {
    if (DAT_00475ddc == (code *)0xffffffff) {
      return;
    }
    (*DAT_00475ddc)();
  }
  if (DAT_00475de0 == (LPCSTR)0x0) {
    return;
  }
  if (DAT_00475de0 == (LPCSTR)0xffffffff) {
    return;
  }
  if (*DAT_00475de0 == '\0') {
    return;
  }
  FUN_0045d374(DAT_00475de0,param_1);
  return;
}

