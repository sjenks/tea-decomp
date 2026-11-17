// name: USER32.DLL::FrameRect
// address: 0x46076c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046076c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}

