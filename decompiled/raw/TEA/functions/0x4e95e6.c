// name: GDI32.DLL::IntersectClipRect
// address: 0x4e95e6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}

