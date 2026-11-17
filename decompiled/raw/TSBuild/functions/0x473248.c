// name: KERNEL32.DLL::RtlUnwind
// address: 0x473248
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall
RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x00473248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}

