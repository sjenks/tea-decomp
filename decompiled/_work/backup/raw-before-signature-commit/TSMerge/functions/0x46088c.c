// name: USER32.DLL::MapWindowPoints
// address: 0x46088c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}

