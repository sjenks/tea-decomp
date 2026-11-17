// name: KERNEL32.DLL::FindFirstFileA
// address: 0x46032a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046032a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  return pvVar1;
}

