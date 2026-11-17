// name: COMDLG32.DLL::GetFileTitleA
// address: 0x4e94e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

short __stdcall GetFileTitleA(LPCSTR param_1,LPSTR Buf,WORD cchSize)

{
  short sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = GetFileTitleA(param_1,Buf,cchSize);
  return sVar1;
}

