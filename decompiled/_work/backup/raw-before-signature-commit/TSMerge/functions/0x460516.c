// name: KERNEL32.DLL::UnhandledExceptionFilter
// address: 0x460516
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}

