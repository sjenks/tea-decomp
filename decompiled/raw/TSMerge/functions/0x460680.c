// name: SHELL32.DLL::SHGetMalloc
// address: 0x460680
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HRESULT __stdcall SHGetMalloc(IMalloc **ppMalloc)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SHGetMalloc(ppMalloc);
  return HVar1;
}

