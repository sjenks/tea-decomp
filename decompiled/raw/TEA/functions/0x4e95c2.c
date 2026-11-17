// name: GDI32.DLL::GetTextFaceA
// address: 0x4e95c2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall GetTextFaceA(HDC hdc,int c,LPSTR lpName)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetTextFaceA(hdc,c,lpName);
  return iVar1;
}

