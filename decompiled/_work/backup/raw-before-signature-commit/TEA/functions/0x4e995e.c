// name: USER32.DLL::PeekMessageA
// address: 0x4e995e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e995e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PeekMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
  return BVar1;
}

