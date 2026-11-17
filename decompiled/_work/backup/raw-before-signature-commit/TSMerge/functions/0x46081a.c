// name: USER32.DLL::GetWindowThreadProcessId
// address: 0x46081a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046081a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetWindowThreadProcessId(hWnd,lpdwProcessId);
  return DVar1;
}

