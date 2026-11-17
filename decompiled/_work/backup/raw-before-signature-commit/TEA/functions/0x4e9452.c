// name: KERNEL32.DLL::SetConsoleCtrlHandler
// address: 0x4e9452
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return BVar1;
}

