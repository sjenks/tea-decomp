// name: USER32.DLL::LoadImageA
// address: 0x4735fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HANDLE __stdcall LoadImageA(HINSTANCE hInst,LPCSTR name,UINT type,int cx,int cy,UINT fuLoad)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadImageA(hInst,name,type,cx,cy,fuLoad);
  return pvVar1;
}

