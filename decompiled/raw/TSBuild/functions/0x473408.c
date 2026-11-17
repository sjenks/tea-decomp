// name: SHELL32.DLL::SHGetPathFromIDListA
// address: 0x473408
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SHGetPathFromIDListA(LPCITEMIDLIST pidl,LPSTR pszPath)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SHGetPathFromIDListA(pidl,pszPath);
  return BVar1;
}

