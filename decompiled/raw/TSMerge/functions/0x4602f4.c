// name: KERNEL32.DLL::CloseHandle
// address: 0x4602f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004602f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}

