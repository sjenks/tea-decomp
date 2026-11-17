// name: USER32.DLL::GrayStringA
// address: 0x460820
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
GrayStringA(HDC hDC,HBRUSH hBrush,GRAYSTRINGPROC lpOutputFunc,LPARAM lpData,int nCount,int X,int Y,
           int nWidth,int nHeight)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GrayStringA(hDC,hBrush,lpOutputFunc,lpData,nCount,X,Y,nWidth,nHeight);
  return BVar1;
}

