// name: KERNEL32.DLL::GetWindowsDirectoryA
// address: 0x473194
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall GetWindowsDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryA(lpBuffer,uSize);
  return UVar1;
}

