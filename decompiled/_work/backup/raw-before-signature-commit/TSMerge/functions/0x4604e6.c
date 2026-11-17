// name: KERNEL32.DLL::SetFilePointer
// address: 0x4604e6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004604e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}

