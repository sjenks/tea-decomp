// name: GDI32.DLL::CreateDIBitmap
// address: 0x4732f2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HBITMAP __stdcall
CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi,
              UINT iUsage)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004732f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBitmap(hdc,pbmih,flInit,pjBits,pbmi,iUsage);
  return pHVar1;
}

