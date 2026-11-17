// name: GDI32.DLL::SetAbortProc
// address: 0x4e9646
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall SetAbortProc(HDC hdc,ABORTPROC proc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetAbortProc(hdc,proc);
  return iVar1;
}

