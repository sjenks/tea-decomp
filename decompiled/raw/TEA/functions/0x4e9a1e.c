// name: USER32.DLL::TabbedTextOutA
// address: 0x4e9a1e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __stdcall
TabbedTextOutA(HDC hdc,int x,int y,LPCSTR lpString,int chCount,int nTabPositions,
              INT *lpnTabStopPositions,int nTabOrigin)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = TabbedTextOutA(hdc,x,y,lpString,chCount,nTabPositions,lpnTabStopPositions,nTabOrigin);
  return LVar1;
}

