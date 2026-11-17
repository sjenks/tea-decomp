// name: USER32.DLL::FrameRect
// address: 0x4e97e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e97e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}

