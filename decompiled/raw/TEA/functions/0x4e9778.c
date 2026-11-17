// name: USER32.DLL::DrawEdge
// address: 0x4e9778
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawEdge(hdc,qrc,edge,grfFlags);
  return BVar1;
}

