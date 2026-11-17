// name: USER32.DLL::CreateWindowExA
// address: 0x47345e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall
CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y,
               int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam
               )

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047345e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateWindowExA(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return pHVar1;
}

