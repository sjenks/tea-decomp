// name: KERNEL32.DLL::GlobalSize
// address: 0x4731b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

SIZE_T __stdcall GlobalSize(HGLOBAL hMem)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004731b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GlobalSize(hMem);
  return SVar1;
}

