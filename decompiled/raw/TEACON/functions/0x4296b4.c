// name: KERNEL32.DLL::GetStdHandle
// address: 0x4296b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}

