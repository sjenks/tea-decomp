// name: GDI32.DLL::Escape
// address: 0x4e9574
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall Escape(HDC hdc,int iEscape,int cjIn,LPCSTR pvIn,LPVOID pvOut)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Escape(hdc,iEscape,cjIn,pvIn,pvOut);
  return iVar1;
}

