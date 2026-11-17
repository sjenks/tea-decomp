// name: KERNEL32.DLL::GetWindowsDirectoryA
// address: 0x4e9392
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall GetWindowsDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryA(lpBuffer,uSize);
  return UVar1;
}

