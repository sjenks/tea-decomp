// name: KERNEL32.DLL::VirtualQueryEx
// address: 0x4e94b2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

SIZE_T __stdcall
VirtualQueryEx(HANDLE hProcess,LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQueryEx(hProcess,lpAddress,lpBuffer,dwLength);
  return SVar1;
}

