// name: USER32.DLL::LoadStringA
// address: 0x473608
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
  return iVar1;
}

