// name: GDI32.DLL::CreateRectRgnIndirect
// address: 0x4e954a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HRGN __stdcall CreateRectRgnIndirect(RECT *lprect)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e954a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRectRgnIndirect(lprect);
  return pHVar1;
}

