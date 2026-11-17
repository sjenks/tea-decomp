// name: GDI32.DLL::CreateBitmap
// address: 0x4732da
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HBITMAP __stdcall CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return pHVar1;
}

