// name: SHELL32.DLL::SHGetSpecialFolderLocation
// address: 0x4e96a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HRESULT __stdcall SHGetSpecialFolderLocation(HWND hwnd,int csidl,LPITEMIDLIST *ppidl)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e96a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SHGetSpecialFolderLocation(hwnd,csidl,ppidl);
  return HVar1;
}

