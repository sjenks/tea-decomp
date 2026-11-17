// name: KERNEL32.DLL::SetFilePointer
// address: 0x42972c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042972c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}

