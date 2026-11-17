// name: KERNEL32.DLL::GetDriveTypeA
// address: 0x4e92de
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall GetDriveTypeA(LPCSTR lpRootPathName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDriveTypeA(lpRootPathName);
  return UVar1;
}

