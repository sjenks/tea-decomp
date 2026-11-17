// name: USER32.DLL::DrawIcon
// address: 0x4734a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DrawIcon(HDC hDC,int X,int Y,HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIcon(hDC,X,Y,hIcon);
  return BVar1;
}

