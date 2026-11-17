// name: USER32.DLL::GetKeyState
// address: 0x4e9826
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

SHORT __stdcall GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}

