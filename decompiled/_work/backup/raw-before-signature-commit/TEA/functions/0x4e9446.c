// name: KERNEL32.DLL::ReadFile
// address: 0x4e9446
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}

