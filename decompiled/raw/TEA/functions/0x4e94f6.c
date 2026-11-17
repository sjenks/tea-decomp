// name: GDI32.DLL::CombineRgn
// address: 0x4e94f6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall CombineRgn(HRGN hrgnDst,HRGN hrgnSrc1,HRGN hrgnSrc2,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CombineRgn(hrgnDst,hrgnSrc1,hrgnSrc2,iMode);
  return iVar1;
}

